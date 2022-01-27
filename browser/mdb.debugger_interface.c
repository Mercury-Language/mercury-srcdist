/*
** Automatically generated from `debugger_interface.m'
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


/* :- module mdb.debugger_interface. */
/* :- implementation. */

/*
INIT mercury__mdb__debugger_interface__init
ENDINIT
*/

#include "mdb.debugger_interface.mih"
#include "mdb.debugger_interface.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.interactive_query.mih"
#include "mdb.util.mih"
#include "mdbcomp.goal_path.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
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




#line 75 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_0;

#line 78 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0;

#line 81 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0;

#line 84 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0;

#line 87 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0;

#line 90 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0;

#line 93 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_1[12];

#line 96 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1;

#line 99 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_2;

#line 102 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_3;

#line 105 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_4;

#line 108 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5[1];

#line 111 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5;

#line 114 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_6;

#line 117 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_7;

#line 120 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_8;

#line 123 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_9;

#line 126 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_10;

#line 129 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_11;

#line 132 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12[1];

#line 135 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12;

#line 138 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0;

#line 141 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13[1];

#line 144 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13;

#line 147 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14[1];

#line 150 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14;

#line 153 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15[1];

#line 156 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15;

#line 159 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16[1];

#line 162 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16;

#line 165 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17[1];

#line 168 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17;

#line 171 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18[1];

#line 174 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18;

#line 177 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_19;

#line 180 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_20;

#line 183 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_21;

#line 186 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_22;

#line 189 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_0[14];

#line 192 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_1[1];

#line 195 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_2[1];

#line 198 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_3[7];

#line 201 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_request_0[4];

#line 204 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_request_0[23];

#line 207 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_request_0[23];

#line 210 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_0;

#line 213 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_1;

#line 216 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_2;

#line 219 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_3;

#line 222 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_4[13];

#line 225 "mdb.debugger_interface.c"
static const MR_DuArgLocn mdb__debugger_interface__mdb__debugger_interface__field_locns_debugger_response_0_4[13];

#line 228 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_4;

#line 231 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_5[13];

#line 234 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5;

#line 237 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_6[2];

#line 240 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_6;

#line 243 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_7[1];

#line 246 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_7;

#line 249 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_8[2];

#line 252 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_8;

#line 255 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_9;

#line 258 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_10;

#line 261 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_11;

#line 264 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_12;

#line 267 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13[1];

#line 270 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_13;

#line 273 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_14[1];

#line 276 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_14;

#line 279 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_15[5];

#line 282 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_15;

#line 285 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_16[4];

#line 288 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_16;

#line 291 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_17[1];

#line 294 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_17;

#line 297 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_18[3];

#line 300 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_18;

#line 303 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_19;

#line 306 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_20;

#line 309 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21[1];

#line 312 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_21;

#line 315 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_22;

#line 318 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_23[3];

#line 321 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_23;

#line 324 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_24;

#line 327 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_25;

#line 330 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_26;

#line 333 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_27;

#line 336 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28[1];

#line 339 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_28;

#line 342 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_29;

#line 345 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_30;

#line 348 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_31;

#line 351 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_32;

#line 354 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_0[19];

#line 357 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_1[1];

#line 360 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_2[1];

#line 363 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_3[12];

#line 366 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_response_0[4];

#line 369 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_response_0[33];

#line 372 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_response_0[33];

#line 375 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0;

#line 378 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1[1];

#line 381 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1;

#line 384 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2[1];

#line 387 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2;

#line 390 "mdb.debugger_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__debugger_interface__list__pti_list_1__pseudo_1;

#line 393 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_3[1];

#line 396 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3;

#line 399 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_4[2];

#line 402 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4;

#line 405 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_0[1];

#line 408 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_1[1];

#line 411 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_2[1];

#line 414 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_3[2];

#line 417 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_match_1[4];

#line 420 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_match_1[5];

#line 423 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_match_1[5];

#line 426 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0;

#line 429 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_0[2];

#line 432 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0;

#line 435 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_1[2];

#line 438 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1;

#line 441 "mdb.debugger_interface.c"
static const MR_DuFunctorDesc mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2;

#line 444 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_0[1];

#line 447 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_1[1];

#line 450 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_2[1];

#line 453 "mdb.debugger_interface.c"
static const MR_DuPtagLayout mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_pred_match_0[3];

#line 456 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_pred_match_0[3];

#line 459 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_pred_match_0[3];

#line 462 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0_10001(
#line 465 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 467 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 470 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0_10001(
#line 473 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 475 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 477 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 480 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0_10001(
#line 483 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 485 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 488 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0_10001(
#line 491 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 493 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 495 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 498 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0_10001(
#line 501 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 503 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 506 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0_10001(
#line 509 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 511 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 513 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 516 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0_10001(
#line 519 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 521 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 524 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0_10001(
#line 527 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 529 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 531 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 534 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0_10001(
#line 537 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 539 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 542 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0_10001(
#line 545 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 547 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 549 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 552 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0_10001(
#line 555 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 557 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 560 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0_10001(
#line 563 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 565 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 567 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 570 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0_10001(
#line 573 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 575 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 578 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0_10001(
#line 581 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 583 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 585 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 588 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0_10001(
#line 591 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 593 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 595 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3);

#line 598 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0_10001(
#line 601 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 603 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_2,
#line 605 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3,
#line 607 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_4);

#line 610 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0_10001(
#line 613 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 615 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2);

#line 618 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0_10001(
#line 621 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 623 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 625 "mdb.debugger_interface.c"
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

#line 196 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0(
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_57,
#line 196 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3);

#line 196 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0(
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_17,
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2);

#line 189 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0(
#line 189 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 189 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 189 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

#line 189 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0(
#line 189 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 189 "debugger_interface.m"
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

#line 191 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0(
#line 191 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 191 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 191 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

#line 191 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0(
#line 191 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 191 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2);

#line 205 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0(
#line 205 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 205 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 205 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3);

#line 205 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Index____debugger_response_0_0(
#line 205 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 205 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__HeadVar__2_2);

#line 205 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0(
#line 205 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 205 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2);

#line 89 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0(
#line 89 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 89 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 89 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3);

#line 89 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Index____debugger_request_0_0(
#line 89 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 89 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__HeadVar__2_2);

#line 89 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0(
#line 89 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 89 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2);

#line 190 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0(
#line 190 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 190 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 190 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3);

#line 190 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0(
#line 190 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 190 "debugger_interface.m"
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

#line 644 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_variable_name_2_p_0(
#line 644 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 644 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4);

#line 633 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__init_mercury_string_1_p_0(
#line 633 "debugger_interface.m"
  MR_String * mdb__debugger_interface__HeadVar__1_1);

#line 620 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_object_file_name_2_p_0(
#line 620 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 620 "debugger_interface.m"
  MR_String * mdb__debugger_interface__ObjectFileName_4);

#line 603 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_mmc_options_2_p_0(
#line 603 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 603 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4);

#line 583 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_list_modules_to_import_3_p_0(
#line 583 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_4,
#line 583 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__ListLength_5,
#line 583 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__ModulesList_6);

#line 552 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__read_request_from_socket_5_p_0(
#line 552 "debugger_interface.m"
  MR_Word mdb__debugger_interface__SocketStream_6,
#line 552 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__Request_7,
#line 552 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__RequestType_8);

#line 507 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__found_match_comp_14_p_0(
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 507 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 507 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_19,
#line 507 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_20,
#line 507 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 507 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 507 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 507 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 507 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28);

#line 490 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__match_2_p_0(
#line 490 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_14,
#line 490 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 490 "debugger_interface.m"
  MR_Box mdb__debugger_interface__HeadVar__2_2);

#line 445 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__found_match_user_14_p_0(
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 445 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 445 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_19,
#line 445 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_20,
#line 445 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 445 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 445 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 445 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 445 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28);

#line 430 "debugger_interface.m"
static MR_Integer MR_CALL 
mdb__debugger_interface__get_var_number_1_f_0(
#line 430 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3);

#line 411 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_live_var_names_5_p_0(
#line 411 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarNameList_6,
#line 411 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarTypeList_7,
#line 411 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8);

#line 398 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_nth_var_4_p_0(
#line 398 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Var_5,
#line 398 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_6);

#line 383 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_vars_5_p_0(
#line 383 "debugger_interface.m"
  MR_Word mdb__debugger_interface__VarList_6,
#line 383 "debugger_interface.m"
  MR_Word mdb__debugger_interface__StringList_7,
#line 383 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8);

#line 359 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_slots_comp_16_p_0(
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 359 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 359 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_21,
#line 359 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_22,
#line 359 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 359 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 359 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 359 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_30);

#line 333 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_slots_user_16_p_0(
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 333 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 333 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_21,
#line 333 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_22,
#line 333 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 333 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 333 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 333 "debugger_interface.m"
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



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.debugger_interface.mh"

#line 328 "debugger_interface.m"
void 
ML_DI_output_current_slots_user(
#line 328 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 328 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 328 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 328 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 328 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_21,
#line 328 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_22,
#line 328 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 328 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 328 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 328 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 328 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 328 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 328 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 328 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_30)
#line 328 "debugger_interface.m"
{
#line 328 "debugger_interface.m"
	mdb__debugger_interface__output_current_slots_user_16_p_0((MR_Integer) mdb__debugger_interface__EventNumber_17, (MR_Integer) mdb__debugger_interface__CallNumber_18, (MR_Integer) mdb__debugger_interface__DepthNumber_19, (MR_Word) mdb__debugger_interface__Port_20, (MR_Word) mdb__debugger_interface__PredOrFunc_21, (MR_String) mdb__debugger_interface__DeclModuleName_22, (MR_String) mdb__debugger_interface__DefModuleName_23, (MR_String) mdb__debugger_interface__PredName_24, (MR_Integer) mdb__debugger_interface__Arity_25, (MR_Integer) mdb__debugger_interface__ModeNum_26, (MR_Integer) mdb__debugger_interface__Determinism_27, (MR_String) mdb__debugger_interface__Path_28, (MR_Integer) mdb__debugger_interface__LineNo_29, (MR_Word) mdb__debugger_interface__OutputStream_30);
}

#line 354 "debugger_interface.m"
void 
ML_DI_output_current_slots_comp(
#line 354 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 354 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 354 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 354 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 354 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_21,
#line 354 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_22,
#line 354 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 354 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 354 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 354 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 354 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 354 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 354 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 354 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_30)
#line 354 "debugger_interface.m"
{
#line 354 "debugger_interface.m"
	mdb__debugger_interface__output_current_slots_comp_16_p_0((MR_Integer) mdb__debugger_interface__EventNumber_17, (MR_Integer) mdb__debugger_interface__CallNumber_18, (MR_Integer) mdb__debugger_interface__DepthNumber_19, (MR_Word) mdb__debugger_interface__Port_20, (MR_String) mdb__debugger_interface__NameType_21, (MR_String) mdb__debugger_interface__ModuleType_22, (MR_String) mdb__debugger_interface__DefModuleName_23, (MR_String) mdb__debugger_interface__PredName_24, (MR_Integer) mdb__debugger_interface__Arity_25, (MR_Integer) mdb__debugger_interface__ModeNum_26, (MR_Integer) mdb__debugger_interface__Determinism_27, (MR_String) mdb__debugger_interface__Path_28, (MR_Integer) mdb__debugger_interface__LineNo_29, (MR_Word) mdb__debugger_interface__OutputStream_30);
}

#line 380 "debugger_interface.m"
void 
ML_DI_output_current_vars(
#line 380 "debugger_interface.m"
  MR_Word mdb__debugger_interface__VarList_6,
#line 380 "debugger_interface.m"
  MR_Word mdb__debugger_interface__StringList_7,
#line 380 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8)
#line 380 "debugger_interface.m"
{
#line 380 "debugger_interface.m"
	mdb__debugger_interface__output_current_vars_5_p_0((MR_Word) mdb__debugger_interface__VarList_6, (MR_Word) mdb__debugger_interface__StringList_7, (MR_Word) mdb__debugger_interface__OutputStream_8);
}

#line 395 "debugger_interface.m"
void 
ML_DI_output_current_nth_var(
#line 395 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Var_5,
#line 395 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_6)
#line 395 "debugger_interface.m"
{
#line 395 "debugger_interface.m"
	mdb__debugger_interface__output_current_nth_var_4_p_0((MR_Word) mdb__debugger_interface__Var_5, (MR_Word) mdb__debugger_interface__OutputStream_6);
}

#line 407 "debugger_interface.m"
void 
ML_DI_output_current_live_var_names(
#line 407 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarNameList_6,
#line 407 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarTypeList_7,
#line 407 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8)
#line 407 "debugger_interface.m"
{
#line 407 "debugger_interface.m"
	mdb__debugger_interface__output_current_live_var_names_5_p_0((MR_Word) mdb__debugger_interface__LiveVarNameList_6, (MR_Word) mdb__debugger_interface__LiveVarTypeList_7, (MR_Word) mdb__debugger_interface__OutputStream_8);
}

#line 424 "debugger_interface.m"
MR_Integer 
ML_DI_get_var_number(
#line 424 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3)
#line 424 "debugger_interface.m"
{
#line 424 "debugger_interface.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mdb__debugger_interface__get_var_number_1_f_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3);
	return ret_value;
}

#line 441 "debugger_interface.m"
MR_bool 
ML_DI_found_match_user(
#line 441 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 441 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 441 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 441 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 441 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_19,
#line 441 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_20,
#line 441 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 441 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 441 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 441 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 441 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 441 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 441 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 441 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
#line 441 "debugger_interface.m"
{
#line 441 "debugger_interface.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__debugger_interface__found_match_user_14_p_0((MR_Integer) mdb__debugger_interface__EventNumber_15, (MR_Integer) mdb__debugger_interface__CallNumber_16, (MR_Integer) mdb__debugger_interface__DepthNumber_17, (MR_Word) mdb__debugger_interface__Port_18, (MR_Word) mdb__debugger_interface__PredOrFunc_19, (MR_String) mdb__debugger_interface__DeclModuleName_20, (MR_String) mdb__debugger_interface__DefModuleName_21, (MR_String) mdb__debugger_interface__PredName_22, (MR_Integer) mdb__debugger_interface__Arity_23, (MR_Integer) mdb__debugger_interface__ModeNum_24, (MR_Integer) mdb__debugger_interface__Determinism_25, (MR_Word) mdb__debugger_interface__Args_26, (MR_String) mdb__debugger_interface__Path_27, (MR_Word) mdb__debugger_interface__DebuggerRequest_28);
	return ret_value;
}

#line 503 "debugger_interface.m"
MR_bool 
ML_DI_found_match_comp(
#line 503 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 503 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 503 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 503 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 503 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_19,
#line 503 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_20,
#line 503 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 503 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 503 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 503 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 503 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 503 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 503 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 503 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
#line 503 "debugger_interface.m"
{
#line 503 "debugger_interface.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__debugger_interface__found_match_comp_14_p_0((MR_Integer) mdb__debugger_interface__EventNumber_15, (MR_Integer) mdb__debugger_interface__CallNumber_16, (MR_Integer) mdb__debugger_interface__DepthNumber_17, (MR_Word) mdb__debugger_interface__Port_18, (MR_String) mdb__debugger_interface__NameType_19, (MR_String) mdb__debugger_interface__ModuleType_20, (MR_String) mdb__debugger_interface__DefModuleName_21, (MR_String) mdb__debugger_interface__PredName_22, (MR_Integer) mdb__debugger_interface__Arity_23, (MR_Integer) mdb__debugger_interface__ModeNum_24, (MR_Integer) mdb__debugger_interface__Determinism_25, (MR_Word) mdb__debugger_interface__Args_26, (MR_String) mdb__debugger_interface__Path_27, (MR_Word) mdb__debugger_interface__DebuggerRequest_28);
	return ret_value;
}

#line 555 "debugger_interface.m"
void 
ML_DI_read_request_from_socket(
#line 555 "debugger_interface.m"
  MR_Word mdb__debugger_interface__SocketStream_6,
#line 555 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__Request_7,
#line 555 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__RequestType_8)
#line 555 "debugger_interface.m"
{
#line 555 "debugger_interface.m"
	mdb__debugger_interface__read_request_from_socket_5_p_0((MR_Word) mdb__debugger_interface__SocketStream_6, (MR_Word *) mdb__debugger_interface__Request_7, (MR_Integer *) mdb__debugger_interface__RequestType_8);
}

#line 586 "debugger_interface.m"
void 
ML_DI_get_list_modules_to_import(
#line 586 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_4,
#line 586 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__ListLength_5,
#line 586 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__ModulesList_6)
#line 586 "debugger_interface.m"
{
#line 586 "debugger_interface.m"
	mdb__debugger_interface__get_list_modules_to_import_3_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_4, (MR_Integer *) mdb__debugger_interface__ListLength_5, (MR_Word *) mdb__debugger_interface__ModulesList_6);
}

#line 604 "debugger_interface.m"
void 
ML_DI_get_mmc_options(
#line 604 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 604 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4)
#line 604 "debugger_interface.m"
{
#line 604 "debugger_interface.m"
	mdb__debugger_interface__get_mmc_options_2_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3, (MR_String *) mdb__debugger_interface__Options_4);
}

#line 621 "debugger_interface.m"
void 
ML_DI_get_object_file_name(
#line 621 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 621 "debugger_interface.m"
  MR_String * mdb__debugger_interface__ObjectFileName_4)
#line 621 "debugger_interface.m"
{
#line 621 "debugger_interface.m"
	mdb__debugger_interface__get_object_file_name_2_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3, (MR_String *) mdb__debugger_interface__ObjectFileName_4);
}

#line 634 "debugger_interface.m"
void 
ML_DI_init_mercury_string(
#line 634 "debugger_interface.m"
  MR_String * mdb__debugger_interface__HeadVar__1_1)
#line 634 "debugger_interface.m"
{
#line 634 "debugger_interface.m"
	mdb__debugger_interface__init_mercury_string_1_p_0((MR_String *) mdb__debugger_interface__HeadVar__1_1);
}

#line 645 "debugger_interface.m"
void 
ML_DI_get_variable_name(
#line 645 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 645 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4)
#line 645 "debugger_interface.m"
{
#line 645 "debugger_interface.m"
	mdb__debugger_interface__get_variable_name_2_p_0((MR_Word) mdb__debugger_interface__DebuggerRequest_3, (MR_String *) mdb__debugger_interface__Options_4);
}


#line 1378 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_arity_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____arity_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____arity_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "arity",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1395 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_call_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____call_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____call_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "call_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1412 "mdb.debugger_interface.c"
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

#line 1427 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_int_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1435 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_trace_port_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0
  }
};

#line 1443 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1451 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
  }
};

#line 1459 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0
  }
};

#line 1467 "mdb.debugger_interface.c"
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

#line 1483 "mdb.debugger_interface.c"
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

#line 1498 "mdb.debugger_interface.c"
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

#line 1513 "mdb.debugger_interface.c"
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

#line 1528 "mdb.debugger_interface.c"
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

#line 1543 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1548 "mdb.debugger_interface.c"
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

#line 1563 "mdb.debugger_interface.c"
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

#line 1578 "mdb.debugger_interface.c"
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

#line 1593 "mdb.debugger_interface.c"
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

#line 1608 "mdb.debugger_interface.c"
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

#line 1623 "mdb.debugger_interface.c"
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

#line 1638 "mdb.debugger_interface.c"
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

#line 1653 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_12[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1658 "mdb.debugger_interface.c"
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

#line 1673 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

#line 1681 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_13[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1686 "mdb.debugger_interface.c"
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

#line 1701 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_14[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1706 "mdb.debugger_interface.c"
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

#line 1721 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_15[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 1726 "mdb.debugger_interface.c"
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

#line 1741 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_16[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1746 "mdb.debugger_interface.c"
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

#line 1761 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1766 "mdb.debugger_interface.c"
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

#line 1781 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_request_0_18[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 1786 "mdb.debugger_interface.c"
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

#line 1801 "mdb.debugger_interface.c"
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

#line 1816 "mdb.debugger_interface.c"
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

#line 1831 "mdb.debugger_interface.c"
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

#line 1846 "mdb.debugger_interface.c"
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

#line 1861 "mdb.debugger_interface.c"
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

#line 1879 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_1
};

#line 1884 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_5
};

#line 1889 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_request_0_3[7] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_12,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_13,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_14,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_15,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_16,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_17,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_request_0_18
};

#line 1900 "mdb.debugger_interface.c"
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

#line 1924 "mdb.debugger_interface.c"
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

#line 1951 "mdb.debugger_interface.c"
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

#line 1978 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_request_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____debugger_request_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____debugger_request_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "debugger_request",
  {     mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_request_0 },
  {     mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_request_0 },
  (MR_Integer) 23,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_request_0
};

#line 1995 "mdb.debugger_interface.c"
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

#line 2010 "mdb.debugger_interface.c"
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

#line 2025 "mdb.debugger_interface.c"
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

#line 2040 "mdb.debugger_interface.c"
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

#line 2055 "mdb.debugger_interface.c"
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

#line 2072 "mdb.debugger_interface.c"
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

#line 2141 "mdb.debugger_interface.c"
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

#line 2156 "mdb.debugger_interface.c"
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

#line 2173 "mdb.debugger_interface.c"
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

#line 2188 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_6[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1univ__type_ctor_info_univ_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 2194 "mdb.debugger_interface.c"
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

#line 2209 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__univ__univ__type_ctor_info_univ_0
};

#line 2214 "mdb.debugger_interface.c"
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

#line 2229 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_8[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__ti_list_1builtin__type_ctor_info_string_0
};

#line 2235 "mdb.debugger_interface.c"
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

#line 2250 "mdb.debugger_interface.c"
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

#line 2265 "mdb.debugger_interface.c"
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

#line 2280 "mdb.debugger_interface.c"
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

#line 2295 "mdb.debugger_interface.c"
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

#line 2310 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_13[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2315 "mdb.debugger_interface.c"
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

#line 2330 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_14[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2335 "mdb.debugger_interface.c"
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

#line 2350 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_15[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2359 "mdb.debugger_interface.c"
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

#line 2374 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_16[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2382 "mdb.debugger_interface.c"
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

#line 2397 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_17[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2402 "mdb.debugger_interface.c"
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

#line 2417 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_18[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2424 "mdb.debugger_interface.c"
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

#line 2439 "mdb.debugger_interface.c"
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

#line 2454 "mdb.debugger_interface.c"
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

#line 2469 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_21[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2474 "mdb.debugger_interface.c"
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

#line 2489 "mdb.debugger_interface.c"
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

#line 2504 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_23[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2511 "mdb.debugger_interface.c"
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

