/*
** Automatically generated from `declarative_analyser.m'
** by the Mercury compiler,
** version rotd-2014-11-20
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
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
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




#line 93 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2;

#line 96 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2;

#line 99 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0;

#line 102 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 105 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 108 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1[2];

#line 111 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1;

#line 114 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2[1];

#line 117 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2;

#line 120 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3[1];

#line 123 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3;

#line 126 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4[1];

#line 129 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4;

#line 132 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5[1];

#line 135 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5;

#line 138 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0[1];

#line 141 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1[1];

#line 144 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2[1];

#line 147 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3[3];

#line 150 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_response_1[4];

#line 153 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1[6];

#line 156 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1[6];

#line 159 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1;

#line 162 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0;

#line 165 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0;

#line 168 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1;

#line 171 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1;

#line 174 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0[6];

#line 177 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0[6];

#line 180 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0;

#line 183 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[1];

#line 186 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[1];

#line 189 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1[1];

#line 192 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1[1];

#line 195 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0[1];

#line 198 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0;

#line 201 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1;

#line 204 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[1];

#line 207 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[1];

#line 210 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1[2];

#line 213 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1[2];

#line 216 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1[2];

#line 219 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0[1];

#line 222 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0;

#line 225 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1;

#line 228 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[1];

#line 231 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[1];

#line 234 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0[2];

#line 237 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0[2];

#line 240 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0[2];

#line 243 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0;

#line 246 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1;

#line 249 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0;

#line 252 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0;

#line 255 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2[6];

#line 258 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2[6];

#line 261 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2;

#line 264 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3;

#line 267 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4;

#line 270 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3];

#line 273 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3];

#line 276 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5;

#line 279 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3];

#line 282 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3];

#line 285 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6;

#line 288 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7;

#line 291 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8;

#line 294 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0[6];

#line 297 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1[1];

#line 300 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2[1];

#line 303 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3[1];

#line 306 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0[4];

#line 309 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_reason_for_question_0[9];

#line 312 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_reason_for_question_0[9];

#line 315 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0;

#line 318 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 321 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1[5];

#line 324 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1;

#line 327 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0;

#line 330 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 333 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3];

#line 336 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3];

#line 339 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2;

#line 342 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1];

#line 345 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3;

#line 348 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0[1];

#line 351 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1[1];

#line 354 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2[1];

#line 357 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3[1];

#line 360 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_mode_0[4];

#line 363 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0[4];

#line 366 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0[4];

#line 369 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0[2];

#line 372 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0;

#line 375 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1[1];

#line 378 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1;

#line 381 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2;

#line 384 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3;

#line 387 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4[3];

#line 390 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4;

#line 393 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0[2];

#line 396 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1[1];

#line 399 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2[1];

#line 402 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3[1];

#line 405 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_response_0[4];

#line 408 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0[5];

#line 411 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0[5];

#line 414 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0[2];

#line 417 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0;

#line 420 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[1];

#line 423 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[1];

#line 426 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0[1];

#line 429 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0[1];

#line 432 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
#line 435 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 437 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 439 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 442 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
#line 445 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 447 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 449 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 451 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 454 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
#line 457 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 459 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 461 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 464 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
#line 467 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 469 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 471 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 473 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 476 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
#line 479 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 481 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 483 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 486 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
#line 489 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 491 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 493 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 495 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 498 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
#line 501 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 503 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 506 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
#line 509 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 511 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 513 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 516 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
#line 519 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 521 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 524 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
#line 527 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 529 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 531 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 534 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
#line 537 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 539 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 542 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
#line 545 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 547 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 549 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 552 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
#line 555 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 557 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 560 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
#line 563 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 565 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 567 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 570 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
#line 573 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 575 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 578 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
#line 581 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 583 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 585 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 1122 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1122__1_7_p_0(
#line 1122 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1122 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1122 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_66,
#line 1122 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__4_67,
#line 1122 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__5_68,
#line 1122 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__6_69,
#line 1122 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__7_70);

#line 741 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__741__1_3_p_0(
#line 741 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 741 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 741 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_52);

#line 738 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(
#line 738 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 738 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 738 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_48);

#line 656 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__IntroducedFrom__func__bug_response__656__1_3_f_0(
#line 656 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 656 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 656 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_30);

#line 332 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0(
#line 332 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 332 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0(
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 332 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

#line 238 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0(
#line 238 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 238 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 238 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 238 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0(
#line 238 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 238 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

#line 248 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0(
#line 248 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 248 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 248 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 248 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0(
#line 248 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 248 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

#line 335 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0(
#line 335 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 335 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 335 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 335 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0(
#line 335 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 335 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

#line 1349 "declarative_analyser.m"
static MR_String MR_CALL 
mdb__declarative_analyser__search_mode_to_string_1_f_0(
#line 1349 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1);

#line 1264 "declarative_analyser.m"
static MR_String MR_CALL 
mdb__declarative_analyser__weighting_to_reason_string_3_f_0(
#line 1264 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 1264 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Weight1_2,
#line 1264 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Weight2_3);

#line 1122 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0_1(
#line 1122 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 1122 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 1122 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 1122 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_3,
#line 1122 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_4,
#line 1122 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_5);

#line 1095 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0(
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1095 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_1,
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_2,
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_3,
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__4_4,
#line 1095 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_5,
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_6,
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1095 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8,
#line 1095 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9);

#line 1071 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(
#line 1071 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23,
#line 1071 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_10,
#line 1071 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_11,
#line 1071 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_12,
#line 1071 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_13,
#line 1071 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_14,
#line 1071 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_15,
#line 1071 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19,
#line 1071 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20,
#line 1071 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_17);

#line 1025 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(
#line 1025 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_21,
#line 1025 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 1025 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_9,
#line 1025 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterTop_10,
#line 1025 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterBottom_11,
#line 1025 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerTop_12,
#line 1025 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerBottom_13,
#line 1025 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__Unknown_14);

#line 947 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__binary_search_11_p_0(
#line 947 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37,
#line 947 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_12,
#line 947 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_13,
#line 947 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_14,
#line 947 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Top_15,
#line 947 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Bottom_16,
#line 947 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__LastTested_17,
#line 947 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 947 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 947 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_19,
#line 947 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_20,
#line 947 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_21);

#line 788 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70,
#line 788 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_15,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_16,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44,
#line 788 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_18,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46,
#line 788 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_20,
#line 788 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_21,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_22,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_23,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_24,
#line 788 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_25,
#line 788 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_26);

#line 775 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_12_p_0(
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29,
#line 775 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_13,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_14,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25,
#line 775 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_16,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_17,
#line 775 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_18,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_19,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_20,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_21,
#line 775 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_22,
#line 775 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_23);

#line 741 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_2(
#line 741 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 741 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

#line 738 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_1(
#line 738 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 738 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

#line 700 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0(
#line 700 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 700 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 700 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 700 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24,
#line 700 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25,
#line 700 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9);

#line 669 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__search_for_question_8_p_0(
#line 669 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33,
#line 669 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_9,
#line 669 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_10,
#line 669 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 669 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 669 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__OldMode_12,
#line 669 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_13,
#line 669 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_14,
#line 669 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_15);

#line 657 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_2(
#line 657 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 657 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 657 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2);

#line 656 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_1(
#line 656 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 656 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

#line 639 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0(
#line 639 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 639 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 639 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 639 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__BugId_9,
#line 639 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Evidence_10,
#line 639 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__InadmissibleChildren_11,
#line 639 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_12);

#line 572 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__handle_search_response_5_p_0(
#line 572 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78,
#line 572 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 572 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchResponse_7,
#line 572 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20,
#line 572 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_21,
#line 572 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__AnalyserResponse_9);

#line 553 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__decide_analyser_response_5_p_0(
#line 553 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63,
#line 553 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 553 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 553 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_8,
#line 553 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13,
#line 553 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_14);

#line 475 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__process_answer_5_p_0(
#line 475 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137,
#line 475 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 475 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Answer_7,
#line 475 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_8,
#line 475 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24,
#line 475 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_25);

#line 417 "declarative_analyser.m"
static MR_Word MR_CALL 
mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(
#line 417 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1);

#line 1227 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0_1(
#line 1227 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 1227 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1);


static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_1[18][2];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_2[2][3];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_3[1][5];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_4[3][1];

static /* final */ const MR_Integer mdb__declarative_analyser_scalar_common_5[2][3];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_6[2][7];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_7[1][6];

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_8[1][10];




static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_1[18][2] = {
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
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "continue_analysis")),
    ((MR_Box) ((MR_String) "received answer to unasked question"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "change_search_mode")),
    ((MR_Box) ((MR_String) "binary mode requested, but no last question"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "setup_binary_search")),
    ((MR_Box) ((MR_String) "TopId not an ancestor of BottomId"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "show_info")),
    ((MR_Box) ((MR_String) "no last question"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "Context of current question")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "Search mode")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "Estimated questions remaining")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "Number of suspect events")),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "revise_analysis")),
    ((MR_Box) ((MR_String) "no root"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "handle_search_response")),
    ((MR_Box) ((MR_String) "search responded with query about ignored suspect"))
  },
  /* row 17 */
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
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_analyser__reason_to_string_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_3[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_4[3][1] = {
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Integer mdb__declarative_analyser_scalar_common_5[2][3] = {
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

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_6[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_5[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_7[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_analyser_scalar_common_8[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_analyser_scalar_common_5[0])),
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



#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
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



#line 1296 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1304 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1312 "mdb.declarative_analyser.c"
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

#line 1327 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1335 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
  }
};

#line 1343 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_bug_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1349 "mdb.declarative_analyser.c"
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

#line 1364 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1369 "mdb.declarative_analyser.c"
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

#line 1384 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1389 "mdb.declarative_analyser.c"
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

#line 1404 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1409 "mdb.declarative_analyser.c"
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

#line 1424 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1429 "mdb.declarative_analyser.c"
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

#line 1444 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0
};

#line 1449 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1
};

#line 1454 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2
};

#line 1459 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3[3] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5
};

#line 1466 "mdb.declarative_analyser.c"
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

#line 1490 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1[6] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5
};

#line 1500 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1[6] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 1510 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_response_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analyser_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analyser_response_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analyser_response",
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1
  },
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_response_1
  },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1
};

#line 1531 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1539 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0
  }
};

#line 1547 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0
  }
};

#line 1555 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1563 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
  }
};

#line 1571 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
};

#line 1581 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0[6] = {
  (MR_String) "search_space",
  (MR_String) "require_explicit",
  (MR_String) "search_mode",
  (MR_String) "fallback_search_mode",
  (MR_String) "last_search_question",
  (MR_String) "debug_origin"
};

#line 1591 "mdb.declarative_analyser.c"
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

#line 1606 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

#line 1611 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0
  }
};

#line 1620 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

#line 1625 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1[1] = {
  (MR_Integer) 0
};

#line 1630 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_state_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analyser_state_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analyser_state_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analyser_state",
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1
  },
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1
};

#line 1651 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1656 "mdb.declarative_analyser.c"
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

#line 1671 "mdb.declarative_analyser.c"
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

#line 1686 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

#line 1691 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0
};

#line 1696 "mdb.declarative_analyser.c"
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

#line 1710 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

#line 1716 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1722 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analysis_type_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____analysis_type_1_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____analysis_type_1_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "analysis_type",
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1
  },
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1
};

#line 1743 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1748 "mdb.declarative_analyser.c"
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

#line 1763 "mdb.declarative_analyser.c"
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

#line 1778 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

#line 1783 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0
};

#line 1788 "mdb.declarative_analyser.c"
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

#line 1802 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

#line 1808 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1814 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "explicit_tree_type",
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0
  },
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0
};

#line 1835 "mdb.declarative_analyser.c"
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

#line 1850 "mdb.declarative_analyser.c"
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

#line 1865 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1873 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 1881 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1891 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2[6] = {
  (MR_String) "binding_prim_op",
  (MR_String) "binding_filename",
  (MR_String) "binding_line_no",
  (MR_String) "maybe_atom_path",
  (MR_String) "binding_proc",
  (MR_String) "binding_node_eliminated"
};

#line 1901 "mdb.declarative_analyser.c"
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

#line 1916 "mdb.declarative_analyser.c"
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

#line 1931 "mdb.declarative_analyser.c"
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

#line 1946 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1953 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3] = {
  (MR_String) "binary_reason_bottom",
  (MR_String) "binary_reason_top",
  (MR_String) "binary_reason_split"
};

#line 1960 "mdb.declarative_analyser.c"
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

#line 1975 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1982 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3] = {
  (MR_String) "dq_weighting",
  (MR_String) "dq_old_weight",
  (MR_String) "dq_chosen_subtree_weight"
};

#line 1989 "mdb.declarative_analyser.c"
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

#line 2004 "mdb.declarative_analyser.c"
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

#line 2019 "mdb.declarative_analyser.c"
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

#line 2034 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0[6] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8
};

#line 2044 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2
};

#line 2049 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5
};

#line 2054 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6
};

#line 2059 "mdb.declarative_analyser.c"
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

#line 2083 "mdb.declarative_analyser.c"
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

#line 2096 "mdb.declarative_analyser.c"
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

#line 2109 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____reason_for_question_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____reason_for_question_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "reason_for_question",
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_reason_for_question_0
  },
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0
  },
  (MR_Integer) 9,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_reason_for_question_0
};

#line 2130 "mdb.declarative_analyser.c"
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

#line 2145 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2153 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0
};

#line 2162 "mdb.declarative_analyser.c"
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

#line 2177 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2185 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2194 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2201 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3] = {
  (MR_String) "suspects",
  (MR_String) "range",
  (MR_String) "last_tested"
};

#line 2208 "mdb.declarative_analyser.c"
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

#line 2223 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
};

#line 2228 "mdb.declarative_analyser.c"
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

#line 2243 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0
};

#line 2248 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1
};

#line 2253 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2
};

#line 2258 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3
};

#line 2263 "mdb.declarative_analyser.c"
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

#line 2287 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0[4] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0
};

#line 2295 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2303 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____search_mode_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____search_mode_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "search_mode",
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0
  },
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_mode_0
  },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0
};

#line 2324 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

#line 2330 "mdb.declarative_analyser.c"
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

#line 2345 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2350 "mdb.declarative_analyser.c"
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

#line 2365 "mdb.declarative_analyser.c"
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

#line 2380 "mdb.declarative_analyser.c"
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

#line 2395 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2402 "mdb.declarative_analyser.c"
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

#line 2417 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3
};

#line 2423 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0
};

#line 2428 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1
};

#line 2433 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4
};

#line 2438 "mdb.declarative_analyser.c"
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

#line 2462 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0[5] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2
};

#line 2471 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2480 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____search_response_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____search_response_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "search_response",
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0
  },
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_response_0
  },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0
};

#line 2501 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

#line 2507 "mdb.declarative_analyser.c"
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

#line 2522 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

#line 2527 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0
  }
};

#line 2536 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

#line 2541 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0[1] = {
  (MR_Integer) 0
};

#line 2546 "mdb.declarative_analyser.c"
const MR_TypeCtorInfo_Struct mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001)),
  ((MR_Box) (mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001)),
  (MR_String) "mdb.declarative_analyser",
  (MR_String) "suspect_and_reason",
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0
  },
  {
    mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0
};

#line 2567 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
#line 2570 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2572 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2574 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2576 "mdb.declarative_analyser.c"
{
#line 2578 "mdb.declarative_analyser.c"
  {
#line 2580 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2583 "mdb.declarative_analyser.c"
    {
#line 2585 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analyser_response_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2588 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2590 "mdb.declarative_analyser.c"
  }
#line 2592 "mdb.declarative_analyser.c"
}

#line 2595 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
#line 2598 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2600 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2602 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2604 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2606 "mdb.declarative_analyser.c"
{
#line 2608 "mdb.declarative_analyser.c"
  {
#line 2610 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2613 "mdb.declarative_analyser.c"
    {
#line 2615 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analyser_response_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2618 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2620 "mdb.declarative_analyser.c"
  }
#line 2622 "mdb.declarative_analyser.c"
}

#line 2625 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
#line 2628 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2630 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2632 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2634 "mdb.declarative_analyser.c"
{
#line 2636 "mdb.declarative_analyser.c"
  {
#line 2638 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2641 "mdb.declarative_analyser.c"
    {
#line 2643 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analyser_state_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2646 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2648 "mdb.declarative_analyser.c"
  }
#line 2650 "mdb.declarative_analyser.c"
}

#line 2653 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
#line 2656 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2658 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2660 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2662 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2664 "mdb.declarative_analyser.c"
{
#line 2666 "mdb.declarative_analyser.c"
  {
#line 2668 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2671 "mdb.declarative_analyser.c"
    {
#line 2673 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analyser_state_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2676 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2678 "mdb.declarative_analyser.c"
  }
#line 2680 "mdb.declarative_analyser.c"
}

#line 2683 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
#line 2686 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2688 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2690 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2692 "mdb.declarative_analyser.c"
{
#line 2694 "mdb.declarative_analyser.c"
  {
#line 2696 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2699 "mdb.declarative_analyser.c"
    {
#line 2701 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analysis_type_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2704 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2706 "mdb.declarative_analyser.c"
  }
#line 2708 "mdb.declarative_analyser.c"
}

#line 2711 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
#line 2714 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2716 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2718 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2720 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2722 "mdb.declarative_analyser.c"
{
#line 2724 "mdb.declarative_analyser.c"
  {
#line 2726 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2729 "mdb.declarative_analyser.c"
    {
#line 2731 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analysis_type_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2734 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2736 "mdb.declarative_analyser.c"
  }
#line 2738 "mdb.declarative_analyser.c"
}

#line 2741 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
#line 2744 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2746 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2748 "mdb.declarative_analyser.c"
{
#line 2750 "mdb.declarative_analyser.c"
  {
#line 2752 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2755 "mdb.declarative_analyser.c"
    {
#line 2757 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____explicit_tree_type_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2760 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2762 "mdb.declarative_analyser.c"
  }
#line 2764 "mdb.declarative_analyser.c"
}

#line 2767 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
#line 2770 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2772 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2774 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2776 "mdb.declarative_analyser.c"
{
#line 2778 "mdb.declarative_analyser.c"
  {
#line 2780 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2783 "mdb.declarative_analyser.c"
    {
#line 2785 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____explicit_tree_type_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2788 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2790 "mdb.declarative_analyser.c"
  }
#line 2792 "mdb.declarative_analyser.c"
}

#line 2795 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
#line 2798 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2800 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2802 "mdb.declarative_analyser.c"
{
#line 2804 "mdb.declarative_analyser.c"
  {
#line 2806 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2809 "mdb.declarative_analyser.c"
    {
#line 2811 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2814 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2816 "mdb.declarative_analyser.c"
  }
#line 2818 "mdb.declarative_analyser.c"
}

#line 2821 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
#line 2824 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2826 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2828 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2830 "mdb.declarative_analyser.c"
{
#line 2832 "mdb.declarative_analyser.c"
  {
#line 2834 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2837 "mdb.declarative_analyser.c"
    {
#line 2839 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____reason_for_question_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2842 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2844 "mdb.declarative_analyser.c"
  }
#line 2846 "mdb.declarative_analyser.c"
}

#line 2849 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
#line 2852 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2854 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2856 "mdb.declarative_analyser.c"
{
#line 2858 "mdb.declarative_analyser.c"
  {
#line 2860 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2863 "mdb.declarative_analyser.c"
    {
#line 2865 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2868 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2870 "mdb.declarative_analyser.c"
  }
#line 2872 "mdb.declarative_analyser.c"
}

#line 2875 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
#line 2878 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2880 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2882 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2884 "mdb.declarative_analyser.c"
{
#line 2886 "mdb.declarative_analyser.c"
  {
#line 2888 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2891 "mdb.declarative_analyser.c"
    {
#line 2893 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2896 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2898 "mdb.declarative_analyser.c"
  }
#line 2900 "mdb.declarative_analyser.c"
}

#line 2903 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
#line 2906 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2908 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2910 "mdb.declarative_analyser.c"
{
#line 2912 "mdb.declarative_analyser.c"
  {
#line 2914 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2917 "mdb.declarative_analyser.c"
    {
#line 2919 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_response_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2922 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2924 "mdb.declarative_analyser.c"
  }
#line 2926 "mdb.declarative_analyser.c"
}

#line 2929 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
#line 2932 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2934 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2936 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2938 "mdb.declarative_analyser.c"
{
#line 2940 "mdb.declarative_analyser.c"
  {
#line 2942 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2945 "mdb.declarative_analyser.c"
    {
#line 2947 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____search_response_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2950 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2952 "mdb.declarative_analyser.c"
  }
#line 2954 "mdb.declarative_analyser.c"
}

#line 2957 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
#line 2960 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2962 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2964 "mdb.declarative_analyser.c"
{
#line 2966 "mdb.declarative_analyser.c"
  {
#line 2968 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2971 "mdb.declarative_analyser.c"
    {
#line 2973 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____suspect_and_reason_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2976 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2978 "mdb.declarative_analyser.c"
  }
#line 2980 "mdb.declarative_analyser.c"
}

#line 2983 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
#line 2986 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2988 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2990 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2992 "mdb.declarative_analyser.c"
{
#line 2994 "mdb.declarative_analyser.c"
  {
#line 2996 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2999 "mdb.declarative_analyser.c"
    {
#line 3001 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____suspect_and_reason_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 3004 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 3006 "mdb.declarative_analyser.c"
  }
#line 3008 "mdb.declarative_analyser.c"
}

#line 1122 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1122__1_7_p_0(
#line 1122 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1122 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1122 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_66,
#line 1122 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__4_67,
#line 1122 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__5_68,
#line 1122 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__6_69,
#line 1122 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__7_70)
#line 1122 "declarative_analyser.m"
{
#line 1122 "declarative_analyser.m"
  {
#line 1122 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1122 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_72_72;
#line 1122 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__Weight_87;

#line 3039 "mdb.declarative_analyser.c"
    {
#line 3041 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_72_72);
    }
#line 1178 "declarative_analyser.m"
    {
#line 1178 "declarative_analyser.m"
      mdb__declarative_analyser__Weight_87 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_72_72, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__HeadVar__3_66);
    }
#line 1179 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Weight_87 > mdb__declarative_analyser__HeadVar__4_67);
#line 1182 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 1180 "declarative_analyser.m"
      {
#line 1180 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__5_68 = mdb__declarative_analyser__Weight_87;
#line 1181 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__7_70 = mdb__declarative_analyser__HeadVar__3_66;
#line 1180 "declarative_analyser.m"
      }
#line 1182 "declarative_analyser.m"
    else
#line 1183 "declarative_analyser.m"
      {
#line 1183 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__5_68 = mdb__declarative_analyser__HeadVar__4_67;
#line 1184 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__7_70 = mdb__declarative_analyser__HeadVar__6_69;
#line 1183 "declarative_analyser.m"
      }
#line 1122 "declarative_analyser.m"
  }
#line 1122 "declarative_analyser.m"
}

#line 741 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__741__1_3_p_0(
#line 741 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 741 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 741 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_52)
#line 741 "declarative_analyser.m"
{
#line 741 "declarative_analyser.m"
  {
#line 741 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 741 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_54_54;

#line 3094 "mdb.declarative_analyser.c"
    {
#line 3096 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_54_54);
    }
#line 741 "declarative_analyser.m"
    {
#line 741 "declarative_analyser.m"
      return mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_inadmissible_2_p_0(mdb__declarative_analyser__TypeInfo_54_54, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, mdb__declarative_analyser__HeadVar__3_52);
    }
#line 741 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 741 "declarative_analyser.m"
  }
#line 741 "declarative_analyser.m"
}

#line 738 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(
#line 738 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 738 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 738 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_48)
#line 738 "declarative_analyser.m"
{
#line 738 "declarative_analyser.m"
  {
#line 738 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 738 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_50_50;

#line 3129 "mdb.declarative_analyser.c"
    {
#line 3131 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_50_50);
    }
#line 738 "declarative_analyser.m"
    {
#line 738 "declarative_analyser.m"
      return mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_correct_or_inadmissible_2_p_0(mdb__declarative_analyser__TypeInfo_50_50, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, mdb__declarative_analyser__HeadVar__3_48);
    }
#line 738 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 738 "declarative_analyser.m"
  }
#line 738 "declarative_analyser.m"
}

#line 656 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__IntroducedFrom__func__bug_response__656__1_3_f_0(
#line 656 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 656 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 656 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_30)
#line 656 "declarative_analyser.m"
{
#line 656 "declarative_analyser.m"
  {
#line 656 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 656 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__HeadVar__4_31;
#line 656 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_33_33;

#line 3166 "mdb.declarative_analyser.c"
    {
#line 3168 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_33_33);
    }
#line 656 "declarative_analyser.m"
    {
#line 656 "declarative_analyser.m"
      mdb__declarative_analyser__HeadVar__4_31 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_33_33, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__HeadVar__3_30);
    }
#line 656 "declarative_analyser.m"
    return mdb__declarative_analyser__HeadVar__4_31;
#line 656 "declarative_analyser.m"
  }
#line 656 "declarative_analyser.m"
}

#line 332 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0(
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
    MR_Integer mdb__declarative_analyser__CastX_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 332 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_10 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 332 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_9 == mdb__declarative_analyser__CastY_10);
#line 332 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 3207 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 332 "declarative_analyser.m"
    else
#line 332 "declarative_analyser.m"
      {
#line 332 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 332 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 332 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 332 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 332 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_8_8;

#line 332 "declarative_analyser.m"
        {
#line 332 "declarative_analyser.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_8_8, mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_6_6);
        }
#line 3229 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_8_8 == (MR_Integer) 0);
#line 332 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 332 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 332 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_8_8;
#line 332 "declarative_analyser.m"
        else
#line 332 "declarative_analyser.m"
          {
#line 332 "declarative_analyser.m"
            mdb__declarative_analyser____Compare____reason_for_question_0_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_5_5, mdb__declarative_analyser__V_7_7);
#line 332 "declarative_analyser.m"
            return;
          }
#line 332 "declarative_analyser.m"
      }
#line 332 "declarative_analyser.m"
  }
#line 332 "declarative_analyser.m"
}

#line 332 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0(
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
      {
#line 332 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 332 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 332 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 332 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));

#line 3290 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_3_3 == mdb__declarative_analyser__V_5_5);
#line 332 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 3294 "mdb.declarative_analyser.c"
          {
#line 3296 "mdb.declarative_analyser.c"
            return mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_6_6);
          }
#line 332 "declarative_analyser.m"
      }
#line 332 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 332 "declarative_analyser.m"
  }
#line 332 "declarative_analyser.m"
}

#line 238 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0(
#line 238 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 238 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 238 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 238 "declarative_analyser.m"
{
#line 238 "declarative_analyser.m"
  {
#line 238 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 238 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_67 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 238 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_68 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 238 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_67 == mdb__declarative_analyser__CastY_68);
#line 238 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 3332 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 238 "declarative_analyser.m"
    else
#line 238 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 238 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 238 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 238 "declarative_analyser.m"
        else
#line 238 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "declarative_analyser.m"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 238 "declarative_analyser.m"
          else
#line 238 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3352 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 238 "declarative_analyser.m"
            else
#line 238 "declarative_analyser.m"
              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3358 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 238 "declarative_analyser.m"
              else
#line 3362 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 238 "declarative_analyser.m"
      else
#line 238 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 238 "declarative_analyser.m"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 238 "declarative_analyser.m"
          else
#line 238 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 238 "declarative_analyser.m"
            else
#line 238 "declarative_analyser.m"
              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3382 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 238 "declarative_analyser.m"
              else
#line 238 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3388 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 238 "declarative_analyser.m"
                else
#line 3392 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 238 "declarative_analyser.m"
        else
#line 238 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 238 "declarative_analyser.m"
            {
#line 238 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 238 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 238 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3409 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 238 "declarative_analyser.m"
              else
#line 238 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3415 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 238 "declarative_analyser.m"
                else
#line 238 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 238 "declarative_analyser.m"
                    {
#line 238 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 238 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 238 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 238 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_65_65;

#line 238 "declarative_analyser.m"
                      {
#line 238 "declarative_analyser.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_65_65, mdb__declarative_analyser__V_77_77, mdb__declarative_analyser__V_62_62);
                      }
#line 3437 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_65_65 == (MR_Integer) 0);
#line 238 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 238 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 238 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_65_65;
#line 238 "declarative_analyser.m"
                      else
#line 238 "declarative_analyser.m"
                        {
#line 238 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_66_66;

#line 238 "declarative_analyser.m"
                          {
#line 238 "declarative_analyser.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[6], &mdb__declarative_analyser__V_66_66, ((MR_Box) (mdb__declarative_analyser__V_76_76)), ((MR_Box) (mdb__declarative_analyser__V_63_63)));
                          }
#line 3457 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_66_66 == (MR_Integer) 0);
#line 238 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 238 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 238 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_66_66;
#line 238 "declarative_analyser.m"
                          else
#line 238 "declarative_analyser.m"
                            {
#line 238 "declarative_analyser.m"
                              {
#line 238 "declarative_analyser.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[6], mdb__declarative_analyser__HeadVar__1_1, ((MR_Box) (mdb__declarative_analyser__V_75_75)), ((MR_Box) (mdb__declarative_analyser__V_64_64)));
#line 238 "declarative_analyser.m"
                                return;
                              }
#line 238 "declarative_analyser.m"
                            }
#line 238 "declarative_analyser.m"
                        }
#line 238 "declarative_analyser.m"
                    }
#line 238 "declarative_analyser.m"
                  else
#line 238 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3486 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 238 "declarative_analyser.m"
                    else
#line 3490 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 238 "declarative_analyser.m"
            }
#line 238 "declarative_analyser.m"
          else
#line 238 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 238 "declarative_analyser.m"
              {
#line 238 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 238 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3507 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 238 "declarative_analyser.m"
                else
#line 238 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3513 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 238 "declarative_analyser.m"
                  else
#line 238 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3519 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 238 "declarative_analyser.m"
                    else
#line 238 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 238 "declarative_analyser.m"
                        {
#line 238 "declarative_analyser.m"
                          MR_Integer mdb__declarative_analyser__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 238 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 238 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_8_8;

#line 238 "declarative_analyser.m"
                          {
#line 238 "declarative_analyser.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_8_8, mdb__declarative_analyser__V_79_79, mdb__declarative_analyser__V_6_6);
                          }
#line 3539 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_8_8 == (MR_Integer) 0);
#line 238 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 238 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 238 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_8_8;
#line 238 "declarative_analyser.m"
                          else
#line 238 "declarative_analyser.m"
                            {
#line 238 "declarative_analyser.m"
                              mdb__declarative_analyser____Compare____reason_for_question_0_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_78_78, mdb__declarative_analyser__V_7_7);
#line 238 "declarative_analyser.m"
                              return;
                            }
#line 238 "declarative_analyser.m"
                        }
#line 238 "declarative_analyser.m"
                      else
#line 3560 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 238 "declarative_analyser.m"
              }
#line 238 "declarative_analyser.m"
            else
#line 238 "declarative_analyser.m"
              {
#line 238 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 238 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3573 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 238 "declarative_analyser.m"
                else
#line 238 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3579 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 238 "declarative_analyser.m"
                  else
#line 238 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3585 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 238 "declarative_analyser.m"
                    else
#line 238 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3591 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 238 "declarative_analyser.m"
                      else
#line 238 "declarative_analyser.m"
                        {
#line 238 "declarative_analyser.m"
                          MR_Integer mdb__declarative_analyser__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));

#line 238 "declarative_analyser.m"
                          {
#line 238 "declarative_analyser.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_80_80, mdb__declarative_analyser__V_25_25);
#line 238 "declarative_analyser.m"
                            return;
                          }
#line 238 "declarative_analyser.m"
                        }
#line 238 "declarative_analyser.m"
              }
#line 238 "declarative_analyser.m"
  }
#line 238 "declarative_analyser.m"
}

#line 238 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0(
#line 238 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 238 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 238 "declarative_analyser.m"
{
#line 238 "declarative_analyser.m"
  {
#line 238 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 238 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_19 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 238 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_20 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 238 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_19 == mdb__declarative_analyser__CastY_20);
#line 238 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 238 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 238 "declarative_analyser.m"
    else
#line 238 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 238 "declarative_analyser.m"
        {
#line 238 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastX_11 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 238 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastY_12 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 238 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_12 == mdb__declarative_analyser__CastX_11);
#line 238 "declarative_analyser.m"
        }
#line 238 "declarative_analyser.m"
      else
#line 238 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 238 "declarative_analyser.m"
          {
#line 238 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastX_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 238 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastY_10 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 238 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_10 == mdb__declarative_analyser__CastX_9);
#line 238 "declarative_analyser.m"
          }
#line 238 "declarative_analyser.m"
        else
#line 238 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 238 "declarative_analyser.m"
            {
#line 238 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_22_22;
#line 238 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_23_23;
#line 238 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 238 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_16_16;
#line 238 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_17_17;
#line 238 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_18_18;

#line 238 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 238 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 238 "declarative_analyser.m"
                {
#line 238 "declarative_analyser.m"
                  mdb__declarative_analyser__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "declarative_analyser.m"
                  mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "declarative_analyser.m"
                  mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 3705 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_13_13 == mdb__declarative_analyser__V_16_16);
#line 238 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 238 "declarative_analyser.m"
                    {
#line 3711 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__TypeInfo_22_22 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[6];
#line 3713 "mdb.declarative_analyser.c"
                      {
#line 3715 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_22_22, ((MR_Box) (mdb__declarative_analyser__V_14_14)), ((MR_Box) (mdb__declarative_analyser__V_17_17)));
                      }
#line 238 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 238 "declarative_analyser.m"
                        {
#line 3722 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__TypeInfo_23_23 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[6];
#line 3724 "mdb.declarative_analyser.c"
                          {
#line 3726 "mdb.declarative_analyser.c"
                            return mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_23_23, ((MR_Box) (mdb__declarative_analyser__V_15_15)), ((MR_Box) (mdb__declarative_analyser__V_18_18)));
                          }
#line 238 "declarative_analyser.m"
                        }
#line 238 "declarative_analyser.m"
                    }
#line 238 "declarative_analyser.m"
                }
#line 238 "declarative_analyser.m"
            }
#line 238 "declarative_analyser.m"
          else
#line 238 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 238 "declarative_analyser.m"
              {
#line 238 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_5_5;
#line 238 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_6_6;

#line 238 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 238 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 238 "declarative_analyser.m"
                  {
#line 238 "declarative_analyser.m"
                    mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "declarative_analyser.m"
                    mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 3762 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_3_3 == mdb__declarative_analyser__V_5_5);
#line 238 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 3766 "mdb.declarative_analyser.c"
                      {
#line 3768 "mdb.declarative_analyser.c"
                        return mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_6_6);
                      }
#line 238 "declarative_analyser.m"
                  }
#line 238 "declarative_analyser.m"
              }
#line 238 "declarative_analyser.m"
            else
#line 238 "declarative_analyser.m"
              {
#line 238 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_8_8;

#line 238 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 238 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 238 "declarative_analyser.m"
                  {
#line 238 "declarative_analyser.m"
                    mdb__declarative_analyser__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 3792 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_7_7 == mdb__declarative_analyser__V_8_8);
#line 238 "declarative_analyser.m"
                  }
#line 238 "declarative_analyser.m"
              }
#line 238 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 238 "declarative_analyser.m"
  }
