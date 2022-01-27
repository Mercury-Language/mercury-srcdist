/*
** Automatically generated from `declarative_analyser.m'
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


/* :- module mdb.declarative_analyser. */
/* :- implementation. */

/*
INIT mercury__mdb__declarative_analyser__init
ENDINIT
*/

#include "mdb.declarative_analyser.mih"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
#include "mdb.declarative_oracle.mih"
#include "mdb.declarative_tree.mih"
#include "mdb.declarative_user.mih"
#include "mdb.help.mih"
#include "mdb.io_action.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
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
#include "float.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
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




#line 96 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2;

#line 99 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2;

#line 102 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0;

#line 105 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 108 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 111 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1[2];

#line 114 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1;

#line 117 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2[1];

#line 120 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2;

#line 123 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3[1];

#line 126 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3;

#line 129 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4[1];

#line 132 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4;

#line 135 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5[1];

#line 138 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5;

#line 141 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0[1];

#line 144 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1[1];

#line 147 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2[1];

#line 150 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3[3];

#line 153 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_response_1[4];

#line 156 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1[6];

#line 159 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1[6];

#line 162 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1;

#line 165 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0;

#line 168 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0;

#line 171 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1;

#line 174 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1;

#line 177 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0[6];

#line 180 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0[6];

#line 183 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0;

#line 186 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[1];

#line 189 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[1];

#line 192 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1[1];

#line 195 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1[1];

#line 198 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0[1];

#line 201 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0;

#line 204 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1;

#line 207 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[1];

#line 210 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[1];

#line 213 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1[2];

#line 216 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1[2];

#line 219 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1[2];

#line 222 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0[1];

#line 225 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0;

#line 228 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1;

#line 231 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[1];

#line 234 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[1];

#line 237 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0[2];

#line 240 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0[2];

#line 243 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0[2];

#line 246 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0;

#line 249 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1;

#line 252 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0;

#line 255 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0;

#line 258 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2[6];

#line 261 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2[6];

#line 264 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2;

#line 267 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3;

#line 270 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4;

#line 273 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3];

#line 276 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3];

#line 279 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5;

#line 282 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3];

#line 285 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3];

#line 288 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6;

#line 291 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7;

#line 294 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8;

#line 297 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0[6];

#line 300 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1[1];

#line 303 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2[1];

#line 306 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3[1];

#line 309 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0[4];

#line 312 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_reason_for_question_0[9];

#line 315 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_reason_for_question_0[9];

#line 318 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0;

#line 321 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 324 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1[5];

#line 327 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1;

#line 330 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0;

#line 333 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 336 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3];

#line 339 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3];

#line 342 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2;

#line 345 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1];

#line 348 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3;

#line 351 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0[1];

#line 354 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1[1];

#line 357 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2[1];

#line 360 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3[1];

#line 363 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_mode_0[4];

#line 366 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0[4];

#line 369 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0[4];

#line 372 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0[2];

#line 375 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0;

#line 378 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1[1];

#line 381 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1;

#line 384 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2;

#line 387 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3;

#line 390 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4[3];

#line 393 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4;

#line 396 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0[2];

#line 399 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1[1];

#line 402 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2[1];

#line 405 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3[1];

#line 408 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_response_0[4];

#line 411 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0[5];

#line 414 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0[5];

#line 417 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0[2];

#line 420 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0;

#line 423 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[1];

#line 426 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[1];

#line 429 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0[1];

#line 432 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0[1];

#line 435 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
#line 438 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 440 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 442 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 445 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
#line 448 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 450 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 452 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 454 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 457 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
#line 460 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 462 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 464 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 467 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
#line 470 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 472 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 474 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 476 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 479 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
#line 482 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 484 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 486 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 489 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
#line 492 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 494 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 496 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 498 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 501 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
#line 504 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 506 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 509 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
#line 512 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 514 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 516 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 519 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
#line 522 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 524 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 527 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
#line 530 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 532 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 534 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 537 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
#line 540 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 542 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 545 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
#line 548 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 550 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 552 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 555 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
#line 558 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 560 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 563 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
#line 566 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 568 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 570 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 573 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
#line 576 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 578 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 581 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
#line 584 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 586 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 588 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 1119 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1119__1_7_p_0(
#line 1119 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1119 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1119 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_66,
#line 1119 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__4_67,
#line 1119 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__5_68,
#line 1119 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__6_69,
#line 1119 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__7_70);

#line 738 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(
#line 738 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 738 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 738 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_52);

#line 735 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__735__1_3_p_0(
#line 735 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 735 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 735 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_48);

#line 653 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__IntroducedFrom__func__bug_response__653__1_3_f_0(
#line 653 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 653 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 653 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_30);

#line 329 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0(
#line 329 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 329 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 329 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 329 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0(
#line 329 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 329 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

#line 235 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0(
#line 235 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 235 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 235 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 235 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0(
#line 235 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 235 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

#line 245 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0(
#line 245 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 245 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 245 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 245 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0(
#line 245 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 245 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

#line 332 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0(
#line 332 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 332 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0(
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