#line 2526 "mdb.debugger_interface.c"
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

#line 2541 "mdb.debugger_interface.c"
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

#line 2556 "mdb.debugger_interface.c"
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

#line 2571 "mdb.debugger_interface.c"
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

#line 2586 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_debugger_response_0_28[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2591 "mdb.debugger_interface.c"
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

#line 2606 "mdb.debugger_interface.c"
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

#line 2621 "mdb.debugger_interface.c"
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

#line 2636 "mdb.debugger_interface.c"
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

#line 2651 "mdb.debugger_interface.c"
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

#line 2666 "mdb.debugger_interface.c"
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

#line 2689 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_4
};

#line 2694 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_debugger_response_0_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_debugger_response_0_5
};

#line 2699 "mdb.debugger_interface.c"
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

#line 2715 "mdb.debugger_interface.c"
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

#line 2739 "mdb.debugger_interface.c"
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

#line 2776 "mdb.debugger_interface.c"
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

#line 2813 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____debugger_response_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____debugger_response_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "debugger_response",
  {     mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_debugger_response_0 },
  {     mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_debugger_response_0 },
  (MR_Integer) 33,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_debugger_response_0
};

#line 2830 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_depth_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____depth_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____depth_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "depth_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2847 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_determinism_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____determinism_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____determinism_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "determinism",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2864 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_event_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__debugger_interface____Unify____event_number_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____event_number_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "event_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2881 "mdb.debugger_interface.c"
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

#line 2896 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_1[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2901 "mdb.debugger_interface.c"
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

#line 2916 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2921 "mdb.debugger_interface.c"
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

#line 2936 "mdb.debugger_interface.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__debugger_interface__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2944 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_3[1] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__list__pti_list_1__pseudo_1
};

#line 2949 "mdb.debugger_interface.c"
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

#line 2964 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_match_1_4[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2970 "mdb.debugger_interface.c"
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

#line 2985 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_0[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0
};

#line 2990 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1
};

#line 2995 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2
};

#line 3000 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_match_1_3[2] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4
};

#line 3006 "mdb.debugger_interface.c"
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

#line 3030 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_match_1[5] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_1,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_4,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_3,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_match_1_0
};

#line 3039 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_match_1[5] = {
  (MR_Integer) 4,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 1
};

#line 3048 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____match_1_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____match_1_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "match",
  {     mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_match_1 },
  {     mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_match_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_match_1
};

#line 3065 "mdb.debugger_interface.c"
static const MR_FA_TypeInfo_Struct1 mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0 = {
  &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_match_1,
  {
    (MR_TypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0
  }
};

#line 3073 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1mdbcomp__prim_data__type_ctor_info_pred_or_func_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0
};

#line 3079 "mdb.debugger_interface.c"
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

#line 3094 "mdb.debugger_interface.c"
static const MR_PseudoTypeInfo mdb__debugger_interface__mdb__debugger_interface__field_types_pred_match_0_1[2] = {
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mdb__debugger_interface__mdb__debugger_interface__ti_match_1builtin__type_ctor_info_string_0
};

#line 3100 "mdb.debugger_interface.c"
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

#line 3115 "mdb.debugger_interface.c"
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

#line 3130 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_0[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2
};

#line 3135 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_1[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0
};

#line 3140 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_stag_ordered_pred_match_0_2[1] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1
};

#line 3145 "mdb.debugger_interface.c"
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

#line 3164 "mdb.debugger_interface.c"
static const MR_DuFunctorDescPtr mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_pred_match_0[3] = {
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_2,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_1,
  &mdb__debugger_interface__mdb__debugger_interface__du_functor_desc_pred_match_0_0
};

#line 3171 "mdb.debugger_interface.c"
static const MR_Integer mdb__debugger_interface__mdb__debugger_interface__functor_number_map_pred_match_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3178 "mdb.debugger_interface.c"
const MR_TypeCtorInfo_Struct mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_pred_match_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__debugger_interface____Unify____pred_match_0_0_10001)),
  ((MR_Box) (mdb__debugger_interface____Compare____pred_match_0_0_10001)),
  (MR_String) "mdb.debugger_interface",
  (MR_String) "pred_match",
  {     mdb__debugger_interface__mdb__debugger_interface__du_name_ordered_pred_match_0 },
  {     mdb__debugger_interface__mdb__debugger_interface__du_ptag_ordered_pred_match_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__debugger_interface__mdb__debugger_interface__functor_number_map_pred_match_0
};

#line 3195 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____arity_0_0_10001(
#line 3198 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3200 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3202 "mdb.debugger_interface.c"
{
#line 3204 "mdb.debugger_interface.c"
  {
#line 3206 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3209 "mdb.debugger_interface.c"
    {
#line 3211 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____arity_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3214 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3216 "mdb.debugger_interface.c"
  }
#line 3218 "mdb.debugger_interface.c"
}

#line 3221 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____arity_0_0_10001(
#line 3224 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3226 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3228 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3230 "mdb.debugger_interface.c"
{
#line 3232 "mdb.debugger_interface.c"
  {
#line 3234 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3237 "mdb.debugger_interface.c"
    {
#line 3239 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____arity_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3242 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3244 "mdb.debugger_interface.c"
  }
#line 3246 "mdb.debugger_interface.c"
}

#line 3249 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0_10001(
#line 3252 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3254 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3256 "mdb.debugger_interface.c"
{
#line 3258 "mdb.debugger_interface.c"
  {
#line 3260 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3263 "mdb.debugger_interface.c"
    {
#line 3265 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____call_number_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3268 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3270 "mdb.debugger_interface.c"
  }
#line 3272 "mdb.debugger_interface.c"
}

#line 3275 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0_10001(
#line 3278 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3280 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3282 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3284 "mdb.debugger_interface.c"
{
#line 3286 "mdb.debugger_interface.c"
  {
#line 3288 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3291 "mdb.debugger_interface.c"
    {
#line 3293 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____call_number_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3296 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3298 "mdb.debugger_interface.c"
  }
#line 3300 "mdb.debugger_interface.c"
}

#line 3303 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0_10001(
#line 3306 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3308 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3310 "mdb.debugger_interface.c"
{
#line 3312 "mdb.debugger_interface.c"
  {
#line 3314 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3317 "mdb.debugger_interface.c"
    {
#line 3319 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____debugger_request_0_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3322 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3324 "mdb.debugger_interface.c"
  }
#line 3326 "mdb.debugger_interface.c"
}

#line 3329 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0_10001(
#line 3332 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3334 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3336 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3338 "mdb.debugger_interface.c"
{
#line 3340 "mdb.debugger_interface.c"
  {
#line 3342 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3345 "mdb.debugger_interface.c"
    {
#line 3347 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____debugger_request_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3350 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3352 "mdb.debugger_interface.c"
  }
#line 3354 "mdb.debugger_interface.c"
}

#line 3357 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0_10001(
#line 3360 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3362 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3364 "mdb.debugger_interface.c"
{
#line 3366 "mdb.debugger_interface.c"
  {
#line 3368 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3371 "mdb.debugger_interface.c"
    {
#line 3373 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____debugger_response_0_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3376 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3378 "mdb.debugger_interface.c"
  }
#line 3380 "mdb.debugger_interface.c"
}

#line 3383 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0_10001(
#line 3386 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3388 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3390 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3392 "mdb.debugger_interface.c"
{
#line 3394 "mdb.debugger_interface.c"
  {
#line 3396 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3399 "mdb.debugger_interface.c"
    {
#line 3401 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____debugger_response_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3404 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3406 "mdb.debugger_interface.c"
  }
#line 3408 "mdb.debugger_interface.c"
}

#line 3411 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0_10001(
#line 3414 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3416 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3418 "mdb.debugger_interface.c"
{
#line 3420 "mdb.debugger_interface.c"
  {
#line 3422 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3425 "mdb.debugger_interface.c"
    {
#line 3427 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____depth_number_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3430 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3432 "mdb.debugger_interface.c"
  }
#line 3434 "mdb.debugger_interface.c"
}

#line 3437 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0_10001(
#line 3440 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3442 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3444 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3446 "mdb.debugger_interface.c"
{
#line 3448 "mdb.debugger_interface.c"
  {
#line 3450 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3453 "mdb.debugger_interface.c"
    {
#line 3455 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____depth_number_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3458 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3460 "mdb.debugger_interface.c"
  }
#line 3462 "mdb.debugger_interface.c"
}

#line 3465 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____determinism_0_0_10001(
#line 3468 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3470 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3472 "mdb.debugger_interface.c"
{
#line 3474 "mdb.debugger_interface.c"
  {
#line 3476 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3479 "mdb.debugger_interface.c"
    {
#line 3481 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____determinism_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3484 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3486 "mdb.debugger_interface.c"
  }
#line 3488 "mdb.debugger_interface.c"
}

#line 3491 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____determinism_0_0_10001(
#line 3494 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3496 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3498 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3500 "mdb.debugger_interface.c"
{
#line 3502 "mdb.debugger_interface.c"
  {
#line 3504 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3507 "mdb.debugger_interface.c"
    {
#line 3509 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____determinism_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3512 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3514 "mdb.debugger_interface.c"
  }
#line 3516 "mdb.debugger_interface.c"
}

#line 3519 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0_10001(
#line 3522 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3524 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3526 "mdb.debugger_interface.c"
{
#line 3528 "mdb.debugger_interface.c"
  {
#line 3530 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3533 "mdb.debugger_interface.c"
    {
#line 3535 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____event_number_0_0(((MR_Integer) mdb__debugger_interface__wrapper_arg_1), ((MR_Integer) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3538 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3540 "mdb.debugger_interface.c"
  }
#line 3542 "mdb.debugger_interface.c"
}

#line 3545 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0_10001(
#line 3548 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3550 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3552 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3554 "mdb.debugger_interface.c"
{
#line 3556 "mdb.debugger_interface.c"
  {
#line 3558 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3561 "mdb.debugger_interface.c"
    {
#line 3563 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____event_number_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Integer) mdb__debugger_interface__wrapper_arg_2), ((MR_Integer) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3566 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3568 "mdb.debugger_interface.c"
  }
#line 3570 "mdb.debugger_interface.c"
}

#line 3573 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0_10001(
#line 3576 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3578 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3580 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3582 "mdb.debugger_interface.c"
{
#line 3584 "mdb.debugger_interface.c"
  {
#line 3586 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3589 "mdb.debugger_interface.c"
    {
#line 3591 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3594 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3596 "mdb.debugger_interface.c"
  }
#line 3598 "mdb.debugger_interface.c"
}

#line 3601 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0_10001(
#line 3604 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3606 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_2,
#line 3608 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3,
#line 3610 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_4)
#line 3612 "mdb.debugger_interface.c"
{
#line 3614 "mdb.debugger_interface.c"
  {
#line 3616 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3619 "mdb.debugger_interface.c"
    {
#line 3621 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____match_1_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), &mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_3), ((MR_Word) mdb__debugger_interface__wrapper_arg_4));
    }
#line 3624 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_2 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3626 "mdb.debugger_interface.c"
  }
#line 3628 "mdb.debugger_interface.c"
}

#line 3631 "mdb.debugger_interface.c"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____pred_match_0_0_10001(
#line 3634 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_1,
#line 3636 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2)
#line 3638 "mdb.debugger_interface.c"
{
#line 3640 "mdb.debugger_interface.c"
  {
#line 3642 "mdb.debugger_interface.c"
    MR_bool mdb__debugger_interface__succeeded;

#line 3645 "mdb.debugger_interface.c"
    {
#line 3647 "mdb.debugger_interface.c"
      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____pred_match_0_0(((MR_Word) mdb__debugger_interface__wrapper_arg_1), ((MR_Word) mdb__debugger_interface__wrapper_arg_2));
    }
#line 3650 "mdb.debugger_interface.c"
    return mdb__debugger_interface__succeeded;
#line 3652 "mdb.debugger_interface.c"
  }
#line 3654 "mdb.debugger_interface.c"
}

#line 3657 "mdb.debugger_interface.c"
static void MR_CALL 
mdb__debugger_interface____Compare____pred_match_0_0_10001(
#line 3660 "mdb.debugger_interface.c"
  MR_Box * mdb__debugger_interface__wrapper_arg_1,
#line 3662 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_2,
#line 3664 "mdb.debugger_interface.c"
  MR_Box mdb__debugger_interface__wrapper_arg_3)
#line 3666 "mdb.debugger_interface.c"
{
#line 3668 "mdb.debugger_interface.c"
  {
#line 3670 "mdb.debugger_interface.c"
    MR_Word mdb__debugger_interface__conv0_HeadVar__1_1;

#line 3673 "mdb.debugger_interface.c"
    {
#line 3675 "mdb.debugger_interface.c"
      mdb__debugger_interface____Compare____pred_match_0_0(&mdb__debugger_interface__conv0_HeadVar__1_1, ((MR_Word) mdb__debugger_interface__wrapper_arg_2), ((MR_Word) mdb__debugger_interface__wrapper_arg_3));
    }
#line 3678 "mdb.debugger_interface.c"
    *mdb__debugger_interface__wrapper_arg_1 = ((MR_Box) (mdb__debugger_interface__conv0_HeadVar__1_1));
#line 3680 "mdb.debugger_interface.c"
  }
#line 3682 "mdb.debugger_interface.c"
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
#line 3709 "mdb.debugger_interface.c"
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "debugger_interface.m"
    else
#line 68 "debugger_interface.m"
#line 68 "debugger_interface.m"
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) {
#line 68 "debugger_interface.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 68 "debugger_interface.m"
        case (MR_Integer) 0:
#line 68 "debugger_interface.m"
#line 68 "debugger_interface.m"
          switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
#line 68 "debugger_interface.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 68 "debugger_interface.m"
            case (MR_Integer) 0:
#line 68 "debugger_interface.m"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 68 "debugger_interface.m"
              break;
#line 68 "debugger_interface.m"
            case (MR_Integer) 1:
#line 3733 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "debugger_interface.m"
              break;
#line 68 "debugger_interface.m"
            case (MR_Integer) 2:
#line 3739 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "debugger_interface.m"
              break;
#line 68 "debugger_interface.m"
          }
#line 68 "debugger_interface.m"
          break;
#line 68 "debugger_interface.m"
        case (MR_Integer) 1:
#line 68 "debugger_interface.m"
          {
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));

#line 68 "debugger_interface.m"
#line 68 "debugger_interface.m"
            switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
#line 68 "debugger_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 68 "debugger_interface.m"
              case (MR_Integer) 0:
#line 3763 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "debugger_interface.m"
                break;
#line 68 "debugger_interface.m"
              case (MR_Integer) 1:
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
#line 3783 "mdb.debugger_interface.c"
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
                      }
#line 68 "debugger_interface.m"
                    }
#line 68 "debugger_interface.m"
                }
#line 68 "debugger_interface.m"
                break;
#line 68 "debugger_interface.m"
              case (MR_Integer) 2:
#line 3808 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "debugger_interface.m"
                break;
#line 68 "debugger_interface.m"
            }
#line 68 "debugger_interface.m"
          }
#line 68 "debugger_interface.m"
          break;
#line 68 "debugger_interface.m"
        case (MR_Integer) 2:
#line 68 "debugger_interface.m"
          {
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 68 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));

#line 68 "debugger_interface.m"
#line 68 "debugger_interface.m"
            switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
#line 68 "debugger_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 68 "debugger_interface.m"
              case (MR_Integer) 0:
#line 3834 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 68 "debugger_interface.m"
                break;
#line 68 "debugger_interface.m"
              case (MR_Integer) 1:
#line 3840 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 68 "debugger_interface.m"
                break;
#line 68 "debugger_interface.m"
              case (MR_Integer) 2:
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
#line 3860 "mdb.debugger_interface.c"
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
                      }
#line 68 "debugger_interface.m"
                    }
#line 68 "debugger_interface.m"
                }
#line 68 "debugger_interface.m"
                break;
#line 68 "debugger_interface.m"
            }
#line 68 "debugger_interface.m"
          }
#line 68 "debugger_interface.m"
          break;
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
#line 68 "debugger_interface.m"
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
#line 68 "debugger_interface.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 68 "debugger_interface.m"
        case (MR_Integer) 0:
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
          break;
#line 68 "debugger_interface.m"
        case (MR_Integer) 1:
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
#line 3969 "mdb.debugger_interface.c"
                mdb__debugger_interface__TypeCtorInfo_17_17 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0;
#line 3971 "mdb.debugger_interface.c"
                {
#line 3973 "mdb.debugger_interface.c"
                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_17_17, mdb__debugger_interface__V_3_3, mdb__debugger_interface__V_5_5);
                }
#line 68 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 68 "debugger_interface.m"
                  {
#line 3980 "mdb.debugger_interface.c"
                    mdb__debugger_interface__TypeCtorInfo_18_18 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 3982 "mdb.debugger_interface.c"
                    {
#line 3984 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_18_18, mdb__debugger_interface__V_4_4, mdb__debugger_interface__V_6_6);
                    }
#line 68 "debugger_interface.m"
                  }
#line 68 "debugger_interface.m"
              }
#line 68 "debugger_interface.m"
          }
#line 68 "debugger_interface.m"
          break;
#line 68 "debugger_interface.m"
        case (MR_Integer) 2:
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
#line 4022 "mdb.debugger_interface.c"
                mdb__debugger_interface__TypeCtorInfo_15_15 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4024 "mdb.debugger_interface.c"
                {
#line 4026 "mdb.debugger_interface.c"
                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_15_15, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_9_9);
                }
#line 68 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 68 "debugger_interface.m"
                  {
#line 4033 "mdb.debugger_interface.c"
                    mdb__debugger_interface__TypeCtorInfo_16_16 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 4035 "mdb.debugger_interface.c"
                    {
#line 4037 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_16_16, mdb__debugger_interface__V_8_8, mdb__debugger_interface__V_10_10);
                    }
#line 68 "debugger_interface.m"
                  }
#line 68 "debugger_interface.m"
              }
#line 68 "debugger_interface.m"
          }
#line 68 "debugger_interface.m"
          break;
#line 68 "debugger_interface.m"
      }
#line 68 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 68 "debugger_interface.m"
  }
#line 68 "debugger_interface.m"
}

#line 196 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____match_1_0(
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_57,
#line 196 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3)
#line 196 "debugger_interface.m"
{
#line 196 "debugger_interface.m"
  {
#line 196 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 196 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_55 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;
#line 196 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_56 = (MR_Integer) mdb__debugger_interface__HeadVar__3_3;

#line 196 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_55 == mdb__debugger_interface__CastY_56);
#line 196 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 4083 "mdb.debugger_interface.c"
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 196 "debugger_interface.m"
    else
#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) {
#line 196 "debugger_interface.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
        case (MR_Integer) 0:
#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
          switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
#line 196 "debugger_interface.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
            case (MR_Integer) 0:
#line 196 "debugger_interface.m"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 196 "debugger_interface.m"
              break;
#line 196 "debugger_interface.m"
            case (MR_Integer) 1:
#line 4107 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "debugger_interface.m"
              break;
#line 196 "debugger_interface.m"
            case (MR_Integer) 2:
#line 4113 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "debugger_interface.m"
              break;
#line 196 "debugger_interface.m"
            case (MR_Integer) 3:
#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) {
#line 196 "debugger_interface.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
                case (MR_Integer) 0:
#line 4126 "mdb.debugger_interface.c"
                  *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "debugger_interface.m"
                  break;
#line 196 "debugger_interface.m"
                case (MR_Integer) 1:
#line 4132 "mdb.debugger_interface.c"
                  *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "debugger_interface.m"
                  break;
#line 196 "debugger_interface.m"
              }
#line 196 "debugger_interface.m"
              break;
#line 196 "debugger_interface.m"
          }
#line 196 "debugger_interface.m"
          break;
#line 196 "debugger_interface.m"
        case (MR_Integer) 1:
#line 196 "debugger_interface.m"
          {
#line 196 "debugger_interface.m"
            MR_Box mdb__debugger_interface__V_60_60 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));

#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
            switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
#line 196 "debugger_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
              case (MR_Integer) 0:
#line 4158 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "debugger_interface.m"
                break;
#line 196 "debugger_interface.m"
              case (MR_Integer) 1:
#line 196 "debugger_interface.m"
                {
#line 196 "debugger_interface.m"
                  MR_Box mdb__debugger_interface__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0));

#line 196 "debugger_interface.m"
                  {
#line 196 "debugger_interface.m"
                    mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_60_60, mdb__debugger_interface__V_11_11);
                  }
#line 196 "debugger_interface.m"
                }
#line 196 "debugger_interface.m"
                break;
#line 196 "debugger_interface.m"
              case (MR_Integer) 2:
#line 4180 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "debugger_interface.m"
                break;
#line 196 "debugger_interface.m"
              case (MR_Integer) 3:
#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) {
#line 196 "debugger_interface.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
                  case (MR_Integer) 0:
#line 4193 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                  case (MR_Integer) 1:
#line 4199 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                }
#line 196 "debugger_interface.m"
                break;
#line 196 "debugger_interface.m"
            }
#line 196 "debugger_interface.m"
          }
#line 196 "debugger_interface.m"
          break;
#line 196 "debugger_interface.m"
        case (MR_Integer) 2:
#line 196 "debugger_interface.m"
          {
#line 196 "debugger_interface.m"
            MR_Box mdb__debugger_interface__V_64_64 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));

#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
            switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
#line 196 "debugger_interface.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
              case (MR_Integer) 0:
#line 4227 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "debugger_interface.m"
                break;
#line 196 "debugger_interface.m"
              case (MR_Integer) 1:
#line 4233 "mdb.debugger_interface.c"
                *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "debugger_interface.m"
                break;
#line 196 "debugger_interface.m"
              case (MR_Integer) 2:
#line 196 "debugger_interface.m"
                {
#line 196 "debugger_interface.m"
                  MR_Box mdb__debugger_interface__V_23_23 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0));

#line 196 "debugger_interface.m"
                  {
#line 196 "debugger_interface.m"
                    mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_64_64, mdb__debugger_interface__V_23_23);
                  }
#line 196 "debugger_interface.m"
                }
#line 196 "debugger_interface.m"
                break;
#line 196 "debugger_interface.m"
              case (MR_Integer) 3:
#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) {
#line 196 "debugger_interface.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
                  case (MR_Integer) 0:
#line 4262 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                  case (MR_Integer) 1:
#line 4268 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                }
#line 196 "debugger_interface.m"
                break;
#line 196 "debugger_interface.m"
            }
#line 196 "debugger_interface.m"
          }
#line 196 "debugger_interface.m"
          break;
#line 196 "debugger_interface.m"
        case (MR_Integer) 3:
#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) {
#line 196 "debugger_interface.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
            case (MR_Integer) 0:
#line 196 "debugger_interface.m"
              {
#line 196 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));

#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
                switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
#line 196 "debugger_interface.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
                  case (MR_Integer) 0:
#line 4303 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                  case (MR_Integer) 1:
#line 4309 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                  case (MR_Integer) 2:
#line 4315 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                  case (MR_Integer) 3:
#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) {
#line 196 "debugger_interface.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
                      case (MR_Integer) 0:
#line 196 "debugger_interface.m"
                        {
#line 196 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));

#line 196 "debugger_interface.m"
                          {
#line 196 "debugger_interface.m"
                            mercury__list____Compare____list_1_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_63_63, mdb__debugger_interface__V_35_35);
                          }
#line 196 "debugger_interface.m"
                        }
#line 196 "debugger_interface.m"
                        break;
#line 196 "debugger_interface.m"
                      case (MR_Integer) 1:
#line 4344 "mdb.debugger_interface.c"
                        *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 196 "debugger_interface.m"
                        break;
#line 196 "debugger_interface.m"
                    }
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                }
#line 196 "debugger_interface.m"
              }
#line 196 "debugger_interface.m"
              break;
#line 196 "debugger_interface.m"
            case (MR_Integer) 1:
#line 196 "debugger_interface.m"
              {
#line 196 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2));
#line 196 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_62_62 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1));

#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
                switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) {
#line 196 "debugger_interface.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
                  case (MR_Integer) 0:
#line 4374 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                  case (MR_Integer) 1:
#line 4380 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                  case (MR_Integer) 2:
#line 4386 "mdb.debugger_interface.c"
                    *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                  case (MR_Integer) 3:
#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) {
#line 196 "debugger_interface.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
                      case (MR_Integer) 0:
#line 4399 "mdb.debugger_interface.c"
                        *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 196 "debugger_interface.m"
                        break;
#line 196 "debugger_interface.m"
                      case (MR_Integer) 1:
#line 196 "debugger_interface.m"
                        {
#line 196 "debugger_interface.m"
                          MR_Box mdb__debugger_interface__V_52_52 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1));
#line 196 "debugger_interface.m"
                          MR_Box mdb__debugger_interface__V_53_53 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2));
#line 196 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_54_54;

#line 196 "debugger_interface.m"
                          {
#line 196 "debugger_interface.m"
                            mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, &mdb__debugger_interface__V_54_54, mdb__debugger_interface__V_62_62, mdb__debugger_interface__V_52_52);
                          }
#line 4419 "mdb.debugger_interface.c"
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_54_54 == (MR_Integer) 0);
#line 196 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 196 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 196 "debugger_interface.m"
                            *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_54_54;
#line 196 "debugger_interface.m"
                          else
#line 196 "debugger_interface.m"
                            {
#line 196 "debugger_interface.m"
                              mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_57, mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__V_61_61, mdb__debugger_interface__V_53_53);
                            }
#line 196 "debugger_interface.m"
                        }
#line 196 "debugger_interface.m"
                        break;
#line 196 "debugger_interface.m"
                    }
#line 196 "debugger_interface.m"
                    break;
#line 196 "debugger_interface.m"
                }
#line 196 "debugger_interface.m"
              }
#line 196 "debugger_interface.m"
              break;
#line 196 "debugger_interface.m"
          }
#line 196 "debugger_interface.m"
          break;
#line 196 "debugger_interface.m"
      }
#line 196 "debugger_interface.m"
  }
#line 196 "debugger_interface.m"
}

#line 196 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____match_1_0(
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_17,
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 196 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2)
#line 196 "debugger_interface.m"
{
#line 196 "debugger_interface.m"
  {
#line 196 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 196 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_15 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 196 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_16 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 196 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_15 == mdb__debugger_interface__CastY_16);
#line 196 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 196 "debugger_interface.m"
      mdb__debugger_interface__succeeded = MR_TRUE;
#line 196 "debugger_interface.m"
    else
#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
#line 196 "debugger_interface.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
        case (MR_Integer) 0:
#line 196 "debugger_interface.m"
          {
#line 196 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__CastX_3 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 196 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__CastY_4 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 196 "debugger_interface.m"
            mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_4 == mdb__debugger_interface__CastX_3);
#line 196 "debugger_interface.m"
          }
#line 196 "debugger_interface.m"
          break;
#line 196 "debugger_interface.m"
        case (MR_Integer) 1:
#line 196 "debugger_interface.m"
          {
#line 196 "debugger_interface.m"
            MR_Box mdb__debugger_interface__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));
#line 196 "debugger_interface.m"
            MR_Box mdb__debugger_interface__V_6_6;

#line 196 "debugger_interface.m"
            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 196 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 196 "debugger_interface.m"
              {
#line 196 "debugger_interface.m"
                mdb__debugger_interface__V_6_6 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));
#line 4524 "mdb.debugger_interface.c"
                {
#line 4526 "mdb.debugger_interface.c"
                  mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_5_5, mdb__debugger_interface__V_6_6);
                }
#line 196 "debugger_interface.m"
              }
#line 196 "debugger_interface.m"
          }
#line 196 "debugger_interface.m"
          break;
#line 196 "debugger_interface.m"
        case (MR_Integer) 2:
#line 196 "debugger_interface.m"
          {
#line 196 "debugger_interface.m"
            MR_Box mdb__debugger_interface__V_7_7 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));
#line 196 "debugger_interface.m"
            MR_Box mdb__debugger_interface__V_8_8;

#line 196 "debugger_interface.m"
            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 196 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 196 "debugger_interface.m"
              {
#line 196 "debugger_interface.m"
                mdb__debugger_interface__V_8_8 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0));
#line 4552 "mdb.debugger_interface.c"
                {
#line 4554 "mdb.debugger_interface.c"
                  mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_8_8);
                }
#line 196 "debugger_interface.m"
              }
#line 196 "debugger_interface.m"
          }
#line 196 "debugger_interface.m"
          break;
#line 196 "debugger_interface.m"
        case (MR_Integer) 3:
#line 196 "debugger_interface.m"
#line 196 "debugger_interface.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
#line 196 "debugger_interface.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 196 "debugger_interface.m"
            case (MR_Integer) 0:
#line 196 "debugger_interface.m"
              {
#line 196 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 196 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_10_10;

#line 196 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 196 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 196 "debugger_interface.m"
                  {
#line 196 "debugger_interface.m"
                    mdb__debugger_interface__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 4587 "mdb.debugger_interface.c"
                    {
#line 4589 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mercury__list____Unify____list_1_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_9_9, mdb__debugger_interface__V_10_10);
                    }
#line 196 "debugger_interface.m"
                  }
#line 196 "debugger_interface.m"
              }
#line 196 "debugger_interface.m"
              break;
#line 196 "debugger_interface.m"
            case (MR_Integer) 1:
#line 196 "debugger_interface.m"
              {
#line 196 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1));
#line 196 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_12_12 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2));
#line 196 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_13_13;
#line 196 "debugger_interface.m"
                MR_Box mdb__debugger_interface__V_14_14;

#line 196 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 196 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 196 "debugger_interface.m"
                  {
#line 196 "debugger_interface.m"
                    mdb__debugger_interface__V_13_13 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1));
#line 196 "debugger_interface.m"
                    mdb__debugger_interface__V_14_14 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2));
#line 4621 "mdb.debugger_interface.c"
                    {
#line 4623 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_11_11, mdb__debugger_interface__V_13_13);
                    }
#line 196 "debugger_interface.m"
                    if (mdb__debugger_interface__succeeded)
#line 4628 "mdb.debugger_interface.c"
                      {
#line 4630 "mdb.debugger_interface.c"
                        mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_17, mdb__debugger_interface__V_12_12, mdb__debugger_interface__V_14_14);
                      }
#line 196 "debugger_interface.m"
                  }
#line 196 "debugger_interface.m"
              }
#line 196 "debugger_interface.m"
              break;
#line 196 "debugger_interface.m"
          }
#line 196 "debugger_interface.m"
          break;
#line 196 "debugger_interface.m"
      }
#line 196 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 196 "debugger_interface.m"
  }
#line 196 "debugger_interface.m"
}

#line 189 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____event_number_0_0(
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
    }
#line 189 "debugger_interface.m"
  }
#line 189 "debugger_interface.m"
}

#line 189 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____event_number_0_0(
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

#line 191 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____depth_number_0_0(
#line 191 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 191 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2,
#line 191 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__3_3)
#line 191 "debugger_interface.m"
{
#line 191 "debugger_interface.m"
  {
#line 191 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 191 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_4 = mdb__debugger_interface__HeadVar__2_2;
#line 191 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_5 = mdb__debugger_interface__HeadVar__3_3;

#line 191 "debugger_interface.m"
    {
#line 191 "debugger_interface.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__debugger_interface__HeadVar__1_1, mdb__debugger_interface__Cast_HeadVar1_4, mdb__debugger_interface__Cast_HeadVar2_5);
    }
#line 191 "debugger_interface.m"
  }
#line 191 "debugger_interface.m"
}

#line 191 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____depth_number_0_0(
#line 191 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__1_1,
#line 191 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__HeadVar__2_2)
#line 191 "debugger_interface.m"
{
#line 191 "debugger_interface.m"
  {
#line 191 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 191 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar1_3 = mdb__debugger_interface__HeadVar__1_1;
#line 191 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Cast_HeadVar2_4 = mdb__debugger_interface__HeadVar__2_2;

#line 191 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__Cast_HeadVar1_3 == mdb__debugger_interface__Cast_HeadVar2_4);
#line 191 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 191 "debugger_interface.m"
  }
#line 191 "debugger_interface.m"
}

#line 205 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_response_0_0(
#line 205 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 205 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 205 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3)
#line 205 "debugger_interface.m"
{
#line 205 "debugger_interface.m"
  {
#line 205 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 205 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_146 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;
#line 205 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_147 = (MR_Integer) mdb__debugger_interface__HeadVar__3_3;

#line 205 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_146 == mdb__debugger_interface__CastY_147);
#line 205 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 4847 "mdb.debugger_interface.c"
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
    else
#line 205 "debugger_interface.m"
      {
#line 205 "debugger_interface.m"
        MR_Integer mdb__debugger_interface__V_4_4;
#line 205 "debugger_interface.m"
        MR_Integer mdb__debugger_interface__V_5_5;

#line 205 "debugger_interface.m"
        {
#line 205 "debugger_interface.m"
          mdb__debugger_interface____Index____debugger_response_0_0(mdb__debugger_interface__HeadVar__2_2, &mdb__debugger_interface__V_4_4);
        }
#line 205 "debugger_interface.m"
        {
#line 205 "debugger_interface.m"
          mdb__debugger_interface____Index____debugger_response_0_0(mdb__debugger_interface__HeadVar__3_3, &mdb__debugger_interface__V_5_5);
        }
#line 205 "debugger_interface.m"
        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 < mdb__debugger_interface__V_5_5);
#line 205 "debugger_interface.m"
        if (mdb__debugger_interface__succeeded)
#line 4872 "mdb.debugger_interface.c"
          *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 205 "debugger_interface.m"
        else
#line 205 "debugger_interface.m"
          {
#line 205 "debugger_interface.m"
            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 > mdb__debugger_interface__V_5_5);
#line 205 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 4882 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 205 "debugger_interface.m"
            else
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_6_6;

#line 205 "debugger_interface.m"
#line 205 "debugger_interface.m"
                switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) {
#line 205 "debugger_interface.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 205 "debugger_interface.m"
                  case (MR_Integer) 0:
#line 205 "debugger_interface.m"
#line 205 "debugger_interface.m"
                    switch (MR_unmkbody(mdb__debugger_interface__HeadVar__2_2)) {
#line 205 "debugger_interface.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 205 "debugger_interface.m"
                      case (MR_Integer) 0:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 1:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 2:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 3:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 4:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 5:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 6:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 7:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 8:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 9:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 10:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 11:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 12:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 13:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 14:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 15:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 16:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 17:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 18:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                    }
#line 205 "debugger_interface.m"
                    break;
#line 205 "debugger_interface.m"
                  case (MR_Integer) 1:
#line 205 "debugger_interface.m"
                    {
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 15);
#line 205 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_20_20;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_21_21;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_22_22;
#line 205 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_23_23;
#line 205 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_24_24;
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_25_25;
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_26_26;
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_27_27;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_28_28;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_29_29;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_30_30;
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_31_31;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_32_32;
#line 205 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_33_33;

#line 205 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 205 "debugger_interface.m"
                      if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_23_23 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 15);
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_24_24 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_25_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_26_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_27_27 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 6)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 7)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 8)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 9)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 10)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 11)));
#line 205 "debugger_interface.m"
                          {
#line 205 "debugger_interface.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_33_33, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_20_20);
                          }
#line 5231 "mdb.debugger_interface.c"
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_33_33 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_33_33;
#line 205 "debugger_interface.m"
                          else
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              MR_Word mdb__debugger_interface__V_34_34;

#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_34_34, mdb__debugger_interface__V_8_8, mdb__debugger_interface__V_21_21);
                              }
#line 5251 "mdb.debugger_interface.c"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_34_34 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_34_34;
#line 205 "debugger_interface.m"
                              else
#line 205 "debugger_interface.m"
                                {
#line 205 "debugger_interface.m"
                                  MR_Word mdb__debugger_interface__V_35_35;

#line 205 "debugger_interface.m"
                                  {
#line 205 "debugger_interface.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_35_35, mdb__debugger_interface__V_9_9, mdb__debugger_interface__V_22_22);
                                  }
#line 5271 "mdb.debugger_interface.c"
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_35_35 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                  if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_35_35;
#line 205 "debugger_interface.m"
                                  else
#line 205 "debugger_interface.m"
                                    {
#line 205 "debugger_interface.m"
                                      MR_Word mdb__debugger_interface__V_36_36;
#line 205 "debugger_interface.m"
                                      MR_Integer mdb__debugger_interface__V_201_201 = (MR_Integer) mdb__debugger_interface__V_10_10;
#line 205 "debugger_interface.m"
                                      MR_Integer mdb__debugger_interface__V_202_202 = (MR_Integer) mdb__debugger_interface__V_23_23;

#line 205 "debugger_interface.m"
                                      {
#line 205 "debugger_interface.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_36_36, mdb__debugger_interface__V_201_201, mdb__debugger_interface__V_202_202);
                                      }
#line 5295 "mdb.debugger_interface.c"
                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_36_36 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                      if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_36_36;
#line 205 "debugger_interface.m"
                                      else
#line 205 "debugger_interface.m"
                                        {
#line 205 "debugger_interface.m"
                                          MR_Word mdb__debugger_interface__V_37_37;
#line 205 "debugger_interface.m"
                                          MR_Integer mdb__debugger_interface__V_203_203 = (MR_Integer) mdb__debugger_interface__V_11_11;
#line 205 "debugger_interface.m"
                                          MR_Integer mdb__debugger_interface__V_204_204 = (MR_Integer) mdb__debugger_interface__V_24_24;

#line 205 "debugger_interface.m"
                                          {
#line 205 "debugger_interface.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_37_37, mdb__debugger_interface__V_203_203, mdb__debugger_interface__V_204_204);
                                          }
#line 5319 "mdb.debugger_interface.c"
                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_37_37 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_37_37;
#line 205 "debugger_interface.m"
                                          else
#line 205 "debugger_interface.m"
                                            {
#line 205 "debugger_interface.m"
                                              MR_Word mdb__debugger_interface__V_38_38;

#line 205 "debugger_interface.m"
                                              {
#line 205 "debugger_interface.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_38_38, mdb__debugger_interface__V_12_12, mdb__debugger_interface__V_25_25);
                                              }
#line 5339 "mdb.debugger_interface.c"
                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_38_38 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_38_38;
#line 205 "debugger_interface.m"
                                              else
#line 205 "debugger_interface.m"
                                                {
#line 205 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_39_39;

#line 205 "debugger_interface.m"
                                                  {
#line 205 "debugger_interface.m"
                                                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_39_39, mdb__debugger_interface__V_13_13, mdb__debugger_interface__V_26_26);
                                                  }
#line 5359 "mdb.debugger_interface.c"
                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_39_39 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                  if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_39_39;
#line 205 "debugger_interface.m"
                                                  else
#line 205 "debugger_interface.m"
                                                    {
#line 205 "debugger_interface.m"
                                                      MR_Word mdb__debugger_interface__V_40_40;

#line 205 "debugger_interface.m"
                                                      {
#line 205 "debugger_interface.m"
                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_40_40, mdb__debugger_interface__V_14_14, mdb__debugger_interface__V_27_27);
                                                      }
#line 5379 "mdb.debugger_interface.c"
                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_40_40 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                      if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_40_40;
#line 205 "debugger_interface.m"
                                                      else
#line 205 "debugger_interface.m"
                                                        {
#line 205 "debugger_interface.m"
                                                          MR_Word mdb__debugger_interface__V_41_41;

#line 205 "debugger_interface.m"
                                                          {
#line 205 "debugger_interface.m"
                                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_41_41, mdb__debugger_interface__V_15_15, mdb__debugger_interface__V_28_28);
                                                          }
#line 5399 "mdb.debugger_interface.c"
                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_41_41 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_41_41;
#line 205 "debugger_interface.m"
                                                          else
#line 205 "debugger_interface.m"
                                                            {
#line 205 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__V_42_42;

#line 205 "debugger_interface.m"
                                                              {
#line 205 "debugger_interface.m"
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_42_42, mdb__debugger_interface__V_16_16, mdb__debugger_interface__V_29_29);
                                                              }
#line 5419 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_42_42 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_42_42;
#line 205 "debugger_interface.m"
                                                              else
#line 205 "debugger_interface.m"
                                                                {
#line 205 "debugger_interface.m"
                                                                  MR_Word mdb__debugger_interface__V_43_43;

#line 205 "debugger_interface.m"
                                                                  {
#line 205 "debugger_interface.m"
                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_43_43, mdb__debugger_interface__V_17_17, mdb__debugger_interface__V_30_30);
                                                                  }
#line 5439 "mdb.debugger_interface.c"
                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_43_43 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                                  if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_43_43;
#line 205 "debugger_interface.m"
                                                                  else
#line 205 "debugger_interface.m"
                                                                    {
#line 205 "debugger_interface.m"
                                                                      MR_Word mdb__debugger_interface__V_44_44;

#line 205 "debugger_interface.m"
                                                                      {
#line 205 "debugger_interface.m"
                                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_44_44, mdb__debugger_interface__V_18_18, mdb__debugger_interface__V_31_31);
                                                                      }
#line 5459 "mdb.debugger_interface.c"
                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_44_44 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                                      if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_44_44;
#line 205 "debugger_interface.m"
                                                                      else
#line 205 "debugger_interface.m"
                                                                        {
#line 205 "debugger_interface.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_19_19, mdb__debugger_interface__V_32_32);
                                                                        }
#line 205 "debugger_interface.m"
                                                                    }
#line 205 "debugger_interface.m"
                                                                }
#line 205 "debugger_interface.m"
                                                            }
#line 205 "debugger_interface.m"
                                                        }
#line 205 "debugger_interface.m"
                                                    }
#line 205 "debugger_interface.m"
                                                }
#line 205 "debugger_interface.m"
                                            }
#line 205 "debugger_interface.m"
                                        }
#line 205 "debugger_interface.m"
                                    }
#line 205 "debugger_interface.m"
                                }
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                    }
#line 205 "debugger_interface.m"
                    break;
#line 205 "debugger_interface.m"
                  case (MR_Integer) 2:
#line 205 "debugger_interface.m"
                    {
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_51_51 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 12)));
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_58_58;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_59_59;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_60_60;
#line 205 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_61_61;
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_62_62;
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_63_63;
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_64_64;
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_65_65;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_66_66;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_67_67;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_68_68;
#line 205 "debugger_interface.m"
                      MR_String mdb__debugger_interface__V_69_69;
#line 205 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_70_70;
#line 205 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_71_71;

#line 205 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 205 "debugger_interface.m"
                      if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_63_63 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_64_64 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 6)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 7)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 8)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 9)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 10)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_69_69 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 11)));
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 12)));
#line 205 "debugger_interface.m"
                          {
#line 205 "debugger_interface.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_71_71, mdb__debugger_interface__V_45_45, mdb__debugger_interface__V_58_58);
                          }
#line 5600 "mdb.debugger_interface.c"
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_71_71 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_71_71;
#line 205 "debugger_interface.m"
                          else
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              MR_Word mdb__debugger_interface__V_72_72;

#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_72_72, mdb__debugger_interface__V_46_46, mdb__debugger_interface__V_59_59);
                              }
#line 5620 "mdb.debugger_interface.c"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_72_72 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_72_72;
#line 205 "debugger_interface.m"
                              else