#line 238 "declarative_analyser.m"
}

#line 170 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0(
#line 170 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 170 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 170 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 170 "declarative_analyser.m"
{
#line 170 "declarative_analyser.m"
  {
#line 170 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 170 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_82 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 170 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_83 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 170 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_82 == mdb__declarative_analyser__CastY_83);
#line 170 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 3829 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 170 "declarative_analyser.m"
    else
#line 170 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 170 "declarative_analyser.m"
        else
#line 170 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3843 "mdb.declarative_analyser.c"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "declarative_analyser.m"
          else
#line 170 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3849 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "declarative_analyser.m"
            else
#line 3853 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "declarative_analyser.m"
      else
#line 170 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 170 "declarative_analyser.m"
          {
#line 170 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "declarative_analyser.m"
            MR_ArrayPtr mdb__declarative_analyser__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 170 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3870 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "declarative_analyser.m"
            else
#line 170 "declarative_analyser.m"
              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 170 "declarative_analyser.m"
                {
#line 170 "declarative_analyser.m"
                  MR_ArrayPtr mdb__declarative_analyser__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 170 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 170 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 170 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_63_63;

#line 170 "declarative_analyser.m"
                  {
#line 170 "declarative_analyser.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[4], &mdb__declarative_analyser__V_63_63, ((MR_Box) (mdb__declarative_analyser__V_95_95)), ((MR_Box) (mdb__declarative_analyser__V_60_60)));
                  }
#line 3892 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_63_63 == (MR_Integer) 0);
#line 170 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 170 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_63_63;
#line 170 "declarative_analyser.m"
                  else
#line 170 "declarative_analyser.m"
                    {
#line 170 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_64_64;

#line 170 "declarative_analyser.m"
                      {
#line 170 "declarative_analyser.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_2[0], &mdb__declarative_analyser__V_64_64, ((MR_Box) (mdb__declarative_analyser__V_94_94)), ((MR_Box) (mdb__declarative_analyser__V_61_61)));
                      }
#line 3912 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_64_64 == (MR_Integer) 0);
#line 170 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 170 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_64_64;
#line 170 "declarative_analyser.m"
                      else
#line 170 "declarative_analyser.m"
                        {
#line 170 "declarative_analyser.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_93_93, mdb__declarative_analyser__V_62_62);
#line 170 "declarative_analyser.m"
                          return;
                        }
#line 170 "declarative_analyser.m"
                    }
#line 170 "declarative_analyser.m"
                }
#line 170 "declarative_analyser.m"
              else
#line 170 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3937 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "declarative_analyser.m"
                else
#line 3941 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "declarative_analyser.m"
          }
#line 170 "declarative_analyser.m"
        else
#line 170 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 170 "declarative_analyser.m"
            {
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 170 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3956 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "declarative_analyser.m"
              else
#line 170 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3962 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "declarative_analyser.m"
                else
#line 170 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 170 "declarative_analyser.m"
                    {
#line 170 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 170 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_102_102 = (MR_Integer) mdb__declarative_analyser__V_96_96;
#line 170 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_103_103 = (MR_Integer) mdb__declarative_analyser__V_81_81;

#line 170 "declarative_analyser.m"
                      {
#line 170 "declarative_analyser.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_102_102, mdb__declarative_analyser__V_103_103);
#line 170 "declarative_analyser.m"
                        return;
                      }
#line 170 "declarative_analyser.m"
                    }
#line 170 "declarative_analyser.m"
                  else
#line 3988 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "declarative_analyser.m"
            }
#line 170 "declarative_analyser.m"
          else
#line 170 "declarative_analyser.m"
            {
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 170 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4009 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 170 "declarative_analyser.m"
              else
#line 170 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4015 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "declarative_analyser.m"
                else
#line 170 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4021 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 170 "declarative_analyser.m"
                  else
#line 170 "declarative_analyser.m"
                    {
#line 170 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 170 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 170 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 170 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
#line 170 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
#line 170 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_28_28;

#line 170 "declarative_analyser.m"
                      {
#line 170 "declarative_analyser.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_28_28, mdb__declarative_analyser__V_101_101, mdb__declarative_analyser__V_23_23);
                      }
#line 4045 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_28_28 == (MR_Integer) 0);
#line 170 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 170 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_28_28;
#line 170 "declarative_analyser.m"
                      else
#line 170 "declarative_analyser.m"
                        {
#line 170 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_29_29;

#line 170 "declarative_analyser.m"
                          {
#line 170 "declarative_analyser.m"
                            mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_analyser__V_29_29, mdb__declarative_analyser__V_100_100, mdb__declarative_analyser__V_24_24);
                          }
#line 4065 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_29_29 == (MR_Integer) 0);
#line 170 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 170 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_29_29;
#line 170 "declarative_analyser.m"
                          else
#line 170 "declarative_analyser.m"
                            {
#line 170 "declarative_analyser.m"
                              MR_Word mdb__declarative_analyser__V_30_30;

#line 170 "declarative_analyser.m"
                              {
#line 170 "declarative_analyser.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[2], &mdb__declarative_analyser__V_30_30, ((MR_Box) (mdb__declarative_analyser__V_99_99)), ((MR_Box) (mdb__declarative_analyser__V_25_25)));
                              }
#line 4085 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_30_30 == (MR_Integer) 0);
#line 170 "declarative_analyser.m"
                              mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 170 "declarative_analyser.m"
                              if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                                *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_30_30;
#line 170 "declarative_analyser.m"
                              else
#line 170 "declarative_analyser.m"
                                {
#line 170 "declarative_analyser.m"
                                  MR_Word mdb__declarative_analyser__V_31_31;

#line 170 "declarative_analyser.m"
                                  {
#line 170 "declarative_analyser.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[5], &mdb__declarative_analyser__V_31_31, ((MR_Box) (mdb__declarative_analyser__V_98_98)), ((MR_Box) (mdb__declarative_analyser__V_26_26)));
                                  }
#line 4105 "mdb.declarative_analyser.c"
                                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_31_31 == (MR_Integer) 0);
#line 170 "declarative_analyser.m"
                                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 170 "declarative_analyser.m"
                                  if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_31_31;
#line 170 "declarative_analyser.m"
                                  else
#line 170 "declarative_analyser.m"
                                    {
#line 170 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_104_104 = (MR_Integer) mdb__declarative_analyser__V_97_97;
#line 170 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_105_105 = (MR_Integer) mdb__declarative_analyser__V_27_27;

#line 170 "declarative_analyser.m"
                                      {
#line 170 "declarative_analyser.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_104_104, mdb__declarative_analyser__V_105_105);
#line 170 "declarative_analyser.m"
                                        return;
                                      }
#line 170 "declarative_analyser.m"
                                    }
#line 170 "declarative_analyser.m"
                                }
#line 170 "declarative_analyser.m"
                            }
#line 170 "declarative_analyser.m"
                        }
#line 170 "declarative_analyser.m"
                    }
#line 170 "declarative_analyser.m"
            }
#line 170 "declarative_analyser.m"
  }
#line 170 "declarative_analyser.m"
}

#line 170 "declarative_analyser.m"
MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0(
#line 170 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 170 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 170 "declarative_analyser.m"
{
#line 170 "declarative_analyser.m"
  {
#line 170 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 170 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_23 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 170 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_24 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 170 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_23 == mdb__declarative_analyser__CastY_24);
#line 170 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 170 "declarative_analyser.m"
    else
#line 170 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "declarative_analyser.m"
        {
#line 170 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastX_3 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 170 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastY_4 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 170 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_4 == mdb__declarative_analyser__CastX_3);
#line 170 "declarative_analyser.m"
        }
#line 170 "declarative_analyser.m"
      else
#line 170 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 170 "declarative_analyser.m"
          {
#line 170 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeCtorInfo_25_25;
#line 170 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_26_26;
#line 170 "declarative_analyser.m"
            MR_ArrayPtr mdb__declarative_analyser__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 170 "declarative_analyser.m"
            MR_ArrayPtr mdb__declarative_analyser__V_18_18;
#line 170 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_19_19;
#line 170 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_20_20;

#line 170 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 170 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
              {
#line 170 "declarative_analyser.m"
                mdb__declarative_analyser__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "declarative_analyser.m"
                mdb__declarative_analyser__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "declarative_analyser.m"
                mdb__declarative_analyser__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 4220 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__TypeCtorInfo_25_25 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 4222 "mdb.declarative_analyser.c"
                {
#line 4224 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mercury__array____Unify____array_1_0(mdb__declarative_analyser__TypeCtorInfo_25_25, (MR_ArrayPtr) mdb__declarative_analyser__V_15_15, (MR_ArrayPtr) mdb__declarative_analyser__V_18_18);
                }
#line 170 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                  {
#line 4231 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeInfo_26_26 = (MR_Word) &mdb__declarative_analyser_scalar_common_2[0];
#line 4233 "mdb.declarative_analyser.c"
                    {
#line 4235 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_26_26, ((MR_Box) (mdb__declarative_analyser__V_16_16)), ((MR_Box) (mdb__declarative_analyser__V_19_19)));
                    }
#line 170 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 4240 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_17_17 == mdb__declarative_analyser__V_20_20);
#line 170 "declarative_analyser.m"
                  }
#line 170 "declarative_analyser.m"
              }
#line 170 "declarative_analyser.m"
          }
#line 170 "declarative_analyser.m"
        else
#line 170 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 170 "declarative_analyser.m"
            {
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_22_22;

#line 170 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 170 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                {
#line 170 "declarative_analyser.m"
                  mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 4267 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_21_21 == mdb__declarative_analyser__V_22_22);
#line 170 "declarative_analyser.m"
                }
#line 170 "declarative_analyser.m"
            }
#line 170 "declarative_analyser.m"
          else
#line 170 "declarative_analyser.m"
            {
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_29_29;
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_30_30;
#line 170 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 170 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_10_10;
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_11_11;
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_12_12;
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_13_13;
#line 170 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_14_14;

#line 170 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 170 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                {
#line 170 "declarative_analyser.m"
                  mdb__declarative_analyser__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 170 "declarative_analyser.m"
                  mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 170 "declarative_analyser.m"
                  mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 170 "declarative_analyser.m"
                  mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 170 "declarative_analyser.m"
                  mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 4318 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_5_5 == mdb__declarative_analyser__V_10_10);
#line 170 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                    {
#line 4324 "mdb.declarative_analyser.c"
                      {
#line 4326 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_analyser__V_6_6, mdb__declarative_analyser__V_11_11);
                      }
#line 170 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                        {
#line 4333 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__TypeInfo_29_29 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[2];
#line 4335 "mdb.declarative_analyser.c"
                          {
#line 4337 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_29_29, ((MR_Box) (mdb__declarative_analyser__V_7_7)), ((MR_Box) (mdb__declarative_analyser__V_12_12)));
                          }
#line 170 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 170 "declarative_analyser.m"
                            {
#line 4344 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_30_30 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[5];
#line 4346 "mdb.declarative_analyser.c"
                              {
#line 4348 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_30_30, ((MR_Box) (mdb__declarative_analyser__V_8_8)), ((MR_Box) (mdb__declarative_analyser__V_13_13)));
                              }
#line 170 "declarative_analyser.m"
                              if (mdb__declarative_analyser__succeeded)
#line 4353 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_9_9 == mdb__declarative_analyser__V_14_14);
#line 170 "declarative_analyser.m"
                            }
#line 170 "declarative_analyser.m"
                        }
#line 170 "declarative_analyser.m"
                    }
#line 170 "declarative_analyser.m"
                }
#line 170 "declarative_analyser.m"
            }
#line 170 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 170 "declarative_analyser.m"
  }
#line 170 "declarative_analyser.m"
}

#line 248 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0(
#line 248 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 248 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 248 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 248 "declarative_analyser.m"
{
#line 248 "declarative_analyser.m"
  {
#line 248 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 248 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_229 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 248 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_230 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 248 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_229 == mdb__declarative_analyser__CastY_230);
#line 248 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 4396 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "declarative_analyser.m"
    else
#line 248 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 248 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 248 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "declarative_analyser.m"
        else
#line 248 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 248 "declarative_analyser.m"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
          else
#line 248 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 248 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
            else
#line 248 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "declarative_analyser.m"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
              else
#line 248 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 248 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                else
#line 248 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 248 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                  else
#line 248 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4440 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                    else
#line 248 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4446 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                      else
#line 4450 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
      else
#line 248 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 248 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 248 "declarative_analyser.m"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
          else
#line 248 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 248 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "declarative_analyser.m"
            else
#line 248 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 248 "declarative_analyser.m"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
              else
#line 248 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                else
#line 248 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 248 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                  else
#line 248 "declarative_analyser.m"
                    if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 248 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                    else
#line 248 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4494 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                      else
#line 248 "declarative_analyser.m"
                        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4500 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                        else
#line 4504 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
        else
#line 248 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 248 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 248 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
            else
#line 248 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 248 "declarative_analyser.m"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
              else
#line 248 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 248 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "declarative_analyser.m"
                else
#line 248 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                  else
#line 248 "declarative_analyser.m"
                    if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 248 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                    else
#line 248 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 248 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                      else
#line 248 "declarative_analyser.m"
                        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4548 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                        else
#line 248 "declarative_analyser.m"
                          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4554 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                          else
#line 4558 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
          else
#line 248 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 248 "declarative_analyser.m"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
              else
#line 248 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 248 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                else
#line 248 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 248 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                  else
#line 248 "declarative_analyser.m"
                    if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "declarative_analyser.m"
                    else
#line 248 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 248 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                      else
#line 248 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 248 "declarative_analyser.m"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                        else
#line 248 "declarative_analyser.m"
                          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4602 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                          else
#line 248 "declarative_analyser.m"
                            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4608 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                            else
#line 4612 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
            else
#line 248 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 248 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 248 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                else
#line 248 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 248 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                  else
#line 248 "declarative_analyser.m"
                    if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 248 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                    else
#line 248 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                      else
#line 248 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 248 "declarative_analyser.m"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "declarative_analyser.m"
                        else
#line 248 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 248 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                          else
#line 248 "declarative_analyser.m"
                            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4656 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                            else
#line 248 "declarative_analyser.m"
                              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4662 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                              else
#line 4666 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
              else
#line 248 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 248 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 248 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                  else
#line 248 "declarative_analyser.m"
                    if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 248 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                    else
#line 248 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 248 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                      else
#line 248 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "declarative_analyser.m"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                        else
#line 248 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 248 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                          else
#line 248 "declarative_analyser.m"
                            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 248 "declarative_analyser.m"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "declarative_analyser.m"
                            else
#line 248 "declarative_analyser.m"
                              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4710 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                              else
#line 248 "declarative_analyser.m"
                                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4716 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                                else
#line 4720 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                else
#line 248 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 248 "declarative_analyser.m"
                    {
#line 248 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_243_243 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_245_245 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 248 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 4737 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                      else
#line 248 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 4743 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                        else
#line 248 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 4749 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                          else
#line 248 "declarative_analyser.m"
                            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4755 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                            else
#line 248 "declarative_analyser.m"
                              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4761 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                              else
#line 248 "declarative_analyser.m"
                                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4767 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                                else
#line 248 "declarative_analyser.m"
                                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 248 "declarative_analyser.m"
                                    {
#line 248 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 248 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 248 "declarative_analyser.m"
                                      MR_Word mdb__declarative_analyser__V_150_150;

#line 248 "declarative_analyser.m"
                                      {
#line 248 "declarative_analyser.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_150_150, mdb__declarative_analyser__V_245_245, mdb__declarative_analyser__V_147_147);
                                      }
#line 4789 "mdb.declarative_analyser.c"
                                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_150_150 == (MR_Integer) 0);
#line 248 "declarative_analyser.m"
                                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 248 "declarative_analyser.m"
                                      if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_150_150;
#line 248 "declarative_analyser.m"
                                      else
#line 248 "declarative_analyser.m"
                                        {
#line 248 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_151_151;

#line 248 "declarative_analyser.m"
                                          {
#line 248 "declarative_analyser.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_151_151, mdb__declarative_analyser__V_244_244, mdb__declarative_analyser__V_148_148);
                                          }
#line 4809 "mdb.declarative_analyser.c"
                                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_151_151 == (MR_Integer) 0);
#line 248 "declarative_analyser.m"
                                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 248 "declarative_analyser.m"
                                          if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_151_151;
#line 248 "declarative_analyser.m"
                                          else
#line 248 "declarative_analyser.m"
                                            {
#line 248 "declarative_analyser.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_243_243, mdb__declarative_analyser__V_149_149);
#line 248 "declarative_analyser.m"
                                              return;
                                            }
#line 248 "declarative_analyser.m"
                                        }
#line 248 "declarative_analyser.m"
                                    }
#line 248 "declarative_analyser.m"
                                  else
#line 248 "declarative_analyser.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4834 "mdb.declarative_analyser.c"
                                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                                    else
#line 4838 "mdb.declarative_analyser.c"
                                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                    }
#line 248 "declarative_analyser.m"
                  else
#line 248 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 248 "declarative_analyser.m"
                      {
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 248 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_249_249 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "declarative_analyser.m"
                        MR_String mdb__declarative_analyser__V_250_250 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 248 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 4863 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                        else
#line 248 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 4869 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                          else
#line 248 "declarative_analyser.m"
                            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 4875 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                            else
#line 248 "declarative_analyser.m"
                              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4881 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                              else
#line 248 "declarative_analyser.m"
                                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4887 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                                else
#line 248 "declarative_analyser.m"
                                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4893 "mdb.declarative_analyser.c"
                                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                                  else
#line 248 "declarative_analyser.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4899 "mdb.declarative_analyser.c"
                                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                                    else
#line 248 "declarative_analyser.m"
                                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 248 "declarative_analyser.m"
                                        {
#line 248 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 248 "declarative_analyser.m"
                                          MR_String mdb__declarative_analyser__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 248 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
#line 248 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
#line 248 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 5)));
#line 248 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_52_52;
#line 248 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_255_255 = (MR_Integer) mdb__declarative_analyser__V_251_251;
#line 248 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_256_256 = (MR_Integer) mdb__declarative_analyser__V_46_46;

#line 248 "declarative_analyser.m"
                                          {
#line 248 "declarative_analyser.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_52_52, mdb__declarative_analyser__V_255_255, mdb__declarative_analyser__V_256_256);
                                          }
#line 4931 "mdb.declarative_analyser.c"
                                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_52_52 == (MR_Integer) 0);
#line 248 "declarative_analyser.m"
                                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 248 "declarative_analyser.m"
                                          if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_52_52;
#line 248 "declarative_analyser.m"
                                          else
#line 248 "declarative_analyser.m"
                                            {
#line 248 "declarative_analyser.m"
                                              MR_Word mdb__declarative_analyser__V_53_53;

#line 248 "declarative_analyser.m"
                                              {
#line 248 "declarative_analyser.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_analyser__V_53_53, mdb__declarative_analyser__V_250_250, mdb__declarative_analyser__V_47_47);
                                              }
#line 4951 "mdb.declarative_analyser.c"
                                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_53_53 == (MR_Integer) 0);
#line 248 "declarative_analyser.m"
                                              mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 248 "declarative_analyser.m"
                                              if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                                *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_53_53;
#line 248 "declarative_analyser.m"
                                              else
#line 248 "declarative_analyser.m"
                                                {
#line 248 "declarative_analyser.m"
                                                  MR_Word mdb__declarative_analyser__V_54_54;

#line 248 "declarative_analyser.m"
                                                  {
#line 248 "declarative_analyser.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_54_54, mdb__declarative_analyser__V_249_249, mdb__declarative_analyser__V_48_48);
                                                  }
#line 4971 "mdb.declarative_analyser.c"
                                                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_54_54 == (MR_Integer) 0);
#line 248 "declarative_analyser.m"
                                                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 248 "declarative_analyser.m"
                                                  if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_54_54;
#line 248 "declarative_analyser.m"
                                                  else
#line 248 "declarative_analyser.m"
                                                    {
#line 248 "declarative_analyser.m"
                                                      MR_Word mdb__declarative_analyser__V_55_55;

#line 248 "declarative_analyser.m"
                                                      {
#line 248 "declarative_analyser.m"
                                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[3], &mdb__declarative_analyser__V_55_55, ((MR_Box) (mdb__declarative_analyser__V_248_248)), ((MR_Box) (mdb__declarative_analyser__V_49_49)));
                                                      }
#line 4991 "mdb.declarative_analyser.c"
                                                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_55_55 == (MR_Integer) 0);
#line 248 "declarative_analyser.m"
                                                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 248 "declarative_analyser.m"
                                                      if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_55_55;
#line 248 "declarative_analyser.m"
                                                      else
#line 248 "declarative_analyser.m"
                                                        {
#line 248 "declarative_analyser.m"
                                                          MR_Word mdb__declarative_analyser__V_56_56;

#line 248 "declarative_analyser.m"
                                                          {
#line 248 "declarative_analyser.m"
                                                            mdbcomp__prim_data____Compare____proc_label_0_0(&mdb__declarative_analyser__V_56_56, mdb__declarative_analyser__V_247_247, mdb__declarative_analyser__V_50_50);
                                                          }
#line 5011 "mdb.declarative_analyser.c"
                                                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_56_56 == (MR_Integer) 0);
#line 248 "declarative_analyser.m"
                                                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 248 "declarative_analyser.m"
                                                          if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_56_56;
#line 248 "declarative_analyser.m"
                                                          else
#line 248 "declarative_analyser.m"
                                                            {
#line 248 "declarative_analyser.m"
                                                              MR_Integer mdb__declarative_analyser__V_257_257 = (MR_Integer) mdb__declarative_analyser__V_246_246;
#line 248 "declarative_analyser.m"
                                                              MR_Integer mdb__declarative_analyser__V_258_258 = (MR_Integer) mdb__declarative_analyser__V_51_51;

#line 248 "declarative_analyser.m"
                                                              {
#line 248 "declarative_analyser.m"
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_257_257, mdb__declarative_analyser__V_258_258);
#line 248 "declarative_analyser.m"
                                                                return;
                                                              }
#line 248 "declarative_analyser.m"
                                                            }
#line 248 "declarative_analyser.m"
                                                        }
#line 248 "declarative_analyser.m"
                                                    }
#line 248 "declarative_analyser.m"
                                                }
#line 248 "declarative_analyser.m"
                                            }
#line 248 "declarative_analyser.m"
                                        }
#line 248 "declarative_analyser.m"
                                      else
#line 5049 "mdb.declarative_analyser.c"
                                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                      }
#line 248 "declarative_analyser.m"
                    else
#line 248 "declarative_analyser.m"
                      {
#line 248 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_252_252 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_253_253 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 248 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 5066 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                        else
#line 248 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 5072 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                          else
#line 248 "declarative_analyser.m"
                            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5078 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_analyser.m"
                            else
#line 248 "declarative_analyser.m"
                              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5084 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                              else
#line 248 "declarative_analyser.m"
                                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5090 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                                else
#line 248 "declarative_analyser.m"
                                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5096 "mdb.declarative_analyser.c"
                                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                                  else
#line 248 "declarative_analyser.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5102 "mdb.declarative_analyser.c"
                                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                                    else
#line 248 "declarative_analyser.m"
                                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5108 "mdb.declarative_analyser.c"
                                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_analyser.m"
                                      else
#line 248 "declarative_analyser.m"
                                        {
#line 248 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 248 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_195_195 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 248 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_197_197;
#line 248 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_259_259 = (MR_Integer) mdb__declarative_analyser__V_254_254;
#line 248 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_260_260 = (MR_Integer) mdb__declarative_analyser__V_194_194;

#line 248 "declarative_analyser.m"
                                          {
#line 248 "declarative_analyser.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_197_197, mdb__declarative_analyser__V_259_259, mdb__declarative_analyser__V_260_260);
                                          }
#line 5132 "mdb.declarative_analyser.c"
                                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_197_197 == (MR_Integer) 0);
#line 248 "declarative_analyser.m"
                                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 248 "declarative_analyser.m"
                                          if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_197_197;
#line 248 "declarative_analyser.m"
                                          else
#line 248 "declarative_analyser.m"
                                            {
#line 248 "declarative_analyser.m"
                                              MR_Word mdb__declarative_analyser__V_198_198;

#line 248 "declarative_analyser.m"
                                              {
#line 248 "declarative_analyser.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_198_198, mdb__declarative_analyser__V_253_253, mdb__declarative_analyser__V_195_195);
                                              }
#line 5152 "mdb.declarative_analyser.c"
                                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_198_198 == (MR_Integer) 0);
#line 248 "declarative_analyser.m"
                                              mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 248 "declarative_analyser.m"
                                              if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                                *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_198_198;
#line 248 "declarative_analyser.m"
                                              else
#line 248 "declarative_analyser.m"
                                                {
#line 248 "declarative_analyser.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_252_252, mdb__declarative_analyser__V_196_196);
#line 248 "declarative_analyser.m"
                                                  return;
                                                }
#line 248 "declarative_analyser.m"
                                            }
#line 248 "declarative_analyser.m"
                                        }
#line 248 "declarative_analyser.m"
                      }
#line 248 "declarative_analyser.m"
  }
#line 248 "declarative_analyser.m"
}

#line 248 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0(
#line 248 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 248 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 248 "declarative_analyser.m"
{
#line 248 "declarative_analyser.m"
  {
#line 248 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 248 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_39 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 248 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_40 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 248 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_39 == mdb__declarative_analyser__CastY_40);
#line 248 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 248 "declarative_analyser.m"
    else
#line 248 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 248 "declarative_analyser.m"
        {
#line 248 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastX_21 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 248 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastY_22 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 248 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_22 == mdb__declarative_analyser__CastX_21);
#line 248 "declarative_analyser.m"
        }
#line 248 "declarative_analyser.m"
      else
#line 248 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 248 "declarative_analyser.m"
          {
#line 248 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastX_37 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 248 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastY_38 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 248 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_38 == mdb__declarative_analyser__CastX_37);
#line 248 "declarative_analyser.m"
          }
#line 248 "declarative_analyser.m"
        else
#line 248 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 248 "declarative_analyser.m"
            {
#line 248 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__CastX_35 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 248 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__CastY_36 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 248 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_36 == mdb__declarative_analyser__CastX_35);
#line 248 "declarative_analyser.m"
            }
#line 248 "declarative_analyser.m"
          else
#line 248 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 248 "declarative_analyser.m"
              {
#line 248 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastX_3 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 248 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastY_4 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 248 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_4 == mdb__declarative_analyser__CastX_3);
#line 248 "declarative_analyser.m"
              }
#line 248 "declarative_analyser.m"
            else
#line 248 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 248 "declarative_analyser.m"
                {
#line 248 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__CastX_19 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 248 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__CastY_20 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 248 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_20 == mdb__declarative_analyser__CastX_19);
#line 248 "declarative_analyser.m"
                }
#line 248 "declarative_analyser.m"
              else
#line 248 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 248 "declarative_analyser.m"
                  {
#line 248 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__CastX_5 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 248 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__CastY_6 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 248 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_6 == mdb__declarative_analyser__CastX_5);
#line 248 "declarative_analyser.m"
                  }
#line 248 "declarative_analyser.m"
                else
#line 248 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 248 "declarative_analyser.m"
                    {
#line 248 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 248 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_26_26;
#line 248 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_27_27;
#line 248 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_28_28;

#line 248 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 248 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                        {
#line 248 "declarative_analyser.m"
                          mdb__declarative_analyser__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 248 "declarative_analyser.m"
                          mdb__declarative_analyser__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                          mdb__declarative_analyser__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 5325 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_23_23 == mdb__declarative_analyser__V_26_26);
#line 248 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                            {
#line 5331 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_24_24 == mdb__declarative_analyser__V_27_27);
#line 248 "declarative_analyser.m"
                              if (mdb__declarative_analyser__succeeded)
#line 5335 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_25_25 == mdb__declarative_analyser__V_28_28);
#line 248 "declarative_analyser.m"
                            }
#line 248 "declarative_analyser.m"
                        }
#line 248 "declarative_analyser.m"
                    }
#line 248 "declarative_analyser.m"
                  else
#line 248 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 248 "declarative_analyser.m"
                      {
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__TypeInfo_41_41;
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "declarative_analyser.m"
                        MR_String mdb__declarative_analyser__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 5)));
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_13_13;
#line 248 "declarative_analyser.m"
                        MR_String mdb__declarative_analyser__V_14_14;
#line 248 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_15_15;
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_16_16;
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_17_17;
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_18_18;

#line 248 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                          {
#line 248 "declarative_analyser.m"
                            mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 248 "declarative_analyser.m"
                            mdb__declarative_analyser__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                            mdb__declarative_analyser__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "declarative_analyser.m"
                            mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 248 "declarative_analyser.m"
                            mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 248 "declarative_analyser.m"
                            mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
#line 5394 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_7_7 == mdb__declarative_analyser__V_13_13);
#line 248 "declarative_analyser.m"
                            if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                              {
#line 5400 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = (strcmp(mdb__declarative_analyser__V_8_8, mdb__declarative_analyser__V_14_14) == 0);
#line 248 "declarative_analyser.m"
                                if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                  {
#line 5406 "mdb.declarative_analyser.c"
                                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_9_9 == mdb__declarative_analyser__V_15_15);
#line 248 "declarative_analyser.m"
                                    if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                      {
#line 5412 "mdb.declarative_analyser.c"
                                        mdb__declarative_analyser__TypeInfo_41_41 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[3];
#line 5414 "mdb.declarative_analyser.c"
                                        {
#line 5416 "mdb.declarative_analyser.c"
                                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_41_41, ((MR_Box) (mdb__declarative_analyser__V_10_10)), ((MR_Box) (mdb__declarative_analyser__V_16_16)));
                                        }
#line 248 "declarative_analyser.m"
                                        if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                                          {
#line 5423 "mdb.declarative_analyser.c"
                                            {
#line 5425 "mdb.declarative_analyser.c"
                                              mdb__declarative_analyser__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdb__declarative_analyser__V_11_11, mdb__declarative_analyser__V_17_17);
                                            }
#line 248 "declarative_analyser.m"
                                            if (mdb__declarative_analyser__succeeded)
#line 5430 "mdb.declarative_analyser.c"
                                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_12_12 == mdb__declarative_analyser__V_18_18);
#line 248 "declarative_analyser.m"
                                          }
#line 248 "declarative_analyser.m"
                                      }
#line 248 "declarative_analyser.m"
                                  }
#line 248 "declarative_analyser.m"
                              }
#line 248 "declarative_analyser.m"
                          }
#line 248 "declarative_analyser.m"
                      }
#line 248 "declarative_analyser.m"
                    else
#line 248 "declarative_analyser.m"
                      {
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 248 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_32_32;
#line 248 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_33_33;
#line 248 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_34_34;

#line 248 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 248 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                          {
#line 248 "declarative_analyser.m"
                            mdb__declarative_analyser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 248 "declarative_analyser.m"
                            mdb__declarative_analyser__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "declarative_analyser.m"
                            mdb__declarative_analyser__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 5473 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_29_29 == mdb__declarative_analyser__V_32_32);
#line 248 "declarative_analyser.m"
                            if (mdb__declarative_analyser__succeeded)
#line 248 "declarative_analyser.m"
                              {
#line 5479 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_30_30 == mdb__declarative_analyser__V_33_33);
#line 248 "declarative_analyser.m"
                                if (mdb__declarative_analyser__succeeded)
#line 5483 "mdb.declarative_analyser.c"
                                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_31_31 == mdb__declarative_analyser__V_34_34);
#line 248 "declarative_analyser.m"
                              }
#line 248 "declarative_analyser.m"
                          }
#line 248 "declarative_analyser.m"
                      }
#line 248 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 248 "declarative_analyser.m"
  }
#line 248 "declarative_analyser.m"
}