#line 1348 "declarative_analyser.m"
static MR_String MR_CALL 
mdb__declarative_analyser__search_mode_to_string_1_f_0(
#line 1348 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1);

#line 1263 "declarative_analyser.m"
static MR_String MR_CALL 
mdb__declarative_analyser__weighting_to_reason_string_3_f_0(
#line 1263 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 1263 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Weight1_2,
#line 1263 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Weight2_3);

#line 1226 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0_1(
#line 1226 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 1226 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

#line 1198 "declarative_analyser.m"
static MR_String MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0(
#line 1198 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1);

#line 1119 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0_1(
#line 1119 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 1119 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 1119 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 1119 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_3,
#line 1119 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_4,
#line 1119 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_5);

#line 1092 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0(
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1092 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_1,
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_2,
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_3,
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__4_4,
#line 1092 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_5,
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_6,
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1092 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8,
#line 1092 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9);

#line 1068 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(
#line 1068 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23,
#line 1068 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_10,
#line 1068 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_11,
#line 1068 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_12,
#line 1068 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_13,
#line 1068 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_14,
#line 1068 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_15,
#line 1068 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19,
#line 1068 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20,
#line 1068 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_17);

#line 1022 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(
#line 1022 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_21,
#line 1022 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 1022 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_9,
#line 1022 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterTop_10,
#line 1022 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterBottom_11,
#line 1022 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerTop_12,
#line 1022 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerBottom_13,
#line 1022 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__Unknown_14);

#line 944 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__binary_search_11_p_0(
#line 944 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37,
#line 944 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_12,
#line 944 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_13,
#line 944 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_14,
#line 944 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Top_15,
#line 944 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Bottom_16,
#line 944 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__LastTested_17,
#line 944 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 944 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 944 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_19,
#line 944 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_20,
#line 944 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_21);

#line 785 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70,
#line 785 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_15,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_16,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44,
#line 785 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_18,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46,
#line 785 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_20,
#line 785 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_21,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_22,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_23,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_24,
#line 785 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_25,
#line 785 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_26);

#line 772 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_12_p_0(
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29,
#line 772 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_13,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_14,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25,
#line 772 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_16,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_17,
#line 772 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_18,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_19,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_20,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_21,
#line 772 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_22,
#line 772 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_23);

#line 738 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_2(
#line 738 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 738 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

#line 735 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_1(
#line 735 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 735 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

#line 697 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0(
#line 697 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 697 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 697 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 697 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24,
#line 697 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25,
#line 697 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9);

#line 666 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__search_for_question_8_p_0(
#line 666 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33,
#line 666 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_9,
#line 666 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_10,
#line 666 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 666 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 666 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__OldMode_12,
#line 666 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_13,
#line 666 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_14,
#line 666 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_15);

#line 654 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_2(
#line 654 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 654 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 654 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2);

#line 653 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_1(
#line 653 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 653 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

#line 636 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0(
#line 636 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 636 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 636 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 636 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__BugId_9,
#line 636 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Evidence_10,
#line 636 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__InadmissibleChildren_11,
#line 636 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_12);

#line 569 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__handle_search_response_5_p_0(
#line 569 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78,
#line 569 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 569 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchResponse_7,
#line 569 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20,
#line 569 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_21,
#line 569 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__AnalyserResponse_9);

#line 550 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__decide_analyser_response_5_p_0(
#line 550 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63,
#line 550 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 550 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 550 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_8,
#line 550 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13,
#line 550 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_14);

#line 472 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__process_answer_5_p_0(
#line 472 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137,
#line 472 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 472 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Answer_7,
#line 472 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_8,
#line 472 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24,
#line 472 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_25);

#line 414 "declarative_analyser.m"
static MR_Word MR_CALL 
mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(
#line 414 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1);


static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_1[17][2];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_2[2][3];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_3[4][1];

static /* final */ const MR_Integer mdb__declarative_analyser_scalar_common_4[2][3];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_5[2][7];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_6[1][6];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_7[1][10];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_8[1][5];




static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_1[17][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[2]))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "continue_analysis")),
    ((MR_Box) ((MR_String) "received answer to unasked question"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "change_search_mode")),
    ((MR_Box) ((MR_String) "binary mode requested, but no last question"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "setup_binary_search")),
    ((MR_Box) ((MR_String) "TopId not an ancestor of BottomId"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "show_info")),
    ((MR_Box) ((MR_String) "no last question"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "Context of current question")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "Search mode")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "Estimated questions remaining")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "Number of suspect events")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "revise_analysis")),
    ((MR_Box) ((MR_String) "no root"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "handle_search_response")),
    ((MR_Box) ((MR_String) "search responded with query about ignored suspect"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "top_down_search")),
    ((MR_Box) ((MR_String) "bug has unexplored or unknown children"))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_2[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_8[0])),
    ((MR_Box) (mdb__declarative_analyser__reason_to_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_3[4][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 2 */
  {
    ((MR_Box) (((MR_Integer) 0 | (((((MR_Integer) 0 << (MR_Integer) 1)) | (((((MR_Integer) 0 << (MR_Integer) 2)) | (((((MR_Integer) 0 << (MR_Integer) 3)) | (((MR_Integer) 0 << (MR_Integer) 4)))))))))))
  },
  /* row 3 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Integer mdb__declarative_analyser_scalar_common_4[2][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 67663
  },
  /* row 1 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_5[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_7[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_8[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "array.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"



#line 1292 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1300 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1308 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0 = {
  (MR_String) "analyser_response_no_suspects",
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

#line 1323 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1331 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
  }
};

#line 1339 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_bug_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1345 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1 = {
  (MR_String) "analyser_response_bug_found",
  (MR_Integer) 2,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1,
  NULL,
  NULL,
  NULL
};

#line 1360 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1365 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2 = {
  (MR_String) "analyser_response_oracle_question",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2,
  NULL,
  NULL,
  NULL
};

#line 1380 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1385 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3 = {
  (MR_String) "analyser_response_require_explicit_subtree",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3,
  NULL,
  NULL,
  NULL
};

#line 1400 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1405 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4 = {
  (MR_String) "analyser_response_require_explicit_supertree",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4,
  NULL,
  NULL,
  NULL
};

#line 1420 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1425 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5 = {
  (MR_String) "analyser_response_revise",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5,
  NULL,
  NULL,
  NULL
};

#line 1440 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0
};

#line 1445 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1
};

#line 1450 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2
};

#line 1455 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3[3] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5
};

#line 1462 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_response_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3
  }
};

#line 1486 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1[6] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5
};

#line 1496 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1[6] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 1506 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_response_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analyser_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analyser_response_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analyser_response",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_response_1 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1
};

#line 1523 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1531 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0
  }
};

#line 1539 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0
  }
};

#line 1547 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1555 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
  }
};

#line 1563 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
};

#line 1573 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0[6] = {
  (MR_String) "search_space",
  (MR_String) "require_explicit",
  (MR_String) "search_mode",
  (MR_String) "fallback_search_mode",
  (MR_String) "last_search_question",
  (MR_String) "debug_origin"
};

#line 1583 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0 = {
  (MR_String) "analyser",
  (MR_Integer) 6,
  (MR_Integer) 33,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0,
  NULL,
  NULL
};

#line 1598 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

#line 1603 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0
  }
};

#line 1612 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

#line 1617 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1[1] = {
  (MR_Integer) 0
};

#line 1622 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_state_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analyser_state_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analyser_state_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analyser_state",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1
};

#line 1639 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1644 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0 = {
  (MR_String) "new_tree",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0,
  NULL,
  NULL,
  NULL
};

#line 1659 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1 = {
  (MR_String) "resume_previous",
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

#line 1674 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

#line 1679 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0
};

#line 1684 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1
  }
};

#line 1698 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

#line 1704 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1710 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analysis_type_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analysis_type_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analysis_type_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analysis_type",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1
};

#line 1727 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1732 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0 = {
  (MR_String) "explicit_subtree",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0,
  NULL,
  NULL,
  NULL
};

#line 1747 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1 = {
  (MR_String) "explicit_supertree",
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

#line 1762 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

#line 1767 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0
};

#line 1772 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1
  }
};

#line 1786 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

#line 1792 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1798 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "explicit_tree_type",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0
};

#line 1815 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0 = {
  (MR_String) "ques_reason_start",
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

#line 1830 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1 = {
  (MR_String) "ques_reason_top_down",
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

#line 1845 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1853 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 1861 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1871 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2[6] = {
  (MR_String) "binding_prim_op",
  (MR_String) "binding_filename",
  (MR_String) "binding_line_no",
  (MR_String) "maybe_atom_path",
  (MR_String) "binding_proc",
  (MR_String) "binding_node_eliminated"
};

#line 1881 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2 = {
  (MR_String) "ques_reason_binding_node",
  (MR_Integer) 6,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2,
  NULL,
  NULL
};

#line 1896 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3 = {
  (MR_String) "ques_reason_subterm_no_proc_rep",
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

#line 1911 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4 = {
  (MR_String) "ques_reason_binding_node_eliminated",
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

#line 1926 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1933 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3] = {
  (MR_String) "binary_reason_bottom",
  (MR_String) "binary_reason_top",
  (MR_String) "binary_reason_split"
};

#line 1940 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5 = {
  (MR_String) "ques_reason_binary",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 5,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5,
  NULL,
  NULL
};

#line 1955 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1962 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3] = {
  (MR_String) "dq_weighting",
  (MR_String) "dq_old_weight",
  (MR_String) "dq_chosen_subtree_weight"
};

#line 1969 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6 = {
  (MR_String) "ques_reason_divide_and_query",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 6,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6,
  NULL,
  NULL
};

#line 1984 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7 = {
  (MR_String) "ques_reason_skipped",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1999 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8 = {
  (MR_String) "ques_reason_revise",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2014 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0[6] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8
};

#line 2024 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2
};

#line 2029 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5
};

#line 2034 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6
};

#line 2039 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0[4] = {
  {
    (MR_Integer) 6,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3
  }
};

#line 2063 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_reason_for_question_0[9] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1
};

#line 2076 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_reason_for_question_0[9] = {
  (MR_Integer) 6,
  (MR_Integer) 8,
  (MR_Integer) 1,
  (MR_Integer) 7,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 4
};

#line 2089 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____reason_for_question_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____reason_for_question_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "reason_for_question",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_reason_for_question_0 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0 },
  (MR_Integer) 9,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_reason_for_question_0
};

#line 2106 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0 = {
  (MR_String) "analyser_top_down",
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

#line 2121 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2129 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0
};

#line 2138 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1 = {
  (MR_String) "analyser_follow_subterm_end",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1,
  NULL,
  NULL,
  NULL
};

#line 2153 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2161 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2170 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2177 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3] = {
  (MR_String) "suspects",
  (MR_String) "range",
  (MR_String) "last_tested"
};

#line 2184 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2 = {
  (MR_String) "analyser_binary",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2,
  mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2,
  NULL,
  NULL
};

#line 2199 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
};

#line 2204 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3 = {
  (MR_String) "analyser_divide_and_query",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3,
  NULL,
  NULL,
  NULL
};

#line 2219 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0
};

#line 2224 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1
};

#line 2229 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2
};

#line 2234 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3
};

#line 2239 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_mode_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3
  }
};

#line 2263 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0[4] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0
};

#line 2271 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2279 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____search_mode_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____search_mode_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "search_mode",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_mode_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0
};

#line 2296 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

#line 2302 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0 = {
  (MR_String) "search_response_question",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0,
  NULL,
  NULL,
  NULL
};

#line 2317 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2322 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1 = {
  (MR_String) "search_response_require_explicit_subtree",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1,
  NULL,
  NULL,
  NULL
};

#line 2337 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2 = {
  (MR_String) "search_response_require_explicit_supertree",
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

#line 2352 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3 = {
  (MR_String) "search_response_no_suspects",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2367 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2374 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4 = {
  (MR_String) "search_response_found_bug",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4,
  NULL,
  NULL,
  NULL
};

#line 2389 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3
};

#line 2395 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0
};

#line 2400 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1
};

#line 2405 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4
};

#line 2410 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_response_0[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3
  }
};

#line 2434 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0[5] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2
};

#line 2443 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2452 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____search_response_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____search_response_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "search_response",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_response_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0
};

#line 2469 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

#line 2475 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0 = {
  (MR_String) "suspect_and_reason",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0,
  NULL,
  NULL,
  NULL
};

#line 2490 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

#line 2495 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0
  }
};

#line 2504 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

#line 2509 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0[1] = {
  (MR_Integer) 0
};

#line 2514 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "suspect_and_reason",
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0 },
  {     mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0
};

#line 2531 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
#line 2534 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2536 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2538 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2540 "mdb.declarative_analyser.c"
{
#line 2542 "mdb.declarative_analyser.c"
  {
#line 2544 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2547 "mdb.declarative_analyser.c"
    {
#line 2549 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analyser_response_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2552 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2554 "mdb.declarative_analyser.c"
  }
#line 2556 "mdb.declarative_analyser.c"
}

#line 2559 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
#line 2562 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2564 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2566 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2568 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2570 "mdb.declarative_analyser.c"
{
#line 2572 "mdb.declarative_analyser.c"
  {
#line 2574 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2577 "mdb.declarative_analyser.c"
    {
#line 2579 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analyser_response_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2582 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2584 "mdb.declarative_analyser.c"
  }
#line 2586 "mdb.declarative_analyser.c"
}

#line 2589 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
#line 2592 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2594 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2596 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2598 "mdb.declarative_analyser.c"
{
#line 2600 "mdb.declarative_analyser.c"
  {
#line 2602 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2605 "mdb.declarative_analyser.c"
    {
#line 2607 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analyser_state_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2610 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2612 "mdb.declarative_analyser.c"
  }
#line 2614 "mdb.declarative_analyser.c"
}

#line 2617 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
#line 2620 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2622 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2624 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2626 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2628 "mdb.declarative_analyser.c"
{
#line 2630 "mdb.declarative_analyser.c"
  {
#line 2632 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2635 "mdb.declarative_analyser.c"
    {
#line 2637 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analyser_state_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2640 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2642 "mdb.declarative_analyser.c"
  }
#line 2644 "mdb.declarative_analyser.c"
}

#line 2647 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
#line 2650 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2652 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2654 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2656 "mdb.declarative_analyser.c"
{
#line 2658 "mdb.declarative_analyser.c"
  {
#line 2660 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2663 "mdb.declarative_analyser.c"
    {
#line 2665 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analysis_type_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2668 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2670 "mdb.declarative_analyser.c"
  }
#line 2672 "mdb.declarative_analyser.c"
}

#line 2675 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
#line 2678 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2680 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2682 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2684 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2686 "mdb.declarative_analyser.c"
{
#line 2688 "mdb.declarative_analyser.c"
  {
#line 2690 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2693 "mdb.declarative_analyser.c"
    {
#line 2695 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analysis_type_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2698 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2700 "mdb.declarative_analyser.c"
  }
#line 2702 "mdb.declarative_analyser.c"
}

#line 2705 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
#line 2708 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2710 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2712 "mdb.declarative_analyser.c"
{
#line 2714 "mdb.declarative_analyser.c"
  {
#line 2716 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2719 "mdb.declarative_analyser.c"
    {
#line 2721 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____explicit_tree_type_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2724 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2726 "mdb.declarative_analyser.c"
  }
#line 2728 "mdb.declarative_analyser.c"
}

#line 2731 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
#line 2734 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2736 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2738 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2740 "mdb.declarative_analyser.c"
{
#line 2742 "mdb.declarative_analyser.c"
  {
#line 2744 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2747 "mdb.declarative_analyser.c"
    {
#line 2749 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____explicit_tree_type_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2752 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2754 "mdb.declarative_analyser.c"
  }
#line 2756 "mdb.declarative_analyser.c"
}

#line 2759 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
#line 2762 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2764 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2766 "mdb.declarative_analyser.c"
{
#line 2768 "mdb.declarative_analyser.c"
  {
#line 2770 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2773 "mdb.declarative_analyser.c"
    {
#line 2775 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2778 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2780 "mdb.declarative_analyser.c"
  }
#line 2782 "mdb.declarative_analyser.c"
}

#line 2785 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
#line 2788 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2790 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2792 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2794 "mdb.declarative_analyser.c"
{
#line 2796 "mdb.declarative_analyser.c"
  {
#line 2798 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2801 "mdb.declarative_analyser.c"
    {
#line 2803 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____reason_for_question_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2806 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2808 "mdb.declarative_analyser.c"
  }
#line 2810 "mdb.declarative_analyser.c"
}

#line 2813 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
#line 2816 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2818 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2820 "mdb.declarative_analyser.c"
{
#line 2822 "mdb.declarative_analyser.c"
  {
#line 2824 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2827 "mdb.declarative_analyser.c"
    {
#line 2829 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2832 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2834 "mdb.declarative_analyser.c"
  }
#line 2836 "mdb.declarative_analyser.c"
}

#line 2839 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
#line 2842 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2844 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2846 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2848 "mdb.declarative_analyser.c"
{
#line 2850 "mdb.declarative_analyser.c"
  {
#line 2852 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2855 "mdb.declarative_analyser.c"
    {
#line 2857 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2860 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2862 "mdb.declarative_analyser.c"
  }
#line 2864 "mdb.declarative_analyser.c"
}

#line 2867 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
#line 2870 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2872 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2874 "mdb.declarative_analyser.c"
{
#line 2876 "mdb.declarative_analyser.c"
  {
#line 2878 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2881 "mdb.declarative_analyser.c"
    {
#line 2883 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_response_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2886 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2888 "mdb.declarative_analyser.c"
  }
#line 2890 "mdb.declarative_analyser.c"
}

#line 2893 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
#line 2896 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2898 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2900 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2902 "mdb.declarative_analyser.c"
{
#line 2904 "mdb.declarative_analyser.c"
  {
#line 2906 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2909 "mdb.declarative_analyser.c"
    {
#line 2911 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____search_response_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2914 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2916 "mdb.declarative_analyser.c"
  }
#line 2918 "mdb.declarative_analyser.c"
}

#line 2921 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
#line 2924 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2926 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2928 "mdb.declarative_analyser.c"
{
#line 2930 "mdb.declarative_analyser.c"
  {
#line 2932 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2935 "mdb.declarative_analyser.c"
    {
#line 2937 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____suspect_and_reason_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2940 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2942 "mdb.declarative_analyser.c"
  }
#line 2944 "mdb.declarative_analyser.c"
}

#line 2947 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
#line 2950 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2952 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2954 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2956 "mdb.declarative_analyser.c"
{
#line 2958 "mdb.declarative_analyser.c"
  {
#line 2960 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2963 "mdb.declarative_analyser.c"
    {
#line 2965 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____suspect_and_reason_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2968 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2970 "mdb.declarative_analyser.c"
  }
#line 2972 "mdb.declarative_analyser.c"
}

#line 1119 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1119__1_7_p_0(
#line 1119 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1119 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1119 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_66,
#line 1119 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__4_67,
#line 1119 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__5_68,
#line 1119 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__6_69,
#line 1119 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__7_70)
#line 1119 "declarative_analyser.m"
{
#line 1119 "declarative_analyser.m"
  {
#line 1119 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1119 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_72_72;
#line 1119 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__Weight_86;

#line 1119 "declarative_analyser.m"
    {
#line 1119 "declarative_analyser.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_72_72);
    }
#line 1175 "declarative_analyser.m"
    {
#line 1175 "declarative_analyser.m"
      mdb__declarative_analyser__Weight_86 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_72_72, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__HeadVar__3_66);
    }
#line 1176 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Weight_86 > mdb__declarative_analyser__HeadVar__4_67);
#line 1176 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 1177 "declarative_analyser.m"
      {
#line 1177 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__5_68 = mdb__declarative_analyser__Weight_86;
#line 1178 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__7_70 = mdb__declarative_analyser__HeadVar__3_66;
#line 1177 "declarative_analyser.m"
      }
#line 1176 "declarative_analyser.m"
    else
#line 1180 "declarative_analyser.m"
      {
#line 1180 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__5_68 = mdb__declarative_analyser__HeadVar__4_67;
#line 1181 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__7_70 = mdb__declarative_analyser__HeadVar__6_69;
#line 1180 "declarative_analyser.m"
      }
#line 1119 "declarative_analyser.m"
  }
#line 1119 "declarative_analyser.m"
}

#line 738 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(
#line 738 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 738 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 738 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_52)
#line 738 "declarative_analyser.m"
{
#line 738 "declarative_analyser.m"
  {
#line 738 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 738 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_54_54;

#line 738 "declarative_analyser.m"
    {
#line 738 "declarative_analyser.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_54_54);
    }
#line 738 "declarative_analyser.m"
    {
#line 738 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_inadmissible_2_p_0(mdb__declarative_analyser__TypeInfo_54_54, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, mdb__declarative_analyser__HeadVar__3_52);
    }
#line 738 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 738 "declarative_analyser.m"
  }
#line 738 "declarative_analyser.m"
}

#line 735 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__735__1_3_p_0(
#line 735 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 735 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 735 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_48)
#line 735 "declarative_analyser.m"
{
#line 735 "declarative_analyser.m"
  {
#line 735 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 735 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_50_50;

#line 735 "declarative_analyser.m"
    {
#line 735 "declarative_analyser.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_50_50);
    }
#line 735 "declarative_analyser.m"
    {
#line 735 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_correct_or_inadmissible_2_p_0(mdb__declarative_analyser__TypeInfo_50_50, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, mdb__declarative_analyser__HeadVar__3_48);
    }
#line 735 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 735 "declarative_analyser.m"
  }
#line 735 "declarative_analyser.m"
}

#line 653 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__IntroducedFrom__func__bug_response__653__1_3_f_0(
#line 653 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 653 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 653 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_30)
#line 653 "declarative_analyser.m"
{
#line 653 "declarative_analyser.m"
  {
#line 653 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 653 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__HeadVar__4_31;
#line 653 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_33_33;

#line 653 "declarative_analyser.m"
    {
#line 653 "declarative_analyser.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_33_33);
    }
#line 653 "declarative_analyser.m"
    {
#line 653 "declarative_analyser.m"
      mdb__declarative_analyser__HeadVar__4_31 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_33_33, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__HeadVar__3_30);
    }
#line 653 "declarative_analyser.m"
    return mdb__declarative_analyser__HeadVar__4_31;
#line 653 "declarative_analyser.m"
  }
#line 653 "declarative_analyser.m"
}

#line 329 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0(
#line 329 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 329 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 329 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 329 "declarative_analyser.m"
{
#line 329 "declarative_analyser.m"
  {
#line 329 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 329 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 329 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_10 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 329 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_9 == mdb__declarative_analyser__CastY_10);
#line 329 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 3171 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 329 "declarative_analyser.m"
    else
#line 329 "declarative_analyser.m"
      {
#line 329 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 329 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 329 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 329 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 329 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_8_8;

#line 329 "declarative_analyser.m"
        {
#line 329 "declarative_analyser.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_8_8, mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_6_6);
        }
#line 3193 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_8_8 == (MR_Integer) 0);
#line 329 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 329 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 329 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_8_8;
#line 329 "declarative_analyser.m"
        else
#line 329 "declarative_analyser.m"
          {
#line 329 "declarative_analyser.m"
            mdb__declarative_analyser____Compare____reason_for_question_0_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_5_5, mdb__declarative_analyser__V_7_7);
          }
#line 329 "declarative_analyser.m"
      }
#line 329 "declarative_analyser.m"
  }
#line 329 "declarative_analyser.m"
}

#line 329 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0(
#line 329 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 329 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 329 "declarative_analyser.m"
{
#line 329 "declarative_analyser.m"
  {
#line 329 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 329 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_7 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 329 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 329 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_7 == mdb__declarative_analyser__CastY_8);
#line 329 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 329 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 329 "declarative_analyser.m"
    else
#line 329 "declarative_analyser.m"
      {
#line 329 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 329 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 329 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 329 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));

#line 3252 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_3_3 == mdb__declarative_analyser__V_5_5);
#line 329 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 3256 "mdb.declarative_analyser.c"
          {
#line 3258 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_6_6);
          }
#line 329 "declarative_analyser.m"
      }
#line 329 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 329 "declarative_analyser.m"
  }
#line 329 "declarative_analyser.m"
}

#line 235 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0(
#line 235 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 235 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 235 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 235 "declarative_analyser.m"
{
#line 235 "declarative_analyser.m"
  {
#line 235 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 235 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_67 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 235 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_68 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 235 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_67 == mdb__declarative_analyser__CastY_68);
#line 235 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 3294 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 235 "declarative_analyser.m"
    else
#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) {
#line 235 "declarative_analyser.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
        case (MR_Integer) 0:
#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
          switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__2_2)) {
#line 235 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 235 "declarative_analyser.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
                case (MR_Integer) 0:
#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 235 "declarative_analyser.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
                    case (MR_Integer) 0:
#line 235 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 235 "declarative_analyser.m"
                      break;
#line 235 "declarative_analyser.m"
                    case (MR_Integer) 1:
#line 235 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "declarative_analyser.m"
                      break;
#line 235 "declarative_analyser.m"
                  }
#line 235 "declarative_analyser.m"
                  break;
#line 235 "declarative_analyser.m"
                case (MR_Integer) 1:
#line 3342 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 235 "declarative_analyser.m"
                  break;
#line 235 "declarative_analyser.m"
                case (MR_Integer) 2:
#line 3348 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 235 "declarative_analyser.m"
                  break;
#line 235 "declarative_analyser.m"
                case (MR_Integer) 3:
#line 3354 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "declarative_analyser.m"
                  break;
#line 235 "declarative_analyser.m"
              }
#line 235 "declarative_analyser.m"
              break;
#line 235 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 235 "declarative_analyser.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
                case (MR_Integer) 0:
#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 235 "declarative_analyser.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
                    case (MR_Integer) 0:
#line 235 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 235 "declarative_analyser.m"
                      break;
#line 235 "declarative_analyser.m"
                    case (MR_Integer) 1:
#line 235 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 235 "declarative_analyser.m"
                      break;
#line 235 "declarative_analyser.m"
                  }
#line 235 "declarative_analyser.m"
                  break;
#line 235 "declarative_analyser.m"
                case (MR_Integer) 1:
#line 3394 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 235 "declarative_analyser.m"
                  break;
#line 235 "declarative_analyser.m"
                case (MR_Integer) 2:
#line 3400 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 235 "declarative_analyser.m"
                  break;
#line 235 "declarative_analyser.m"
                case (MR_Integer) 3:
#line 3406 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "declarative_analyser.m"
                  break;
#line 235 "declarative_analyser.m"
              }
#line 235 "declarative_analyser.m"
              break;
#line 235 "declarative_analyser.m"
          }
#line 235 "declarative_analyser.m"
          break;
#line 235 "declarative_analyser.m"
        case (MR_Integer) 1:
#line 235 "declarative_analyser.m"
          {
#line 235 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 235 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 235 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 3441 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "declarative_analyser.m"
                    break;
#line 235 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 3447 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "declarative_analyser.m"
                    break;
#line 235 "declarative_analyser.m"
                }
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 235 "declarative_analyser.m"
                {
#line 235 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 235 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 235 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_8_8;

#line 235 "declarative_analyser.m"
                  {
#line 235 "declarative_analyser.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_8_8, mdb__declarative_analyser__V_79_79, mdb__declarative_analyser__V_6_6);
                  }
#line 3471 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_8_8 == (MR_Integer) 0);
#line 235 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 235 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 235 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_8_8;
#line 235 "declarative_analyser.m"
                  else
#line 235 "declarative_analyser.m"
                    {
#line 235 "declarative_analyser.m"
                      mdb__declarative_analyser____Compare____reason_for_question_0_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_78_78, mdb__declarative_analyser__V_7_7);
                    }
#line 235 "declarative_analyser.m"
                }
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 3492 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
              case (MR_Integer) 3:
#line 3498 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
            }
#line 235 "declarative_analyser.m"
          }
#line 235 "declarative_analyser.m"
          break;
#line 235 "declarative_analyser.m"
        case (MR_Integer) 2:
#line 235 "declarative_analyser.m"
          {
#line 235 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 235 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 235 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 3529 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "declarative_analyser.m"
                    break;
#line 235 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 3535 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "declarative_analyser.m"
                    break;
#line 235 "declarative_analyser.m"
                }
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 3545 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 235 "declarative_analyser.m"
                {
#line 235 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));

#line 235 "declarative_analyser.m"
                  {
#line 235 "declarative_analyser.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_80_80, mdb__declarative_analyser__V_25_25);
                  }
#line 235 "declarative_analyser.m"
                }
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
              case (MR_Integer) 3:
#line 3567 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
            }
#line 235 "declarative_analyser.m"
          }
#line 235 "declarative_analyser.m"
          break;
#line 235 "declarative_analyser.m"
        case (MR_Integer) 3:
#line 235 "declarative_analyser.m"
          {
#line 235 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 235 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 235 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 235 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 3602 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 235 "declarative_analyser.m"
                    break;
#line 235 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 3608 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 235 "declarative_analyser.m"
                    break;
#line 235 "declarative_analyser.m"
                }
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 3618 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 3624 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
              case (MR_Integer) 3:
#line 235 "declarative_analyser.m"
                {
#line 235 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 235 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 235 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 235 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_65_65;

#line 235 "declarative_analyser.m"
                  {
#line 235 "declarative_analyser.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_65_65, mdb__declarative_analyser__V_77_77, mdb__declarative_analyser__V_62_62);
                  }
#line 3646 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_65_65 == (MR_Integer) 0);
#line 235 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 235 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 235 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_65_65;
#line 235 "declarative_analyser.m"
                  else
#line 235 "declarative_analyser.m"
                    {
#line 235 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_66_66;

#line 235 "declarative_analyser.m"
                      {
#line 235 "declarative_analyser.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[2], &mdb__declarative_analyser__V_66_66, ((MR_Box) (mdb__declarative_analyser__V_76_76)), ((MR_Box) (mdb__declarative_analyser__V_63_63)));
                      }
#line 3666 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_66_66 == (MR_Integer) 0);
#line 235 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 235 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 235 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_66_66;
#line 235 "declarative_analyser.m"
                      else
#line 235 "declarative_analyser.m"
                        {
#line 235 "declarative_analyser.m"
                          {
#line 235 "declarative_analyser.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[2], mdb__declarative_analyser__HeadVar__1_1, ((MR_Box) (mdb__declarative_analyser__V_75_75)), ((MR_Box) (mdb__declarative_analyser__V_64_64)));
                          }
#line 235 "declarative_analyser.m"
                        }
#line 235 "declarative_analyser.m"
                    }
#line 235 "declarative_analyser.m"
                }
#line 235 "declarative_analyser.m"
                break;
#line 235 "declarative_analyser.m"
            }
#line 235 "declarative_analyser.m"
          }
#line 235 "declarative_analyser.m"
          break;
#line 235 "declarative_analyser.m"
      }
#line 235 "declarative_analyser.m"
  }
#line 235 "declarative_analyser.m"
}

#line 235 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0(
#line 235 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 235 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 235 "declarative_analyser.m"
{
#line 235 "declarative_analyser.m"
  {
#line 235 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 235 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_19 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 235 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_20 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 235 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_19 == mdb__declarative_analyser__CastY_20);
#line 235 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 235 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 235 "declarative_analyser.m"
    else
#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) {
#line 235 "declarative_analyser.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
        case (MR_Integer) 0:
#line 235 "declarative_analyser.m"
#line 235 "declarative_analyser.m"
          switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__1_1)) {
#line 235 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 235 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 235 "declarative_analyser.m"
              {
#line 235 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastX_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 235 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastY_10 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 235 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_10 == mdb__declarative_analyser__CastX_9);
#line 235 "declarative_analyser.m"
              }
#line 235 "declarative_analyser.m"
              break;
#line 235 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 235 "declarative_analyser.m"
              {
#line 235 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastX_11 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 235 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastY_12 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 235 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_12 == mdb__declarative_analyser__CastX_11);
#line 235 "declarative_analyser.m"
              }
#line 235 "declarative_analyser.m"
              break;
#line 235 "declarative_analyser.m"
          }
#line 235 "declarative_analyser.m"
          break;
#line 235 "declarative_analyser.m"
        case (MR_Integer) 1:
#line 235 "declarative_analyser.m"
          {
#line 235 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 235 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 235 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_5_5;
#line 235 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_6_6;

#line 235 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 235 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 235 "declarative_analyser.m"
              {
#line 235 "declarative_analyser.m"
                mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "declarative_analyser.m"
                mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 3799 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_3_3 == mdb__declarative_analyser__V_5_5);
#line 235 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 3803 "mdb.declarative_analyser.c"
                  {
#line 3805 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_6_6);
                  }
#line 235 "declarative_analyser.m"
              }
#line 235 "declarative_analyser.m"
          }
#line 235 "declarative_analyser.m"
          break;
#line 235 "declarative_analyser.m"
        case (MR_Integer) 2:
#line 235 "declarative_analyser.m"
          {
#line 235 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 235 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_8_8;

#line 235 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 235 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 235 "declarative_analyser.m"
              {
#line 235 "declarative_analyser.m"
                mdb__declarative_analyser__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 3831 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_7_7 == mdb__declarative_analyser__V_8_8);
#line 235 "declarative_analyser.m"
              }
#line 235 "declarative_analyser.m"
          }
#line 235 "declarative_analyser.m"
          break;
#line 235 "declarative_analyser.m"
        case (MR_Integer) 3:
#line 235 "declarative_analyser.m"
          {
#line 235 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_21_21;
#line 235 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_22_22;
#line 235 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 235 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 235 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 235 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_16_16;
#line 235 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_17_17;
#line 235 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_18_18;

#line 235 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 235 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 235 "declarative_analyser.m"
              {
#line 235 "declarative_analyser.m"
                mdb__declarative_analyser__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "declarative_analyser.m"
                mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "declarative_analyser.m"
                mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 3872 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_13_13 == mdb__declarative_analyser__V_16_16);
#line 235 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 235 "declarative_analyser.m"
                  {
#line 3878 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeInfo_21_21 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[2];
#line 3880 "mdb.declarative_analyser.c"
                    {
#line 3882 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_21_21, ((MR_Box) (mdb__declarative_analyser__V_14_14)), ((MR_Box) (mdb__declarative_analyser__V_17_17)));
                    }
#line 235 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 235 "declarative_analyser.m"
                      {
#line 3889 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeInfo_22_22 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[2];
#line 3891 "mdb.declarative_analyser.c"
                        {
#line 3893 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_22_22, ((MR_Box) (mdb__declarative_analyser__V_15_15)), ((MR_Box) (mdb__declarative_analyser__V_18_18)));
                        }
#line 235 "declarative_analyser.m"
                      }
#line 235 "declarative_analyser.m"
                  }
#line 235 "declarative_analyser.m"
              }
#line 235 "declarative_analyser.m"
          }
#line 235 "declarative_analyser.m"
          break;
#line 235 "declarative_analyser.m"
      }
#line 235 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 235 "declarative_analyser.m"
  }
#line 235 "declarative_analyser.m"
}

#line 167 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0(
#line 167 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 167 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 167 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 167 "declarative_analyser.m"
{
#line 167 "declarative_analyser.m"
  {
#line 167 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 167 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_82 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 167 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_83 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 167 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_82 == mdb__declarative_analyser__CastY_83);
#line 167 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 3939 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 167 "declarative_analyser.m"
    else
#line 167 "declarative_analyser.m"
#line 167 "declarative_analyser.m"
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) {
#line 167 "declarative_analyser.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 167 "declarative_analyser.m"
        case (MR_Integer) 0:
#line 167 "declarative_analyser.m"
#line 167 "declarative_analyser.m"
          switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 167 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 167 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 167 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 167 "declarative_analyser.m"
              break;
#line 167 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 3963 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 167 "declarative_analyser.m"
              break;
#line 167 "declarative_analyser.m"
            case (MR_Integer) 2:
#line 3969 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 167 "declarative_analyser.m"
              break;
#line 167 "declarative_analyser.m"
            case (MR_Integer) 3:
#line 3975 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 167 "declarative_analyser.m"
              break;
#line 167 "declarative_analyser.m"
          }
#line 167 "declarative_analyser.m"
          break;
#line 167 "declarative_analyser.m"
        case (MR_Integer) 1:
#line 167 "declarative_analyser.m"
          {
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 167 "declarative_analyser.m"
#line 167 "declarative_analyser.m"
            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 167 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 167 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 4005 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 167 "declarative_analyser.m"
                {
#line 167 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 167 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 167 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 167 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
#line 167 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
#line 167 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_28_28;

#line 167 "declarative_analyser.m"
                  {
#line 167 "declarative_analyser.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_28_28, mdb__declarative_analyser__V_101_101, mdb__declarative_analyser__V_23_23);
                  }
#line 4031 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_28_28 == (MR_Integer) 0);
#line 167 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 167 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_28_28;
#line 167 "declarative_analyser.m"
                  else
#line 167 "declarative_analyser.m"
                    {
#line 167 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_29_29;

#line 167 "declarative_analyser.m"
                      {
#line 167 "declarative_analyser.m"
                        mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_analyser__V_29_29, mdb__declarative_analyser__V_100_100, mdb__declarative_analyser__V_24_24);
                      }
#line 4051 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_29_29 == (MR_Integer) 0);
#line 167 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 167 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_29_29;
#line 167 "declarative_analyser.m"
                      else
#line 167 "declarative_analyser.m"
                        {
#line 167 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_30_30;

#line 167 "declarative_analyser.m"
                          {
#line 167 "declarative_analyser.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[2], &mdb__declarative_analyser__V_30_30, ((MR_Box) (mdb__declarative_analyser__V_99_99)), ((MR_Box) (mdb__declarative_analyser__V_25_25)));
                          }
#line 4071 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_30_30 == (MR_Integer) 0);
#line 167 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 167 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_30_30;
#line 167 "declarative_analyser.m"
                          else
#line 167 "declarative_analyser.m"
                            {
#line 167 "declarative_analyser.m"
                              MR_Word mdb__declarative_analyser__V_31_31;

#line 167 "declarative_analyser.m"
                              {
#line 167 "declarative_analyser.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[5], &mdb__declarative_analyser__V_31_31, ((MR_Box) (mdb__declarative_analyser__V_98_98)), ((MR_Box) (mdb__declarative_analyser__V_26_26)));
                              }
#line 4091 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_31_31 == (MR_Integer) 0);
#line 167 "declarative_analyser.m"
                              mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 167 "declarative_analyser.m"
                              if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
                                *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_31_31;
#line 167 "declarative_analyser.m"
                              else
#line 167 "declarative_analyser.m"
                                {
#line 167 "declarative_analyser.m"
                                  MR_Integer mdb__declarative_analyser__V_104_104 = (MR_Integer) mdb__declarative_analyser__V_97_97;
#line 167 "declarative_analyser.m"
                                  MR_Integer mdb__declarative_analyser__V_105_105 = (MR_Integer) mdb__declarative_analyser__V_27_27;

#line 167 "declarative_analyser.m"
                                  {
#line 167 "declarative_analyser.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_104_104, mdb__declarative_analyser__V_105_105);
                                  }
#line 167 "declarative_analyser.m"
                                }
#line 167 "declarative_analyser.m"
                            }
#line 167 "declarative_analyser.m"
                        }
#line 167 "declarative_analyser.m"
                    }
#line 167 "declarative_analyser.m"
                }
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 4127 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
              case (MR_Integer) 3:
#line 4133 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
            }
#line 167 "declarative_analyser.m"
          }
#line 167 "declarative_analyser.m"
          break;
#line 167 "declarative_analyser.m"
        case (MR_Integer) 2:
#line 167 "declarative_analyser.m"
          {
#line 167 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "declarative_analyser.m"
            MR_ArrayPtr mdb__declarative_analyser__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 167 "declarative_analyser.m"
#line 167 "declarative_analyser.m"
            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 167 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 167 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 4161 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 4167 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 167 "declarative_analyser.m"
                {
#line 167 "declarative_analyser.m"
                  MR_ArrayPtr mdb__declarative_analyser__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 167 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 167 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 167 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_63_63;

#line 167 "declarative_analyser.m"
                  {
#line 167 "declarative_analyser.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[4], &mdb__declarative_analyser__V_63_63, ((MR_Box) (mdb__declarative_analyser__V_95_95)), ((MR_Box) (mdb__declarative_analyser__V_60_60)));
                  }
#line 4189 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_63_63 == (MR_Integer) 0);
#line 167 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 167 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_63_63;
#line 167 "declarative_analyser.m"
                  else
#line 167 "declarative_analyser.m"
                    {
#line 167 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_64_64;

#line 167 "declarative_analyser.m"
                      {
#line 167 "declarative_analyser.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_2[0], &mdb__declarative_analyser__V_64_64, ((MR_Box) (mdb__declarative_analyser__V_94_94)), ((MR_Box) (mdb__declarative_analyser__V_61_61)));
                      }
#line 4209 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_64_64 == (MR_Integer) 0);
#line 167 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 167 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_64_64;
#line 167 "declarative_analyser.m"
                      else
#line 167 "declarative_analyser.m"
                        {
#line 167 "declarative_analyser.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_93_93, mdb__declarative_analyser__V_62_62);
                        }
#line 167 "declarative_analyser.m"
                    }
#line 167 "declarative_analyser.m"
                }
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
              case (MR_Integer) 3:
#line 4232 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
            }
#line 167 "declarative_analyser.m"
          }
#line 167 "declarative_analyser.m"
          break;
#line 167 "declarative_analyser.m"
        case (MR_Integer) 3:
#line 167 "declarative_analyser.m"
          {
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 167 "declarative_analyser.m"
#line 167 "declarative_analyser.m"
            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 167 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 167 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 4256 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 4262 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 4268 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
              case (MR_Integer) 3:
#line 167 "declarative_analyser.m"
                {
#line 167 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 167 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_102_102 = (MR_Integer) mdb__declarative_analyser__V_96_96;
#line 167 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_103_103 = (MR_Integer) mdb__declarative_analyser__V_81_81;

#line 167 "declarative_analyser.m"
                  {
#line 167 "declarative_analyser.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_102_102, mdb__declarative_analyser__V_103_103);
                  }
#line 167 "declarative_analyser.m"
                }
#line 167 "declarative_analyser.m"
                break;
#line 167 "declarative_analyser.m"
            }
#line 167 "declarative_analyser.m"
          }
#line 167 "declarative_analyser.m"
          break;
#line 167 "declarative_analyser.m"
      }
#line 167 "declarative_analyser.m"
  }
#line 167 "declarative_analyser.m"
}

#line 167 "declarative_analyser.m"
MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0(
#line 167 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 167 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 167 "declarative_analyser.m"
{
#line 167 "declarative_analyser.m"
  {
#line 167 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 167 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_23 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 167 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_24 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 167 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_23 == mdb__declarative_analyser__CastY_24);
#line 167 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 167 "declarative_analyser.m"
    else
#line 167 "declarative_analyser.m"
#line 167 "declarative_analyser.m"
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) {
#line 167 "declarative_analyser.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 167 "declarative_analyser.m"
        case (MR_Integer) 0:
#line 167 "declarative_analyser.m"
          {
#line 167 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastX_3 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 167 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastY_4 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 167 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_4 == mdb__declarative_analyser__CastX_3);
#line 167 "declarative_analyser.m"
          }
#line 167 "declarative_analyser.m"
          break;
#line 167 "declarative_analyser.m"
        case (MR_Integer) 1:
#line 167 "declarative_analyser.m"
          {
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_28_28;
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_29_29;
#line 167 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 167 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_10_10;
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_11_11;
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_12_12;
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_13_13;
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_14_14;

#line 167 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 167 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
              {
#line 167 "declarative_analyser.m"
                mdb__declarative_analyser__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "declarative_analyser.m"
                mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "declarative_analyser.m"
                mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 167 "declarative_analyser.m"
                mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 167 "declarative_analyser.m"
                mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 4396 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_5_5 == mdb__declarative_analyser__V_10_10);
#line 167 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
                  {
#line 4402 "mdb.declarative_analyser.c"
                    {
#line 4404 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_analyser__V_6_6, mdb__declarative_analyser__V_11_11);
                    }
#line 167 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
                      {
#line 4411 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeInfo_28_28 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[2];
#line 4413 "mdb.declarative_analyser.c"
                        {
#line 4415 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_28_28, ((MR_Box) (mdb__declarative_analyser__V_7_7)), ((MR_Box) (mdb__declarative_analyser__V_12_12)));
                        }
#line 167 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
                          {
#line 4422 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__TypeInfo_29_29 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[5];
#line 4424 "mdb.declarative_analyser.c"
                            {
#line 4426 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_29_29, ((MR_Box) (mdb__declarative_analyser__V_8_8)), ((MR_Box) (mdb__declarative_analyser__V_13_13)));
                            }
#line 167 "declarative_analyser.m"
                            if (mdb__declarative_analyser__succeeded)
#line 4431 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_9_9 == mdb__declarative_analyser__V_14_14);
#line 167 "declarative_analyser.m"
                          }
#line 167 "declarative_analyser.m"
                      }
#line 167 "declarative_analyser.m"
                  }
#line 167 "declarative_analyser.m"
              }
#line 167 "declarative_analyser.m"
          }
#line 167 "declarative_analyser.m"
          break;
#line 167 "declarative_analyser.m"
        case (MR_Integer) 2:
#line 167 "declarative_analyser.m"
          {
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeCtorInfo_25_25;
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_26_26;
#line 167 "declarative_analyser.m"
            MR_ArrayPtr mdb__declarative_analyser__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 167 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 167 "declarative_analyser.m"
            MR_ArrayPtr mdb__declarative_analyser__V_18_18;
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_19_19;
#line 167 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_20_20;

#line 167 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 167 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
              {
#line 167 "declarative_analyser.m"
                mdb__declarative_analyser__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 167 "declarative_analyser.m"
                mdb__declarative_analyser__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 167 "declarative_analyser.m"
                mdb__declarative_analyser__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 4478 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__TypeCtorInfo_25_25 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 4480 "mdb.declarative_analyser.c"
                {
#line 4482 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mercury__array____Unify____array_1_0(mdb__declarative_analyser__TypeCtorInfo_25_25, (MR_ArrayPtr) mdb__declarative_analyser__V_15_15, (MR_ArrayPtr) mdb__declarative_analyser__V_18_18);
                }
#line 167 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
                  {
#line 4489 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeInfo_26_26 = (MR_Word) &mdb__declarative_analyser_scalar_common_2[0];
#line 4491 "mdb.declarative_analyser.c"
                    {
#line 4493 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_26_26, ((MR_Box) (mdb__declarative_analyser__V_16_16)), ((MR_Box) (mdb__declarative_analyser__V_19_19)));
                    }
#line 167 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 4498 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_17_17 == mdb__declarative_analyser__V_20_20);
#line 167 "declarative_analyser.m"
                  }
#line 167 "declarative_analyser.m"
              }
#line 167 "declarative_analyser.m"
          }
#line 167 "declarative_analyser.m"
          break;
#line 167 "declarative_analyser.m"
        case (MR_Integer) 3:
#line 167 "declarative_analyser.m"
          {
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 167 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_22_22;

#line 167 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 167 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 167 "declarative_analyser.m"
              {
#line 167 "declarative_analyser.m"
                mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 4525 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_21_21 == mdb__declarative_analyser__V_22_22);
#line 167 "declarative_analyser.m"
              }
#line 167 "declarative_analyser.m"
          }
#line 167 "declarative_analyser.m"
          break;
#line 167 "declarative_analyser.m"
      }
#line 167 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 167 "declarative_analyser.m"
  }
#line 167 "declarative_analyser.m"
}

#line 245 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0(
#line 245 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 245 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 245 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 245 "declarative_analyser.m"
{
#line 245 "declarative_analyser.m"
  {
#line 245 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 245 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_229 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 245 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_230 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 245 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_229 == mdb__declarative_analyser__CastY_230);
#line 245 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 4566 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "declarative_analyser.m"
    else
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) {
#line 245 "declarative_analyser.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
        case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
          switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__2_2)) {
#line 245 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 1:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 2:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 3:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 4:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 5:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                  }
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 1:
#line 4638 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 2:
#line 4644 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 3:
#line 4650 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 1:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 2:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 3:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 4:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 5:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                  }
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 1:
#line 4714 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 2:
#line 4720 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 3:
#line 4726 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
            case (MR_Integer) 2:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 1:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 2:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 3:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 4:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 5:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                  }
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 1:
#line 4790 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 2:
#line 4796 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 3:
#line 4802 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
            case (MR_Integer) 3:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 1:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 2:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 3:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 4:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 5:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                  }
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 1:
#line 4866 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 2:
#line 4872 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 3:
#line 4878 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
            case (MR_Integer) 4:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 1:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 2:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 3:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 4:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 5:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                  }
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 1:
#line 4942 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 2:
#line 4948 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 3:
#line 4954 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
            case (MR_Integer) 5:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
              switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
                  switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 1:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 2:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 3:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 4:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                    case (MR_Integer) 5:
#line 245 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 245 "declarative_analyser.m"
                      break;
#line 245 "declarative_analyser.m"
                  }
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 1:
#line 5018 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 2:
#line 5024 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
                case (MR_Integer) 3:
#line 5030 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                  break;
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
          }
#line 245 "declarative_analyser.m"
          break;
#line 245 "declarative_analyser.m"
        case (MR_Integer) 1:
#line 245 "declarative_analyser.m"
          {
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_249_249 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 245 "declarative_analyser.m"
            MR_String mdb__declarative_analyser__V_250_250 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 5073 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 5079 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 2:
#line 5085 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 3:
#line 5091 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 4:
#line 5097 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 5:
#line 5103 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                }
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 245 "declarative_analyser.m"
                {
#line 245 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 245 "declarative_analyser.m"
                  MR_String mdb__declarative_analyser__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 245 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
#line 245 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
#line 245 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 5)));
#line 245 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_52_52;
#line 245 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_255_255 = (MR_Integer) mdb__declarative_analyser__V_251_251;
#line 245 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_256_256 = (MR_Integer) mdb__declarative_analyser__V_46_46;

#line 245 "declarative_analyser.m"
                  {
#line 245 "declarative_analyser.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_52_52, mdb__declarative_analyser__V_255_255, mdb__declarative_analyser__V_256_256);
                  }
#line 5139 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_52_52 == (MR_Integer) 0);
#line 245 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 245 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_52_52;
#line 245 "declarative_analyser.m"
                  else
#line 245 "declarative_analyser.m"
                    {
#line 245 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_53_53;

#line 245 "declarative_analyser.m"
                      {
#line 245 "declarative_analyser.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_analyser__V_53_53, mdb__declarative_analyser__V_250_250, mdb__declarative_analyser__V_47_47);
                      }
#line 5159 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_53_53 == (MR_Integer) 0);
#line 245 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 245 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_53_53;
#line 245 "declarative_analyser.m"
                      else
#line 245 "declarative_analyser.m"
                        {
#line 245 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_54_54;

#line 245 "declarative_analyser.m"
                          {
#line 245 "declarative_analyser.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_54_54, mdb__declarative_analyser__V_249_249, mdb__declarative_analyser__V_48_48);
                          }
#line 5179 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_54_54 == (MR_Integer) 0);
#line 245 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 245 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_54_54;
#line 245 "declarative_analyser.m"
                          else
#line 245 "declarative_analyser.m"
                            {
#line 245 "declarative_analyser.m"
                              MR_Word mdb__declarative_analyser__V_55_55;

#line 245 "declarative_analyser.m"
                              {
#line 245 "declarative_analyser.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[3], &mdb__declarative_analyser__V_55_55, ((MR_Box) (mdb__declarative_analyser__V_248_248)), ((MR_Box) (mdb__declarative_analyser__V_49_49)));
                              }
#line 5199 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_55_55 == (MR_Integer) 0);
#line 245 "declarative_analyser.m"
                              mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 245 "declarative_analyser.m"
                              if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                                *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_55_55;
#line 245 "declarative_analyser.m"
                              else
#line 245 "declarative_analyser.m"
                                {
#line 245 "declarative_analyser.m"
                                  MR_Word mdb__declarative_analyser__V_56_56;

#line 245 "declarative_analyser.m"
                                  {
#line 245 "declarative_analyser.m"
                                    mdbcomp__prim_data____Compare____proc_label_0_0(&mdb__declarative_analyser__V_56_56, mdb__declarative_analyser__V_247_247, mdb__declarative_analyser__V_50_50);
                                  }
#line 5219 "mdb.declarative_analyser.c"
                                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_56_56 == (MR_Integer) 0);
#line 245 "declarative_analyser.m"
                                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 245 "declarative_analyser.m"
                                  if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_56_56;
#line 245 "declarative_analyser.m"
                                  else
#line 245 "declarative_analyser.m"
                                    {
#line 245 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_257_257 = (MR_Integer) mdb__declarative_analyser__V_246_246;
#line 245 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_258_258 = (MR_Integer) mdb__declarative_analyser__V_51_51;

#line 245 "declarative_analyser.m"
                                      {
#line 245 "declarative_analyser.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_257_257, mdb__declarative_analyser__V_258_258);
                                      }
#line 245 "declarative_analyser.m"
                                    }
#line 245 "declarative_analyser.m"
                                }
#line 245 "declarative_analyser.m"
                            }
#line 245 "declarative_analyser.m"
                        }
#line 245 "declarative_analyser.m"
                    }
#line 245 "declarative_analyser.m"
                }
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 5257 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
              case (MR_Integer) 3:
#line 5263 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
            }
#line 245 "declarative_analyser.m"
          }
#line 245 "declarative_analyser.m"
          break;
#line 245 "declarative_analyser.m"
        case (MR_Integer) 2:
#line 245 "declarative_analyser.m"
          {
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_243_243 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_245_245 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 5298 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 5304 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 2:
#line 5310 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 3:
#line 5316 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 4:
#line 5322 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 5:
#line 5328 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                }
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 5338 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 245 "declarative_analyser.m"
                {
#line 245 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 245 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 245 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_150_150;

#line 245 "declarative_analyser.m"
                  {
#line 245 "declarative_analyser.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_150_150, mdb__declarative_analyser__V_245_245, mdb__declarative_analyser__V_147_147);
                  }
#line 5360 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_150_150 == (MR_Integer) 0);
#line 245 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 245 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_150_150;
#line 245 "declarative_analyser.m"
                  else
#line 245 "declarative_analyser.m"
                    {
#line 245 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_151_151;

#line 245 "declarative_analyser.m"
                      {
#line 245 "declarative_analyser.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_151_151, mdb__declarative_analyser__V_244_244, mdb__declarative_analyser__V_148_148);
                      }
#line 5380 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_151_151 == (MR_Integer) 0);
#line 245 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 245 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_151_151;
#line 245 "declarative_analyser.m"
                      else
#line 245 "declarative_analyser.m"
                        {
#line 245 "declarative_analyser.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_243_243, mdb__declarative_analyser__V_149_149);
                        }
#line 245 "declarative_analyser.m"
                    }
#line 245 "declarative_analyser.m"
                }
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
              case (MR_Integer) 3:
#line 5403 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
            }
#line 245 "declarative_analyser.m"
          }
#line 245 "declarative_analyser.m"
          break;
#line 245 "declarative_analyser.m"
        case (MR_Integer) 3:
#line 245 "declarative_analyser.m"
          {
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_252_252 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_253_253 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
                switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__3_3)) {
#line 245 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 5438 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 5444 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 2:
#line 5450 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 3:
#line 5456 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 4:
#line 5462 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                  case (MR_Integer) 5:
#line 5468 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 245 "declarative_analyser.m"
                    break;
#line 245 "declarative_analyser.m"
                }
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 5478 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 5484 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
              case (MR_Integer) 3:
#line 245 "declarative_analyser.m"
                {
#line 245 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 245 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_195_195 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 245 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_197_197;
#line 245 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_259_259 = (MR_Integer) mdb__declarative_analyser__V_254_254;
#line 245 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_260_260 = (MR_Integer) mdb__declarative_analyser__V_194_194;

#line 245 "declarative_analyser.m"
                  {
#line 245 "declarative_analyser.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_197_197, mdb__declarative_analyser__V_259_259, mdb__declarative_analyser__V_260_260);
                  }
#line 5510 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_197_197 == (MR_Integer) 0);
#line 245 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 245 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_197_197;
#line 245 "declarative_analyser.m"
                  else
#line 245 "declarative_analyser.m"
                    {
#line 245 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_198_198;

#line 245 "declarative_analyser.m"
                      {
#line 245 "declarative_analyser.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_198_198, mdb__declarative_analyser__V_253_253, mdb__declarative_analyser__V_195_195);
                      }
#line 5530 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_198_198 == (MR_Integer) 0);
#line 245 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 245 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_198_198;
#line 245 "declarative_analyser.m"
                      else
#line 245 "declarative_analyser.m"
                        {
#line 245 "declarative_analyser.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_252_252, mdb__declarative_analyser__V_196_196);
                        }
#line 245 "declarative_analyser.m"
                    }
#line 245 "declarative_analyser.m"
                }
#line 245 "declarative_analyser.m"
                break;
#line 245 "declarative_analyser.m"
            }
#line 245 "declarative_analyser.m"
          }
#line 245 "declarative_analyser.m"
          break;
#line 245 "declarative_analyser.m"
      }
#line 245 "declarative_analyser.m"
  }
#line 245 "declarative_analyser.m"
}

#line 245 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0(
#line 245 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 245 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 245 "declarative_analyser.m"
{
#line 245 "declarative_analyser.m"
  {
#line 245 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 245 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_39 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 245 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_40 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 245 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_39 == mdb__declarative_analyser__CastY_40);
#line 245 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 245 "declarative_analyser.m"
    else
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) {
#line 245 "declarative_analyser.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
        case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
#line 245 "declarative_analyser.m"
          switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__1_1)) {
#line 245 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 245 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 245 "declarative_analyser.m"
              {
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastX_3 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastY_4 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_4 == mdb__declarative_analyser__CastX_3);
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 245 "declarative_analyser.m"
              {
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastX_5 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastY_6 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_6 == mdb__declarative_analyser__CastX_5);
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
            case (MR_Integer) 2:
#line 245 "declarative_analyser.m"
              {
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastX_19 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastY_20 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_20 == mdb__declarative_analyser__CastX_19);
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
            case (MR_Integer) 3:
#line 245 "declarative_analyser.m"
              {
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastX_21 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastY_22 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_22 == mdb__declarative_analyser__CastX_21);
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
            case (MR_Integer) 4:
#line 245 "declarative_analyser.m"
              {
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastX_35 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastY_36 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_36 == mdb__declarative_analyser__CastX_35);
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
            case (MR_Integer) 5:
#line 245 "declarative_analyser.m"
              {
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastX_37 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 245 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastY_38 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_38 == mdb__declarative_analyser__CastX_37);
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
              break;
#line 245 "declarative_analyser.m"
          }
#line 245 "declarative_analyser.m"
          break;
#line 245 "declarative_analyser.m"
        case (MR_Integer) 1:
#line 245 "declarative_analyser.m"
          {
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_41_41;
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 245 "declarative_analyser.m"
            MR_String mdb__declarative_analyser__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 5)));
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_13_13;
#line 245 "declarative_analyser.m"
            MR_String mdb__declarative_analyser__V_14_14;
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_15_15;
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_16_16;
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_17_17;
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_18_18;

#line 245 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 245 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
              {
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
#line 5745 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_7_7 == mdb__declarative_analyser__V_13_13);
#line 245 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                  {
#line 5751 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = (strcmp(mdb__declarative_analyser__V_8_8, mdb__declarative_analyser__V_14_14) == 0);
#line 245 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                      {
#line 5757 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_9_9 == mdb__declarative_analyser__V_15_15);
#line 245 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                          {
#line 5763 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__TypeInfo_41_41 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[3];
#line 5765 "mdb.declarative_analyser.c"
                            {
#line 5767 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_41_41, ((MR_Box) (mdb__declarative_analyser__V_10_10)), ((MR_Box) (mdb__declarative_analyser__V_16_16)));
                            }
#line 245 "declarative_analyser.m"
                            if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                              {
#line 5774 "mdb.declarative_analyser.c"
                                {
#line 5776 "mdb.declarative_analyser.c"
                                  mdb__declarative_analyser__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdb__declarative_analyser__V_11_11, mdb__declarative_analyser__V_17_17);
                                }
#line 245 "declarative_analyser.m"
                                if (mdb__declarative_analyser__succeeded)
#line 5781 "mdb.declarative_analyser.c"
                                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_12_12 == mdb__declarative_analyser__V_18_18);
#line 245 "declarative_analyser.m"
                              }
#line 245 "declarative_analyser.m"
                          }
#line 245 "declarative_analyser.m"
                      }
#line 245 "declarative_analyser.m"
                  }
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
          }
#line 245 "declarative_analyser.m"
          break;
#line 245 "declarative_analyser.m"
        case (MR_Integer) 2:
#line 245 "declarative_analyser.m"
          {
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_26_26;
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_27_27;
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_28_28;

#line 245 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 245 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
              {
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 5826 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_23_23 == mdb__declarative_analyser__V_26_26);
#line 245 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                  {
#line 5832 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_24_24 == mdb__declarative_analyser__V_27_27);
#line 245 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 5836 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_25_25 == mdb__declarative_analyser__V_28_28);
#line 245 "declarative_analyser.m"
                  }
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
          }
#line 245 "declarative_analyser.m"
          break;
#line 245 "declarative_analyser.m"
        case (MR_Integer) 3:
#line 245 "declarative_analyser.m"
          {
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 245 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_32_32;
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_33_33;
#line 245 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_34_34;

#line 245 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 245 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
              {
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "declarative_analyser.m"
                mdb__declarative_analyser__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 5875 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_29_29 == mdb__declarative_analyser__V_32_32);
#line 245 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 245 "declarative_analyser.m"
                  {
#line 5881 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_30_30 == mdb__declarative_analyser__V_33_33);
#line 245 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 5885 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_31_31 == mdb__declarative_analyser__V_34_34);
#line 245 "declarative_analyser.m"
                  }
#line 245 "declarative_analyser.m"
              }
#line 245 "declarative_analyser.m"
          }
#line 245 "declarative_analyser.m"
          break;
#line 245 "declarative_analyser.m"
      }
#line 245 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 245 "declarative_analyser.m"
  }
#line 245 "declarative_analyser.m"
}

#line 332 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0(
#line 332 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 332 "declarative_analyser.m"
{
#line 332 "declarative_analyser.m"
  {
#line 332 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 332 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 332 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 332 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_8 == mdb__declarative_analyser__CastY_9);
#line 332 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 5928 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 332 "declarative_analyser.m"
    else
#line 332 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 332 "declarative_analyser.m"
      else
#line 5940 "mdb.declarative_analyser.c"
        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 332 "declarative_analyser.m"
    else
#line 332 "declarative_analyser.m"
      {
#line 332 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 332 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5951 "mdb.declarative_analyser.c"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 332 "declarative_analyser.m"
        else
#line 332 "declarative_analyser.m"
          {
#line 332 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));

#line 332 "declarative_analyser.m"
            {
#line 332 "declarative_analyser.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_11_11, mdb__declarative_analyser__V_5_5);
            }
#line 332 "declarative_analyser.m"
          }
#line 332 "declarative_analyser.m"
      }
#line 332 "declarative_analyser.m"
  }
#line 332 "declarative_analyser.m"
}

#line 332 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0(
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 332 "declarative_analyser.m"
{
#line 332 "declarative_analyser.m"
  {
#line 332 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 332 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_7 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 332 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 332 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_7 == mdb__declarative_analyser__CastY_8);
#line 332 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 332 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 332 "declarative_analyser.m"
    else
#line 332 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "declarative_analyser.m"
      {
#line 332 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__CastX_5 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 332 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__CastY_6 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 332 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_6 == mdb__declarative_analyser__CastX_5);
#line 332 "declarative_analyser.m"
      }
#line 332 "declarative_analyser.m"
    else
#line 332 "declarative_analyser.m"
      {
#line 332 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 332 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_4_4;

#line 332 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 332 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 332 "declarative_analyser.m"
          {
#line 332 "declarative_analyser.m"
            mdb__declarative_analyser__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 6030 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_3_3 == mdb__declarative_analyser__V_4_4);
#line 332 "declarative_analyser.m"
          }
#line 332 "declarative_analyser.m"
      }
#line 332 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 332 "declarative_analyser.m"
  }
#line 332 "declarative_analyser.m"
}

#line 82 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0(
#line 82 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_10,
#line 82 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 82 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 82 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 82 "declarative_analyser.m"
{
#line 82 "declarative_analyser.m"
  {
#line 82 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 82 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 82 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 82 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_8 == mdb__declarative_analyser__CastY_9);
#line 82 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 6069 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 82 "declarative_analyser.m"
    else
#line 82 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 82 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 82 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 82 "declarative_analyser.m"
      else
#line 6081 "mdb.declarative_analyser.c"
        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 82 "declarative_analyser.m"
    else
#line 82 "declarative_analyser.m"
      {
#line 82 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0));

#line 82 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6092 "mdb.declarative_analyser.c"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 82 "declarative_analyser.m"
        else
#line 82 "declarative_analyser.m"
          {
#line 82 "declarative_analyser.m"
            MR_Box mdb__declarative_analyser__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0));

#line 82 "declarative_analyser.m"
            {
#line 82 "declarative_analyser.m"
              mercury__builtin__compare_3_p_0(mdb__declarative_analyser__TypeInfo_for_T_10, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_11_11, mdb__declarative_analyser__V_5_5);
            }
#line 82 "declarative_analyser.m"
          }
#line 82 "declarative_analyser.m"
      }
#line 82 "declarative_analyser.m"
  }
#line 82 "declarative_analyser.m"
}

#line 82 "declarative_analyser.m"
MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0(
#line 82 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_9,
#line 82 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 82 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 82 "declarative_analyser.m"
{
#line 82 "declarative_analyser.m"
  {
#line 82 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 82 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_7 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 82 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 82 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_7 == mdb__declarative_analyser__CastY_8);
#line 82 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 82 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 82 "declarative_analyser.m"
    else
#line 82 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 82 "declarative_analyser.m"
      {
#line 82 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__CastX_5 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 82 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__CastY_6 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 82 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_6 == mdb__declarative_analyser__CastX_5);
#line 82 "declarative_analyser.m"
      }
#line 82 "declarative_analyser.m"
    else
#line 82 "declarative_analyser.m"
      {
#line 82 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__V_3_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0));
#line 82 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__V_4_4;

#line 82 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 82 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 82 "declarative_analyser.m"
          {
#line 82 "declarative_analyser.m"
            mdb__declarative_analyser__V_4_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0));
#line 6173 "mdb.declarative_analyser.c"
            {
#line 6175 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_9, mdb__declarative_analyser__V_3_3, mdb__declarative_analyser__V_4_4);
            }
#line 82 "declarative_analyser.m"
          }
#line 82 "declarative_analyser.m"
      }
#line 82 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 82 "declarative_analyser.m"
  }
#line 82 "declarative_analyser.m"
}

#line 296 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0(
#line 296 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_23,
#line 296 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 296 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 296 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 296 "declarative_analyser.m"
{
#line 296 "declarative_analyser.m"
  {
#line 296 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 296 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_21 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 296 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_22 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 296 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_21 == mdb__declarative_analyser__CastY_22);
#line 296 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 6215 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 296 "declarative_analyser.m"
    else
#line 296 "declarative_analyser.m"
      {
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 5)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_16_16;

#line 296 "declarative_analyser.m"
        {
#line 296 "declarative_analyser.m"
          mdb__declarative_edt____Compare____search_space_1_0(mdb__declarative_analyser__TypeInfo_for_T_23, &mdb__declarative_analyser__V_16_16, mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_10_10);
        }
#line 6253 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_16_16 == (MR_Integer) 0);
#line 296 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 296 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 296 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_16_16;
#line 296 "declarative_analyser.m"
        else
#line 296 "declarative_analyser.m"
          {
#line 296 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_17_17;

#line 296 "declarative_analyser.m"
            {
#line 296 "declarative_analyser.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[0], &mdb__declarative_analyser__V_17_17, ((MR_Box) (mdb__declarative_analyser__V_5_5)), ((MR_Box) (mdb__declarative_analyser__V_11_11)));
            }
#line 6273 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_17_17 == (MR_Integer) 0);
#line 296 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 296 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 296 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_17_17;
#line 296 "declarative_analyser.m"
            else
#line 296 "declarative_analyser.m"
              {
#line 296 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_18_18;

#line 296 "declarative_analyser.m"
                {
#line 296 "declarative_analyser.m"
                  mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__V_18_18, mdb__declarative_analyser__V_6_6, mdb__declarative_analyser__V_12_12);
                }
#line 6293 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_18_18 == (MR_Integer) 0);
#line 296 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 296 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 296 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_18_18;
#line 296 "declarative_analyser.m"
                else
#line 296 "declarative_analyser.m"
                  {
#line 296 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_19_19;

#line 296 "declarative_analyser.m"
                    {
#line 296 "declarative_analyser.m"
                      mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__V_19_19, mdb__declarative_analyser__V_7_7, mdb__declarative_analyser__V_13_13);
                    }
#line 6313 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_19_19 == (MR_Integer) 0);
#line 296 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 296 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 296 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_19_19;
#line 296 "declarative_analyser.m"
                    else
#line 296 "declarative_analyser.m"
                      {
#line 296 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_20_20;

#line 296 "declarative_analyser.m"
                        {
#line 296 "declarative_analyser.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[1], &mdb__declarative_analyser__V_20_20, ((MR_Box) (mdb__declarative_analyser__V_8_8)), ((MR_Box) (mdb__declarative_analyser__V_14_14)));
                        }
#line 6333 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_20_20 == (MR_Integer) 0);
#line 296 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 296 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 296 "declarative_analyser.m"
                          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_20_20;
#line 296 "declarative_analyser.m"
                        else
#line 296 "declarative_analyser.m"
                          {
#line 296 "declarative_analyser.m"
                            MR_Word mdb__declarative_analyser__TypeInfo_31_31;

#line 6348 "mdb.declarative_analyser.c"
                            {
#line 6350 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6352 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_31_31, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1));
#line 6354 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_31_31, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_23));
#line 6356 "mdb.declarative_analyser.c"
                            }
#line 296 "declarative_analyser.m"
                            {
#line 296 "declarative_analyser.m"
                              mercury__maybe____Compare____maybe_1_0(mdb__declarative_analyser__TypeInfo_31_31, mdb__declarative_analyser__HeadVar__1_1, (MR_Word) mdb__declarative_analyser__V_9_9, (MR_Word) mdb__declarative_analyser__V_15_15);
                            }
#line 296 "declarative_analyser.m"
                          }
#line 296 "declarative_analyser.m"
                      }
#line 296 "declarative_analyser.m"
                  }
#line 296 "declarative_analyser.m"
              }
#line 296 "declarative_analyser.m"
          }
#line 296 "declarative_analyser.m"
      }
#line 296 "declarative_analyser.m"
  }
#line 296 "declarative_analyser.m"
}

#line 296 "declarative_analyser.m"
MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0(
#line 296 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_17,
#line 296 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 296 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 296 "declarative_analyser.m"
{
#line 296 "declarative_analyser.m"
  {
#line 296 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 296 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_15 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 296 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_16 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 296 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_15 == mdb__declarative_analyser__CastY_16);
#line 296 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 296 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 296 "declarative_analyser.m"
    else
#line 296 "declarative_analyser.m"
      {
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_20_20;
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_21_21;
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeCtorInfo_22_22;
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_23_23;
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 5)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 296 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));

#line 6443 "mdb.declarative_analyser.c"
        {
#line 6445 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt____Unify____search_space_1_0(mdb__declarative_analyser__TypeInfo_for_T_17, mdb__declarative_analyser__V_3_3, mdb__declarative_analyser__V_9_9);
        }
#line 296 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 296 "declarative_analyser.m"
          {
#line 6452 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__TypeInfo_20_20 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[0];
#line 6454 "mdb.declarative_analyser.c"
            {
#line 6456 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_20_20, ((MR_Box) (mdb__declarative_analyser__V_4_4)), ((MR_Box) (mdb__declarative_analyser__V_10_10)));
            }
#line 296 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 296 "declarative_analyser.m"
              {
#line 6463 "mdb.declarative_analyser.c"
                {
#line 6465 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(mdb__declarative_analyser__V_5_5, mdb__declarative_analyser__V_11_11);
                }
#line 296 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 296 "declarative_analyser.m"
                  {
#line 6472 "mdb.declarative_analyser.c"
                    {
#line 6474 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(mdb__declarative_analyser__V_6_6, mdb__declarative_analyser__V_12_12);
                    }
#line 296 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 296 "declarative_analyser.m"
                      {
#line 6481 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeInfo_21_21 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[1];
#line 6483 "mdb.declarative_analyser.c"
                        {
#line 6485 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_21_21, ((MR_Box) (mdb__declarative_analyser__V_7_7)), ((MR_Box) (mdb__declarative_analyser__V_13_13)));
                        }
#line 296 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 296 "declarative_analyser.m"
                          {
#line 6492 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1;
#line 6494 "mdb.declarative_analyser.c"
                            {
#line 6496 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6498 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__TypeCtorInfo_22_22));
#line 6500 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_17));
#line 6502 "mdb.declarative_analyser.c"
                            }
#line 6504 "mdb.declarative_analyser.c"
                            {
#line 6506 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__succeeded = mercury__maybe____Unify____maybe_1_0(mdb__declarative_analyser__TypeInfo_23_23, (MR_Word) mdb__declarative_analyser__V_8_8, (MR_Word) mdb__declarative_analyser__V_14_14);
                            }
#line 296 "declarative_analyser.m"
                          }
#line 296 "declarative_analyser.m"
                      }
#line 296 "declarative_analyser.m"
                  }
#line 296 "declarative_analyser.m"
              }
#line 296 "declarative_analyser.m"
          }
#line 296 "declarative_analyser.m"
      }
#line 296 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 296 "declarative_analyser.m"
  }
#line 296 "declarative_analyser.m"
}

#line 35 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0(
#line 35 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_79,
#line 35 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 35 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 35 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 35 "declarative_analyser.m"
{
#line 35 "declarative_analyser.m"
  {
#line 35 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 35 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_77 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 35 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_78 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 35 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_77 == mdb__declarative_analyser__CastY_78);
#line 35 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 6554 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "declarative_analyser.m"
    else
#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) {
#line 35 "declarative_analyser.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
        case (MR_Integer) 0:
#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
          switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 35 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 35 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "declarative_analyser.m"
              break;
#line 35 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 6578 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
              break;
#line 35 "declarative_analyser.m"
            case (MR_Integer) 2:
#line 6584 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
              break;
#line 35 "declarative_analyser.m"
            case (MR_Integer) 3:
#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
#line 35 "declarative_analyser.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
                case (MR_Integer) 0:
#line 6597 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                  break;
#line 35 "declarative_analyser.m"
                case (MR_Integer) 1:
#line 6603 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                  break;
#line 35 "declarative_analyser.m"
                case (MR_Integer) 2:
#line 6609 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                  break;
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
              break;
#line 35 "declarative_analyser.m"
          }
#line 35 "declarative_analyser.m"
          break;
#line 35 "declarative_analyser.m"
        case (MR_Integer) 1:
#line 35 "declarative_analyser.m"
          {
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 35 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 6637 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                break;
#line 35 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 35 "declarative_analyser.m"
                {
#line 35 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 35 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 35 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_16_16;

#line 35 "declarative_analyser.m"
                  {
#line 35 "declarative_analyser.m"
                    mdb__declarative_debugger____Compare____decl_bug_0_0(&mdb__declarative_analyser__V_16_16, mdb__declarative_analyser__V_90_90, mdb__declarative_analyser__V_14_14);
                  }
#line 6657 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_16_16 == (MR_Integer) 0);
#line 35 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 35 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 35 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_16_16;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    {
#line 35 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_86_86;

#line 6672 "mdb.declarative_analyser.c"
                      {
#line 6674 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6676 "mdb.declarative_analyser.c"
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_86_86, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 6678 "mdb.declarative_analyser.c"
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_86_86, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_79));
#line 6680 "mdb.declarative_analyser.c"
                      }
#line 35 "declarative_analyser.m"
                      {
#line 35 "declarative_analyser.m"
                        mercury__list____Compare____list_1_0(mdb__declarative_analyser__TypeInfo_86_86, mdb__declarative_analyser__HeadVar__1_1, (MR_Word) mdb__declarative_analyser__V_89_89, (MR_Word) mdb__declarative_analyser__V_15_15);
                      }
#line 35 "declarative_analyser.m"
                    }
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
                break;
#line 35 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 6695 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                break;
#line 35 "declarative_analyser.m"
              case (MR_Integer) 3:
#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
#line 35 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 6708 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 6714 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 2:
#line 6720 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
                break;
#line 35 "declarative_analyser.m"
            }
#line 35 "declarative_analyser.m"
          }
#line 35 "declarative_analyser.m"
          break;
#line 35 "declarative_analyser.m"
        case (MR_Integer) 2:
#line 35 "declarative_analyser.m"
          {
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
            switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 35 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 6748 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                break;
#line 35 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 6754 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                break;
#line 35 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 35 "declarative_analyser.m"
                {
#line 35 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));

#line 35 "declarative_analyser.m"
                  {
#line 35 "declarative_analyser.m"
                    mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_91_91, mdb__declarative_analyser__V_34_34);
                  }
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
                break;
#line 35 "declarative_analyser.m"
              case (MR_Integer) 3:
#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
#line 35 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 6783 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 6789 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 2:
#line 6795 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
                break;
#line 35 "declarative_analyser.m"
            }
#line 35 "declarative_analyser.m"
          }
#line 35 "declarative_analyser.m"
          break;
#line 35 "declarative_analyser.m"
        case (MR_Integer) 3:
#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)))) {
#line 35 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 35 "declarative_analyser.m"
              {
#line 35 "declarative_analyser.m"
                MR_Box mdb__declarative_analyser__V_92_92 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1));

#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
                switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 35 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 6830 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 6836 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 2:
#line 6842 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 3:
#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
#line 35 "declarative_analyser.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
                      case (MR_Integer) 0:
#line 35 "declarative_analyser.m"
                        {
#line 35 "declarative_analyser.m"
                          MR_Box mdb__declarative_analyser__V_48_48 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1));

#line 35 "declarative_analyser.m"
                          {
#line 35 "declarative_analyser.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_92_92, mdb__declarative_analyser__V_48_48);
                          }
#line 35 "declarative_analyser.m"
                        }
#line 35 "declarative_analyser.m"
                        break;
#line 35 "declarative_analyser.m"
                      case (MR_Integer) 1:
#line 6871 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                        break;
#line 35 "declarative_analyser.m"
                      case (MR_Integer) 2:
#line 6877 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                        break;
#line 35 "declarative_analyser.m"
                    }
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
              break;
#line 35 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 35 "declarative_analyser.m"
              {
#line 35 "declarative_analyser.m"
                MR_Box mdb__declarative_analyser__V_93_93 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1));

#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
                switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 35 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 6905 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 6911 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 2:
#line 6917 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 3:
#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
#line 35 "declarative_analyser.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
                      case (MR_Integer) 0:
#line 6930 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                        break;
#line 35 "declarative_analyser.m"
                      case (MR_Integer) 1:
#line 35 "declarative_analyser.m"
                        {
#line 35 "declarative_analyser.m"
                          MR_Box mdb__declarative_analyser__V_62_62 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1));

#line 35 "declarative_analyser.m"
                          {
#line 35 "declarative_analyser.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_93_93, mdb__declarative_analyser__V_62_62);
                          }
#line 35 "declarative_analyser.m"
                        }
#line 35 "declarative_analyser.m"
                        break;
#line 35 "declarative_analyser.m"
                      case (MR_Integer) 2:
#line 6952 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                        break;
#line 35 "declarative_analyser.m"
                    }
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
              break;
#line 35 "declarative_analyser.m"
            case (MR_Integer) 2:
#line 35 "declarative_analyser.m"
              {
#line 35 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));

#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
                switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) {
#line 35 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 6980 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 6986 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 2:
#line 6992 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                  case (MR_Integer) 3:
#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) {
#line 35 "declarative_analyser.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
                      case (MR_Integer) 0:
#line 7005 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                        break;
#line 35 "declarative_analyser.m"
                      case (MR_Integer) 1:
#line 7011 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                        break;
#line 35 "declarative_analyser.m"
                      case (MR_Integer) 2:
#line 35 "declarative_analyser.m"
                        {
#line 35 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));

#line 35 "declarative_analyser.m"
                          {
#line 35 "declarative_analyser.m"
                            mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_94_94, mdb__declarative_analyser__V_76_76);
                          }
#line 35 "declarative_analyser.m"
                        }
#line 35 "declarative_analyser.m"
                        break;
#line 35 "declarative_analyser.m"
                    }
#line 35 "declarative_analyser.m"
                    break;
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
              break;
#line 35 "declarative_analyser.m"
          }
#line 35 "declarative_analyser.m"
          break;
#line 35 "declarative_analyser.m"
      }
#line 35 "declarative_analyser.m"
  }
#line 35 "declarative_analyser.m"
}

#line 35 "declarative_analyser.m"
MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0(
#line 35 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_19,
#line 35 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 35 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 35 "declarative_analyser.m"
{
#line 35 "declarative_analyser.m"
  {
#line 35 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 35 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_17 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 35 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_18 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 35 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_17 == mdb__declarative_analyser__CastY_18);
#line 35 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 35 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 35 "declarative_analyser.m"
    else
#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
      switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) {
#line 35 "declarative_analyser.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
        case (MR_Integer) 0:
#line 35 "declarative_analyser.m"
          {
#line 35 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastX_3 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 35 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastY_4 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 35 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_4 == mdb__declarative_analyser__CastX_3);
#line 35 "declarative_analyser.m"
          }
#line 35 "declarative_analyser.m"
          break;
#line 35 "declarative_analyser.m"
        case (MR_Integer) 1:
#line 35 "declarative_analyser.m"
          {
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeCtorInfo_21_21;
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_22_22;
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_7_7;
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_8_8;

#line 35 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 35 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 35 "declarative_analyser.m"
              {
#line 35 "declarative_analyser.m"
                mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 35 "declarative_analyser.m"
                mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 7127 "mdb.declarative_analyser.c"
                {
#line 7129 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mdb__declarative_debugger____Unify____decl_bug_0_0(mdb__declarative_analyser__V_5_5, mdb__declarative_analyser__V_7_7);
                }
#line 35 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 35 "declarative_analyser.m"
                  {
#line 7136 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeCtorInfo_21_21 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1;
#line 7138 "mdb.declarative_analyser.c"
                    {
#line 7140 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7142 "mdb.declarative_analyser.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_22_22, 0) = ((MR_Box) (mdb__declarative_analyser__TypeCtorInfo_21_21));
#line 7144 "mdb.declarative_analyser.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_19));
#line 7146 "mdb.declarative_analyser.c"
                    }
#line 7148 "mdb.declarative_analyser.c"
                    {
#line 7150 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_analyser__TypeInfo_22_22, (MR_Word) mdb__declarative_analyser__V_6_6, (MR_Word) mdb__declarative_analyser__V_8_8);
                    }
#line 35 "declarative_analyser.m"
                  }
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
          }
#line 35 "declarative_analyser.m"
          break;
#line 35 "declarative_analyser.m"
        case (MR_Integer) 2:
#line 35 "declarative_analyser.m"
          {
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_10_10;

#line 35 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 35 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 35 "declarative_analyser.m"
              {
#line 35 "declarative_analyser.m"
                mdb__declarative_analyser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 7178 "mdb.declarative_analyser.c"
                {
#line 7180 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__V_9_9, mdb__declarative_analyser__V_10_10);
                }
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
          }
#line 35 "declarative_analyser.m"
          break;
#line 35 "declarative_analyser.m"
        case (MR_Integer) 3:
#line 35 "declarative_analyser.m"
#line 35 "declarative_analyser.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)))) {
#line 35 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 35 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 35 "declarative_analyser.m"
              {
#line 35 "declarative_analyser.m"
                MR_Box mdb__declarative_analyser__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1));
#line 35 "declarative_analyser.m"
                MR_Box mdb__declarative_analyser__V_12_12;

#line 35 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 35 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 35 "declarative_analyser.m"
                  {
#line 35 "declarative_analyser.m"
                    mdb__declarative_analyser__V_12_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1));
#line 7213 "mdb.declarative_analyser.c"
                    {
#line 7215 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__V_11_11, mdb__declarative_analyser__V_12_12);
                    }
#line 35 "declarative_analyser.m"
                  }
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
              break;
#line 35 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 35 "declarative_analyser.m"
              {
#line 35 "declarative_analyser.m"
                MR_Box mdb__declarative_analyser__V_13_13 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1));
#line 35 "declarative_analyser.m"
                MR_Box mdb__declarative_analyser__V_14_14;

#line 35 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 35 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 35 "declarative_analyser.m"
                  {
#line 35 "declarative_analyser.m"
                    mdb__declarative_analyser__V_14_14 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1));
#line 7241 "mdb.declarative_analyser.c"
                    {
#line 7243 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__V_13_13, mdb__declarative_analyser__V_14_14);
                    }
#line 35 "declarative_analyser.m"
                  }
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
              break;
#line 35 "declarative_analyser.m"
            case (MR_Integer) 2:
#line 35 "declarative_analyser.m"
              {
#line 35 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 35 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_16_16;

#line 35 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 35 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 35 "declarative_analyser.m"
                  {
#line 35 "declarative_analyser.m"
                    mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 7269 "mdb.declarative_analyser.c"
                    {
#line 7271 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__V_15_15, mdb__declarative_analyser__V_16_16);
                    }
#line 35 "declarative_analyser.m"
                  }
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
              break;
#line 35 "declarative_analyser.m"
          }
#line 35 "declarative_analyser.m"
          break;
#line 35 "declarative_analyser.m"
      }
#line 35 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 35 "declarative_analyser.m"
  }
#line 35 "declarative_analyser.m"
}

#line 1348 "declarative_analyser.m"
static MR_String MR_CALL 
mdb__declarative_analyser__search_mode_to_string_1_f_0(
#line 1348 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1)
#line 1348 "declarative_analyser.m"
{
#line 1350 "declarative_analyser.m"
  {
#line 1350 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1350 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__HeadVar__2_2;

#line 1350 "declarative_analyser.m"
#line 1350 "declarative_analyser.m"
    switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) {
#line 1350 "declarative_analyser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1350 "declarative_analyser.m"
      case (MR_Integer) 0:
#line 1350 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "top down";
#line 1350 "declarative_analyser.m"
        break;
#line 1350 "declarative_analyser.m"
      case (MR_Integer) 1:
#line 1350 "declarative_analyser.m"
        {
#line 1350 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 1351 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 1351 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 1351 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 1351 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));

#line 1350 "declarative_analyser.m"
#line 1350 "declarative_analyser.m"
          switch (mdb__declarative_analyser__V_19_19) {
#line 1350 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1350 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 1353 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking marked sub-term (using accurate algorithm)";
#line 1350 "declarative_analyser.m"
              break;
#line 1350 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 1356 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking marked sub-term (using fast algorithm)";
#line 1350 "declarative_analyser.m"
              break;
#line 1350 "declarative_analyser.m"
          }
#line 1350 "declarative_analyser.m"
        }
#line 1350 "declarative_analyser.m"
        break;
#line 1350 "declarative_analyser.m"
      case (MR_Integer) 2:
#line 1357 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "binary search on path";
#line 1350 "declarative_analyser.m"
        break;
#line 1350 "declarative_analyser.m"
      case (MR_Integer) 3:
#line 1350 "declarative_analyser.m"
        {
#line 1350 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));

#line 1350 "declarative_analyser.m"
#line 1350 "declarative_analyser.m"
          switch (mdb__declarative_analyser__V_18_18) {
#line 1350 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1350 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 1359 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "divide and query";
#line 1350 "declarative_analyser.m"
              break;
#line 1350 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 1361 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "suspicion divide and query";
#line 1350 "declarative_analyser.m"
              break;
#line 1350 "declarative_analyser.m"
          }
#line 1350 "declarative_analyser.m"
        }
#line 1350 "declarative_analyser.m"
        break;
#line 1350 "declarative_analyser.m"
    }
#line 1350 "declarative_analyser.m"
    return mdb__declarative_analyser__HeadVar__2_2;
#line 1350 "declarative_analyser.m"
  }
#line 1348 "declarative_analyser.m"
}

#line 1263 "declarative_analyser.m"
static MR_String MR_CALL 
mdb__declarative_analyser__weighting_to_reason_string_3_f_0(
#line 1263 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 1263 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Weight1_2,
#line 1263 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Weight2_3)
#line 1263 "declarative_analyser.m"
{
#line 1265 "declarative_analyser.m"
  {
#line 1265 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1265 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__Str_4;

#line 1265 "declarative_analyser.m"
#line 1265 "declarative_analyser.m"
    switch (mdb__declarative_analyser__HeadVar__1_1) {
#line 1265 "declarative_analyser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1265 "declarative_analyser.m"
      case (MR_Integer) 0:
#line 1265 "declarative_analyser.m"
        {
#line 1265 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__Weight1Str_8;
#line 1265 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__Weight2Str_9;
#line 1265 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_11_11;
#line 1265 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_12_12;
#line 1265 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_14_14;

#line 1266 "declarative_analyser.m"
          {
#line 1266 "declarative_analyser.m"
            mdb__declarative_analyser__Weight1Str_8 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight1_2);
          }
#line 1267 "declarative_analyser.m"
          {
#line 1267 "declarative_analyser.m"
            mdb__declarative_analyser__Weight2Str_9 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight2_3);
          }
#line 1269 "declarative_analyser.m"
          {
#line 1269 "declarative_analyser.m"
            mdb__declarative_analyser__V_14_14 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight2Str_9, (MR_String) " events each.");
          }
#line 1269 "declarative_analyser.m"
          {
#line 1269 "declarative_analyser.m"
            mdb__declarative_analyser__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " and ", mdb__declarative_analyser__V_14_14);
          }
#line 1269 "declarative_analyser.m"
          {
#line 1269 "declarative_analyser.m"
            mdb__declarative_analyser__V_11_11 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight1Str_8, mdb__declarative_analyser__V_12_12);
          }
#line 1269 "declarative_analyser.m"
          {
#line 1269 "declarative_analyser.m"
            mdb__declarative_analyser__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides the suspect area into two regions of ", mdb__declarative_analyser__V_11_11);
          }
#line 1265 "declarative_analyser.m"
        }
#line 1265 "declarative_analyser.m"
        break;
#line 1265 "declarative_analyser.m"
      case (MR_Integer) 1:
#line 1270 "declarative_analyser.m"
        {
#line 1270 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__Weight1Str_19;
#line 1270 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__Weight2Str_20;
#line 1270 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_22_22;
#line 1270 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_24_24;
#line 1270 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_25_25;
#line 1270 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_27_27;

#line 1271 "declarative_analyser.m"
          {
#line 1271 "declarative_analyser.m"
            mdb__declarative_analyser__Weight1Str_19 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight1_2);
          }
#line 1272 "declarative_analyser.m"
          {
#line 1272 "declarative_analyser.m"
            mdb__declarative_analyser__Weight2Str_20 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight2_3);
          }
#line 1275 "declarative_analyser.m"
          {
#line 1275 "declarative_analyser.m"
            mdb__declarative_analyser__V_27_27 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight2Str_20, (MR_String) ".");
          }
#line 1275 "declarative_analyser.m"
          {
#line 1275 "declarative_analyser.m"
            mdb__declarative_analyser__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) " and\n        ", mdb__declarative_analyser__V_27_27);
          }
#line 1274 "declarative_analyser.m"
          {
#line 1274 "declarative_analyser.m"
            mdb__declarative_analyser__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight1Str_19, mdb__declarative_analyser__V_25_25);
          }
#line 1274 "declarative_analyser.m"
          {
#line 1274 "declarative_analyser.m"
            mdb__declarative_analyser__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "two regions of suspicion ", mdb__declarative_analyser__V_24_24);
          }
#line 1273 "declarative_analyser.m"
          {
#line 1273 "declarative_analyser.m"
            mdb__declarative_analyser__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides the suspect area into ", mdb__declarative_analyser__V_22_22);
          }
#line 1270 "declarative_analyser.m"
        }
#line 1265 "declarative_analyser.m"
        break;
#line 1265 "declarative_analyser.m"
    }
#line 1265 "declarative_analyser.m"
    return mdb__declarative_analyser__Str_4;
#line 1265 "declarative_analyser.m"
  }
#line 1263 "declarative_analyser.m"
}

#line 1226 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0_1(
#line 1226 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 1226 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
#line 1226 "declarative_analyser.m"
{
#line 1226 "declarative_analyser.m"
  {
#line 1226 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__wrapper_arg_2;
#line 1226 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;
#line 1226 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__conv0_HeadVar__2_2;

#line 1226 "declarative_analyser.m"
    {
#line 1226 "declarative_analyser.m"
      mdb__declarative_analyser__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
#line 1226 "declarative_analyser.m"
    mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__2_2));
#line 1226 "declarative_analyser.m"
    return mdb__declarative_analyser__wrapper_arg_2;
#line 1226 "declarative_analyser.m"
  }
#line 1226 "declarative_analyser.m"
}

#line 1198 "declarative_analyser.m"
static MR_String MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0(
#line 1198 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1)
#line 1198 "declarative_analyser.m"
{
#line 1200 "declarative_analyser.m"
  {
#line 1200 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1200 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__HeadVar__2_2;

#line 1200 "declarative_analyser.m"
#line 1200 "declarative_analyser.m"
    switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) {
#line 1200 "declarative_analyser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1200 "declarative_analyser.m"
      case (MR_Integer) 0:
#line 1200 "declarative_analyser.m"
#line 1200 "declarative_analyser.m"
        switch (MR_unmkbody(mdb__declarative_analyser__HeadVar__1_1)) {
#line 1200 "declarative_analyser.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1200 "declarative_analyser.m"
          case (MR_Integer) 0:
#line 1201 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "this is the node where the \140dd\' command was issued.";
#line 1200 "declarative_analyser.m"
            break;
#line 1200 "declarative_analyser.m"
          case (MR_Integer) 1:
#line 1239 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "this is the next node in the top-down search.";
#line 1200 "declarative_analyser.m"
            break;
#line 1200 "declarative_analyser.m"
          case (MR_Integer) 2:
#line 1242 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking of the marked subterm had to be aborted here, because of missing tracing information.";
#line 1200 "declarative_analyser.m"
            break;
#line 1200 "declarative_analyser.m"
          case (MR_Integer) 3:
#line 1245 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking of the marked subterm was stopped here, because the binding node lies in a portion of the tree which has been eliminated.";
#line 1200 "declarative_analyser.m"
            break;
#line 1200 "declarative_analyser.m"
          case (MR_Integer) 4:
#line 1258 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "there are no more non-skipped questions left.";
#line 1200 "declarative_analyser.m"
            break;
#line 1200 "declarative_analyser.m"
          case (MR_Integer) 5:
#line 1261 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "this question is being revisited, because of an unsuccessful previous bug search.";
#line 1200 "declarative_analyser.m"
            break;
#line 1200 "declarative_analyser.m"
        }
#line 1200 "declarative_analyser.m"
        break;
#line 1200 "declarative_analyser.m"
      case (MR_Integer) 1:
#line 1203 "declarative_analyser.m"
        {
#line 1203 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__PrimOpType_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__FileName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 1203 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__LineNo_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 1203 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__MaybePath_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 1203 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__ProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 1203 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__Eliminated_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 5)));
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__PrimOpStr_10;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__LineNoStr_11;
#line 1203 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__SymModule_12;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__Name_13;
#line 1203 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__Arity_14;
#line 1203 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__PredOrFunc_15;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__PredOrFuncStr_16;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__Module_17;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__ArityStr_18;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__EliminatedSent_19;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__PathSent_23;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_32_32;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_33_33;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_35_35;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_36_36;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_38_38;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_39_39;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_41_41;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_42_42;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_44_44;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_45_45;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_47_47;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_48_48;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_50_50;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_51_51;
#line 1203 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_53_53;

#line 1204 "declarative_analyser.m"
          {
#line 1204 "declarative_analyser.m"
            mdb__declarative_analyser__PrimOpStr_10 = mdb__declarative_edt__primitive_op_type_to_string_1_f_0(mdb__declarative_analyser__PrimOpType_3);
          }
#line 1205 "declarative_analyser.m"
          {
#line 1205 "declarative_analyser.m"
            mdb__declarative_analyser__LineNoStr_11 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__LineNo_5);
          }
#line 1206 "declarative_analyser.m"
          {
#line 1206 "declarative_analyser.m"
            mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_analyser__ProcLabel_7, &mdb__declarative_analyser__SymModule_12, &mdb__declarative_analyser__Name_13, &mdb__declarative_analyser__Arity_14, &mdb__declarative_analyser__PredOrFunc_15);
          }
#line 1210 "declarative_analyser.m"
#line 1210 "declarative_analyser.m"
          switch (mdb__declarative_analyser__PredOrFunc_15) {
#line 1210 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1210 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 1209 "declarative_analyser.m"
              mdb__declarative_analyser__PredOrFuncStr_16 = (MR_String) "function";
#line 1210 "declarative_analyser.m"
              break;
#line 1210 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 1212 "declarative_analyser.m"
              mdb__declarative_analyser__PredOrFuncStr_16 = (MR_String) "predicate";
#line 1210 "declarative_analyser.m"
              break;
#line 1210 "declarative_analyser.m"
          }
#line 1214 "declarative_analyser.m"
          {
#line 1214 "declarative_analyser.m"
            mdb__declarative_analyser__Module_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_analyser__SymModule_12);
          }
#line 1215 "declarative_analyser.m"
          {
#line 1215 "declarative_analyser.m"
            mdb__declarative_analyser__ArityStr_18 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__Arity_14);
          }
#line 1220 "declarative_analyser.m"
#line 1220 "declarative_analyser.m"
          switch (mdb__declarative_analyser__Eliminated_8) {
#line 1220 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 1220 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 1222 "declarative_analyser.m"
              mdb__declarative_analyser__EliminatedSent_19 = (MR_String) "";
#line 1220 "declarative_analyser.m"
              break;
#line 1220 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 1219 "declarative_analyser.m"
              mdb__declarative_analyser__EliminatedSent_19 = (MR_String) " That node was, however, previously eliminated from the bug search.";
#line 1220 "declarative_analyser.m"
              break;
#line 1220 "declarative_analyser.m"
          }
#line 1229 "declarative_analyser.m"
          if ((mdb__declarative_analyser__MaybePath_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1231 "declarative_analyser.m"
            mdb__declarative_analyser__PathSent_23 = (MR_String) "";
#line 1229 "declarative_analyser.m"
          else
#line 1225 "declarative_analyser.m"
            {
#line 1225 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__Path_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybePath_6, (MR_Integer) 0)));
#line 1225 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__PathStrings_21;
#line 1225 "declarative_analyser.m"
              MR_String mdb__declarative_analyser__PathStr_22;
#line 1225 "declarative_analyser.m"
              MR_String mdb__declarative_analyser__V_29_29;

#line 1226 "declarative_analyser.m"
              {
#line 1226 "declarative_analyser.m"
                mdb__declarative_analyser__PathStrings_21 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdb__declarative_analyser_scalar_common_2[1], mdb__declarative_analyser__Path_20);
              }
#line 1227 "declarative_analyser.m"
              {
#line 1227 "declarative_analyser.m"
                mdb__declarative_analyser__PathStr_22 = mercury__string__join_list_2_f_0((MR_String) "/", mdb__declarative_analyser__PathStrings_21);
              }
#line 1228 "declarative_analyser.m"
              {
#line 1228 "declarative_analyser.m"
                mdb__declarative_analyser__V_29_29 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PathStr_22, (MR_String) ".");
              }
#line 1228 "declarative_analyser.m"
              {
#line 1228 "declarative_analyser.m"
                mdb__declarative_analyser__PathSent_23 = mercury__string__f_43_43_2_f_0((MR_String) "The path to the subterm in the atom is ", mdb__declarative_analyser__V_29_29);
              }
#line 1225 "declarative_analyser.m"
            }
#line 1237 "declarative_analyser.m"
          {
#line 1237 "declarative_analyser.m"
            mdb__declarative_analyser__V_53_53 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PathSent_23, mdb__declarative_analyser__EliminatedSent_19);
          }
#line 1236 "declarative_analyser.m"
          {
#line 1236 "declarative_analyser.m"
            mdb__declarative_analyser__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "). ", mdb__declarative_analyser__V_53_53);
          }
#line 1236 "declarative_analyser.m"
          {
#line 1236 "declarative_analyser.m"
            mdb__declarative_analyser__V_50_50 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__LineNoStr_11, mdb__declarative_analyser__V_51_51);
          }
#line 1236 "declarative_analyser.m"
          {
#line 1236 "declarative_analyser.m"
            mdb__declarative_analyser__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__V_50_50);
          }
#line 1236 "declarative_analyser.m"
          {
#line 1236 "declarative_analyser.m"
            mdb__declarative_analyser__V_47_47 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__FileName_4, mdb__declarative_analyser__V_48_48);
          }
#line 1236 "declarative_analyser.m"
          {
#line 1236 "declarative_analyser.m"
            mdb__declarative_analyser__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) " (", mdb__declarative_analyser__V_47_47);
          }
#line 1235 "declarative_analyser.m"
          {
#line 1235 "declarative_analyser.m"
            mdb__declarative_analyser__V_44_44 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__ArityStr_18, mdb__declarative_analyser__V_45_45);
          }
#line 1235 "declarative_analyser.m"
          {
#line 1235 "declarative_analyser.m"
            mdb__declarative_analyser__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_analyser__V_44_44);
          }
#line 1235 "declarative_analyser.m"
          {
#line 1235 "declarative_analyser.m"
            mdb__declarative_analyser__V_41_41 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Name_13, mdb__declarative_analyser__V_42_42);
          }
#line 1235 "declarative_analyser.m"
          {
#line 1235 "declarative_analyser.m"
            mdb__declarative_analyser__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_analyser__V_41_41);
          }
#line 1235 "declarative_analyser.m"
          {
#line 1235 "declarative_analyser.m"
            mdb__declarative_analyser__V_38_38 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Module_17, mdb__declarative_analyser__V_39_39);
          }
#line 1235 "declarative_analyser.m"
          {
#line 1235 "declarative_analyser.m"
            mdb__declarative_analyser__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdb__declarative_analyser__V_38_38);
          }
#line 1234 "declarative_analyser.m"
          {
#line 1234 "declarative_analyser.m"
            mdb__declarative_analyser__V_35_35 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PredOrFuncStr_16, mdb__declarative_analyser__V_36_36);
          }
#line 1234 "declarative_analyser.m"
          {
#line 1234 "declarative_analyser.m"
            mdb__declarative_analyser__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) " inside the ", mdb__declarative_analyser__V_35_35);
          }
#line 1234 "declarative_analyser.m"
          {
#line 1234 "declarative_analyser.m"
            mdb__declarative_analyser__V_32_32 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PrimOpStr_10, mdb__declarative_analyser__V_33_33);
          }
#line 1233 "declarative_analyser.m"
          {
#line 1233 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "the marked subterm was bound by the ", mdb__declarative_analyser__V_32_32);
          }
#line 1203 "declarative_analyser.m"
        }
#line 1200 "declarative_analyser.m"
        break;
#line 1200 "declarative_analyser.m"
      case (MR_Integer) 2:
#line 1246 "declarative_analyser.m"
        {
#line 1246 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__Bottom_58 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 1246 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__Top_59 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 1246 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__Split_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 1246 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__PathLengthStr_62;
#line 1246 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__SubPath1LengthStr_63;
#line 1246 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__SubPath2LengthStr_64;
#line 1246 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_65_65;
#line 1246 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_66_66 = (mdb__declarative_analyser__Bottom_58 - mdb__declarative_analyser__Top_59);
#line 1246 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_68_68;
#line 1246 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_69_69;
#line 1246 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_70_70;
#line 1246 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_73_73;
#line 1246 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_74_74;
#line 1246 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_76_76;
#line 1246 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_77_77;
#line 1246 "declarative_analyser.m"
          MR_String mdb__declarative_analyser__V_79_79;

#line 1247 "declarative_analyser.m"
          mdb__declarative_analyser__V_65_65 = (mdb__declarative_analyser__V_66_66 + (MR_Integer) 1);
#line 1247 "declarative_analyser.m"
          {
#line 1247 "declarative_analyser.m"
            mdb__declarative_analyser__PathLengthStr_62 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__V_65_65);
          }
#line 1248 "declarative_analyser.m"
          mdb__declarative_analyser__V_68_68 = (mdb__declarative_analyser__Bottom_58 - mdb__declarative_analyser__Split_60);
#line 1248 "declarative_analyser.m"
          {
#line 1248 "declarative_analyser.m"
            mdb__declarative_analyser__SubPath1LengthStr_63 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__V_68_68);
          }
#line 1249 "declarative_analyser.m"
          mdb__declarative_analyser__V_70_70 = (mdb__declarative_analyser__Split_60 - mdb__declarative_analyser__Top_59);
#line 1249 "declarative_analyser.m"
          mdb__declarative_analyser__V_69_69 = (mdb__declarative_analyser__V_70_70 + (MR_Integer) 1);
#line 1249 "declarative_analyser.m"
          {
#line 1249 "declarative_analyser.m"
            mdb__declarative_analyser__SubPath2LengthStr_64 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__V_69_69);
          }
#line 1252 "declarative_analyser.m"
          {
#line 1252 "declarative_analyser.m"
            mdb__declarative_analyser__V_79_79 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__SubPath2LengthStr_64, (MR_String) ".");
          }
#line 1252 "declarative_analyser.m"
          {
#line 1252 "declarative_analyser.m"
            mdb__declarative_analyser__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) " and ", mdb__declarative_analyser__V_79_79);
          }
#line 1252 "declarative_analyser.m"
          {
#line 1252 "declarative_analyser.m"
            mdb__declarative_analyser__V_76_76 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__SubPath1LengthStr_63, mdb__declarative_analyser__V_77_77);
          }
#line 1251 "declarative_analyser.m"
          {
#line 1251 "declarative_analyser.m"
            mdb__declarative_analyser__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) " into two paths of length ", mdb__declarative_analyser__V_76_76);
          }
#line 1251 "declarative_analyser.m"
          {
#line 1251 "declarative_analyser.m"
            mdb__declarative_analyser__V_73_73 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PathLengthStr_62, mdb__declarative_analyser__V_74_74);
          }
#line 1250 "declarative_analyser.m"
          {
#line 1250 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides a path of length ", mdb__declarative_analyser__V_73_73);
          }
#line 1246 "declarative_analyser.m"
        }
#line 1200 "declarative_analyser.m"
        break;
#line 1200 "declarative_analyser.m"
      case (MR_Integer) 3:
#line 1254 "declarative_analyser.m"
        {
#line 1254 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__Weighting_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 1254 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__OldWeight_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 1254 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__SubtreeWeight_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 1254 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_84_84 = (mdb__declarative_analyser__OldWeight_82 - mdb__declarative_analyser__SubtreeWeight_83);

#line 1255 "declarative_analyser.m"
          {
#line 1255 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = mdb__declarative_analyser__weighting_to_reason_string_3_f_0(mdb__declarative_analyser__Weighting_81, mdb__declarative_analyser__V_84_84, mdb__declarative_analyser__SubtreeWeight_83);
          }
#line 1254 "declarative_analyser.m"
        }
#line 1200 "declarative_analyser.m"
        break;
#line 1200 "declarative_analyser.m"
    }
#line 1200 "declarative_analyser.m"
    return mdb__declarative_analyser__HeadVar__2_2;
#line 1200 "declarative_analyser.m"
  }
#line 1198 "declarative_analyser.m"
}

#line 1119 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0_1(
#line 1119 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 1119 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 1119 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 1119 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_3,
#line 1119 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_4,
#line 1119 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_5)
#line 1119 "declarative_analyser.m"
{
#line 1119 "declarative_analyser.m"
  {
#line 1119 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;
#line 1119 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__conv1_HeadVar__5_68;
#line 1119 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__conv0_HeadVar__7_70;

#line 1119 "declarative_analyser.m"
    {
#line 1119 "declarative_analyser.m"
      mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1119__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_2), &mdb__declarative_analyser__conv1_HeadVar__5_68, ((MR_Integer) mdb__declarative_analyser__wrapper_arg_4), &mdb__declarative_analyser__conv0_HeadVar__7_70);
    }
#line 1119 "declarative_analyser.m"
    *mdb__declarative_analyser__wrapper_arg_3 = ((MR_Box) (mdb__declarative_analyser__conv1_HeadVar__5_68));
#line 1119 "declarative_analyser.m"
    *mdb__declarative_analyser__wrapper_arg_5 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__7_70));
#line 1119 "declarative_analyser.m"
  }
#line 1119 "declarative_analyser.m"
}

#line 1092 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0(
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1092 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_1,
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_2,
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_3,
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__4_4,
#line 1092 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_5,
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_6,
#line 1092 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1092 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8,
#line 1092 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9)
#line 1092 "declarative_analyser.m"
{
#line 1098 "declarative_analyser.m"
  {
#line 1098 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 1098 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1099 "declarative_analyser.m"
      {
#line 1099 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__LastUnknown_17;
#line 1100 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_59_59;
#line 1100 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__PolyConst2_58;

#line 1100 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
#line 1100 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1100 "declarative_analyser.m"
          {
#line 1100 "declarative_analyser.m"
            mdb__declarative_analyser__LastUnknown_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
#line 8105 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__PolyConst2_58 = (MR_Integer) 2;
#line 1101 "declarative_analyser.m"
            {
#line 1101 "declarative_analyser.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__PolyConst2_58, &mdb__declarative_analyser__TypeInfo_59_59);
            }
#line 1194 "declarative_analyser.m"
            {
#line 1194 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_59_59, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_17);
            }
#line 1100 "declarative_analyser.m"
          }
#line 1099 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1103 "declarative_analyser.m"
          {
#line 1103 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_61_61;
#line 1103 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_62_62;
#line 1103 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_20_20;
#line 1103 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_21_21;
#line 1103 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_22_22;

#line 1105 "declarative_analyser.m"
            {
#line 1105 "declarative_analyser.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_61_61);
            }
#line 1105 "declarative_analyser.m"
            {
#line 1105 "declarative_analyser.m"
              mdb__declarative_analyser__V_21_21 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_61_61, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__TopId_5);
            }
#line 1106 "declarative_analyser.m"
            {
#line 1106 "declarative_analyser.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_62_62);
            }
#line 1106 "declarative_analyser.m"
            {
#line 1106 "declarative_analyser.m"
              mdb__declarative_analyser__V_22_22 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_62_62, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_17);
            }
#line 1104 "declarative_analyser.m"
            {
#line 1104 "declarative_analyser.m"
              mdb__declarative_analyser__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1104 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1104 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 1) = ((MR_Box) (mdb__declarative_analyser__V_21_21));
#line 1104 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 2) = ((MR_Box) (mdb__declarative_analyser__V_22_22));
#line 1104 "declarative_analyser.m"
            }
#line 1103 "declarative_analyser.m"
            {
#line 1103 "declarative_analyser.m"
              MR_Word base;
#line 1103 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1103 "declarative_analyser.m"
              *mdb__declarative_analyser__Response_9 = base;
#line 1103 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_17));
#line 1103 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_20_20));
#line 1103 "declarative_analyser.m"
            }
#line 1103 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
#line 1103 "declarative_analyser.m"
          }
#line 1099 "declarative_analyser.m"
        else
#line 1110 "declarative_analyser.m"
          {
#line 1110 "declarative_analyser.m"
            mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
          }
#line 1099 "declarative_analyser.m"
      }
#line 1098 "declarative_analyser.m"
    else
#line 1113 "declarative_analyser.m"
      {
#line 1113 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_64_64;
#line 1113 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_65_65;
#line 1113 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeCtorInfo_73_73;
#line 1113 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__SuspectId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__4_4, (MR_Integer) 0)));
#line 1113 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__SuspectIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__4_4, (MR_Integer) 1)));
#line 1113 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__TopWeight_33;
#line 1113 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Target_34;
#line 1113 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Weight_35;
#line 1113 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__MaxWeight_36;
#line 1113 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Heaviest_37;
#line 1113 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_44_44;
#line 1119 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__conv3_MaxWeight_36;
#line 1119 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__conv2_Heaviest_37;

#line 1114 "declarative_analyser.m"
        {
#line 1114 "declarative_analyser.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_64_64);
        }
#line 1114 "declarative_analyser.m"
        {
#line 1114 "declarative_analyser.m"
          mdb__declarative_analyser__TopWeight_33 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_64_64, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__TopId_5);
        }
#line 1115 "declarative_analyser.m"
        {
#line 1115 "declarative_analyser.m"
          mdb__declarative_analyser__Target_34 = mercury__int__f_47_47_2_f_0(mdb__declarative_analyser__TopWeight_33, (MR_Integer) 2);
        }
#line 1118 "declarative_analyser.m"
        {
#line 1118 "declarative_analyser.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_65_65);
        }
#line 1118 "declarative_analyser.m"
        {
#line 1118 "declarative_analyser.m"
          mdb__declarative_analyser__Weight_35 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_65_65, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__SuspectId_27);
        }
#line 1119 "declarative_analyser.m"
        {
#line 1119 "declarative_analyser.m"
          mdb__declarative_analyser__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1119 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_7[0]));
#line 1119 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 1) = ((MR_Box) (mdb__declarative_analyser__find_middle_weight_9_p_0_1));
#line 1119 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1119 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57));
#line 1119 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7));
#line 1119 "declarative_analyser.m"
        }
#line 8265 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__TypeCtorInfo_73_73 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1119 "declarative_analyser.m"
        {
#line 1119 "declarative_analyser.m"
          mercury__list__foldl2_6_p_0(mdb__declarative_analyser__TypeCtorInfo_73_73, mdb__declarative_analyser__TypeCtorInfo_73_73, mdb__declarative_analyser__TypeCtorInfo_73_73, mdb__declarative_analyser__V_44_44, mdb__declarative_analyser__SuspectIds_28, ((MR_Box) (mdb__declarative_analyser__Weight_35)), &mdb__declarative_analyser__conv3_MaxWeight_36, ((MR_Box) (mdb__declarative_analyser__SuspectId_27)), &mdb__declarative_analyser__conv2_Heaviest_37);
        }
#line 1119 "declarative_analyser.m"
        mdb__declarative_analyser__MaxWeight_36 = ((MR_Integer) mdb__declarative_analyser__conv3_MaxWeight_36);
#line 1119 "declarative_analyser.m"
        mdb__declarative_analyser__Heaviest_37 = ((MR_Integer) mdb__declarative_analyser__conv2_Heaviest_37);
#line 1121 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__MaxWeight_36 > mdb__declarative_analyser__Target_34);
#line 1121 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1126 "declarative_analyser.m"
          {
#line 1126 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__NewMaybeLastUnknown_38;
#line 1122 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_74_74;

#line 1122 "declarative_analyser.m"
            {
#line 1122 "declarative_analyser.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_74_74);
            }
#line 1122 "declarative_analyser.m"
            {
#line 1122 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_74_74, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__Heaviest_37);
            }
#line 1122 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 1123 "declarative_analyser.m"
              {
#line 1123 "declarative_analyser.m"
                mdb__declarative_analyser__NewMaybeLastUnknown_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1123 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_analyser__NewMaybeLastUnknown_38, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
#line 1123 "declarative_analyser.m"
              }
#line 1122 "declarative_analyser.m"
            else
#line 1125 "declarative_analyser.m"
              mdb__declarative_analyser__NewMaybeLastUnknown_38 = mdb__declarative_analyser__MaybeLastUnknown_6;
#line 1127 "declarative_analyser.m"
            {
#line 1127 "declarative_analyser.m"
              mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__Weighting_3, mdb__declarative_analyser__Heaviest_37, mdb__declarative_analyser__TopId_5, mdb__declarative_analyser__NewMaybeLastUnknown_38, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
            }
#line 1126 "declarative_analyser.m"
          }
#line 1121 "declarative_analyser.m"
        else
#line 1130 "declarative_analyser.m"
          {
#line 1130 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_75_75;

#line 1130 "declarative_analyser.m"
            {
#line 1130 "declarative_analyser.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_75_75);
            }
#line 1130 "declarative_analyser.m"
            {
#line 1130 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_75_75, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__Heaviest_37);
            }
#line 1130 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 1131 "declarative_analyser.m"
              {
#line 1131 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__LastUnknown_39;
#line 1132 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_76_76;

#line 1132 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
#line 1132 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1132 "declarative_analyser.m"
                  {
#line 1132 "declarative_analyser.m"
                    mdb__declarative_analyser__LastUnknown_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
#line 1133 "declarative_analyser.m"
                    {
#line 1133 "declarative_analyser.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_76_76);
                    }
#line 1194 "declarative_analyser.m"
                    {
#line 1194 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_76_76, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_39);
                    }
#line 1132 "declarative_analyser.m"
                  }
#line 1131 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1135 "declarative_analyser.m"
                  {
#line 1135 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_77_77;
#line 1135 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__LastUnknownWeight_40;
#line 1139 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_46_46;
#line 1139 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_47_47;

#line 1135 "declarative_analyser.m"
                    {
#line 1135 "declarative_analyser.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_77_77);
                    }
#line 1135 "declarative_analyser.m"
                    {
#line 1135 "declarative_analyser.m"
                      mdb__declarative_analyser__LastUnknownWeight_40 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_77_77, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_39);
                    }
#line 1139 "declarative_analyser.m"
                    mdb__declarative_analyser__V_46_46 = (mdb__declarative_analyser__LastUnknownWeight_40 - mdb__declarative_analyser__Target_34);
#line 1139 "declarative_analyser.m"
                    mdb__declarative_analyser__V_47_47 = (mdb__declarative_analyser__Target_34 - mdb__declarative_analyser__MaxWeight_36);
#line 1139 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_46_46 < mdb__declarative_analyser__V_47_47);
#line 1139 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 1140 "declarative_analyser.m"
                      {
#line 1140 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_48_48;

#line 1141 "declarative_analyser.m"
                        {
#line 1141 "declarative_analyser.m"
                          mdb__declarative_analyser__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1141 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1141 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1141 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 2) = ((MR_Box) (mdb__declarative_analyser__LastUnknownWeight_40));
#line 1141 "declarative_analyser.m"
                        }
#line 1140 "declarative_analyser.m"
                        {
#line 1140 "declarative_analyser.m"
                          MR_Word base;
#line 1140 "declarative_analyser.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1140 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = base;
#line 1140 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_39));
#line 1140 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_48_48));
#line 1140 "declarative_analyser.m"
                        }
#line 1140 "declarative_analyser.m"
                      }
#line 1139 "declarative_analyser.m"
                    else
#line 1144 "declarative_analyser.m"
                      {
#line 1144 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_49_49;

#line 1145 "declarative_analyser.m"
                        {
#line 1145 "declarative_analyser.m"
                          mdb__declarative_analyser__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1145 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1145 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1145 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 2) = ((MR_Box) (mdb__declarative_analyser__MaxWeight_36));
#line 1145 "declarative_analyser.m"
                        }
#line 1144 "declarative_analyser.m"
                        {
#line 1144 "declarative_analyser.m"
                          MR_Word base;
#line 1144 "declarative_analyser.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = base;
#line 1144 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
#line 1144 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 1144 "declarative_analyser.m"
                        }
#line 1144 "declarative_analyser.m"
                      }
#line 1135 "declarative_analyser.m"
                  }
#line 1131 "declarative_analyser.m"
                else
#line 1149 "declarative_analyser.m"
                  {
#line 1149 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_50_50;

#line 1150 "declarative_analyser.m"
                    {
#line 1150 "declarative_analyser.m"
                      mdb__declarative_analyser__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1150 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1150 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1150 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 2) = ((MR_Box) (mdb__declarative_analyser__MaxWeight_36));
#line 1150 "declarative_analyser.m"
                    }
#line 1149 "declarative_analyser.m"
                    {
#line 1149 "declarative_analyser.m"
                      MR_Word base;
#line 1149 "declarative_analyser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1149 "declarative_analyser.m"
                      *mdb__declarative_analyser__Response_9 = base;
#line 1149 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
#line 1149 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 1149 "declarative_analyser.m"
                    }
#line 1149 "declarative_analyser.m"
                  }
#line 1131 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
#line 1131 "declarative_analyser.m"
              }
#line 1130 "declarative_analyser.m"
            else
#line 1154 "declarative_analyser.m"
              {
#line 1154 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__LastUnknown_55;
#line 1155 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_78_78;

#line 1155 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
#line 1155 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1155 "declarative_analyser.m"
                  {
#line 1155 "declarative_analyser.m"
                    mdb__declarative_analyser__LastUnknown_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
#line 1156 "declarative_analyser.m"
                    {
#line 1156 "declarative_analyser.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_78_78);
                    }
#line 1194 "declarative_analyser.m"
                    {
#line 1194 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_55);
                    }
#line 1155 "declarative_analyser.m"
                  }
#line 1154 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1158 "declarative_analyser.m"
                  {
#line 1158 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_79_79;
#line 1158 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_51_51;
#line 1158 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__LastUnknownWeight_54;

#line 1158 "declarative_analyser.m"
                    {
#line 1158 "declarative_analyser.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_79_79);
                    }
#line 1158 "declarative_analyser.m"
                    {
#line 1158 "declarative_analyser.m"
                      mdb__declarative_analyser__LastUnknownWeight_54 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_79_79, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_55);
                    }
#line 1160 "declarative_analyser.m"
                    {
#line 1160 "declarative_analyser.m"
                      mdb__declarative_analyser__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1160 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1160 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1160 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 2) = ((MR_Box) (mdb__declarative_analyser__LastUnknownWeight_54));
#line 1160 "declarative_analyser.m"
                    }
#line 1159 "declarative_analyser.m"
                    {
#line 1159 "declarative_analyser.m"
                      MR_Word base;
#line 1159 "declarative_analyser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1159 "declarative_analyser.m"
                      *mdb__declarative_analyser__Response_9 = base;
#line 1159 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_55));
#line 1159 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 1159 "declarative_analyser.m"
                    }
#line 1158 "declarative_analyser.m"
                    *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
#line 1158 "declarative_analyser.m"
                  }
#line 1154 "declarative_analyser.m"
                else
#line 1164 "declarative_analyser.m"
                  {
#line 1164 "declarative_analyser.m"
                    {
#line 1164 "declarative_analyser.m"
                      mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__Weighting_3, mdb__declarative_analyser__Heaviest_37, mdb__declarative_analyser__TopId_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
                    }
#line 1164 "declarative_analyser.m"
                  }
#line 1154 "declarative_analyser.m"
              }
#line 1130 "declarative_analyser.m"
          }
#line 1113 "declarative_analyser.m"
      }
#line 1098 "declarative_analyser.m"
  }
#line 1092 "declarative_analyser.m"
}

#line 1068 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(
#line 1068 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23,
#line 1068 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_10,
#line 1068 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_11,
#line 1068 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_12,
#line 1068 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_13,
#line 1068 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_14,
#line 1068 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_15,
#line 1068 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19,
#line 1068 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20,
#line 1068 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_17)
#line 1068 "declarative_analyser.m"
{
#line 1076 "declarative_analyser.m"
  {
#line 1076 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1076 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__Children_18;
#line 1076 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21;

#line 1076 "declarative_analyser.m"
    {
#line 1076 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23, mdb__declarative_analyser__Store_10, mdb__declarative_analyser__Oracle_11, mdb__declarative_analyser__SuspectId_13, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21, &mdb__declarative_analyser__Children_18);
    }
#line 1076 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 1077 "declarative_analyser.m"
      {
#line 1077 "declarative_analyser.m"
        mdb__declarative_analyser__find_middle_weight_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23, mdb__declarative_analyser__Store_10, mdb__declarative_analyser__Oracle_11, mdb__declarative_analyser__Weighting_12, mdb__declarative_analyser__Children_18, mdb__declarative_analyser__TopId_14, mdb__declarative_analyser__MaybeLastUnknown_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20, mdb__declarative_analyser__Response_17);
      }
#line 1076 "declarative_analyser.m"
    else
#line 1080 "declarative_analyser.m"
      {
#line 1080 "declarative_analyser.m"
        {
#line 1080 "declarative_analyser.m"
          MR_Word base;
#line 1080 "declarative_analyser.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1080 "declarative_analyser.m"
          *mdb__declarative_analyser__Response_17 = base;
#line 1080 "declarative_analyser.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_13));
#line 1080 "declarative_analyser.m"
        }
#line 1080 "declarative_analyser.m"
        *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19;
#line 1080 "declarative_analyser.m"
      }
#line 1076 "declarative_analyser.m"
  }
#line 1068 "declarative_analyser.m"
}

#line 1022 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(
#line 1022 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_21,
#line 1022 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 1022 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_9,
#line 1022 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterTop_10,
#line 1022 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterBottom_11,
#line 1022 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerTop_12,
#line 1022 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerBottom_13,
#line 1022 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__Unknown_14)
#line 1022 "declarative_analyser.m"
{
#line 1027 "declarative_analyser.m"
  while (MR_TRUE)
#line 1027 "declarative_analyser.m"
    {
#line 1027 "declarative_analyser.m"
      /* tailcall optimized into a loop */
#line 1027 "declarative_analyser.m"
      {
#line 1027 "declarative_analyser.m"
        MR_bool mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerTop_12 <= mdb__declarative_analyser__InnerBottom_13);
#line 1031 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeCtorInfo_22_22;
#line 1031 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_15_15;
#line 1032 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__conv0_V_15_15;

#line 1027 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1027 "declarative_analyser.m"
          {
#line 1029 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__OuterTop_10 <= mdb__declarative_analyser__InnerTop_12);
#line 1029 "declarative_analyser.m"
            if (!(mdb__declarative_analyser__succeeded))
#line 1029 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerBottom_13 <= mdb__declarative_analyser__OuterBottom_11);
#line 1027 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 1027 "declarative_analyser.m"
              {
#line 1031 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__OuterTop_10 <= mdb__declarative_analyser__InnerTop_12);
#line 1031 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1031 "declarative_analyser.m"
                  {
#line 8735 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeCtorInfo_22_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1032 "declarative_analyser.m"
                    {
#line 1032 "declarative_analyser.m"
                      mdb__declarative_analyser__conv0_V_15_15 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_22_22, mdb__declarative_analyser__InnerTop_12, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_9);
                    }
#line 1032 "declarative_analyser.m"
                    mdb__declarative_analyser__V_15_15 = ((MR_Integer) mdb__declarative_analyser__conv0_V_15_15);
#line 1032 "declarative_analyser.m"
                    {
#line 1032 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_21, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__V_15_15);
                    }
#line 1031 "declarative_analyser.m"
                  }
#line 1030 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1034 "declarative_analyser.m"
                  {
#line 1034 "declarative_analyser.m"
                    *mdb__declarative_analyser__Unknown_14 = mdb__declarative_analyser__InnerTop_12;
#line 1034 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = MR_TRUE;
#line 1034 "declarative_analyser.m"
                  }
#line 1030 "declarative_analyser.m"
                else
#line 1035 "declarative_analyser.m"
                  {
#line 1036 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeCtorInfo_23_23;
#line 1036 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_16_16;
#line 1037 "declarative_analyser.m"
                    MR_Box mdb__declarative_analyser__conv1_V_16_16;

#line 1036 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerBottom_13 <= mdb__declarative_analyser__OuterBottom_11);
#line 1036 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 1036 "declarative_analyser.m"
                      {
#line 8778 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeCtorInfo_23_23 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1037 "declarative_analyser.m"
                        {
#line 1037 "declarative_analyser.m"
                          mdb__declarative_analyser__conv1_V_16_16 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_23_23, mdb__declarative_analyser__InnerBottom_13, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_9);
                        }
#line 1037 "declarative_analyser.m"
                        mdb__declarative_analyser__V_16_16 = ((MR_Integer) mdb__declarative_analyser__conv1_V_16_16);
#line 1037 "declarative_analyser.m"
                        {
#line 1037 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_21, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__V_16_16);
                        }
#line 1036 "declarative_analyser.m"
                      }
#line 1035 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 1039 "declarative_analyser.m"
                      {
#line 1039 "declarative_analyser.m"
                        *mdb__declarative_analyser__Unknown_14 = mdb__declarative_analyser__InnerBottom_13;
#line 1039 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = MR_TRUE;
#line 1039 "declarative_analyser.m"
                      }
#line 1035 "declarative_analyser.m"
                    else
#line 1041 "declarative_analyser.m"
                      {
#line 1041 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_17_17 = (mdb__declarative_analyser__InnerTop_12 - (MR_Integer) 1);
#line 1041 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_18_18 = (mdb__declarative_analyser__InnerBottom_13 + (MR_Integer) 1);

#line 1041 "declarative_analyser.m"
                        /* direct tailcall eliminated */
#line 1041 "declarative_analyser.m"
                        {
#line 1041 "declarative_analyser.m"
                          MR_Integer mdb__declarative_analyser__InnerTop__tmp_copy_12 = mdb__declarative_analyser__V_17_17;
#line 1041 "declarative_analyser.m"
                          MR_Integer mdb__declarative_analyser__InnerBottom__tmp_copy_13 = mdb__declarative_analyser__V_18_18;

#line 1041 "declarative_analyser.m"
                          mdb__declarative_analyser__InnerBottom_13 = mdb__declarative_analyser__InnerBottom__tmp_copy_13;
#line 1041 "declarative_analyser.m"
                          mdb__declarative_analyser__InnerTop_12 = mdb__declarative_analyser__InnerTop__tmp_copy_12;
#line 1041 "declarative_analyser.m"
                        }
#line 1041 "declarative_analyser.m"
                        continue;
#line 1041 "declarative_analyser.m"
                      }
#line 1035 "declarative_analyser.m"
                  }
#line 1027 "declarative_analyser.m"
              }
#line 1027 "declarative_analyser.m"
          }
#line 1027 "declarative_analyser.m"
        return mdb__declarative_analyser__succeeded;
#line 1027 "declarative_analyser.m"
      }