#line 205 "debugger_interface.m"
                                {
#line 205 "debugger_interface.m"
                                  MR_Word mdb__debugger_interface__V_73_73;

#line 205 "debugger_interface.m"
                                  {
#line 205 "debugger_interface.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_73_73, mdb__debugger_interface__V_47_47, mdb__debugger_interface__V_60_60);
                                  }
#line 5640 "mdb.debugger_interface.c"
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_73_73 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                  if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_73_73;
#line 205 "debugger_interface.m"
                                  else
#line 205 "debugger_interface.m"
                                    {
#line 205 "debugger_interface.m"
                                      MR_Word mdb__debugger_interface__V_74_74;
#line 205 "debugger_interface.m"
                                      MR_Integer mdb__debugger_interface__V_199_199 = (MR_Integer) mdb__debugger_interface__V_48_48;
#line 205 "debugger_interface.m"
                                      MR_Integer mdb__debugger_interface__V_200_200 = (MR_Integer) mdb__debugger_interface__V_61_61;

#line 205 "debugger_interface.m"
                                      {
#line 205 "debugger_interface.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_74_74, mdb__debugger_interface__V_199_199, mdb__debugger_interface__V_200_200);
                                      }
#line 5664 "mdb.debugger_interface.c"
                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_74_74 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                      if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_74_74;
#line 205 "debugger_interface.m"
                                      else
#line 205 "debugger_interface.m"
                                        {
#line 205 "debugger_interface.m"
                                          MR_Word mdb__debugger_interface__V_75_75;

#line 205 "debugger_interface.m"
                                          {
#line 205 "debugger_interface.m"
                                            mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_75_75, mdb__debugger_interface__V_49_49, mdb__debugger_interface__V_62_62);
                                          }
#line 5684 "mdb.debugger_interface.c"
                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_75_75 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_75_75;
#line 205 "debugger_interface.m"
                                          else
#line 205 "debugger_interface.m"
                                            {
#line 205 "debugger_interface.m"
                                              MR_Word mdb__debugger_interface__V_76_76;

#line 205 "debugger_interface.m"
                                              {
#line 205 "debugger_interface.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_76_76, mdb__debugger_interface__V_50_50, mdb__debugger_interface__V_63_63);
                                              }
#line 5704 "mdb.debugger_interface.c"
                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_76_76 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_76_76;
#line 205 "debugger_interface.m"
                                              else
#line 205 "debugger_interface.m"
                                                {
#line 205 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_77_77;

#line 205 "debugger_interface.m"
                                                  {
#line 205 "debugger_interface.m"
                                                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_77_77, mdb__debugger_interface__V_51_51, mdb__debugger_interface__V_64_64);
                                                  }
#line 5724 "mdb.debugger_interface.c"
                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_77_77 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                  if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_77_77;
#line 205 "debugger_interface.m"
                                                  else
#line 205 "debugger_interface.m"
                                                    {
#line 205 "debugger_interface.m"
                                                      MR_Word mdb__debugger_interface__V_78_78;

#line 205 "debugger_interface.m"
                                                      {
#line 205 "debugger_interface.m"
                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_78_78, mdb__debugger_interface__V_52_52, mdb__debugger_interface__V_65_65);
                                                      }
#line 5744 "mdb.debugger_interface.c"
                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_78_78 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                      if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_78_78;
#line 205 "debugger_interface.m"
                                                      else
#line 205 "debugger_interface.m"
                                                        {
#line 205 "debugger_interface.m"
                                                          MR_Word mdb__debugger_interface__V_79_79;

#line 205 "debugger_interface.m"
                                                          {
#line 205 "debugger_interface.m"
                                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_79_79, mdb__debugger_interface__V_53_53, mdb__debugger_interface__V_66_66);
                                                          }
#line 5764 "mdb.debugger_interface.c"
                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_79_79 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_79_79;
#line 205 "debugger_interface.m"
                                                          else
#line 205 "debugger_interface.m"
                                                            {
#line 205 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__V_80_80;

#line 205 "debugger_interface.m"
                                                              {
#line 205 "debugger_interface.m"
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_80_80, mdb__debugger_interface__V_54_54, mdb__debugger_interface__V_67_67);
                                                              }
#line 5784 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_80_80 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_80_80;
#line 205 "debugger_interface.m"
                                                              else
#line 205 "debugger_interface.m"
                                                                {
#line 205 "debugger_interface.m"
                                                                  MR_Word mdb__debugger_interface__V_81_81;

#line 205 "debugger_interface.m"
                                                                  {
#line 205 "debugger_interface.m"
                                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_81_81, mdb__debugger_interface__V_55_55, mdb__debugger_interface__V_68_68);
                                                                  }
#line 5804 "mdb.debugger_interface.c"
                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_81_81 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                                  if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_81_81;
#line 205 "debugger_interface.m"
                                                                  else
#line 205 "debugger_interface.m"
                                                                    {
#line 205 "debugger_interface.m"
                                                                      MR_Word mdb__debugger_interface__V_82_82;

#line 205 "debugger_interface.m"
                                                                      {
#line 205 "debugger_interface.m"
                                                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_82_82, mdb__debugger_interface__V_56_56, mdb__debugger_interface__V_69_69);
                                                                      }
#line 5824 "mdb.debugger_interface.c"
                                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_82_82 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                                                      if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_82_82;
#line 205 "debugger_interface.m"
                                                                      else
#line 205 "debugger_interface.m"
                                                                        {
#line 205 "debugger_interface.m"
                                                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_57_57, mdb__debugger_interface__V_70_70);
                                                                        }
#line 205 "debugger_interface.m"
                                                                    }
#line 205 "debugger_interface.m"
                                                                }
#line 205 "debugger_interface.m"
                                                            }
#line 205 "debugger_interface.m"
                                                        }
#line 205 "debugger_interface.m"
                                                    }
#line 205 "debugger_interface.m"
                                                }
#line 205 "debugger_interface.m"
                                            }
#line 205 "debugger_interface.m"
                                        }
#line 205 "debugger_interface.m"
                                    }
#line 205 "debugger_interface.m"
                                }
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                    }
#line 205 "debugger_interface.m"
                    break;
#line 205 "debugger_interface.m"
                  case (MR_Integer) 3:
#line 205 "debugger_interface.m"
#line 205 "debugger_interface.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) {
#line 205 "debugger_interface.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 205 "debugger_interface.m"
                      case (MR_Integer) 0:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_85_85;
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_86_86;
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_87_87;
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__TypeInfo_174_174;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 5903 "mdb.debugger_interface.c"
                              mdb__debugger_interface__TypeInfo_174_174 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_174_174, &mdb__debugger_interface__V_87_87, ((MR_Box) (mdb__debugger_interface__V_83_83)), ((MR_Box) (mdb__debugger_interface__V_85_85)));
                              }
#line 5910 "mdb.debugger_interface.c"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_87_87 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_87_87;
#line 205 "debugger_interface.m"
                              else
#line 205 "debugger_interface.m"
                                {
#line 205 "debugger_interface.m"
                                  {
#line 205 "debugger_interface.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[5], &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_84_84)), ((MR_Box) (mdb__debugger_interface__V_86_86)));
                                  }
#line 205 "debugger_interface.m"
                                }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 1:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_89_89;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__univ____Compare____univ_0_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_88_88, mdb__debugger_interface__V_89_89);
                              }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 2:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_92_92;
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_93_93;
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_94_94;
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__TypeInfo_177_177;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 5994 "mdb.debugger_interface.c"
                              mdb__debugger_interface__TypeInfo_177_177 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_177_177, &mdb__debugger_interface__V_94_94, ((MR_Box) (mdb__debugger_interface__V_90_90)), ((MR_Box) (mdb__debugger_interface__V_92_92)));
                              }
#line 6001 "mdb.debugger_interface.c"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_94_94 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_94_94;
#line 205 "debugger_interface.m"
                              else
#line 205 "debugger_interface.m"
                                {
#line 205 "debugger_interface.m"
                                  {
#line 205 "debugger_interface.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[5], &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_91_91)), ((MR_Box) (mdb__debugger_interface__V_93_93)));
                                  }
#line 205 "debugger_interface.m"
                                }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 3:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_95_95 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_96_96;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_95_95, mdb__debugger_interface__V_96_96);
                              }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 4:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_98_98;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_97_97, mdb__debugger_interface__V_98_98);
                              }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 5:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_101_101 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_104_104;
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_105_105;
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_106_106;
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_107_107;
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_108_108;
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_109_109;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_105_105 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_109_109, mdb__debugger_interface__V_99_99, mdb__debugger_interface__V_104_104);
                              }
#line 6136 "mdb.debugger_interface.c"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_109_109 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_109_109;
#line 205 "debugger_interface.m"
                              else
#line 205 "debugger_interface.m"
                                {
#line 205 "debugger_interface.m"
                                  MR_Word mdb__debugger_interface__V_110_110;

#line 205 "debugger_interface.m"
                                  {
#line 205 "debugger_interface.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_110_110, mdb__debugger_interface__V_100_100, mdb__debugger_interface__V_105_105);
                                  }
#line 6156 "mdb.debugger_interface.c"
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_110_110 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                  if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_110_110;
#line 205 "debugger_interface.m"
                                  else
#line 205 "debugger_interface.m"
                                    {
#line 205 "debugger_interface.m"
                                      MR_Word mdb__debugger_interface__V_111_111;

#line 205 "debugger_interface.m"
                                      {
#line 205 "debugger_interface.m"
                                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_111_111, mdb__debugger_interface__V_101_101, mdb__debugger_interface__V_106_106);
                                      }
#line 6176 "mdb.debugger_interface.c"
                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_111_111 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                      if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_111_111;
#line 205 "debugger_interface.m"
                                      else
#line 205 "debugger_interface.m"
                                        {
#line 205 "debugger_interface.m"
                                          MR_Word mdb__debugger_interface__V_112_112;

#line 205 "debugger_interface.m"
                                          {
#line 205 "debugger_interface.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_112_112, mdb__debugger_interface__V_102_102, mdb__debugger_interface__V_107_107);
                                          }
#line 6196 "mdb.debugger_interface.c"
                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_112_112 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_112_112;
#line 205 "debugger_interface.m"
                                          else
#line 205 "debugger_interface.m"
                                            {
#line 205 "debugger_interface.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_103_103, mdb__debugger_interface__V_108_108);
                                            }
#line 205 "debugger_interface.m"
                                        }
#line 205 "debugger_interface.m"
                                    }
#line 205 "debugger_interface.m"
                                }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 6:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_113_113 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_114_114 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_116_116 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_117_117;
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_118_118;
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_119_119;
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_120_120;
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_121_121;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_117_117 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_118_118 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_121_121, mdb__debugger_interface__V_113_113, mdb__debugger_interface__V_117_117);
                              }
#line 6267 "mdb.debugger_interface.c"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_121_121 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_121_121;
#line 205 "debugger_interface.m"
                              else
#line 205 "debugger_interface.m"
                                {
#line 205 "debugger_interface.m"
                                  MR_Word mdb__debugger_interface__V_122_122;

#line 205 "debugger_interface.m"
                                  {
#line 205 "debugger_interface.m"
                                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_122_122, mdb__debugger_interface__V_114_114, mdb__debugger_interface__V_118_118);
                                  }
#line 6287 "mdb.debugger_interface.c"
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_122_122 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                  if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_122_122;
#line 205 "debugger_interface.m"
                                  else
#line 205 "debugger_interface.m"
                                    {
#line 205 "debugger_interface.m"
                                      MR_Word mdb__debugger_interface__V_123_123;

#line 205 "debugger_interface.m"
                                      {
#line 205 "debugger_interface.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_123_123, mdb__debugger_interface__V_115_115, mdb__debugger_interface__V_119_119);
                                      }
#line 6307 "mdb.debugger_interface.c"
                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_123_123 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                      if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_123_123;
#line 205 "debugger_interface.m"
                                      else
#line 205 "debugger_interface.m"
                                        {
#line 205 "debugger_interface.m"
                                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_116_116, mdb__debugger_interface__V_120_120);
                                        }
#line 205 "debugger_interface.m"
                                    }
#line 205 "debugger_interface.m"
                                }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 7:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_124_124 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_125_125;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_125_125 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_124_124, mdb__debugger_interface__V_125_125);
                              }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 8:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_126_126 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_128_128 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_129_129;
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_130_130;
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_131_131;
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_132_132;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_129_129 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_130_130 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_131_131 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_132_132, mdb__debugger_interface__V_126_126, mdb__debugger_interface__V_129_129);
                              }
#line 6400 "mdb.debugger_interface.c"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_132_132 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_132_132;
#line 205 "debugger_interface.m"
                              else
#line 205 "debugger_interface.m"
                                {
#line 205 "debugger_interface.m"
                                  MR_Word mdb__debugger_interface__V_133_133;

#line 205 "debugger_interface.m"
                                  {
#line 205 "debugger_interface.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_133_133, mdb__debugger_interface__V_127_127, mdb__debugger_interface__V_130_130);
                                  }
#line 6420 "mdb.debugger_interface.c"
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_133_133 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                  if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_133_133;
#line 205 "debugger_interface.m"
                                  else
#line 205 "debugger_interface.m"
                                    {
#line 205 "debugger_interface.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_128_128, mdb__debugger_interface__V_131_131);
                                    }
#line 205 "debugger_interface.m"
                                }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 9:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_134_134 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_135_135;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_135_135 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_134_134, mdb__debugger_interface__V_135_135);
                              }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 10:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_136_136 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_138_138 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_139_139;
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_140_140;
#line 205 "debugger_interface.m"
                          MR_Integer mdb__debugger_interface__V_141_141;
#line 205 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_142_142;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_140_140 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_141_141 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_142_142, mdb__debugger_interface__V_136_136, mdb__debugger_interface__V_139_139);
                              }
#line 6511 "mdb.debugger_interface.c"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_142_142 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_142_142;
#line 205 "debugger_interface.m"
                              else
#line 205 "debugger_interface.m"
                                {
#line 205 "debugger_interface.m"
                                  MR_Word mdb__debugger_interface__V_143_143;

#line 205 "debugger_interface.m"
                                  {
#line 205 "debugger_interface.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_143_143, mdb__debugger_interface__V_137_137, mdb__debugger_interface__V_140_140);
                                  }
#line 6531 "mdb.debugger_interface.c"
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_143_143 == (MR_Integer) 0);
#line 205 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 205 "debugger_interface.m"
                                  if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_143_143;
#line 205 "debugger_interface.m"
                                  else
#line 205 "debugger_interface.m"
                                    {
#line 205 "debugger_interface.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_138_138, mdb__debugger_interface__V_141_141);
                                    }
#line 205 "debugger_interface.m"
                                }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                      case (MR_Integer) 11:
#line 205 "debugger_interface.m"
                        {
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_144_144 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_145_145;

#line 205 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 205 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                            {
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__V_145_145 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                              {
#line 205 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_144_144, mdb__debugger_interface__V_145_145);
                              }
#line 205 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
                            }
#line 205 "debugger_interface.m"
                        }
#line 205 "debugger_interface.m"
                        break;
#line 205 "debugger_interface.m"
                    }
#line 205 "debugger_interface.m"
                    break;
#line 205 "debugger_interface.m"
                }
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_6_6;
#line 205 "debugger_interface.m"
                else
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 205 "debugger_interface.m"
                    return;
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
          }
#line 205 "debugger_interface.m"
      }
#line 205 "debugger_interface.m"
  }
#line 205 "debugger_interface.m"
}

#line 205 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Index____debugger_response_0_0(
#line 205 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 205 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__HeadVar__2_2)
#line 205 "debugger_interface.m"
{
#line 205 "debugger_interface.m"
  {
#line 205 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;

#line 205 "debugger_interface.m"
#line 205 "debugger_interface.m"
    switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
#line 205 "debugger_interface.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 205 "debugger_interface.m"
      case (MR_Integer) 0:
#line 205 "debugger_interface.m"
#line 205 "debugger_interface.m"
        switch (MR_unmkbody(mdb__debugger_interface__HeadVar__1_1)) {
#line 205 "debugger_interface.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 205 "debugger_interface.m"
          case (MR_Integer) 0:
#line 6644 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 0;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 1:
#line 6650 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 1;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 2:
#line 6656 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 2;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 3:
#line 6662 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 3;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 4:
#line 6668 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 9;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 5:
#line 6674 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 10;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 6:
#line 6680 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 11;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 7:
#line 6686 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 12;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 8:
#line 6692 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 19;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 9:
#line 6698 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 20;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 10:
#line 6704 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 22;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 11:
#line 6710 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 24;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 12:
#line 6716 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 25;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 13:
#line 6722 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 26;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 14:
#line 6728 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 27;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 15:
#line 6734 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 29;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 16:
#line 6740 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 30;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 17:
#line 6746 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 31;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 18:
#line 6752 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 32;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
        }
#line 205 "debugger_interface.m"
        break;
#line 205 "debugger_interface.m"
      case (MR_Integer) 1:
#line 6762 "mdb.debugger_interface.c"
        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 4;
#line 205 "debugger_interface.m"
        break;
#line 205 "debugger_interface.m"
      case (MR_Integer) 2:
#line 6768 "mdb.debugger_interface.c"
        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 5;
#line 205 "debugger_interface.m"
        break;
#line 205 "debugger_interface.m"
      case (MR_Integer) 3:
#line 205 "debugger_interface.m"
#line 205 "debugger_interface.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
#line 205 "debugger_interface.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 205 "debugger_interface.m"
          case (MR_Integer) 0:
#line 6781 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 6;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 1:
#line 6787 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 7;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 2:
#line 6793 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 8;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 3:
#line 6799 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 13;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 4:
#line 6805 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 14;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 5:
#line 6811 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 15;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 6:
#line 6817 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 16;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 7:
#line 6823 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 17;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 8:
#line 6829 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 18;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 9:
#line 6835 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 21;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 10:
#line 6841 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 23;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
          case (MR_Integer) 11:
#line 6847 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 28;
#line 205 "debugger_interface.m"
            break;
#line 205 "debugger_interface.m"
        }
#line 205 "debugger_interface.m"
        break;
#line 205 "debugger_interface.m"
    }
#line 205 "debugger_interface.m"
  }
#line 205 "debugger_interface.m"
}

#line 205 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_response_0_0(
#line 205 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 205 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2)
#line 205 "debugger_interface.m"
{
#line 205 "debugger_interface.m"
  {
#line 205 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 205 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_143 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_144 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_143 == mdb__debugger_interface__CastY_144);
#line 205 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
      mdb__debugger_interface__succeeded = MR_TRUE;
#line 205 "debugger_interface.m"
    else
#line 205 "debugger_interface.m"
#line 205 "debugger_interface.m"
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
#line 205 "debugger_interface.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 205 "debugger_interface.m"
        case (MR_Integer) 0:
#line 205 "debugger_interface.m"
#line 205 "debugger_interface.m"
          switch (MR_unmkbody(mdb__debugger_interface__HeadVar__1_1)) {
#line 205 "debugger_interface.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 205 "debugger_interface.m"
            case (MR_Integer) 0:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_3 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_4 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_4 == mdb__debugger_interface__CastX_3);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 1:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_5 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_6 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_6 == mdb__debugger_interface__CastX_5);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 2:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_7 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_8 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_8 == mdb__debugger_interface__CastX_7);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 3:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_9 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_10 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_10 == mdb__debugger_interface__CastX_9);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 4:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_73 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_74 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_74 == mdb__debugger_interface__CastX_73);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 5:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_75 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_76 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_76 == mdb__debugger_interface__CastX_75);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 6:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_77 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_78 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_78 == mdb__debugger_interface__CastX_77);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 7:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_79 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_80 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_80 == mdb__debugger_interface__CastX_79);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 8:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_111 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_112 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_112 == mdb__debugger_interface__CastX_111);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 9:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_113 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_114 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_114 == mdb__debugger_interface__CastX_113);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 10:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_117 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_118 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_118 == mdb__debugger_interface__CastX_117);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 11:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_125 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_126 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_126 == mdb__debugger_interface__CastX_125);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 12:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_127 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_128 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_128 == mdb__debugger_interface__CastX_127);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 13:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_129 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_130 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_130 == mdb__debugger_interface__CastX_129);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 14:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_131 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_132 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_132 == mdb__debugger_interface__CastX_131);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 15:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_135 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_136 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_136 == mdb__debugger_interface__CastX_135);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 16:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_137 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_138 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_138 == mdb__debugger_interface__CastX_137);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 17:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_139 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_140 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_140 == mdb__debugger_interface__CastX_139);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 18:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_141 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_142 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_142 == mdb__debugger_interface__CastX_141);
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
          }
#line 205 "debugger_interface.m"
          break;
#line 205 "debugger_interface.m"
        case (MR_Integer) 1:
#line 205 "debugger_interface.m"
          {
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_14_14 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 15);
#line 205 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_15_15 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_17_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_18_18 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 6)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 7)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 8)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 9)));
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 10)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 11)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_24_24;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_25_25;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_26_26;
#line 205 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_27_27;
#line 205 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_28_28;
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_29_29;
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_30_30;
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_31_31;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_32_32;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_33_33;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_34_34;
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_35_35;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_36_36;

#line 205 "debugger_interface.m"
            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 205 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_27_27 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 15);
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_28_28 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 4)) & (MR_Integer) 1);
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_29_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_30_30 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_31_31 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 7278 "mdb.debugger_interface.c"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_11_11 == mdb__debugger_interface__V_24_24);
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 7284 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_12_12 == mdb__debugger_interface__V_25_25);
#line 205 "debugger_interface.m"
                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                      {
#line 7290 "mdb.debugger_interface.c"
                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_13_13 == mdb__debugger_interface__V_26_26);
#line 205 "debugger_interface.m"
                        if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                          {
#line 7296 "mdb.debugger_interface.c"
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_14_14 == mdb__debugger_interface__V_27_27);
#line 205 "debugger_interface.m"
                            if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                              {
#line 7302 "mdb.debugger_interface.c"
                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_15_15 == mdb__debugger_interface__V_28_28);
#line 205 "debugger_interface.m"
                                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                  {
#line 7308 "mdb.debugger_interface.c"
                                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_16_16, mdb__debugger_interface__V_29_29) == 0);
#line 205 "debugger_interface.m"
                                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                      {
#line 7314 "mdb.debugger_interface.c"
                                        mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_17_17, mdb__debugger_interface__V_30_30) == 0);
#line 205 "debugger_interface.m"
                                        if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                          {
#line 7320 "mdb.debugger_interface.c"
                                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_18_18, mdb__debugger_interface__V_31_31) == 0);
#line 205 "debugger_interface.m"
                                            if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                              {
#line 7326 "mdb.debugger_interface.c"
                                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_19_19 == mdb__debugger_interface__V_32_32);
#line 205 "debugger_interface.m"
                                                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                  {
#line 7332 "mdb.debugger_interface.c"
                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_20_20 == mdb__debugger_interface__V_33_33);
#line 205 "debugger_interface.m"
                                                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                      {
#line 7338 "mdb.debugger_interface.c"
                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_21_21 == mdb__debugger_interface__V_34_34);
#line 205 "debugger_interface.m"
                                                        if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                          {
#line 7344 "mdb.debugger_interface.c"
                                                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_22_22, mdb__debugger_interface__V_35_35) == 0);
#line 205 "debugger_interface.m"
                                                            if (mdb__debugger_interface__succeeded)
#line 7348 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_23_23 == mdb__debugger_interface__V_36_36);
#line 205 "debugger_interface.m"
                                                          }
#line 205 "debugger_interface.m"
                                                      }
#line 205 "debugger_interface.m"
                                                  }
#line 205 "debugger_interface.m"
                                              }
#line 205 "debugger_interface.m"
                                          }
#line 205 "debugger_interface.m"
                                      }
#line 205 "debugger_interface.m"
                                  }
#line 205 "debugger_interface.m"
                              }
#line 205 "debugger_interface.m"
                          }
#line 205 "debugger_interface.m"
                      }
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
          }
#line 205 "debugger_interface.m"
          break;
#line 205 "debugger_interface.m"
        case (MR_Integer) 2:
#line 205 "debugger_interface.m"
          {
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_41_41 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_42_42 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 6)));
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 7)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 8)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 9)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 10)));
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_48_48 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 11)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 12)));
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_50_50;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_51_51;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_52_52;
#line 205 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_53_53;
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_54_54;
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_55_55;
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_56_56;
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_57_57;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_58_58;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_59_59;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_60_60;
#line 205 "debugger_interface.m"
            MR_String mdb__debugger_interface__V_61_61;