#line 335 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0(
#line 335 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 335 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 335 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 335 "declarative_analyser.m"
{
#line 335 "declarative_analyser.m"
  {
#line 335 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 335 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 335 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 335 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_8 == mdb__declarative_analyser__CastY_9);
#line 335 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 5522 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 335 "declarative_analyser.m"
    else
#line 335 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 335 "declarative_analyser.m"
        else
#line 5534 "mdb.declarative_analyser.c"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 335 "declarative_analyser.m"
      else
#line 335 "declarative_analyser.m"
        {
#line 335 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 335 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5545 "mdb.declarative_analyser.c"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 335 "declarative_analyser.m"
          else
#line 335 "declarative_analyser.m"
            {
#line 335 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));

#line 335 "declarative_analyser.m"
              {
#line 335 "declarative_analyser.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_11_11, mdb__declarative_analyser__V_5_5);
#line 335 "declarative_analyser.m"
                return;
              }
#line 335 "declarative_analyser.m"
            }
#line 335 "declarative_analyser.m"
        }
#line 335 "declarative_analyser.m"
  }
#line 335 "declarative_analyser.m"
}

#line 335 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0(
#line 335 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 335 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 335 "declarative_analyser.m"
{
#line 335 "declarative_analyser.m"
  {
#line 335 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 335 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_7 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 335 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 335 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_7 == mdb__declarative_analyser__CastY_8);
#line 335 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 335 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 335 "declarative_analyser.m"
    else
#line 335 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 335 "declarative_analyser.m"
        {
#line 335 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastX_5 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 335 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastY_6 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 335 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_6 == mdb__declarative_analyser__CastX_5);
#line 335 "declarative_analyser.m"
        }
#line 335 "declarative_analyser.m"
      else
#line 335 "declarative_analyser.m"
        {
#line 335 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 335 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_4_4;

#line 335 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 335 "declarative_analyser.m"
          if (mdb__declarative_analyser__succeeded)
#line 335 "declarative_analyser.m"
            {
#line 335 "declarative_analyser.m"
              mdb__declarative_analyser__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 5626 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_3_3 == mdb__declarative_analyser__V_4_4);
#line 335 "declarative_analyser.m"
            }
#line 335 "declarative_analyser.m"
        }
#line 335 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 335 "declarative_analyser.m"
  }
#line 335 "declarative_analyser.m"
}

#line 84 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0(
#line 84 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_10,
#line 84 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 84 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 84 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 84 "declarative_analyser.m"
{
#line 84 "declarative_analyser.m"
  {
#line 84 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 84 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 84 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 84 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_8 == mdb__declarative_analyser__CastY_9);
#line 84 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 5665 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 84 "declarative_analyser.m"
    else
#line 84 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 84 "declarative_analyser.m"
        else
#line 5677 "mdb.declarative_analyser.c"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "declarative_analyser.m"
      else
#line 84 "declarative_analyser.m"
        {
#line 84 "declarative_analyser.m"
          MR_Box mdb__declarative_analyser__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0));

#line 84 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5688 "mdb.declarative_analyser.c"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 84 "declarative_analyser.m"
          else
#line 84 "declarative_analyser.m"
            {
#line 84 "declarative_analyser.m"
              MR_Box mdb__declarative_analyser__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0));

#line 84 "declarative_analyser.m"
              {
#line 84 "declarative_analyser.m"
                mercury__builtin__compare_3_p_0(mdb__declarative_analyser__TypeInfo_for_T_10, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_11_11, mdb__declarative_analyser__V_5_5);
#line 84 "declarative_analyser.m"
                return;
              }
#line 84 "declarative_analyser.m"
            }
#line 84 "declarative_analyser.m"
        }
#line 84 "declarative_analyser.m"
  }
#line 84 "declarative_analyser.m"
}

#line 84 "declarative_analyser.m"
MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0(
#line 84 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_9,
#line 84 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 84 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 84 "declarative_analyser.m"
{
#line 84 "declarative_analyser.m"
  {
#line 84 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 84 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_7 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 84 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 84 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_7 == mdb__declarative_analyser__CastY_8);
#line 84 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 84 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 84 "declarative_analyser.m"
    else
#line 84 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 84 "declarative_analyser.m"
        {
#line 84 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastX_5 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 84 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastY_6 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 84 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_6 == mdb__declarative_analyser__CastX_5);
#line 84 "declarative_analyser.m"
        }
#line 84 "declarative_analyser.m"
      else
#line 84 "declarative_analyser.m"
        {
#line 84 "declarative_analyser.m"
          MR_Box mdb__declarative_analyser__V_3_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0));
#line 84 "declarative_analyser.m"
          MR_Box mdb__declarative_analyser__V_4_4;

#line 84 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 84 "declarative_analyser.m"
          if (mdb__declarative_analyser__succeeded)
#line 84 "declarative_analyser.m"
            {
#line 84 "declarative_analyser.m"
              mdb__declarative_analyser__V_4_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0));
#line 5771 "mdb.declarative_analyser.c"
              {
#line 5773 "mdb.declarative_analyser.c"
                return mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_9, mdb__declarative_analyser__V_3_3, mdb__declarative_analyser__V_4_4);
              }
#line 84 "declarative_analyser.m"
            }
#line 84 "declarative_analyser.m"
        }
#line 84 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 84 "declarative_analyser.m"
  }
#line 84 "declarative_analyser.m"
}

#line 299 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0(
#line 299 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_23,
#line 299 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 299 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 299 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 299 "declarative_analyser.m"
{
#line 299 "declarative_analyser.m"
  {
#line 299 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 299 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_21 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 299 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_22 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 299 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_21 == mdb__declarative_analyser__CastY_22);
#line 299 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 5813 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 299 "declarative_analyser.m"
    else
#line 299 "declarative_analyser.m"
      {
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 5)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_16_16;

#line 299 "declarative_analyser.m"
        {
#line 299 "declarative_analyser.m"
          mdb__declarative_edt____Compare____search_space_1_0(mdb__declarative_analyser__TypeInfo_for_T_23, &mdb__declarative_analyser__V_16_16, mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_10_10);
        }
#line 5851 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_16_16 == (MR_Integer) 0);
#line 299 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 299 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 299 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_16_16;
#line 299 "declarative_analyser.m"
        else
#line 299 "declarative_analyser.m"
          {
#line 299 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_17_17;

#line 299 "declarative_analyser.m"
            {
#line 299 "declarative_analyser.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[0], &mdb__declarative_analyser__V_17_17, ((MR_Box) (mdb__declarative_analyser__V_5_5)), ((MR_Box) (mdb__declarative_analyser__V_11_11)));
            }
#line 5871 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_17_17 == (MR_Integer) 0);
#line 299 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 299 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 299 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_17_17;
#line 299 "declarative_analyser.m"
            else
#line 299 "declarative_analyser.m"
              {
#line 299 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_18_18;

#line 299 "declarative_analyser.m"
                {
#line 299 "declarative_analyser.m"
                  mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__V_18_18, mdb__declarative_analyser__V_6_6, mdb__declarative_analyser__V_12_12);
                }
#line 5891 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_18_18 == (MR_Integer) 0);
#line 299 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 299 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 299 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_18_18;
#line 299 "declarative_analyser.m"
                else
#line 299 "declarative_analyser.m"
                  {
#line 299 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_19_19;

#line 299 "declarative_analyser.m"
                    {
#line 299 "declarative_analyser.m"
                      mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__V_19_19, mdb__declarative_analyser__V_7_7, mdb__declarative_analyser__V_13_13);
                    }
#line 5911 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_19_19 == (MR_Integer) 0);
#line 299 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 299 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 299 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_19_19;
#line 299 "declarative_analyser.m"
                    else
#line 299 "declarative_analyser.m"
                      {
#line 299 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_20_20;

#line 299 "declarative_analyser.m"
                        {
#line 299 "declarative_analyser.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[1], &mdb__declarative_analyser__V_20_20, ((MR_Box) (mdb__declarative_analyser__V_8_8)), ((MR_Box) (mdb__declarative_analyser__V_14_14)));
                        }
#line 5931 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_20_20 == (MR_Integer) 0);
#line 299 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 299 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 299 "declarative_analyser.m"
                          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_20_20;
#line 299 "declarative_analyser.m"
                        else
#line 299 "declarative_analyser.m"
                          {
#line 299 "declarative_analyser.m"
                            MR_Word mdb__declarative_analyser__TypeInfo_31_31;

#line 5946 "mdb.declarative_analyser.c"
                            {
#line 5948 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5950 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_31_31, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1));
#line 5952 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_31_31, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_23));
#line 5954 "mdb.declarative_analyser.c"
                            }
#line 299 "declarative_analyser.m"
                            {
#line 299 "declarative_analyser.m"
                              mercury__maybe____Compare____maybe_1_0(mdb__declarative_analyser__TypeInfo_31_31, mdb__declarative_analyser__HeadVar__1_1, (MR_Word) mdb__declarative_analyser__V_9_9, (MR_Word) mdb__declarative_analyser__V_15_15);
#line 299 "declarative_analyser.m"
                              return;
                            }
#line 299 "declarative_analyser.m"
                          }
#line 299 "declarative_analyser.m"
                      }
#line 299 "declarative_analyser.m"
                  }
#line 299 "declarative_analyser.m"
              }
#line 299 "declarative_analyser.m"
          }
#line 299 "declarative_analyser.m"
      }
#line 299 "declarative_analyser.m"
  }
#line 299 "declarative_analyser.m"
}

#line 299 "declarative_analyser.m"
MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0(
#line 299 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_17,
#line 299 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 299 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 299 "declarative_analyser.m"
{
#line 299 "declarative_analyser.m"
  {
#line 299 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 299 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_15 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 299 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_16 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 299 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_15 == mdb__declarative_analyser__CastY_16);
#line 299 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 299 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 299 "declarative_analyser.m"
    else
#line 299 "declarative_analyser.m"
      {
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_20_20;
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_21_21;
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeCtorInfo_22_22;
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_23_23;
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 5)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 299 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));

#line 6043 "mdb.declarative_analyser.c"
        {
#line 6045 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt____Unify____search_space_1_0(mdb__declarative_analyser__TypeInfo_for_T_17, mdb__declarative_analyser__V_3_3, mdb__declarative_analyser__V_9_9);
        }
#line 299 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 299 "declarative_analyser.m"
          {
#line 6052 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__TypeInfo_20_20 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[0];
#line 6054 "mdb.declarative_analyser.c"
            {
#line 6056 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_20_20, ((MR_Box) (mdb__declarative_analyser__V_4_4)), ((MR_Box) (mdb__declarative_analyser__V_10_10)));
            }
#line 299 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 299 "declarative_analyser.m"
              {
#line 6063 "mdb.declarative_analyser.c"
                {
#line 6065 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(mdb__declarative_analyser__V_5_5, mdb__declarative_analyser__V_11_11);
                }
#line 299 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 299 "declarative_analyser.m"
                  {
#line 6072 "mdb.declarative_analyser.c"
                    {
#line 6074 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(mdb__declarative_analyser__V_6_6, mdb__declarative_analyser__V_12_12);
                    }
#line 299 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 299 "declarative_analyser.m"
                      {
#line 6081 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeInfo_21_21 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[1];
#line 6083 "mdb.declarative_analyser.c"
                        {
#line 6085 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_21_21, ((MR_Box) (mdb__declarative_analyser__V_7_7)), ((MR_Box) (mdb__declarative_analyser__V_13_13)));
                        }
#line 299 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 299 "declarative_analyser.m"
                          {
#line 6092 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1;
#line 6094 "mdb.declarative_analyser.c"
                            {
#line 6096 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6098 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__TypeCtorInfo_22_22));
#line 6100 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_17));
#line 6102 "mdb.declarative_analyser.c"
                            }
#line 6104 "mdb.declarative_analyser.c"
                            {
#line 6106 "mdb.declarative_analyser.c"
                              return mdb__declarative_analyser__succeeded = mercury__maybe____Unify____maybe_1_0(mdb__declarative_analyser__TypeInfo_23_23, (MR_Word) mdb__declarative_analyser__V_8_8, (MR_Word) mdb__declarative_analyser__V_14_14);
                            }
#line 299 "declarative_analyser.m"
                          }
#line 299 "declarative_analyser.m"
                      }
#line 299 "declarative_analyser.m"
                  }
#line 299 "declarative_analyser.m"
              }
#line 299 "declarative_analyser.m"
          }
#line 299 "declarative_analyser.m"
      }
#line 299 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 299 "declarative_analyser.m"
  }
#line 299 "declarative_analyser.m"
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
#line 6154 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "declarative_analyser.m"
    else
#line 35 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 35 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 35 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 35 "declarative_analyser.m"
        else
#line 35 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6168 "mdb.declarative_analyser.c"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
          else
#line 35 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6174 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
            else
#line 35 "declarative_analyser.m"
              if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6180 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
              else
#line 35 "declarative_analyser.m"
                if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6186 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                else
#line 6190 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
      else
#line 35 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 35 "declarative_analyser.m"
          {
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 35 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 35 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6205 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
            else
#line 35 "declarative_analyser.m"
              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
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
#line 6225 "mdb.declarative_analyser.c"
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

#line 6240 "mdb.declarative_analyser.c"
                      {
#line 6242 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6244 "mdb.declarative_analyser.c"
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_86_86, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 6246 "mdb.declarative_analyser.c"
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_86_86, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_79));
#line 6248 "mdb.declarative_analyser.c"
                      }
#line 35 "declarative_analyser.m"
                      {
#line 35 "declarative_analyser.m"
                        mercury__list____Compare____list_1_0(mdb__declarative_analyser__TypeInfo_86_86, mdb__declarative_analyser__HeadVar__1_1, (MR_Word) mdb__declarative_analyser__V_89_89, (MR_Word) mdb__declarative_analyser__V_15_15);
#line 35 "declarative_analyser.m"
                        return;
                      }
#line 35 "declarative_analyser.m"
                    }
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
              else
#line 35 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6265 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                else
#line 35 "declarative_analyser.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6271 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6277 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    else
#line 6281 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
          }
#line 35 "declarative_analyser.m"
        else
#line 35 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 35 "declarative_analyser.m"
            {
#line 35 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 35 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6296 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
              else
#line 35 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6302 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                else
#line 35 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 35 "declarative_analyser.m"
                    {
#line 35 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));

#line 35 "declarative_analyser.m"
                      {
#line 35 "declarative_analyser.m"
                        mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_91_91, mdb__declarative_analyser__V_34_34);
#line 35 "declarative_analyser.m"
                        return;
                      }
#line 35 "declarative_analyser.m"
                    }
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6326 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    else
#line 35 "declarative_analyser.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6332 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                      else
#line 6336 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
            }
#line 35 "declarative_analyser.m"
          else
#line 35 "declarative_analyser.m"
            if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 35 "declarative_analyser.m"
              {
#line 35 "declarative_analyser.m"
                MR_Box mdb__declarative_analyser__V_92_92 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1));

#line 35 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6351 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                else
#line 35 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6357 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6363 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    else
#line 35 "declarative_analyser.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 35 "declarative_analyser.m"
                        {
#line 35 "declarative_analyser.m"
                          MR_Box mdb__declarative_analyser__V_48_48 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1));

#line 35 "declarative_analyser.m"
                          {
#line 35 "declarative_analyser.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_92_92, mdb__declarative_analyser__V_48_48);
#line 35 "declarative_analyser.m"
                            return;
                          }
#line 35 "declarative_analyser.m"
                        }
#line 35 "declarative_analyser.m"
                      else
#line 35 "declarative_analyser.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6387 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                        else
#line 6391 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
            else
#line 35 "declarative_analyser.m"
              if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 35 "declarative_analyser.m"
                {
#line 35 "declarative_analyser.m"
                  MR_Box mdb__declarative_analyser__V_93_93 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1));

#line 35 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6406 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6412 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    else
#line 35 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6418 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                      else
#line 35 "declarative_analyser.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6424 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                        else
#line 35 "declarative_analyser.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 35 "declarative_analyser.m"
                            {
#line 35 "declarative_analyser.m"
                              MR_Box mdb__declarative_analyser__V_62_62 = (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1));

#line 35 "declarative_analyser.m"
                              {
#line 35 "declarative_analyser.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_93_93, mdb__declarative_analyser__V_62_62);
#line 35 "declarative_analyser.m"
                                return;
                              }
#line 35 "declarative_analyser.m"
                            }
#line 35 "declarative_analyser.m"
                          else
#line 6446 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
              else
#line 35 "declarative_analyser.m"
                {
#line 35 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));

#line 35 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6459 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6465 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    else
#line 35 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6471 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                      else
#line 35 "declarative_analyser.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6477 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                        else
#line 35 "declarative_analyser.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6483 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                          else
#line 35 "declarative_analyser.m"
                            {
#line 35 "declarative_analyser.m"
                              MR_Word mdb__declarative_analyser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));

#line 35 "declarative_analyser.m"
                              {
#line 35 "declarative_analyser.m"
                                mdb__declarative_debugger____Compare____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_79, mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_94_94, mdb__declarative_analyser__V_76_76);
#line 35 "declarative_analyser.m"
                                return;
                              }
#line 35 "declarative_analyser.m"
                            }
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
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
      else
#line 35 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
#line 6578 "mdb.declarative_analyser.c"
                {
#line 6580 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mdb__declarative_debugger____Unify____decl_bug_0_0(mdb__declarative_analyser__V_5_5, mdb__declarative_analyser__V_7_7);
                }
#line 35 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 35 "declarative_analyser.m"
                  {
#line 6587 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeCtorInfo_21_21 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1;
#line 6589 "mdb.declarative_analyser.c"
                    {
#line 6591 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6593 "mdb.declarative_analyser.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_22_22, 0) = ((MR_Box) (mdb__declarative_analyser__TypeCtorInfo_21_21));
#line 6595 "mdb.declarative_analyser.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_19));
#line 6597 "mdb.declarative_analyser.c"
                    }
#line 6599 "mdb.declarative_analyser.c"
                    {
#line 6601 "mdb.declarative_analyser.c"
                      return mdb__declarative_analyser__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_analyser__TypeInfo_22_22, (MR_Word) mdb__declarative_analyser__V_6_6, (MR_Word) mdb__declarative_analyser__V_8_8);
                    }
#line 35 "declarative_analyser.m"
                  }
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
          }
#line 35 "declarative_analyser.m"
        else
#line 35 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
#line 6629 "mdb.declarative_analyser.c"
                  {
#line 6631 "mdb.declarative_analyser.c"
                    return mdb__declarative_analyser__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__V_9_9, mdb__declarative_analyser__V_10_10);
                  }
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
            }
#line 35 "declarative_analyser.m"
          else
#line 35 "declarative_analyser.m"
            if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
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
#line 6657 "mdb.declarative_analyser.c"
                    {
#line 6659 "mdb.declarative_analyser.c"
                      return mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__V_11_11, mdb__declarative_analyser__V_12_12);
                    }
#line 35 "declarative_analyser.m"
                  }
#line 35 "declarative_analyser.m"
              }
#line 35 "declarative_analyser.m"
            else
#line 35 "declarative_analyser.m"
              if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
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
#line 6685 "mdb.declarative_analyser.c"
                      {
#line 6687 "mdb.declarative_analyser.c"
                        return mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__V_13_13, mdb__declarative_analyser__V_14_14);
                      }
#line 35 "declarative_analyser.m"
                    }
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
              else
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
#line 6711 "mdb.declarative_analyser.c"
                      {
#line 6713 "mdb.declarative_analyser.c"
                        return mdb__declarative_analyser__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(mdb__declarative_analyser__TypeInfo_for_T_19, mdb__declarative_analyser__V_15_15, mdb__declarative_analyser__V_16_16);
                      }
#line 35 "declarative_analyser.m"
                    }
#line 35 "declarative_analyser.m"
                }
#line 35 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 35 "declarative_analyser.m"
  }
#line 35 "declarative_analyser.m"
}

#line 1349 "declarative_analyser.m"
static MR_String MR_CALL 
mdb__declarative_analyser__search_mode_to_string_1_f_0(
#line 1349 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1)
#line 1349 "declarative_analyser.m"
{
#line 1351 "declarative_analyser.m"
  {
#line 1351 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1351 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__HeadVar__2_2;

#line 1351 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1351 "declarative_analyser.m"
      mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "top down";
#line 1351 "declarative_analyser.m"
    else
#line 1351 "declarative_analyser.m"
      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1358 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "binary search on path";
#line 1351 "declarative_analyser.m"
      else
#line 1351 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1351 "declarative_analyser.m"
          {
#line 1351 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));

#line 1351 "declarative_analyser.m"
            if ((mdb__declarative_analyser__V_18_18 == (MR_Integer) 0))
#line 1360 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "divide and query";
#line 1351 "declarative_analyser.m"
            else
#line 1362 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "suspicion divide and query";
#line 1351 "declarative_analyser.m"
          }
#line 1351 "declarative_analyser.m"
        else
#line 1351 "declarative_analyser.m"
          {
#line 1351 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 1352 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 1352 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 1352 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 1352 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));

#line 1351 "declarative_analyser.m"
            if ((mdb__declarative_analyser__V_19_19 == (MR_Integer) 0))
#line 1354 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking marked sub-term (using accurate algorithm)";
#line 1351 "declarative_analyser.m"
            else
#line 1357 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking marked sub-term (using fast algorithm)";
#line 1351 "declarative_analyser.m"
          }
#line 1351 "declarative_analyser.m"
    return mdb__declarative_analyser__HeadVar__2_2;
#line 1351 "declarative_analyser.m"
  }
#line 1349 "declarative_analyser.m"
}

#line 1264 "declarative_analyser.m"
static MR_String MR_CALL 
mdb__declarative_analyser__weighting_to_reason_string_3_f_0(
#line 1264 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 1264 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Weight1_2,
#line 1264 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Weight2_3)
#line 1264 "declarative_analyser.m"
{
#line 1266 "declarative_analyser.m"
  {
#line 1266 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1266 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__Str_4;

#line 1266 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__1_1 == (MR_Integer) 0))
#line 1266 "declarative_analyser.m"
      {
#line 1266 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__Weight1Str_8;
#line 1266 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__Weight2Str_9;
#line 1266 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__V_11_11;
#line 1266 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__V_12_12;
#line 1266 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__V_14_14;

#line 1267 "declarative_analyser.m"
        {
#line 1267 "declarative_analyser.m"
          mdb__declarative_analyser__Weight1Str_8 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight1_2);
        }
#line 1268 "declarative_analyser.m"
        {
#line 1268 "declarative_analyser.m"
          mdb__declarative_analyser__Weight2Str_9 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight2_3);
        }
#line 1270 "declarative_analyser.m"
        {
#line 1270 "declarative_analyser.m"
          mdb__declarative_analyser__V_14_14 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight2Str_9, (MR_String) " events each.");
        }
#line 1270 "declarative_analyser.m"
        {
#line 1270 "declarative_analyser.m"
          mdb__declarative_analyser__V_12_12 = mercury__string__f_43_43_2_f_0((MR_String) " and ", mdb__declarative_analyser__V_14_14);
        }
#line 1270 "declarative_analyser.m"
        {
#line 1270 "declarative_analyser.m"
          mdb__declarative_analyser__V_11_11 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight1Str_8, mdb__declarative_analyser__V_12_12);
        }
#line 1270 "declarative_analyser.m"
        {
#line 1270 "declarative_analyser.m"
          return mdb__declarative_analyser__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides the suspect area into two regions of ", mdb__declarative_analyser__V_11_11);
        }
#line 1266 "declarative_analyser.m"
      }
#line 1266 "declarative_analyser.m"
    else
#line 1271 "declarative_analyser.m"
      {
#line 1271 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__Weight1Str_19;
#line 1271 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__Weight2Str_20;
#line 1271 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__V_22_22;
#line 1271 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__V_24_24;
#line 1271 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__V_25_25;
#line 1271 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__V_27_27;

#line 1272 "declarative_analyser.m"
        {
#line 1272 "declarative_analyser.m"
          mdb__declarative_analyser__Weight1Str_19 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight1_2);
        }
#line 1273 "declarative_analyser.m"
        {
#line 1273 "declarative_analyser.m"
          mdb__declarative_analyser__Weight2Str_20 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight2_3);
        }
#line 1276 "declarative_analyser.m"
        {
#line 1276 "declarative_analyser.m"
          mdb__declarative_analyser__V_27_27 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight2Str_20, (MR_String) ".");
        }
#line 1276 "declarative_analyser.m"
        {
#line 1276 "declarative_analyser.m"
          mdb__declarative_analyser__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) " and\n        ", mdb__declarative_analyser__V_27_27);
        }
#line 1275 "declarative_analyser.m"
        {
#line 1275 "declarative_analyser.m"
          mdb__declarative_analyser__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight1Str_19, mdb__declarative_analyser__V_25_25);
        }
#line 1275 "declarative_analyser.m"
        {
#line 1275 "declarative_analyser.m"
          mdb__declarative_analyser__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "two regions of suspicion ", mdb__declarative_analyser__V_24_24);
        }
#line 1274 "declarative_analyser.m"
        {
#line 1274 "declarative_analyser.m"
          return mdb__declarative_analyser__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides the suspect area into ", mdb__declarative_analyser__V_22_22);
        }
#line 1271 "declarative_analyser.m"
      }
#line 1266 "declarative_analyser.m"
    return mdb__declarative_analyser__Str_4;
#line 1266 "declarative_analyser.m"
  }
#line 1264 "declarative_analyser.m"
}

#line 1122 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0_1(
#line 1122 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 1122 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 1122 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 1122 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_3,
#line 1122 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_4,
#line 1122 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_5)
#line 1122 "declarative_analyser.m"
{
#line 1122 "declarative_analyser.m"
  {
#line 1122 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;
#line 1122 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__conv1_HeadVar__5_68;
#line 1122 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__conv0_HeadVar__7_70;

#line 1122 "declarative_analyser.m"
    {
#line 1122 "declarative_analyser.m"
      mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1122__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_2), &mdb__declarative_analyser__conv1_HeadVar__5_68, ((MR_Integer) mdb__declarative_analyser__wrapper_arg_4), &mdb__declarative_analyser__conv0_HeadVar__7_70);
    }
#line 1122 "declarative_analyser.m"
    *mdb__declarative_analyser__wrapper_arg_3 = ((MR_Box) (mdb__declarative_analyser__conv1_HeadVar__5_68));
#line 1122 "declarative_analyser.m"
    *mdb__declarative_analyser__wrapper_arg_5 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__7_70));
#line 1122 "declarative_analyser.m"
  }
#line 1122 "declarative_analyser.m"
}

#line 1095 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0(
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1095 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_1,
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_2,
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_3,
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__4_4,
#line 1095 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_5,
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_6,
#line 1095 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1095 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8,
#line 1095 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9)
#line 1095 "declarative_analyser.m"
{
#line 1101 "declarative_analyser.m"
  {
#line 1101 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 1101 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1110 "declarative_analyser.m"
      {
#line 1110 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__LastUnknown_17;
#line 1103 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_59_59;
#line 1103 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__PolyConst2_58;

#line 1103 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
#line 1103 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1103 "declarative_analyser.m"
          {
#line 1103 "declarative_analyser.m"
            mdb__declarative_analyser__LastUnknown_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
#line 7017 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__PolyConst2_58 = (MR_Integer) 2;
#line 7019 "mdb.declarative_analyser.c"
            {
#line 7021 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__PolyConst2_58, &mdb__declarative_analyser__TypeInfo_59_59);
            }
#line 1197 "declarative_analyser.m"
            {
#line 1197 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_59_59, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_17);
            }
#line 1103 "declarative_analyser.m"
          }
#line 1110 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1106 "declarative_analyser.m"
          {
#line 1106 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_61_61;
#line 1106 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_62_62;
#line 1106 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_20_20;
#line 1106 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_21_21;
#line 1106 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_22_22;

#line 7046 "mdb.declarative_analyser.c"
            {
#line 7048 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_61_61);
            }
#line 1108 "declarative_analyser.m"
            {
#line 1108 "declarative_analyser.m"
              mdb__declarative_analyser__V_21_21 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_61_61, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__TopId_5);
            }
#line 7056 "mdb.declarative_analyser.c"
            {
#line 7058 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_62_62);
            }
#line 1109 "declarative_analyser.m"
            {
#line 1109 "declarative_analyser.m"
              mdb__declarative_analyser__V_22_22 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_62_62, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_17);
            }
#line 1107 "declarative_analyser.m"
            {
#line 1107 "declarative_analyser.m"
              mdb__declarative_analyser__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1107 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1107 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 1) = ((MR_Box) (mdb__declarative_analyser__V_21_21));
#line 1107 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 2) = ((MR_Box) (mdb__declarative_analyser__V_22_22));
#line 1107 "declarative_analyser.m"
            }
#line 1106 "declarative_analyser.m"
            {
#line 1106 "declarative_analyser.m"
              MR_Word base;
#line 1106 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "declarative_analyser.m"
              *mdb__declarative_analyser__Response_9 = base;
#line 1106 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_17));
#line 1106 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_20_20));
#line 1106 "declarative_analyser.m"
            }
#line 1109 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
#line 1106 "declarative_analyser.m"
          }
#line 1110 "declarative_analyser.m"
        else
#line 1113 "declarative_analyser.m"
          {
#line 1113 "declarative_analyser.m"
            mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
#line 1113 "declarative_analyser.m"
            return;
          }
#line 1110 "declarative_analyser.m"
      }
#line 1101 "declarative_analyser.m"
    else
#line 1116 "declarative_analyser.m"
      {
#line 1116 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_64_64;
#line 1116 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_65_65;
#line 1116 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeCtorInfo_73_73;
#line 1116 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__SuspectId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__4_4, (MR_Integer) 0)));
#line 1116 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__SuspectIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__4_4, (MR_Integer) 1)));
#line 1116 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__TopWeight_33;
#line 1116 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Target_34;
#line 1116 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Weight_35;
#line 1116 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__MaxWeight_36;
#line 1116 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Heaviest_37;
#line 1116 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_44_44;
#line 1122 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__conv3_MaxWeight_36;
#line 1122 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__conv2_Heaviest_37;

#line 7138 "mdb.declarative_analyser.c"
        {
#line 7140 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_64_64);
        }
#line 1117 "declarative_analyser.m"
        {
#line 1117 "declarative_analyser.m"
          mdb__declarative_analyser__TopWeight_33 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_64_64, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__TopId_5);
        }
#line 1118 "declarative_analyser.m"
        {
#line 1118 "declarative_analyser.m"
          mdb__declarative_analyser__Target_34 = mercury__int__f_47_47_2_f_0(mdb__declarative_analyser__TopWeight_33, (MR_Integer) 2);
        }
#line 7153 "mdb.declarative_analyser.c"
        {
#line 7155 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_65_65);
        }
#line 1121 "declarative_analyser.m"
        {
#line 1121 "declarative_analyser.m"
          mdb__declarative_analyser__Weight_35 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_65_65, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__SuspectId_27);
        }
#line 1122 "declarative_analyser.m"
        {
#line 1122 "declarative_analyser.m"
          mdb__declarative_analyser__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1122 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_8[0]));
#line 1122 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 1) = ((MR_Box) (mdb__declarative_analyser__find_middle_weight_9_p_0_1));
#line 1122 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1122 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57));
#line 1122 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7));
#line 1122 "declarative_analyser.m"
        }
#line 7179 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__TypeCtorInfo_73_73 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 1122 "declarative_analyser.m"
        {
#line 1122 "declarative_analyser.m"
          mercury__list__foldl2_6_p_0(mdb__declarative_analyser__TypeCtorInfo_73_73, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_analyser__TypeCtorInfo_73_73, mdb__declarative_analyser__V_44_44, mdb__declarative_analyser__SuspectIds_28, ((MR_Box) (mdb__declarative_analyser__Weight_35)), &mdb__declarative_analyser__conv3_MaxWeight_36, ((MR_Box) (mdb__declarative_analyser__SuspectId_27)), &mdb__declarative_analyser__conv2_Heaviest_37);
        }
#line 1122 "declarative_analyser.m"
        mdb__declarative_analyser__MaxWeight_36 = ((MR_Integer) mdb__declarative_analyser__conv3_MaxWeight_36);
#line 1122 "declarative_analyser.m"
        mdb__declarative_analyser__Heaviest_37 = ((MR_Integer) mdb__declarative_analyser__conv2_Heaviest_37);
#line 1124 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__MaxWeight_36 > mdb__declarative_analyser__Target_34);
#line 1132 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1129 "declarative_analyser.m"
          {
#line 1129 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__NewMaybeLastUnknown_38;
#line 1125 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_75_75;

#line 7201 "mdb.declarative_analyser.c"
            {
#line 7203 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_75_75);
            }
#line 1125 "declarative_analyser.m"
            {
#line 1125 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_75_75, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__Heaviest_37);
            }
#line 1127 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 1126 "declarative_analyser.m"
              {
#line 1126 "declarative_analyser.m"
                mdb__declarative_analyser__NewMaybeLastUnknown_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1126 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_analyser__NewMaybeLastUnknown_38, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
#line 1126 "declarative_analyser.m"
              }
#line 1127 "declarative_analyser.m"
            else
#line 1128 "declarative_analyser.m"
              mdb__declarative_analyser__NewMaybeLastUnknown_38 = mdb__declarative_analyser__MaybeLastUnknown_6;
#line 1130 "declarative_analyser.m"
            {
#line 1130 "declarative_analyser.m"
              mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__Weighting_3, mdb__declarative_analyser__Heaviest_37, mdb__declarative_analyser__TopId_5, mdb__declarative_analyser__NewMaybeLastUnknown_38, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
#line 1130 "declarative_analyser.m"
              return;
            }
#line 1129 "declarative_analyser.m"
          }
#line 1132 "declarative_analyser.m"
        else