#line 1027 "declarative_analyser.m"
      break;
#line 1027 "declarative_analyser.m"
    }
#line 1022 "declarative_analyser.m"
}

#line 944 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__binary_search_11_p_0(
#line 944 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37,
#line 944 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_12,
#line 944 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_13,
#line 944 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_14,
#line 944 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Top_15,
#line 944 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Bottom_16,
#line 944 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__LastTested_17,
#line 944 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 944 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 944 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_19,
#line 944 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_20,
#line 944 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_21)
#line 944 "declarative_analyser.m"
{
#line 950 "declarative_analyser.m"
  {
#line 950 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 950 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeCtorInfo_38_38 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 950 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__SuspectId_22;
#line 950 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__NewTop_23;
#line 950 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__NewBottom_24;
#line 951 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__conv0_SuspectId_22;
#line 957 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_40_40;

#line 951 "declarative_analyser.m"
    {
#line 951 "declarative_analyser.m"
      mdb__declarative_analyser__conv0_SuspectId_22 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_38_38, mdb__declarative_analyser__LastTested_17, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_14);
    }
#line 951 "declarative_analyser.m"
    mdb__declarative_analyser__SuspectId_22 = ((MR_Integer) mdb__declarative_analyser__conv0_SuspectId_22);
#line 957 "declarative_analyser.m"
    {
#line 957 "declarative_analyser.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_40_40);
    }
#line 957 "declarative_analyser.m"
    {
#line 957 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_in_excluded_complement_2_p_0(mdb__declarative_analyser__TypeInfo_40_40, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__SuspectId_22);
    }
#line 955 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 959 "declarative_analyser.m"
      {
#line 959 "declarative_analyser.m"
        mdb__declarative_analyser__NewTop_23 = (mdb__declarative_analyser__LastTested_17 + (MR_Integer) 1);
#line 960 "declarative_analyser.m"
        mdb__declarative_analyser__NewBottom_24 = mdb__declarative_analyser__Bottom_16;
#line 959 "declarative_analyser.m"
      }
#line 955 "declarative_analyser.m"
    else
#line 961 "declarative_analyser.m"
      {
#line 963 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_42_42;

#line 963 "declarative_analyser.m"
        {
#line 963 "declarative_analyser.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_42_42);
        }
#line 963 "declarative_analyser.m"
        {
#line 963 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_in_excluded_subtree_2_p_0(mdb__declarative_analyser__TypeInfo_42_42, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__SuspectId_22);
        }
#line 961 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 965 "declarative_analyser.m"
          {
#line 965 "declarative_analyser.m"
            mdb__declarative_analyser__NewTop_23 = mdb__declarative_analyser__Top_15;
#line 966 "declarative_analyser.m"
            mdb__declarative_analyser__NewBottom_24 = (mdb__declarative_analyser__LastTested_17 - (MR_Integer) 1);
#line 965 "declarative_analyser.m"
          }
#line 961 "declarative_analyser.m"
        else
#line 969 "declarative_analyser.m"
          {
#line 969 "declarative_analyser.m"
            mdb__declarative_analyser__NewTop_23 = mdb__declarative_analyser__Top_15;
#line 970 "declarative_analyser.m"
            mdb__declarative_analyser__NewBottom_24 = mdb__declarative_analyser__Bottom_16;
#line 969 "declarative_analyser.m"
          }
#line 961 "declarative_analyser.m"
      }
#line 973 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__NewTop_23 > mdb__declarative_analyser__NewBottom_24);
#line 972 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 976 "declarative_analyser.m"
      {
#line 976 "declarative_analyser.m"
        mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, mdb__declarative_analyser__Store_12, mdb__declarative_analyser__Oracle_13, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__NewMode_20, mdb__declarative_analyser__Response_21);
      }