#line 205 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_62_62;

#line 205 "debugger_interface.m"
            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 205 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 205 "debugger_interface.m"
                mdb__debugger_interface__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 12)));
#line 7467 "mdb.debugger_interface.c"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_37_37 == mdb__debugger_interface__V_50_50);
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 7473 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_38_38 == mdb__debugger_interface__V_51_51);
#line 205 "debugger_interface.m"
                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                      {
#line 7479 "mdb.debugger_interface.c"
                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_39_39 == mdb__debugger_interface__V_52_52);
#line 205 "debugger_interface.m"
                        if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                          {
#line 7485 "mdb.debugger_interface.c"
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_40_40 == mdb__debugger_interface__V_53_53);
#line 205 "debugger_interface.m"
                            if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                              {
#line 7491 "mdb.debugger_interface.c"
                                mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_41_41, mdb__debugger_interface__V_54_54) == 0);
#line 205 "debugger_interface.m"
                                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                  {
#line 7497 "mdb.debugger_interface.c"
                                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_42_42, mdb__debugger_interface__V_55_55) == 0);
#line 205 "debugger_interface.m"
                                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                      {
#line 7503 "mdb.debugger_interface.c"
                                        mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_43_43, mdb__debugger_interface__V_56_56) == 0);
#line 205 "debugger_interface.m"
                                        if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                          {
#line 7509 "mdb.debugger_interface.c"
                                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_44_44, mdb__debugger_interface__V_57_57) == 0);
#line 205 "debugger_interface.m"
                                            if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                              {
#line 7515 "mdb.debugger_interface.c"
                                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_45_45 == mdb__debugger_interface__V_58_58);
#line 205 "debugger_interface.m"
                                                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                  {
#line 7521 "mdb.debugger_interface.c"
                                                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_46_46 == mdb__debugger_interface__V_59_59);
#line 205 "debugger_interface.m"
                                                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                      {
#line 7527 "mdb.debugger_interface.c"
                                                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_47_47 == mdb__debugger_interface__V_60_60);
#line 205 "debugger_interface.m"
                                                        if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                                                          {
#line 7533 "mdb.debugger_interface.c"
                                                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_48_48, mdb__debugger_interface__V_61_61) == 0);
#line 205 "debugger_interface.m"
                                                            if (mdb__debugger_interface__succeeded)
#line 7537 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_49_49 == mdb__debugger_interface__V_62_62);
#line 205 "debugger_interface.m"
                                                          }
#line 205 "debugger_interface.m"
                                                      }
#line 205 "debugger_interface.m"
                                                  }
#line 205 "debugger_interface.m"
                                              }
#line 205 "debugger_interface.m"
                                          }
#line 205 "debugger_interface.m"
                                      }
#line 205 "debugger_interface.m"
                                  }
#line 205 "debugger_interface.m"
                              }
#line 205 "debugger_interface.m"
                          }
#line 205 "debugger_interface.m"
                      }
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
          }
#line 205 "debugger_interface.m"
          break;
#line 205 "debugger_interface.m"
        case (MR_Integer) 3:
#line 205 "debugger_interface.m"
#line 205 "debugger_interface.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
#line 205 "debugger_interface.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 205 "debugger_interface.m"
            case (MR_Integer) 0:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__TypeInfo_148_148;
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__TypeInfo_149_149;
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_65_65;
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_66_66;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 7601 "mdb.debugger_interface.c"
                    mdb__debugger_interface__TypeInfo_148_148 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
#line 7603 "mdb.debugger_interface.c"
                    {
#line 7605 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_148_148, ((MR_Box) (mdb__debugger_interface__V_63_63)), ((MR_Box) (mdb__debugger_interface__V_65_65)));
                    }
#line 205 "debugger_interface.m"
                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                      {
#line 7612 "mdb.debugger_interface.c"
                        mdb__debugger_interface__TypeInfo_149_149 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 7614 "mdb.debugger_interface.c"
                        {
#line 7616 "mdb.debugger_interface.c"
                          mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_149_149, ((MR_Box) (mdb__debugger_interface__V_64_64)), ((MR_Box) (mdb__debugger_interface__V_66_66)));
                        }
#line 205 "debugger_interface.m"
                      }
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 1:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_68_68;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 7644 "mdb.debugger_interface.c"
                    {
#line 7646 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mercury__univ____Unify____univ_0_0(mdb__debugger_interface__V_67_67, mdb__debugger_interface__V_68_68);
                    }
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 2:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__TypeInfo_145_145;
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__TypeInfo_146_146;
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_71_71;
#line 205 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_72_72;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 7682 "mdb.debugger_interface.c"
                    mdb__debugger_interface__TypeInfo_145_145 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 7684 "mdb.debugger_interface.c"
                    {
#line 7686 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_145_145, ((MR_Box) (mdb__debugger_interface__V_69_69)), ((MR_Box) (mdb__debugger_interface__V_71_71)));
                    }
#line 205 "debugger_interface.m"
                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                      {
#line 7693 "mdb.debugger_interface.c"
                        mdb__debugger_interface__TypeInfo_146_146 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 7695 "mdb.debugger_interface.c"
                        {
#line 7697 "mdb.debugger_interface.c"
                          mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_146_146, ((MR_Box) (mdb__debugger_interface__V_70_70)), ((MR_Box) (mdb__debugger_interface__V_72_72)));
                        }
#line 205 "debugger_interface.m"
                      }
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 3:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_81_81 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_82_82;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_82_82 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 7725 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_81_81, mdb__debugger_interface__V_82_82) == 0);
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 4:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_83_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_84_84;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 7750 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_83_83 == mdb__debugger_interface__V_84_84);
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 5:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_85_85 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_86_86 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_87_87 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_90_90;
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_91_91;
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_92_92;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_93_93;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_94_94;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_90_90 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_91_91 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_92_92 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 7799 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_85_85, mdb__debugger_interface__V_90_90) == 0);
#line 205 "debugger_interface.m"
                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                      {
#line 7805 "mdb.debugger_interface.c"
                        mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_86_86, mdb__debugger_interface__V_91_91) == 0);
#line 205 "debugger_interface.m"
                        if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                          {
#line 7811 "mdb.debugger_interface.c"
                            mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_87_87, mdb__debugger_interface__V_92_92) == 0);
#line 205 "debugger_interface.m"
                            if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                              {
#line 7817 "mdb.debugger_interface.c"
                                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_88_88 == mdb__debugger_interface__V_93_93);
#line 205 "debugger_interface.m"
                                if (mdb__debugger_interface__succeeded)
#line 7821 "mdb.debugger_interface.c"
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_89_89 == mdb__debugger_interface__V_94_94);
#line 205 "debugger_interface.m"
                              }
#line 205 "debugger_interface.m"
                          }
#line 205 "debugger_interface.m"
                      }
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 6:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_95_95 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_96_96 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_99_99;
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_100_100;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_101_101;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_102_102;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_99_99 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_100_100 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 7870 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_95_95, mdb__debugger_interface__V_99_99) == 0);
#line 205 "debugger_interface.m"
                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                      {
#line 7876 "mdb.debugger_interface.c"
                        mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_96_96, mdb__debugger_interface__V_100_100) == 0);
#line 205 "debugger_interface.m"
                        if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                          {
#line 7882 "mdb.debugger_interface.c"
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_97_97 == mdb__debugger_interface__V_101_101);
#line 205 "debugger_interface.m"
                            if (mdb__debugger_interface__succeeded)
#line 7886 "mdb.debugger_interface.c"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_98_98 == mdb__debugger_interface__V_102_102);
#line 205 "debugger_interface.m"
                          }
#line 205 "debugger_interface.m"
                      }
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 7:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_103_103 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_104_104;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_104_104 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 7915 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_103_103, mdb__debugger_interface__V_104_104) == 0);
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 8:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_106_106 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_107_107 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_108_108;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_109_109;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_110_110;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_108_108 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_109_109 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 7952 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_105_105 == mdb__debugger_interface__V_108_108);
#line 205 "debugger_interface.m"
                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                      {
#line 7958 "mdb.debugger_interface.c"
                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_106_106 == mdb__debugger_interface__V_109_109);
#line 205 "debugger_interface.m"
                        if (mdb__debugger_interface__succeeded)
#line 7962 "mdb.debugger_interface.c"
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_107_107 == mdb__debugger_interface__V_110_110);
#line 205 "debugger_interface.m"
                      }
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 9:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_115_115 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_116_116;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_116_116 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 7989 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_115_115, mdb__debugger_interface__V_116_116) == 0);
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 10:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_119_119 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_121_121 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_122_122;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_123_123;
#line 205 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__V_124_124;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_122_122 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_123_123 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_124_124 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 8026 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_119_119 == mdb__debugger_interface__V_122_122);
#line 205 "debugger_interface.m"
                    if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                      {
#line 8032 "mdb.debugger_interface.c"
                        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_120_120 == mdb__debugger_interface__V_123_123);
#line 205 "debugger_interface.m"
                        if (mdb__debugger_interface__succeeded)
#line 8036 "mdb.debugger_interface.c"
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_121_121 == mdb__debugger_interface__V_124_124);
#line 205 "debugger_interface.m"
                      }
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
            case (MR_Integer) 11:
#line 205 "debugger_interface.m"
              {
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_133_133 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 205 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_134_134;

#line 205 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 11)));
#line 205 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 205 "debugger_interface.m"
                  {
#line 205 "debugger_interface.m"
                    mdb__debugger_interface__V_134_134 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 8063 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_133_133, mdb__debugger_interface__V_134_134) == 0);
#line 205 "debugger_interface.m"
                  }
#line 205 "debugger_interface.m"
              }
#line 205 "debugger_interface.m"
              break;
#line 205 "debugger_interface.m"
          }
#line 205 "debugger_interface.m"
          break;
#line 205 "debugger_interface.m"
      }
#line 205 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 205 "debugger_interface.m"
  }
#line 205 "debugger_interface.m"
}

#line 89 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____debugger_request_0_0(
#line 89 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__HeadVar__1_1,
#line 89 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2,
#line 89 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__3_3)
#line 89 "debugger_interface.m"
{
#line 89 "debugger_interface.m"
  {
#line 89 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 89 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_58 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;
#line 89 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_59 = (MR_Integer) mdb__debugger_interface__HeadVar__3_3;

#line 89 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_58 == mdb__debugger_interface__CastY_59);
#line 89 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 8108 "mdb.debugger_interface.c"
      *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
    else
#line 89 "debugger_interface.m"
      {
#line 89 "debugger_interface.m"
        MR_Integer mdb__debugger_interface__V_4_4;
#line 89 "debugger_interface.m"
        MR_Integer mdb__debugger_interface__V_5_5;

#line 89 "debugger_interface.m"
        {
#line 89 "debugger_interface.m"
          mdb__debugger_interface____Index____debugger_request_0_0(mdb__debugger_interface__HeadVar__2_2, &mdb__debugger_interface__V_4_4);
        }
#line 89 "debugger_interface.m"
        {
#line 89 "debugger_interface.m"
          mdb__debugger_interface____Index____debugger_request_0_0(mdb__debugger_interface__HeadVar__3_3, &mdb__debugger_interface__V_5_5);
        }
#line 89 "debugger_interface.m"
        mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 < mdb__debugger_interface__V_5_5);
#line 89 "debugger_interface.m"
        if (mdb__debugger_interface__succeeded)
#line 8133 "mdb.debugger_interface.c"
          *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 1;
#line 89 "debugger_interface.m"
        else
#line 89 "debugger_interface.m"
          {
#line 89 "debugger_interface.m"
            mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_4_4 > mdb__debugger_interface__V_5_5);
#line 89 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 8143 "mdb.debugger_interface.c"
              *mdb__debugger_interface__HeadVar__1_1 = (MR_Integer) 2;
#line 89 "debugger_interface.m"
            else
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_6_6;

#line 89 "debugger_interface.m"
#line 89 "debugger_interface.m"
                switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) {
#line 89 "debugger_interface.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 89 "debugger_interface.m"
                  case (MR_Integer) 0:
#line 89 "debugger_interface.m"
#line 89 "debugger_interface.m"
                    switch (MR_unmkbody(mdb__debugger_interface__HeadVar__2_2)) {
#line 89 "debugger_interface.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 89 "debugger_interface.m"
                      case (MR_Integer) 0:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 1:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 2:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 3:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 4:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 5:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 6:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 7:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 8:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 9:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 10:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 11:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 12:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 13:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_6_6 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                    }
#line 89 "debugger_interface.m"
                    break;
#line 89 "debugger_interface.m"
                  case (MR_Integer) 1:
#line 89 "debugger_interface.m"
                    {
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_19_19;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_20_20;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_21_21;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_22_22;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_23_23;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_24_24;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_25_25;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_26_26;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_27_27;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_28_28;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_29_29;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_30_30;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__V_31_31;
#line 89 "debugger_interface.m"
                      MR_Word mdb__debugger_interface__TypeInfo_60_60;

#line 89 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 89 "debugger_interface.m"
                      if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 2)));
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 3)));
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 4)));
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 5)));
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 6)));
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 7)));
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 8)));
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 9)));
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 10)));
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 11)));
#line 8423 "mdb.debugger_interface.c"
                          mdb__debugger_interface__TypeInfo_60_60 = (MR_Word) &mdb__debugger_interface_scalar_common_1[1];
#line 89 "debugger_interface.m"
                          {
#line 89 "debugger_interface.m"
                            mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_60_60, &mdb__debugger_interface__V_31_31, ((MR_Box) (mdb__debugger_interface__V_7_7)), ((MR_Box) (mdb__debugger_interface__V_19_19)));
                          }
#line 8430 "mdb.debugger_interface.c"
                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_31_31 == (MR_Integer) 0);
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 89 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_31_31;
#line 89 "debugger_interface.m"
                          else
#line 89 "debugger_interface.m"
                            {
#line 89 "debugger_interface.m"
                              MR_Word mdb__debugger_interface__V_32_32;

#line 89 "debugger_interface.m"
                              {
#line 89 "debugger_interface.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_32_32, ((MR_Box) (mdb__debugger_interface__V_8_8)), ((MR_Box) (mdb__debugger_interface__V_20_20)));
                              }
#line 8450 "mdb.debugger_interface.c"
                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_32_32 == (MR_Integer) 0);
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 89 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_32_32;
#line 89 "debugger_interface.m"
                              else
#line 89 "debugger_interface.m"
                                {
#line 89 "debugger_interface.m"
                                  MR_Word mdb__debugger_interface__V_33_33;

#line 89 "debugger_interface.m"
                                  {
#line 89 "debugger_interface.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_33_33, ((MR_Box) (mdb__debugger_interface__V_9_9)), ((MR_Box) (mdb__debugger_interface__V_21_21)));
                                  }
#line 8470 "mdb.debugger_interface.c"
                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_33_33 == (MR_Integer) 0);
#line 89 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 89 "debugger_interface.m"
                                  if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_33_33;
#line 89 "debugger_interface.m"
                                  else
#line 89 "debugger_interface.m"
                                    {
#line 89 "debugger_interface.m"
                                      MR_Word mdb__debugger_interface__V_34_34;

#line 89 "debugger_interface.m"
                                      {
#line 89 "debugger_interface.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[2], &mdb__debugger_interface__V_34_34, ((MR_Box) (mdb__debugger_interface__V_10_10)), ((MR_Box) (mdb__debugger_interface__V_22_22)));
                                      }
#line 8490 "mdb.debugger_interface.c"
                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_34_34 == (MR_Integer) 0);
#line 89 "debugger_interface.m"
                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 89 "debugger_interface.m"
                                      if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_34_34;
#line 89 "debugger_interface.m"
                                      else
#line 89 "debugger_interface.m"
                                        {
#line 89 "debugger_interface.m"
                                          MR_Word mdb__debugger_interface__V_35_35;

#line 89 "debugger_interface.m"
                                          {
#line 89 "debugger_interface.m"
                                            mdb__debugger_interface____Compare____pred_match_0_0(&mdb__debugger_interface__V_35_35, mdb__debugger_interface__V_11_11, mdb__debugger_interface__V_23_23);
                                          }
#line 8510 "mdb.debugger_interface.c"
                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_35_35 == (MR_Integer) 0);
#line 89 "debugger_interface.m"
                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 89 "debugger_interface.m"
                                          if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_35_35;
#line 89 "debugger_interface.m"
                                          else
#line 89 "debugger_interface.m"
                                            {
#line 89 "debugger_interface.m"
                                              MR_Word mdb__debugger_interface__V_36_36;

#line 89 "debugger_interface.m"
                                              {
#line 89 "debugger_interface.m"
                                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], &mdb__debugger_interface__V_36_36, ((MR_Box) (mdb__debugger_interface__V_12_12)), ((MR_Box) (mdb__debugger_interface__V_24_24)));
                                              }
#line 8530 "mdb.debugger_interface.c"
                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_36_36 == (MR_Integer) 0);
#line 89 "debugger_interface.m"
                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 89 "debugger_interface.m"
                                              if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_36_36;
#line 89 "debugger_interface.m"
                                              else
#line 89 "debugger_interface.m"
                                                {
#line 89 "debugger_interface.m"
                                                  MR_Word mdb__debugger_interface__V_37_37;

#line 89 "debugger_interface.m"
                                                  {
#line 89 "debugger_interface.m"
                                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], &mdb__debugger_interface__V_37_37, ((MR_Box) (mdb__debugger_interface__V_13_13)), ((MR_Box) (mdb__debugger_interface__V_25_25)));
                                                  }
#line 8550 "mdb.debugger_interface.c"
                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_37_37 == (MR_Integer) 0);
#line 89 "debugger_interface.m"
                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 89 "debugger_interface.m"
                                                  if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_37_37;
#line 89 "debugger_interface.m"
                                                  else
#line 89 "debugger_interface.m"
                                                    {
#line 89 "debugger_interface.m"
                                                      MR_Word mdb__debugger_interface__V_38_38;

#line 89 "debugger_interface.m"
                                                      {
#line 89 "debugger_interface.m"
                                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_38_38, ((MR_Box) (mdb__debugger_interface__V_14_14)), ((MR_Box) (mdb__debugger_interface__V_26_26)));
                                                      }
#line 8570 "mdb.debugger_interface.c"
                                                      mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_38_38 == (MR_Integer) 0);
#line 89 "debugger_interface.m"
                                                      mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 89 "debugger_interface.m"
                                                      if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                                        mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_38_38;
#line 89 "debugger_interface.m"
                                                      else
#line 89 "debugger_interface.m"
                                                        {
#line 89 "debugger_interface.m"
                                                          MR_Word mdb__debugger_interface__V_39_39;

#line 89 "debugger_interface.m"
                                                          {
#line 89 "debugger_interface.m"
                                                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_39_39, ((MR_Box) (mdb__debugger_interface__V_15_15)), ((MR_Box) (mdb__debugger_interface__V_27_27)));
                                                          }
#line 8590 "mdb.debugger_interface.c"
                                                          mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_39_39 == (MR_Integer) 0);
#line 89 "debugger_interface.m"
                                                          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 89 "debugger_interface.m"
                                                          if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                                            mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_39_39;
#line 89 "debugger_interface.m"
                                                          else
#line 89 "debugger_interface.m"
                                                            {
#line 89 "debugger_interface.m"
                                                              MR_Word mdb__debugger_interface__V_40_40;

#line 89 "debugger_interface.m"
                                                              {
#line 89 "debugger_interface.m"
                                                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[1], &mdb__debugger_interface__V_40_40, ((MR_Box) (mdb__debugger_interface__V_16_16)), ((MR_Box) (mdb__debugger_interface__V_28_28)));
                                                              }
#line 8610 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_40_40 == (MR_Integer) 0);
#line 89 "debugger_interface.m"
                                                              mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 89 "debugger_interface.m"
                                                              if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                                                mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_40_40;
#line 89 "debugger_interface.m"
                                                              else
#line 89 "debugger_interface.m"
                                                                {
#line 89 "debugger_interface.m"
                                                                  MR_Word mdb__debugger_interface__V_41_41;

#line 89 "debugger_interface.m"
                                                                  {
#line 89 "debugger_interface.m"
                                                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[4], &mdb__debugger_interface__V_41_41, ((MR_Box) (mdb__debugger_interface__V_17_17)), ((MR_Box) (mdb__debugger_interface__V_29_29)));
                                                                  }
#line 8630 "mdb.debugger_interface.c"
                                                                  mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_41_41 == (MR_Integer) 0);
#line 89 "debugger_interface.m"
                                                                  mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 89 "debugger_interface.m"
                                                                  if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                                                    mdb__debugger_interface__V_6_6 = mdb__debugger_interface__V_41_41;
#line 89 "debugger_interface.m"
                                                                  else
#line 89 "debugger_interface.m"
                                                                    {
#line 89 "debugger_interface.m"
                                                                      {
#line 89 "debugger_interface.m"
                                                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__debugger_interface_scalar_common_1[3], &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_18_18)), ((MR_Box) (mdb__debugger_interface__V_30_30)));
                                                                      }
#line 89 "debugger_interface.m"
                                                                    }
#line 89 "debugger_interface.m"
                                                                }
#line 89 "debugger_interface.m"
                                                            }
#line 89 "debugger_interface.m"
                                                        }
#line 89 "debugger_interface.m"
                                                    }
#line 89 "debugger_interface.m"
                                                }
#line 89 "debugger_interface.m"
                                            }
#line 89 "debugger_interface.m"
                                        }
#line 89 "debugger_interface.m"
                                    }
#line 89 "debugger_interface.m"
                                }
#line 89 "debugger_interface.m"
                            }
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                    }
#line 89 "debugger_interface.m"
                    break;
#line 89 "debugger_interface.m"
                  case (MR_Integer) 2:
#line 89 "debugger_interface.m"
                    {
#line 89 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 89 "debugger_interface.m"
                      MR_Integer mdb__debugger_interface__V_43_43;

#line 89 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2)));
#line 89 "debugger_interface.m"
                      if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)));
#line 89 "debugger_interface.m"
                          {
#line 89 "debugger_interface.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_42_42, mdb__debugger_interface__V_43_43);
                          }
#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                    }
#line 89 "debugger_interface.m"
                    break;
#line 89 "debugger_interface.m"
                  case (MR_Integer) 3:
#line 89 "debugger_interface.m"
#line 89 "debugger_interface.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) {
#line 89 "debugger_interface.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 89 "debugger_interface.m"
                      case (MR_Integer) 0:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_45_45;

#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 89 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                            {
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                              {
#line 89 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_44_44, mdb__debugger_interface__V_45_45);
                              }
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                            }
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 1:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__TypeInfo_74_74;
#line 89 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_47_47;