#line 1156 "declarative_analyser.m"
          {
#line 1133 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_76_76;

#line 7241 "mdb.declarative_analyser.c"
            {
#line 7243 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_76_76);
            }
#line 1133 "declarative_analyser.m"
            {
#line 1133 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_76_76, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__Heaviest_37);
            }
#line 1156 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 1151 "declarative_analyser.m"
              {
#line 1151 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__LastUnknown_39;
#line 1135 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_77_77;

#line 1135 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
#line 1135 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1135 "declarative_analyser.m"
                  {
#line 1135 "declarative_analyser.m"
                    mdb__declarative_analyser__LastUnknown_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
#line 7268 "mdb.declarative_analyser.c"
                    {
#line 7270 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_77_77);
                    }
#line 1197 "declarative_analyser.m"
                    {
#line 1197 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_77_77, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_39);
                    }
#line 1135 "declarative_analyser.m"
                  }
#line 1151 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1138 "declarative_analyser.m"
                  {
#line 1138 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_78_78;
#line 1138 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__LastUnknownWeight_40;
#line 1142 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_46_46;
#line 1142 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_47_47;

#line 7293 "mdb.declarative_analyser.c"
                    {
#line 7295 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_78_78);
                    }
#line 1138 "declarative_analyser.m"
                    {
#line 1138 "declarative_analyser.m"
                      mdb__declarative_analyser__LastUnknownWeight_40 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_39);
                    }
#line 1142 "declarative_analyser.m"
                    mdb__declarative_analyser__V_46_46 = (mdb__declarative_analyser__LastUnknownWeight_40 - mdb__declarative_analyser__Target_34);
#line 1142 "declarative_analyser.m"
                    mdb__declarative_analyser__V_47_47 = (mdb__declarative_analyser__Target_34 - mdb__declarative_analyser__MaxWeight_36);
#line 1142 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_46_46 < mdb__declarative_analyser__V_47_47);
#line 1146 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 1143 "declarative_analyser.m"
                      {
#line 1143 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_48_48;

#line 1144 "declarative_analyser.m"
                        {
#line 1144 "declarative_analyser.m"
                          mdb__declarative_analyser__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1144 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1144 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1144 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 2) = ((MR_Box) (mdb__declarative_analyser__LastUnknownWeight_40));
#line 1144 "declarative_analyser.m"
                        }
#line 1143 "declarative_analyser.m"
                        {
#line 1143 "declarative_analyser.m"
                          MR_Word base;
#line 1143 "declarative_analyser.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = base;
#line 1143 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_39));
#line 1143 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_48_48));
#line 1143 "declarative_analyser.m"
                        }
#line 1143 "declarative_analyser.m"
                      }
#line 1146 "declarative_analyser.m"
                    else
#line 1147 "declarative_analyser.m"
                      {
#line 1147 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_49_49;

#line 1148 "declarative_analyser.m"
                        {
#line 1148 "declarative_analyser.m"
                          mdb__declarative_analyser__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1148 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1148 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1148 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 2) = ((MR_Box) (mdb__declarative_analyser__MaxWeight_36));
#line 1148 "declarative_analyser.m"
                        }
#line 1147 "declarative_analyser.m"
                        {
#line 1147 "declarative_analyser.m"
                          MR_Word base;
#line 1147 "declarative_analyser.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = base;
#line 1147 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
#line 1147 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 1147 "declarative_analyser.m"
                        }
#line 1147 "declarative_analyser.m"
                      }
#line 1138 "declarative_analyser.m"
                  }
#line 1151 "declarative_analyser.m"
                else
#line 1152 "declarative_analyser.m"
                  {
#line 1152 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_50_50;

#line 1153 "declarative_analyser.m"
                    {
#line 1153 "declarative_analyser.m"
                      mdb__declarative_analyser__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1153 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1153 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1153 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 2) = ((MR_Box) (mdb__declarative_analyser__MaxWeight_36));
#line 1153 "declarative_analyser.m"
                    }
#line 1152 "declarative_analyser.m"
                    {
#line 1152 "declarative_analyser.m"
                      MR_Word base;
#line 1152 "declarative_analyser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "declarative_analyser.m"
                      *mdb__declarative_analyser__Response_9 = base;
#line 1152 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
#line 1152 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 1152 "declarative_analyser.m"
                    }
#line 1152 "declarative_analyser.m"
                  }
#line 1153 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
#line 1151 "declarative_analyser.m"
              }
#line 1156 "declarative_analyser.m"
            else
#line 1165 "declarative_analyser.m"
              {
#line 1165 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__LastUnknown_55;
#line 1158 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_79_79;

#line 1158 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
#line 1158 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1158 "declarative_analyser.m"
                  {
#line 1158 "declarative_analyser.m"
                    mdb__declarative_analyser__LastUnknown_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
#line 7437 "mdb.declarative_analyser.c"
                    {
#line 7439 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_79_79);
                    }
#line 1197 "declarative_analyser.m"
                    {
#line 1197 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_79_79, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_55);
                    }
#line 1158 "declarative_analyser.m"
                  }
#line 1165 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1161 "declarative_analyser.m"
                  {
#line 1161 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_80_80;
#line 1161 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_51_51;
#line 1161 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__LastUnknownWeight_54;

#line 7460 "mdb.declarative_analyser.c"
                    {
#line 7462 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
                    }
#line 1161 "declarative_analyser.m"
                    {
#line 1161 "declarative_analyser.m"
                      mdb__declarative_analyser__LastUnknownWeight_54 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_55);
                    }
#line 1163 "declarative_analyser.m"
                    {
#line 1163 "declarative_analyser.m"
                      mdb__declarative_analyser__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1163 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1163 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1163 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 2) = ((MR_Box) (mdb__declarative_analyser__LastUnknownWeight_54));
#line 1163 "declarative_analyser.m"
                    }
#line 1162 "declarative_analyser.m"
                    {
#line 1162 "declarative_analyser.m"
                      MR_Word base;
#line 1162 "declarative_analyser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "declarative_analyser.m"
                      *mdb__declarative_analyser__Response_9 = base;
#line 1162 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_55));
#line 1162 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 1162 "declarative_analyser.m"
                    }
#line 1163 "declarative_analyser.m"
                    *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
#line 1161 "declarative_analyser.m"
                  }
#line 1165 "declarative_analyser.m"
                else
#line 1167 "declarative_analyser.m"
                  {
#line 1167 "declarative_analyser.m"
                    {
#line 1167 "declarative_analyser.m"
                      mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__Weighting_3, mdb__declarative_analyser__Heaviest_37, mdb__declarative_analyser__TopId_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
#line 1167 "declarative_analyser.m"
                      return;
                    }
#line 1167 "declarative_analyser.m"
                  }
#line 1165 "declarative_analyser.m"
              }
#line 1156 "declarative_analyser.m"
          }
#line 1116 "declarative_analyser.m"
      }
#line 1101 "declarative_analyser.m"
  }
#line 1095 "declarative_analyser.m"
}

#line 1071 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(
#line 1071 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23,
#line 1071 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_10,
#line 1071 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_11,
#line 1071 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_12,
#line 1071 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_13,
#line 1071 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_14,
#line 1071 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_15,
#line 1071 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19,
#line 1071 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20,
#line 1071 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_17)
#line 1071 "declarative_analyser.m"
{
#line 1082 "declarative_analyser.m"
  {
#line 1082 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1082 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__Children_18;
#line 1082 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21;

#line 1079 "declarative_analyser.m"
    {
#line 1079 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23, mdb__declarative_analyser__Store_10, mdb__declarative_analyser__Oracle_11, mdb__declarative_analyser__SuspectId_13, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21, &mdb__declarative_analyser__Children_18);
    }
#line 1082 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 1080 "declarative_analyser.m"
      {
#line 1080 "declarative_analyser.m"
        mdb__declarative_analyser__find_middle_weight_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23, mdb__declarative_analyser__Store_10, mdb__declarative_analyser__Oracle_11, mdb__declarative_analyser__Weighting_12, mdb__declarative_analyser__Children_18, mdb__declarative_analyser__TopId_14, mdb__declarative_analyser__MaybeLastUnknown_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20, mdb__declarative_analyser__Response_17);
#line 1080 "declarative_analyser.m"
        return;
      }
#line 1082 "declarative_analyser.m"
    else
#line 1083 "declarative_analyser.m"
      {
#line 1083 "declarative_analyser.m"
        {
#line 1083 "declarative_analyser.m"
          MR_Word base;
#line 1083 "declarative_analyser.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1083 "declarative_analyser.m"
          *mdb__declarative_analyser__Response_17 = base;
#line 1083 "declarative_analyser.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_13));
#line 1083 "declarative_analyser.m"
        }
#line 1083 "declarative_analyser.m"
        *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19;
#line 1083 "declarative_analyser.m"
      }
#line 1082 "declarative_analyser.m"
  }
#line 1071 "declarative_analyser.m"
}

#line 1025 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(
#line 1025 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_21,
#line 1025 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 1025 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_9,
#line 1025 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterTop_10,
#line 1025 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterBottom_11,
#line 1025 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerTop_12,
#line 1025 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerBottom_13,
#line 1025 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__Unknown_14)
#line 1025 "declarative_analyser.m"
{
#line 1030 "declarative_analyser.m"
  while (MR_TRUE)
#line 1030 "declarative_analyser.m"
    {
#line 1030 "declarative_analyser.m"
      /* tailcall optimized into a loop */
#line 1030 "declarative_analyser.m"
      {
#line 1030 "declarative_analyser.m"
        MR_bool mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerTop_12 <= mdb__declarative_analyser__InnerBottom_13);
#line 1034 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeCtorInfo_22_22;
#line 1034 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_15_15;
#line 1035 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__conv0_V_15_15;

#line 1030 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1030 "declarative_analyser.m"
          {
#line 1032 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__OuterTop_10 <= mdb__declarative_analyser__InnerTop_12);
#line 1032 "declarative_analyser.m"
            if (!(mdb__declarative_analyser__succeeded))
#line 1032 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerBottom_13 <= mdb__declarative_analyser__OuterBottom_11);
#line 1030 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 1030 "declarative_analyser.m"
              {
#line 1034 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__OuterTop_10 <= mdb__declarative_analyser__InnerTop_12);
#line 1034 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1034 "declarative_analyser.m"
                  {
#line 7655 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 1035 "declarative_analyser.m"
                    {
#line 1035 "declarative_analyser.m"
                      mdb__declarative_analyser__conv0_V_15_15 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_22_22, mdb__declarative_analyser__InnerTop_12, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_9);
                    }
#line 1035 "declarative_analyser.m"
                    mdb__declarative_analyser__V_15_15 = ((MR_Integer) mdb__declarative_analyser__conv0_V_15_15);
#line 1035 "declarative_analyser.m"
                    {
#line 1035 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_21, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__V_15_15);
                    }
#line 1034 "declarative_analyser.m"
                  }
#line 1038 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1037 "declarative_analyser.m"
                  {
#line 1037 "declarative_analyser.m"
                    *mdb__declarative_analyser__Unknown_14 = mdb__declarative_analyser__InnerTop_12;
#line 1037 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = MR_TRUE;
#line 1037 "declarative_analyser.m"
                  }
#line 1038 "declarative_analyser.m"
                else
#line 1043 "declarative_analyser.m"
                  {
#line 1039 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeCtorInfo_23_23;
#line 1039 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_16_16;
#line 1040 "declarative_analyser.m"
                    MR_Box mdb__declarative_analyser__conv1_V_16_16;

#line 1039 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerBottom_13 <= mdb__declarative_analyser__OuterBottom_11);
#line 1039 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 1039 "declarative_analyser.m"
                      {
#line 7698 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeCtorInfo_23_23 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 1040 "declarative_analyser.m"
                        {
#line 1040 "declarative_analyser.m"
                          mdb__declarative_analyser__conv1_V_16_16 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_23_23, mdb__declarative_analyser__InnerBottom_13, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_9);
                        }
#line 1040 "declarative_analyser.m"
                        mdb__declarative_analyser__V_16_16 = ((MR_Integer) mdb__declarative_analyser__conv1_V_16_16);
#line 1040 "declarative_analyser.m"
                        {
#line 1040 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_21, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__V_16_16);
                        }
#line 1039 "declarative_analyser.m"
                      }
#line 1043 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 1042 "declarative_analyser.m"
                      {
#line 1042 "declarative_analyser.m"
                        *mdb__declarative_analyser__Unknown_14 = mdb__declarative_analyser__InnerBottom_13;
#line 1042 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = MR_TRUE;
#line 1042 "declarative_analyser.m"
                      }
#line 1043 "declarative_analyser.m"
                    else
#line 1044 "declarative_analyser.m"
                      {
#line 1044 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_17_17 = (mdb__declarative_analyser__InnerTop_12 - (MR_Integer) 1);
#line 1044 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_18_18 = (mdb__declarative_analyser__InnerBottom_13 + (MR_Integer) 1);

#line 1044 "declarative_analyser.m"
                        /* direct tailcall eliminated */
#line 1044 "declarative_analyser.m"
                        {
#line 1044 "declarative_analyser.m"
                          MR_Integer mdb__declarative_analyser__InnerTop__tmp_copy_12 = mdb__declarative_analyser__V_17_17;
#line 1044 "declarative_analyser.m"
                          MR_Integer mdb__declarative_analyser__InnerBottom__tmp_copy_13 = mdb__declarative_analyser__V_18_18;

#line 1044 "declarative_analyser.m"
                          mdb__declarative_analyser__InnerBottom_13 = mdb__declarative_analyser__InnerBottom__tmp_copy_13;
#line 1044 "declarative_analyser.m"
                          mdb__declarative_analyser__InnerTop_12 = mdb__declarative_analyser__InnerTop__tmp_copy_12;
#line 1044 "declarative_analyser.m"
                        }
#line 1044 "declarative_analyser.m"
                        continue;
#line 1044 "declarative_analyser.m"
                      }
#line 1043 "declarative_analyser.m"
                  }
#line 1030 "declarative_analyser.m"
              }
#line 1030 "declarative_analyser.m"
          }
#line 1030 "declarative_analyser.m"
        return mdb__declarative_analyser__succeeded;
#line 1030 "declarative_analyser.m"
      }
#line 1030 "declarative_analyser.m"
      break;
#line 1030 "declarative_analyser.m"
    }
#line 1025 "declarative_analyser.m"
}

#line 947 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__binary_search_11_p_0(
#line 947 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37,
#line 947 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_12,
#line 947 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_13,
#line 947 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_14,
#line 947 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Top_15,
#line 947 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Bottom_16,
#line 947 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__LastTested_17,
#line 947 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 947 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 947 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_19,
#line 947 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_20,
#line 947 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_21)
#line 947 "declarative_analyser.m"
{
#line 953 "declarative_analyser.m"
  {
#line 953 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 953 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeCtorInfo_38_38 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 953 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__SuspectId_22;
#line 953 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__NewTop_23;
#line 953 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__NewBottom_24;
#line 954 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__conv0_SuspectId_22;
#line 960 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_40_40;

#line 954 "declarative_analyser.m"
    {
#line 954 "declarative_analyser.m"
      mdb__declarative_analyser__conv0_SuspectId_22 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_38_38, mdb__declarative_analyser__LastTested_17, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_14);
    }
#line 954 "declarative_analyser.m"
    mdb__declarative_analyser__SuspectId_22 = ((MR_Integer) mdb__declarative_analyser__conv0_SuspectId_22);
#line 7822 "mdb.declarative_analyser.c"
    {
#line 7824 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_40_40);
    }
#line 960 "declarative_analyser.m"
    {
#line 960 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_in_excluded_complement_2_p_0(mdb__declarative_analyser__TypeInfo_40_40, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__SuspectId_22);
    }
#line 964 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 962 "declarative_analyser.m"
      {
#line 962 "declarative_analyser.m"
        mdb__declarative_analyser__NewTop_23 = (mdb__declarative_analyser__LastTested_17 + (MR_Integer) 1);
#line 963 "declarative_analyser.m"
        mdb__declarative_analyser__NewBottom_24 = mdb__declarative_analyser__Bottom_16;
#line 962 "declarative_analyser.m"
      }
#line 964 "declarative_analyser.m"
    else
#line 970 "declarative_analyser.m"
      {
#line 966 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_42_42;

#line 7849 "mdb.declarative_analyser.c"
        {
#line 7851 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_42_42);
        }
#line 966 "declarative_analyser.m"
        {
#line 966 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_in_excluded_subtree_2_p_0(mdb__declarative_analyser__TypeInfo_42_42, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__SuspectId_22);
        }
#line 970 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 968 "declarative_analyser.m"
          {
#line 968 "declarative_analyser.m"
            mdb__declarative_analyser__NewTop_23 = mdb__declarative_analyser__Top_15;
#line 969 "declarative_analyser.m"
            mdb__declarative_analyser__NewBottom_24 = (mdb__declarative_analyser__LastTested_17 - (MR_Integer) 1);
#line 968 "declarative_analyser.m"
          }
#line 970 "declarative_analyser.m"
        else
#line 972 "declarative_analyser.m"
          {
#line 972 "declarative_analyser.m"
            mdb__declarative_analyser__NewTop_23 = mdb__declarative_analyser__Top_15;
#line 973 "declarative_analyser.m"
            mdb__declarative_analyser__NewBottom_24 = mdb__declarative_analyser__Bottom_16;
#line 972 "declarative_analyser.m"
          }
#line 970 "declarative_analyser.m"
      }
#line 976 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__NewTop_23 > mdb__declarative_analyser__NewBottom_24);
#line 981 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 979 "declarative_analyser.m"
      {
#line 979 "declarative_analyser.m"
        mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, mdb__declarative_analyser__Store_12, mdb__declarative_analyser__Oracle_13, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__NewMode_20, mdb__declarative_analyser__Response_21);
#line 979 "declarative_analyser.m"
        return;
      }
#line 981 "declarative_analyser.m"
    else
#line 991 "declarative_analyser.m"
      {
#line 991 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__UnknownClosestToMiddle_25;
#line 983 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_44_44;
#line 983 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Middle_50;
#line 983 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_51_51;
#line 983 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_52_52;

#line 7907 "mdb.declarative_analyser.c"
        {
#line 7909 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_44_44);
        }
#line 1011 "declarative_analyser.m"
        mdb__declarative_analyser__V_52_52 = (mdb__declarative_analyser__NewBottom_24 - mdb__declarative_analyser__NewTop_23);
#line 1011 "declarative_analyser.m"
        {
#line 1011 "declarative_analyser.m"
          mdb__declarative_analyser__V_51_51 = mercury__int__f_47_47_2_f_0(mdb__declarative_analyser__V_52_52, (MR_Integer) 2);
        }
#line 1011 "declarative_analyser.m"
        mdb__declarative_analyser__Middle_50 = (mdb__declarative_analyser__NewTop_23 + mdb__declarative_analyser__V_51_51);
#line 1012 "declarative_analyser.m"
        {
#line 1012 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(mdb__declarative_analyser__TypeInfo_44_44, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__PathArray_14, mdb__declarative_analyser__NewTop_23, mdb__declarative_analyser__NewBottom_24, mdb__declarative_analyser__Middle_50, mdb__declarative_analyser__Middle_50, &mdb__declarative_analyser__UnknownClosestToMiddle_25);
        }
#line 991 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 987 "declarative_analyser.m"
          {
#line 987 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_32_32;
#line 987 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_33_33;
#line 987 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_34_34;
#line 988 "declarative_analyser.m"
            MR_Box mdb__declarative_analyser__conv1_V_33_33;

#line 986 "declarative_analyser.m"
            {
#line 986 "declarative_analyser.m"
              mdb__declarative_analyser__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 986 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 0) = ((MR_Box) (mdb__declarative_analyser__NewTop_23));
#line 986 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__NewBottom_24));
#line 986 "declarative_analyser.m"
            }
#line 986 "declarative_analyser.m"
            {
#line 986 "declarative_analyser.m"
              MR_Word base;
#line 986 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 986 "declarative_analyser.m"
              *mdb__declarative_analyser__NewMode_20 = base;
#line 986 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__PathArray_14));
#line 986 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_32_32));
#line 986 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_analyser__UnknownClosestToMiddle_25));
#line 986 "declarative_analyser.m"
            }
#line 988 "declarative_analyser.m"
            {
#line 988 "declarative_analyser.m"
              mdb__declarative_analyser__conv1_V_33_33 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_38_38, mdb__declarative_analyser__UnknownClosestToMiddle_25, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_14);
            }
#line 988 "declarative_analyser.m"
            mdb__declarative_analyser__V_33_33 = ((MR_Integer) mdb__declarative_analyser__conv1_V_33_33);
#line 990 "declarative_analyser.m"
            {
#line 990 "declarative_analyser.m"
              mdb__declarative_analyser__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 990 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), mdb__declarative_analyser__V_34_34, 0) = ((MR_Box) (mdb__declarative_analyser__NewBottom_24));
#line 990 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), mdb__declarative_analyser__V_34_34, 1) = ((MR_Box) (mdb__declarative_analyser__NewTop_23));
#line 990 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), mdb__declarative_analyser__V_34_34, 2) = ((MR_Box) (mdb__declarative_analyser__UnknownClosestToMiddle_25));
#line 990 "declarative_analyser.m"
            }
#line 988 "declarative_analyser.m"
            {
#line 988 "declarative_analyser.m"
              MR_Word base;
#line 988 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 988 "declarative_analyser.m"
              *mdb__declarative_analyser__Response_21 = base;
#line 988 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_33_33));
#line 988 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_34_34));
#line 988 "declarative_analyser.m"
            }
#line 990 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26;
#line 987 "declarative_analyser.m"
          }
#line 991 "declarative_analyser.m"
        else
#line 994 "declarative_analyser.m"
          {
#line 994 "declarative_analyser.m"
            mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, mdb__declarative_analyser__Store_12, mdb__declarative_analyser__Oracle_13, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__NewMode_20, mdb__declarative_analyser__Response_21);
#line 994 "declarative_analyser.m"
            return;
          }
#line 991 "declarative_analyser.m"
      }
#line 953 "declarative_analyser.m"
  }
#line 947 "declarative_analyser.m"
}

#line 788 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70,
#line 788 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_15,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_16,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44,
#line 788 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_18,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46,
#line 788 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_20,
#line 788 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_21,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_22,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_23,
#line 788 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_24,
#line 788 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_25,
#line 788 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_26)
#line 788 "declarative_analyser.m"
{
#line 797 "declarative_analyser.m"
  while (MR_TRUE)
#line 797 "declarative_analyser.m"
    {
#line 797 "declarative_analyser.m"
      /* tailcall optimized into a loop */
#line 797 "declarative_analyser.m"
      {
#line 797 "declarative_analyser.m"
        MR_bool mdb__declarative_analyser__succeeded;
#line 797 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__FindOriginResponse_27;
#line 797 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 797 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;

#line 798 "declarative_analyser.m"
        {
#line 798 "declarative_analyser.m"
          mdb__declarative_edt__find_subterm_origin_11_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__SuspectId_21, mdb__declarative_analyser__ArgPos_22, mdb__declarative_analyser__TermPath_23, mdb__declarative_analyser__HowTrack_18, mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46, &mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, &mdb__declarative_analyser__FindOriginResponse_27);
        }
#line 848 "declarative_analyser.m"
        if ((mdb__declarative_analyser__FindOriginResponse_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 849 "declarative_analyser.m"
          {
#line 857 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__Unknown_64;
#line 851 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_80_80;
#line 851 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__PolyConst2_79;

#line 851 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
#line 851 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 851 "declarative_analyser.m"
              {
#line 851 "declarative_analyser.m"
                mdb__declarative_analyser__Unknown_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
#line 8094 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__PolyConst2_79 = (MR_Integer) 2;
#line 8096 "mdb.declarative_analyser.c"
                {
#line 8098 "mdb.declarative_analyser.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_79, &mdb__declarative_analyser__TypeInfo_80_80);
                }
#line 1197 "declarative_analyser.m"
                {
#line 1197 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_64);
                }
#line 851 "declarative_analyser.m"
              }
#line 857 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 855 "declarative_analyser.m"
              {
#line 854 "declarative_analyser.m"
                {
#line 854 "declarative_analyser.m"
                  MR_Word base;
#line 854 "declarative_analyser.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 854 "declarative_analyser.m"
                  *mdb__declarative_analyser__SearchResponse_26 = base;
#line 854 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_64));
#line 854 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 854 "declarative_analyser.m"
                }
#line 856 "declarative_analyser.m"
                *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 856 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 855 "declarative_analyser.m"
              }
#line 857 "declarative_analyser.m"
            else
#line 858 "declarative_analyser.m"
              {
#line 858 "declarative_analyser.m"
                mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
              }
#line 858 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 849 "declarative_analyser.m"
          }
#line 848 "declarative_analyser.m"
        else
#line 848 "declarative_analyser.m"
          if ((mdb__declarative_analyser__FindOriginResponse_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 863 "declarative_analyser.m"
            {
#line 864 "declarative_analyser.m"
              {
#line 864 "declarative_analyser.m"
                MR_Word base;
#line 864 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 864 "declarative_analyser.m"
                *mdb__declarative_analyser__SearchResponse_26 = base;
#line 864 "declarative_analyser.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
#line 864 "declarative_analyser.m"
              }
#line 868 "declarative_analyser.m"
              {
#line 868 "declarative_analyser.m"
                MR_Word base;
#line 868 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 868 "declarative_analyser.m"
                *mdb__declarative_analyser__NewMode_25 = base;
#line 868 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
#line 868 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_22));
#line 868 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
#line 868 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_20));
#line 868 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_18));
#line 868 "declarative_analyser.m"
              }
#line 868 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 868 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 863 "declarative_analyser.m"
            }
#line 848 "declarative_analyser.m"
          else
#line 848 "declarative_analyser.m"
            if ((mdb__declarative_analyser__FindOriginResponse_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 871 "declarative_analyser.m"
              {
#line 872 "declarative_analyser.m"
                *mdb__declarative_analyser__SearchResponse_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 873 "declarative_analyser.m"
                {
#line 873 "declarative_analyser.m"
                  MR_Word base;
#line 873 "declarative_analyser.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 873 "declarative_analyser.m"
                  *mdb__declarative_analyser__NewMode_25 = base;
#line 873 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
#line 873 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_22));
#line 873 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
#line 873 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_20));
#line 873 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_18));
#line 873 "declarative_analyser.m"
                }
#line 873 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 873 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 871 "declarative_analyser.m"
              }
#line 848 "declarative_analyser.m"
            else
#line 848 "declarative_analyser.m"
              if (((MR_tag((MR_Word) mdb__declarative_analyser__FindOriginResponse_27)) == (MR_mktag((MR_Integer) 1))))
#line 877 "declarative_analyser.m"
                {
#line 877 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__OriginId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 0)));
#line 877 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__OriginArgPos_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 1)));
#line 877 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__OriginTermPath_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 2)));
#line 877 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__SubtermMode_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)));
#line 877 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__NewLastUnknown_43;
#line 879 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_82_82;
#line 892 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_84_84;

#line 8242 "mdb.declarative_analyser.c"
                  {
#line 8244 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_82_82);
                  }
#line 879 "declarative_analyser.m"
                  {
#line 879 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_82_82, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__OriginId_39);
                  }
#line 882 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 881 "declarative_analyser.m"
                    {
#line 881 "declarative_analyser.m"
                      mdb__declarative_analyser__NewLastUnknown_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 881 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__NewLastUnknown_43, 0) = ((MR_Box) (mdb__declarative_analyser__OriginId_39));
#line 881 "declarative_analyser.m"
                    }
#line 882 "declarative_analyser.m"
                  else
#line 883 "declarative_analyser.m"
                    mdb__declarative_analyser__NewLastUnknown_43 = mdb__declarative_analyser__LastUnknown_20;
#line 8266 "mdb.declarative_analyser.c"
                  {
#line 8268 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_84_84);
                  }
#line 892 "declarative_analyser.m"
                  {
#line 892 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__give_up_subterm_tracking_3_p_0(mdb__declarative_analyser__TypeInfo_84_84, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__OriginId_39, mdb__declarative_analyser__SubtermMode_42);
                  }
#line 906 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 901 "declarative_analyser.m"
                    {
#line 901 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__Unknown_66;
#line 895 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_86_86;
#line 895 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__PolyConst2_85;

#line 895 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
#line 895 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 895 "declarative_analyser.m"
                        {
#line 895 "declarative_analyser.m"
                          mdb__declarative_analyser__Unknown_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
#line 8295 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__PolyConst2_85 = (MR_Integer) 2;
#line 8297 "mdb.declarative_analyser.c"
                          {
#line 8299 "mdb.declarative_analyser.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_85, &mdb__declarative_analyser__TypeInfo_86_86);
                          }
#line 1197 "declarative_analyser.m"
                          {
#line 1197 "declarative_analyser.m"
                            mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_86_86, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_66);
                          }
#line 895 "declarative_analyser.m"
                        }
#line 901 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 899 "declarative_analyser.m"
                        {
#line 898 "declarative_analyser.m"
                          {
#line 898 "declarative_analyser.m"
                            MR_Word base;
#line 898 "declarative_analyser.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 898 "declarative_analyser.m"
                            *mdb__declarative_analyser__SearchResponse_26 = base;
#line 898 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_66));
#line 898 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 898 "declarative_analyser.m"
                          }
#line 900 "declarative_analyser.m"
                          *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 900 "declarative_analyser.m"
                          *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 899 "declarative_analyser.m"
                        }
#line 901 "declarative_analyser.m"
                      else
#line 902 "declarative_analyser.m"
                        {
#line 902 "declarative_analyser.m"
                          mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
                        }
#line 902 "declarative_analyser.m"
                      *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 901 "declarative_analyser.m"
                    }
#line 906 "declarative_analyser.m"
                  else
#line 913 "declarative_analyser.m"
                    {
#line 913 "declarative_analyser.m"
                      /* direct tailcall eliminated */
#line 913 "declarative_analyser.m"
                      {
#line 913 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_44 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 913 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0__tmp_copy_46 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 913 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__LastUnknown__tmp_copy_20 = mdb__declarative_analyser__NewLastUnknown_43;
#line 913 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__SuspectId__tmp_copy_21 = mdb__declarative_analyser__OriginId_39;
#line 913 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__ArgPos__tmp_copy_22 = mdb__declarative_analyser__OriginArgPos_40;
#line 913 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__TermPath__tmp_copy_23 = mdb__declarative_analyser__OriginTermPath_41;

#line 913 "declarative_analyser.m"
                        mdb__declarative_analyser__TermPath_23 = mdb__declarative_analyser__TermPath__tmp_copy_23;
#line 913 "declarative_analyser.m"
                        mdb__declarative_analyser__ArgPos_22 = mdb__declarative_analyser__ArgPos__tmp_copy_22;
#line 913 "declarative_analyser.m"
                        mdb__declarative_analyser__SuspectId_21 = mdb__declarative_analyser__SuspectId__tmp_copy_21;
#line 913 "declarative_analyser.m"
                        mdb__declarative_analyser__LastUnknown_20 = mdb__declarative_analyser__LastUnknown__tmp_copy_20;
#line 913 "declarative_analyser.m"
                        mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0__tmp_copy_46;
#line 913 "declarative_analyser.m"
                        mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_44;
#line 913 "declarative_analyser.m"
                      }
#line 913 "declarative_analyser.m"
                      continue;
#line 913 "declarative_analyser.m"
                    }
#line 877 "declarative_analyser.m"
                }
#line 848 "declarative_analyser.m"
              else
#line 802 "declarative_analyser.m"
                {
#line 802 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__BindingSuspectId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 0)));
#line 802 "declarative_analyser.m"
                  MR_String mdb__declarative_analyser__FileName_29 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 1)));
#line 802 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__LineNo_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 2)));
#line 802 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__PrimOpType_31 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 802 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__Output_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 802 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__ProcLabel_33;
#line 802 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__MaybePath_36;

#line 803 "declarative_analyser.m"
                  {
#line 803 "declarative_analyser.m"
                    mdb__declarative_analyser__ProcLabel_33 = mdb__declarative_edt__get_proc_label_for_suspect_3_f_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
                  }
#line 812 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__Output_32 == (MR_Integer) 0))
#line 818 "declarative_analyser.m"
                    mdb__declarative_analyser__MaybePath_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 812 "declarative_analyser.m"
                  else
#line 806 "declarative_analyser.m"
                    {
#line 806 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_72_72;
#line 806 "declarative_analyser.m"
                      MR_Box mdb__declarative_analyser__BindingNode_34;
#line 806 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__ArgNum_35;
#line 806 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_58_58;
#line 8425 "mdb.declarative_analyser.c"
                      MR_Box MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8427 "mdb.declarative_analyser.c"
                      MR_Box mdb__declarative_analyser__conv1_ArgNum_35;

#line 8430 "mdb.declarative_analyser.c"
                      {
#line 8432 "mdb.declarative_analyser.c"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_72_72);
                      }
#line 809 "declarative_analyser.m"
                      {
#line 809 "declarative_analyser.m"
                        mdb__declarative_analyser__BindingNode_34 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_72_72, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__SuspectId_21);
                      }
#line 8440 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 0)), (MR_Integer) 19)));
#line 8442 "mdb.declarative_analyser.c"
                      {
#line 8444 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__conv1_ArgNum_35 = mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70), mdb__declarative_analyser__Store_15, mdb__declarative_analyser__BindingNode_34, ((MR_Box) (mdb__declarative_analyser__ArgPos_22)));
                      }
#line 8447 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__ArgNum_35 = ((MR_Integer) mdb__declarative_analyser__conv1_ArgNum_35);
#line 811 "declarative_analyser.m"
                      {
#line 811 "declarative_analyser.m"
                        mdb__declarative_analyser__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 811 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_58_58, 0) = ((MR_Box) (mdb__declarative_analyser__ArgNum_35));
#line 811 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_58_58, 1) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
#line 811 "declarative_analyser.m"
                      }
#line 811 "declarative_analyser.m"
                      {
#line 811 "declarative_analyser.m"
                        mdb__declarative_analyser__MaybePath_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 811 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybePath_36, 0) = ((MR_Box) (mdb__declarative_analyser__V_58_58));
#line 811 "declarative_analyser.m"
                      }
#line 806 "declarative_analyser.m"
                    }
#line 825 "declarative_analyser.m"
                  {
#line 825 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_74_74;

#line 8474 "mdb.declarative_analyser.c"
                    {
#line 8476 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_74_74);
                    }
#line 825 "declarative_analyser.m"
                    {
#line 825 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_74_74, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
                    }
#line 825 "declarative_analyser.m"
                  }
#line 826 "declarative_analyser.m"
                  if (!(mdb__declarative_analyser__succeeded))
#line 826 "declarative_analyser.m"
                    {
#line 826 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_76_76;

#line 8493 "mdb.declarative_analyser.c"
                      {
#line 8495 "mdb.declarative_analyser.c"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_76_76);
                      }
#line 826 "declarative_analyser.m"
                      {
#line 826 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_skipped_2_p_0(mdb__declarative_analyser__TypeInfo_76_76, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
                      }
#line 826 "declarative_analyser.m"
                    }
#line 833 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 831 "declarative_analyser.m"
                    {
#line 831 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_59_59;

#line 830 "declarative_analyser.m"
                      {
#line 830 "declarative_analyser.m"
                        mdb__declarative_analyser__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 830 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 0) = ((MR_Box) (mdb__declarative_analyser__PrimOpType_31));
#line 830 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 1) = ((MR_Box) (mdb__declarative_analyser__FileName_29));
#line 830 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 2) = ((MR_Box) (mdb__declarative_analyser__LineNo_30));
#line 830 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 3) = ((MR_Box) (mdb__declarative_analyser__MaybePath_36));
#line 830 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 4) = ((MR_Box) (mdb__declarative_analyser__ProcLabel_33));
#line 830 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 5) = ((MR_Box) ((MR_Integer) 0));
#line 830 "declarative_analyser.m"
                      }
#line 829 "declarative_analyser.m"
                      {
#line 829 "declarative_analyser.m"
                        MR_Word base;
#line 829 "declarative_analyser.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 829 "declarative_analyser.m"
                        *mdb__declarative_analyser__SearchResponse_26 = base;
#line 829 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__BindingSuspectId_28));
#line 829 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_59_59));
#line 829 "declarative_analyser.m"
                      }
#line 832 "declarative_analyser.m"
                      *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 832 "declarative_analyser.m"
                      *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 831 "declarative_analyser.m"
                    }