#line 972 "declarative_analyser.m"
    else
#line 979 "declarative_analyser.m"
      {
#line 979 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__UnknownClosestToMiddle_25;
#line 980 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_44_44;
#line 980 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Middle_50;
#line 980 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_51_51;
#line 980 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_52_52;

#line 980 "declarative_analyser.m"
        {
#line 980 "declarative_analyser.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_44_44);
        }
#line 1008 "declarative_analyser.m"
        mdb__declarative_analyser__V_52_52 = (mdb__declarative_analyser__NewBottom_24 - mdb__declarative_analyser__NewTop_23);
#line 1008 "declarative_analyser.m"
        {
#line 1008 "declarative_analyser.m"
          mdb__declarative_analyser__V_51_51 = mercury__int__f_47_47_2_f_0(mdb__declarative_analyser__V_52_52, (MR_Integer) 2);
        }
#line 1008 "declarative_analyser.m"
        mdb__declarative_analyser__Middle_50 = (mdb__declarative_analyser__NewTop_23 + mdb__declarative_analyser__V_51_51);
#line 1009 "declarative_analyser.m"
        {
#line 1009 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(mdb__declarative_analyser__TypeInfo_44_44, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__PathArray_14, mdb__declarative_analyser__NewTop_23, mdb__declarative_analyser__NewBottom_24, mdb__declarative_analyser__Middle_50, mdb__declarative_analyser__Middle_50, &mdb__declarative_analyser__UnknownClosestToMiddle_25);
        }
#line 979 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 984 "declarative_analyser.m"
          {
#line 984 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_32_32;
#line 984 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_33_33;
#line 984 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_34_34;
#line 985 "declarative_analyser.m"
            MR_Box mdb__declarative_analyser__conv1_V_33_33;

#line 983 "declarative_analyser.m"
            {
#line 983 "declarative_analyser.m"
              mdb__declarative_analyser__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 983 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 0) = ((MR_Box) (mdb__declarative_analyser__NewTop_23));
#line 983 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__NewBottom_24));
#line 983 "declarative_analyser.m"
            }
#line 983 "declarative_analyser.m"
            {
#line 983 "declarative_analyser.m"
              MR_Word base;
#line 983 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 983 "declarative_analyser.m"
              *mdb__declarative_analyser__NewMode_20 = base;
#line 983 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__PathArray_14));
#line 983 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_32_32));
#line 983 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_analyser__UnknownClosestToMiddle_25));
#line 983 "declarative_analyser.m"
            }
#line 985 "declarative_analyser.m"
            {
#line 985 "declarative_analyser.m"
              mdb__declarative_analyser__conv1_V_33_33 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_38_38, mdb__declarative_analyser__UnknownClosestToMiddle_25, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_14);
            }