#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                            {
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 8763 "mdb.debugger_interface.c"
                              mdb__debugger_interface__TypeInfo_74_74 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 89 "debugger_interface.m"
                              {
#line 89 "debugger_interface.m"
                                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_74_74, &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_46_46)), ((MR_Box) (mdb__debugger_interface__V_47_47)));
                              }
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                            }
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 2:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__TypeInfo_75_75;
#line 89 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_49_49;

#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 89 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                            {
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 8797 "mdb.debugger_interface.c"
                              mdb__debugger_interface__TypeInfo_75_75 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 89 "debugger_interface.m"
                              {
#line 89 "debugger_interface.m"
                                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_75_75, &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_48_48)), ((MR_Box) (mdb__debugger_interface__V_49_49)));
                              }
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                            }
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 3:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__TypeInfo_76_76;
#line 89 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                          MR_Word mdb__debugger_interface__V_51_51;

#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 89 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                            {
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 8831 "mdb.debugger_interface.c"
                              mdb__debugger_interface__TypeInfo_76_76 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 89 "debugger_interface.m"
                              {
#line 89 "debugger_interface.m"
                                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_76_76, &mdb__debugger_interface__V_6_6, ((MR_Box) (mdb__debugger_interface__V_50_50)), ((MR_Box) (mdb__debugger_interface__V_51_51)));
                              }
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                            }
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 4:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_52_52 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_53_53;

#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 89 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                            {
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__V_53_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                              {
#line 89 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_52_52, mdb__debugger_interface__V_53_53);
                              }
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                            }
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 5:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_54_54 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_55_55;

#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 89 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                            {
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__V_55_55 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                              {
#line 89 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_54_54, mdb__debugger_interface__V_55_55);
                              }
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                            }
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                      case (MR_Integer) 6:
#line 89 "debugger_interface.m"
                        {
#line 89 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_56_56 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                          MR_String mdb__debugger_interface__V_57_57;

#line 89 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 89 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                            {
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__3_3, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                              {
#line 89 "debugger_interface.m"
                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_56_56, mdb__debugger_interface__V_57_57);
                              }
#line 89 "debugger_interface.m"
                              mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
                            }
#line 89 "debugger_interface.m"
                        }
#line 89 "debugger_interface.m"
                        break;
#line 89 "debugger_interface.m"
                    }
#line 89 "debugger_interface.m"
                    break;
#line 89 "debugger_interface.m"
                }
#line 89 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                  *mdb__debugger_interface__HeadVar__1_1 = mdb__debugger_interface__V_6_6;
#line 89 "debugger_interface.m"
                else
#line 89 "debugger_interface.m"
                  {
#line 89 "debugger_interface.m"
                    mercury__private_builtin__compare_error_0_p_0();
#line 89 "debugger_interface.m"
                    return;
                  }
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
          }
#line 89 "debugger_interface.m"
      }
#line 89 "debugger_interface.m"
  }
#line 89 "debugger_interface.m"
}

#line 89 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Index____debugger_request_0_0(
#line 89 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 89 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__HeadVar__2_2)
#line 89 "debugger_interface.m"
{
#line 89 "debugger_interface.m"
  {
#line 89 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;

#line 89 "debugger_interface.m"
#line 89 "debugger_interface.m"
    switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
#line 89 "debugger_interface.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 89 "debugger_interface.m"
      case (MR_Integer) 0:
#line 89 "debugger_interface.m"
#line 89 "debugger_interface.m"
        switch (MR_unmkbody(mdb__debugger_interface__HeadVar__1_1)) {
#line 89 "debugger_interface.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 89 "debugger_interface.m"
          case (MR_Integer) 0:
#line 8994 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 0;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 1:
#line 9000 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 2;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 2:
#line 9006 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 3;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 3:
#line 9012 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 4;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 4:
#line 9018 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 6;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 5:
#line 9024 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 7;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 6:
#line 9030 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 8;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 7:
#line 9036 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 9;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 8:
#line 9042 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 10;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 9:
#line 9048 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 11;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 10:
#line 9054 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 19;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 11:
#line 9060 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 20;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 12:
#line 9066 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 21;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 13:
#line 9072 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 22;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
        }
#line 89 "debugger_interface.m"
        break;
#line 89 "debugger_interface.m"
      case (MR_Integer) 1:
#line 9082 "mdb.debugger_interface.c"
        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 1;
#line 89 "debugger_interface.m"
        break;
#line 89 "debugger_interface.m"
      case (MR_Integer) 2:
#line 9088 "mdb.debugger_interface.c"
        *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 5;
#line 89 "debugger_interface.m"
        break;
#line 89 "debugger_interface.m"
      case (MR_Integer) 3:
#line 89 "debugger_interface.m"
#line 89 "debugger_interface.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
#line 89 "debugger_interface.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 89 "debugger_interface.m"
          case (MR_Integer) 0:
#line 9101 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 12;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 1:
#line 9107 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 13;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 2:
#line 9113 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 14;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 3:
#line 9119 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 15;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 4:
#line 9125 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 16;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 5:
#line 9131 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 17;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
          case (MR_Integer) 6:
#line 9137 "mdb.debugger_interface.c"
            *mdb__debugger_interface__HeadVar__2_2 = (MR_Integer) 18;
#line 89 "debugger_interface.m"
            break;
#line 89 "debugger_interface.m"
        }
#line 89 "debugger_interface.m"
        break;
#line 89 "debugger_interface.m"
    }
#line 89 "debugger_interface.m"
  }
#line 89 "debugger_interface.m"
}

#line 89 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____debugger_request_0_0(
#line 89 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 89 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__2_2)
#line 89 "debugger_interface.m"
{
#line 89 "debugger_interface.m"
  {
#line 89 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 89 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastX_71 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__CastY_72 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
    mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastX_71 == mdb__debugger_interface__CastY_72);
#line 89 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
      mdb__debugger_interface__succeeded = MR_TRUE;
#line 89 "debugger_interface.m"
    else
#line 89 "debugger_interface.m"
#line 89 "debugger_interface.m"
      switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
#line 89 "debugger_interface.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 89 "debugger_interface.m"
        case (MR_Integer) 0:
#line 89 "debugger_interface.m"
#line 89 "debugger_interface.m"
          switch (MR_unmkbody(mdb__debugger_interface__HeadVar__1_1)) {
#line 89 "debugger_interface.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 89 "debugger_interface.m"
            case (MR_Integer) 0:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_3 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_4 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_4 == mdb__debugger_interface__CastX_3);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 1:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_29 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_30 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_30 == mdb__debugger_interface__CastX_29);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 2:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_31 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_32 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_32 == mdb__debugger_interface__CastX_31);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 3:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_33 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_34 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_34 == mdb__debugger_interface__CastX_33);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 4:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_37 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_38 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_38 == mdb__debugger_interface__CastX_37);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 5:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_39 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_40 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_40 == mdb__debugger_interface__CastX_39);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 6:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_41 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_42 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_42 == mdb__debugger_interface__CastX_41);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 7:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_43 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_44 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_44 == mdb__debugger_interface__CastX_43);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 8:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_45 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_46 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_46 == mdb__debugger_interface__CastX_45);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 9:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_47 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_48 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_48 == mdb__debugger_interface__CastX_47);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 10:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_63 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_64 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_64 == mdb__debugger_interface__CastX_63);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 11:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_65 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_66 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_66 == mdb__debugger_interface__CastX_65);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 12:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_67 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_68 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_68 == mdb__debugger_interface__CastX_67);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 13:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastX_69 = (MR_Integer) mdb__debugger_interface__HeadVar__1_1;
#line 89 "debugger_interface.m"
                MR_Integer mdb__debugger_interface__CastY_70 = (MR_Integer) mdb__debugger_interface__HeadVar__2_2;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__CastY_70 == mdb__debugger_interface__CastX_69);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
          }
#line 89 "debugger_interface.m"
          break;
#line 89 "debugger_interface.m"
        case (MR_Integer) 1:
#line 89 "debugger_interface.m"
          {
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_74_74;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_75_75;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_76_76;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_77_77;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_78_78;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_79_79;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_80_80;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_81_81;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_82_82;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeInfo_83_83;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__TypeCtorInfo_84_84;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 3)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 4)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 5)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 6)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 7)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 8)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 9)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 10)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 11)));
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_17_17;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_18_18;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_19_19;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_20_20;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_21_21;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_22_22;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_23_23;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_24_24;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_25_25;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_26_26;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_27_27;
#line 89 "debugger_interface.m"
            MR_Word mdb__debugger_interface__V_28_28;

#line 89 "debugger_interface.m"
            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 89 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 2)));
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 3)));
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 4)));
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 5)));
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 6)));
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 7)));
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 8)));
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 9)));
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 10)));
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 11)));
#line 9509 "mdb.debugger_interface.c"
                mdb__debugger_interface__TypeCtorInfo_74_74 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9511 "mdb.debugger_interface.c"
                {
#line 9513 "mdb.debugger_interface.c"
                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_74_74, mdb__debugger_interface__V_5_5, mdb__debugger_interface__V_17_17);
                }
#line 89 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                  {
#line 9520 "mdb.debugger_interface.c"
                    mdb__debugger_interface__TypeCtorInfo_75_75 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9522 "mdb.debugger_interface.c"
                    {
#line 9524 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_75_75, mdb__debugger_interface__V_6_6, mdb__debugger_interface__V_18_18);
                    }
#line 89 "debugger_interface.m"
                    if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                      {
#line 9531 "mdb.debugger_interface.c"
                        mdb__debugger_interface__TypeCtorInfo_76_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9533 "mdb.debugger_interface.c"
                        {
#line 9535 "mdb.debugger_interface.c"
                          mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_76_76, mdb__debugger_interface__V_7_7, mdb__debugger_interface__V_19_19);
                        }
#line 89 "debugger_interface.m"
                        if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                          {
#line 9542 "mdb.debugger_interface.c"
                            mdb__debugger_interface__TypeCtorInfo_77_77 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0;
#line 9544 "mdb.debugger_interface.c"
                            {
#line 9546 "mdb.debugger_interface.c"
                              mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_77_77, mdb__debugger_interface__V_8_8, mdb__debugger_interface__V_20_20);
                            }
#line 89 "debugger_interface.m"
                            if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                              {
#line 9553 "mdb.debugger_interface.c"
                                {
#line 9555 "mdb.debugger_interface.c"
                                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____pred_match_0_0(mdb__debugger_interface__V_9_9, mdb__debugger_interface__V_21_21);
                                }
#line 89 "debugger_interface.m"
                                if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                  {
#line 9562 "mdb.debugger_interface.c"
                                    mdb__debugger_interface__TypeCtorInfo_78_78 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9564 "mdb.debugger_interface.c"
                                    {
#line 9566 "mdb.debugger_interface.c"
                                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_78_78, mdb__debugger_interface__V_10_10, mdb__debugger_interface__V_22_22);
                                    }
#line 89 "debugger_interface.m"
                                    if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                      {
#line 9573 "mdb.debugger_interface.c"
                                        mdb__debugger_interface__TypeCtorInfo_79_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9575 "mdb.debugger_interface.c"
                                        {
#line 9577 "mdb.debugger_interface.c"
                                          mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_79_79, mdb__debugger_interface__V_11_11, mdb__debugger_interface__V_23_23);
                                        }
#line 89 "debugger_interface.m"
                                        if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                          {
#line 9584 "mdb.debugger_interface.c"
                                            mdb__debugger_interface__TypeCtorInfo_80_80 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9586 "mdb.debugger_interface.c"
                                            {
#line 9588 "mdb.debugger_interface.c"
                                              mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_80_80, mdb__debugger_interface__V_12_12, mdb__debugger_interface__V_24_24);
                                            }
#line 89 "debugger_interface.m"
                                            if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                              {
#line 9595 "mdb.debugger_interface.c"
                                                mdb__debugger_interface__TypeCtorInfo_81_81 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9597 "mdb.debugger_interface.c"
                                                {
#line 9599 "mdb.debugger_interface.c"
                                                  mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_81_81, mdb__debugger_interface__V_13_13, mdb__debugger_interface__V_25_25);
                                                }
#line 89 "debugger_interface.m"
                                                if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                                  {
#line 9606 "mdb.debugger_interface.c"
                                                    mdb__debugger_interface__TypeCtorInfo_82_82 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 9608 "mdb.debugger_interface.c"
                                                    {
#line 9610 "mdb.debugger_interface.c"
                                                      mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_82_82, mdb__debugger_interface__V_14_14, mdb__debugger_interface__V_26_26);
                                                    }
#line 89 "debugger_interface.m"
                                                    if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                                      {
#line 9617 "mdb.debugger_interface.c"
                                                        mdb__debugger_interface__TypeInfo_83_83 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
#line 9619 "mdb.debugger_interface.c"
                                                        {
#line 9621 "mdb.debugger_interface.c"
                                                          mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeInfo_83_83, mdb__debugger_interface__V_15_15, mdb__debugger_interface__V_27_27);
                                                        }
#line 89 "debugger_interface.m"
                                                        if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                                                          {
#line 9628 "mdb.debugger_interface.c"
                                                            mdb__debugger_interface__TypeCtorInfo_84_84 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 9630 "mdb.debugger_interface.c"
                                                            {
#line 9632 "mdb.debugger_interface.c"
                                                              mdb__debugger_interface__succeeded = mdb__debugger_interface____Unify____match_1_0(mdb__debugger_interface__TypeCtorInfo_84_84, mdb__debugger_interface__V_16_16, mdb__debugger_interface__V_28_28);
                                                            }
#line 89 "debugger_interface.m"
                                                          }
#line 89 "debugger_interface.m"
                                                      }
#line 89 "debugger_interface.m"
                                                  }
#line 89 "debugger_interface.m"
                                              }
#line 89 "debugger_interface.m"
                                          }
#line 89 "debugger_interface.m"
                                      }
#line 89 "debugger_interface.m"
                                  }
#line 89 "debugger_interface.m"
                              }
#line 89 "debugger_interface.m"
                          }
#line 89 "debugger_interface.m"
                      }
#line 89 "debugger_interface.m"
                  }
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
          }
#line 89 "debugger_interface.m"
          break;
#line 89 "debugger_interface.m"
        case (MR_Integer) 2:
#line 89 "debugger_interface.m"
          {
#line 89 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)));
#line 89 "debugger_interface.m"
            MR_Integer mdb__debugger_interface__V_36_36;

#line 89 "debugger_interface.m"
            mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 89 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                mdb__debugger_interface__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)));
#line 9680 "mdb.debugger_interface.c"
                mdb__debugger_interface__succeeded = (mdb__debugger_interface__V_35_35 == mdb__debugger_interface__V_36_36);
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
          }
#line 89 "debugger_interface.m"
          break;
#line 89 "debugger_interface.m"
        case (MR_Integer) 3:
#line 89 "debugger_interface.m"
#line 89 "debugger_interface.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
#line 89 "debugger_interface.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 89 "debugger_interface.m"
            case (MR_Integer) 0:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_49_49 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_50_50;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 89 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                  {
#line 89 "debugger_interface.m"
                    mdb__debugger_interface__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9712 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_49_49, mdb__debugger_interface__V_50_50) == 0);
#line 89 "debugger_interface.m"
                  }
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 1:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Word mdb__debugger_interface__TypeInfo_86_86;
#line 89 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_52_52;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                  {
#line 89 "debugger_interface.m"
                    mdb__debugger_interface__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9739 "mdb.debugger_interface.c"
                    mdb__debugger_interface__TypeInfo_86_86 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 9741 "mdb.debugger_interface.c"
                    {
#line 9743 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_86_86, ((MR_Box) (mdb__debugger_interface__V_51_51)), ((MR_Box) (mdb__debugger_interface__V_52_52)));
                    }
#line 89 "debugger_interface.m"
                  }
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 2:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Word mdb__debugger_interface__TypeInfo_73_73;
#line 89 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_54_54;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 89 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                  {
#line 89 "debugger_interface.m"
                    mdb__debugger_interface__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9771 "mdb.debugger_interface.c"
                    mdb__debugger_interface__TypeInfo_73_73 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 9773 "mdb.debugger_interface.c"
                    {
#line 9775 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_73_73, ((MR_Box) (mdb__debugger_interface__V_53_53)), ((MR_Box) (mdb__debugger_interface__V_54_54)));
                    }
#line 89 "debugger_interface.m"
                  }
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 3:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_Word mdb__debugger_interface__TypeInfo_85_85;
#line 89 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                MR_Word mdb__debugger_interface__V_56_56;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 89 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                  {
#line 89 "debugger_interface.m"
                    mdb__debugger_interface__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9803 "mdb.debugger_interface.c"
                    mdb__debugger_interface__TypeInfo_85_85 = (MR_Word) &mdb__debugger_interface_scalar_common_1[5];
#line 9805 "mdb.debugger_interface.c"
                    {
#line 9807 "mdb.debugger_interface.c"
                      mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_85_85, ((MR_Box) (mdb__debugger_interface__V_55_55)), ((MR_Box) (mdb__debugger_interface__V_56_56)));
                    }
#line 89 "debugger_interface.m"
                  }
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 4:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_57_57 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_58_58;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 89 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                  {
#line 89 "debugger_interface.m"
                    mdb__debugger_interface__V_58_58 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9833 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_57_57, mdb__debugger_interface__V_58_58) == 0);
#line 89 "debugger_interface.m"
                  }
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 5:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_59_59 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_60_60;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 89 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                  {
#line 89 "debugger_interface.m"
                    mdb__debugger_interface__V_60_60 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9858 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_59_59, mdb__debugger_interface__V_60_60) == 0);
#line 89 "debugger_interface.m"
                  }
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
            case (MR_Integer) 6:
#line 89 "debugger_interface.m"
              {
#line 89 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_61_61 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));
#line 89 "debugger_interface.m"
                MR_String mdb__debugger_interface__V_62_62;

#line 89 "debugger_interface.m"
                mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 89 "debugger_interface.m"
                if (mdb__debugger_interface__succeeded)
#line 89 "debugger_interface.m"
                  {
#line 89 "debugger_interface.m"
                    mdb__debugger_interface__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__2_2, (MR_Integer) 1)));
#line 9883 "mdb.debugger_interface.c"
                    mdb__debugger_interface__succeeded = (strcmp(mdb__debugger_interface__V_61_61, mdb__debugger_interface__V_62_62) == 0);
#line 89 "debugger_interface.m"
                  }
#line 89 "debugger_interface.m"
              }
#line 89 "debugger_interface.m"
              break;
#line 89 "debugger_interface.m"
          }
#line 89 "debugger_interface.m"
          break;
#line 89 "debugger_interface.m"
      }
#line 89 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 89 "debugger_interface.m"
  }
#line 89 "debugger_interface.m"
}

#line 190 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface____Compare____call_number_0_0(
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
    }
#line 190 "debugger_interface.m"
  }
#line 190 "debugger_interface.m"
}

#line 190 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface____Unify____call_number_0_0(
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

#line 644 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_variable_name_2_p_0(
#line 644 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 644 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4)
#line 644 "debugger_interface.m"
{
#line 649 "debugger_interface.m"
  {
#line 649 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 649 "debugger_interface.m"
    MR_String mdb__debugger_interface__OptionsPrime_5;

#line 649 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 649 "debugger_interface.m"
      {
#line 649 "debugger_interface.m"
        mdb__debugger_interface__OptionsPrime_5 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 1)));
#line 650 "debugger_interface.m"
        *mdb__debugger_interface__Options_4 = mdb__debugger_interface__OptionsPrime_5;
#line 649 "debugger_interface.m"
      }
#line 649 "debugger_interface.m"
    else
#line 652 "debugger_interface.m"
      {
#line 652 "debugger_interface.m"
        {
#line 652 "debugger_interface.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.get_variable_name\'/2", (MR_String) "not a browse request");
#line 652 "debugger_interface.m"
          return;
        }
#line 652 "debugger_interface.m"
      }
#line 649 "debugger_interface.m"
  }
#line 644 "debugger_interface.m"
}

#line 633 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__init_mercury_string_1_p_0(
#line 633 "debugger_interface.m"
  MR_String * mdb__debugger_interface__HeadVar__1_1)
#line 633 "debugger_interface.m"
{
#line 637 "debugger_interface.m"
  {
#line 637 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;

#line 637 "debugger_interface.m"
    *mdb__debugger_interface__HeadVar__1_1 = (MR_String) "";
#line 637 "debugger_interface.m"
  }
#line 633 "debugger_interface.m"
}

#line 620 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_object_file_name_2_p_0(
#line 620 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 620 "debugger_interface.m"
  MR_String * mdb__debugger_interface__ObjectFileName_4)
#line 620 "debugger_interface.m"
{
#line 625 "debugger_interface.m"
  {
#line 625 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 625 "debugger_interface.m"
    MR_String mdb__debugger_interface__ObjectFileNamePrime_5;

#line 625 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 625 "debugger_interface.m"
      {
#line 625 "debugger_interface.m"
        mdb__debugger_interface__ObjectFileNamePrime_5 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 1)));
#line 626 "debugger_interface.m"
        *mdb__debugger_interface__ObjectFileName_4 = mdb__debugger_interface__ObjectFileNamePrime_5;
#line 625 "debugger_interface.m"
      }
#line 625 "debugger_interface.m"
    else
#line 628 "debugger_interface.m"
      {
#line 628 "debugger_interface.m"
        {
#line 628 "debugger_interface.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.get_object_file_name\'/2", (MR_String) "not a link_collect request");
#line 628 "debugger_interface.m"
          return;
        }
#line 628 "debugger_interface.m"
      }
#line 625 "debugger_interface.m"
  }
#line 620 "debugger_interface.m"
}

#line 603 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_mmc_options_2_p_0(
#line 603 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3,
#line 603 "debugger_interface.m"
  MR_String * mdb__debugger_interface__Options_4)
#line 603 "debugger_interface.m"
{
#line 608 "debugger_interface.m"
  {
#line 608 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 608 "debugger_interface.m"
    MR_String mdb__debugger_interface__OptionsPrim_5;

#line 608 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 608 "debugger_interface.m"
      {
#line 608 "debugger_interface.m"
        mdb__debugger_interface__OptionsPrim_5 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 1)));
#line 609 "debugger_interface.m"
        *mdb__debugger_interface__Options_4 = mdb__debugger_interface__OptionsPrim_5;
#line 608 "debugger_interface.m"
      }
#line 608 "debugger_interface.m"
    else
#line 611 "debugger_interface.m"
      {
#line 611 "debugger_interface.m"
        {
#line 611 "debugger_interface.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.get_mmc_options\'/2", (MR_String) "not a mmc_options request");
#line 611 "debugger_interface.m"
          return;
        }
#line 611 "debugger_interface.m"
      }