#line 833 "declarative_analyser.m"
                  else
#line 842 "declarative_analyser.m"
                    {
#line 842 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__Unknown_37;
#line 835 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_78_78;
#line 835 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__PolyConst2_77;

#line 835 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
#line 835 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 835 "declarative_analyser.m"
                        {
#line 835 "declarative_analyser.m"
                          mdb__declarative_analyser__Unknown_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
#line 8569 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__PolyConst2_77 = (MR_Integer) 2;
#line 8571 "mdb.declarative_analyser.c"
                          {
#line 8573 "mdb.declarative_analyser.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_77, &mdb__declarative_analyser__TypeInfo_78_78);
                          }
#line 1197 "declarative_analyser.m"
                          {
#line 1197 "declarative_analyser.m"
                            mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_37);
                          }
#line 835 "declarative_analyser.m"
                        }
#line 842 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 839 "declarative_analyser.m"
                        {
#line 839 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__Reason_38;

#line 838 "declarative_analyser.m"
                          {
#line 838 "declarative_analyser.m"
                            mdb__declarative_analyser__Reason_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 838 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 0) = ((MR_Box) (mdb__declarative_analyser__PrimOpType_31));
#line 838 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 1) = ((MR_Box) (mdb__declarative_analyser__FileName_29));
#line 838 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 2) = ((MR_Box) (mdb__declarative_analyser__LineNo_30));
#line 838 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 3) = ((MR_Box) (mdb__declarative_analyser__MaybePath_36));
#line 838 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 4) = ((MR_Box) (mdb__declarative_analyser__ProcLabel_33));
#line 838 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 5) = ((MR_Box) ((MR_Integer) 1));
#line 838 "declarative_analyser.m"
                          }
#line 840 "declarative_analyser.m"
                          {
#line 840 "declarative_analyser.m"
                            MR_Word base;
#line 840 "declarative_analyser.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 840 "declarative_analyser.m"
                            *mdb__declarative_analyser__SearchResponse_26 = base;
#line 840 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_37));
#line 840 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__Reason_38));
#line 840 "declarative_analyser.m"
                          }
#line 841 "declarative_analyser.m"
                          *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 841 "declarative_analyser.m"
                          *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 839 "declarative_analyser.m"
                        }
#line 842 "declarative_analyser.m"
                      else
#line 843 "declarative_analyser.m"
                        {
#line 843 "declarative_analyser.m"
                          mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
                        }
#line 842 "declarative_analyser.m"
                    }
#line 843 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 802 "declarative_analyser.m"
                }
#line 797 "declarative_analyser.m"
      }
#line 797 "declarative_analyser.m"
      break;
#line 797 "declarative_analyser.m"
    }
#line 788 "declarative_analyser.m"
}

#line 775 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_12_p_0(
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29,
#line 775 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_13,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_14,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25,
#line 775 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_16,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_17,
#line 775 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_18,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_19,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_20,
#line 775 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_21,
#line 775 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_22,
#line 775 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_23)
#line 775 "declarative_analyser.m"
{
#line 783 "declarative_analyser.m"
  {
#line 783 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 783 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28;
#line 784 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_24_24;

#line 785 "declarative_analyser.m"
    {
#line 785 "declarative_analyser.m"
      mdb__declarative_analyser__V_28_28 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0);
    }
#line 784 "declarative_analyser.m"
    {
#line 784 "declarative_analyser.m"
      mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29, mdb__declarative_analyser__Store_13, mdb__declarative_analyser__Oracle_14, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26, mdb__declarative_analyser__HowTrack_16, mdb__declarative_analyser__V_28_28, &mdb__declarative_analyser__V_24_24, mdb__declarative_analyser__LastUnknown_17, mdb__declarative_analyser__SuspectId_18, mdb__declarative_analyser__ArgPos_19, mdb__declarative_analyser__TermPath_20, mdb__declarative_analyser__FallBackSearchMode_21, mdb__declarative_analyser__NewMode_22, mdb__declarative_analyser__SearchResponse_23);
    }
#line 783 "declarative_analyser.m"
  }
#line 775 "declarative_analyser.m"
}

#line 741 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_2(
#line 741 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 741 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
#line 741 "declarative_analyser.m"
{
#line 741 "declarative_analyser.m"
  {
#line 741 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 741 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;

#line 741 "declarative_analyser.m"
    {
#line 741 "declarative_analyser.m"
      return mdb__declarative_analyser__succeeded = mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__741__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
#line 741 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 741 "declarative_analyser.m"
  }
#line 741 "declarative_analyser.m"
}

#line 738 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_1(
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
      return mdb__declarative_analyser__succeeded = mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__738__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
#line 738 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 738 "declarative_analyser.m"
  }
#line 738 "declarative_analyser.m"
}

#line 700 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0(
#line 700 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 700 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 700 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 700 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24,
#line 700 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25,
#line 700 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9)
#line 700 "declarative_analyser.m"
{
#line 704 "declarative_analyser.m"
  while (MR_TRUE)
#line 704 "declarative_analyser.m"
    {
#line 704 "declarative_analyser.m"
      /* tailcall optimized into a loop */
#line 704 "declarative_analyser.m"
      {
#line 704 "declarative_analyser.m"
        MR_bool mdb__declarative_analyser__succeeded;
#line 704 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Start_11;
#line 704 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__MaybeUnknownDescendant_12;
#line 704 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 710 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__RootId_10;
#line 708 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_41_41;

#line 8799 "mdb.declarative_analyser.c"
        {
#line 8801 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_41_41);
        }
#line 708 "declarative_analyser.m"
        {
#line 708 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_41_41, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__RootId_10);
        }
#line 710 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 709 "declarative_analyser.m"
          mdb__declarative_analyser__Start_11 = mdb__declarative_analyser__RootId_10;
#line 710 "declarative_analyser.m"
        else
#line 711 "declarative_analyser.m"
          {
#line 711 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_43_43;

#line 8820 "mdb.declarative_analyser.c"
            {
#line 8822 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_43_43);
            }
#line 711 "declarative_analyser.m"
            {
#line 711 "declarative_analyser.m"
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_43_43, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__Start_11);
            }
#line 711 "declarative_analyser.m"
          }
#line 713 "declarative_analyser.m"
        {
#line 713 "declarative_analyser.m"
          mdb__declarative_edt__first_unknown_descendant_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__Start_11, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__MaybeUnknownDescendant_12);
        }
#line 718 "declarative_analyser.m"
        if ((mdb__declarative_analyser__MaybeUnknownDescendant_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 725 "declarative_analyser.m"
          {
#line 725 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__SkippedSuspect_14;
#line 721 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_45_45;

#line 8846 "mdb.declarative_analyser.c"
            {
#line 8848 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_45_45);
            }
#line 721 "declarative_analyser.m"
            {
#line 721 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__choose_skipped_suspect_2_p_0(mdb__declarative_analyser__TypeInfo_45_45, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__SkippedSuspect_14);
            }
#line 725 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 723 "declarative_analyser.m"
              {
#line 723 "declarative_analyser.m"
                {
#line 723 "declarative_analyser.m"
                  MR_Word base;
#line 723 "declarative_analyser.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 723 "declarative_analyser.m"
                  *mdb__declarative_analyser__Response_9 = base;
#line 723 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SkippedSuspect_14));
#line 723 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 723 "declarative_analyser.m"
                }
#line 724 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 723 "declarative_analyser.m"
              }
#line 725 "declarative_analyser.m"
            else
#line 749 "declarative_analyser.m"
              {
#line 749 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__BugId_15;
#line 732 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_47_47;

#line 8887 "mdb.declarative_analyser.c"
                {
#line 8889 "mdb.declarative_analyser.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_47_47);
                }
#line 732 "declarative_analyser.m"
                {
#line 732 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_47_47, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__BugId_15);
                }
#line 749 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 745 "declarative_analyser.m"
                  {
#line 745 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__BugChildren_16;
#line 745 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__CorrectDescendants_18;
#line 745 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29;
#line 735 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeCtorInfo_51_51;
#line 735 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_61_61;
#line 735 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__NonIgnoredDescendants_17;
#line 735 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28;
#line 735 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_30_30;
#line 735 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_31_31;
#line 735 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_60_60;

#line 735 "declarative_analyser.m"
                    {
#line 735 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__BugId_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28, &mdb__declarative_analyser__BugChildren_16);
                    }
#line 735 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 735 "declarative_analyser.m"
                      {
#line 736 "declarative_analyser.m"
                        {
#line 736 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = mdb__declarative_edt__non_ignored_descendants_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__BugChildren_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, &mdb__declarative_analyser__NonIgnoredDescendants_17);
                        }
#line 735 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 735 "declarative_analyser.m"
                          {
#line 739 "declarative_analyser.m"
                            mdb__declarative_analyser__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8942 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__TypeCtorInfo_51_51 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 738 "declarative_analyser.m"
                            {
#line 738 "declarative_analyser.m"
                              mdb__declarative_analyser__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 738 "declarative_analyser.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_7[0]));
#line 738 "declarative_analyser.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 1) = ((MR_Box) (mdb__declarative_analyser__top_down_search_5_p_0_1));
#line 738 "declarative_analyser.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 738 "declarative_analyser.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39));
#line 738 "declarative_analyser.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29));
#line 738 "declarative_analyser.m"
                            }
#line 738 "declarative_analyser.m"
                            {
#line 738 "declarative_analyser.m"
                              mercury__list__filter_4_p_0(mdb__declarative_analyser__TypeCtorInfo_51_51, mdb__declarative_analyser__V_30_30, mdb__declarative_analyser__NonIgnoredDescendants_17, &mdb__declarative_analyser__CorrectDescendants_18, &mdb__declarative_analyser__V_60_60);
                            }
#line 8965 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__TypeInfo_61_61 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[6];
#line 738 "declarative_analyser.m"
                            {
#line 738 "declarative_analyser.m"
                              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_61_61, ((MR_Box) (mdb__declarative_analyser__V_31_31)), ((MR_Box) (mdb__declarative_analyser__V_60_60)));
                            }
#line 735 "declarative_analyser.m"
                          }
#line 735 "declarative_analyser.m"
                      }
#line 745 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 742 "declarative_analyser.m"
                      {
#line 742 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__InadmissibleChildren_19;
#line 742 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_32_32;

#line 742 "declarative_analyser.m"
                        *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29;
#line 741 "declarative_analyser.m"
                        {
#line 741 "declarative_analyser.m"
                          mdb__declarative_analyser__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 741 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_7[0]));
#line 741 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__top_down_search_5_p_0_2));
#line 741 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 741 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39));
#line 741 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29));
#line 741 "declarative_analyser.m"
                        }
#line 741 "declarative_analyser.m"
                        {
#line 741 "declarative_analyser.m"
                          mercury__list__filter_3_p_0((MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0, mdb__declarative_analyser__V_32_32, mdb__declarative_analyser__BugChildren_16, &mdb__declarative_analyser__InadmissibleChildren_19);
                        }
#line 743 "declarative_analyser.m"
                        {
#line 743 "declarative_analyser.m"
                          MR_Word base;
#line 743 "declarative_analyser.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 743 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = base;
#line 743 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_analyser__BugId_15));
#line 743 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__CorrectDescendants_18));
#line 743 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_analyser__InadmissibleChildren_19));
#line 743 "declarative_analyser.m"
                        }
#line 742 "declarative_analyser.m"
                      }
#line 745 "declarative_analyser.m"
                    else
#line 746 "declarative_analyser.m"
                      {
#line 746 "declarative_analyser.m"
                        {
#line 746 "declarative_analyser.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[17])));
#line 746 "declarative_analyser.m"
                          return;
                        }
#line 746 "declarative_analyser.m"
                      }
#line 745 "declarative_analyser.m"
                  }
#line 749 "declarative_analyser.m"
                else
#line 759 "declarative_analyser.m"
                  {
#line 759 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__ExtendedSearchSpace_20;

#line 754 "declarative_analyser.m"
                    {
#line 754 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__extend_search_space_upwards_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__ExtendedSearchSpace_20);
                    }
#line 759 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 757 "declarative_analyser.m"
                      {
#line 757 "declarative_analyser.m"
                        /* direct tailcall eliminated */
#line 757 "declarative_analyser.m"
                        {
#line 757 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_24 = mdb__declarative_analyser__ExtendedSearchSpace_20;

#line 757 "declarative_analyser.m"
                          mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_24;
#line 757 "declarative_analyser.m"
                        }
#line 757 "declarative_analyser.m"
                        continue;
#line 757 "declarative_analyser.m"
                      }
#line 759 "declarative_analyser.m"
                    else
#line 760 "declarative_analyser.m"
                      {
#line 760 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__TypeInfo_58_58;
#line 760 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__TypeInfo_59_59;
#line 760 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__TopMostId_21;
#line 760 "declarative_analyser.m"
                        MR_Box mdb__declarative_analyser__TopMostNode_22;
#line 9084 "mdb.declarative_analyser.c"
                        MR_bool MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box);

#line 9087 "mdb.declarative_analyser.c"
                        {
#line 9089 "mdb.declarative_analyser.c"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_58_58);
                        }
#line 760 "declarative_analyser.m"
                        {
#line 760 "declarative_analyser.m"
                          mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_58_58, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__TopMostId_21);
                        }
#line 9097 "mdb.declarative_analyser.c"
                        {
#line 9099 "mdb.declarative_analyser.c"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_59_59);
                        }
#line 761 "declarative_analyser.m"
                        {
#line 761 "declarative_analyser.m"
                          mdb__declarative_analyser__TopMostNode_22 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_59_59, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, mdb__declarative_analyser__TopMostId_21);
                        }
#line 9107 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 0)), (MR_Integer) 14)));
#line 9109 "mdb.declarative_analyser.c"
                        {
#line 9111 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39), mdb__declarative_analyser__Store_6, mdb__declarative_analyser__TopMostNode_22);
                        }
#line 765 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 764 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 765 "declarative_analyser.m"
                        else
#line 766 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 766 "declarative_analyser.m"
                        *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 760 "declarative_analyser.m"
                      }
#line 759 "declarative_analyser.m"
                  }
#line 749 "declarative_analyser.m"
              }
#line 725 "declarative_analyser.m"
          }
#line 718 "declarative_analyser.m"
        else
#line 718 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__MaybeUnknownDescendant_12)) == (MR_mktag((MR_Integer) 1))))
#line 716 "declarative_analyser.m"
            {
#line 716 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__Unknown_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeUnknownDescendant_12, (MR_Integer) 0)));

#line 717 "declarative_analyser.m"
              {
#line 717 "declarative_analyser.m"
                MR_Word base;
#line 717 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 717 "declarative_analyser.m"
                *mdb__declarative_analyser__Response_9 = base;
#line 717 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_13));
#line 717 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 717 "declarative_analyser.m"
              }
#line 717 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 716 "declarative_analyser.m"
            }
#line 718 "declarative_analyser.m"
          else
#line 771 "declarative_analyser.m"
            {
#line 771 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__RequireExplicitId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__MaybeUnknownDescendant_12, (MR_Integer) 0)));

#line 772 "declarative_analyser.m"
              {
#line 772 "declarative_analyser.m"
                MR_Word base;
#line 772 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 772 "declarative_analyser.m"
                *mdb__declarative_analyser__Response_9 = base;
#line 772 "declarative_analyser.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__RequireExplicitId_23));
#line 772 "declarative_analyser.m"
              }
#line 772 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 771 "declarative_analyser.m"
            }
#line 704 "declarative_analyser.m"
      }
#line 704 "declarative_analyser.m"
      break;
#line 704 "declarative_analyser.m"
    }
#line 700 "declarative_analyser.m"
}

#line 669 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__search_for_question_8_p_0(
#line 669 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33,
#line 669 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_9,
#line 669 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_10,
#line 669 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 669 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 669 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__OldMode_12,
#line 669 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_13,
#line 669 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_14,
#line 669 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_15)
#line 669 "declarative_analyser.m"
{
#line 677 "declarative_analyser.m"
  {
#line 677 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 677 "declarative_analyser.m"
    if ((mdb__declarative_analyser__OldMode_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 677 "declarative_analyser.m"
      {
#line 678 "declarative_analyser.m"
        {
#line 678 "declarative_analyser.m"
          mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
        }
#line 683 "declarative_analyser.m"
        *mdb__declarative_analyser__NewMode_14 = mdb__declarative_analyser__FallBackSearchMode_13;
#line 677 "declarative_analyser.m"
      }
#line 677 "declarative_analyser.m"
    else
#line 677 "declarative_analyser.m"
      if (((MR_tag((MR_Word) mdb__declarative_analyser__OldMode_12)) == (MR_mktag((MR_Integer) 2))))
#line 691 "declarative_analyser.m"
        {
#line 691 "declarative_analyser.m"
          MR_ArrayPtr mdb__declarative_analyser__PathArray_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
#line 691 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__Top_22;
#line 691 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__Bottom_23;
#line 691 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__LastTested_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 2)));
#line 691 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 1)));

#line 691 "declarative_analyser.m"
          mdb__declarative_analyser__Top_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_29_29, (MR_Integer) 0)));
#line 691 "declarative_analyser.m"
          mdb__declarative_analyser__Bottom_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_29_29, (MR_Integer) 1)));
#line 692 "declarative_analyser.m"
          {
#line 692 "declarative_analyser.m"
            mdb__declarative_analyser__binary_search_11_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__PathArray_21, mdb__declarative_analyser__Top_22, mdb__declarative_analyser__Bottom_23, mdb__declarative_analyser__LastTested_24, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__FallBackSearchMode_13, mdb__declarative_analyser__NewMode_14, mdb__declarative_analyser__Response_15);
#line 692 "declarative_analyser.m"
            return;
          }
#line 691 "declarative_analyser.m"
        }
#line 677 "declarative_analyser.m"
      else
#line 677 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__OldMode_12)) == (MR_mktag((MR_Integer) 3))))
#line 695 "declarative_analyser.m"
          {
#line 695 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__Weighting_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
#line 1063 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__RootId_41;
#line 1056 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_23_48;

#line 1053 "declarative_analyser.m"
            *mdb__declarative_analyser__NewMode_14 = mdb__declarative_analyser__OldMode_12;
#line 9277 "mdb.declarative_analyser.c"
            {
#line 9279 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_23_48);
            }
#line 1056 "declarative_analyser.m"
            {
#line 1056 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_23_48, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, &mdb__declarative_analyser__RootId_41);
            }
#line 1063 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 1060 "declarative_analyser.m"
              {
#line 1060 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__Children_42;
#line 1060 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_43;

#line 1057 "declarative_analyser.m"
                {
#line 1057 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__RootId_41, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_43, &mdb__declarative_analyser__Children_42);
                }
#line 1060 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1058 "declarative_analyser.m"
                  {
#line 1058 "declarative_analyser.m"
                    {
#line 1058 "declarative_analyser.m"
                      mdb__declarative_analyser__find_middle_weight_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__Weighting_25, mdb__declarative_analyser__Children_42, mdb__declarative_analyser__RootId_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_43, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
#line 1058 "declarative_analyser.m"
                      return;
                    }
#line 1058 "declarative_analyser.m"
                  }
#line 1060 "declarative_analyser.m"
                else
#line 1061 "declarative_analyser.m"
                  {
#line 1061 "declarative_analyser.m"
                    {
#line 1061 "declarative_analyser.m"
                      MR_Word base;
#line 1061 "declarative_analyser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1061 "declarative_analyser.m"
                      *mdb__declarative_analyser__Response_15 = base;
#line 1061 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__RootId_41));
#line 1061 "declarative_analyser.m"
                    }
#line 1061 "declarative_analyser.m"
                    *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26;
#line 1061 "declarative_analyser.m"
                  }
#line 1060 "declarative_analyser.m"
              }
#line 1063 "declarative_analyser.m"
            else
#line 1064 "declarative_analyser.m"
              {
#line 1064 "declarative_analyser.m"
                mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
#line 1064 "declarative_analyser.m"
                return;
              }
#line 695 "declarative_analyser.m"
          }
#line 677 "declarative_analyser.m"
        else
#line 686 "declarative_analyser.m"
          {
#line 686 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__SuspectId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
#line 686 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__ArgPos_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 1)));
#line 686 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TermPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 2)));
#line 686 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__LastUnknown_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 3)));
#line 686 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__HowTrack_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 4)));

#line 687 "declarative_analyser.m"
            {
#line 687 "declarative_analyser.m"
              mdb__declarative_analyser__follow_subterm_end_search_12_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__HowTrack_20, mdb__declarative_analyser__LastUnknown_19, mdb__declarative_analyser__SuspectId_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, mdb__declarative_analyser__FallBackSearchMode_13, mdb__declarative_analyser__NewMode_14, mdb__declarative_analyser__Response_15);
#line 687 "declarative_analyser.m"
              return;
            }
#line 686 "declarative_analyser.m"
          }
#line 677 "declarative_analyser.m"
  }
#line 669 "declarative_analyser.m"
}

#line 657 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_2(
#line 657 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 657 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 657 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2)
#line 657 "declarative_analyser.m"
{
#line 657 "declarative_analyser.m"
  {
#line 657 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;
#line 657 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__conv4_HeadVar__3_3;

#line 657 "declarative_analyser.m"
    {
#line 657 "declarative_analyser.m"
      mdb__declarative_edt__edt_question_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4)), mdb__declarative_analyser__wrapper_arg_1, &mdb__declarative_analyser__conv4_HeadVar__3_3);
    }
#line 657 "declarative_analyser.m"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv4_HeadVar__3_3));
#line 657 "declarative_analyser.m"
  }
#line 657 "declarative_analyser.m"
}

#line 656 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_1(
#line 656 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 656 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
#line 656 "declarative_analyser.m"
{
#line 656 "declarative_analyser.m"
  {
#line 656 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__wrapper_arg_2;
#line 656 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;

#line 656 "declarative_analyser.m"
    {
#line 656 "declarative_analyser.m"
      mdb__declarative_analyser__wrapper_arg_2 = mdb__declarative_analyser__IntroducedFrom__func__bug_response__656__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
#line 656 "declarative_analyser.m"
    return mdb__declarative_analyser__wrapper_arg_2;
#line 656 "declarative_analyser.m"
  }
#line 656 "declarative_analyser.m"
}

#line 639 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0(
#line 639 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 639 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 639 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 639 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__BugId_9,
#line 639 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Evidence_10,
#line 639 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__InadmissibleChildren_11,
#line 639 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_12)
#line 639 "declarative_analyser.m"
{
#line 644 "declarative_analyser.m"
  {
#line 644 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 644 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_26_26;
#line 644 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_29_29;
#line 644 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_36_36;
#line 644 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_37_37;
#line 644 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_39_39;
#line 644 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__BugNode_13;
#line 644 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__Bug_17;
#line 644 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__EDTNodes_19;
#line 644 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__EvidenceAsQuestions_20;
#line 644 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_22_22;
#line 644 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_23_23;
#line 657 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__conv5_EvidenceAsQuestions_20;

#line 9482 "mdb.declarative_analyser.c"
    {
#line 9484 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_26_26);
    }
#line 645 "declarative_analyser.m"
    {
#line 645 "declarative_analyser.m"
      mdb__declarative_analyser__BugNode_13 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_26_26, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__BugId_9);
    }
#line 651 "declarative_analyser.m"
    if ((mdb__declarative_analyser__InadmissibleChildren_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 652 "declarative_analyser.m"
      {
#line 652 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__EBug_18;
#line 9498 "mdb.declarative_analyser.c"
        void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 6)));
#line 9500 "mdb.declarative_analyser.c"
        MR_Box mdb__declarative_analyser__conv1_EBug_18;

#line 9503 "mdb.declarative_analyser.c"
        {
#line 9505 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__BugNode_13, &mdb__declarative_analyser__conv1_EBug_18);
        }
#line 9508 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__EBug_18 = ((MR_Word) mdb__declarative_analyser__conv1_EBug_18);
#line 654 "declarative_analyser.m"
        {
#line 654 "declarative_analyser.m"
          mdb__declarative_analyser__Bug_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 654 "declarative_analyser.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Bug_17, 0) = ((MR_Box) (mdb__declarative_analyser__EBug_18));
#line 654 "declarative_analyser.m"
        }
#line 652 "declarative_analyser.m"
      }
#line 651 "declarative_analyser.m"
    else
#line 647 "declarative_analyser.m"
      {
#line 647 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_27_27;
#line 647 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__InadmissibleChild_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__InadmissibleChildren_11, (MR_Integer) 0)));
#line 647 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__IBug_16;
#line 647 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__V_21_21;
#line 647 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__InadmissibleChildren_11, (MR_Integer) 1)));
#line 9534 "mdb.declarative_analyser.c"
        void MR_CALL (* mdb__declarative_analyser__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9536 "mdb.declarative_analyser.c"
        MR_Box mdb__declarative_analyser__conv3_IBug_16;

#line 9539 "mdb.declarative_analyser.c"
        {
#line 9541 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_27_27);
        }
#line 649 "declarative_analyser.m"
        {
#line 649 "declarative_analyser.m"
          mdb__declarative_analyser__V_21_21 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_27_27, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__InadmissibleChild_14);
        }
#line 9549 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9551 "mdb.declarative_analyser.c"
        {
#line 9553 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_2(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__BugNode_13, mdb__declarative_analyser__V_21_21, &mdb__declarative_analyser__conv3_IBug_16);
        }
#line 9556 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__IBug_16 = ((MR_Word) mdb__declarative_analyser__conv3_IBug_16);
#line 650 "declarative_analyser.m"
        mdb__declarative_analyser__Bug_17 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) mdb__declarative_analyser__IBug_16);
#line 647 "declarative_analyser.m"
      }
#line 9562 "mdb.declarative_analyser.c"
    {
#line 9564 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_29_29);
    }
#line 656 "declarative_analyser.m"
    {
#line 656 "declarative_analyser.m"
      mdb__declarative_analyser__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_6[0]));
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__bug_response_6_p_0_1));
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24));
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 4) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_8));
#line 656 "declarative_analyser.m"
    }
#line 656 "declarative_analyser.m"
    {
#line 656 "declarative_analyser.m"
      mdb__declarative_analyser__EDTNodes_19 = mercury__list__map_2_f_0((MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0, mdb__declarative_analyser__TypeInfo_29_29, mdb__declarative_analyser__V_22_22, mdb__declarative_analyser__Evidence_10);
    }
#line 657 "declarative_analyser.m"
    {
#line 657 "declarative_analyser.m"
      mdb__declarative_analyser__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 657 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_6[1]));
#line 657 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__bug_response_6_p_0_2));
#line 657 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 657 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24));
#line 657 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 4) = mdb__declarative_analyser__Store_7;
#line 657 "declarative_analyser.m"
    }
#line 9604 "mdb.declarative_analyser.c"
    {
#line 9606 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_36_36);
    }
#line 9609 "mdb.declarative_analyser.c"
    {
#line 9611 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_37_37);
    }
#line 9614 "mdb.declarative_analyser.c"
    {
#line 9616 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9618 "mdb.declarative_analyser.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_39_39, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 9620 "mdb.declarative_analyser.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_39_39, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_37_37));
#line 9622 "mdb.declarative_analyser.c"
    }
#line 657 "declarative_analyser.m"
    {
#line 657 "declarative_analyser.m"
      mercury__list__map_3_p_0(mdb__declarative_analyser__TypeInfo_36_36, mdb__declarative_analyser__TypeInfo_39_39, (MR_Word) mdb__declarative_analyser__V_23_23, mdb__declarative_analyser__EDTNodes_19, &mdb__declarative_analyser__conv5_EvidenceAsQuestions_20);
    }
#line 657 "declarative_analyser.m"
    mdb__declarative_analyser__EvidenceAsQuestions_20 = (MR_Word) mdb__declarative_analyser__conv5_EvidenceAsQuestions_20;
#line 659 "declarative_analyser.m"
    {
#line 659 "declarative_analyser.m"
      MR_Word base;
#line 659 "declarative_analyser.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 659 "declarative_analyser.m"
      *mdb__declarative_analyser__Response_12 = base;
#line 659 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Bug_17));
#line 659 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__EvidenceAsQuestions_20));
#line 659 "declarative_analyser.m"
    }
#line 644 "declarative_analyser.m"
  }
#line 639 "declarative_analyser.m"
}