#line 985 "declarative_analyser.m"
            mdb__declarative_analyser__V_33_33 = ((MR_Integer) mdb__declarative_analyser__conv1_V_33_33);
#line 987 "declarative_analyser.m"
            {
#line 987 "declarative_analyser.m"
              mdb__declarative_analyser__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 987 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), mdb__declarative_analyser__V_34_34, 0) = ((MR_Box) (mdb__declarative_analyser__NewBottom_24));
#line 987 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), mdb__declarative_analyser__V_34_34, 1) = ((MR_Box) (mdb__declarative_analyser__NewTop_23));
#line 987 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), mdb__declarative_analyser__V_34_34, 2) = ((MR_Box) (mdb__declarative_analyser__UnknownClosestToMiddle_25));
#line 987 "declarative_analyser.m"
            }
#line 985 "declarative_analyser.m"
            {
#line 985 "declarative_analyser.m"
              MR_Word base;
#line 985 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 985 "declarative_analyser.m"
              *mdb__declarative_analyser__Response_21 = base;
#line 985 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_33_33));
#line 985 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_34_34));
#line 985 "declarative_analyser.m"
            }
#line 984 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26;
#line 984 "declarative_analyser.m"
          }
#line 979 "declarative_analyser.m"
        else
#line 991 "declarative_analyser.m"
          {
#line 991 "declarative_analyser.m"
            mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, mdb__declarative_analyser__Store_12, mdb__declarative_analyser__Oracle_13, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__NewMode_20, mdb__declarative_analyser__Response_21);
          }
#line 979 "declarative_analyser.m"
      }
#line 950 "declarative_analyser.m"
  }
#line 944 "declarative_analyser.m"
}

#line 785 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70,
#line 785 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_15,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_16,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44,
#line 785 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_18,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46,
#line 785 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_20,
#line 785 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_21,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_22,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_23,
#line 785 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_24,
#line 785 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_25,
#line 785 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_26)
#line 785 "declarative_analyser.m"
{
#line 794 "declarative_analyser.m"
  while (MR_TRUE)
#line 794 "declarative_analyser.m"
    {
#line 794 "declarative_analyser.m"
      /* tailcall optimized into a loop */
#line 794 "declarative_analyser.m"
      {
#line 794 "declarative_analyser.m"
        MR_bool mdb__declarative_analyser__succeeded;
#line 794 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__FindOriginResponse_27;
#line 794 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 794 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;

#line 795 "declarative_analyser.m"
        {
#line 795 "declarative_analyser.m"
          mdb__declarative_edt__find_subterm_origin_11_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__SuspectId_21, mdb__declarative_analyser__ArgPos_22, mdb__declarative_analyser__TermPath_23, mdb__declarative_analyser__HowTrack_18, mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46, &mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, &mdb__declarative_analyser__FindOriginResponse_27);
        }
#line 845 "declarative_analyser.m"
#line 845 "declarative_analyser.m"
        switch (MR_tag((MR_Word) mdb__declarative_analyser__FindOriginResponse_27)) {
#line 845 "declarative_analyser.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 845 "declarative_analyser.m"
          case (MR_Integer) 0:
#line 845 "declarative_analyser.m"
#line 845 "declarative_analyser.m"
            switch (MR_unmkbody(mdb__declarative_analyser__FindOriginResponse_27)) {
#line 845 "declarative_analyser.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 845 "declarative_analyser.m"
              case (MR_Integer) 0:
#line 846 "declarative_analyser.m"
                {
#line 847 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__Unknown_64;
#line 848 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_80_80;
#line 848 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__PolyConst2_79;

#line 848 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
#line 848 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 848 "declarative_analyser.m"
                    {
#line 848 "declarative_analyser.m"
                      mdb__declarative_analyser__Unknown_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
#line 9182 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__PolyConst2_79 = (MR_Integer) 2;
#line 849 "declarative_analyser.m"
                      {
#line 849 "declarative_analyser.m"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_79, &mdb__declarative_analyser__TypeInfo_80_80);
                      }
#line 1194 "declarative_analyser.m"
                      {
#line 1194 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_64);
                      }
#line 848 "declarative_analyser.m"
                    }
#line 847 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 852 "declarative_analyser.m"
                    {
#line 851 "declarative_analyser.m"
                      {
#line 851 "declarative_analyser.m"
                        MR_Word base;
#line 851 "declarative_analyser.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 851 "declarative_analyser.m"
                        *mdb__declarative_analyser__SearchResponse_26 = base;
#line 851 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_64));
#line 851 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 851 "declarative_analyser.m"
                      }
#line 853 "declarative_analyser.m"
                      *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 852 "declarative_analyser.m"
                      *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 852 "declarative_analyser.m"
                    }
#line 847 "declarative_analyser.m"
                  else
#line 855 "declarative_analyser.m"
                    {
#line 855 "declarative_analyser.m"
                      mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
                    }
#line 846 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 846 "declarative_analyser.m"
                }
#line 845 "declarative_analyser.m"
                break;
#line 845 "declarative_analyser.m"
              case (MR_Integer) 1:
#line 860 "declarative_analyser.m"
                {
#line 861 "declarative_analyser.m"
                  {
#line 861 "declarative_analyser.m"
                    MR_Word base;
#line 861 "declarative_analyser.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 861 "declarative_analyser.m"
                    *mdb__declarative_analyser__SearchResponse_26 = base;
#line 861 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
#line 861 "declarative_analyser.m"
                  }
#line 865 "declarative_analyser.m"
                  {
#line 865 "declarative_analyser.m"
                    MR_Word base;
#line 865 "declarative_analyser.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 865 "declarative_analyser.m"
                    *mdb__declarative_analyser__NewMode_25 = base;
#line 865 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
#line 865 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_22));
#line 865 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
#line 865 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_20));
#line 865 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_18));
#line 865 "declarative_analyser.m"
                  }
#line 860 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 860 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 860 "declarative_analyser.m"
                }
#line 845 "declarative_analyser.m"
                break;
#line 845 "declarative_analyser.m"
              case (MR_Integer) 2:
#line 868 "declarative_analyser.m"
                {
#line 869 "declarative_analyser.m"
                  *mdb__declarative_analyser__SearchResponse_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 870 "declarative_analyser.m"
                  {
#line 870 "declarative_analyser.m"
                    MR_Word base;
#line 870 "declarative_analyser.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 870 "declarative_analyser.m"
                    *mdb__declarative_analyser__NewMode_25 = base;
#line 870 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
#line 870 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_22));
#line 870 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
#line 870 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_20));
#line 870 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_18));
#line 870 "declarative_analyser.m"
                  }
#line 868 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 868 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 868 "declarative_analyser.m"
                }
#line 845 "declarative_analyser.m"
                break;
#line 845 "declarative_analyser.m"
            }
#line 845 "declarative_analyser.m"
            break;
#line 845 "declarative_analyser.m"
          case (MR_Integer) 1:
#line 874 "declarative_analyser.m"
            {
#line 874 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__OriginId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 0)));
#line 874 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__OriginArgPos_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 1)));
#line 874 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__OriginTermPath_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 2)));
#line 874 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__SubtermMode_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)));
#line 874 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__NewLastUnknown_43;
#line 876 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_82_82;
#line 889 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_84_84;

#line 876 "declarative_analyser.m"
              {
#line 876 "declarative_analyser.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_82_82);
              }
#line 876 "declarative_analyser.m"
              {
#line 876 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_82_82, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__OriginId_39);
              }
#line 875 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 878 "declarative_analyser.m"
                {
#line 878 "declarative_analyser.m"
                  mdb__declarative_analyser__NewLastUnknown_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 878 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_analyser__NewLastUnknown_43, 0) = ((MR_Box) (mdb__declarative_analyser__OriginId_39));
#line 878 "declarative_analyser.m"
                }
#line 875 "declarative_analyser.m"
              else
#line 880 "declarative_analyser.m"
                mdb__declarative_analyser__NewLastUnknown_43 = mdb__declarative_analyser__LastUnknown_20;
#line 889 "declarative_analyser.m"
              {
#line 889 "declarative_analyser.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_84_84);
              }
#line 889 "declarative_analyser.m"
              {
#line 889 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__give_up_subterm_tracking_3_p_0(mdb__declarative_analyser__TypeInfo_84_84, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__OriginId_39, mdb__declarative_analyser__SubtermMode_42);
              }
#line 882 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 891 "declarative_analyser.m"
                {
#line 891 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__Unknown_66;
#line 892 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_86_86;
#line 892 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__PolyConst2_85;

#line 892 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
#line 892 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 892 "declarative_analyser.m"
                    {
#line 892 "declarative_analyser.m"
                      mdb__declarative_analyser__Unknown_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
#line 9387 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__PolyConst2_85 = (MR_Integer) 2;
#line 893 "declarative_analyser.m"
                      {
#line 893 "declarative_analyser.m"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_85, &mdb__declarative_analyser__TypeInfo_86_86);
                      }
#line 1194 "declarative_analyser.m"
                      {
#line 1194 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_86_86, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_66);
                      }
#line 892 "declarative_analyser.m"
                    }
#line 891 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 896 "declarative_analyser.m"
                    {
#line 895 "declarative_analyser.m"
                      {
#line 895 "declarative_analyser.m"
                        MR_Word base;
#line 895 "declarative_analyser.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 895 "declarative_analyser.m"
                        *mdb__declarative_analyser__SearchResponse_26 = base;
#line 895 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_66));
#line 895 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 895 "declarative_analyser.m"
                      }
#line 897 "declarative_analyser.m"
                      *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 896 "declarative_analyser.m"
                      *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 896 "declarative_analyser.m"
                    }
#line 891 "declarative_analyser.m"
                  else
#line 899 "declarative_analyser.m"
                    {
#line 899 "declarative_analyser.m"
                      mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
                    }
#line 891 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 891 "declarative_analyser.m"
                }
#line 882 "declarative_analyser.m"
              else
#line 910 "declarative_analyser.m"
                {
#line 910 "declarative_analyser.m"
                  /* direct tailcall eliminated */
#line 910 "declarative_analyser.m"
                  {
#line 910 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_44 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 910 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0__tmp_copy_46 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 910 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__LastUnknown__tmp_copy_20 = mdb__declarative_analyser__NewLastUnknown_43;
#line 910 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__SuspectId__tmp_copy_21 = mdb__declarative_analyser__OriginId_39;
#line 910 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__ArgPos__tmp_copy_22 = mdb__declarative_analyser__OriginArgPos_40;
#line 910 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TermPath__tmp_copy_23 = mdb__declarative_analyser__OriginTermPath_41;

#line 910 "declarative_analyser.m"
                    mdb__declarative_analyser__TermPath_23 = mdb__declarative_analyser__TermPath__tmp_copy_23;
#line 910 "declarative_analyser.m"
                    mdb__declarative_analyser__ArgPos_22 = mdb__declarative_analyser__ArgPos__tmp_copy_22;
#line 910 "declarative_analyser.m"
                    mdb__declarative_analyser__SuspectId_21 = mdb__declarative_analyser__SuspectId__tmp_copy_21;
#line 910 "declarative_analyser.m"
                    mdb__declarative_analyser__LastUnknown_20 = mdb__declarative_analyser__LastUnknown__tmp_copy_20;
#line 910 "declarative_analyser.m"
                    mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0__tmp_copy_46;
#line 910 "declarative_analyser.m"
                    mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_44;
#line 910 "declarative_analyser.m"
                  }
#line 910 "declarative_analyser.m"
                  continue;
#line 910 "declarative_analyser.m"
                }
#line 874 "declarative_analyser.m"
            }
#line 845 "declarative_analyser.m"
            break;
#line 845 "declarative_analyser.m"
          case (MR_Integer) 2:
#line 799 "declarative_analyser.m"
            {
#line 799 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__BindingSuspectId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 0)));
#line 799 "declarative_analyser.m"
              MR_String mdb__declarative_analyser__FileName_29 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 1)));
#line 799 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__LineNo_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 2)));
#line 799 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__PrimOpType_31 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 799 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__Output_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 799 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__ProcLabel_33;
#line 799 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__MaybePath_36;

#line 800 "declarative_analyser.m"
              {
#line 800 "declarative_analyser.m"
                mdb__declarative_analyser__ProcLabel_33 = mdb__declarative_edt__get_proc_label_for_suspect_3_f_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
              }
#line 809 "declarative_analyser.m"
#line 809 "declarative_analyser.m"
              switch (mdb__declarative_analyser__Output_32) {
#line 809 "declarative_analyser.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 809 "declarative_analyser.m"
                case (MR_Integer) 0:
#line 815 "declarative_analyser.m"
                  mdb__declarative_analyser__MaybePath_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 809 "declarative_analyser.m"
                  break;
#line 809 "declarative_analyser.m"
                case (MR_Integer) 1:
#line 803 "declarative_analyser.m"
                  {
#line 803 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_72_72;
#line 803 "declarative_analyser.m"
                    MR_Box mdb__declarative_analyser__BindingNode_34;
#line 803 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__ArgNum_35;
#line 803 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_58_58;
#line 141 "mdb.declarative_edt.int"
                    MR_Box MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 141 "mdb.declarative_edt.int"
                    MR_Box mdb__declarative_analyser__conv1_ArgNum_35;

#line 806 "declarative_analyser.m"
                    {
#line 806 "declarative_analyser.m"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_72_72);
                    }
#line 806 "declarative_analyser.m"
                    {
#line 806 "declarative_analyser.m"
                      mdb__declarative_analyser__BindingNode_34 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_72_72, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__SuspectId_21);
                    }
#line 141 "mdb.declarative_edt.int"
                    mdb__declarative_analyser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 0)), (MR_Integer) 19)));
#line 141 "mdb.declarative_edt.int"
                    {
#line 141 "mdb.declarative_edt.int"
                      mdb__declarative_analyser__conv1_ArgNum_35 = mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70), mdb__declarative_analyser__Store_15, mdb__declarative_analyser__BindingNode_34, ((MR_Box) (mdb__declarative_analyser__ArgPos_22)));
                    }
#line 141 "mdb.declarative_edt.int"
                    mdb__declarative_analyser__ArgNum_35 = ((MR_Integer) mdb__declarative_analyser__conv1_ArgNum_35);
#line 808 "declarative_analyser.m"
                    {
#line 808 "declarative_analyser.m"
                      mdb__declarative_analyser__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 808 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_58_58, 0) = ((MR_Box) (mdb__declarative_analyser__ArgNum_35));
#line 808 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_58_58, 1) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
#line 808 "declarative_analyser.m"
                    }
#line 808 "declarative_analyser.m"
                    {
#line 808 "declarative_analyser.m"
                      mdb__declarative_analyser__MaybePath_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 808 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybePath_36, 0) = ((MR_Box) (mdb__declarative_analyser__V_58_58));
#line 808 "declarative_analyser.m"
                    }
#line 803 "declarative_analyser.m"
                  }
#line 809 "declarative_analyser.m"
                  break;
#line 809 "declarative_analyser.m"
              }
#line 822 "declarative_analyser.m"
              {
#line 822 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_74_74;

#line 822 "declarative_analyser.m"
                {
#line 822 "declarative_analyser.m"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_74_74);
                }
#line 822 "declarative_analyser.m"
                {
#line 822 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_74_74, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
                }
#line 822 "declarative_analyser.m"
              }
#line 823 "declarative_analyser.m"
              if (!(mdb__declarative_analyser__succeeded))
#line 823 "declarative_analyser.m"
                {
#line 823 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_76_76;

#line 823 "declarative_analyser.m"
                  {
#line 823 "declarative_analyser.m"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_76_76);
                  }
#line 823 "declarative_analyser.m"
                  {
#line 823 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_skipped_2_p_0(mdb__declarative_analyser__TypeInfo_76_76, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
                  }
#line 823 "declarative_analyser.m"
                }
#line 817 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 828 "declarative_analyser.m"
                {
#line 828 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_59_59;

#line 827 "declarative_analyser.m"
                  {
#line 827 "declarative_analyser.m"
                    mdb__declarative_analyser__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 827 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 0) = ((MR_Box) (mdb__declarative_analyser__PrimOpType_31));
#line 827 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 1) = ((MR_Box) (mdb__declarative_analyser__FileName_29));
#line 827 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 2) = ((MR_Box) (mdb__declarative_analyser__LineNo_30));
#line 827 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 3) = ((MR_Box) (mdb__declarative_analyser__MaybePath_36));
#line 827 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 4) = ((MR_Box) (mdb__declarative_analyser__ProcLabel_33));
#line 827 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 5) = ((MR_Box) ((MR_Integer) 0));
#line 827 "declarative_analyser.m"
                  }
#line 826 "declarative_analyser.m"
                  {
#line 826 "declarative_analyser.m"
                    MR_Word base;
#line 826 "declarative_analyser.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 826 "declarative_analyser.m"
                    *mdb__declarative_analyser__SearchResponse_26 = base;
#line 826 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__BindingSuspectId_28));
#line 826 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_59_59));
#line 826 "declarative_analyser.m"
                  }
#line 829 "declarative_analyser.m"
                  *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 828 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 828 "declarative_analyser.m"
                }
#line 817 "declarative_analyser.m"
              else
#line 831 "declarative_analyser.m"
                {
#line 831 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__Unknown_37;
#line 832 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_78_78;
#line 832 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__PolyConst2_77;

#line 832 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
#line 832 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 832 "declarative_analyser.m"
                    {
#line 832 "declarative_analyser.m"
                      mdb__declarative_analyser__Unknown_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
#line 9674 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__PolyConst2_77 = (MR_Integer) 2;
#line 833 "declarative_analyser.m"
                      {
#line 833 "declarative_analyser.m"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_77, &mdb__declarative_analyser__TypeInfo_78_78);
                      }
#line 1194 "declarative_analyser.m"
                      {
#line 1194 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_37);
                      }
#line 832 "declarative_analyser.m"
                    }
#line 831 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 836 "declarative_analyser.m"
                    {
#line 836 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__Reason_38;

#line 835 "declarative_analyser.m"
                      {
#line 835 "declarative_analyser.m"
                        mdb__declarative_analyser__Reason_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 835 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 0) = ((MR_Box) (mdb__declarative_analyser__PrimOpType_31));
#line 835 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 1) = ((MR_Box) (mdb__declarative_analyser__FileName_29));
#line 835 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 2) = ((MR_Box) (mdb__declarative_analyser__LineNo_30));
#line 835 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 3) = ((MR_Box) (mdb__declarative_analyser__MaybePath_36));
#line 835 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 4) = ((MR_Box) (mdb__declarative_analyser__ProcLabel_33));
#line 835 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 5) = ((MR_Box) ((MR_Integer) 1));
#line 835 "declarative_analyser.m"
                      }
#line 837 "declarative_analyser.m"
                      {
#line 837 "declarative_analyser.m"
                        MR_Word base;
#line 837 "declarative_analyser.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 837 "declarative_analyser.m"
                        *mdb__declarative_analyser__SearchResponse_26 = base;
#line 837 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_37));
#line 837 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__Reason_38));
#line 837 "declarative_analyser.m"
                      }
#line 838 "declarative_analyser.m"
                      *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 836 "declarative_analyser.m"
                      *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 836 "declarative_analyser.m"
                    }
#line 831 "declarative_analyser.m"
                  else
#line 840 "declarative_analyser.m"
                    {
#line 840 "declarative_analyser.m"
                      mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
                    }
#line 831 "declarative_analyser.m"
                }
#line 799 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 799 "declarative_analyser.m"
            }
#line 845 "declarative_analyser.m"
            break;
#line 845 "declarative_analyser.m"
        }
#line 794 "declarative_analyser.m"
      }
#line 794 "declarative_analyser.m"
      break;
#line 794 "declarative_analyser.m"
    }
#line 785 "declarative_analyser.m"
}

#line 772 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_12_p_0(
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29,
#line 772 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_13,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_14,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25,
#line 772 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_16,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_17,
#line 772 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_18,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_19,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_20,
#line 772 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_21,
#line 772 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_22,
#line 772 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_23)
#line 772 "declarative_analyser.m"
{
#line 780 "declarative_analyser.m"
  {
#line 780 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 780 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28;
#line 781 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_24_24;

#line 782 "declarative_analyser.m"
    {
#line 782 "declarative_analyser.m"
      mdb__declarative_analyser__V_28_28 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0);
    }
#line 781 "declarative_analyser.m"
    {
#line 781 "declarative_analyser.m"
      mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29, mdb__declarative_analyser__Store_13, mdb__declarative_analyser__Oracle_14, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26, mdb__declarative_analyser__HowTrack_16, mdb__declarative_analyser__V_28_28, &mdb__declarative_analyser__V_24_24, mdb__declarative_analyser__LastUnknown_17, mdb__declarative_analyser__SuspectId_18, mdb__declarative_analyser__ArgPos_19, mdb__declarative_analyser__TermPath_20, mdb__declarative_analyser__FallBackSearchMode_21, mdb__declarative_analyser__NewMode_22, mdb__declarative_analyser__SearchResponse_23);
    }
#line 780 "declarative_analyser.m"
  }
#line 772 "declarative_analyser.m"
}

#line 738 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_2(
#line 738 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 738 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
#line 738 "declarative_analyser.m"
{
#line 738 "declarative_analyser.m"
  {
#line 738 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 738 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;

#line 738 "declarative_analyser.m"
    {
#line 738 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
#line 738 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 738 "declarative_analyser.m"
  }
#line 738 "declarative_analyser.m"
}

#line 735 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_1(
#line 735 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 735 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
#line 735 "declarative_analyser.m"
{
#line 735 "declarative_analyser.m"
  {
#line 735 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 735 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;

#line 735 "declarative_analyser.m"
    {
#line 735 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__735__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
#line 735 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 735 "declarative_analyser.m"
  }
#line 735 "declarative_analyser.m"
}

#line 697 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0(
#line 697 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 697 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 697 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 697 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24,
#line 697 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25,
#line 697 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9)
#line 697 "declarative_analyser.m"
{
#line 701 "declarative_analyser.m"
  while (MR_TRUE)
#line 701 "declarative_analyser.m"
    {
#line 701 "declarative_analyser.m"
      /* tailcall optimized into a loop */
#line 701 "declarative_analyser.m"
      {
#line 701 "declarative_analyser.m"
        MR_bool mdb__declarative_analyser__succeeded;
#line 701 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Start_11;
#line 701 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__MaybeUnknownDescendant_12;
#line 701 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 705 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__RootId_10;
#line 705 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_41_41;

#line 705 "declarative_analyser.m"
        {
#line 705 "declarative_analyser.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_41_41);
        }
#line 705 "declarative_analyser.m"
        {
#line 705 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_41_41, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__RootId_10);
        }
#line 705 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 706 "declarative_analyser.m"
          mdb__declarative_analyser__Start_11 = mdb__declarative_analyser__RootId_10;
#line 705 "declarative_analyser.m"
        else
#line 708 "declarative_analyser.m"
          {
#line 708 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_43_43;

#line 708 "declarative_analyser.m"
            {
#line 708 "declarative_analyser.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_43_43);
            }
#line 708 "declarative_analyser.m"
            {
#line 708 "declarative_analyser.m"
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_43_43, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__Start_11);
            }
#line 708 "declarative_analyser.m"
          }
#line 710 "declarative_analyser.m"
        {
#line 710 "declarative_analyser.m"
          mdb__declarative_edt__first_unknown_descendant_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__Start_11, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__MaybeUnknownDescendant_12);
        }
#line 715 "declarative_analyser.m"
#line 715 "declarative_analyser.m"
        switch (MR_tag((MR_Word) mdb__declarative_analyser__MaybeUnknownDescendant_12)) {
#line 715 "declarative_analyser.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 715 "declarative_analyser.m"
          case (MR_Integer) 0:
#line 717 "declarative_analyser.m"
            {
#line 717 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__SkippedSuspect_14;
#line 718 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_45_45;

#line 718 "declarative_analyser.m"
              {
#line 718 "declarative_analyser.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_45_45);
              }
#line 718 "declarative_analyser.m"
              {
#line 718 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__choose_skipped_suspect_2_p_0(mdb__declarative_analyser__TypeInfo_45_45, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__SkippedSuspect_14);
              }
#line 717 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 720 "declarative_analyser.m"
                {
#line 720 "declarative_analyser.m"
                  {
#line 720 "declarative_analyser.m"
                    MR_Word base;
#line 720 "declarative_analyser.m"
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 720 "declarative_analyser.m"
                    *mdb__declarative_analyser__Response_9 = base;
#line 720 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SkippedSuspect_14));
#line 720 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 720 "declarative_analyser.m"
                  }
#line 720 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 720 "declarative_analyser.m"
                }
#line 717 "declarative_analyser.m"
              else
#line 722 "declarative_analyser.m"
                {
#line 722 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__BugId_15;
#line 729 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_47_47;

#line 729 "declarative_analyser.m"
                  {
#line 729 "declarative_analyser.m"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_47_47);
                  }
#line 729 "declarative_analyser.m"
                  {
#line 729 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_47_47, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__BugId_15);
                  }
#line 722 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 731 "declarative_analyser.m"
                    {
#line 731 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__BugChildren_16;
#line 731 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__CorrectDescendants_18;
#line 731 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29;
#line 732 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeCtorInfo_51_51;
#line 732 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_61_61;
#line 732 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__NonIgnoredDescendants_17;
#line 732 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28;
#line 732 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_30_30;
#line 732 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_31_31;
#line 732 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_60_60;

#line 732 "declarative_analyser.m"
                      {
#line 732 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__BugId_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28, &mdb__declarative_analyser__BugChildren_16);
                      }
#line 732 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 732 "declarative_analyser.m"
                        {
#line 733 "declarative_analyser.m"
                          {
#line 733 "declarative_analyser.m"
                            mdb__declarative_analyser__succeeded = mdb__declarative_edt__non_ignored_descendants_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__BugChildren_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, &mdb__declarative_analyser__NonIgnoredDescendants_17);
                          }
#line 732 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 732 "declarative_analyser.m"
                            {
#line 736 "declarative_analyser.m"
                              mdb__declarative_analyser__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 10056 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeCtorInfo_51_51 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 735 "declarative_analyser.m"
                              {
#line 735 "declarative_analyser.m"
                                mdb__declarative_analyser__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 735 "declarative_analyser.m"
                                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_6[0]));
#line 735 "declarative_analyser.m"
                                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 1) = ((MR_Box) (mdb__declarative_analyser__top_down_search_5_p_0_1));
#line 735 "declarative_analyser.m"
                                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 735 "declarative_analyser.m"
                                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39));
#line 735 "declarative_analyser.m"
                                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29));
#line 735 "declarative_analyser.m"
                              }
#line 735 "declarative_analyser.m"
                              {
#line 735 "declarative_analyser.m"
                                mercury__list__filter_4_p_0(mdb__declarative_analyser__TypeCtorInfo_51_51, mdb__declarative_analyser__V_30_30, mdb__declarative_analyser__NonIgnoredDescendants_17, &mdb__declarative_analyser__CorrectDescendants_18, &mdb__declarative_analyser__V_60_60);
                              }
#line 10079 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_61_61 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[2];
#line 735 "declarative_analyser.m"
                              {
#line 735 "declarative_analyser.m"
                                mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_61_61, ((MR_Box) (mdb__declarative_analyser__V_31_31)), ((MR_Box) (mdb__declarative_analyser__V_60_60)));
                              }
#line 732 "declarative_analyser.m"
                            }
#line 732 "declarative_analyser.m"
                        }
#line 731 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 739 "declarative_analyser.m"
                        {
#line 739 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__InadmissibleChildren_19;
#line 739 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_32_32;

#line 739 "declarative_analyser.m"
                          *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29;
#line 738 "declarative_analyser.m"
                          {
#line 738 "declarative_analyser.m"
                            mdb__declarative_analyser__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 738 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_6[0]));
#line 738 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__top_down_search_5_p_0_2));
#line 738 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 738 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39));
#line 738 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29));
#line 738 "declarative_analyser.m"
                          }
#line 738 "declarative_analyser.m"
                          {
#line 738 "declarative_analyser.m"
                            mercury__list__filter_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_analyser__V_32_32, mdb__declarative_analyser__BugChildren_16, &mdb__declarative_analyser__InadmissibleChildren_19);
                          }
#line 740 "declarative_analyser.m"
                          {
#line 740 "declarative_analyser.m"
                            MR_Word base;
#line 740 "declarative_analyser.m"
                            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 740 "declarative_analyser.m"
                            *mdb__declarative_analyser__Response_9 = base;
#line 740 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_analyser__BugId_15));
#line 740 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__CorrectDescendants_18));
#line 740 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_analyser__InadmissibleChildren_19));
#line 740 "declarative_analyser.m"
                          }
#line 739 "declarative_analyser.m"
                        }
#line 731 "declarative_analyser.m"
                      else
#line 743 "declarative_analyser.m"
                        {
#line 743 "declarative_analyser.m"
                          {
#line 743 "declarative_analyser.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[16])));
#line 743 "declarative_analyser.m"
                            return;
                          }
#line 743 "declarative_analyser.m"
                        }
#line 731 "declarative_analyser.m"
                    }
#line 722 "declarative_analyser.m"
                  else
#line 750 "declarative_analyser.m"
                    {
#line 750 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__ExtendedSearchSpace_20;

#line 751 "declarative_analyser.m"
                      {
#line 751 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__extend_search_space_upwards_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__ExtendedSearchSpace_20);
                      }
#line 750 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 754 "declarative_analyser.m"
                        {
#line 754 "declarative_analyser.m"
                          /* direct tailcall eliminated */
#line 754 "declarative_analyser.m"
                          {
#line 754 "declarative_analyser.m"
                            MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_24 = mdb__declarative_analyser__ExtendedSearchSpace_20;

#line 754 "declarative_analyser.m"
                            mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_24;
#line 754 "declarative_analyser.m"
                          }
#line 754 "declarative_analyser.m"
                          continue;
#line 754 "declarative_analyser.m"
                        }
#line 750 "declarative_analyser.m"
                      else
#line 757 "declarative_analyser.m"
                        {
#line 757 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__TypeInfo_58_58;
#line 757 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__TypeInfo_59_59;
#line 757 "declarative_analyser.m"
                          MR_Integer mdb__declarative_analyser__TopMostId_21;
#line 757 "declarative_analyser.m"
                          MR_Box mdb__declarative_analyser__TopMostNode_22;
#line 132 "mdb.declarative_edt.int"
                          MR_bool MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box);

#line 757 "declarative_analyser.m"
                          {
#line 757 "declarative_analyser.m"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_58_58);
                          }
#line 757 "declarative_analyser.m"
                          {
#line 757 "declarative_analyser.m"
                            mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_58_58, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__TopMostId_21);
                          }
#line 758 "declarative_analyser.m"
                          {
#line 758 "declarative_analyser.m"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_59_59);
                          }
#line 758 "declarative_analyser.m"
                          {
#line 758 "declarative_analyser.m"
                            mdb__declarative_analyser__TopMostNode_22 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_59_59, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, mdb__declarative_analyser__TopMostId_21);
                          }
#line 132 "mdb.declarative_edt.int"
                          mdb__declarative_analyser__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 0)), (MR_Integer) 14)));
#line 132 "mdb.declarative_edt.int"
                          {
#line 132 "mdb.declarative_edt.int"
                            mdb__declarative_analyser__succeeded = mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39), mdb__declarative_analyser__Store_6, mdb__declarative_analyser__TopMostNode_22);
                          }
#line 759 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 761 "declarative_analyser.m"
                            *mdb__declarative_analyser__Response_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 759 "declarative_analyser.m"
                          else
#line 763 "declarative_analyser.m"
                            *mdb__declarative_analyser__Response_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 757 "declarative_analyser.m"
                          *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 757 "declarative_analyser.m"
                        }
#line 750 "declarative_analyser.m"
                    }
#line 722 "declarative_analyser.m"
                }
#line 717 "declarative_analyser.m"
            }
#line 715 "declarative_analyser.m"
            break;
#line 715 "declarative_analyser.m"
          case (MR_Integer) 1:
#line 713 "declarative_analyser.m"
            {
#line 713 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__Unknown_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeUnknownDescendant_12, (MR_Integer) 0)));

#line 714 "declarative_analyser.m"
              {
#line 714 "declarative_analyser.m"
                MR_Word base;
#line 714 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 714 "declarative_analyser.m"
                *mdb__declarative_analyser__Response_9 = base;
#line 714 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_13));
#line 714 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 714 "declarative_analyser.m"
              }
#line 713 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 713 "declarative_analyser.m"
            }
#line 715 "declarative_analyser.m"
            break;
#line 715 "declarative_analyser.m"
          case (MR_Integer) 2:
#line 768 "declarative_analyser.m"
            {
#line 768 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__RequireExplicitId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__MaybeUnknownDescendant_12, (MR_Integer) 0)));

#line 769 "declarative_analyser.m"
              {
#line 769 "declarative_analyser.m"
                MR_Word base;
#line 769 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 769 "declarative_analyser.m"
                *mdb__declarative_analyser__Response_9 = base;
#line 769 "declarative_analyser.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__RequireExplicitId_23));
#line 769 "declarative_analyser.m"
              }
#line 768 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 768 "declarative_analyser.m"
            }