#line 608 "debugger_interface.m"
  }
#line 603 "debugger_interface.m"
}

#line 583 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__get_list_modules_to_import_3_p_0(
#line 583 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_4,
#line 583 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__ListLength_5,
#line 583 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__ModulesList_6)
#line 583 "debugger_interface.m"
{
#line 589 "debugger_interface.m"
  {
#line 589 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 590 "debugger_interface.m"
    MR_Word mdb__debugger_interface__List_7;

#line 590 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 590 "debugger_interface.m"
      {
#line 590 "debugger_interface.m"
        mdb__debugger_interface__List_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 1)));
#line 591 "debugger_interface.m"
        *mdb__debugger_interface__ModulesList_6 = mdb__debugger_interface__List_7;
#line 590 "debugger_interface.m"
      }
#line 590 "debugger_interface.m"
    else
#line 592 "debugger_interface.m"
      {
#line 592 "debugger_interface.m"
        MR_Word mdb__debugger_interface__List_12;

#line 592 "debugger_interface.m"
        mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 592 "debugger_interface.m"
        if (mdb__debugger_interface__succeeded)
#line 592 "debugger_interface.m"
          {
#line 592 "debugger_interface.m"
            mdb__debugger_interface__List_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 1)));
#line 593 "debugger_interface.m"
            *mdb__debugger_interface__ModulesList_6 = mdb__debugger_interface__List_12;
#line 592 "debugger_interface.m"
          }
#line 592 "debugger_interface.m"
        else
#line 594 "debugger_interface.m"
          {
#line 594 "debugger_interface.m"
            MR_Word mdb__debugger_interface__List_11;

#line 594 "debugger_interface.m"
            mdb__debugger_interface__succeeded = ((((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 594 "debugger_interface.m"
            if (mdb__debugger_interface__succeeded)
#line 594 "debugger_interface.m"
              {
#line 594 "debugger_interface.m"
                mdb__debugger_interface__List_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__DebuggerRequest_4, (MR_Integer) 1)));
#line 595 "debugger_interface.m"
                *mdb__debugger_interface__ModulesList_6 = mdb__debugger_interface__List_11;
#line 594 "debugger_interface.m"
              }
#line 594 "debugger_interface.m"
            else
#line 597 "debugger_interface.m"
              {
#line 597 "debugger_interface.m"
                {
#line 597 "debugger_interface.m"
                  mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.get_list_modules_to_import\'/3", (MR_String) "not a query request");
#line 597 "debugger_interface.m"
                  return;
                }
#line 597 "debugger_interface.m"
              }
#line 594 "debugger_interface.m"
          }
#line 592 "debugger_interface.m"
      }
#line 599 "debugger_interface.m"
    {
#line 599 "debugger_interface.m"
      mercury__list__length_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, *mdb__debugger_interface__ModulesList_6, mdb__debugger_interface__ListLength_5);
    }
#line 589 "debugger_interface.m"
  }
#line 583 "debugger_interface.m"
}

#line 552 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__read_request_from_socket_5_p_0(
#line 552 "debugger_interface.m"
  MR_Word mdb__debugger_interface__SocketStream_6,
#line 552 "debugger_interface.m"
  MR_Word * mdb__debugger_interface__Request_7,
#line 552 "debugger_interface.m"
  MR_Integer * mdb__debugger_interface__RequestType_8)
#line 552 "debugger_interface.m"
{
#line 559 "debugger_interface.m"
  {
#line 559 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 559 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MaybeRequest_10;

#line 560 "debugger_interface.m"
    {
#line 560 "debugger_interface.m"
      mercury__io__read_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_request_0, mdb__debugger_interface__SocketStream_6, &mdb__debugger_interface__MaybeRequest_10);
    }
#line 10285 "mdb.debugger_interface.c"
#line 10286 "mdb.debugger_interface.c"
    switch (MR_tag((MR_Word) mdb__debugger_interface__MaybeRequest_10)) {
#line 10288 "mdb.debugger_interface.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 10290 "mdb.debugger_interface.c"
      case (MR_Integer) 0:
#line 10292 "mdb.debugger_interface.c"
        {
#line 569 "debugger_interface.m"
          *mdb__debugger_interface__Request_7 = (MR_Word) MR_mkword(MR_mktag(3), &mdb__debugger_interface_scalar_common_1[7]);
#line 667 "debugger_interface.m"
          *mdb__debugger_interface__RequestType_8 = (MR_Integer) 6;
#line 10298 "mdb.debugger_interface.c"
        }
#line 10300 "mdb.debugger_interface.c"
        break;
#line 10302 "mdb.debugger_interface.c"
      case (MR_Integer) 1:
#line 10304 "mdb.debugger_interface.c"
        {
#line 562 "debugger_interface.m"
          *mdb__debugger_interface__Request_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__MaybeRequest_10, (MR_Integer) 0)));
#line 661 "debugger_interface.m"
#line 661 "debugger_interface.m"
          switch (MR_tag((MR_Word) *mdb__debugger_interface__Request_7)) {
#line 661 "debugger_interface.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 661 "debugger_interface.m"
            case (MR_Integer) 0:
#line 661 "debugger_interface.m"
#line 661 "debugger_interface.m"
              switch (MR_unmkbody(*mdb__debugger_interface__Request_7)) {
#line 661 "debugger_interface.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 661 "debugger_interface.m"
                case (MR_Integer) 0:
#line 661 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 0;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 1:
#line 664 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 3;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 2:
#line 663 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 2;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 3:
#line 668 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 7;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 4:
#line 666 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 5;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 5:
#line 665 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 4;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 6:
#line 670 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 9;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 7:
#line 671 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 10;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 8:
#line 672 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 11;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 9:
#line 673 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 12;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 10:
#line 680 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 19;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 11:
#line 681 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 20;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 12:
#line 682 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 21;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 13:
#line 683 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 22;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
              }
#line 661 "debugger_interface.m"
              break;
#line 661 "debugger_interface.m"
            case (MR_Integer) 1:
#line 662 "debugger_interface.m"
              *mdb__debugger_interface__RequestType_8 = (MR_Integer) 1;
#line 661 "debugger_interface.m"
              break;
#line 661 "debugger_interface.m"
            case (MR_Integer) 2:
#line 669 "debugger_interface.m"
              *mdb__debugger_interface__RequestType_8 = (MR_Integer) 8;
#line 661 "debugger_interface.m"
              break;
#line 661 "debugger_interface.m"
            case (MR_Integer) 3:
#line 661 "debugger_interface.m"
#line 661 "debugger_interface.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), *mdb__debugger_interface__Request_7, (MR_Integer) 0)))) {
#line 661 "debugger_interface.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 661 "debugger_interface.m"
                case (MR_Integer) 0:
#line 667 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 6;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 1:
#line 674 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 13;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 2:
#line 675 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 14;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 3:
#line 676 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 15;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 4:
#line 677 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 16;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 5:
#line 678 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 17;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
                case (MR_Integer) 6:
#line 679 "debugger_interface.m"
                  *mdb__debugger_interface__RequestType_8 = (MR_Integer) 18;
#line 661 "debugger_interface.m"
                  break;
#line 661 "debugger_interface.m"
              }
#line 661 "debugger_interface.m"
              break;
#line 661 "debugger_interface.m"
          }
#line 10475 "mdb.debugger_interface.c"
        }
#line 10477 "mdb.debugger_interface.c"
        break;
#line 10479 "mdb.debugger_interface.c"
      case (MR_Integer) 2:
#line 10481 "mdb.debugger_interface.c"
        {
#line 10483 "mdb.debugger_interface.c"
          MR_String mdb__debugger_interface__ErrorMsg_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__MaybeRequest_10, (MR_Integer) 0)));
#line 565 "debugger_interface.m"
          MR_Integer mdb__debugger_interface___LineNum_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__MaybeRequest_10, (MR_Integer) 1)));

#line 566 "debugger_interface.m"
          {
#line 566 "debugger_interface.m"
            MR_Word base;
#line 566 "debugger_interface.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 566 "debugger_interface.m"
            *mdb__debugger_interface__Request_7 = base;
#line 566 "debugger_interface.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 566 "debugger_interface.m"
            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__debugger_interface__ErrorMsg_12));
#line 566 "debugger_interface.m"
          }
#line 667 "debugger_interface.m"
          *mdb__debugger_interface__RequestType_8 = (MR_Integer) 6;
#line 10504 "mdb.debugger_interface.c"
        }
#line 10506 "mdb.debugger_interface.c"
        break;
#line 10508 "mdb.debugger_interface.c"
    }
#line 559 "debugger_interface.m"
  }
#line 552 "debugger_interface.m"
}

#line 507 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__found_match_comp_14_p_0(
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 507 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 507 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_19,
#line 507 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_20,
#line 507 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 507 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 507 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 507 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 507 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 507 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
#line 507 "debugger_interface.m"
{
#line 518 "debugger_interface.m"
  {
#line 518 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_28)) == (MR_mktag((MR_Integer) 1)));
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchEventNumber_29;
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchCallNumber_30;
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDepthNumber_31;
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPort_32;
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CompilerGeneratedPredMatch_33;
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDefModuleName_34;
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPredName_35;
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchArity_36;
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchModeNum_37;
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDeterminism_38;
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchArgs_39;
#line 518 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPath_40;

#line 519 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 519 "debugger_interface.m"
      {
#line 519 "debugger_interface.m"
        mdb__debugger_interface__MatchEventNumber_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 0)));
#line 519 "debugger_interface.m"
        mdb__debugger_interface__MatchCallNumber_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 1)));
#line 519 "debugger_interface.m"
        mdb__debugger_interface__MatchDepthNumber_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 2)));
#line 519 "debugger_interface.m"
        mdb__debugger_interface__MatchPort_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 3)));
#line 519 "debugger_interface.m"
        mdb__debugger_interface__CompilerGeneratedPredMatch_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 4)));
#line 519 "debugger_interface.m"
        mdb__debugger_interface__MatchDefModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 5)));
#line 519 "debugger_interface.m"
        mdb__debugger_interface__MatchPredName_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 6)));
#line 519 "debugger_interface.m"
        mdb__debugger_interface__MatchArity_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 7)));
#line 519 "debugger_interface.m"
        mdb__debugger_interface__MatchModeNum_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 8)));
#line 519 "debugger_interface.m"
        mdb__debugger_interface__MatchDeterminism_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 9)));
#line 519 "debugger_interface.m"
        mdb__debugger_interface__MatchArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 10)));
#line 519 "debugger_interface.m"
        mdb__debugger_interface__MatchPath_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 11)));
#line 525 "debugger_interface.m"
        {
#line 525 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 525 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_47_47;
#line 525 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_49_49;
#line 525 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeInfo_50_50;
#line 529 "debugger_interface.m"
          MR_Word mdb__debugger_interface__MatchNameType_41;
#line 529 "debugger_interface.m"
          MR_Word mdb__debugger_interface__MatchModuleType_42;

#line 525 "debugger_interface.m"
          {
#line 525 "debugger_interface.m"
            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchEventNumber_29, ((MR_Box) (mdb__debugger_interface__EventNumber_15)));
          }
#line 525 "debugger_interface.m"
          if (mdb__debugger_interface__succeeded)
#line 525 "debugger_interface.m"
            {
#line 526 "debugger_interface.m"
              {
#line 526 "debugger_interface.m"
                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchCallNumber_30, ((MR_Box) (mdb__debugger_interface__CallNumber_16)));
              }
#line 525 "debugger_interface.m"
              if (mdb__debugger_interface__succeeded)
#line 525 "debugger_interface.m"
                {
#line 527 "debugger_interface.m"
                  {
#line 527 "debugger_interface.m"
                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchDepthNumber_31, ((MR_Box) (mdb__debugger_interface__DepthNumber_17)));
                  }
#line 525 "debugger_interface.m"
                  if (mdb__debugger_interface__succeeded)
#line 525 "debugger_interface.m"
                    {
#line 10647 "mdb.debugger_interface.c"
                      mdb__debugger_interface__TypeCtorInfo_47_47 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0;
#line 528 "debugger_interface.m"
                      {
#line 528 "debugger_interface.m"
                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_47_47, mdb__debugger_interface__MatchPort_32, ((MR_Box) (mdb__debugger_interface__Port_18)));
                      }
#line 525 "debugger_interface.m"
                      if (mdb__debugger_interface__succeeded)
#line 525 "debugger_interface.m"
                        {
#line 530 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__CompilerGeneratedPredMatch_33)) == (MR_mktag((MR_Integer) 2)));
#line 530 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 530 "debugger_interface.m"
                            {
#line 530 "debugger_interface.m"
                              mdb__debugger_interface__MatchNameType_41 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__CompilerGeneratedPredMatch_33, (MR_Integer) 0)));
#line 530 "debugger_interface.m"
                              mdb__debugger_interface__MatchModuleType_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__CompilerGeneratedPredMatch_33, (MR_Integer) 1)));
#line 534 "debugger_interface.m"
                              {
#line 534 "debugger_interface.m"
                                MR_Word mdb__debugger_interface__TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

#line 534 "debugger_interface.m"
                                {
#line 534 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_48_48, mdb__debugger_interface__MatchNameType_41, ((MR_Box) (mdb__debugger_interface__NameType_19)));
                                }
#line 534 "debugger_interface.m"
                                if (mdb__debugger_interface__succeeded)
#line 535 "debugger_interface.m"
                                  {
#line 535 "debugger_interface.m"
                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_48_48, mdb__debugger_interface__MatchModuleType_42, ((MR_Box) (mdb__debugger_interface__ModuleType_20)));
                                  }
#line 534 "debugger_interface.m"
                              }
#line 530 "debugger_interface.m"
                            }
#line 530 "debugger_interface.m"
                          else
#line 537 "debugger_interface.m"
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__CompilerGeneratedPredMatch_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 525 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 525 "debugger_interface.m"
                            {
#line 10697 "mdb.debugger_interface.c"
                              mdb__debugger_interface__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 539 "debugger_interface.m"
                              {
#line 539 "debugger_interface.m"
                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_49_49, mdb__debugger_interface__MatchDefModuleName_34, ((MR_Box) (mdb__debugger_interface__DefModuleName_21)));
                              }
#line 525 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 525 "debugger_interface.m"
                                {
#line 540 "debugger_interface.m"
                                  {
#line 540 "debugger_interface.m"
                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_49_49, mdb__debugger_interface__MatchPredName_35, ((MR_Box) (mdb__debugger_interface__PredName_22)));
                                  }
#line 525 "debugger_interface.m"
                                  if (mdb__debugger_interface__succeeded)
#line 525 "debugger_interface.m"
                                    {
#line 541 "debugger_interface.m"
                                      {
#line 541 "debugger_interface.m"
                                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchArity_36, ((MR_Box) (mdb__debugger_interface__Arity_23)));
                                      }
#line 525 "debugger_interface.m"
                                      if (mdb__debugger_interface__succeeded)
#line 525 "debugger_interface.m"
                                        {
#line 542 "debugger_interface.m"
                                          {
#line 542 "debugger_interface.m"
                                            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchModeNum_37, ((MR_Box) (mdb__debugger_interface__ModeNum_24)));
                                          }
#line 525 "debugger_interface.m"
                                          if (mdb__debugger_interface__succeeded)
#line 525 "debugger_interface.m"
                                            {
#line 543 "debugger_interface.m"
                                              {
#line 543 "debugger_interface.m"
                                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchDeterminism_38, ((MR_Box) (mdb__debugger_interface__Determinism_25)));
                                              }
#line 525 "debugger_interface.m"
                                              if (mdb__debugger_interface__succeeded)
#line 525 "debugger_interface.m"
                                                {
#line 10744 "mdb.debugger_interface.c"
                                                  mdb__debugger_interface__TypeInfo_50_50 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
#line 544 "debugger_interface.m"
                                                  {
#line 544 "debugger_interface.m"
                                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeInfo_50_50, mdb__debugger_interface__MatchArgs_39, ((MR_Box) (mdb__debugger_interface__Args_26)));
                                                  }
#line 525 "debugger_interface.m"
                                                  if (mdb__debugger_interface__succeeded)
#line 545 "debugger_interface.m"
                                                    {
#line 545 "debugger_interface.m"
                                                      mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_49_49, mdb__debugger_interface__MatchPath_40, ((MR_Box) (mdb__debugger_interface__Path_27)));
                                                    }
#line 525 "debugger_interface.m"
                                                }
#line 525 "debugger_interface.m"
                                            }
#line 525 "debugger_interface.m"
                                        }
#line 525 "debugger_interface.m"
                                    }
#line 525 "debugger_interface.m"
                                }
#line 525 "debugger_interface.m"
                            }
#line 525 "debugger_interface.m"
                        }
#line 525 "debugger_interface.m"
                    }
#line 525 "debugger_interface.m"
                }
#line 525 "debugger_interface.m"
            }
#line 525 "debugger_interface.m"
        }
#line 519 "debugger_interface.m"
      }
#line 519 "debugger_interface.m"
    else
#line 547 "debugger_interface.m"
      {
#line 547 "debugger_interface.m"
        {
#line 547 "debugger_interface.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.found_match_comp\'/14", (MR_String) "forward_move expected");
        }
#line 547 "debugger_interface.m"
        mdb__debugger_interface__succeeded = MR_TRUE;
#line 547 "debugger_interface.m"
      }
#line 518 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 518 "debugger_interface.m"
  }
#line 507 "debugger_interface.m"
}

#line 490 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__match_2_p_0(
#line 490 "debugger_interface.m"
  MR_Word mdb__debugger_interface__TypeInfo_for_T_14,
#line 490 "debugger_interface.m"
  MR_Word mdb__debugger_interface__HeadVar__1_1,
#line 490 "debugger_interface.m"
  MR_Box mdb__debugger_interface__HeadVar__2_2)
#line 490 "debugger_interface.m"
{
#line 492 "debugger_interface.m"
  {
#line 492 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;

#line 492 "debugger_interface.m"
#line 492 "debugger_interface.m"
    switch (MR_tag((MR_Word) mdb__debugger_interface__HeadVar__1_1)) {
#line 492 "debugger_interface.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 492 "debugger_interface.m"
      case (MR_Integer) 0:
#line 492 "debugger_interface.m"
        mdb__debugger_interface__succeeded = MR_TRUE;
#line 492 "debugger_interface.m"
        break;
#line 492 "debugger_interface.m"
      case (MR_Integer) 1:
#line 493 "debugger_interface.m"
        {
#line 493 "debugger_interface.m"
          MR_Box mdb__debugger_interface__X_4 = (MR_hl_field(MR_mktag(1), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));

#line 493 "debugger_interface.m"
          {
#line 493 "debugger_interface.m"
            mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_14, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__X_4);
          }
#line 493 "debugger_interface.m"
        }
#line 492 "debugger_interface.m"
        break;
#line 492 "debugger_interface.m"
      case (MR_Integer) 2:
#line 494 "debugger_interface.m"
        {
#line 494 "debugger_interface.m"
          MR_Box mdb__debugger_interface__X_5 = (MR_hl_field(MR_mktag(2), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0));

#line 494 "debugger_interface.m"
          {
#line 494 "debugger_interface.m"
            mdb__debugger_interface__succeeded = mercury__builtin__unify_2_p_0(mdb__debugger_interface__TypeInfo_for_T_14, mdb__debugger_interface__X_5, mdb__debugger_interface__HeadVar__2_2);
          }
#line 494 "debugger_interface.m"
          mdb__debugger_interface__succeeded = !(mdb__debugger_interface__succeeded);
#line 494 "debugger_interface.m"
        }
#line 492 "debugger_interface.m"
        break;
#line 492 "debugger_interface.m"
      case (MR_Integer) 3:
#line 492 "debugger_interface.m"
#line 492 "debugger_interface.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 0)))) {
#line 492 "debugger_interface.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 492 "debugger_interface.m"
          case (MR_Integer) 0:
#line 495 "debugger_interface.m"
            {
#line 495 "debugger_interface.m"
              MR_Word mdb__debugger_interface__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1)));

#line 495 "debugger_interface.m"
              {
#line 495 "debugger_interface.m"
                mdb__debugger_interface__succeeded = mercury__list__member_2_p_0(mdb__debugger_interface__TypeInfo_for_T_14, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__L_7);
              }
#line 495 "debugger_interface.m"
            }
#line 492 "debugger_interface.m"
            break;
#line 492 "debugger_interface.m"
          case (MR_Integer) 1:
#line 496 "debugger_interface.m"
            {
#line 496 "debugger_interface.m"
              MR_Box mdb__debugger_interface__Low_9 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 1));
#line 496 "debugger_interface.m"
              MR_Box mdb__debugger_interface__High_10 = (MR_hl_field(MR_mktag(3), mdb__debugger_interface__HeadVar__1_1, (MR_Integer) 2));
#line 496 "debugger_interface.m"
              MR_Word mdb__debugger_interface__LE_12;
#line 496 "debugger_interface.m"
              MR_Word mdb__debugger_interface__GE_13;

#line 498 "debugger_interface.m"
              {
#line 498 "debugger_interface.m"
                mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_14, &mdb__debugger_interface__LE_12, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__High_10);
              }
#line 499 "debugger_interface.m"
#line 499 "debugger_interface.m"
              switch (mdb__debugger_interface__LE_12) {
#line 499 "debugger_interface.m"
                default:
#line 499 "debugger_interface.m"
                  mdb__debugger_interface__succeeded = MR_FALSE;
#line 499 "debugger_interface.m"
                  break;
#line 499 "debugger_interface.m"
                case (MR_Integer) 1:
#line 499 "debugger_interface.m"
                  mdb__debugger_interface__succeeded = MR_TRUE;
#line 499 "debugger_interface.m"
                  break;
#line 499 "debugger_interface.m"
                case (MR_Integer) 0:
#line 499 "debugger_interface.m"
                  mdb__debugger_interface__succeeded = MR_TRUE;
#line 499 "debugger_interface.m"
                  break;
#line 499 "debugger_interface.m"
              }
#line 496 "debugger_interface.m"
              if (mdb__debugger_interface__succeeded)