#line 572 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__handle_search_response_5_p_0(
#line 572 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78,
#line 572 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 572 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchResponse_7,
#line 572 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20,
#line 572 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_21,
#line 572 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__AnalyserResponse_9)
#line 572 "declarative_analyser.m"
{
#line 578 "declarative_analyser.m"
  {
#line 578 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 578 "declarative_analyser.m"
    if ((mdb__declarative_analyser__SearchResponse_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 622 "declarative_analyser.m"
      {
#line 623 "declarative_analyser.m"
        *mdb__declarative_analyser__AnalyserResponse_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 623 "declarative_analyser.m"
        *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20;
#line 622 "declarative_analyser.m"
      }
#line 578 "declarative_analyser.m"
    else
#line 578 "declarative_analyser.m"
      if ((mdb__declarative_analyser__SearchResponse_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "declarative_analyser.m"
        {
#line 614 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TypeInfo_88_88;
#line 614 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TypeInfo_89_89;
#line 614 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__TopMostId_15;
#line 614 "declarative_analyser.m"
          MR_Box mdb__declarative_analyser__TopMost_16;
#line 614 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__SearchSpace_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 615 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 615 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 615 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 615 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 615 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));

#line 615 "declarative_analyser.m"
          {
#line 615 "declarative_analyser.m"
            MR_Word base;
#line 615 "declarative_analyser.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 615 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
#line 615 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_39));
#line 615 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_4[2])));
#line 615 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_64_64));
#line 615 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_65_65));
#line 615 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_66_66));
#line 615 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_67_67));
#line 615 "declarative_analyser.m"
          }
#line 9731 "mdb.declarative_analyser.c"
          {
#line 9733 "mdb.declarative_analyser.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_88_88);
          }
#line 617 "declarative_analyser.m"
          {
#line 617 "declarative_analyser.m"
            mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_88_88, mdb__declarative_analyser__SearchSpace_39, &mdb__declarative_analyser__TopMostId_15);
          }
#line 9741 "mdb.declarative_analyser.c"
          {
#line 9743 "mdb.declarative_analyser.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_89_89);
          }
#line 618 "declarative_analyser.m"
          {
#line 618 "declarative_analyser.m"
            mdb__declarative_analyser__TopMost_16 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_89_89, mdb__declarative_analyser__SearchSpace_39, mdb__declarative_analyser__TopMostId_15);
          }
#line 619 "declarative_analyser.m"
          {
#line 619 "declarative_analyser.m"
            MR_Word base;
#line 619 "declarative_analyser.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "declarative_analyser.m"
            *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 619 "declarative_analyser.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 619 "declarative_analyser.m"
            MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_analyser__TopMost_16;
#line 619 "declarative_analyser.m"
          }
#line 614 "declarative_analyser.m"
        }
#line 578 "declarative_analyser.m"
      else
#line 578 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__SearchResponse_7)) == (MR_mktag((MR_Integer) 3))))
#line 626 "declarative_analyser.m"
          {
#line 626 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__BugId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
#line 626 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__CorrectDescendants_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 1)));
#line 626 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__InadmissibleChildren_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 2)));
#line 626 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 626 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_23_23;
#line 627 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 627 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 627 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 627 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 627 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));

#line 628 "declarative_analyser.m"
            {
#line 628 "declarative_analyser.m"
              mdb__declarative_analyser__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 628 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__BugId_17));
#line 628 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__CorrectDescendants_18));
#line 628 "declarative_analyser.m"
            }
#line 627 "declarative_analyser.m"
            {
#line 627 "declarative_analyser.m"
              mdb__declarative_analyser__bug_response_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__V_22_22, mdb__declarative_analyser__BugId_17, mdb__declarative_analyser__V_23_23, mdb__declarative_analyser__InadmissibleChildren_19, mdb__declarative_analyser__AnalyserResponse_9);
            }
#line 627 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20;
#line 626 "declarative_analyser.m"
          }
#line 578 "declarative_analyser.m"
        else
#line 578 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__SearchResponse_7)) == (MR_mktag((MR_Integer) 1))))
#line 578 "declarative_analyser.m"
            {
#line 578 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_80_80;
#line 578 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__SuspectId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
#line 578 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__Reason_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 1)));
#line 578 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__SearchSpace_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 578 "declarative_analyser.m"
              MR_Box mdb__declarative_analyser__Node_13;
#line 578 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__OracleQuestion_14;
#line 578 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_35_35;
#line 578 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_36_36;
#line 579 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 579 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 579 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 579 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 579 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 9845 "mdb.declarative_analyser.c"
              void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9847 "mdb.declarative_analyser.c"
              MR_Box mdb__declarative_analyser__conv1_OracleQuestion_14;
#line 605 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_45_45;
#line 605 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_46_46;
#line 605 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_47_47;
#line 605 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_48_48;
#line 605 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_50_50;
#line 605 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_49_49;

#line 9862 "mdb.declarative_analyser.c"
              {
#line 9864 "mdb.declarative_analyser.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
              }
#line 580 "declarative_analyser.m"
              {
#line 580 "declarative_analyser.m"
                mdb__declarative_analyser__Node_13 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
              }
#line 9872 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9874 "mdb.declarative_analyser.c"
              {
#line 9876 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78), mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_13, &mdb__declarative_analyser__conv1_OracleQuestion_14);
              }
#line 9879 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__OracleQuestion_14 = ((MR_Word) mdb__declarative_analyser__conv1_OracleQuestion_14);
#line 584 "declarative_analyser.m"
              {
#line 584 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_81_81;

#line 9886 "mdb.declarative_analyser.c"
                {
#line 9888 "mdb.declarative_analyser.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_81_81);
                }
#line 584 "declarative_analyser.m"
                {
#line 584 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_81_81, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
                }
#line 584 "declarative_analyser.m"
              }
#line 585 "declarative_analyser.m"
              if (!(mdb__declarative_analyser__succeeded))
#line 586 "declarative_analyser.m"
                {
#line 586 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_82_82;

#line 9905 "mdb.declarative_analyser.c"
                  {
#line 9907 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_82_82);
                  }
#line 586 "declarative_analyser.m"
                  {
#line 586 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_skipped_2_p_0(mdb__declarative_analyser__TypeInfo_82_82, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
                  }
#line 586 "declarative_analyser.m"
                }
#line 591 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 589 "declarative_analyser.m"
                {
#line 589 "declarative_analyser.m"
                  MR_Word base;
#line 589 "declarative_analyser.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 589 "declarative_analyser.m"
                  *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 589 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_14));
#line 589 "declarative_analyser.m"
                }
#line 591 "declarative_analyser.m"
              else
#line 598 "declarative_analyser.m"
                {
#line 592 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_83_83;

#line 9938 "mdb.declarative_analyser.c"
                  {
#line 9940 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_83_83);
                  }
#line 592 "declarative_analyser.m"
                  {
#line 592 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_ignored_2_p_0(mdb__declarative_analyser__TypeInfo_83_83, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
                  }
#line 598 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 596 "declarative_analyser.m"
                    {
#line 596 "declarative_analyser.m"
                      {
#line 596 "declarative_analyser.m"
                        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[16])));
#line 596 "declarative_analyser.m"
                        return;
                      }
#line 596 "declarative_analyser.m"
                    }
#line 598 "declarative_analyser.m"
                  else
#line 603 "declarative_analyser.m"
                    {
#line 603 "declarative_analyser.m"
                      MR_Word base;
#line 603 "declarative_analyser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 603 "declarative_analyser.m"
                      *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 603 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 603 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_14));
#line 603 "declarative_analyser.m"
                    }
#line 598 "declarative_analyser.m"
                }
#line 606 "declarative_analyser.m"
              {
#line 606 "declarative_analyser.m"
                mdb__declarative_analyser__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 606 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_36_36, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_10));
#line 606 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_36_36, 1) = ((MR_Box) (mdb__declarative_analyser__Reason_11));
#line 606 "declarative_analyser.m"
              }
#line 606 "declarative_analyser.m"
              {
#line 606 "declarative_analyser.m"
                mdb__declarative_analyser__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 606 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_35_35, 0) = ((MR_Box) (mdb__declarative_analyser__V_36_36));
#line 606 "declarative_analyser.m"
              }
#line 605 "declarative_analyser.m"
              mdb__declarative_analyser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 605 "declarative_analyser.m"
              mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 605 "declarative_analyser.m"
              mdb__declarative_analyser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 605 "declarative_analyser.m"
              mdb__declarative_analyser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 605 "declarative_analyser.m"
              mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 605 "declarative_analyser.m"
              mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 605 "declarative_analyser.m"
              {
#line 605 "declarative_analyser.m"
                MR_Word base;
#line 605 "declarative_analyser.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 605 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
#line 605 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 605 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_46_46));
#line 605 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 605 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_48_48));
#line 605 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_35_35));
#line 605 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 605 "declarative_analyser.m"
              }
#line 578 "declarative_analyser.m"
            }
#line 578 "declarative_analyser.m"
          else
#line 608 "declarative_analyser.m"
            {
#line 608 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_86_86;
#line 608 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_28_28;
#line 608 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_29_29;
#line 608 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_30_30;
#line 608 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__SuspectId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
#line 608 "declarative_analyser.m"
              MR_Box mdb__declarative_analyser__Node_38;
#line 609 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_51_51;
#line 609 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_53_53;
#line 609 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_54_54;
#line 609 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_55_55;
#line 609 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_56_56;
#line 609 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_52_52;
#line 611 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_57_57;
#line 611 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_58_58;
#line 611 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_59_59;
#line 611 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_60_60;
#line 611 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_61_61;

#line 609 "declarative_analyser.m"
              {
#line 609 "declarative_analyser.m"
                mdb__declarative_analyser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 609 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_29_29, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_37));
#line 609 "declarative_analyser.m"
              }
#line 609 "declarative_analyser.m"
              {
#line 609 "declarative_analyser.m"
                mdb__declarative_analyser__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 609 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_28_28, 0) = ((MR_Box) (mdb__declarative_analyser__V_29_29));
#line 609 "declarative_analyser.m"
              }
#line 609 "declarative_analyser.m"
              mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 609 "declarative_analyser.m"
              mdb__declarative_analyser__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 609 "declarative_analyser.m"
              mdb__declarative_analyser__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 609 "declarative_analyser.m"
              mdb__declarative_analyser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 609 "declarative_analyser.m"
              mdb__declarative_analyser__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 609 "declarative_analyser.m"
              mdb__declarative_analyser__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 609 "declarative_analyser.m"
              {
#line 609 "declarative_analyser.m"
                MR_Word base;
#line 609 "declarative_analyser.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 609 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
#line 609 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 609 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_28_28));
#line 609 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_53_53));
#line 609 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_54_54));
#line 609 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_55_55));
#line 609 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_56_56));
#line 609 "declarative_analyser.m"
              }
#line 10122 "mdb.declarative_analyser.c"
              {
#line 10124 "mdb.declarative_analyser.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_86_86);
              }
#line 611 "declarative_analyser.m"
              mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 0)));
#line 611 "declarative_analyser.m"
              mdb__declarative_analyser__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 1)));
#line 611 "declarative_analyser.m"
              mdb__declarative_analyser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 2)));
#line 611 "declarative_analyser.m"
              mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 3)));
#line 611 "declarative_analyser.m"
              mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 4)));
#line 611 "declarative_analyser.m"
              mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 5)));
#line 611 "declarative_analyser.m"
              {
#line 611 "declarative_analyser.m"
                mdb__declarative_analyser__Node_38 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_86_86, mdb__declarative_analyser__V_30_30, mdb__declarative_analyser__SuspectId_37);
              }
#line 612 "declarative_analyser.m"
              {
#line 612 "declarative_analyser.m"
                MR_Word base;
#line 612 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 612 "declarative_analyser.m"
                *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 612 "declarative_analyser.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 612 "declarative_analyser.m"
                MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_analyser__Node_38;
#line 612 "declarative_analyser.m"
              }
#line 608 "declarative_analyser.m"
            }
#line 578 "declarative_analyser.m"
  }
#line 572 "declarative_analyser.m"
}

#line 553 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__decide_analyser_response_5_p_0(
#line 553 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63,
#line 553 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 553 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 553 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_8,
#line 553 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13,
#line 553 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_14)
#line 553 "declarative_analyser.m"
{
#line 557 "declarative_analyser.m"
  {
#line 557 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__NewMode_11;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__SearchResponse_12;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_24_24;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_32_32;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_33_33;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_47_47;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_49_49;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_50_50;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_51_51;
#line 558 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 558 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 558 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 558 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 558 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 561 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_31_31;
#line 561 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_34_34;
#line 561 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_35_35;
#line 565 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_46_46;
#line 565 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_48_48;
#line 569 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_58_58;
#line 569 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_59_59;
#line 569 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_60_60;
#line 569 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_61_61;
#line 569 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_62_62;

#line 558 "declarative_analyser.m"
    {
#line 558 "declarative_analyser.m"
      mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__V_15_15, (MR_String) "Start of decide_analyser_response");
    }
#line 561 "declarative_analyser.m"
    mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 561 "declarative_analyser.m"
    mdb__declarative_analyser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 561 "declarative_analyser.m"
    mdb__declarative_analyser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 561 "declarative_analyser.m"
    mdb__declarative_analyser__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 561 "declarative_analyser.m"
    mdb__declarative_analyser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 561 "declarative_analyser.m"
    mdb__declarative_analyser__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 562 "declarative_analyser.m"
    {
#line 562 "declarative_analyser.m"
      mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18, mdb__declarative_analyser__V_32_32, mdb__declarative_analyser__V_33_33, &mdb__declarative_analyser__NewMode_11, &mdb__declarative_analyser__SearchResponse_12);
    }
#line 565 "declarative_analyser.m"
    mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 565 "declarative_analyser.m"
    mdb__declarative_analyser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 565 "declarative_analyser.m"
    mdb__declarative_analyser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 565 "declarative_analyser.m"
    mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 565 "declarative_analyser.m"
    mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 565 "declarative_analyser.m"
    mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 566 "declarative_analyser.m"
    {
#line 566 "declarative_analyser.m"
      mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 566 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 0) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18));
#line 566 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 566 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 2) = ((MR_Box) (mdb__declarative_analyser__NewMode_11));
#line 566 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 3) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 566 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 4) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 566 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 5) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 566 "declarative_analyser.m"
    }
#line 567 "declarative_analyser.m"
    {
#line 567 "declarative_analyser.m"
      mdb__declarative_analyser__handle_search_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__SearchResponse_12, mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, mdb__declarative_analyser__Response_8);
    }
#line 569 "declarative_analyser.m"
    mdb__declarative_analyser__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 0)));
#line 569 "declarative_analyser.m"
    mdb__declarative_analyser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 1)));
#line 569 "declarative_analyser.m"
    mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 2)));
#line 569 "declarative_analyser.m"
    mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 3)));
#line 569 "declarative_analyser.m"
    mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 4)));
#line 569 "declarative_analyser.m"
    mdb__declarative_analyser__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 5)));
#line 569 "declarative_analyser.m"
    {
#line 569 "declarative_analyser.m"
      mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__V_24_24, (MR_String) "End of decide_analyser_response");
#line 569 "declarative_analyser.m"
      return;
    }
#line 557 "declarative_analyser.m"
  }
#line 553 "declarative_analyser.m"
}

#line 475 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__process_answer_5_p_0(
#line 475 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137,
#line 475 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 475 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Answer_7,
#line 475 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_8,
#line 475 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24,
#line 475 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_25)
#line 475 "declarative_analyser.m"
{
#line 480 "declarative_analyser.m"
  {
#line 480 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 480 "declarative_analyser.m"
    if (((MR_tag((MR_Word) mdb__declarative_analyser__Answer_7)) == (MR_mktag((MR_Integer) 2))))
#line 484 "declarative_analyser.m"
      {
#line 484 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 484 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__SearchSpace_47;
#line 485 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 485 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 485 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 485 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 485 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 487 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_71_71;
#line 487 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_72_72;
#line 487 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_73_73;
#line 487 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_74_74;
#line 487 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_75_75;
#line 487 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_70_70;

#line 485 "declarative_analyser.m"
        {
#line 485 "declarative_analyser.m"
          mdb__declarative_edt__ignore_suspect_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_43_43, &mdb__declarative_analyser__SearchSpace_47);
        }
#line 487 "declarative_analyser.m"
        mdb__declarative_analyser__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 487 "declarative_analyser.m"
        mdb__declarative_analyser__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 487 "declarative_analyser.m"
        mdb__declarative_analyser__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 487 "declarative_analyser.m"
        mdb__declarative_analyser__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 487 "declarative_analyser.m"
        mdb__declarative_analyser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 487 "declarative_analyser.m"
        mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 487 "declarative_analyser.m"
        {
#line 487 "declarative_analyser.m"
          MR_Word base;
#line 487 "declarative_analyser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 487 "declarative_analyser.m"
          *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 487 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_47));
#line 487 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_71_71));
#line 487 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_72_72));
#line 487 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_73_73));
#line 487 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_74_74));
#line 487 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_75_75));
#line 487 "declarative_analyser.m"
        }
#line 484 "declarative_analyser.m"
      }
#line 480 "declarative_analyser.m"
    else
#line 480 "declarative_analyser.m"
      if (((MR_tag((MR_Word) mdb__declarative_analyser__Answer_7)) == (MR_mktag((MR_Integer) 3))))
#line 480 "declarative_analyser.m"
        {
#line 480 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TypeInfo_139_139;
#line 480 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__SearchSpace_11;
#line 480 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 482 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_60_60;
#line 482 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_61_61;
#line 482 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_62_62;
#line 482 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_63_63;
#line 482 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_64_64;
#line 482 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_59_59;

#line 10453 "mdb.declarative_analyser.c"
          {
#line 10455 "mdb.declarative_analyser.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_139_139);
          }
#line 481 "declarative_analyser.m"
          {
#line 481 "declarative_analyser.m"
            mdb__declarative_edt__skip_suspect_3_p_0(mdb__declarative_analyser__TypeInfo_139_139, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_45_45, &mdb__declarative_analyser__SearchSpace_11);
          }
#line 482 "declarative_analyser.m"
          mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 482 "declarative_analyser.m"
          mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 482 "declarative_analyser.m"
          mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 482 "declarative_analyser.m"
          mdb__declarative_analyser__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 482 "declarative_analyser.m"
          mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 482 "declarative_analyser.m"
          mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 482 "declarative_analyser.m"
          {
#line 482 "declarative_analyser.m"
            MR_Word base;
#line 482 "declarative_analyser.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 482 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 482 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_11));
#line 482 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_60_60));
#line 482 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_61_61));
#line 482 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_62_62));
#line 482 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_63_63));
#line 482 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_64_64));
#line 482 "declarative_analyser.m"
          }
#line 480 "declarative_analyser.m"
        }
#line 480 "declarative_analyser.m"
      else
#line 480 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__Answer_7)) == (MR_mktag((MR_Integer) 1))))
#line 505 "declarative_analyser.m"
          {
#line 505 "declarative_analyser.m"
            MR_Box mdb__declarative_analyser__Node_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 0));
#line 505 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__ArgPos_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 1)));
#line 505 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TermPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 2)));
#line 505 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__HowTrack_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 505 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__ShouldAssertInvalid_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 505 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__DebugOrigin_22;
#line 505 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26;
#line 505 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_27_27;
#line 505 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30;
#line 505 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_32_32;
#line 512 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_21_21;
#line 513 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_109_109;
#line 513 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_110_110;
#line 513 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_111_111;
#line 513 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_112_112;
#line 513 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_113_113;
#line 513 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_114_114;
#line 530 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_131_131;
#line 530 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_132_132;
#line 530 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_134_134;
#line 530 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_135_135;
#line 530 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_136_136;
#line 530 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_133_133;

#line 512 "declarative_analyser.m"
            {
#line 512 "declarative_analyser.m"
              mdb__declarative_edt__edt_dependency_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, &mdb__declarative_analyser__V_21_21, &mdb__declarative_analyser__DebugOrigin_22);
            }
#line 513 "declarative_analyser.m"
            {
#line 513 "declarative_analyser.m"
              mdb__declarative_analyser__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 513 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_27_27, 0) = ((MR_Box) (mdb__declarative_analyser__DebugOrigin_22));
#line 513 "declarative_analyser.m"
            }
#line 513 "declarative_analyser.m"
            mdb__declarative_analyser__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 513 "declarative_analyser.m"
            mdb__declarative_analyser__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 513 "declarative_analyser.m"
            mdb__declarative_analyser__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 513 "declarative_analyser.m"
            mdb__declarative_analyser__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 513 "declarative_analyser.m"
            mdb__declarative_analyser__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 513 "declarative_analyser.m"
            mdb__declarative_analyser__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 513 "declarative_analyser.m"
            {
#line 513 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 513 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 0) = ((MR_Box) (mdb__declarative_analyser__V_109_109));
#line 513 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 1) = ((MR_Box) (mdb__declarative_analyser__V_110_110));
#line 513 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 2) = ((MR_Box) (mdb__declarative_analyser__V_111_111));
#line 513 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 3) = ((MR_Box) (mdb__declarative_analyser__V_112_112));
#line 513 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 4) = ((MR_Box) (mdb__declarative_analyser__V_113_113));
#line 513 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 5) = ((MR_Box) (mdb__declarative_analyser__V_27_27));
#line 513 "declarative_analyser.m"
            }
#line 527 "declarative_analyser.m"
            if ((mdb__declarative_analyser__ShouldAssertInvalid_20 == (MR_Integer) 0))
#line 515 "declarative_analyser.m"
              {
#line 515 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__Mode_23;
#line 515 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__SearchSpace_51;
#line 515 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_150_150;
#line 515 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_151_151;
#line 515 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_152_152;
#line 515 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_153_153;
#line 515 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_154_154;
#line 515 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_155_155;

#line 516 "declarative_analyser.m"
                {
#line 516 "declarative_analyser.m"
                  mdb__declarative_edt__edt_subterm_mode_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, &mdb__declarative_analyser__Mode_23);
                }
#line 519 "declarative_analyser.m"
                mdb__declarative_analyser__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 0)));
#line 519 "declarative_analyser.m"
                mdb__declarative_analyser__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 1)));
#line 519 "declarative_analyser.m"
                mdb__declarative_analyser__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 2)));
#line 519 "declarative_analyser.m"
                mdb__declarative_analyser__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 3)));
#line 519 "declarative_analyser.m"
                mdb__declarative_analyser__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 4)));
#line 519 "declarative_analyser.m"
                mdb__declarative_analyser__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 5)));
#line 521 "declarative_analyser.m"
                if ((mdb__declarative_analyser__Mode_23 == (MR_Integer) 0))
#line 518 "declarative_analyser.m"
                  {
#line 518 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_147_147;

#line 10640 "mdb.declarative_analyser.c"
                    {
#line 10642 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_147_147);
                    }
#line 519 "declarative_analyser.m"
                    {
#line 519 "declarative_analyser.m"
                      mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(mdb__declarative_analyser__TypeInfo_147_147, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_155_155, &mdb__declarative_analyser__SearchSpace_51);
                    }
#line 518 "declarative_analyser.m"
                  }
#line 521 "declarative_analyser.m"
                else
#line 522 "declarative_analyser.m"
                  {
#line 522 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_149_149;

#line 10659 "mdb.declarative_analyser.c"
                    {
#line 10661 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_149_149);
                    }
#line 523 "declarative_analyser.m"
                    {
#line 523 "declarative_analyser.m"
                      mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(mdb__declarative_analyser__TypeInfo_149_149, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_155_155, &mdb__declarative_analyser__SearchSpace_51);
                    }
#line 522 "declarative_analyser.m"
                  }
#line 526 "declarative_analyser.m"
                {
#line 526 "declarative_analyser.m"
                  mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 526 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_51));
#line 526 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 1) = ((MR_Box) (mdb__declarative_analyser__V_154_154));
#line 526 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 2) = ((MR_Box) (mdb__declarative_analyser__V_153_153));
#line 526 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 3) = ((MR_Box) (mdb__declarative_analyser__V_152_152));
#line 526 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 4) = ((MR_Box) (mdb__declarative_analyser__V_151_151));
#line 526 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 5) = ((MR_Box) (mdb__declarative_analyser__V_150_150));
#line 526 "declarative_analyser.m"
                }
#line 515 "declarative_analyser.m"
              }
#line 527 "declarative_analyser.m"
            else
#line 528 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26;
#line 531 "declarative_analyser.m"
            {
#line 531 "declarative_analyser.m"
              mdb__declarative_analyser__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 531 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_8));
#line 531 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_17));
#line 531 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_18));
#line 531 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 531 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_19));
#line 531 "declarative_analyser.m"
            }
#line 530 "declarative_analyser.m"
            mdb__declarative_analyser__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 0)));
#line 530 "declarative_analyser.m"
            mdb__declarative_analyser__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 1)));
#line 530 "declarative_analyser.m"
            mdb__declarative_analyser__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 2)));
#line 530 "declarative_analyser.m"
            mdb__declarative_analyser__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 3)));
#line 530 "declarative_analyser.m"
            mdb__declarative_analyser__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 4)));
#line 530 "declarative_analyser.m"
            mdb__declarative_analyser__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 5)));
#line 530 "declarative_analyser.m"
            {
#line 530 "declarative_analyser.m"
              MR_Word base;
#line 530 "declarative_analyser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 530 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 530 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_131_131));
#line 530 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_132_132));
#line 530 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_32_32));
#line 530 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_134_134));
#line 530 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_135_135));
#line 530 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_136_136));
#line 530 "declarative_analyser.m"
            }
#line 505 "declarative_analyser.m"
          }
#line 480 "declarative_analyser.m"
        else
#line 480 "declarative_analyser.m"
          {
#line 480 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Answer_7, (MR_Integer) 1)));
#line 480 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 489 "declarative_analyser.m"
            MR_Box mdb__declarative_analyser__V_157_157 = (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Answer_7, (MR_Integer) 0));
#line 490 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 490 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 490 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 490 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 490 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));

#line 480 "declarative_analyser.m"
            if ((mdb__declarative_analyser__V_156_156 == (MR_Integer) 0))
#line 489 "declarative_analyser.m"
              {
#line 489 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_141_141;
#line 489 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__SearchSpace_48;
#line 492 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_82_82;
#line 492 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_83_83;
#line 492 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_84_84;
#line 492 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_85_85;
#line 492 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_86_86;
#line 492 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_81_81;

#line 10789 "mdb.declarative_analyser.c"
                {
#line 10791 "mdb.declarative_analyser.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_141_141);
                }
#line 490 "declarative_analyser.m"
                {
#line 490 "declarative_analyser.m"
                  mdb__declarative_edt__assert_suspect_is_correct_3_p_0(mdb__declarative_analyser__TypeInfo_141_141, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_163_163, &mdb__declarative_analyser__SearchSpace_48);
                }
#line 492 "declarative_analyser.m"
                mdb__declarative_analyser__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 492 "declarative_analyser.m"
                mdb__declarative_analyser__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 492 "declarative_analyser.m"
                mdb__declarative_analyser__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 492 "declarative_analyser.m"
                mdb__declarative_analyser__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 492 "declarative_analyser.m"
                mdb__declarative_analyser__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 492 "declarative_analyser.m"
                mdb__declarative_analyser__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 492 "declarative_analyser.m"
                {
#line 492 "declarative_analyser.m"
                  MR_Word base;
#line 492 "declarative_analyser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 492 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 492 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_48));
#line 492 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_82_82));
#line 492 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_83_83));
#line 492 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_84_84));
#line 492 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_85_85));
#line 492 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_86_86));
#line 492 "declarative_analyser.m"
                }
#line 489 "declarative_analyser.m"
              }
#line 480 "declarative_analyser.m"
            else
#line 480 "declarative_analyser.m"
              if ((mdb__declarative_analyser__V_156_156 == (MR_Integer) 1))
#line 499 "declarative_analyser.m"
                {
#line 499 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_145_145;
#line 499 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__SearchSpace_50;
#line 502 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_104_104;
#line 502 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_105_105;
#line 502 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_106_106;
#line 502 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_107_107;
#line 502 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_108_108;
#line 502 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_103_103;

#line 10858 "mdb.declarative_analyser.c"
                  {
#line 10860 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_145_145);
                  }
#line 500 "declarative_analyser.m"
                  {
#line 500 "declarative_analyser.m"
                    mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(mdb__declarative_analyser__TypeInfo_145_145, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_163_163, &mdb__declarative_analyser__SearchSpace_50);
                  }
#line 502 "declarative_analyser.m"
                  mdb__declarative_analyser__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 502 "declarative_analyser.m"
                  mdb__declarative_analyser__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 502 "declarative_analyser.m"
                  mdb__declarative_analyser__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 502 "declarative_analyser.m"
                  mdb__declarative_analyser__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 502 "declarative_analyser.m"
                  mdb__declarative_analyser__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 502 "declarative_analyser.m"
                  mdb__declarative_analyser__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 502 "declarative_analyser.m"
                  {
#line 502 "declarative_analyser.m"
                    MR_Word base;
#line 502 "declarative_analyser.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 502 "declarative_analyser.m"
                    *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 502 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_50));
#line 502 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_104_104));
#line 502 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_105_105));
#line 502 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_106_106));
#line 502 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_107_107));
#line 502 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_108_108));
#line 502 "declarative_analyser.m"
                  }
#line 499 "declarative_analyser.m"
                }
#line 480 "declarative_analyser.m"
              else
#line 494 "declarative_analyser.m"
                {
#line 494 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_143_143;
#line 494 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__SearchSpace_49;
#line 497 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_93_93;
#line 497 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_94_94;
#line 497 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_95_95;
#line 497 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_96_96;
#line 497 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_97_97;
#line 497 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_92_92;

#line 10925 "mdb.declarative_analyser.c"
                  {
#line 10927 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_143_143);
                  }
#line 495 "declarative_analyser.m"
                  {
#line 495 "declarative_analyser.m"
                    mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(mdb__declarative_analyser__TypeInfo_143_143, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_163_163, &mdb__declarative_analyser__SearchSpace_49);
                  }
#line 497 "declarative_analyser.m"
                  mdb__declarative_analyser__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 497 "declarative_analyser.m"
                  mdb__declarative_analyser__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 497 "declarative_analyser.m"
                  mdb__declarative_analyser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 497 "declarative_analyser.m"
                  mdb__declarative_analyser__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 497 "declarative_analyser.m"
                  mdb__declarative_analyser__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 497 "declarative_analyser.m"
                  mdb__declarative_analyser__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 497 "declarative_analyser.m"
                  {
#line 497 "declarative_analyser.m"
                    MR_Word base;
#line 497 "declarative_analyser.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 497 "declarative_analyser.m"
                    *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 497 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_49));
#line 497 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_93_93));
#line 497 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_94_94));
#line 497 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_95_95));
#line 497 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_96_96));
#line 497 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_97_97));
#line 497 "declarative_analyser.m"
                  }
#line 494 "declarative_analyser.m"
                }
#line 480 "declarative_analyser.m"
          }
#line 480 "declarative_analyser.m"
  }
#line 475 "declarative_analyser.m"
}

#line 417 "declarative_analyser.m"
static MR_Word MR_CALL 
mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(
#line 417 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1)
#line 417 "declarative_analyser.m"
{
#line 420 "declarative_analyser.m"
  {
#line 420 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 420 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__HeadVar__2_2;

#line 420 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 422 "declarative_analyser.m"
      mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "declarative_analyser.m"
    else
#line 420 "declarative_analyser.m"
      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 423 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "declarative_analyser.m"
      else
#line 420 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 420 "declarative_analyser.m"
          {
#line 420 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__Weighting_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));

#line 421 "declarative_analyser.m"
            {
#line 421 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 421 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 421 "declarative_analyser.m"
            }
#line 420 "declarative_analyser.m"
          }
#line 420 "declarative_analyser.m"
        else
#line 425 "declarative_analyser.m"
          mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 420 "declarative_analyser.m"
    return mdb__declarative_analyser__HeadVar__2_2;
#line 420 "declarative_analyser.m"
  }
#line 417 "declarative_analyser.m"
}

#line 137 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__debug_analyser_state_2_p_0(
#line 137 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_9,
#line 137 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Analyser_3,
#line 137 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__2_2)
#line 137 "declarative_analyser.m"
{
#line 370 "declarative_analyser.m"
  {
#line 370 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 370 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 0)));
#line 370 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 1)));
#line 370 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 2)));
#line 370 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 3)));
#line 370 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 4)));

#line 370 "declarative_analyser.m"
    *mdb__declarative_analyser__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 5)));
#line 370 "declarative_analyser.m"
  }
#line 137 "declarative_analyser.m"
}

#line 131 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__revise_analysis_4_p_0(
#line 131 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59,
#line 131 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_5,
#line 131 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_6,
#line 131 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13,
#line 131 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_14)
#line 131 "declarative_analyser.m"
{
#line 535 "declarative_analyser.m"
  {
#line 535 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 535 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__SearchSpace_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 536 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 536 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 536 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 536 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 536 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 547 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__RootId_9;
#line 537 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_61_61;

#line 11101 "mdb.declarative_analyser.c"
    {
#line 11103 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_61_61);
    }
#line 537 "declarative_analyser.m"
    {
#line 537 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_61_61, mdb__declarative_analyser__SearchSpace_8, &mdb__declarative_analyser__RootId_9);
    }
#line 547 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 538 "declarative_analyser.m"
      {
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_63_63;
#line 538 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__Node_10;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__Question_11;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__SearchSpace1_12;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_15_15;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_18_18;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_19_19;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_37_37;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_39_39;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_41_41;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_42_42;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_43_43;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_45_45;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_47_47;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_31_31;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_32_32;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_33_33;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_34_34;
#line 538 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_35_35;
#line 11153 "mdb.declarative_analyser.c"
        void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11155 "mdb.declarative_analyser.c"
        MR_Box mdb__declarative_analyser__conv1_Question_11;
#line 542 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_36_36;
#line 542 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_38_38;
#line 542 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_40_40;

#line 11164 "mdb.declarative_analyser.c"
        {
#line 11166 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_63_63);
        }
#line 538 "declarative_analyser.m"
        mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 538 "declarative_analyser.m"
        mdb__declarative_analyser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 538 "declarative_analyser.m"
        mdb__declarative_analyser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 538 "declarative_analyser.m"
        mdb__declarative_analyser__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 538 "declarative_analyser.m"
        mdb__declarative_analyser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 538 "declarative_analyser.m"
        mdb__declarative_analyser__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 538 "declarative_analyser.m"
        {
#line 538 "declarative_analyser.m"
          mdb__declarative_analyser__Node_10 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_63_63, mdb__declarative_analyser__V_15_15, mdb__declarative_analyser__RootId_9);
        }
#line 11186 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11188 "mdb.declarative_analyser.c"
        {
#line 11190 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59), mdb__declarative_analyser__Store_5, mdb__declarative_analyser__Node_10, &mdb__declarative_analyser__conv1_Question_11);
        }
#line 11193 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__Question_11 = ((MR_Word) mdb__declarative_analyser__conv1_Question_11);
#line 540 "declarative_analyser.m"
        {
#line 540 "declarative_analyser.m"
          MR_Word base;
#line 540 "declarative_analyser.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 540 "declarative_analyser.m"
          *mdb__declarative_analyser__Response_6 = base;
#line 540 "declarative_analyser.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 540 "declarative_analyser.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__Question_11));
#line 540 "declarative_analyser.m"
        }
#line 541 "declarative_analyser.m"
        {
#line 541 "declarative_analyser.m"
          mdb__declarative_edt__revise_root_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, mdb__declarative_analyser__Store_5, mdb__declarative_analyser__SearchSpace_8, &mdb__declarative_analyser__SearchSpace1_12);
        }
#line 542 "declarative_analyser.m"
        mdb__declarative_analyser__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 542 "declarative_analyser.m"
        mdb__declarative_analyser__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 542 "declarative_analyser.m"
        mdb__declarative_analyser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 542 "declarative_analyser.m"
        mdb__declarative_analyser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 542 "declarative_analyser.m"
        mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 542 "declarative_analyser.m"
        mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 544 "declarative_analyser.m"
        {
#line 544 "declarative_analyser.m"
          mdb__declarative_analyser__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 544 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_19_19, 0) = ((MR_Box) (mdb__declarative_analyser__RootId_9));
#line 544 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 544 "declarative_analyser.m"
        }