#line 715 "declarative_analyser.m"
            break;
#line 715 "declarative_analyser.m"
        }
#line 701 "declarative_analyser.m"
      }
#line 701 "declarative_analyser.m"
      break;
#line 701 "declarative_analyser.m"
    }
#line 697 "declarative_analyser.m"
}

#line 666 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__search_for_question_8_p_0(
#line 666 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33,
#line 666 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_9,
#line 666 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_10,
#line 666 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 666 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 666 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__OldMode_12,
#line 666 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_13,
#line 666 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_14,
#line 666 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_15)
#line 666 "declarative_analyser.m"
{
#line 674 "declarative_analyser.m"
  {
#line 674 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 674 "declarative_analyser.m"
#line 674 "declarative_analyser.m"
    switch (MR_tag((MR_Word) mdb__declarative_analyser__OldMode_12)) {
#line 674 "declarative_analyser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 674 "declarative_analyser.m"
      case (MR_Integer) 0:
#line 674 "declarative_analyser.m"
        {
#line 675 "declarative_analyser.m"
          {
#line 675 "declarative_analyser.m"
            mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
          }
#line 680 "declarative_analyser.m"
          *mdb__declarative_analyser__NewMode_14 = mdb__declarative_analyser__FallBackSearchMode_13;
#line 674 "declarative_analyser.m"
        }
#line 674 "declarative_analyser.m"
        break;
#line 674 "declarative_analyser.m"
      case (MR_Integer) 1:
#line 683 "declarative_analyser.m"
        {
#line 683 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__SuspectId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
#line 683 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__ArgPos_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 1)));
#line 683 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TermPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 2)));
#line 683 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__LastUnknown_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 3)));
#line 683 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__HowTrack_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 4)));

#line 684 "declarative_analyser.m"
          {
#line 684 "declarative_analyser.m"
            mdb__declarative_analyser__follow_subterm_end_search_12_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__HowTrack_20, mdb__declarative_analyser__LastUnknown_19, mdb__declarative_analyser__SuspectId_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, mdb__declarative_analyser__FallBackSearchMode_13, mdb__declarative_analyser__NewMode_14, mdb__declarative_analyser__Response_15);
          }
#line 683 "declarative_analyser.m"
        }
#line 674 "declarative_analyser.m"
        break;
#line 674 "declarative_analyser.m"
      case (MR_Integer) 2:
#line 688 "declarative_analyser.m"
        {
#line 688 "declarative_analyser.m"
          MR_ArrayPtr mdb__declarative_analyser__PathArray_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
#line 688 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__Top_22;
#line 688 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__Bottom_23;
#line 688 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__LastTested_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 2)));
#line 688 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 1)));

#line 688 "declarative_analyser.m"
          mdb__declarative_analyser__Top_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_29_29, (MR_Integer) 0)));
#line 688 "declarative_analyser.m"
          mdb__declarative_analyser__Bottom_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_29_29, (MR_Integer) 1)));
#line 689 "declarative_analyser.m"
          {
#line 689 "declarative_analyser.m"
            mdb__declarative_analyser__binary_search_11_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__PathArray_21, mdb__declarative_analyser__Top_22, mdb__declarative_analyser__Bottom_23, mdb__declarative_analyser__LastTested_24, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__FallBackSearchMode_13, mdb__declarative_analyser__NewMode_14, mdb__declarative_analyser__Response_15);
          }
#line 688 "declarative_analyser.m"
        }
#line 674 "declarative_analyser.m"
        break;
#line 674 "declarative_analyser.m"
      case (MR_Integer) 3:
#line 692 "declarative_analyser.m"
        {
#line 692 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__Weighting_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
#line 1053 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__RootId_41;
#line 1053 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TypeInfo_23_48;

#line 1050 "declarative_analyser.m"
          *mdb__declarative_analyser__NewMode_14 = mdb__declarative_analyser__OldMode_12;
#line 1053 "declarative_analyser.m"
          {
#line 1053 "declarative_analyser.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_23_48);
          }
#line 1053 "declarative_analyser.m"
          {
#line 1053 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_23_48, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, &mdb__declarative_analyser__RootId_41);
          }
#line 1053 "declarative_analyser.m"
          if (mdb__declarative_analyser__succeeded)
#line 1054 "declarative_analyser.m"
            {
#line 1054 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__Children_42;
#line 1054 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_43;

#line 1054 "declarative_analyser.m"
              {
#line 1054 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__RootId_41, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_43, &mdb__declarative_analyser__Children_42);
              }
#line 1054 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 1055 "declarative_analyser.m"
                {
#line 1055 "declarative_analyser.m"
                  {
#line 1055 "declarative_analyser.m"
                    mdb__declarative_analyser__find_middle_weight_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__Weighting_25, mdb__declarative_analyser__Children_42, mdb__declarative_analyser__RootId_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_43, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
                  }
#line 1055 "declarative_analyser.m"
                }
#line 1054 "declarative_analyser.m"
              else
#line 1058 "declarative_analyser.m"
                {
#line 1058 "declarative_analyser.m"
                  {
#line 1058 "declarative_analyser.m"
                    MR_Word base;
#line 1058 "declarative_analyser.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "declarative_analyser.m"
                    *mdb__declarative_analyser__Response_15 = base;
#line 1058 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__RootId_41));
#line 1058 "declarative_analyser.m"
                  }
#line 1058 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26;
#line 1058 "declarative_analyser.m"
                }
#line 1054 "declarative_analyser.m"
            }
#line 1053 "declarative_analyser.m"
          else
#line 1061 "declarative_analyser.m"
            {
#line 1061 "declarative_analyser.m"
              mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
            }
#line 692 "declarative_analyser.m"
        }
#line 674 "declarative_analyser.m"
        break;
#line 674 "declarative_analyser.m"
    }
#line 674 "declarative_analyser.m"
  }
#line 666 "declarative_analyser.m"
}

#line 654 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_2(
#line 654 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 654 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 654 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2)
#line 654 "declarative_analyser.m"
{
#line 654 "declarative_analyser.m"
  {
#line 654 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;
#line 654 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__conv4_HeadVar__3_3;

#line 654 "declarative_analyser.m"
    {
#line 654 "declarative_analyser.m"
      mdb__declarative_edt__edt_question_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4)), mdb__declarative_analyser__wrapper_arg_1, &mdb__declarative_analyser__conv4_HeadVar__3_3);
    }
#line 654 "declarative_analyser.m"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv4_HeadVar__3_3));
#line 654 "declarative_analyser.m"
  }
#line 654 "declarative_analyser.m"
}

#line 653 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_1(
#line 653 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 653 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
#line 653 "declarative_analyser.m"
{
#line 653 "declarative_analyser.m"
  {
#line 653 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__wrapper_arg_2;
#line 653 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;

#line 653 "declarative_analyser.m"
    {
#line 653 "declarative_analyser.m"
      mdb__declarative_analyser__wrapper_arg_2 = mdb__declarative_analyser__IntroducedFrom__func__bug_response__653__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
#line 653 "declarative_analyser.m"
    return mdb__declarative_analyser__wrapper_arg_2;
#line 653 "declarative_analyser.m"
  }
#line 653 "declarative_analyser.m"
}

#line 636 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0(
#line 636 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 636 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 636 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 636 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__BugId_9,
#line 636 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Evidence_10,
#line 636 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__InadmissibleChildren_11,
#line 636 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_12)
#line 636 "declarative_analyser.m"
{
#line 641 "declarative_analyser.m"
  {
#line 641 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 641 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_26_26;
#line 641 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_29_29;
#line 641 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_36_36;
#line 641 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_37_37;
#line 641 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_39_39;
#line 641 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__BugNode_13;
#line 641 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__Bug_17;
#line 641 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__EDTNodes_19;
#line 641 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__EvidenceAsQuestions_20;
#line 641 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_22_22;
#line 641 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_23_23;
#line 654 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__conv5_EvidenceAsQuestions_20;

#line 642 "declarative_analyser.m"
    {
#line 642 "declarative_analyser.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_26_26);
    }
#line 642 "declarative_analyser.m"
    {
#line 642 "declarative_analyser.m"
      mdb__declarative_analyser__BugNode_13 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_26_26, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__BugId_9);
    }
#line 648 "declarative_analyser.m"
    if ((mdb__declarative_analyser__InadmissibleChildren_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 649 "declarative_analyser.m"
      {
#line 649 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__EBug_18;
#line 116 "mdb.declarative_edt.int"
        void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 6)));
#line 116 "mdb.declarative_edt.int"
        MR_Box mdb__declarative_analyser__conv1_EBug_18;

#line 116 "mdb.declarative_edt.int"
        {
#line 116 "mdb.declarative_edt.int"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__BugNode_13, &mdb__declarative_analyser__conv1_EBug_18);
        }
#line 116 "mdb.declarative_edt.int"
        mdb__declarative_analyser__EBug_18 = ((MR_Word) mdb__declarative_analyser__conv1_EBug_18);
#line 651 "declarative_analyser.m"
        {
#line 651 "declarative_analyser.m"
          mdb__declarative_analyser__Bug_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 651 "declarative_analyser.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Bug_17, 0) = ((MR_Box) (mdb__declarative_analyser__EBug_18));
#line 651 "declarative_analyser.m"
        }
#line 649 "declarative_analyser.m"
      }
#line 648 "declarative_analyser.m"
    else
#line 644 "declarative_analyser.m"
      {
#line 644 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_27_27;
#line 644 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__InadmissibleChild_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__InadmissibleChildren_11, (MR_Integer) 0)));
#line 644 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__IBug_16;
#line 644 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__V_21_21;
#line 644 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__InadmissibleChildren_11, (MR_Integer) 1)));
#line 118 "mdb.declarative_edt.int"
        void MR_CALL (* mdb__declarative_analyser__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 118 "mdb.declarative_edt.int"
        MR_Box mdb__declarative_analyser__conv3_IBug_16;

#line 646 "declarative_analyser.m"
        {
#line 646 "declarative_analyser.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_27_27);
        }
#line 646 "declarative_analyser.m"
        {
#line 646 "declarative_analyser.m"
          mdb__declarative_analyser__V_21_21 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_27_27, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__InadmissibleChild_14);
        }
#line 118 "mdb.declarative_edt.int"
        mdb__declarative_analyser__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 7)));
#line 118 "mdb.declarative_edt.int"
        {
#line 118 "mdb.declarative_edt.int"
          mdb__declarative_analyser__func_2(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__BugNode_13, mdb__declarative_analyser__V_21_21, &mdb__declarative_analyser__conv3_IBug_16);
        }
#line 118 "mdb.declarative_edt.int"
        mdb__declarative_analyser__IBug_16 = ((MR_Word) mdb__declarative_analyser__conv3_IBug_16);
#line 647 "declarative_analyser.m"
        mdb__declarative_analyser__Bug_17 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) mdb__declarative_analyser__IBug_16);
#line 644 "declarative_analyser.m"
      }
#line 653 "declarative_analyser.m"
    {
#line 653 "declarative_analyser.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_29_29);
    }
#line 653 "declarative_analyser.m"
    {
#line 653 "declarative_analyser.m"
      mdb__declarative_analyser__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 653 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_5[0]));
#line 653 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__bug_response_6_p_0_1));
#line 653 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 653 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24));
#line 653 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 4) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_8));
#line 653 "declarative_analyser.m"
    }
#line 653 "declarative_analyser.m"
    {
#line 653 "declarative_analyser.m"
      mdb__declarative_analyser__EDTNodes_19 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_analyser__TypeInfo_29_29, mdb__declarative_analyser__V_22_22, mdb__declarative_analyser__Evidence_10);
    }
#line 654 "declarative_analyser.m"
    {
#line 654 "declarative_analyser.m"
      mdb__declarative_analyser__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 654 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_5[1]));
#line 654 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__bug_response_6_p_0_2));
#line 654 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 654 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24));
#line 654 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 4) = mdb__declarative_analyser__Store_7;
#line 654 "declarative_analyser.m"
    }
#line 654 "declarative_analyser.m"
    {
#line 654 "declarative_analyser.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_36_36);
    }
#line 654 "declarative_analyser.m"
    {
#line 654 "declarative_analyser.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_37_37);
    }
#line 10737 "mdb.declarative_analyser.c"
    {
#line 10739 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10741 "mdb.declarative_analyser.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_39_39, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 10743 "mdb.declarative_analyser.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_39_39, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_37_37));
#line 10745 "mdb.declarative_analyser.c"
    }
#line 654 "declarative_analyser.m"
    {
#line 654 "declarative_analyser.m"
      mercury__list__map_3_p_0(mdb__declarative_analyser__TypeInfo_36_36, mdb__declarative_analyser__TypeInfo_39_39, (MR_Word) mdb__declarative_analyser__V_23_23, mdb__declarative_analyser__EDTNodes_19, &mdb__declarative_analyser__conv5_EvidenceAsQuestions_20);
    }
#line 654 "declarative_analyser.m"
    mdb__declarative_analyser__EvidenceAsQuestions_20 = (MR_Word) mdb__declarative_analyser__conv5_EvidenceAsQuestions_20;
#line 656 "declarative_analyser.m"
    {
#line 656 "declarative_analyser.m"
      MR_Word base;
#line 656 "declarative_analyser.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "declarative_analyser.m"
      *mdb__declarative_analyser__Response_12 = base;
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Bug_17));
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__EvidenceAsQuestions_20));
#line 656 "declarative_analyser.m"
    }
#line 641 "declarative_analyser.m"
  }
#line 636 "declarative_analyser.m"
}

#line 569 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__handle_search_response_5_p_0(
#line 569 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78,
#line 569 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 569 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchResponse_7,
#line 569 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20,
#line 569 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_21,
#line 569 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__AnalyserResponse_9)
#line 569 "declarative_analyser.m"
{
#line 575 "declarative_analyser.m"
  {
#line 575 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 575 "declarative_analyser.m"
#line 575 "declarative_analyser.m"
    switch (MR_tag((MR_Word) mdb__declarative_analyser__SearchResponse_7)) {
#line 575 "declarative_analyser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 575 "declarative_analyser.m"
      case (MR_Integer) 0:
#line 575 "declarative_analyser.m"
#line 575 "declarative_analyser.m"
        switch (MR_unmkbody(mdb__declarative_analyser__SearchResponse_7)) {
#line 575 "declarative_analyser.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 575 "declarative_analyser.m"
          case (MR_Integer) 0:
#line 611 "declarative_analyser.m"
            {
#line 611 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_88_88;
#line 611 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_89_89;
#line 611 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__TopMostId_15;
#line 611 "declarative_analyser.m"
              MR_Box mdb__declarative_analyser__TopMost_16;
#line 611 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__SearchSpace_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 612 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 612 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 612 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 612 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 612 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));

#line 612 "declarative_analyser.m"
              {
#line 612 "declarative_analyser.m"
                MR_Word base;
#line 612 "declarative_analyser.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 612 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
#line 612 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_39));
#line 612 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_3[3])));
#line 612 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_64_64));
#line 612 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_65_65));
#line 612 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_66_66));
#line 612 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_67_67));
#line 612 "declarative_analyser.m"
              }
#line 614 "declarative_analyser.m"
              {
#line 614 "declarative_analyser.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_88_88);
              }
#line 614 "declarative_analyser.m"
              {
#line 614 "declarative_analyser.m"
                mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_88_88, mdb__declarative_analyser__SearchSpace_39, &mdb__declarative_analyser__TopMostId_15);
              }
#line 615 "declarative_analyser.m"
              {
#line 615 "declarative_analyser.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_89_89);
              }
#line 615 "declarative_analyser.m"
              {
#line 615 "declarative_analyser.m"
                mdb__declarative_analyser__TopMost_16 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_89_89, mdb__declarative_analyser__SearchSpace_39, mdb__declarative_analyser__TopMostId_15);
              }
#line 616 "declarative_analyser.m"
              {
#line 616 "declarative_analyser.m"
                MR_Word base;
#line 616 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 616 "declarative_analyser.m"
                *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 616 "declarative_analyser.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 616 "declarative_analyser.m"
                MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_analyser__TopMost_16;
#line 616 "declarative_analyser.m"
              }
#line 611 "declarative_analyser.m"
            }
#line 575 "declarative_analyser.m"
            break;
#line 575 "declarative_analyser.m"
          case (MR_Integer) 1:
#line 619 "declarative_analyser.m"
            {
#line 620 "declarative_analyser.m"
              *mdb__declarative_analyser__AnalyserResponse_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 619 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20;
#line 619 "declarative_analyser.m"
            }
#line 575 "declarative_analyser.m"
            break;
#line 575 "declarative_analyser.m"
        }
#line 575 "declarative_analyser.m"
        break;
#line 575 "declarative_analyser.m"
      case (MR_Integer) 1:
#line 575 "declarative_analyser.m"
        {
#line 575 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TypeInfo_80_80;
#line 575 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__SuspectId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
#line 575 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__Reason_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 1)));
#line 575 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__SearchSpace_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 575 "declarative_analyser.m"
          MR_Box mdb__declarative_analyser__Node_13;
#line 575 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__OracleQuestion_14;
#line 575 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_35_35;
#line 575 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_36_36;
#line 576 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 576 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 576 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 576 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 576 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 114 "mdb.declarative_edt.int"
          void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 114 "mdb.declarative_edt.int"
          MR_Box mdb__declarative_analyser__conv1_OracleQuestion_14;
#line 602 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_45_45;
#line 602 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_46_46;
#line 602 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_47_47;
#line 602 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_48_48;
#line 602 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_50_50;
#line 602 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_49_49;

#line 577 "declarative_analyser.m"
          {
#line 577 "declarative_analyser.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
          }
#line 577 "declarative_analyser.m"
          {
#line 577 "declarative_analyser.m"
            mdb__declarative_analyser__Node_13 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
          }
#line 114 "mdb.declarative_edt.int"
          mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 0)), (MR_Integer) 5)));
#line 114 "mdb.declarative_edt.int"
          {
#line 114 "mdb.declarative_edt.int"
            mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78), mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_13, &mdb__declarative_analyser__conv1_OracleQuestion_14);
          }
#line 114 "mdb.declarative_edt.int"
          mdb__declarative_analyser__OracleQuestion_14 = ((MR_Word) mdb__declarative_analyser__conv1_OracleQuestion_14);
#line 581 "declarative_analyser.m"
          {
#line 581 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_81_81;

#line 581 "declarative_analyser.m"
            {
#line 581 "declarative_analyser.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_81_81);
            }
#line 581 "declarative_analyser.m"
            {
#line 581 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_81_81, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
            }
#line 581 "declarative_analyser.m"
          }
#line 582 "declarative_analyser.m"
          if (!(mdb__declarative_analyser__succeeded))
#line 583 "declarative_analyser.m"
            {
#line 583 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_82_82;

#line 583 "declarative_analyser.m"
              {
#line 583 "declarative_analyser.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_82_82);
              }
#line 583 "declarative_analyser.m"
              {
#line 583 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_skipped_2_p_0(mdb__declarative_analyser__TypeInfo_82_82, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
              }
#line 583 "declarative_analyser.m"
            }
#line 579 "declarative_analyser.m"
          if (mdb__declarative_analyser__succeeded)
#line 586 "declarative_analyser.m"
            {
#line 586 "declarative_analyser.m"
              MR_Word base;
#line 586 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 586 "declarative_analyser.m"
              *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 586 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_14));
#line 586 "declarative_analyser.m"
            }
#line 579 "declarative_analyser.m"
          else
#line 588 "declarative_analyser.m"
            {
#line 589 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_83_83;

#line 589 "declarative_analyser.m"
              {
#line 589 "declarative_analyser.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_83_83);
              }
#line 589 "declarative_analyser.m"
              {
#line 589 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_ignored_2_p_0(mdb__declarative_analyser__TypeInfo_83_83, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
              }
#line 588 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 593 "declarative_analyser.m"
                {
#line 593 "declarative_analyser.m"
                  {
#line 593 "declarative_analyser.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[15])));
#line 593 "declarative_analyser.m"
                    return;
                  }
#line 593 "declarative_analyser.m"
                }
#line 588 "declarative_analyser.m"
              else
#line 600 "declarative_analyser.m"
                {
#line 600 "declarative_analyser.m"
                  MR_Word base;
#line 600 "declarative_analyser.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 600 "declarative_analyser.m"
                  *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 600 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 600 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_14));
#line 600 "declarative_analyser.m"
                }
#line 588 "declarative_analyser.m"
            }
#line 603 "declarative_analyser.m"
          {
#line 603 "declarative_analyser.m"
            mdb__declarative_analyser__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_36_36, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_10));
#line 603 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_36_36, 1) = ((MR_Box) (mdb__declarative_analyser__Reason_11));
#line 603 "declarative_analyser.m"
          }
#line 603 "declarative_analyser.m"
          {
#line 603 "declarative_analyser.m"
            mdb__declarative_analyser__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 603 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_35_35, 0) = ((MR_Box) (mdb__declarative_analyser__V_36_36));
#line 603 "declarative_analyser.m"
          }
#line 602 "declarative_analyser.m"
          mdb__declarative_analyser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 602 "declarative_analyser.m"
          mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 602 "declarative_analyser.m"
          mdb__declarative_analyser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 602 "declarative_analyser.m"
          mdb__declarative_analyser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 602 "declarative_analyser.m"
          mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 602 "declarative_analyser.m"
          mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 602 "declarative_analyser.m"
          {
#line 602 "declarative_analyser.m"
            MR_Word base;
#line 602 "declarative_analyser.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 602 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
#line 602 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 602 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_46_46));
#line 602 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 602 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_48_48));
#line 602 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_35_35));
#line 602 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 602 "declarative_analyser.m"
          }
#line 575 "declarative_analyser.m"
        }
#line 575 "declarative_analyser.m"
        break;
#line 575 "declarative_analyser.m"
      case (MR_Integer) 2:
#line 605 "declarative_analyser.m"
        {
#line 605 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TypeInfo_86_86;
#line 605 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_28_28;
#line 605 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_29_29;
#line 605 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_30_30;
#line 605 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__SuspectId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
#line 605 "declarative_analyser.m"
          MR_Box mdb__declarative_analyser__Node_38;
#line 606 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_51_51;
#line 606 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_53_53;
#line 606 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_54_54;
#line 606 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_55_55;
#line 606 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_56_56;
#line 606 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_52_52;
#line 608 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_57_57;
#line 608 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_58_58;
#line 608 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_59_59;
#line 608 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_60_60;
#line 608 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_61_61;

#line 606 "declarative_analyser.m"
          {
#line 606 "declarative_analyser.m"
            mdb__declarative_analyser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_29_29, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_37));
#line 606 "declarative_analyser.m"
          }
#line 606 "declarative_analyser.m"
          {
#line 606 "declarative_analyser.m"
            mdb__declarative_analyser__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_28_28, 0) = ((MR_Box) (mdb__declarative_analyser__V_29_29));
#line 606 "declarative_analyser.m"
          }
#line 606 "declarative_analyser.m"
          mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 606 "declarative_analyser.m"
          mdb__declarative_analyser__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 606 "declarative_analyser.m"
          mdb__declarative_analyser__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 606 "declarative_analyser.m"
          mdb__declarative_analyser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 606 "declarative_analyser.m"
          mdb__declarative_analyser__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 606 "declarative_analyser.m"
          mdb__declarative_analyser__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 606 "declarative_analyser.m"
          {
#line 606 "declarative_analyser.m"
            MR_Word base;
#line 606 "declarative_analyser.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 606 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
#line 606 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 606 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_28_28));
#line 606 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_53_53));
#line 606 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_54_54));
#line 606 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_55_55));
#line 606 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_56_56));
#line 606 "declarative_analyser.m"
          }
#line 608 "declarative_analyser.m"
          {
#line 608 "declarative_analyser.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_86_86);
          }
#line 608 "declarative_analyser.m"
          mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 0)));
#line 608 "declarative_analyser.m"
          mdb__declarative_analyser__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 1)));
#line 608 "declarative_analyser.m"
          mdb__declarative_analyser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 2)));
#line 608 "declarative_analyser.m"
          mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 3)));
#line 608 "declarative_analyser.m"
          mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 4)));
#line 608 "declarative_analyser.m"
          mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 5)));
#line 608 "declarative_analyser.m"
          {
#line 608 "declarative_analyser.m"
            mdb__declarative_analyser__Node_38 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_86_86, mdb__declarative_analyser__V_30_30, mdb__declarative_analyser__SuspectId_37);
          }
#line 609 "declarative_analyser.m"
          {
#line 609 "declarative_analyser.m"
            MR_Word base;
#line 609 "declarative_analyser.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 609 "declarative_analyser.m"
            *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 609 "declarative_analyser.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 609 "declarative_analyser.m"
            MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_analyser__Node_38;
#line 609 "declarative_analyser.m"
          }
#line 605 "declarative_analyser.m"
        }
#line 575 "declarative_analyser.m"
        break;
#line 575 "declarative_analyser.m"
      case (MR_Integer) 3:
#line 623 "declarative_analyser.m"
        {
#line 623 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__BugId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
#line 623 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__CorrectDescendants_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 1)));
#line 623 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__InadmissibleChildren_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 2)));
#line 623 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 623 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_23_23;
#line 624 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 624 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 624 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 624 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 624 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));

#line 625 "declarative_analyser.m"
          {
#line 625 "declarative_analyser.m"
            mdb__declarative_analyser__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 625 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__BugId_17));
#line 625 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__CorrectDescendants_18));
#line 625 "declarative_analyser.m"
          }
#line 624 "declarative_analyser.m"
          {
#line 624 "declarative_analyser.m"
            mdb__declarative_analyser__bug_response_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__V_22_22, mdb__declarative_analyser__BugId_17, mdb__declarative_analyser__V_23_23, mdb__declarative_analyser__InadmissibleChildren_19, mdb__declarative_analyser__AnalyserResponse_9);
          }
#line 623 "declarative_analyser.m"
          *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20;
#line 623 "declarative_analyser.m"
        }
#line 575 "declarative_analyser.m"
        break;
#line 575 "declarative_analyser.m"
    }
#line 575 "declarative_analyser.m"
  }
#line 569 "declarative_analyser.m"
}

#line 550 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__decide_analyser_response_5_p_0(
#line 550 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63,
#line 550 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 550 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 550 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_8,
#line 550 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13,
#line 550 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_14)
#line 550 "declarative_analyser.m"
{
#line 554 "declarative_analyser.m"
  {
#line 554 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__NewMode_11;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__SearchResponse_12;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_24_24;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_32_32;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_33_33;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_47_47;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_49_49;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_50_50;
#line 554 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_51_51;
#line 555 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 555 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 555 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 555 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 555 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 558 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_31_31;
#line 558 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_34_34;
#line 558 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_35_35;
#line 562 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_46_46;
#line 562 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_48_48;
#line 566 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_58_58;
#line 566 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_59_59;
#line 566 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_60_60;
#line 566 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_61_61;
#line 566 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_62_62;

#line 555 "declarative_analyser.m"
    {
#line 555 "declarative_analyser.m"
      mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__V_15_15, (MR_String) "Start of decide_analyser_response");
    }
#line 558 "declarative_analyser.m"
    mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 558 "declarative_analyser.m"
    mdb__declarative_analyser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 558 "declarative_analyser.m"
    mdb__declarative_analyser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 558 "declarative_analyser.m"
    mdb__declarative_analyser__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 558 "declarative_analyser.m"
    mdb__declarative_analyser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 558 "declarative_analyser.m"
    mdb__declarative_analyser__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 559 "declarative_analyser.m"
    {
#line 559 "declarative_analyser.m"
      mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18, mdb__declarative_analyser__V_32_32, mdb__declarative_analyser__V_33_33, &mdb__declarative_analyser__NewMode_11, &mdb__declarative_analyser__SearchResponse_12);
    }
#line 562 "declarative_analyser.m"
    mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 562 "declarative_analyser.m"
    mdb__declarative_analyser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 562 "declarative_analyser.m"
    mdb__declarative_analyser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 562 "declarative_analyser.m"
    mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 562 "declarative_analyser.m"
    mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 562 "declarative_analyser.m"
    mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 563 "declarative_analyser.m"
    {
#line 563 "declarative_analyser.m"
      mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 563 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 0) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18));
#line 563 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 563 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 2) = ((MR_Box) (mdb__declarative_analyser__NewMode_11));
#line 563 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 3) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 563 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 4) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 563 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 5) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 563 "declarative_analyser.m"
    }
#line 564 "declarative_analyser.m"
    {
#line 564 "declarative_analyser.m"
      mdb__declarative_analyser__handle_search_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__SearchResponse_12, mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, mdb__declarative_analyser__Response_8);
    }
#line 566 "declarative_analyser.m"
    mdb__declarative_analyser__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 0)));
#line 566 "declarative_analyser.m"
    mdb__declarative_analyser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 1)));
#line 566 "declarative_analyser.m"
    mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 2)));
#line 566 "declarative_analyser.m"
    mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 3)));
#line 566 "declarative_analyser.m"
    mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 4)));
#line 566 "declarative_analyser.m"
    mdb__declarative_analyser__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 5)));
#line 566 "declarative_analyser.m"
    {
#line 566 "declarative_analyser.m"
      mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__V_24_24, (MR_String) "End of decide_analyser_response");
    }
#line 554 "declarative_analyser.m"
  }
#line 550 "declarative_analyser.m"
}

#line 472 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__process_answer_5_p_0(
#line 472 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137,
#line 472 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 472 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Answer_7,
#line 472 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_8,
#line 472 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24,
#line 472 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_25)
#line 472 "declarative_analyser.m"
{
#line 477 "declarative_analyser.m"
  {
#line 477 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 477 "declarative_analyser.m"
#line 477 "declarative_analyser.m"
    switch (MR_tag((MR_Word) mdb__declarative_analyser__Answer_7)) {
#line 477 "declarative_analyser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 477 "declarative_analyser.m"
      case (MR_Integer) 0:
#line 477 "declarative_analyser.m"
        {
#line 477 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Answer_7, (MR_Integer) 1)));
#line 477 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 486 "declarative_analyser.m"
          MR_Box mdb__declarative_analyser__V_157_157 = (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Answer_7, (MR_Integer) 0));
#line 487 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 487 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 487 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 487 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 487 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));

#line 477 "declarative_analyser.m"
#line 477 "declarative_analyser.m"
          switch (mdb__declarative_analyser__V_156_156) {
#line 477 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 477 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 486 "declarative_analyser.m"
              {
#line 486 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_141_141;
#line 486 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__SearchSpace_48;
#line 489 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_82_82;
#line 489 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_83_83;
#line 489 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_84_84;
#line 489 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_85_85;
#line 489 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_86_86;
#line 489 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_81_81;

#line 487 "declarative_analyser.m"
                {
#line 487 "declarative_analyser.m"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_141_141);
                }
#line 487 "declarative_analyser.m"
                {
#line 487 "declarative_analyser.m"
                  mdb__declarative_edt__assert_suspect_is_correct_3_p_0(mdb__declarative_analyser__TypeInfo_141_141, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_163_163, &mdb__declarative_analyser__SearchSpace_48);
                }
#line 489 "declarative_analyser.m"
                mdb__declarative_analyser__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 489 "declarative_analyser.m"
                mdb__declarative_analyser__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 489 "declarative_analyser.m"
                mdb__declarative_analyser__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 489 "declarative_analyser.m"
                mdb__declarative_analyser__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 489 "declarative_analyser.m"
                mdb__declarative_analyser__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 489 "declarative_analyser.m"
                mdb__declarative_analyser__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 489 "declarative_analyser.m"
                {
#line 489 "declarative_analyser.m"
                  MR_Word base;
#line 489 "declarative_analyser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 489 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 489 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_48));
#line 489 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_82_82));
#line 489 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_83_83));
#line 489 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_84_84));
#line 489 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_85_85));
#line 489 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_86_86));
#line 489 "declarative_analyser.m"
                }
#line 486 "declarative_analyser.m"
              }
#line 477 "declarative_analyser.m"
              break;
#line 477 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 496 "declarative_analyser.m"
              {
#line 496 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_145_145;
#line 496 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__SearchSpace_50;
#line 499 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_104_104;
#line 499 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_105_105;
#line 499 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_106_106;
#line 499 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_107_107;
#line 499 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_108_108;
#line 499 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_103_103;

#line 497 "declarative_analyser.m"
                {
#line 497 "declarative_analyser.m"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_145_145);
                }
#line 497 "declarative_analyser.m"
                {
#line 497 "declarative_analyser.m"
                  mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(mdb__declarative_analyser__TypeInfo_145_145, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_163_163, &mdb__declarative_analyser__SearchSpace_50);
                }
#line 499 "declarative_analyser.m"
                mdb__declarative_analyser__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 499 "declarative_analyser.m"
                mdb__declarative_analyser__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 499 "declarative_analyser.m"
                mdb__declarative_analyser__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 499 "declarative_analyser.m"
                mdb__declarative_analyser__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 499 "declarative_analyser.m"
                mdb__declarative_analyser__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 499 "declarative_analyser.m"
                mdb__declarative_analyser__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 499 "declarative_analyser.m"
                {
#line 499 "declarative_analyser.m"
                  MR_Word base;
#line 499 "declarative_analyser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 499 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 499 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_50));
#line 499 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_104_104));
#line 499 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_105_105));
#line 499 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_106_106));
#line 499 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_107_107));
#line 499 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_108_108));
#line 499 "declarative_analyser.m"
                }
#line 496 "declarative_analyser.m"
              }
#line 477 "declarative_analyser.m"
              break;
#line 477 "declarative_analyser.m"
            case (MR_Integer) 2:
#line 491 "declarative_analyser.m"
              {
#line 491 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_143_143;
#line 491 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__SearchSpace_49;
#line 494 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_93_93;
#line 494 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_94_94;
#line 494 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_95_95;
#line 494 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_96_96;
#line 494 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_97_97;
#line 494 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_92_92;

#line 492 "declarative_analyser.m"
                {
#line 492 "declarative_analyser.m"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_143_143);
                }
#line 492 "declarative_analyser.m"
                {
#line 492 "declarative_analyser.m"
                  mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(mdb__declarative_analyser__TypeInfo_143_143, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_163_163, &mdb__declarative_analyser__SearchSpace_49);
                }
#line 494 "declarative_analyser.m"
                mdb__declarative_analyser__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 494 "declarative_analyser.m"
                mdb__declarative_analyser__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 494 "declarative_analyser.m"
                mdb__declarative_analyser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 494 "declarative_analyser.m"
                mdb__declarative_analyser__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 494 "declarative_analyser.m"
                mdb__declarative_analyser__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 494 "declarative_analyser.m"
                mdb__declarative_analyser__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 494 "declarative_analyser.m"
                {
#line 494 "declarative_analyser.m"
                  MR_Word base;
#line 494 "declarative_analyser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 494 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 494 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_49));
#line 494 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_93_93));
#line 494 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_94_94));
#line 494 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_95_95));
#line 494 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_96_96));
#line 494 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_97_97));
#line 494 "declarative_analyser.m"
                }
#line 491 "declarative_analyser.m"
              }
#line 477 "declarative_analyser.m"
              break;
#line 477 "declarative_analyser.m"
          }
#line 477 "declarative_analyser.m"
        }
#line 477 "declarative_analyser.m"
        break;
#line 477 "declarative_analyser.m"
      case (MR_Integer) 1:
#line 502 "declarative_analyser.m"
        {
#line 502 "declarative_analyser.m"
          MR_Box mdb__declarative_analyser__Node_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 0));
#line 502 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__ArgPos_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 1)));
#line 502 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TermPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 2)));
#line 502 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__HowTrack_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 502 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__ShouldAssertInvalid_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 502 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__DebugOrigin_22;
#line 502 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26;
#line 502 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_27_27;
#line 502 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30;
#line 502 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_32_32;
#line 509 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_21_21;
#line 510 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_109_109;
#line 510 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_110_110;
#line 510 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_111_111;
#line 510 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_112_112;
#line 510 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_113_113;
#line 510 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_114_114;
#line 527 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_131_131;
#line 527 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_132_132;
#line 527 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_134_134;
#line 527 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_135_135;
#line 527 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_136_136;
#line 527 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_133_133;

#line 509 "declarative_analyser.m"
          {
#line 509 "declarative_analyser.m"
            mdb__declarative_edt__edt_dependency_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, &mdb__declarative_analyser__V_21_21, &mdb__declarative_analyser__DebugOrigin_22);
          }