#line 496 "debugger_interface.m"
                {
#line 500 "debugger_interface.m"
                  {
#line 500 "debugger_interface.m"
                    mercury__builtin__compare_3_p_0(mdb__debugger_interface__TypeInfo_for_T_14, &mdb__debugger_interface__GE_13, mdb__debugger_interface__HeadVar__2_2, mdb__debugger_interface__Low_9);
                  }
#line 501 "debugger_interface.m"
#line 501 "debugger_interface.m"
                  switch (mdb__debugger_interface__GE_13) {
#line 501 "debugger_interface.m"
                    default:
#line 501 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = MR_FALSE;
#line 501 "debugger_interface.m"
                      break;
#line 501 "debugger_interface.m"
                    case (MR_Integer) 0:
#line 501 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 501 "debugger_interface.m"
                      break;
#line 501 "debugger_interface.m"
                    case (MR_Integer) 2:
#line 501 "debugger_interface.m"
                      mdb__debugger_interface__succeeded = MR_TRUE;
#line 501 "debugger_interface.m"
                      break;
#line 501 "debugger_interface.m"
                  }
#line 496 "debugger_interface.m"
                }
#line 496 "debugger_interface.m"
            }
#line 492 "debugger_interface.m"
            break;
#line 492 "debugger_interface.m"
        }
#line 492 "debugger_interface.m"
        break;
#line 492 "debugger_interface.m"
    }
#line 492 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 492 "debugger_interface.m"
  }
#line 490 "debugger_interface.m"
}

#line 445 "debugger_interface.m"
static MR_bool MR_CALL 
mdb__debugger_interface__found_match_user_14_p_0(
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_15,
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_16,
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_17,
#line 445 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_18,
#line 445 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_19,
#line 445 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_20,
#line 445 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_21,
#line 445 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_22,
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_23,
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_24,
#line 445 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_25,
#line 445 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Args_26,
#line 445 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_27,
#line 445 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_28)
#line 445 "debugger_interface.m"
{
#line 456 "debugger_interface.m"
  {
#line 456 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_28)) == (MR_mktag((MR_Integer) 1)));
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchEventNumber_29;
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchCallNumber_30;
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDepthNumber_31;
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPort_32;
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__UserPredMatch_33;
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDefModuleName_34;
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPredName_35;
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchArity_36;
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchModeNum_37;
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchDeterminism_38;
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchArgs_39;
#line 456 "debugger_interface.m"
    MR_Word mdb__debugger_interface__MatchPath_40;

#line 457 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 457 "debugger_interface.m"
      {
#line 457 "debugger_interface.m"
        mdb__debugger_interface__MatchEventNumber_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 0)));
#line 457 "debugger_interface.m"
        mdb__debugger_interface__MatchCallNumber_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 1)));
#line 457 "debugger_interface.m"
        mdb__debugger_interface__MatchDepthNumber_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 2)));
#line 457 "debugger_interface.m"
        mdb__debugger_interface__MatchPort_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 3)));
#line 457 "debugger_interface.m"
        mdb__debugger_interface__UserPredMatch_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 4)));
#line 457 "debugger_interface.m"
        mdb__debugger_interface__MatchDefModuleName_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 5)));
#line 457 "debugger_interface.m"
        mdb__debugger_interface__MatchPredName_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 6)));
#line 457 "debugger_interface.m"
        mdb__debugger_interface__MatchArity_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 7)));
#line 457 "debugger_interface.m"
        mdb__debugger_interface__MatchModeNum_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 8)));
#line 457 "debugger_interface.m"
        mdb__debugger_interface__MatchDeterminism_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 9)));
#line 457 "debugger_interface.m"
        mdb__debugger_interface__MatchArgs_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 10)));
#line 457 "debugger_interface.m"
        mdb__debugger_interface__MatchPath_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__DebuggerRequest_28, (MR_Integer) 11)));
#line 463 "debugger_interface.m"
        {
#line 463 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_46_46 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 463 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_47_47;
#line 463 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeCtorInfo_50_50;
#line 463 "debugger_interface.m"
          MR_Word mdb__debugger_interface__TypeInfo_51_51;
#line 467 "debugger_interface.m"
          MR_Word mdb__debugger_interface__MatchPredOrFunc_41;
#line 467 "debugger_interface.m"
          MR_Word mdb__debugger_interface__MatchDeclModuleName_42;

#line 463 "debugger_interface.m"
          {
#line 463 "debugger_interface.m"
            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchEventNumber_29, ((MR_Box) (mdb__debugger_interface__EventNumber_15)));
          }
#line 463 "debugger_interface.m"
          if (mdb__debugger_interface__succeeded)
#line 463 "debugger_interface.m"
            {
#line 464 "debugger_interface.m"
              {
#line 464 "debugger_interface.m"
                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchCallNumber_30, ((MR_Box) (mdb__debugger_interface__CallNumber_16)));
              }
#line 463 "debugger_interface.m"
              if (mdb__debugger_interface__succeeded)
#line 463 "debugger_interface.m"
                {
#line 465 "debugger_interface.m"
                  {
#line 465 "debugger_interface.m"
                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchDepthNumber_31, ((MR_Box) (mdb__debugger_interface__DepthNumber_17)));
                  }
#line 463 "debugger_interface.m"
                  if (mdb__debugger_interface__succeeded)
#line 463 "debugger_interface.m"
                    {
#line 11110 "mdb.debugger_interface.c"
                      mdb__debugger_interface__TypeCtorInfo_47_47 = (MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_trace_port_0;
#line 466 "debugger_interface.m"
                      {
#line 466 "debugger_interface.m"
                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_47_47, mdb__debugger_interface__MatchPort_32, ((MR_Box) (mdb__debugger_interface__Port_18)));
                      }
#line 463 "debugger_interface.m"
                      if (mdb__debugger_interface__succeeded)
#line 463 "debugger_interface.m"
                        {
#line 468 "debugger_interface.m"
                          mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__UserPredMatch_33)) == (MR_mktag((MR_Integer) 1)));
#line 468 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 468 "debugger_interface.m"
                            {
#line 468 "debugger_interface.m"
                              mdb__debugger_interface__MatchPredOrFunc_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__UserPredMatch_33, (MR_Integer) 0)));
#line 468 "debugger_interface.m"
                              mdb__debugger_interface__MatchDeclModuleName_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__debugger_interface__UserPredMatch_33, (MR_Integer) 1)));
#line 471 "debugger_interface.m"
                              {
#line 471 "debugger_interface.m"
                                MR_Word mdb__debugger_interface__TypeCtorInfo_49_49;

#line 471 "debugger_interface.m"
                                {
#line 471 "debugger_interface.m"
                                  mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0((MR_Word) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_pred_or_func_0, mdb__debugger_interface__MatchPredOrFunc_41, ((MR_Box) (mdb__debugger_interface__PredOrFunc_19)));
                                }
#line 471 "debugger_interface.m"
                                if (mdb__debugger_interface__succeeded)
#line 471 "debugger_interface.m"
                                  {
#line 11145 "mdb.debugger_interface.c"
                                    mdb__debugger_interface__TypeCtorInfo_49_49 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 472 "debugger_interface.m"
                                    {
#line 472 "debugger_interface.m"
                                      mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_49_49, mdb__debugger_interface__MatchDeclModuleName_42, ((MR_Box) (mdb__debugger_interface__DeclModuleName_20)));
                                    }
#line 471 "debugger_interface.m"
                                  }
#line 471 "debugger_interface.m"
                              }
#line 468 "debugger_interface.m"
                            }
#line 468 "debugger_interface.m"
                          else
#line 474 "debugger_interface.m"
                            mdb__debugger_interface__succeeded = (mdb__debugger_interface__UserPredMatch_33 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 463 "debugger_interface.m"
                          if (mdb__debugger_interface__succeeded)
#line 463 "debugger_interface.m"
                            {
#line 11166 "mdb.debugger_interface.c"
                              mdb__debugger_interface__TypeCtorInfo_50_50 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 476 "debugger_interface.m"
                              {
#line 476 "debugger_interface.m"
                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_50_50, mdb__debugger_interface__MatchDefModuleName_34, ((MR_Box) (mdb__debugger_interface__DefModuleName_21)));
                              }
#line 463 "debugger_interface.m"
                              if (mdb__debugger_interface__succeeded)
#line 463 "debugger_interface.m"
                                {
#line 477 "debugger_interface.m"
                                  {
#line 477 "debugger_interface.m"
                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_50_50, mdb__debugger_interface__MatchPredName_35, ((MR_Box) (mdb__debugger_interface__PredName_22)));
                                  }
#line 463 "debugger_interface.m"
                                  if (mdb__debugger_interface__succeeded)
#line 463 "debugger_interface.m"
                                    {
#line 478 "debugger_interface.m"
                                      {
#line 478 "debugger_interface.m"
                                        mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchArity_36, ((MR_Box) (mdb__debugger_interface__Arity_23)));
                                      }
#line 463 "debugger_interface.m"
                                      if (mdb__debugger_interface__succeeded)
#line 463 "debugger_interface.m"
                                        {
#line 479 "debugger_interface.m"
                                          {
#line 479 "debugger_interface.m"
                                            mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchModeNum_37, ((MR_Box) (mdb__debugger_interface__ModeNum_24)));
                                          }
#line 463 "debugger_interface.m"
                                          if (mdb__debugger_interface__succeeded)
#line 463 "debugger_interface.m"
                                            {
#line 480 "debugger_interface.m"
                                              {
#line 480 "debugger_interface.m"
                                                mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_46_46, mdb__debugger_interface__MatchDeterminism_38, ((MR_Box) (mdb__debugger_interface__Determinism_25)));
                                              }
#line 463 "debugger_interface.m"
                                              if (mdb__debugger_interface__succeeded)
#line 463 "debugger_interface.m"
                                                {
#line 11213 "mdb.debugger_interface.c"
                                                  mdb__debugger_interface__TypeInfo_51_51 = (MR_Word) &mdb__debugger_interface_scalar_common_1[0];
#line 481 "debugger_interface.m"
                                                  {
#line 481 "debugger_interface.m"
                                                    mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeInfo_51_51, mdb__debugger_interface__MatchArgs_39, ((MR_Box) (mdb__debugger_interface__Args_26)));
                                                  }
#line 463 "debugger_interface.m"
                                                  if (mdb__debugger_interface__succeeded)
#line 482 "debugger_interface.m"
                                                    {
#line 482 "debugger_interface.m"
                                                      mdb__debugger_interface__succeeded = mdb__debugger_interface__match_2_p_0(mdb__debugger_interface__TypeCtorInfo_50_50, mdb__debugger_interface__MatchPath_40, ((MR_Box) (mdb__debugger_interface__Path_27)));
                                                    }
#line 463 "debugger_interface.m"
                                                }
#line 463 "debugger_interface.m"
                                            }
#line 463 "debugger_interface.m"
                                        }
#line 463 "debugger_interface.m"
                                    }
#line 463 "debugger_interface.m"
                                }
#line 463 "debugger_interface.m"
                            }
#line 463 "debugger_interface.m"
                        }
#line 463 "debugger_interface.m"
                    }
#line 463 "debugger_interface.m"
                }
#line 463 "debugger_interface.m"
            }
#line 463 "debugger_interface.m"
        }
#line 457 "debugger_interface.m"
      }
#line 457 "debugger_interface.m"
    else
#line 484 "debugger_interface.m"
      {
#line 484 "debugger_interface.m"
        {
#line 484 "debugger_interface.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "predicate \140mdb.debugger_interface.found_match_user\'/14", (MR_String) "forward_move expected");
        }
#line 484 "debugger_interface.m"
        mdb__debugger_interface__succeeded = MR_TRUE;
#line 484 "debugger_interface.m"
      }
#line 456 "debugger_interface.m"
    return mdb__debugger_interface__succeeded;
#line 456 "debugger_interface.m"
  }
#line 445 "debugger_interface.m"
}

#line 430 "debugger_interface.m"
static MR_Integer MR_CALL 
mdb__debugger_interface__get_var_number_1_f_0(
#line 430 "debugger_interface.m"
  MR_Word mdb__debugger_interface__DebuggerRequest_3)
#line 430 "debugger_interface.m"
{
#line 433 "debugger_interface.m"
  {
#line 433 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded = ((MR_tag((MR_Word) mdb__debugger_interface__DebuggerRequest_3)) == (MR_mktag((MR_Integer) 2)));
#line 433 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__VarNumber_4;
#line 433 "debugger_interface.m"
    MR_Integer mdb__debugger_interface__Var_5;

#line 433 "debugger_interface.m"
    if (mdb__debugger_interface__succeeded)
#line 433 "debugger_interface.m"
      {
#line 433 "debugger_interface.m"
        mdb__debugger_interface__Var_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__debugger_interface__DebuggerRequest_3, (MR_Integer) 0)));
#line 434 "debugger_interface.m"
        mdb__debugger_interface__VarNumber_4 = mdb__debugger_interface__Var_5;
#line 433 "debugger_interface.m"
      }
#line 433 "debugger_interface.m"
    else
#line 436 "debugger_interface.m"
      {
#line 436 "debugger_interface.m"
        {
#line 436 "debugger_interface.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdb.debugger_interface", (MR_String) "function \140mdb.debugger_interface.get_var_number\'/1", (MR_String) "not a current_nth_var request");
        }
#line 436 "debugger_interface.m"
      }
#line 433 "debugger_interface.m"
    return mdb__debugger_interface__VarNumber_4;
#line 433 "debugger_interface.m"
  }
#line 430 "debugger_interface.m"
}

#line 411 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_live_var_names_5_p_0(
#line 411 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarNameList_6,
#line 411 "debugger_interface.m"
  MR_Word mdb__debugger_interface__LiveVarTypeList_7,
#line 411 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8)
#line 411 "debugger_interface.m"
{
#line 415 "debugger_interface.m"
  {
#line 415 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 415 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CurrentTraceInfo_10;

#line 416 "debugger_interface.m"
    {
#line 416 "debugger_interface.m"
      mdb__debugger_interface__CurrentTraceInfo_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 416 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 416 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 1) = ((MR_Box) (mdb__debugger_interface__LiveVarNameList_6));
#line 416 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 2) = ((MR_Box) (mdb__debugger_interface__LiveVarTypeList_7));
#line 416 "debugger_interface.m"
    }
#line 418 "debugger_interface.m"
    {
#line 418 "debugger_interface.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_10)));
    }
#line 419 "debugger_interface.m"
    {
#line 419 "debugger_interface.m"
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) ((MR_String) ".\n")));
    }
#line 420 "debugger_interface.m"
    {
#line 420 "debugger_interface.m"
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_8);
    }
#line 415 "debugger_interface.m"
  }
#line 411 "debugger_interface.m"
}

#line 398 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_nth_var_4_p_0(
#line 398 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Var_5,
#line 398 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_6)
#line 398 "debugger_interface.m"
{
#line 401 "debugger_interface.m"
  {
#line 401 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 401 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CurrentTraceInfo_8;

#line 402 "debugger_interface.m"
    {
#line 402 "debugger_interface.m"
      mdb__debugger_interface__CurrentTraceInfo_8 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 402 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_8, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 402 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_8, 1) = ((MR_Box) (mdb__debugger_interface__Var_5));
#line 402 "debugger_interface.m"
    }
#line 403 "debugger_interface.m"
    {
#line 403 "debugger_interface.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_6, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_8)));
    }
#line 404 "debugger_interface.m"
    {
#line 404 "debugger_interface.m"
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_6, ((MR_Box) ((MR_String) ".\n")));
    }
#line 405 "debugger_interface.m"
    {
#line 405 "debugger_interface.m"
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_6);
    }
#line 401 "debugger_interface.m"
  }
#line 398 "debugger_interface.m"
}

#line 383 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_vars_5_p_0(
#line 383 "debugger_interface.m"
  MR_Word mdb__debugger_interface__VarList_6,
#line 383 "debugger_interface.m"
  MR_Word mdb__debugger_interface__StringList_7,
#line 383 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_8)
#line 383 "debugger_interface.m"
{
#line 386 "debugger_interface.m"
  {
#line 386 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 386 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CurrentTraceInfo_10;

#line 387 "debugger_interface.m"
    {
#line 387 "debugger_interface.m"
      mdb__debugger_interface__CurrentTraceInfo_10 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 387 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 387 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 1) = ((MR_Box) (mdb__debugger_interface__VarList_6));
#line 387 "debugger_interface.m"
      MR_hl_field(MR_mktag(3), mdb__debugger_interface__CurrentTraceInfo_10, 2) = ((MR_Box) (mdb__debugger_interface__StringList_7));
#line 387 "debugger_interface.m"
    }
#line 388 "debugger_interface.m"
    {
#line 388 "debugger_interface.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_10)));
    }
#line 389 "debugger_interface.m"
    {
#line 389 "debugger_interface.m"
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_8, ((MR_Box) ((MR_String) ".\n")));
    }
#line 390 "debugger_interface.m"
    {
#line 390 "debugger_interface.m"
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_8);
    }
#line 386 "debugger_interface.m"
  }
#line 383 "debugger_interface.m"
}

#line 359 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_slots_comp_16_p_0(
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 359 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 359 "debugger_interface.m"
  MR_String mdb__debugger_interface__NameType_21,
#line 359 "debugger_interface.m"
  MR_String mdb__debugger_interface__ModuleType_22,
#line 359 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 359 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 359 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 359 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 359 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_30)
#line 359 "debugger_interface.m"
{
#line 368 "debugger_interface.m"
  {
#line 368 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 368 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CurrentTraceInfo_32;

#line 369 "debugger_interface.m"
    {
#line 369 "debugger_interface.m"
      mdb__debugger_interface__CurrentTraceInfo_32 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 13 * sizeof(MR_Word)), NULL, NULL));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 0) = ((MR_Box) (mdb__debugger_interface__EventNumber_17));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 1) = ((MR_Box) (mdb__debugger_interface__CallNumber_18));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 2) = ((MR_Box) (mdb__debugger_interface__DepthNumber_19));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 3) = ((MR_Box) (mdb__debugger_interface__Port_20));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 4) = ((MR_Box) (mdb__debugger_interface__NameType_21));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 5) = ((MR_Box) (mdb__debugger_interface__ModuleType_22));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 6) = ((MR_Box) (mdb__debugger_interface__DefModuleName_23));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 7) = ((MR_Box) (mdb__debugger_interface__PredName_24));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 8) = ((MR_Box) (mdb__debugger_interface__Arity_25));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 9) = ((MR_Box) (mdb__debugger_interface__ModeNum_26));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 10) = ((MR_Box) (mdb__debugger_interface__Determinism_27));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 11) = ((MR_Box) (mdb__debugger_interface__Path_28));
#line 369 "debugger_interface.m"
      MR_hl_field(MR_mktag(2), mdb__debugger_interface__CurrentTraceInfo_32, 12) = ((MR_Box) (mdb__debugger_interface__LineNo_29));
#line 369 "debugger_interface.m"
    }
#line 372 "debugger_interface.m"
    {
#line 372 "debugger_interface.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_32)));
    }
#line 373 "debugger_interface.m"
    {
#line 373 "debugger_interface.m"
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) ((MR_String) ".\n")));
    }
#line 374 "debugger_interface.m"
    {
#line 374 "debugger_interface.m"
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_30);
    }
#line 368 "debugger_interface.m"
  }
#line 359 "debugger_interface.m"
}

#line 333 "debugger_interface.m"
static void MR_CALL 
mdb__debugger_interface__output_current_slots_user_16_p_0(
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__EventNumber_17,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__CallNumber_18,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__DepthNumber_19,
#line 333 "debugger_interface.m"
  MR_Word mdb__debugger_interface__Port_20,
#line 333 "debugger_interface.m"
  MR_Word mdb__debugger_interface__PredOrFunc_21,
#line 333 "debugger_interface.m"
  MR_String mdb__debugger_interface__DeclModuleName_22,
#line 333 "debugger_interface.m"
  MR_String mdb__debugger_interface__DefModuleName_23,
#line 333 "debugger_interface.m"
  MR_String mdb__debugger_interface__PredName_24,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Arity_25,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__ModeNum_26,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__Determinism_27,
#line 333 "debugger_interface.m"
  MR_String mdb__debugger_interface__Path_28,
#line 333 "debugger_interface.m"
  MR_Integer mdb__debugger_interface__LineNo_29,
#line 333 "debugger_interface.m"
  MR_Word mdb__debugger_interface__OutputStream_30)
#line 333 "debugger_interface.m"
{
#line 342 "debugger_interface.m"
  {
#line 342 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;
#line 342 "debugger_interface.m"
    MR_Word mdb__debugger_interface__CurrentTraceInfo_32;

#line 343 "debugger_interface.m"
    {
#line 343 "debugger_interface.m"
      mdb__debugger_interface__CurrentTraceInfo_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 0) = ((MR_Box) (mdb__debugger_interface__EventNumber_17));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 1) = ((MR_Box) (mdb__debugger_interface__CallNumber_18));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 2) = ((MR_Box) (mdb__debugger_interface__DepthNumber_19));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 3) = ((MR_Box) ((mdb__debugger_interface__Port_20 | ((mdb__debugger_interface__PredOrFunc_21 << (MR_Integer) 4)))));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 4) = ((MR_Box) (mdb__debugger_interface__DeclModuleName_22));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 5) = ((MR_Box) (mdb__debugger_interface__DefModuleName_23));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 6) = ((MR_Box) (mdb__debugger_interface__PredName_24));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 7) = ((MR_Box) (mdb__debugger_interface__Arity_25));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 8) = ((MR_Box) (mdb__debugger_interface__ModeNum_26));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 9) = ((MR_Box) (mdb__debugger_interface__Determinism_27));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 10) = ((MR_Box) (mdb__debugger_interface__Path_28));
#line 343 "debugger_interface.m"
      MR_hl_field(MR_mktag(1), mdb__debugger_interface__CurrentTraceInfo_32, 11) = ((MR_Box) (mdb__debugger_interface__LineNo_29));
#line 343 "debugger_interface.m"
    }
#line 346 "debugger_interface.m"
    {
#line 346 "debugger_interface.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__debugger_interface__mdb__debugger_interface__type_ctor_info_debugger_response_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) (mdb__debugger_interface__CurrentTraceInfo_32)));
    }
#line 347 "debugger_interface.m"
    {
#line 347 "debugger_interface.m"
      mercury__io__print_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdb__debugger_interface__OutputStream_30, ((MR_Box) ((MR_String) ".\n")));
    }
#line 348 "debugger_interface.m"
    {
#line 348 "debugger_interface.m"
      mercury__io__flush_output_3_p_0(mdb__debugger_interface__OutputStream_30);
    }
#line 342 "debugger_interface.m"
  }
#line 333 "debugger_interface.m"
}

#line 35 "debugger_interface.m"
void MR_CALL 
mdb__debugger_interface__dummy_pred_to_avoid_warning_about_nothing_exported_0_p_0(void)
#line 35 "debugger_interface.m"
{
#line 53 "debugger_interface.m"
  {
#line 53 "debugger_interface.m"
    MR_bool mdb__debugger_interface__succeeded;

#line 53 "debugger_interface.m"
  }
#line 35 "debugger_interface.m"
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