#line 544 "declarative_analyser.m"
        {
#line 544 "declarative_analyser.m"
          mdb__declarative_analyser__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 544 "declarative_analyser.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_18_18, 0) = ((MR_Box) (mdb__declarative_analyser__V_19_19));
#line 544 "declarative_analyser.m"
        }
#line 543 "declarative_analyser.m"
        mdb__declarative_analyser__V_42_42 = mdb__declarative_analyser__SearchSpace1_12;
#line 543 "declarative_analyser.m"
        mdb__declarative_analyser__V_43_43 = mdb__declarative_analyser__V_37_37;
#line 543 "declarative_analyser.m"
        mdb__declarative_analyser__V_45_45 = mdb__declarative_analyser__V_39_39;
#line 543 "declarative_analyser.m"
        mdb__declarative_analyser__V_47_47 = mdb__declarative_analyser__V_41_41;
#line 545 "declarative_analyser.m"
        {
#line 545 "declarative_analyser.m"
          MR_Word base;
#line 545 "declarative_analyser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 545 "declarative_analyser.m"
          *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14 = base;
#line 545 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_42_42));
#line 545 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_43_43));
#line 545 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 545 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 545 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_18_18));
#line 545 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 545 "declarative_analyser.m"
        }
#line 538 "declarative_analyser.m"
      }
#line 547 "declarative_analyser.m"
    else
#line 550 "declarative_analyser.m"
      {
#line 550 "declarative_analyser.m"
        {
#line 550 "declarative_analyser.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[15])));
#line 550 "declarative_analyser.m"
          return;
        }
#line 550 "declarative_analyser.m"
      }
#line 535 "declarative_analyser.m"
  }
#line 131 "declarative_analyser.m"
}

#line 125 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__show_info_5_p_0(
#line 125 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135,
#line 125 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 125 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__OutStream_7,
#line 125 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Analyser_8)
#line 125 "declarative_analyser.m"
{
#line 1278 "declarative_analyser.m"
  {
#line 1278 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeCtorInfo_140_140;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_142_142;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__SearchSpace_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 0)));
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__Reason_14;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__MaybeWeighting_21;
#line 1278 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__InfoMessage_26;
#line 1278 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__ReasonStr_27;
#line 1278 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__ReasonSent_28;
#line 1278 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__WrappedReason_29;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_32_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_33_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_63_63;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_69_69;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_70_70;
#line 1278 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__V_71_71;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_72_72;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_91_91;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_95_95;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_96_96;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_97_97;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_98_98;
#line 1278 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 4)));
#line 1278 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__V_153_153;
#line 1278 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__V_155_155;
#line 1278 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__V_156_156;
#line 1279 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 1)));
#line 1279 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 2)));
#line 1279 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 3)));
#line 1279 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 5)));
#line 1313 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_125_125;
#line 1313 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_126_126;
#line 1313 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_127_127;
#line 1313 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_128_128;
#line 1313 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_129_129;
#line 1316 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_74_74;

#line 1307 "declarative_analyser.m"
    if ((mdb__declarative_analyser__V_113_113 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1308 "declarative_analyser.m"
      {
#line 1309 "declarative_analyser.m"
        {
#line 1309 "declarative_analyser.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[10])));
#line 1309 "declarative_analyser.m"
          return;
        }
#line 1308 "declarative_analyser.m"
      }
#line 1307 "declarative_analyser.m"
    else
#line 1287 "declarative_analyser.m"
      {
#line 1287 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__LastId_13;
#line 1287 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_113_113, (MR_Integer) 0)));
#line 1304 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__FileName_15;
#line 1304 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__LineNo_16;
#line 1304 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__MaybeReturnContext_17;
#line 1289 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_137_137;
#line 1289 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__V_40_40;
#line 1289 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_41_41;

#line 1287 "declarative_analyser.m"
        mdb__declarative_analyser__LastId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_39_39, (MR_Integer) 0)));
#line 1287 "declarative_analyser.m"
        mdb__declarative_analyser__Reason_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_39_39, (MR_Integer) 1)));
#line 11426 "mdb.declarative_analyser.c"
        {
#line 11428 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_137_137);
        }
#line 1289 "declarative_analyser.m"
        {
#line 1289 "declarative_analyser.m"
          mdb__declarative_analyser__V_40_40 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_137_137, mdb__declarative_analyser__SearchSpace_10, mdb__declarative_analyser__LastId_13);
        }
#line 1289 "declarative_analyser.m"
        {
#line 1289 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__edt_context_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__V_40_40, &mdb__declarative_analyser__V_41_41, &mdb__declarative_analyser__MaybeReturnContext_17);
        }
#line 1289 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1289 "declarative_analyser.m"
          {
#line 1290 "declarative_analyser.m"
            mdb__declarative_analyser__FileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_41_41, (MR_Integer) 0)));
#line 1290 "declarative_analyser.m"
            mdb__declarative_analyser__LineNo_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_41_41, (MR_Integer) 1)));
#line 1290 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = MR_TRUE;
#line 1289 "declarative_analyser.m"
          }
#line 1304 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1300 "declarative_analyser.m"
          {
#line 1300 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeCtorInfo_138_138;
#line 1300 "declarative_analyser.m"
            MR_String mdb__declarative_analyser__ContextStr_20;
#line 1300 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_62_62;

#line 1297 "declarative_analyser.m"
            if ((mdb__declarative_analyser__MaybeReturnContext_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1298 "declarative_analyser.m"
              {
#line 1298 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_42_42;
#line 1298 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_44_44;

#line 1299 "declarative_analyser.m"
                {
#line 1299 "declarative_analyser.m"
                  mdb__declarative_analyser__V_44_44 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__LineNo_16);
                }
#line 1299 "declarative_analyser.m"
                {
#line 1299 "declarative_analyser.m"
                  mdb__declarative_analyser__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__V_44_44);
                }
#line 1299 "declarative_analyser.m"
                {
#line 1299 "declarative_analyser.m"
                  mdb__declarative_analyser__ContextStr_20 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__FileName_15, mdb__declarative_analyser__V_42_42);
                }
#line 1298 "declarative_analyser.m"
              }
#line 1297 "declarative_analyser.m"
            else
#line 1293 "declarative_analyser.m"
              {
#line 1293 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__ReturnFileName_18;
#line 1293 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__ReturnLineNo_19;
#line 1293 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeReturnContext_17, (MR_Integer) 0)));
#line 1293 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_46_46;
#line 1293 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_48_48;
#line 1293 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_49_49;
#line 1293 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_50_50;
#line 1293 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_52_52;
#line 1293 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_53_53;
#line 1293 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_55_55;
#line 1293 "declarative_analyser.m"
                MR_String mdb__declarative_analyser__V_56_56;

#line 1293 "declarative_analyser.m"
                mdb__declarative_analyser__ReturnFileName_18 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_45_45, (MR_Integer) 0)));
#line 1293 "declarative_analyser.m"
                mdb__declarative_analyser__ReturnLineNo_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_45_45, (MR_Integer) 1)));
#line 1294 "declarative_analyser.m"
                {
#line 1294 "declarative_analyser.m"
                  mdb__declarative_analyser__V_49_49 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__LineNo_16);
                }
#line 1296 "declarative_analyser.m"
                {
#line 1296 "declarative_analyser.m"
                  mdb__declarative_analyser__V_56_56 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__ReturnLineNo_19);
                }
#line 1296 "declarative_analyser.m"
                {
#line 1296 "declarative_analyser.m"
                  mdb__declarative_analyser__V_55_55 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__V_56_56, (MR_String) ")");
                }
#line 1296 "declarative_analyser.m"
                {
#line 1296 "declarative_analyser.m"
                  mdb__declarative_analyser__V_53_53 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__V_55_55);
                }
#line 1295 "declarative_analyser.m"
                {
#line 1295 "declarative_analyser.m"
                  mdb__declarative_analyser__V_52_52 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__ReturnFileName_18, mdb__declarative_analyser__V_53_53);
                }
#line 1295 "declarative_analyser.m"
                {
#line 1295 "declarative_analyser.m"
                  mdb__declarative_analyser__V_50_50 = mercury__string__f_43_43_2_f_0((MR_String) " (", mdb__declarative_analyser__V_52_52);
                }
#line 1295 "declarative_analyser.m"
                {
#line 1295 "declarative_analyser.m"
                  mdb__declarative_analyser__V_48_48 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__V_49_49, mdb__declarative_analyser__V_50_50);
                }
#line 1294 "declarative_analyser.m"
                {
#line 1294 "declarative_analyser.m"
                  mdb__declarative_analyser__V_46_46 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__V_48_48);
                }
#line 1294 "declarative_analyser.m"
                {
#line 1294 "declarative_analyser.m"
                  mdb__declarative_analyser__ContextStr_20 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__FileName_15, mdb__declarative_analyser__V_46_46);
                }
#line 1293 "declarative_analyser.m"
              }
#line 11568 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__TypeCtorInfo_138_138 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1301 "declarative_analyser.m"
            {
#line 1301 "declarative_analyser.m"
              mercury__list__append_3_p_0(mdb__declarative_analyser__TypeCtorInfo_138_138, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_32_32, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[11]), &mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59);
            }
#line 1303 "declarative_analyser.m"
            {
#line 1303 "declarative_analyser.m"
              mdb__declarative_analyser__V_62_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1303 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_62_62, 0) = ((MR_Box) (mdb__declarative_analyser__ContextStr_20));
#line 1303 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_62_62, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1303 "declarative_analyser.m"
            }
#line 1303 "declarative_analyser.m"
            {
#line 1303 "declarative_analyser.m"
              mercury__list__append_3_p_0(mdb__declarative_analyser__TypeCtorInfo_138_138, mdb__declarative_analyser__STATE_VARIABLE_Data_33_33, mdb__declarative_analyser__V_62_62, &mdb__declarative_analyser__STATE_VARIABLE_Data_63_63);
            }
#line 1300 "declarative_analyser.m"
          }
#line 1304 "declarative_analyser.m"
        else
#line 1305 "declarative_analyser.m"
          {
#line 1305 "declarative_analyser.m"
            mdb__declarative_analyser__STATE_VARIABLE_Data_63_63 = mdb__declarative_analyser__STATE_VARIABLE_Data_33_33;
#line 1305 "declarative_analyser.m"
            mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59 = mdb__declarative_analyser__STATE_VARIABLE_FieldNames_32_32;
#line 1305 "declarative_analyser.m"
          }
#line 1287 "declarative_analyser.m"
      }
#line 11604 "mdb.declarative_analyser.c"
    mdb__declarative_analyser__TypeCtorInfo_140_140 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1312 "declarative_analyser.m"
    {
#line 1312 "declarative_analyser.m"
      mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[12]));
    }
#line 1313 "declarative_analyser.m"
    mdb__declarative_analyser__V_125_125 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 0)));
#line 1313 "declarative_analyser.m"
    mdb__declarative_analyser__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 1)));
#line 1313 "declarative_analyser.m"
    mdb__declarative_analyser__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 2)));
#line 1313 "declarative_analyser.m"
    mdb__declarative_analyser__V_127_127 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 3)));
#line 1313 "declarative_analyser.m"
    mdb__declarative_analyser__V_128_128 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 4)));
#line 1313 "declarative_analyser.m"
    mdb__declarative_analyser__V_129_129 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 5)));
#line 1313 "declarative_analyser.m"
    {
#line 1313 "declarative_analyser.m"
      mdb__declarative_analyser__V_71_71 = mdb__declarative_analyser__search_mode_to_string_1_f_0(mdb__declarative_analyser__V_72_72);
    }
#line 1313 "declarative_analyser.m"
    {
#line 1313 "declarative_analyser.m"
      mdb__declarative_analyser__V_70_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1313 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_70_70, 0) = ((MR_Box) (mdb__declarative_analyser__V_71_71));
#line 1313 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_70_70, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1313 "declarative_analyser.m"
    }
#line 1313 "declarative_analyser.m"
    {
#line 1313 "declarative_analyser.m"
      mdb__declarative_analyser__STATE_VARIABLE_Data_69_69 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_Data_63_63, mdb__declarative_analyser__V_70_70);
    }
#line 11643 "mdb.declarative_analyser.c"
    {
#line 11645 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_142_142);
    }
#line 1315 "declarative_analyser.m"
    {
#line 1315 "declarative_analyser.m"
      mdb__declarative_analyser__MaybeWeighting_21 = mdb__declarative_edt__get_current_maybe_weighting_1_f_0(mdb__declarative_analyser__TypeInfo_142_142, mdb__declarative_analyser__SearchSpace_10);
    }
#line 1316 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeWeighting_21)) == (MR_mktag((MR_Integer) 1)));
#line 1316 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 1316 "declarative_analyser.m"
      {
#line 1316 "declarative_analyser.m"
        mdb__declarative_analyser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeWeighting_21, (MR_Integer) 0)));
#line 1316 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_74_74 == (MR_Integer) 0);
#line 1316 "declarative_analyser.m"
      }
#line 1337 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 1321 "declarative_analyser.m"
      {
#line 1321 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_145_145;
#line 1321 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__StartId_23;
#line 1321 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Weight_24;
#line 1321 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77;
#line 1321 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_Data_83_83;
#line 1321 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_92_92;
#line 1321 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__V_93_93;
#line 1319 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__RootId_22;
#line 1317 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_143_143;
#line 1324 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_75_75;
#line 1324 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_76_76;
#line 1324 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_130_130;
#line 1324 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_131_131;
#line 1324 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_132_132;
#line 1324 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_133_133;
#line 1324 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_134_134;

#line 11702 "mdb.declarative_analyser.c"
        {
#line 11704 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_143_143);
        }
#line 1317 "declarative_analyser.m"
        {
#line 1317 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_143_143, mdb__declarative_analyser__SearchSpace_10, &mdb__declarative_analyser__RootId_22);
        }
#line 1319 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1318 "declarative_analyser.m"
          mdb__declarative_analyser__StartId_23 = mdb__declarative_analyser__RootId_22;
#line 1319 "declarative_analyser.m"
        else
#line 1320 "declarative_analyser.m"
          {
#line 1320 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_144_144;

#line 11723 "mdb.declarative_analyser.c"
            {
#line 11725 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_144_144);
            }
#line 1320 "declarative_analyser.m"
            {
#line 1320 "declarative_analyser.m"
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_144_144, mdb__declarative_analyser__SearchSpace_10, &mdb__declarative_analyser__StartId_23);
            }
#line 1320 "declarative_analyser.m"
          }
#line 11735 "mdb.declarative_analyser.c"
        {
#line 11737 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_145_145);
        }
#line 1322 "declarative_analyser.m"
        {
#line 1322 "declarative_analyser.m"
          mdb__declarative_analyser__Weight_24 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_145_145, mdb__declarative_analyser__SearchSpace_10, mdb__declarative_analyser__StartId_23);
        }
#line 1324 "declarative_analyser.m"
        mdb__declarative_analyser__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 0)));
#line 1324 "declarative_analyser.m"
        mdb__declarative_analyser__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 1)));
#line 1324 "declarative_analyser.m"
        mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 2)));
#line 1324 "declarative_analyser.m"
        mdb__declarative_analyser__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 3)));
#line 1324 "declarative_analyser.m"
        mdb__declarative_analyser__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 4)));
#line 1324 "declarative_analyser.m"
        mdb__declarative_analyser__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_8, (MR_Integer) 5)));
#line 1325 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__V_75_75)) == (MR_mktag((MR_Integer) 3)));
#line 1325 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1325 "declarative_analyser.m"
          {
#line 1325 "declarative_analyser.m"
            mdb__declarative_analyser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_75_75, (MR_Integer) 0)));
#line 1325 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_76_76 == (MR_Integer) 0);
#line 1325 "declarative_analyser.m"
          }
#line 1332 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1328 "declarative_analyser.m"
          {
#line 1328 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__EstimatedQuestions_25;
#line 1328 "declarative_analyser.m"
            MR_Float mdb__declarative_analyser__V_81_81;
#line 1328 "declarative_analyser.m"
            MR_Float mdb__declarative_analyser__V_82_82;
#line 1328 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_84_84;
#line 1328 "declarative_analyser.m"
            MR_String mdb__declarative_analyser__V_85_85;

#line 1327 "declarative_analyser.m"
            {
#line 1327 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[13]));
            }
#line 1330 "declarative_analyser.m"
            {
#line 1330 "declarative_analyser.m"
              mdb__declarative_analyser__V_82_82 = mercury__float__float_1_f_0(mdb__declarative_analyser__Weight_24);
            }
#line 1330 "declarative_analyser.m"
            {
#line 1330 "declarative_analyser.m"
              mdb__declarative_analyser__V_81_81 = mercury__math__log2_1_f_0(mdb__declarative_analyser__V_82_82);
            }
#line 1329 "declarative_analyser.m"
            {
#line 1329 "declarative_analyser.m"
              mdb__declarative_analyser__EstimatedQuestions_25 = mercury__float__ceiling_to_int_1_f_0(mdb__declarative_analyser__V_81_81);
            }
#line 1331 "declarative_analyser.m"
            {
#line 1331 "declarative_analyser.m"
              mdb__declarative_analyser__V_85_85 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__EstimatedQuestions_25);
            }
#line 1331 "declarative_analyser.m"
            {
#line 1331 "declarative_analyser.m"
              mdb__declarative_analyser__V_84_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_84_84, 0) = ((MR_Box) (mdb__declarative_analyser__V_85_85));
#line 1331 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_84_84, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1331 "declarative_analyser.m"
            }
#line 1331 "declarative_analyser.m"
            {
#line 1331 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Data_83_83 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_Data_69_69, mdb__declarative_analyser__V_84_84);
            }
#line 1328 "declarative_analyser.m"
          }
#line 1332 "declarative_analyser.m"
        else
#line 1333 "declarative_analyser.m"
          {
#line 1333 "declarative_analyser.m"
            mdb__declarative_analyser__STATE_VARIABLE_Data_83_83 = mdb__declarative_analyser__STATE_VARIABLE_Data_69_69;
#line 1333 "declarative_analyser.m"
            mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77 = mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65;
#line 1333 "declarative_analyser.m"
          }
#line 1335 "declarative_analyser.m"
        {
#line 1335 "declarative_analyser.m"
          mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[14]));
        }
#line 1336 "declarative_analyser.m"
        {
#line 1336 "declarative_analyser.m"
          mdb__declarative_analyser__V_93_93 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__Weight_24);
        }
#line 1336 "declarative_analyser.m"
        {
#line 1336 "declarative_analyser.m"
          mdb__declarative_analyser__V_92_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1336 "declarative_analyser.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_92_92, 0) = ((MR_Box) (mdb__declarative_analyser__V_93_93));
#line 1336 "declarative_analyser.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_92_92, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1336 "declarative_analyser.m"
        }
#line 1336 "declarative_analyser.m"
        {
#line 1336 "declarative_analyser.m"
          mdb__declarative_analyser__STATE_VARIABLE_Data_91_91 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_Data_83_83, mdb__declarative_analyser__V_92_92);
        }
#line 1321 "declarative_analyser.m"
      }
#line 1337 "declarative_analyser.m"
    else
#line 1338 "declarative_analyser.m"
      {
#line 1338 "declarative_analyser.m"
        mdb__declarative_analyser__STATE_VARIABLE_Data_91_91 = mdb__declarative_analyser__STATE_VARIABLE_Data_69_69;
#line 1338 "declarative_analyser.m"
        mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87 = mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65;
#line 1338 "declarative_analyser.m"
      }
#line 1341 "declarative_analyser.m"
    {
#line 1341 "declarative_analyser.m"
      mdb__declarative_analyser__V_96_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_96_96, 0) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87));
#line 1341 "declarative_analyser.m"
    }
#line 1341 "declarative_analyser.m"
    {
#line 1341 "declarative_analyser.m"
      mdb__declarative_analyser__V_98_98 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 1341 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_98_98, 0) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_Data_91_91));
#line 1341 "declarative_analyser.m"
    }
#line 1341 "declarative_analyser.m"
    {
#line 1341 "declarative_analyser.m"
      mdb__declarative_analyser__V_97_97 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_97_97, 0) = ((MR_Box) (mdb__declarative_analyser__V_98_98));
#line 1341 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_97_97, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1341 "declarative_analyser.m"
    }
#line 1341 "declarative_analyser.m"
    {
#line 1341 "declarative_analyser.m"
      mdb__declarative_analyser__V_95_95 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_95_95, 0) = ((MR_Box) (mdb__declarative_analyser__V_96_96));
#line 1341 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_95_95, 1) = ((MR_Box) (mdb__declarative_analyser__V_97_97));
#line 1341 "declarative_analyser.m"
    }
#line 1341 "declarative_analyser.m"
    {
#line 1341 "declarative_analyser.m"
      mdb__declarative_analyser__InfoMessage_26 = mercury__string__format_table_2_f_0(mdb__declarative_analyser__V_95_95, (MR_String) " : ");
    }
#line 1344 "declarative_analyser.m"
    {
#line 1344 "declarative_analyser.m"
      mdb__declarative_analyser__ReasonStr_27 = mdb__declarative_analyser__reason_to_string_1_f_0(mdb__declarative_analyser__Reason_14);
    }
#line 1345 "declarative_analyser.m"
    {
#line 1345 "declarative_analyser.m"
      mdb__declarative_analyser__ReasonSent_28 = mercury__string__f_43_43_2_f_0((MR_String) "The current question was chosen because ", mdb__declarative_analyser__ReasonStr_27);
    }
#line 1346 "declarative_analyser.m"
    {
#line 1346 "declarative_analyser.m"
      mdb__declarative_analyser__WrappedReason_29 = mercury__string__word_wrap_2_f_0(mdb__declarative_analyser__ReasonSent_28, (MR_Integer) 72);
    }
#line 11929 "mdb.declarative_analyser.c"
    {
#line 11931 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__V_153_153 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__WrappedReason_29, (MR_String) "\n");
    }
#line 11934 "mdb.declarative_analyser.c"
    {
#line 11936 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__V_155_155 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mdb__declarative_analyser__V_153_153);
    }
#line 11939 "mdb.declarative_analyser.c"
    {
#line 11941 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__V_156_156 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__InfoMessage_26, mdb__declarative_analyser__V_155_155);
    }
#line 11944 "mdb.declarative_analyser.c"
    {
#line 11946 "mdb.declarative_analyser.c"
      mercury__io__write_string_4_p_0(mdb__declarative_analyser__OutStream_7, mdb__declarative_analyser__V_156_156);
#line 11948 "mdb.declarative_analyser.c"
      return;
    }
#line 1278 "declarative_analyser.m"
  }
#line 125 "declarative_analyser.m"
}

#line 118 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__change_search_mode_6_p_0(
#line 118 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55,
#line 118 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 118 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_8,
#line 118 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__UserMode_9,
#line 118 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15,
#line 118 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_16,
#line 118 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_11)
#line 118 "declarative_analyser.m"
{
#line 447 "declarative_analyser.m"
  {
#line 447 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 447 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32;

#line 451 "declarative_analyser.m"
    if ((mdb__declarative_analyser__UserMode_9 == (MR_Integer) 3))
#line 460 "declarative_analyser.m"
      {
#line 460 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 4)));
#line 460 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 0)));
#line 462 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 5)));
#line 462 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 3)));
#line 462 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 2)));
#line 462 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 1)));

#line 467 "declarative_analyser.m"
        if ((mdb__declarative_analyser__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 468 "declarative_analyser.m"
          {
#line 469 "declarative_analyser.m"
            {
#line 469 "declarative_analyser.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[8])));
#line 469 "declarative_analyser.m"
              return;
            }
#line 468 "declarative_analyser.m"
          }
#line 467 "declarative_analyser.m"
        else
#line 463 "declarative_analyser.m"
          {
#line 463 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_57_57;
#line 463 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__SuspectId_12;
#line 463 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__SearchMode_14;
#line 463 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_60_60, (MR_Integer) 0)));
#line 463 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__TopId_69;
#line 463 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__BottomId_70;
#line 463 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_13_13;
#line 934 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__RootId_68;
#line 942 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__Path_71;
#line 466 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_44_44;
#line 466 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_45_45;
#line 466 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_47_47;
#line 466 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_48_48;
#line 466 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_49_49;
#line 466 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_46_46;

#line 463 "declarative_analyser.m"
            mdb__declarative_analyser__SuspectId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, (MR_Integer) 0)));
#line 463 "declarative_analyser.m"
            mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, (MR_Integer) 1)));
#line 12051 "mdb.declarative_analyser.c"
            {
#line 12053 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_57_57);
            }
#line 931 "declarative_analyser.m"
            {
#line 931 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__V_64_64, &mdb__declarative_analyser__RootId_68);
            }
#line 934 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 932 "declarative_analyser.m"
              {
#line 932 "declarative_analyser.m"
                mdb__declarative_analyser__TopId_69 = mdb__declarative_analyser__RootId_68;
#line 933 "declarative_analyser.m"
                mdb__declarative_analyser__BottomId_70 = mdb__declarative_analyser__SuspectId_12;
#line 932 "declarative_analyser.m"
              }
#line 934 "declarative_analyser.m"
            else
#line 935 "declarative_analyser.m"
              {
#line 935 "declarative_analyser.m"
                {
#line 935 "declarative_analyser.m"
                  mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__V_64_64, &mdb__declarative_analyser__TopId_69);
                }
#line 936 "declarative_analyser.m"
                mdb__declarative_analyser__BottomId_70 = mdb__declarative_analyser__SuspectId_12;
#line 935 "declarative_analyser.m"
              }
#line 938 "declarative_analyser.m"
            {
#line 938 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__get_path_4_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__V_64_64, mdb__declarative_analyser__BottomId_70, mdb__declarative_analyser__TopId_69, &mdb__declarative_analyser__Path_71);
            }
#line 942 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 939 "declarative_analyser.m"
              {
#line 939 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeCtorInfo_19_79 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 939 "declarative_analyser.m"
                MR_ArrayPtr mdb__declarative_analyser__PathArray_72;
#line 939 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__Top_73;
#line 939 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__Bottom_74;
#line 939 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_75_75;
#line 939 "declarative_analyser.m"
                MR_ArrayPtr mdb__declarative_analyser__conv0_PathArray_72;

#line 939 "declarative_analyser.m"
                {
#line 939 "declarative_analyser.m"
                  mdb__declarative_analyser__conv0_PathArray_72 = mercury__array__from_list_1_f_0(mdb__declarative_analyser__TypeCtorInfo_19_79, mdb__declarative_analyser__Path_71);
                }
#line 939 "declarative_analyser.m"
                mdb__declarative_analyser__PathArray_72 = (MR_ArrayPtr) mdb__declarative_analyser__conv0_PathArray_72;
#line 940 "declarative_analyser.m"
                {
#line 940 "declarative_analyser.m"
                  mercury__array__bounds_3_p_0(mdb__declarative_analyser__TypeCtorInfo_19_79, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_72, &mdb__declarative_analyser__Top_73, &mdb__declarative_analyser__Bottom_74);
                }
#line 941 "declarative_analyser.m"
                {
#line 941 "declarative_analyser.m"
                  mdb__declarative_analyser__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 941 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_75_75, 0) = ((MR_Box) (mdb__declarative_analyser__Top_73));
#line 941 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_75_75, 1) = ((MR_Box) (mdb__declarative_analyser__Bottom_74));
#line 941 "declarative_analyser.m"
                }
#line 941 "declarative_analyser.m"
                {
#line 941 "declarative_analyser.m"
                  mdb__declarative_analyser__SearchMode_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 941 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 0) = ((MR_Box) (mdb__declarative_analyser__PathArray_72));
#line 941 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 1) = ((MR_Box) (mdb__declarative_analyser__V_75_75));
#line 941 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 2) = ((MR_Box) (mdb__declarative_analyser__Bottom_74));
#line 941 "declarative_analyser.m"
                }
#line 939 "declarative_analyser.m"
              }
#line 942 "declarative_analyser.m"
            else
#line 943 "declarative_analyser.m"
              {
#line 943 "declarative_analyser.m"
                {
#line 943 "declarative_analyser.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[9])));
#line 943 "declarative_analyser.m"
                  return;
                }
#line 943 "declarative_analyser.m"
              }
#line 466 "declarative_analyser.m"
            mdb__declarative_analyser__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 0)));
#line 466 "declarative_analyser.m"
            mdb__declarative_analyser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 1)));
#line 466 "declarative_analyser.m"
            mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 2)));
#line 466 "declarative_analyser.m"
            mdb__declarative_analyser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 3)));
#line 466 "declarative_analyser.m"
            mdb__declarative_analyser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 4)));
#line 466 "declarative_analyser.m"
            mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 5)));
#line 466 "declarative_analyser.m"
            {
#line 466 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 466 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 0) = ((MR_Box) (mdb__declarative_analyser__V_44_44));
#line 466 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 466 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 2) = ((MR_Box) (mdb__declarative_analyser__SearchMode_14));
#line 466 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 3) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 466 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 4) = ((MR_Box) (mdb__declarative_analyser__V_48_48));
#line 466 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 5) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 466 "declarative_analyser.m"
            }
#line 463 "declarative_analyser.m"
          }
#line 460 "declarative_analyser.m"
      }
#line 451 "declarative_analyser.m"
    else
#line 451 "declarative_analyser.m"
      if ((mdb__declarative_analyser__UserMode_9 == (MR_Integer) 1))
#line 452 "declarative_analyser.m"
        {
#line 453 "declarative_analyser.m"
          {
#line 453 "declarative_analyser.m"
            mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_4[0]), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
          }
#line 452 "declarative_analyser.m"
        }
#line 451 "declarative_analyser.m"
      else
#line 451 "declarative_analyser.m"
        if ((mdb__declarative_analyser__UserMode_9 == (MR_Integer) 2))
#line 456 "declarative_analyser.m"
          {
#line 457 "declarative_analyser.m"
            {
#line 457 "declarative_analyser.m"
              mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_4[1]), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
            }
#line 456 "declarative_analyser.m"
          }
#line 451 "declarative_analyser.m"
        else
#line 449 "declarative_analyser.m"
          {
#line 450 "declarative_analyser.m"
            {
#line 450 "declarative_analyser.m"
              mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
            }
#line 449 "declarative_analyser.m"
          }
#line 473 "declarative_analyser.m"
    {
#line 473 "declarative_analyser.m"
      mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_11, mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, mdb__declarative_analyser__STATE_VARIABLE_Analyser_16);
#line 473 "declarative_analyser.m"
      return;
    }
#line 447 "declarative_analyser.m"
  }
#line 118 "declarative_analyser.m"
}

#line 111 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__continue_analysis_6_p_0(
#line 111 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_34,
#line 111 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 111 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_8,
#line 111 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Answer_9,
#line 111 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_10,
#line 111 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14,
#line 111 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_15)
#line 111 "declarative_analyser.m"
{
#line 435 "declarative_analyser.m"
  {
#line 435 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 435 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22;
#line 435 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 4)));
#line 437 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 5)));
#line 437 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 3)));
#line 437 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 2)));
#line 437 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 1)));
#line 437 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 0)));

#line 440 "declarative_analyser.m"
    if ((mdb__declarative_analyser__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "declarative_analyser.m"
      {
#line 442 "declarative_analyser.m"
        {
#line 442 "declarative_analyser.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[7])));
#line 442 "declarative_analyser.m"
          return;
        }
#line 441 "declarative_analyser.m"
      }
#line 440 "declarative_analyser.m"
    else
#line 438 "declarative_analyser.m"
      {
#line 438 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__SuspectId_12;
#line 438 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_37_37, (MR_Integer) 0)));
#line 438 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_13_13;

#line 438 "declarative_analyser.m"
        mdb__declarative_analyser__SuspectId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_21_21, (MR_Integer) 0)));
#line 438 "declarative_analyser.m"
        mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_21_21, (MR_Integer) 1)));
#line 439 "declarative_analyser.m"
        {
#line 439 "declarative_analyser.m"
          mdb__declarative_analyser__process_answer_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_34, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Answer_9, mdb__declarative_analyser__SuspectId_12, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22);
        }
#line 438 "declarative_analyser.m"
      }
#line 445 "declarative_analyser.m"
    {
#line 445 "declarative_analyser.m"
      mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_34, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_15);
#line 445 "declarative_analyser.m"
      return;
    }
#line 435 "declarative_analyser.m"
  }
#line 111 "declarative_analyser.m"
}

#line 106 "declarative_analyser.m"
MR_bool MR_CALL 
mdb__declarative_analyser__reask_last_question_3_p_0(
#line 106 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 106 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_4,
#line 106 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Analyser_5,
#line 106 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_6)
#line 106 "declarative_analyser.m"
{
#line 427 "declarative_analyser.m"
  {
#line 427 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 427 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_26_26;
#line 427 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__MaybeLastQuestion_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 4)));
#line 427 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__SuspectId_8;
#line 427 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__SearchSpace_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 0)));
#line 427 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__Node_11;
#line 427 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__OracleQuestion_12;
#line 427 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_13_13;
#line 427 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__PolyConst2_25;
#line 428 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 1)));
#line 428 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 2)));
#line 428 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 3)));
#line 428 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 5)));
#line 429 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_9_9;
#line 12366 "mdb.declarative_analyser.c"
    void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12368 "mdb.declarative_analyser.c"
    MR_Box mdb__declarative_analyser__conv1_OracleQuestion_12;

#line 429 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastQuestion_7)) == (MR_mktag((MR_Integer) 1)));
#line 429 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 429 "declarative_analyser.m"
      {
#line 429 "declarative_analyser.m"
        mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastQuestion_7, (MR_Integer) 0)));
#line 429 "declarative_analyser.m"
        mdb__declarative_analyser__SuspectId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_13_13, (MR_Integer) 0)));
#line 429 "declarative_analyser.m"
        mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_13_13, (MR_Integer) 1)));