#line 510 "declarative_analyser.m"
          {
#line 510 "declarative_analyser.m"
            mdb__declarative_analyser__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 510 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_27_27, 0) = ((MR_Box) (mdb__declarative_analyser__DebugOrigin_22));
#line 510 "declarative_analyser.m"
          }
#line 510 "declarative_analyser.m"
          mdb__declarative_analyser__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 510 "declarative_analyser.m"
          mdb__declarative_analyser__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 510 "declarative_analyser.m"
          mdb__declarative_analyser__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 510 "declarative_analyser.m"
          mdb__declarative_analyser__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 510 "declarative_analyser.m"
          mdb__declarative_analyser__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 510 "declarative_analyser.m"
          mdb__declarative_analyser__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 510 "declarative_analyser.m"
          {
#line 510 "declarative_analyser.m"
            mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 510 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 0) = ((MR_Box) (mdb__declarative_analyser__V_109_109));
#line 510 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 1) = ((MR_Box) (mdb__declarative_analyser__V_110_110));
#line 510 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 2) = ((MR_Box) (mdb__declarative_analyser__V_111_111));
#line 510 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 3) = ((MR_Box) (mdb__declarative_analyser__V_112_112));
#line 510 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 4) = ((MR_Box) (mdb__declarative_analyser__V_113_113));
#line 510 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 5) = ((MR_Box) (mdb__declarative_analyser__V_27_27));
#line 510 "declarative_analyser.m"
          }
#line 524 "declarative_analyser.m"
#line 524 "declarative_analyser.m"
          switch (mdb__declarative_analyser__ShouldAssertInvalid_20) {
#line 524 "declarative_analyser.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 524 "declarative_analyser.m"
            case (MR_Integer) 0:
#line 512 "declarative_analyser.m"
              {
#line 512 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__Mode_23;
#line 512 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__SearchSpace_51;
#line 512 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_150_150;
#line 512 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_151_151;
#line 512 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_152_152;
#line 512 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_153_153;
#line 512 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_154_154;
#line 512 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_155_155;

#line 513 "declarative_analyser.m"
                {
#line 513 "declarative_analyser.m"
                  mdb__declarative_edt__edt_subterm_mode_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, &mdb__declarative_analyser__Mode_23);
                }
#line 516 "declarative_analyser.m"
                mdb__declarative_analyser__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 0)));
#line 516 "declarative_analyser.m"
                mdb__declarative_analyser__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 1)));
#line 516 "declarative_analyser.m"
                mdb__declarative_analyser__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 2)));
#line 516 "declarative_analyser.m"
                mdb__declarative_analyser__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 3)));
#line 516 "declarative_analyser.m"
                mdb__declarative_analyser__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 4)));
#line 516 "declarative_analyser.m"
                mdb__declarative_analyser__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 5)));
#line 518 "declarative_analyser.m"
#line 518 "declarative_analyser.m"
                switch (mdb__declarative_analyser__Mode_23) {
#line 518 "declarative_analyser.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 518 "declarative_analyser.m"
                  case (MR_Integer) 0:
#line 515 "declarative_analyser.m"
                    {
#line 515 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_147_147;

#line 516 "declarative_analyser.m"
                      {
#line 516 "declarative_analyser.m"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_147_147);
                      }
#line 516 "declarative_analyser.m"
                      {
#line 516 "declarative_analyser.m"
                        mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(mdb__declarative_analyser__TypeInfo_147_147, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_155_155, &mdb__declarative_analyser__SearchSpace_51);
                      }
#line 515 "declarative_analyser.m"
                    }
#line 518 "declarative_analyser.m"
                    break;
#line 518 "declarative_analyser.m"
                  case (MR_Integer) 1:
#line 519 "declarative_analyser.m"
                    {
#line 519 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_149_149;

#line 520 "declarative_analyser.m"
                      {
#line 520 "declarative_analyser.m"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_149_149);
                      }
#line 520 "declarative_analyser.m"
                      {
#line 520 "declarative_analyser.m"
                        mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(mdb__declarative_analyser__TypeInfo_149_149, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_155_155, &mdb__declarative_analyser__SearchSpace_51);
                      }
#line 519 "declarative_analyser.m"
                    }
#line 518 "declarative_analyser.m"
                    break;
#line 518 "declarative_analyser.m"
                }
#line 523 "declarative_analyser.m"
                {
#line 523 "declarative_analyser.m"
                  mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 523 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_51));
#line 523 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 1) = ((MR_Box) (mdb__declarative_analyser__V_154_154));
#line 523 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 2) = ((MR_Box) (mdb__declarative_analyser__V_153_153));
#line 523 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 3) = ((MR_Box) (mdb__declarative_analyser__V_152_152));
#line 523 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 4) = ((MR_Box) (mdb__declarative_analyser__V_151_151));
#line 523 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 5) = ((MR_Box) (mdb__declarative_analyser__V_150_150));
#line 523 "declarative_analyser.m"
                }
#line 512 "declarative_analyser.m"
              }
#line 524 "declarative_analyser.m"
              break;
#line 524 "declarative_analyser.m"
            case (MR_Integer) 1:
#line 525 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26;
#line 524 "declarative_analyser.m"
              break;
#line 524 "declarative_analyser.m"
          }
#line 528 "declarative_analyser.m"
          {
#line 528 "declarative_analyser.m"
            mdb__declarative_analyser__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 528 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_8));
#line 528 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_17));
#line 528 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_18));
#line 528 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 528 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_19));
#line 528 "declarative_analyser.m"
          }
#line 527 "declarative_analyser.m"
          mdb__declarative_analyser__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 0)));
#line 527 "declarative_analyser.m"
          mdb__declarative_analyser__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 1)));
#line 527 "declarative_analyser.m"
          mdb__declarative_analyser__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 2)));
#line 527 "declarative_analyser.m"
          mdb__declarative_analyser__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 3)));
#line 527 "declarative_analyser.m"
          mdb__declarative_analyser__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 4)));
#line 527 "declarative_analyser.m"
          mdb__declarative_analyser__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 5)));
#line 527 "declarative_analyser.m"
          {
#line 527 "declarative_analyser.m"
            MR_Word base;
#line 527 "declarative_analyser.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 527 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 527 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_131_131));
#line 527 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_132_132));
#line 527 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_32_32));
#line 527 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_134_134));
#line 527 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_135_135));
#line 527 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_136_136));
#line 527 "declarative_analyser.m"
          }
#line 502 "declarative_analyser.m"
        }
#line 477 "declarative_analyser.m"
        break;
#line 477 "declarative_analyser.m"
      case (MR_Integer) 2:
#line 481 "declarative_analyser.m"
        {
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__SearchSpace_47;
#line 482 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 482 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 482 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 482 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 482 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 484 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_71_71;
#line 484 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_72_72;
#line 484 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_73_73;
#line 484 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_74_74;
#line 484 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_75_75;
#line 484 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_70_70;

#line 482 "declarative_analyser.m"
          {
#line 482 "declarative_analyser.m"
            mdb__declarative_edt__ignore_suspect_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_43_43, &mdb__declarative_analyser__SearchSpace_47);
          }
#line 484 "declarative_analyser.m"
          mdb__declarative_analyser__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 484 "declarative_analyser.m"
          mdb__declarative_analyser__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 484 "declarative_analyser.m"
          mdb__declarative_analyser__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 484 "declarative_analyser.m"
          mdb__declarative_analyser__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 484 "declarative_analyser.m"
          mdb__declarative_analyser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 484 "declarative_analyser.m"
          mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 484 "declarative_analyser.m"
          {
#line 484 "declarative_analyser.m"
            MR_Word base;
#line 484 "declarative_analyser.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 484 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 484 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_47));
#line 484 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_71_71));
#line 484 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_72_72));
#line 484 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_73_73));
#line 484 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_74_74));
#line 484 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_75_75));
#line 484 "declarative_analyser.m"
          }
#line 481 "declarative_analyser.m"
        }
#line 477 "declarative_analyser.m"
        break;
#line 477 "declarative_analyser.m"
      case (MR_Integer) 3:
#line 477 "declarative_analyser.m"
        {
#line 477 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TypeInfo_139_139;
#line 477 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__SearchSpace_11;
#line 477 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 478 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 478 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 478 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 478 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 478 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 479 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_60_60;
#line 479 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_61_61;
#line 479 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_62_62;
#line 479 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_63_63;
#line 479 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_64_64;
#line 479 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_59_59;

#line 478 "declarative_analyser.m"
          {
#line 478 "declarative_analyser.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_139_139);
          }
#line 478 "declarative_analyser.m"
          {
#line 478 "declarative_analyser.m"
            mdb__declarative_edt__skip_suspect_3_p_0(mdb__declarative_analyser__TypeInfo_139_139, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_45_45, &mdb__declarative_analyser__SearchSpace_11);
          }
#line 479 "declarative_analyser.m"
          mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 479 "declarative_analyser.m"
          mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 479 "declarative_analyser.m"
          mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 479 "declarative_analyser.m"
          mdb__declarative_analyser__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 479 "declarative_analyser.m"
          mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 479 "declarative_analyser.m"
          mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 479 "declarative_analyser.m"
          {
#line 479 "declarative_analyser.m"
            MR_Word base;
#line 479 "declarative_analyser.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 479 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 479 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_11));
#line 479 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_60_60));
#line 479 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_61_61));
#line 479 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_62_62));
#line 479 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_63_63));
#line 479 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_64_64));
#line 479 "declarative_analyser.m"
          }
#line 477 "declarative_analyser.m"
        }
#line 477 "declarative_analyser.m"
        break;
#line 477 "declarative_analyser.m"
    }
#line 477 "declarative_analyser.m"
  }
#line 472 "declarative_analyser.m"
}

#line 414 "declarative_analyser.m"
static MR_Word MR_CALL 
mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(
#line 414 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1)
#line 414 "declarative_analyser.m"
{
#line 417 "declarative_analyser.m"
  {
#line 417 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 417 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__HeadVar__2_2;

#line 417 "declarative_analyser.m"
#line 417 "declarative_analyser.m"
    switch (MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) {
#line 417 "declarative_analyser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 417 "declarative_analyser.m"
      case (MR_Integer) 0:
#line 419 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "declarative_analyser.m"
        break;
#line 417 "declarative_analyser.m"
      case (MR_Integer) 1:
#line 422 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "declarative_analyser.m"
        break;
#line 417 "declarative_analyser.m"
      case (MR_Integer) 2:
#line 420 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 417 "declarative_analyser.m"
        break;
#line 417 "declarative_analyser.m"
      case (MR_Integer) 3:
#line 417 "declarative_analyser.m"
        {
#line 417 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__Weighting_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));

#line 418 "declarative_analyser.m"
          {
#line 418 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 418 "declarative_analyser.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 418 "declarative_analyser.m"
          }
#line 417 "declarative_analyser.m"
        }
#line 417 "declarative_analyser.m"
        break;
#line 417 "declarative_analyser.m"
    }
#line 417 "declarative_analyser.m"
    return mdb__declarative_analyser__HeadVar__2_2;
#line 417 "declarative_analyser.m"
  }
#line 414 "declarative_analyser.m"
}

#line 135 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__debug_analyser_state_2_p_0(
#line 135 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_9,
#line 135 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Analyser_3,
#line 135 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__2_2)
#line 135 "declarative_analyser.m"
{
#line 367 "declarative_analyser.m"
  {
#line 367 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 367 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 0)));
#line 367 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 1)));
#line 367 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 2)));
#line 367 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 3)));
#line 367 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 4)));

#line 367 "declarative_analyser.m"
    *mdb__declarative_analyser__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 5)));
#line 367 "declarative_analyser.m"
  }
#line 135 "declarative_analyser.m"
}

#line 129 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__revise_analysis_4_p_0(
#line 129 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59,
#line 129 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_5,
#line 129 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_6,
#line 129 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13,
#line 129 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_14)
#line 129 "declarative_analyser.m"
{
#line 532 "declarative_analyser.m"
  {
#line 532 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 532 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__SearchSpace_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 533 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 533 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 533 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 533 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 533 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 534 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__RootId_9;
#line 534 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_61_61;

#line 534 "declarative_analyser.m"
    {
#line 534 "declarative_analyser.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_61_61);
    }
#line 534 "declarative_analyser.m"
    {
#line 534 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_61_61, mdb__declarative_analyser__SearchSpace_8, &mdb__declarative_analyser__RootId_9);
    }
#line 534 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 535 "declarative_analyser.m"
      {
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_63_63;
#line 535 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__Node_10;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__Question_11;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__SearchSpace1_12;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_15_15;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_18_18;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_19_19;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_37_37;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_39_39;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_41_41;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_42_42;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_43_43;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_45_45;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_47_47;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_31_31;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_32_32;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_33_33;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_34_34;
#line 535 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_35_35;
#line 114 "mdb.declarative_edt.int"
        void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 114 "mdb.declarative_edt.int"
        MR_Box mdb__declarative_analyser__conv1_Question_11;
#line 539 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_36_36;
#line 539 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_38_38;
#line 539 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_40_40;

#line 535 "declarative_analyser.m"
        {
#line 535 "declarative_analyser.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_63_63);
        }
#line 535 "declarative_analyser.m"
        mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 535 "declarative_analyser.m"
        mdb__declarative_analyser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 535 "declarative_analyser.m"
        mdb__declarative_analyser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 535 "declarative_analyser.m"
        mdb__declarative_analyser__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 535 "declarative_analyser.m"
        mdb__declarative_analyser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 535 "declarative_analyser.m"
        mdb__declarative_analyser__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 535 "declarative_analyser.m"
        {
#line 535 "declarative_analyser.m"
          mdb__declarative_analyser__Node_10 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_63_63, mdb__declarative_analyser__V_15_15, mdb__declarative_analyser__RootId_9);
        }
#line 114 "mdb.declarative_edt.int"
        mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 0)), (MR_Integer) 5)));
#line 114 "mdb.declarative_edt.int"
        {
#line 114 "mdb.declarative_edt.int"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59), mdb__declarative_analyser__Store_5, mdb__declarative_analyser__Node_10, &mdb__declarative_analyser__conv1_Question_11);
        }
#line 114 "mdb.declarative_edt.int"
        mdb__declarative_analyser__Question_11 = ((MR_Word) mdb__declarative_analyser__conv1_Question_11);
#line 537 "declarative_analyser.m"
        {
#line 537 "declarative_analyser.m"
          MR_Word base;
#line 537 "declarative_analyser.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 537 "declarative_analyser.m"
          *mdb__declarative_analyser__Response_6 = base;
#line 537 "declarative_analyser.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 537 "declarative_analyser.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__Question_11));
#line 537 "declarative_analyser.m"
        }
#line 538 "declarative_analyser.m"
        {
#line 538 "declarative_analyser.m"
          mdb__declarative_edt__revise_root_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, mdb__declarative_analyser__Store_5, mdb__declarative_analyser__SearchSpace_8, &mdb__declarative_analyser__SearchSpace1_12);
        }
#line 539 "declarative_analyser.m"
        mdb__declarative_analyser__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 539 "declarative_analyser.m"
        mdb__declarative_analyser__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 539 "declarative_analyser.m"
        mdb__declarative_analyser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 539 "declarative_analyser.m"
        mdb__declarative_analyser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 539 "declarative_analyser.m"
        mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 539 "declarative_analyser.m"
        mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 541 "declarative_analyser.m"
        {
#line 541 "declarative_analyser.m"
          mdb__declarative_analyser__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 541 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_19_19, 0) = ((MR_Box) (mdb__declarative_analyser__RootId_9));
#line 541 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 541 "declarative_analyser.m"
        }
#line 541 "declarative_analyser.m"
        {
#line 541 "declarative_analyser.m"
          mdb__declarative_analyser__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 541 "declarative_analyser.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_18_18, 0) = ((MR_Box) (mdb__declarative_analyser__V_19_19));
#line 541 "declarative_analyser.m"
        }
#line 540 "declarative_analyser.m"
        mdb__declarative_analyser__V_42_42 = mdb__declarative_analyser__SearchSpace1_12;
#line 540 "declarative_analyser.m"
        mdb__declarative_analyser__V_43_43 = mdb__declarative_analyser__V_37_37;
#line 540 "declarative_analyser.m"
        mdb__declarative_analyser__V_45_45 = mdb__declarative_analyser__V_39_39;
#line 540 "declarative_analyser.m"
        mdb__declarative_analyser__V_47_47 = mdb__declarative_analyser__V_41_41;
#line 542 "declarative_analyser.m"
        {
#line 542 "declarative_analyser.m"
          MR_Word base;
#line 542 "declarative_analyser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 542 "declarative_analyser.m"
          *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14 = base;
#line 542 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_42_42));
#line 542 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_43_43));
#line 542 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 542 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 542 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_18_18));
#line 542 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 542 "declarative_analyser.m"
        }
#line 535 "declarative_analyser.m"
      }
#line 534 "declarative_analyser.m"
    else
#line 547 "declarative_analyser.m"
      {
#line 547 "declarative_analyser.m"
        {
#line 547 "declarative_analyser.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[14])));
#line 547 "declarative_analyser.m"
          return;
        }
#line 547 "declarative_analyser.m"
      }
#line 532 "declarative_analyser.m"
  }
#line 129 "declarative_analyser.m"
}

#line 123 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__show_info_5_p_0(
#line 123 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135,
#line 123 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 123 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__OutStream_7,
#line 123 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Analyser_8)
#line 123 "declarative_analyser.m"
{
#line 1277 "declarative_analyser.m"
  {
#line 1277 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeCtorInfo_140_140;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_142_142;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__SearchSpace_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 0)));
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__Reason_14;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__MaybeWeighting_21;
#line 1277 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__InfoMessage_26;
#line 1277 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__ReasonStr_27;
#line 1277 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__ReasonSent_28;
#line 1277 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__WrappedReason_29;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_63_63;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_69_69;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_70_70;
#line 1277 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__V_71_71;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_72_72;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_91_91;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_95_95;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_96_96;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_97_97;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_98_98;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 4)));
#line 1277 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__V_153_153;
#line 1277 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_159_159;
#line 1277 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__V_163_163;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 1)));
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 2)));
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 3)));
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 5)));
#line 1312 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_125_125;
#line 1312 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_126_126;
#line 1312 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_127_127;
#line 1312 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_128_128;
#line 1312 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_129_129;
#line 1315 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_74_74;

#line 1306 "declarative_analyser.m"
    if ((mdb__declarative_analyser__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1307 "declarative_analyser.m"
      {
#line 1308 "declarative_analyser.m"
        {
#line 1308 "declarative_analyser.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[9])));
#line 1308 "declarative_analyser.m"
          return;
        }
#line 1307 "declarative_analyser.m"
      }
#line 1306 "declarative_analyser.m"
    else
#line 1286 "declarative_analyser.m"
      {
#line 1286 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__LastId_13;
#line 1286 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_113_113, (MR_Integer) 0)));
#line 1287 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__FileName_15;
#line 1287 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__LineNo_16;
#line 1287 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__MaybeReturnContext_17;
#line 1288 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_137_137;
#line 1288 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__V_40_40;
#line 1288 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_41_41;

#line 1286 "declarative_analyser.m"
        mdb__declarative_analyser__LastId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_39_39, (MR_Integer) 0)));
#line 1286 "declarative_analyser.m"
        mdb__declarative_analyser__Reason_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_39_39, (MR_Integer) 1)));
#line 1288 "declarative_analyser.m"
        {
#line 1288 "declarative_analyser.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_137_137);
        }
#line 1288 "declarative_analyser.m"
        {
#line 1288 "declarative_analyser.m"
          mdb__declarative_analyser__V_40_40 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_137_137, mdb__declarative_analyser__SearchSpace_10, mdb__declarative_analyser__LastId_13);
        }
#line 1288 "declarative_analyser.m"
        {
#line 1288 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__edt_context_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__V_40_40, &mdb__declarative_analyser__V_41_41, &mdb__declarative_analyser__MaybeReturnContext_17);
        }
#line 1288 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1288 "declarative_analyser.m"
          {
#line 1289 "declarative_analyser.m"
            mdb__declarative_analyser__FileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_41_41, (MR_Integer) 0)));
#line 1289 "declarative_analyser.m"
            mdb__declarative_analyser__LineNo_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_41_41, (MR_Integer) 1)));
#line 1289 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = MR_TRUE;
#line 1288 "declarative_analyser.m"
          }
#line 1287 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1299 "declarative_analyser.m"
          {
#line 1299 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeCtorInfo_138_138;
#line 1299 "declarative_analyser.m"
            MR_String mdb__declarative_analyser__ContextStr_20;
#line 1299 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_62_62;

#line 1296 "declarative_analyser.m"
            if ((mdb__declarative_analyser__MaybeReturnContext_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1297 "declarative_analyser.m"
              {
#line 1297 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_42_42;
#line 1297 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_44_44;

#line 1298 "declarative_analyser.m"
                {
#line 1298 "declarative_analyser.m"
                  mdb__declarative_analyser__V_44_44 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__LineNo_16);
                }
#line 1298 "declarative_analyser.m"
                {
#line 1298 "declarative_analyser.m"
                  mdb__declarative_analyser__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__V_44_44);
                }
#line 1298 "declarative_analyser.m"
                {
#line 1298 "declarative_analyser.m"
                  mdb__declarative_analyser__ContextStr_20 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__FileName_15, mdb__declarative_analyser__V_42_42);
                }
#line 1297 "declarative_analyser.m"
              }
#line 1296 "declarative_analyser.m"
            else
#line 1292 "declarative_analyser.m"
              {
#line 1292 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__ReturnFileName_18;
#line 1292 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__ReturnLineNo_19;
#line 1292 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeReturnContext_17, (MR_Integer) 0)));
#line 1292 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_46_46;
#line 1292 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_48_48;
#line 1292 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_49_49;
#line 1292 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_50_50;
#line 1292 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_52_52;
#line 1292 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_53_53;
#line 1292 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_55_55;
#line 1292 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_56_56;

#line 1292 "declarative_analyser.m"
                mdb__declarative_analyser__ReturnFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_45_45, (MR_Integer) 0)));
#line 1292 "declarative_analyser.m"
                mdb__declarative_analyser__ReturnLineNo_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_45_45, (MR_Integer) 1)));
#line 1293 "declarative_analyser.m"
                {
#line 1293 "declarative_analyser.m"
                  mdb__declarative_analyser__V_49_49 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__LineNo_16);
                }
#line 1295 "declarative_analyser.m"
                {
#line 1295 "declarative_analyser.m"
                  mdb__declarative_analyser__V_56_56 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__ReturnLineNo_19);
                }
#line 1295 "declarative_analyser.m"
                {
#line 1295 "declarative_analyser.m"
                  mdb__declarative_analyser__V_55_55 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__V_56_56, (MR_String) ")");
                }
#line 1295 "declarative_analyser.m"
                {
#line 1295 "declarative_analyser.m"
                  mdb__declarative_analyser__V_53_53 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__V_55_55);
                }
#line 1294 "declarative_analyser.m"
                {
#line 1294 "declarative_analyser.m"
                  mdb__declarative_analyser__V_52_52 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__ReturnFileName_18, mdb__declarative_analyser__V_53_53);
                }
#line 1294 "declarative_analyser.m"
                {
#line 1294 "declarative_analyser.m"
                  mdb__declarative_analyser__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) " (", mdb__declarative_analyser__V_52_52);
                }
#line 1294 "declarative_analyser.m"
                {
#line 1294 "declarative_analyser.m"
                  mdb__declarative_analyser__V_48_48 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__V_49_49, mdb__declarative_analyser__V_50_50);
                }
#line 1293 "declarative_analyser.m"
                {
#line 1293 "declarative_analyser.m"
                  mdb__declarative_analyser__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__V_48_48);
                }
#line 1293 "declarative_analyser.m"
                {
#line 1293 "declarative_analyser.m"
                  mdb__declarative_analyser__ContextStr_20 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__FileName_15, mdb__declarative_analyser__V_46_46);
                }
#line 1292 "declarative_analyser.m"
              }
#line 12766 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__TypeCtorInfo_138_138 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1300 "declarative_analyser.m"
            {
#line 1300 "declarative_analyser.m"
              mercury__list__append_3_p_0(mdb__declarative_analyser__TypeCtorInfo_138_138, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_32_32, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[10]), &mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59);
            }
#line 1302 "declarative_analyser.m"
            {
#line 1302 "declarative_analyser.m"
              mdb__declarative_analyser__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1302 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_62_62, 0) = ((MR_Box) (mdb__declarative_analyser__ContextStr_20));
#line 1302 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1302 "declarative_analyser.m"
            }
#line 1302 "declarative_analyser.m"
            {
#line 1302 "declarative_analyser.m"
              mercury__list__append_3_p_0(mdb__declarative_analyser__TypeCtorInfo_138_138, mdb__declarative_analyser__STATE_VARIABLE_Data_33_33, mdb__declarative_analyser__V_62_62, &mdb__declarative_analyser__STATE_VARIABLE_Data_63_63);
            }
#line 1299 "declarative_analyser.m"
          }
#line 1287 "declarative_analyser.m"
        else
#line 1304 "declarative_analyser.m"
          {
#line 1304 "declarative_analyser.m"
            mdb__declarative_analyser__STATE_VARIABLE_Data_63_63 = mdb__declarative_analyser__STATE_VARIABLE_Data_33_33;
#line 1304 "declarative_analyser.m"
            mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59 = mdb__declarative_analyser__STATE_VARIABLE_FieldNames_32_32;
#line 1304 "declarative_analyser.m"
          }
#line 1286 "declarative_analyser.m"
      }
#line 12802 "mdb.declarative_analyser.c"
    mdb__declarative_analyser__TypeCtorInfo_140_140 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1311 "declarative_analyser.m"
    {
#line 1311 "declarative_analyser.m"
      mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[11]));
    }
#line 1312 "declarative_analyser.m"
    mdb__declarative_analyser__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 0)));
#line 1312 "declarative_analyser.m"
    mdb__declarative_analyser__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 1)));
#line 1312 "declarative_analyser.m"
    mdb__declarative_analyser__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 2)));
#line 1312 "declarative_analyser.m"
    mdb__declarative_analyser__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 3)));
#line 1312 "declarative_analyser.m"
    mdb__declarative_analyser__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 4)));
#line 1312 "declarative_analyser.m"
    mdb__declarative_analyser__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 5)));
#line 1312 "declarative_analyser.m"
    {
#line 1312 "declarative_analyser.m"
      mdb__declarative_analyser__V_71_71 = mdb__declarative_analyser__search_mode_to_string_1_f_0(mdb__declarative_analyser__V_72_72);
    }
#line 1312 "declarative_analyser.m"
    {
#line 1312 "declarative_analyser.m"
      mdb__declarative_analyser__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1312 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_70_70, 0) = ((MR_Box) (mdb__declarative_analyser__V_71_71));
#line 1312 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1312 "declarative_analyser.m"
    }
#line 1312 "declarative_analyser.m"
    {
#line 1312 "declarative_analyser.m"
      mdb__declarative_analyser__STATE_VARIABLE_Data_69_69 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_Data_63_63, mdb__declarative_analyser__V_70_70);
    }
#line 1314 "declarative_analyser.m"
    {
#line 1314 "declarative_analyser.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_142_142);
    }
#line 1314 "declarative_analyser.m"
    {
#line 1314 "declarative_analyser.m"
      mdb__declarative_analyser__MaybeWeighting_21 = mdb__declarative_edt__get_current_maybe_weighting_1_f_0(mdb__declarative_analyser__TypeInfo_142_142, mdb__declarative_analyser__SearchSpace_10);
    }
#line 1315 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeWeighting_21)) == (MR_mktag((MR_Integer) 1)));
#line 1315 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 1315 "declarative_analyser.m"
      {
#line 1315 "declarative_analyser.m"
        mdb__declarative_analyser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeWeighting_21, (MR_Integer) 0)));
#line 1315 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_74_74 == (MR_Integer) 0);
#line 1315 "declarative_analyser.m"
      }
#line 1315 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 1320 "declarative_analyser.m"
      {
#line 1320 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_145_145;
#line 1320 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__StartId_23;
#line 1320 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Weight_24;
#line 1320 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77;
#line 1320 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_83_83;
#line 1320 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_92_92;
#line 1320 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__V_93_93;
#line 1316 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__RootId_22;
#line 1316 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_143_143;
#line 1323 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_75_75;
#line 1323 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_76_76;
#line 1323 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_130_130;
#line 1323 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_131_131;
#line 1323 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_132_132;
#line 1323 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_133_133;
#line 1323 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_134_134;

#line 1316 "declarative_analyser.m"
        {
#line 1316 "declarative_analyser.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_143_143);
        }
#line 1316 "declarative_analyser.m"
        {
#line 1316 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_143_143, mdb__declarative_analyser__SearchSpace_10, &mdb__declarative_analyser__RootId_22);
        }
#line 1316 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1317 "declarative_analyser.m"
          mdb__declarative_analyser__StartId_23 = mdb__declarative_analyser__RootId_22;
#line 1316 "declarative_analyser.m"
        else
#line 1319 "declarative_analyser.m"
          {
#line 1319 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_144_144;

#line 1319 "declarative_analyser.m"
            {
#line 1319 "declarative_analyser.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_144_144);
            }
#line 1319 "declarative_analyser.m"
            {
#line 1319 "declarative_analyser.m"
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_144_144, mdb__declarative_analyser__SearchSpace_10, &mdb__declarative_analyser__StartId_23);
            }
#line 1319 "declarative_analyser.m"
          }
#line 1321 "declarative_analyser.m"
        {
#line 1321 "declarative_analyser.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_145_145);
        }
#line 1321 "declarative_analyser.m"
        {
#line 1321 "declarative_analyser.m"
          mdb__declarative_analyser__Weight_24 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_145_145, mdb__declarative_analyser__SearchSpace_10, mdb__declarative_analyser__StartId_23);
        }
#line 1323 "declarative_analyser.m"
        mdb__declarative_analyser__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 0)));
#line 1323 "declarative_analyser.m"
        mdb__declarative_analyser__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 1)));
#line 1323 "declarative_analyser.m"
        mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 2)));
#line 1323 "declarative_analyser.m"
        mdb__declarative_analyser__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 3)));
#line 1323 "declarative_analyser.m"
        mdb__declarative_analyser__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 4)));
#line 1323 "declarative_analyser.m"
        mdb__declarative_analyser__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 5)));
#line 1324 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__V_75_75)) == (MR_mktag((MR_Integer) 3)));
#line 1324 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1324 "declarative_analyser.m"
          {
#line 1324 "declarative_analyser.m"
            mdb__declarative_analyser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_75_75, (MR_Integer) 0)));
#line 1324 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_76_76 == (MR_Integer) 0);
#line 1324 "declarative_analyser.m"
          }
#line 1322 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1327 "declarative_analyser.m"
          {
#line 1327 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__EstimatedQuestions_25;
#line 1327 "declarative_analyser.m"
            MR_Float mdb__declarative_analyser__V_81_81;
#line 1327 "declarative_analyser.m"
            MR_Float mdb__declarative_analyser__V_82_82;
#line 1327 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_84_84;
#line 1327 "declarative_analyser.m"
            MR_String mdb__declarative_analyser__V_85_85;

#line 1326 "declarative_analyser.m"
            {
#line 1326 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[12]));
            }
#line 1329 "declarative_analyser.m"
            {
#line 1329 "declarative_analyser.m"
              mdb__declarative_analyser__V_82_82 = mercury__float__float_1_f_0(mdb__declarative_analyser__Weight_24);
            }
#line 1329 "declarative_analyser.m"
            {
#line 1329 "declarative_analyser.m"
              mdb__declarative_analyser__V_81_81 = mercury__math__log2_1_f_0(mdb__declarative_analyser__V_82_82);
            }
#line 1328 "declarative_analyser.m"
            {
#line 1328 "declarative_analyser.m"
              mdb__declarative_analyser__EstimatedQuestions_25 = mercury__float__ceiling_to_int_1_f_0(mdb__declarative_analyser__V_81_81);
            }
#line 1330 "declarative_analyser.m"
            {
#line 1330 "declarative_analyser.m"
              mdb__declarative_analyser__V_85_85 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__EstimatedQuestions_25);
            }
#line 1330 "declarative_analyser.m"
            {
#line 1330 "declarative_analyser.m"
              mdb__declarative_analyser__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1330 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_84_84, 0) = ((MR_Box) (mdb__declarative_analyser__V_85_85));
#line 1330 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1330 "declarative_analyser.m"
            }
#line 1330 "declarative_analyser.m"
            {
#line 1330 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Data_83_83 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_Data_69_69, mdb__declarative_analyser__V_84_84);
            }
#line 1327 "declarative_analyser.m"
          }
#line 1322 "declarative_analyser.m"
        else
#line 1332 "declarative_analyser.m"
          {
#line 1332 "declarative_analyser.m"
            mdb__declarative_analyser__STATE_VARIABLE_Data_83_83 = mdb__declarative_analyser__STATE_VARIABLE_Data_69_69;
#line 1332 "declarative_analyser.m"
            mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77 = mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65;
#line 1332 "declarative_analyser.m"
          }
#line 1334 "declarative_analyser.m"
        {
#line 1334 "declarative_analyser.m"
          mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[13]));
        }
#line 1335 "declarative_analyser.m"
        {
#line 1335 "declarative_analyser.m"
          mdb__declarative_analyser__V_93_93 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight_24);
        }
#line 1335 "declarative_analyser.m"
        {
#line 1335 "declarative_analyser.m"
          mdb__declarative_analyser__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1335 "declarative_analyser.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_92_92, 0) = ((MR_Box) (mdb__declarative_analyser__V_93_93));
#line 1335 "declarative_analyser.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1335 "declarative_analyser.m"
        }
#line 1335 "declarative_analyser.m"
        {
#line 1335 "declarative_analyser.m"
          mdb__declarative_analyser__STATE_VARIABLE_Data_91_91 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_Data_83_83, mdb__declarative_analyser__V_92_92);
        }
#line 1320 "declarative_analyser.m"
      }
#line 1315 "declarative_analyser.m"
    else
#line 1337 "declarative_analyser.m"
      {
#line 1337 "declarative_analyser.m"
        mdb__declarative_analyser__STATE_VARIABLE_Data_91_91 = mdb__declarative_analyser__STATE_VARIABLE_Data_69_69;
#line 1337 "declarative_analyser.m"
        mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87 = mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65;
#line 1337 "declarative_analyser.m"
      }
#line 1340 "declarative_analyser.m"
    {
#line 1340 "declarative_analyser.m"
      mdb__declarative_analyser__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_96_96, 0) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87));
#line 1340 "declarative_analyser.m"
    }
#line 1340 "declarative_analyser.m"
    {
#line 1340 "declarative_analyser.m"
      mdb__declarative_analyser__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1340 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_98_98, 0) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_Data_91_91));
#line 1340 "declarative_analyser.m"
    }
#line 1340 "declarative_analyser.m"
    {
#line 1340 "declarative_analyser.m"
      mdb__declarative_analyser__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_97_97, 0) = ((MR_Box) (mdb__declarative_analyser__V_98_98));
#line 1340 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1340 "declarative_analyser.m"
    }
#line 1340 "declarative_analyser.m"
    {
#line 1340 "declarative_analyser.m"
      mdb__declarative_analyser__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1340 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_95_95, 0) = ((MR_Box) (mdb__declarative_analyser__V_96_96));
#line 1340 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_95_95, 1) = ((MR_Box) (mdb__declarative_analyser__V_97_97));
#line 1340 "declarative_analyser.m"
    }
#line 1340 "declarative_analyser.m"
    {
#line 1340 "declarative_analyser.m"
      mdb__declarative_analyser__InfoMessage_26 = mercury__string__format_table_2_f_0(mdb__declarative_analyser__V_95_95, (MR_String) " : ");
    }
#line 1343 "declarative_analyser.m"
    {
#line 1343 "declarative_analyser.m"
      mdb__declarative_analyser__ReasonStr_27 = mdb__declarative_analyser__reason_to_string_1_f_0(mdb__declarative_analyser__Reason_14);
    }
#line 1344 "declarative_analyser.m"
    {
#line 1344 "declarative_analyser.m"
      mdb__declarative_analyser__ReasonSent_28 = mercury__string__f_43_43_2_f_0((MR_String) "The current question was chosen because ", mdb__declarative_analyser__ReasonStr_27);
    }
#line 1345 "declarative_analyser.m"
    {
#line 1345 "declarative_analyser.m"
      mdb__declarative_analyser__WrappedReason_29 = mercury__string__word_wrap_2_f_0(mdb__declarative_analyser__ReasonSent_28, (MR_Integer) 72);
    }
#line 13127 "mdb.declarative_analyser.c"
    mdb__declarative_analyser__V_159_159 = (MR_Word) &mdb__declarative_analyser_scalar_common_3[2];
#line 1346 "declarative_analyser.m"
    {
#line 1346 "declarative_analyser.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdb__declarative_analyser__V_159_159, mdb__declarative_analyser__InfoMessage_26, &mdb__declarative_analyser__V_153_153);
    }
#line 1346 "declarative_analyser.m"
    {
#line 1346 "declarative_analyser.m"
      mercury__io__write_string_4_p_0(mdb__declarative_analyser__OutStream_7, mdb__declarative_analyser__V_153_153);
    }
#line 1346 "declarative_analyser.m"
    {
#line 1346 "declarative_analyser.m"
      mercury__io__write_string_4_p_0(mdb__declarative_analyser__OutStream_7, (MR_String) "\n");
    }
#line 1346 "declarative_analyser.m"
    {
#line 1346 "declarative_analyser.m"
      mercury__string__format__format_string_component_nowidth_noprec_3_p_0(mdb__declarative_analyser__V_159_159, mdb__declarative_analyser__WrappedReason_29, &mdb__declarative_analyser__V_163_163);
    }
#line 1346 "declarative_analyser.m"
    {
#line 1346 "declarative_analyser.m"
      mercury__io__write_string_4_p_0(mdb__declarative_analyser__OutStream_7, mdb__declarative_analyser__V_163_163);
    }
#line 1346 "declarative_analyser.m"
    {
#line 1346 "declarative_analyser.m"
      mercury__io__write_string_4_p_0(mdb__declarative_analyser__OutStream_7, (MR_String) "\n");
    }
#line 1277 "declarative_analyser.m"
  }
#line 123 "declarative_analyser.m"
}

#line 116 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__change_search_mode_6_p_0(
#line 116 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55,
#line 116 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 116 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_8,
#line 116 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__UserMode_9,
#line 116 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15,
#line 116 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_16,
#line 116 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_11)
#line 116 "declarative_analyser.m"
{
#line 444 "declarative_analyser.m"
  {
#line 444 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 444 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32;

#line 448 "declarative_analyser.m"
#line 448 "declarative_analyser.m"
    switch (mdb__declarative_analyser__UserMode_9) {
#line 448 "declarative_analyser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 448 "declarative_analyser.m"
      case (MR_Integer) 3:
#line 457 "declarative_analyser.m"
        {
#line 457 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 4)));
#line 457 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 0)));
#line 459 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 5)));
#line 459 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 3)));
#line 459 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 2)));
#line 459 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 1)));

#line 464 "declarative_analyser.m"
          if ((mdb__declarative_analyser__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 465 "declarative_analyser.m"
            {
#line 466 "declarative_analyser.m"
              {
#line 466 "declarative_analyser.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[7])));
#line 466 "declarative_analyser.m"
                return;
              }
#line 465 "declarative_analyser.m"
            }
#line 464 "declarative_analyser.m"
          else
#line 460 "declarative_analyser.m"
            {
#line 460 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_57_57;
#line 460 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__SuspectId_12;
#line 460 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__SearchMode_14;
#line 460 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_60_60, (MR_Integer) 0)));
#line 460 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__TopId_69;
#line 460 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__BottomId_70;
#line 460 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_13_13;
#line 928 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__RootId_68;
#line 935 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__Path_71;
#line 463 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_44_44;
#line 463 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_45_45;
#line 463 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_47_47;
#line 463 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_48_48;
#line 463 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_49_49;
#line 463 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_46_46;

#line 460 "declarative_analyser.m"
              mdb__declarative_analyser__SuspectId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, (MR_Integer) 0)));
#line 460 "declarative_analyser.m"
              mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, (MR_Integer) 1)));
#line 461 "declarative_analyser.m"
              {
#line 461 "declarative_analyser.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_57_57);
              }
#line 928 "declarative_analyser.m"
              {
#line 928 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__V_64_64, &mdb__declarative_analyser__RootId_68);
              }
#line 928 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 929 "declarative_analyser.m"
                {
#line 929 "declarative_analyser.m"
                  mdb__declarative_analyser__TopId_69 = mdb__declarative_analyser__RootId_68;
#line 930 "declarative_analyser.m"
                  mdb__declarative_analyser__BottomId_70 = mdb__declarative_analyser__SuspectId_12;
#line 929 "declarative_analyser.m"
                }
#line 928 "declarative_analyser.m"
              else
#line 932 "declarative_analyser.m"
                {
#line 932 "declarative_analyser.m"
                  {
#line 932 "declarative_analyser.m"
                    mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__V_64_64, &mdb__declarative_analyser__TopId_69);
                  }
#line 933 "declarative_analyser.m"
                  mdb__declarative_analyser__BottomId_70 = mdb__declarative_analyser__SuspectId_12;
#line 932 "declarative_analyser.m"
                }
#line 935 "declarative_analyser.m"
              {
#line 935 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = mdb__declarative_edt__get_path_4_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__V_64_64, mdb__declarative_analyser__BottomId_70, mdb__declarative_analyser__TopId_69, &mdb__declarative_analyser__Path_71);
              }
#line 935 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 936 "declarative_analyser.m"
                {
#line 936 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeCtorInfo_19_79 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 936 "declarative_analyser.m"
                  MR_ArrayPtr mdb__declarative_analyser__PathArray_72;
#line 936 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__Top_73;
#line 936 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__Bottom_74;
#line 936 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_75_75;
#line 936 "declarative_analyser.m"
                  MR_ArrayPtr mdb__declarative_analyser__conv0_PathArray_72;

#line 936 "declarative_analyser.m"
                  {
#line 936 "declarative_analyser.m"
                    mdb__declarative_analyser__conv0_PathArray_72 = mercury__array__from_list_1_f_0(mdb__declarative_analyser__TypeCtorInfo_19_79, mdb__declarative_analyser__Path_71);
                  }
#line 936 "declarative_analyser.m"
                  mdb__declarative_analyser__PathArray_72 = (MR_ArrayPtr) mdb__declarative_analyser__conv0_PathArray_72;
#line 937 "declarative_analyser.m"
                  {
#line 937 "declarative_analyser.m"
                    mercury__array__bounds_3_p_0(mdb__declarative_analyser__TypeCtorInfo_19_79, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_72, &mdb__declarative_analyser__Top_73, &mdb__declarative_analyser__Bottom_74);
                  }
#line 938 "declarative_analyser.m"
                  {
#line 938 "declarative_analyser.m"
                    mdb__declarative_analyser__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 938 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_75_75, 0) = ((MR_Box) (mdb__declarative_analyser__Top_73));
#line 938 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_75_75, 1) = ((MR_Box) (mdb__declarative_analyser__Bottom_74));
#line 938 "declarative_analyser.m"
                  }
#line 938 "declarative_analyser.m"
                  {
#line 938 "declarative_analyser.m"
                    mdb__declarative_analyser__SearchMode_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 938 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 0) = ((MR_Box) (mdb__declarative_analyser__PathArray_72));
#line 938 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 1) = ((MR_Box) (mdb__declarative_analyser__V_75_75));
#line 938 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 2) = ((MR_Box) (mdb__declarative_analyser__Bottom_74));
#line 938 "declarative_analyser.m"
                  }
#line 936 "declarative_analyser.m"
                }
#line 935 "declarative_analyser.m"
              else
#line 940 "declarative_analyser.m"
                {
#line 940 "declarative_analyser.m"
                  {
#line 940 "declarative_analyser.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[8])));
#line 940 "declarative_analyser.m"
                    return;
                  }
#line 940 "declarative_analyser.m"
                }
#line 463 "declarative_analyser.m"
              mdb__declarative_analyser__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 0)));
#line 463 "declarative_analyser.m"
              mdb__declarative_analyser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 1)));
#line 463 "declarative_analyser.m"
              mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 2)));
#line 463 "declarative_analyser.m"
              mdb__declarative_analyser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 3)));
#line 463 "declarative_analyser.m"
              mdb__declarative_analyser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 4)));
#line 463 "declarative_analyser.m"
              mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 5)));
#line 463 "declarative_analyser.m"
              {
#line 463 "declarative_analyser.m"
                mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 463 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 0) = ((MR_Box) (mdb__declarative_analyser__V_44_44));
#line 463 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 463 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 2) = ((MR_Box) (mdb__declarative_analyser__SearchMode_14));
#line 463 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 3) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 463 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 4) = ((MR_Box) (mdb__declarative_analyser__V_48_48));
#line 463 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 5) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 463 "declarative_analyser.m"
              }
#line 460 "declarative_analyser.m"
            }
#line 457 "declarative_analyser.m"
        }
#line 448 "declarative_analyser.m"
        break;
#line 448 "declarative_analyser.m"
      case (MR_Integer) 1:
#line 449 "declarative_analyser.m"
        {
#line 450 "declarative_analyser.m"
          {
#line 450 "declarative_analyser.m"
            mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_3[0]), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
          }
#line 449 "declarative_analyser.m"
        }
#line 448 "declarative_analyser.m"
        break;
#line 448 "declarative_analyser.m"
      case (MR_Integer) 2:
#line 453 "declarative_analyser.m"
        {
#line 454 "declarative_analyser.m"
          {
#line 454 "declarative_analyser.m"
            mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_3[1]), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
          }
#line 453 "declarative_analyser.m"
        }
#line 448 "declarative_analyser.m"
        break;
#line 448 "declarative_analyser.m"
      case (MR_Integer) 0:
#line 446 "declarative_analyser.m"
        {
#line 447 "declarative_analyser.m"
          {
#line 447 "declarative_analyser.m"
            mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
          }
#line 446 "declarative_analyser.m"
        }
#line 448 "declarative_analyser.m"
        break;
#line 448 "declarative_analyser.m"
    }
#line 470 "declarative_analyser.m"
    {
#line 470 "declarative_analyser.m"
      mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_11, mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, mdb__declarative_analyser__STATE_VARIABLE_Analyser_16);
    }
#line 444 "declarative_analyser.m"
  }
#line 116 "declarative_analyser.m"
}

#line 109 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__continue_analysis_6_p_0(
#line 109 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_34,
#line 109 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 109 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_8,
#line 109 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Answer_9,
#line 109 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_10,
#line 109 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14,
#line 109 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_15)
#line 109 "declarative_analyser.m"
{
#line 432 "declarative_analyser.m"
  {
#line 432 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 432 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22;
#line 432 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 4)));
#line 434 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 5)));
#line 434 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 3)));
#line 434 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 2)));
#line 434 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 1)));
#line 434 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 0)));

#line 437 "declarative_analyser.m"
    if ((mdb__declarative_analyser__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 438 "declarative_analyser.m"
      {
#line 439 "declarative_analyser.m"
        {
#line 439 "declarative_analyser.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[6])));
#line 439 "declarative_analyser.m"
          return;
        }
#line 438 "declarative_analyser.m"
      }
#line 437 "declarative_analyser.m"
    else
#line 435 "declarative_analyser.m"
      {
#line 435 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__SuspectId_12;
#line 435 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_37_37, (MR_Integer) 0)));
#line 435 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_13_13;

#line 435 "declarative_analyser.m"
        mdb__declarative_analyser__SuspectId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_21_21, (MR_Integer) 0)));
#line 435 "declarative_analyser.m"
        mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_21_21, (MR_Integer) 1)));
#line 436 "declarative_analyser.m"
        {
#line 436 "declarative_analyser.m"
          mdb__declarative_analyser__process_answer_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_34, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Answer_9, mdb__declarative_analyser__SuspectId_12, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22);
        }
#line 435 "declarative_analyser.m"
      }
#line 442 "declarative_analyser.m"
    {
#line 442 "declarative_analyser.m"
      mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_34, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_15);
    }
#line 432 "declarative_analyser.m"
  }
#line 109 "declarative_analyser.m"
}

#line 104 "declarative_analyser.m"
MR_bool MR_CALL 
mdb__declarative_analyser__reask_last_question_3_p_0(
#line 104 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 104 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_4,
#line 104 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Analyser_5,
#line 104 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_6)
#line 104 "declarative_analyser.m"
{
#line 424 "declarative_analyser.m"
  {
#line 424 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 424 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_26_26;
#line 424 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__MaybeLastQuestion_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 4)));
#line 424 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__SuspectId_8;
#line 424 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__SearchSpace_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 0)));
#line 424 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__Node_11;
#line 424 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__OracleQuestion_12;
#line 424 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_13_13;
#line 424 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__PolyConst2_25;
#line 425 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 1)));
#line 425 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 2)));
#line 425 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 3)));
#line 425 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 5)));
#line 426 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_9_9;
#line 114 "mdb.declarative_edt.int"
    void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 114 "mdb.declarative_edt.int"
    MR_Box mdb__declarative_analyser__conv1_OracleQuestion_12;

#line 426 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastQuestion_7)) == (MR_mktag((MR_Integer) 1)));
#line 426 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 426 "declarative_analyser.m"
      {
#line 426 "declarative_analyser.m"
        mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastQuestion_7, (MR_Integer) 0)));
#line 426 "declarative_analyser.m"
        mdb__declarative_analyser__SuspectId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_13_13, (MR_Integer) 0)));
#line 426 "declarative_analyser.m"
        mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_13_13, (MR_Integer) 1)));
#line 13598 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__PolyConst2_25 = (MR_Integer) 2;
#line 428 "declarative_analyser.m"
        {
#line 428 "declarative_analyser.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, mdb__declarative_analyser__PolyConst2_25, &mdb__declarative_analyser__TypeInfo_26_26);
        }
#line 428 "declarative_analyser.m"
        {
#line 428 "declarative_analyser.m"
          mdb__declarative_analyser__Node_11 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_26_26, mdb__declarative_analyser__SearchSpace_10, mdb__declarative_analyser__SuspectId_8);
        }
#line 114 "mdb.declarative_edt.int"
        mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 114 "mdb.declarative_edt.int"
        {
#line 114 "mdb.declarative_edt.int"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_4, mdb__declarative_analyser__Node_11, &mdb__declarative_analyser__conv1_OracleQuestion_12);
        }
#line 114 "mdb.declarative_edt.int"
        mdb__declarative_analyser__OracleQuestion_12 = ((MR_Word) mdb__declarative_analyser__conv1_OracleQuestion_12);
#line 430 "declarative_analyser.m"
        {
#line 430 "declarative_analyser.m"
          MR_Word base;
#line 430 "declarative_analyser.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 430 "declarative_analyser.m"
          *mdb__declarative_analyser__Response_6 = base;
#line 430 "declarative_analyser.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_12));
#line 430 "declarative_analyser.m"
        }
#line 430 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = MR_TRUE;
#line 426 "declarative_analyser.m"
      }
#line 424 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 424 "declarative_analyser.m"
  }
#line 104 "declarative_analyser.m"
}

#line 98 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__start_or_resume_analysis_6_p_0(
#line 98 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76,
#line 98 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 98 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_8,
#line 98 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__AnalysisType_9,
#line 98 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_10,
#line 98 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22,
#line 98 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_23)
#line 98 "declarative_analyser.m"
{
#line 371 "declarative_analyser.m"
  {
#line 371 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 371 "declarative_analyser.m"
    if ((mdb__declarative_analyser__AnalysisType_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 407 "declarative_analyser.m"
      {
#line 407 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__Response0_21;

#line 407 "declarative_analyser.m"
        {
#line 407 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, &mdb__declarative_analyser__Response0_21);
        }
#line 407 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 408 "declarative_analyser.m"
          {
#line 408 "declarative_analyser.m"
            *mdb__declarative_analyser__Response_10 = mdb__declarative_analyser__Response0_21;
#line 408 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_23 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22;
#line 408 "declarative_analyser.m"
          }
#line 407 "declarative_analyser.m"
        else
#line 410 "declarative_analyser.m"
          {
#line 410 "declarative_analyser.m"
            mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_23);
          }
#line 407 "declarative_analyser.m"
      }
#line 371 "declarative_analyser.m"
    else
#line 371 "declarative_analyser.m"
      {
#line 371 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__Node_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__AnalysisType_9, (MR_Integer) 0));
#line 371 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__MaybeRequireExplicit_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 1)));
#line 371 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 0)));
#line 371 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 2)));
#line 371 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 3)));
#line 371 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 4)));
#line 371 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 5)));

#line 388 "declarative_analyser.m"
        if ((mdb__declarative_analyser__MaybeRequireExplicit_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 389 "declarative_analyser.m"
          {
#line 389 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_80_80;
#line 389 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_81_81;
#line 389 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__MaybeWeighting_18;
#line 389 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__TopMostId_19;
#line 389 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__Question_20;
#line 389 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25;
#line 389 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27;
#line 389 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_29_29;
#line 389 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_30_30;
#line 389 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__SearchSpace_36;
#line 389 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__FallBack_85;
#line 389 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_87_87;
#line 346 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_92_92;
#line 346 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_93_93;
#line 346 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_94_94;
#line 346 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_95_95;
#line 346 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_96_96;
#line 398 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_65_65;
#line 398 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_66_66;
#line 398 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_67_67;
#line 398 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_68_68;
#line 398 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_69_69;
#line 398 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_64_64;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_70_70;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_71_71;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_72_72;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_73_73;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_75_75;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_74_74;
#line 114 "mdb.declarative_edt.int"
            void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 114 "mdb.declarative_edt.int"
            MR_Box mdb__declarative_analyser__conv1_Question_20;

#line 394 "declarative_analyser.m"
            {
#line 394 "declarative_analyser.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
            }
#line 346 "declarative_analyser.m"
            mdb__declarative_analyser__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 0)));
#line 346 "declarative_analyser.m"
            mdb__declarative_analyser__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 1)));
#line 346 "declarative_analyser.m"
            mdb__declarative_analyser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 2)));
#line 346 "declarative_analyser.m"
            mdb__declarative_analyser__FallBack_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 3)));
#line 346 "declarative_analyser.m"
            mdb__declarative_analyser__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 4)));
#line 346 "declarative_analyser.m"
            mdb__declarative_analyser__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 5)));
#line 347 "declarative_analyser.m"
            {
#line 347 "declarative_analyser.m"
              mdb__declarative_analyser__V_87_87 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_80_80);
            }
#line 347 "declarative_analyser.m"
            {
#line 347 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 347 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 0) = ((MR_Box) (mdb__declarative_analyser__V_87_87));
#line 347 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 2) = ((MR_Box) (mdb__declarative_analyser__FallBack_85));
#line 347 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 3) = ((MR_Box) (mdb__declarative_analyser__FallBack_85));
#line 347 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "declarative_analyser.m"
            }
#line 395 "declarative_analyser.m"
            {
#line 395 "declarative_analyser.m"
              mdb__declarative_analyser__MaybeWeighting_18 = mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(mdb__declarative_analyser__FallBack_85);
            }
#line 397 "declarative_analyser.m"
            {
#line 397 "declarative_analyser.m"
              mdb__declarative_edt__initialise_search_space_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__MaybeWeighting_18, mdb__declarative_analyser__Node_12, &mdb__declarative_analyser__SearchSpace_36);
            }
#line 398 "declarative_analyser.m"
            mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 0)));
#line 398 "declarative_analyser.m"
            mdb__declarative_analyser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 1)));
#line 398 "declarative_analyser.m"
            mdb__declarative_analyser__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 2)));
#line 398 "declarative_analyser.m"
            mdb__declarative_analyser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 3)));
#line 398 "declarative_analyser.m"
            mdb__declarative_analyser__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 4)));
#line 398 "declarative_analyser.m"
            mdb__declarative_analyser__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 5)));
#line 398 "declarative_analyser.m"
            {
#line 398 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 398 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_36));
#line 398 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 1) = ((MR_Box) (mdb__declarative_analyser__V_65_65));
#line 398 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 2) = ((MR_Box) (mdb__declarative_analyser__V_66_66));
#line 398 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 3) = ((MR_Box) (mdb__declarative_analyser__V_67_67));
#line 398 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 4) = ((MR_Box) (mdb__declarative_analyser__V_68_68));
#line 398 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 5) = ((MR_Box) (mdb__declarative_analyser__V_69_69));
#line 398 "declarative_analyser.m"
            }
#line 399 "declarative_analyser.m"
            {
#line 399 "declarative_analyser.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_81_81);
            }
#line 399 "declarative_analyser.m"
            {
#line 399 "declarative_analyser.m"
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_81_81, mdb__declarative_analyser__SearchSpace_36, &mdb__declarative_analyser__TopMostId_19);
            }
#line 401 "declarative_analyser.m"
            {
#line 401 "declarative_analyser.m"
              mdb__declarative_analyser__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 401 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 0) = ((MR_Box) (mdb__declarative_analyser__TopMostId_19));
#line 401 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 401 "declarative_analyser.m"
            }
#line 401 "declarative_analyser.m"
            {
#line 401 "declarative_analyser.m"
              mdb__declarative_analyser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 401 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_29_29, 0) = ((MR_Box) (mdb__declarative_analyser__V_30_30));
#line 401 "declarative_analyser.m"
            }
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 0)));
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 1)));
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 2)));
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 3)));
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 4)));
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 5)));
#line 400 "declarative_analyser.m"
            {
#line 400 "declarative_analyser.m"
              MR_Word base;
#line 400 "declarative_analyser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 400 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_Analyser_23 = base;
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_70_70));
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_71_71));
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_72_72));
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_73_73));
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_29_29));
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_75_75));
#line 400 "declarative_analyser.m"
            }
#line 114 "mdb.declarative_edt.int"
            mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 0)), (MR_Integer) 5)));
#line 114 "mdb.declarative_edt.int"
            {
#line 114 "mdb.declarative_edt.int"
              mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Node_12, &mdb__declarative_analyser__conv1_Question_20);
            }
#line 114 "mdb.declarative_edt.int"
            mdb__declarative_analyser__Question_20 = ((MR_Word) mdb__declarative_analyser__conv1_Question_20);
#line 403 "declarative_analyser.m"
            {
#line 403 "declarative_analyser.m"
              MR_Word base;
#line 403 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 403 "declarative_analyser.m"
              *mdb__declarative_analyser__Response_10 = base;
#line 403 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 403 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__Question_20));
#line 403 "declarative_analyser.m"
            }
#line 389 "declarative_analyser.m"
          }
#line 388 "declarative_analyser.m"
        else
#line 374 "declarative_analyser.m"
          {
#line 374 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TreeType_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeRequireExplicit_13, (MR_Integer) 0)));
#line 374 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__SearchSpace_16;
#line 374 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33;
#line 374 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_49_49;
#line 374 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_50_50;
#line 374 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_51_51;
#line 374 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_52_52;

#line 380 "declarative_analyser.m"
            if ((mdb__declarative_analyser__TreeType_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 378 "declarative_analyser.m"
              {
#line 378 "declarative_analyser.m"
                mdb__declarative_edt__incorporate_explicit_supertree_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Node_12, mdb__declarative_analyser__V_37_37, &mdb__declarative_analyser__SearchSpace_16);
              }
#line 380 "declarative_analyser.m"
            else
#line 381 "declarative_analyser.m"
              {
#line 381 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_78_78;
#line 381 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__SuspectId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__TreeType_14, (MR_Integer) 0)));

#line 382 "declarative_analyser.m"
                {
#line 382 "declarative_analyser.m"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_78_78);
                }
#line 382 "declarative_analyser.m"
                {
#line 382 "declarative_analyser.m"
                  mdb__declarative_edt__incorporate_explicit_subtree_4_p_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__SuspectId_17, mdb__declarative_analyser__Node_12, mdb__declarative_analyser__V_37_37, &mdb__declarative_analyser__SearchSpace_16);
                }
#line 381 "declarative_analyser.m"
              }
#line 385 "declarative_analyser.m"
            mdb__declarative_analyser__V_49_49 = mdb__declarative_analyser__V_38_38;
#line 385 "declarative_analyser.m"
            mdb__declarative_analyser__V_50_50 = mdb__declarative_analyser__V_39_39;
#line 385 "declarative_analyser.m"
            mdb__declarative_analyser__V_51_51 = mdb__declarative_analyser__V_40_40;
#line 385 "declarative_analyser.m"
            mdb__declarative_analyser__V_52_52 = mdb__declarative_analyser__V_41_41;
#line 386 "declarative_analyser.m"
            {
#line 386 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 386 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_16));
#line 386 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 2) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 386 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 3) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 386 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 4) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 386 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 5) = ((MR_Box) (mdb__declarative_analyser__V_52_52));
#line 386 "declarative_analyser.m"
            }
#line 387 "declarative_analyser.m"
            {
#line 387 "declarative_analyser.m"
              mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, mdb__declarative_analyser__STATE_VARIABLE_Analyser_23);
            }
#line 374 "declarative_analyser.m"
          }
#line 371 "declarative_analyser.m"
      }
#line 371 "declarative_analyser.m"
  }
#line 98 "declarative_analyser.m"
}

#line 78 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__set_fallback_search_mode_4_p_0(
#line 78 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55,
#line 78 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_5,
#line 78 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_6,
#line 78 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19,
#line 78 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_20)
#line 78 "declarative_analyser.m"
{
#line 349 "declarative_analyser.m"
  {
#line 349 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 0)));
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 1)));
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 5)));
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_32_32 = mdb__declarative_analyser__V_26_26;
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_33_33 = mdb__declarative_analyser__V_27_27;
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_35_35 = mdb__declarative_analyser__FallBackSearchMode_6;
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_37_37 = mdb__declarative_analyser__V_31_31;
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_38_38 = mdb__declarative_analyser__V_32_32;
#line 350 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 2)));
#line 350 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 3)));
#line 350 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 4)));

#line 352 "declarative_analyser.m"
    {
#line 352 "declarative_analyser.m"
      mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 352 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__V_38_38));
#line 352 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__V_33_33));
#line 352 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 2) = ((MR_Box) (mdb__declarative_analyser__FallBackSearchMode_6));
#line 352 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 3) = ((MR_Box) (mdb__declarative_analyser__V_35_35));
#line 352 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 352 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 5) = ((MR_Box) (mdb__declarative_analyser__V_37_37));
#line 352 "declarative_analyser.m"
    }
#line 359 "declarative_analyser.m"
#line 359 "declarative_analyser.m"
    switch (MR_tag((MR_Word) mdb__declarative_analyser__FallBackSearchMode_6)) {
#line 359 "declarative_analyser.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 359 "declarative_analyser.m"
      case (MR_Integer) 0:
#line 364 "declarative_analyser.m"
        *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 359 "declarative_analyser.m"
        break;
#line 359 "declarative_analyser.m"
      case (MR_Integer) 1:
#line 360 "declarative_analyser.m"
        *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 359 "declarative_analyser.m"
        break;
#line 359 "declarative_analyser.m"
      case (MR_Integer) 2:
#line 362 "declarative_analyser.m"
        *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 359 "declarative_analyser.m"
        break;
#line 359 "declarative_analyser.m"
      case (MR_Integer) 3:
#line 354 "declarative_analyser.m"
        {
#line 354 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__Weighting_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__FallBackSearchMode_6, (MR_Integer) 0)));
#line 354 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__SearchSpace_10;
#line 358 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_50_50;
#line 358 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_51_51;
#line 358 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_52_52;
#line 358 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_53_53;
#line 358 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_54_54;
#line 358 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_49_49;

#line 356 "declarative_analyser.m"
          {
#line 356 "declarative_analyser.m"
            mdb__declarative_edt__update_weighting_heuristic_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_5, mdb__declarative_analyser__Weighting_8, mdb__declarative_analyser__V_38_38, &mdb__declarative_analyser__SearchSpace_10);
          }
#line 358 "declarative_analyser.m"
          mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 0)));
#line 358 "declarative_analyser.m"
          mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 1)));
#line 358 "declarative_analyser.m"
          mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 2)));
#line 358 "declarative_analyser.m"
          mdb__declarative_analyser__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 3)));
#line 358 "declarative_analyser.m"
          mdb__declarative_analyser__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 4)));
#line 358 "declarative_analyser.m"
          mdb__declarative_analyser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 5)));
#line 358 "declarative_analyser.m"
          {
#line 358 "declarative_analyser.m"
            MR_Word base;
#line 358 "declarative_analyser.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 358 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = base;
#line 358 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_10));
#line 358 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 358 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 358 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_52_52));
#line 358 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_53_53));
#line 358 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_54_54));
#line 358 "declarative_analyser.m"
          }
#line 354 "declarative_analyser.m"
        }
#line 359 "declarative_analyser.m"
        break;
#line 359 "declarative_analyser.m"
    }
#line 349 "declarative_analyser.m"
  }
#line 78 "declarative_analyser.m"
}

#line 73 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__reset_analyser_2_p_0(
#line 73 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_18,
#line 73 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5,
#line 73 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_6)
#line 73 "declarative_analyser.m"
{
#line 345 "declarative_analyser.m"
  {
#line 345 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 345 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__FallBack_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 3)));
#line 345 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_8_8;
#line 346 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 0)));
#line 346 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 1)));
#line 346 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 2)));
#line 346 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 4)));
#line 346 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 5)));

#line 347 "declarative_analyser.m"
    {
#line 347 "declarative_analyser.m"
      mdb__declarative_analyser__V_8_8 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_for_T_18);
    }
#line 347 "declarative_analyser.m"
    {
#line 347 "declarative_analyser.m"
      MR_Word base;
#line 347 "declarative_analyser.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 347 "declarative_analyser.m"
      *mdb__declarative_analyser__STATE_VARIABLE_Analyser_6 = base;
#line 347 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_8_8));
#line 347 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__FallBack_4));
#line 347 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__FallBack_4));
#line 347 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 347 "declarative_analyser.m"
    }
#line 345 "declarative_analyser.m"
  }
#line 73 "declarative_analyser.m"
}

#line 69 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__analyser_state_init_1_p_0(
#line 69 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_9,
#line 69 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Analyser_2)
#line 69 "declarative_analyser.m"
{
#line 342 "declarative_analyser.m"
  {
#line 342 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 342 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_3_3;

#line 342 "declarative_analyser.m"
    {
#line 342 "declarative_analyser.m"
      mdb__declarative_analyser__V_3_3 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_for_T_9);
    }
#line 342 "declarative_analyser.m"
    {
#line 342 "declarative_analyser.m"
      MR_Word base;
#line 342 "declarative_analyser.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 342 "declarative_analyser.m"
      *mdb__declarative_analyser__Analyser_2 = base;
#line 342 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_3_3));
#line 342 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 342 "declarative_analyser.m"
    }
#line 342 "declarative_analyser.m"
  }
#line 69 "declarative_analyser.m"
}

#line 67 "declarative_analyser.m"
MR_Word MR_CALL 
mdb__declarative_analyser__top_down_search_mode_0_f_0(void)
#line 67 "declarative_analyser.m"
{
#line 229 "declarative_analyser.m"
  {
#line 229 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 229 "declarative_analyser.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 229 "declarative_analyser.m"
  }
#line 67 "declarative_analyser.m"
}

#line 65 "declarative_analyser.m"
MR_Word MR_CALL 
mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_f_0(void)
#line 65 "declarative_analyser.m"
{
#line 227 "declarative_analyser.m"
  {
#line 227 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 227 "declarative_analyser.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_3[1]);
#line 227 "declarative_analyser.m"
  }
#line 65 "declarative_analyser.m"
}

#line 63 "declarative_analyser.m"
MR_Word MR_CALL 
mdb__declarative_analyser__divide_and_query_search_mode_0_f_0(void)
#line 63 "declarative_analyser.m"
{
#line 225 "declarative_analyser.m"
  {
#line 225 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 225 "declarative_analyser.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_3[0]);
#line 225 "declarative_analyser.m"
  }
#line 63 "declarative_analyser.m"
}

void mercury__mdb__declarative_analyser__init(void)
{
}

void mercury__mdb__declarative_analyser__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_response_1);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_state_1);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analysis_type_1);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_response_0);
	MR_register_type_ctor_info(&mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0);
}

void mercury__mdb__declarative_analyser__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.declarative_analyser. */