#line 12383 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__PolyConst2_25 = (MR_Integer) 2;
#line 12385 "mdb.declarative_analyser.c"
        {
#line 12387 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, mdb__declarative_analyser__PolyConst2_25, &mdb__declarative_analyser__TypeInfo_26_26);
        }
#line 431 "declarative_analyser.m"
        {
#line 431 "declarative_analyser.m"
          mdb__declarative_analyser__Node_11 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_26_26, mdb__declarative_analyser__SearchSpace_10, mdb__declarative_analyser__SuspectId_8);
        }
#line 12395 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12397 "mdb.declarative_analyser.c"
        {
#line 12399 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_4, mdb__declarative_analyser__Node_11, &mdb__declarative_analyser__conv1_OracleQuestion_12);
        }
#line 12402 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__OracleQuestion_12 = ((MR_Word) mdb__declarative_analyser__conv1_OracleQuestion_12);
#line 433 "declarative_analyser.m"
        {
#line 433 "declarative_analyser.m"
          MR_Word base;
#line 433 "declarative_analyser.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 433 "declarative_analyser.m"
          *mdb__declarative_analyser__Response_6 = base;
#line 433 "declarative_analyser.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_12));
#line 433 "declarative_analyser.m"
        }
#line 433 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = MR_TRUE;
#line 429 "declarative_analyser.m"
      }
#line 427 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 427 "declarative_analyser.m"
  }
#line 106 "declarative_analyser.m"
}

#line 100 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__start_or_resume_analysis_6_p_0(
#line 100 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76,
#line 100 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 100 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_8,
#line 100 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__AnalysisType_9,
#line 100 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_10,
#line 100 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22,
#line 100 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_23)
#line 100 "declarative_analyser.m"
{
#line 374 "declarative_analyser.m"
  {
#line 374 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 374 "declarative_analyser.m"
    if ((mdb__declarative_analyser__AnalysisType_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 412 "declarative_analyser.m"
      {
#line 412 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__Response0_21;

#line 410 "declarative_analyser.m"
        {
#line 410 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, &mdb__declarative_analyser__Response0_21);
        }
#line 412 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 411 "declarative_analyser.m"
          {
#line 411 "declarative_analyser.m"
            *mdb__declarative_analyser__Response_10 = mdb__declarative_analyser__Response0_21;
#line 411 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_23 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22;
#line 411 "declarative_analyser.m"
          }
#line 412 "declarative_analyser.m"
        else
#line 413 "declarative_analyser.m"
          {
#line 413 "declarative_analyser.m"
            mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_23);
#line 413 "declarative_analyser.m"
            return;
          }
#line 412 "declarative_analyser.m"
      }
#line 374 "declarative_analyser.m"
    else
#line 374 "declarative_analyser.m"
      {
#line 374 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__Node_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__AnalysisType_9, (MR_Integer) 0));
#line 374 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__MaybeRequireExplicit_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 1)));
#line 374 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 0)));
#line 374 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 2)));
#line 374 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 3)));
#line 374 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 4)));
#line 374 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 5)));

#line 391 "declarative_analyser.m"
        if ((mdb__declarative_analyser__MaybeRequireExplicit_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 392 "declarative_analyser.m"
          {
#line 392 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_80_80;
#line 392 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_81_81;
#line 392 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__MaybeWeighting_18;
#line 392 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__TopMostId_19;
#line 392 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__Question_20;
#line 392 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25;
#line 392 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27;
#line 392 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_29_29;
#line 392 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_30_30;
#line 392 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__SearchSpace_36;
#line 392 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__FallBack_85;
#line 392 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_87_87;
#line 349 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_92_92;
#line 349 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_93_93;
#line 349 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_94_94;
#line 349 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_95_95;
#line 349 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_96_96;
#line 401 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_65_65;
#line 401 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_66_66;
#line 401 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_67_67;
#line 401 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_68_68;
#line 401 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_69_69;
#line 401 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_64_64;
#line 403 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_70_70;
#line 403 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_71_71;
#line 403 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_72_72;
#line 403 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_73_73;
#line 403 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_75_75;
#line 403 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_74_74;
#line 12565 "mdb.declarative_analyser.c"
            void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12567 "mdb.declarative_analyser.c"
            MR_Box mdb__declarative_analyser__conv1_Question_20;

#line 12570 "mdb.declarative_analyser.c"
            {
#line 12572 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
            }
#line 349 "declarative_analyser.m"
            mdb__declarative_analyser__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 0)));
#line 349 "declarative_analyser.m"
            mdb__declarative_analyser__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 1)));
#line 349 "declarative_analyser.m"
            mdb__declarative_analyser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 2)));
#line 349 "declarative_analyser.m"
            mdb__declarative_analyser__FallBack_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 3)));
#line 349 "declarative_analyser.m"
            mdb__declarative_analyser__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 4)));
#line 349 "declarative_analyser.m"
            mdb__declarative_analyser__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 5)));
#line 350 "declarative_analyser.m"
            {
#line 350 "declarative_analyser.m"
              mdb__declarative_analyser__V_87_87 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_80_80);
            }
#line 350 "declarative_analyser.m"
            {
#line 350 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 350 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 0) = ((MR_Box) (mdb__declarative_analyser__V_87_87));
#line 350 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 2) = ((MR_Box) (mdb__declarative_analyser__FallBack_85));
#line 350 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 3) = ((MR_Box) (mdb__declarative_analyser__FallBack_85));
#line 350 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "declarative_analyser.m"
            }
#line 398 "declarative_analyser.m"
            {
#line 398 "declarative_analyser.m"
              mdb__declarative_analyser__MaybeWeighting_18 = mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(mdb__declarative_analyser__FallBack_85);
            }
#line 400 "declarative_analyser.m"
            {
#line 400 "declarative_analyser.m"
              mdb__declarative_edt__initialise_search_space_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__MaybeWeighting_18, mdb__declarative_analyser__Node_12, &mdb__declarative_analyser__SearchSpace_36);
            }
#line 401 "declarative_analyser.m"
            mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 0)));
#line 401 "declarative_analyser.m"
            mdb__declarative_analyser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 1)));
#line 401 "declarative_analyser.m"
            mdb__declarative_analyser__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 2)));
#line 401 "declarative_analyser.m"
            mdb__declarative_analyser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 3)));
#line 401 "declarative_analyser.m"
            mdb__declarative_analyser__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 4)));
#line 401 "declarative_analyser.m"
            mdb__declarative_analyser__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 5)));
#line 401 "declarative_analyser.m"
            {
#line 401 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 401 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_36));
#line 401 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 1) = ((MR_Box) (mdb__declarative_analyser__V_65_65));
#line 401 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 2) = ((MR_Box) (mdb__declarative_analyser__V_66_66));
#line 401 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 3) = ((MR_Box) (mdb__declarative_analyser__V_67_67));
#line 401 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 4) = ((MR_Box) (mdb__declarative_analyser__V_68_68));
#line 401 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 5) = ((MR_Box) (mdb__declarative_analyser__V_69_69));
#line 401 "declarative_analyser.m"
            }
#line 12650 "mdb.declarative_analyser.c"
            {
#line 12652 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_81_81);
            }
#line 402 "declarative_analyser.m"
            {
#line 402 "declarative_analyser.m"
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_81_81, mdb__declarative_analyser__SearchSpace_36, &mdb__declarative_analyser__TopMostId_19);
            }
#line 404 "declarative_analyser.m"
            {
#line 404 "declarative_analyser.m"
              mdb__declarative_analyser__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 404 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 0) = ((MR_Box) (mdb__declarative_analyser__TopMostId_19));
#line 404 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 404 "declarative_analyser.m"
            }
#line 404 "declarative_analyser.m"
            {
#line 404 "declarative_analyser.m"
              mdb__declarative_analyser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 404 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_29_29, 0) = ((MR_Box) (mdb__declarative_analyser__V_30_30));
#line 404 "declarative_analyser.m"
            }
#line 403 "declarative_analyser.m"
            mdb__declarative_analyser__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 0)));
#line 403 "declarative_analyser.m"
            mdb__declarative_analyser__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 1)));
#line 403 "declarative_analyser.m"
            mdb__declarative_analyser__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 2)));
#line 403 "declarative_analyser.m"
            mdb__declarative_analyser__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 3)));
#line 403 "declarative_analyser.m"
            mdb__declarative_analyser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 4)));
#line 403 "declarative_analyser.m"
            mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 5)));
#line 403 "declarative_analyser.m"
            {
#line 403 "declarative_analyser.m"
              MR_Word base;
#line 403 "declarative_analyser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 403 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_Analyser_23 = base;
#line 403 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_70_70));
#line 403 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_71_71));
#line 403 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_72_72));
#line 403 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_73_73));
#line 403 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_29_29));
#line 403 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_75_75));
#line 403 "declarative_analyser.m"
            }
#line 12712 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12714 "mdb.declarative_analyser.c"
            {
#line 12716 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Node_12, &mdb__declarative_analyser__conv1_Question_20);
            }
#line 12719 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__Question_20 = ((MR_Word) mdb__declarative_analyser__conv1_Question_20);
#line 406 "declarative_analyser.m"
            {
#line 406 "declarative_analyser.m"
              MR_Word base;
#line 406 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 406 "declarative_analyser.m"
              *mdb__declarative_analyser__Response_10 = base;
#line 406 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 406 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__Question_20));
#line 406 "declarative_analyser.m"
            }
#line 392 "declarative_analyser.m"
          }
#line 391 "declarative_analyser.m"
        else
#line 377 "declarative_analyser.m"
          {
#line 377 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TreeType_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeRequireExplicit_13, (MR_Integer) 0)));
#line 377 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__SearchSpace_16;
#line 377 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33;
#line 377 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_49_49;
#line 377 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_50_50;
#line 377 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_51_51;
#line 377 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_52_52;

#line 383 "declarative_analyser.m"
            if ((mdb__declarative_analyser__TreeType_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "declarative_analyser.m"
              {
#line 381 "declarative_analyser.m"
                mdb__declarative_edt__incorporate_explicit_supertree_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Node_12, mdb__declarative_analyser__V_37_37, &mdb__declarative_analyser__SearchSpace_16);
              }
#line 383 "declarative_analyser.m"
            else
#line 384 "declarative_analyser.m"
              {
#line 384 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_78_78;
#line 384 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__SuspectId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__TreeType_14, (MR_Integer) 0)));

#line 12772 "mdb.declarative_analyser.c"
                {
#line 12774 "mdb.declarative_analyser.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_78_78);
                }
#line 385 "declarative_analyser.m"
                {
#line 385 "declarative_analyser.m"
                  mdb__declarative_edt__incorporate_explicit_subtree_4_p_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__SuspectId_17, mdb__declarative_analyser__Node_12, mdb__declarative_analyser__V_37_37, &mdb__declarative_analyser__SearchSpace_16);
                }
#line 384 "declarative_analyser.m"
              }
#line 388 "declarative_analyser.m"
            mdb__declarative_analyser__V_49_49 = mdb__declarative_analyser__V_38_38;
#line 388 "declarative_analyser.m"
            mdb__declarative_analyser__V_50_50 = mdb__declarative_analyser__V_39_39;
#line 388 "declarative_analyser.m"
            mdb__declarative_analyser__V_51_51 = mdb__declarative_analyser__V_40_40;
#line 388 "declarative_analyser.m"
            mdb__declarative_analyser__V_52_52 = mdb__declarative_analyser__V_41_41;
#line 389 "declarative_analyser.m"
            {
#line 389 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 389 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_16));
#line 389 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 389 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 2) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 389 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 3) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 389 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 4) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 389 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 5) = ((MR_Box) (mdb__declarative_analyser__V_52_52));
#line 389 "declarative_analyser.m"
            }
#line 390 "declarative_analyser.m"
            {
#line 390 "declarative_analyser.m"
              mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, mdb__declarative_analyser__STATE_VARIABLE_Analyser_23);
#line 390 "declarative_analyser.m"
              return;
            }
#line 377 "declarative_analyser.m"
          }
#line 374 "declarative_analyser.m"
      }
#line 374 "declarative_analyser.m"
  }
#line 100 "declarative_analyser.m"
}

#line 80 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__set_fallback_search_mode_4_p_0(
#line 80 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55,
#line 80 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_5,
#line 80 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_6,
#line 80 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19,
#line 80 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_20)
#line 80 "declarative_analyser.m"
{
#line 352 "declarative_analyser.m"
  {
#line 352 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 0)));
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 1)));
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 5)));
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_32_32 = mdb__declarative_analyser__V_26_26;
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_33_33 = mdb__declarative_analyser__V_27_27;
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_35_35 = mdb__declarative_analyser__FallBackSearchMode_6;
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_37_37 = mdb__declarative_analyser__V_31_31;
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_38_38 = mdb__declarative_analyser__V_32_32;
#line 353 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 2)));
#line 353 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 3)));
#line 353 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 4)));

#line 355 "declarative_analyser.m"
    {
#line 355 "declarative_analyser.m"
      mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 355 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__V_38_38));
#line 355 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__V_33_33));
#line 355 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 2) = ((MR_Box) (mdb__declarative_analyser__FallBackSearchMode_6));
#line 355 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 3) = ((MR_Box) (mdb__declarative_analyser__V_35_35));
#line 355 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 355 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 5) = ((MR_Box) (mdb__declarative_analyser__V_37_37));
#line 355 "declarative_analyser.m"
    }
#line 362 "declarative_analyser.m"
    if ((mdb__declarative_analyser__FallBackSearchMode_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "declarative_analyser.m"
      *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 362 "declarative_analyser.m"
    else
#line 362 "declarative_analyser.m"
      if (((MR_tag((MR_Word) mdb__declarative_analyser__FallBackSearchMode_6)) == (MR_mktag((MR_Integer) 2))))
#line 365 "declarative_analyser.m"
        *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 362 "declarative_analyser.m"
      else
#line 362 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__FallBackSearchMode_6)) == (MR_mktag((MR_Integer) 3))))
#line 357 "declarative_analyser.m"
          {
#line 357 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__Weighting_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__FallBackSearchMode_6, (MR_Integer) 0)));
#line 357 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__SearchSpace_10;
#line 361 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_50_50;
#line 361 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_51_51;
#line 361 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_52_52;
#line 361 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_53_53;
#line 361 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_54_54;
#line 361 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_49_49;

#line 359 "declarative_analyser.m"
            {
#line 359 "declarative_analyser.m"
              mdb__declarative_edt__update_weighting_heuristic_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_5, mdb__declarative_analyser__Weighting_8, mdb__declarative_analyser__V_38_38, &mdb__declarative_analyser__SearchSpace_10);
            }
#line 361 "declarative_analyser.m"
            mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 0)));
#line 361 "declarative_analyser.m"
            mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 1)));
#line 361 "declarative_analyser.m"
            mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 2)));
#line 361 "declarative_analyser.m"
            mdb__declarative_analyser__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 3)));
#line 361 "declarative_analyser.m"
            mdb__declarative_analyser__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 4)));
#line 361 "declarative_analyser.m"
            mdb__declarative_analyser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 5)));
#line 361 "declarative_analyser.m"
            {
#line 361 "declarative_analyser.m"
              MR_Word base;
#line 361 "declarative_analyser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 361 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = base;
#line 361 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_10));
#line 361 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 361 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 361 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_52_52));
#line 361 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_53_53));
#line 361 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_54_54));
#line 361 "declarative_analyser.m"
            }
#line 357 "declarative_analyser.m"
          }
#line 362 "declarative_analyser.m"
        else
#line 363 "declarative_analyser.m"
          *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 352 "declarative_analyser.m"
  }
#line 80 "declarative_analyser.m"
}

#line 75 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__reset_analyser_2_p_0(
#line 75 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_18,
#line 75 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5,
#line 75 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_6)
#line 75 "declarative_analyser.m"
{
#line 348 "declarative_analyser.m"
  {
#line 348 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 348 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__FallBack_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 3)));
#line 348 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_8_8;
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 0)));
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 1)));
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 2)));
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 4)));
#line 349 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 5)));

#line 350 "declarative_analyser.m"
    {
#line 350 "declarative_analyser.m"
      mdb__declarative_analyser__V_8_8 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_for_T_18);
    }
#line 350 "declarative_analyser.m"
    {
#line 350 "declarative_analyser.m"
      MR_Word base;
#line 350 "declarative_analyser.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 350 "declarative_analyser.m"
      *mdb__declarative_analyser__STATE_VARIABLE_Analyser_6 = base;
#line 350 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_8_8));
#line 350 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__FallBack_4));
#line 350 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__FallBack_4));
#line 350 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "declarative_analyser.m"
    }
#line 348 "declarative_analyser.m"
  }
#line 75 "declarative_analyser.m"
}

#line 71 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser__analyser_state_init_1_p_0(
#line 71 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_9,
#line 71 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Analyser_2)
#line 71 "declarative_analyser.m"
{
#line 345 "declarative_analyser.m"
  {
#line 345 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 345 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_3_3;

#line 345 "declarative_analyser.m"
    {
#line 345 "declarative_analyser.m"
      mdb__declarative_analyser__V_3_3 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_for_T_9);
    }
#line 345 "declarative_analyser.m"
    {
#line 345 "declarative_analyser.m"
      MR_Word base;
#line 345 "declarative_analyser.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 345 "declarative_analyser.m"
      *mdb__declarative_analyser__Analyser_2 = base;
#line 345 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_3_3));
#line 345 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 345 "declarative_analyser.m"
    }
#line 345 "declarative_analyser.m"
  }
#line 71 "declarative_analyser.m"
}

#line 69 "declarative_analyser.m"
MR_Word MR_CALL 
mdb__declarative_analyser__top_down_search_mode_0_f_0(void)
#line 69 "declarative_analyser.m"
{
#line 232 "declarative_analyser.m"
  {
#line 232 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 232 "declarative_analyser.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 232 "declarative_analyser.m"
  }
#line 69 "declarative_analyser.m"
}

#line 67 "declarative_analyser.m"
MR_Word MR_CALL 
mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_f_0(void)
#line 67 "declarative_analyser.m"
{
#line 230 "declarative_analyser.m"
  {
#line 230 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 230 "declarative_analyser.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_4[1]);
#line 230 "declarative_analyser.m"
  }
#line 67 "declarative_analyser.m"
}

#line 65 "declarative_analyser.m"
MR_Word MR_CALL 
mdb__declarative_analyser__divide_and_query_search_mode_0_f_0(void)
#line 65 "declarative_analyser.m"
{
#line 228 "declarative_analyser.m"
  {
#line 228 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 228 "declarative_analyser.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_4[0]);
#line 228 "declarative_analyser.m"
  }
#line 65 "declarative_analyser.m"
}

#line 1227 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0_1(
#line 1227 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 1227 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
#line 1227 "declarative_analyser.m"
{
#line 1227 "declarative_analyser.m"
  {
#line 1227 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__wrapper_arg_2;
#line 1227 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;
#line 1227 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__conv0_HeadVar__2_2;

#line 1227 "declarative_analyser.m"
    {
#line 1227 "declarative_analyser.m"
      mdb__declarative_analyser__conv0_HeadVar__2_2 = mercury__string__int_to_string_1_f_0(((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
#line 1227 "declarative_analyser.m"
    mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__2_2));
#line 1227 "declarative_analyser.m"
    return mdb__declarative_analyser__wrapper_arg_2;
#line 1227 "declarative_analyser.m"
  }
#line 1227 "declarative_analyser.m"
}

#line 59 "declarative_analyser.m"
MR_String MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0(
#line 59 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1)
#line 59 "declarative_analyser.m"
{
#line 1201 "declarative_analyser.m"
  {
#line 1201 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1201 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__HeadVar__2_2;

#line 1201 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1246 "declarative_analyser.m"
      mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking of the marked subterm was stopped here, because the binding node lies in a portion of the tree which has been eliminated.";
#line 1201 "declarative_analyser.m"
    else
#line 1201 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1262 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "this question is being revisited, because of an unsuccessful previous bug search.";
#line 1201 "declarative_analyser.m"
      else
#line 1201 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1259 "declarative_analyser.m"
          mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "there are no more non-skipped questions left.";
#line 1201 "declarative_analyser.m"
        else
#line 1201 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1202 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "this is the node where the \140dd\' command was issued.";
#line 1201 "declarative_analyser.m"
          else
#line 1201 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1243 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking of the marked subterm had to be aborted here, because of missing tracing information.";
#line 1201 "declarative_analyser.m"
            else
#line 1201 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1240 "declarative_analyser.m"
                mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "this is the next node in the top-down search.";
#line 1201 "declarative_analyser.m"
              else
#line 1201 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1247 "declarative_analyser.m"
                  {
#line 1247 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__Bottom_58 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 1247 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__Top_59 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 1247 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__Split_60 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 1247 "declarative_analyser.m"
                    MR_String mdb__declarative_analyser__PathLengthStr_62;
#line 1247 "declarative_analyser.m"
                    MR_String mdb__declarative_analyser__SubPath1LengthStr_63;
#line 1247 "declarative_analyser.m"
                    MR_String mdb__declarative_analyser__SubPath2LengthStr_64;
#line 1247 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_65_65;
#line 1247 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_66_66 = (mdb__declarative_analyser__Bottom_58 - mdb__declarative_analyser__Top_59);
#line 1247 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_68_68;
#line 1247 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_69_69;
#line 1247 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_70_70;
#line 1247 "declarative_analyser.m"
                    MR_String mdb__declarative_analyser__V_73_73;
#line 1247 "declarative_analyser.m"
                    MR_String mdb__declarative_analyser__V_74_74;
#line 1247 "declarative_analyser.m"
                    MR_String mdb__declarative_analyser__V_76_76;
#line 1247 "declarative_analyser.m"
                    MR_String mdb__declarative_analyser__V_77_77;
#line 1247 "declarative_analyser.m"
                    MR_String mdb__declarative_analyser__V_79_79;

#line 1248 "declarative_analyser.m"
                    mdb__declarative_analyser__V_65_65 = (mdb__declarative_analyser__V_66_66 + (MR_Integer) 1);
#line 1248 "declarative_analyser.m"
                    {
#line 1248 "declarative_analyser.m"
                      mdb__declarative_analyser__PathLengthStr_62 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__V_65_65);
                    }
#line 1249 "declarative_analyser.m"
                    mdb__declarative_analyser__V_68_68 = (mdb__declarative_analyser__Bottom_58 - mdb__declarative_analyser__Split_60);
#line 1249 "declarative_analyser.m"
                    {
#line 1249 "declarative_analyser.m"
                      mdb__declarative_analyser__SubPath1LengthStr_63 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__V_68_68);
                    }
#line 1250 "declarative_analyser.m"
                    mdb__declarative_analyser__V_70_70 = (mdb__declarative_analyser__Split_60 - mdb__declarative_analyser__Top_59);
#line 1250 "declarative_analyser.m"
                    mdb__declarative_analyser__V_69_69 = (mdb__declarative_analyser__V_70_70 + (MR_Integer) 1);
#line 1250 "declarative_analyser.m"
                    {
#line 1250 "declarative_analyser.m"
                      mdb__declarative_analyser__SubPath2LengthStr_64 = mercury__string__int_to_string_thousands_1_f_0(mdb__declarative_analyser__V_69_69);
                    }
#line 1253 "declarative_analyser.m"
                    {
#line 1253 "declarative_analyser.m"
                      mdb__declarative_analyser__V_79_79 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__SubPath2LengthStr_64, (MR_String) ".");
                    }
#line 1253 "declarative_analyser.m"
                    {
#line 1253 "declarative_analyser.m"
                      mdb__declarative_analyser__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) " and ", mdb__declarative_analyser__V_79_79);
                    }
#line 1253 "declarative_analyser.m"
                    {
#line 1253 "declarative_analyser.m"
                      mdb__declarative_analyser__V_76_76 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__SubPath1LengthStr_63, mdb__declarative_analyser__V_77_77);
                    }
#line 1252 "declarative_analyser.m"
                    {
#line 1252 "declarative_analyser.m"
                      mdb__declarative_analyser__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) " into two paths of length ", mdb__declarative_analyser__V_76_76);
                    }
#line 1252 "declarative_analyser.m"
                    {
#line 1252 "declarative_analyser.m"
                      mdb__declarative_analyser__V_73_73 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PathLengthStr_62, mdb__declarative_analyser__V_74_74);
                    }
#line 1251 "declarative_analyser.m"
                    {
#line 1251 "declarative_analyser.m"
                      return mdb__declarative_analyser__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides a path of length ", mdb__declarative_analyser__V_73_73);
                    }
#line 1247 "declarative_analyser.m"
                  }
#line 1201 "declarative_analyser.m"
                else
#line 1201 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1204 "declarative_analyser.m"
                    {
#line 1204 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__PrimOpType_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__FileName_4 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 1204 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__LineNo_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 1204 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__MaybePath_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 1204 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__ProcLabel_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 1204 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__Eliminated_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 5)));
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__PrimOpStr_10;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__LineNoStr_11;
#line 1204 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__SymModule_12;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__Name_13;
#line 1204 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__Arity_14;
#line 1204 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__PredOrFunc_15;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__PredOrFuncStr_16;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__Module_17;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__ArityStr_18;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__EliminatedSent_19;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__PathSent_23;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_32_32;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_33_33;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_35_35;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_36_36;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_38_38;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_39_39;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_41_41;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_42_42;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_44_44;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_45_45;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_47_47;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_48_48;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_50_50;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_51_51;
#line 1204 "declarative_analyser.m"
                      MR_String mdb__declarative_analyser__V_53_53;

#line 1205 "declarative_analyser.m"
                      {
#line 1205 "declarative_analyser.m"
                        mdb__declarative_analyser__PrimOpStr_10 = mdb__declarative_edt__primitive_op_type_to_string_1_f_0(mdb__declarative_analyser__PrimOpType_3);
                      }
#line 1206 "declarative_analyser.m"
                      {
#line 1206 "declarative_analyser.m"
                        mdb__declarative_analyser__LineNoStr_11 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__LineNo_5);
                      }
#line 1207 "declarative_analyser.m"
                      {
#line 1207 "declarative_analyser.m"
                        mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_analyser__ProcLabel_7, &mdb__declarative_analyser__SymModule_12, &mdb__declarative_analyser__Name_13, &mdb__declarative_analyser__Arity_14, &mdb__declarative_analyser__PredOrFunc_15);
                      }
#line 1211 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__PredOrFunc_15 == (MR_Integer) 1))
#line 1210 "declarative_analyser.m"
                        mdb__declarative_analyser__PredOrFuncStr_16 = (MR_String) "function";
#line 1211 "declarative_analyser.m"
                      else
#line 1213 "declarative_analyser.m"
                        mdb__declarative_analyser__PredOrFuncStr_16 = (MR_String) "predicate";
#line 1215 "declarative_analyser.m"
                      {
#line 1215 "declarative_analyser.m"
                        mdb__declarative_analyser__Module_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_analyser__SymModule_12);
                      }
#line 1216 "declarative_analyser.m"
                      {
#line 1216 "declarative_analyser.m"
                        mdb__declarative_analyser__ArityStr_18 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__Arity_14);
                      }
#line 1221 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__Eliminated_8 == (MR_Integer) 0))
#line 1223 "declarative_analyser.m"
                        mdb__declarative_analyser__EliminatedSent_19 = (MR_String) "";
#line 1221 "declarative_analyser.m"
                      else
#line 1220 "declarative_analyser.m"
                        mdb__declarative_analyser__EliminatedSent_19 = (MR_String) " That node was, however, previously eliminated from the bug search.";
#line 1230 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__MaybePath_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1232 "declarative_analyser.m"
                        mdb__declarative_analyser__PathSent_23 = (MR_String) "";
#line 1230 "declarative_analyser.m"
                      else
#line 1226 "declarative_analyser.m"
                        {
#line 1226 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__Path_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybePath_6, (MR_Integer) 0)));
#line 1226 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__PathStrings_21;
#line 1226 "declarative_analyser.m"
                          MR_String mdb__declarative_analyser__PathStr_22;
#line 1226 "declarative_analyser.m"
                          MR_String mdb__declarative_analyser__V_29_29;

#line 1227 "declarative_analyser.m"
                          {
#line 1227 "declarative_analyser.m"
                            mdb__declarative_analyser__PathStrings_21 = mercury__list__map_2_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdb__declarative_analyser_scalar_common_2[1], mdb__declarative_analyser__Path_20);
                          }
#line 1228 "declarative_analyser.m"
                          {
#line 1228 "declarative_analyser.m"
                            mdb__declarative_analyser__PathStr_22 = mercury__string__join_list_2_f_0((MR_String) "/", mdb__declarative_analyser__PathStrings_21);
                          }
#line 1229 "declarative_analyser.m"
                          {
#line 1229 "declarative_analyser.m"
                            mdb__declarative_analyser__V_29_29 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PathStr_22, (MR_String) ".");
                          }
#line 1229 "declarative_analyser.m"
                          {
#line 1229 "declarative_analyser.m"
                            mdb__declarative_analyser__PathSent_23 = mercury__string__f_43_43_2_f_0((MR_String) "The path to the subterm in the atom is ", mdb__declarative_analyser__V_29_29);
                          }
#line 1226 "declarative_analyser.m"
                        }
#line 1238 "declarative_analyser.m"
                      {
#line 1238 "declarative_analyser.m"
                        mdb__declarative_analyser__V_53_53 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PathSent_23, mdb__declarative_analyser__EliminatedSent_19);
                      }
#line 1237 "declarative_analyser.m"
                      {
#line 1237 "declarative_analyser.m"
                        mdb__declarative_analyser__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "). ", mdb__declarative_analyser__V_53_53);
                      }
#line 1237 "declarative_analyser.m"
                      {
#line 1237 "declarative_analyser.m"
                        mdb__declarative_analyser__V_50_50 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__LineNoStr_11, mdb__declarative_analyser__V_51_51);
                      }
#line 1237 "declarative_analyser.m"
                      {
#line 1237 "declarative_analyser.m"
                        mdb__declarative_analyser__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) ":", mdb__declarative_analyser__V_50_50);
                      }
#line 1237 "declarative_analyser.m"
                      {
#line 1237 "declarative_analyser.m"
                        mdb__declarative_analyser__V_47_47 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__FileName_4, mdb__declarative_analyser__V_48_48);
                      }
#line 1237 "declarative_analyser.m"
                      {
#line 1237 "declarative_analyser.m"
                        mdb__declarative_analyser__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) " (", mdb__declarative_analyser__V_47_47);
                      }
#line 1236 "declarative_analyser.m"
                      {
#line 1236 "declarative_analyser.m"
                        mdb__declarative_analyser__V_44_44 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__ArityStr_18, mdb__declarative_analyser__V_45_45);
                      }
#line 1236 "declarative_analyser.m"
                      {
#line 1236 "declarative_analyser.m"
                        mdb__declarative_analyser__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_analyser__V_44_44);
                      }
#line 1236 "declarative_analyser.m"
                      {
#line 1236 "declarative_analyser.m"
                        mdb__declarative_analyser__V_41_41 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Name_13, mdb__declarative_analyser__V_42_42);
                      }
#line 1236 "declarative_analyser.m"
                      {
#line 1236 "declarative_analyser.m"
                        mdb__declarative_analyser__V_39_39 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_analyser__V_41_41);
                      }
#line 1236 "declarative_analyser.m"
                      {
#line 1236 "declarative_analyser.m"
                        mdb__declarative_analyser__V_38_38 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Module_17, mdb__declarative_analyser__V_39_39);
                      }
#line 1236 "declarative_analyser.m"
                      {
#line 1236 "declarative_analyser.m"
                        mdb__declarative_analyser__V_36_36 = mercury__string__f_43_43_2_f_0((MR_String) " ", mdb__declarative_analyser__V_38_38);
                      }
#line 1235 "declarative_analyser.m"
                      {
#line 1235 "declarative_analyser.m"
                        mdb__declarative_analyser__V_35_35 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PredOrFuncStr_16, mdb__declarative_analyser__V_36_36);
                      }
#line 1235 "declarative_analyser.m"
                      {
#line 1235 "declarative_analyser.m"
                        mdb__declarative_analyser__V_33_33 = mercury__string__f_43_43_2_f_0((MR_String) " inside the ", mdb__declarative_analyser__V_35_35);
                      }
#line 1235 "declarative_analyser.m"
                      {
#line 1235 "declarative_analyser.m"
                        mdb__declarative_analyser__V_32_32 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__PrimOpStr_10, mdb__declarative_analyser__V_33_33);
                      }
#line 1234 "declarative_analyser.m"
                      {
#line 1234 "declarative_analyser.m"
                        return mdb__declarative_analyser__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "the marked subterm was bound by the ", mdb__declarative_analyser__V_32_32);
                      }
#line 1204 "declarative_analyser.m"
                    }
#line 1201 "declarative_analyser.m"
                  else
#line 1255 "declarative_analyser.m"
                    {
#line 1255 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__Weighting_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 1255 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__OldWeight_82 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 1255 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__SubtreeWeight_83 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 1255 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_84_84 = (mdb__declarative_analyser__OldWeight_82 - mdb__declarative_analyser__SubtreeWeight_83);

#line 1256 "declarative_analyser.m"
                      {
#line 1256 "declarative_analyser.m"
                        return mdb__declarative_analyser__HeadVar__2_2 = mdb__declarative_analyser__weighting_to_reason_string_3_f_0(mdb__declarative_analyser__Weighting_81, mdb__declarative_analyser__V_84_84, mdb__declarative_analyser__SubtreeWeight_83);
                      }
#line 1255 "declarative_analyser.m"
                    }
#line 1201 "declarative_analyser.m"
    return mdb__declarative_analyser__HeadVar__2_2;
#line 1201 "declarative_analyser.m"
  }
#line 59 "declarative_analyser.m"
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
