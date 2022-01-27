/*
** Automatically generated from `declarative_analyser.m'
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
#include "mdbcomp.trace_counts.mih"




#line 92 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2;

#line 95 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2;

#line 98 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0;

#line 101 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 104 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 107 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1[2];

#line 110 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1;

#line 113 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2[1];

#line 116 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2;

#line 119 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3[1];

#line 122 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3;

#line 125 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4[1];

#line 128 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4;

#line 131 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5[1];

#line 134 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5;

#line 137 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0[1];

#line 140 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1[1];

#line 143 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2[1];

#line 146 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3[3];

#line 149 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_response_1[4];

#line 152 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1[6];

#line 155 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1[6];

#line 158 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1;

#line 161 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0;

#line 164 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0;

#line 167 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1;

#line 170 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1;

#line 173 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0[6];

#line 176 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0[6];

#line 179 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0;

#line 182 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[1];

#line 185 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[1];

#line 188 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1[1];

#line 191 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1[1];

#line 194 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0[1];

#line 197 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0;

#line 200 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1;

#line 203 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[1];

#line 206 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[1];

#line 209 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1[2];

#line 212 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1[2];

#line 215 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1[2];

#line 218 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0[1];

#line 221 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0;

#line 224 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1;

#line 227 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[1];

#line 230 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[1];

#line 233 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0[2];

#line 236 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0[2];

#line 239 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0[2];

#line 242 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0;

#line 245 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1;

#line 248 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0;

#line 251 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0;

#line 254 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2[6];

#line 257 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2[6];

#line 260 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2;

#line 263 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3;

#line 266 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4;

#line 269 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3];

#line 272 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3];

#line 275 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5;

#line 278 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3];

#line 281 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3];

#line 284 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6;

#line 287 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7;

#line 290 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8;

#line 293 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0[6];

#line 296 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1[1];

#line 299 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2[1];

#line 302 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3[1];

#line 305 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0[4];

#line 308 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_reason_for_question_0[9];

#line 311 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_reason_for_question_0[9];

#line 314 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0;

#line 317 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 320 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1[5];

#line 323 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1;

#line 326 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0;

#line 329 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 332 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3];

#line 335 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3];

#line 338 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2;

#line 341 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1];

#line 344 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3;

#line 347 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0[1];

#line 350 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1[1];

#line 353 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2[1];

#line 356 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3[1];

#line 359 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_mode_0[4];

#line 362 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0[4];

#line 365 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0[4];

#line 368 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0[2];

#line 371 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0;

#line 374 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1[1];

#line 377 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1;

#line 380 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2;

#line 383 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3;

#line 386 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4[3];

#line 389 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4;

#line 392 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0[2];

#line 395 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1[1];

#line 398 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2[1];

#line 401 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3[1];

#line 404 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_response_0[4];

#line 407 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0[5];

#line 410 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0[5];

#line 413 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0[2];

#line 416 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0;

#line 419 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[1];

#line 422 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[1];

#line 425 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0[1];

#line 428 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0[1];

#line 431 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
#line 434 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 436 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 438 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 441 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
#line 444 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 446 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 448 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 450 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 453 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
#line 456 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 458 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 460 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 463 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
#line 466 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 468 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 470 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 472 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 475 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
#line 478 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 480 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 482 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 485 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
#line 488 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 490 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 492 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 494 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 497 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
#line 500 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 502 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 505 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
#line 508 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 510 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 512 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 515 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
#line 518 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 520 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 523 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
#line 526 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 528 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 530 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 533 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
#line 536 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 538 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 541 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
#line 544 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 546 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 548 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 551 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
#line 554 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 556 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 559 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
#line 562 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 564 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 566 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 569 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
#line 572 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 574 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 577 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
#line 580 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 582 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 584 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 1121 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_p_0(
#line 1121 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1121 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1121 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_66,
#line 1121 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__4_67,
#line 1121 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__5_68,
#line 1121 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__6_69,
#line 1121 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__7_70);

#line 740 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_p_0(
#line 740 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 740 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 740 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_52);

#line 737 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_p_0(
#line 737 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 737 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 737 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_48);

#line 655 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_f_0(
#line 655 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 655 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 655 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_30);

#line 331 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0(
#line 331 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 331 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 331 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 331 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0(
#line 331 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 331 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

#line 237 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0(
#line 237 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 237 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 237 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 237 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0(
#line 237 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 237 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

#line 247 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0(
#line 247 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 247 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 247 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 247 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0(
#line 247 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 247 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2);

#line 334 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0(
#line 334 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 334 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 334 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3);

#line 334 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0(
#line 334 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 334 "declarative_analyser.m"
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

#line 1121 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0_1(
#line 1121 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 1121 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 1121 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 1121 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_3,
#line 1121 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_4,
#line 1121 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_5);

#line 1094 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0(
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1094 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_1,
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_2,
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_3,
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__4_4,
#line 1094 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_5,
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_6,
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1094 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8,
#line 1094 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9);

#line 1070 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(
#line 1070 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23,
#line 1070 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_10,
#line 1070 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_11,
#line 1070 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_12,
#line 1070 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_13,
#line 1070 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_14,
#line 1070 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_15,
#line 1070 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19,
#line 1070 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20,
#line 1070 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_17);

#line 1024 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(
#line 1024 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_21,
#line 1024 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 1024 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_9,
#line 1024 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterTop_10,
#line 1024 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterBottom_11,
#line 1024 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerTop_12,
#line 1024 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerBottom_13,
#line 1024 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__Unknown_14);

#line 946 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__binary_search_11_p_0(
#line 946 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37,
#line 946 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_12,
#line 946 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_13,
#line 946 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_14,
#line 946 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Top_15,
#line 946 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Bottom_16,
#line 946 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__LastTested_17,
#line 946 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 946 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 946 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_19,
#line 946 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_20,
#line 946 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_21);

#line 787 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70,
#line 787 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_15,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_16,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44,
#line 787 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_18,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46,
#line 787 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_20,
#line 787 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_21,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_22,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_23,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_24,
#line 787 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_25,
#line 787 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_26);

#line 774 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_12_p_0(
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29,
#line 774 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_13,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_14,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25,
#line 774 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_16,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_17,
#line 774 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_18,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_19,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_20,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_21,
#line 774 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_22,
#line 774 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_23);

#line 740 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_2(
#line 740 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 740 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

#line 737 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_1(
#line 737 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 737 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

#line 699 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0(
#line 699 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 699 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 699 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 699 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24,
#line 699 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25,
#line 699 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9);

#line 668 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__search_for_question_8_p_0(
#line 668 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33,
#line 668 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_9,
#line 668 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_10,
#line 668 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 668 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 668 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__OldMode_12,
#line 668 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_13,
#line 668 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_14,
#line 668 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_15);

#line 656 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_2(
#line 656 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 656 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 656 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2);

#line 655 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_1(
#line 655 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 655 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1);

#line 638 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0(
#line 638 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 638 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 638 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 638 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__BugId_9,
#line 638 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Evidence_10,
#line 638 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__InadmissibleChildren_11,
#line 638 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_12);

#line 571 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__handle_search_response_5_p_0(
#line 571 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78,
#line 571 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 571 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchResponse_7,
#line 571 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20,
#line 571 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_21,
#line 571 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__AnalyserResponse_9);

#line 552 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__decide_analyser_response_5_p_0(
#line 552 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63,
#line 552 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 552 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 552 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_8,
#line 552 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13,
#line 552 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_14);

#line 474 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__process_answer_5_p_0(
#line 474 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137,
#line 474 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 474 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Answer_7,
#line 474 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_8,
#line 474 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24,
#line 474 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_25);

#line 416 "declarative_analyser.m"
static MR_Word MR_CALL 
mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(
#line 416 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1);

#line 1226 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0_1(
#line 1226 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 1226 "declarative_analyser.m"
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



#line 1295 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1303 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1311 "mdb.declarative_analyser.c"
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

#line 1326 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1334 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
  }
};

#line 1342 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_bug_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1348 "mdb.declarative_analyser.c"
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

#line 1363 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1368 "mdb.declarative_analyser.c"
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

#line 1383 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1388 "mdb.declarative_analyser.c"
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

#line 1403 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1408 "mdb.declarative_analyser.c"
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

#line 1423 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1428 "mdb.declarative_analyser.c"
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

#line 1443 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0
};

#line 1448 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1
};

#line 1453 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2
};

#line 1458 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3[3] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5
};

#line 1465 "mdb.declarative_analyser.c"
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

#line 1489 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1[6] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5
};

#line 1499 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1[6] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 1509 "mdb.declarative_analyser.c"
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

#line 1530 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1538 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0
  }
};

#line 1546 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0
  }
};

#line 1554 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1562 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
  }
};

#line 1570 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
};

#line 1580 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0[6] = {
  (MR_String) "search_space",
  (MR_String) "require_explicit",
  (MR_String) "search_mode",
  (MR_String) "fallback_search_mode",
  (MR_String) "last_search_question",
  (MR_String) "debug_origin"
};

#line 1590 "mdb.declarative_analyser.c"
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

#line 1605 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

#line 1610 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0
  }
};

#line 1619 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

#line 1624 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1[1] = {
  (MR_Integer) 0
};

#line 1629 "mdb.declarative_analyser.c"
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

#line 1650 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1655 "mdb.declarative_analyser.c"
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

#line 1670 "mdb.declarative_analyser.c"
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

#line 1685 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

#line 1690 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0
};

#line 1695 "mdb.declarative_analyser.c"
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

#line 1709 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

#line 1715 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1721 "mdb.declarative_analyser.c"
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

#line 1742 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1747 "mdb.declarative_analyser.c"
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

#line 1762 "mdb.declarative_analyser.c"
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

#line 1777 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

#line 1782 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0
};

#line 1787 "mdb.declarative_analyser.c"
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

#line 1801 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

#line 1807 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1813 "mdb.declarative_analyser.c"
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

#line 1834 "mdb.declarative_analyser.c"
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

#line 1849 "mdb.declarative_analyser.c"
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

#line 1864 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1872 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 1880 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1890 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2[6] = {
  (MR_String) "binding_prim_op",
  (MR_String) "binding_filename",
  (MR_String) "binding_line_no",
  (MR_String) "maybe_atom_path",
  (MR_String) "binding_proc",
  (MR_String) "binding_node_eliminated"
};

#line 1900 "mdb.declarative_analyser.c"
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

#line 1915 "mdb.declarative_analyser.c"
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

#line 1930 "mdb.declarative_analyser.c"
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

#line 1945 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1952 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3] = {
  (MR_String) "binary_reason_bottom",
  (MR_String) "binary_reason_top",
  (MR_String) "binary_reason_split"
};

#line 1959 "mdb.declarative_analyser.c"
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

#line 1974 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1981 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3] = {
  (MR_String) "dq_weighting",
  (MR_String) "dq_old_weight",
  (MR_String) "dq_chosen_subtree_weight"
};

#line 1988 "mdb.declarative_analyser.c"
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

#line 2003 "mdb.declarative_analyser.c"
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

#line 2018 "mdb.declarative_analyser.c"
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

#line 2033 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0[6] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8
};

#line 2043 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2
};

#line 2048 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5
};

#line 2053 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6
};

#line 2058 "mdb.declarative_analyser.c"
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

#line 2082 "mdb.declarative_analyser.c"
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

#line 2095 "mdb.declarative_analyser.c"
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

#line 2108 "mdb.declarative_analyser.c"
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

#line 2129 "mdb.declarative_analyser.c"
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

#line 2144 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2152 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0
};

#line 2161 "mdb.declarative_analyser.c"
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

#line 2176 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2184 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2193 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2200 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3] = {
  (MR_String) "suspects",
  (MR_String) "range",
  (MR_String) "last_tested"
};

#line 2207 "mdb.declarative_analyser.c"
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

#line 2222 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
};

#line 2227 "mdb.declarative_analyser.c"
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

#line 2242 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0
};

#line 2247 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1
};

#line 2252 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2
};

#line 2257 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3
};

#line 2262 "mdb.declarative_analyser.c"
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

#line 2286 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0[4] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0
};

#line 2294 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2302 "mdb.declarative_analyser.c"
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

#line 2323 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

#line 2329 "mdb.declarative_analyser.c"
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

#line 2344 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2349 "mdb.declarative_analyser.c"
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

#line 2364 "mdb.declarative_analyser.c"
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

#line 2379 "mdb.declarative_analyser.c"
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

#line 2394 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2401 "mdb.declarative_analyser.c"
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

#line 2416 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3
};

#line 2422 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0
};

#line 2427 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1
};

#line 2432 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4
};

#line 2437 "mdb.declarative_analyser.c"
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

#line 2461 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0[5] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2
};

#line 2470 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2479 "mdb.declarative_analyser.c"
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

#line 2500 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

#line 2506 "mdb.declarative_analyser.c"
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

#line 2521 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

#line 2526 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0
  }
};

#line 2535 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

#line 2540 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0[1] = {
  (MR_Integer) 0
};

#line 2545 "mdb.declarative_analyser.c"
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

#line 2566 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
#line 2569 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2571 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2573 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2575 "mdb.declarative_analyser.c"
{
#line 2577 "mdb.declarative_analyser.c"
  {
#line 2579 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2582 "mdb.declarative_analyser.c"
    {
#line 2584 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analyser_response_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2587 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2589 "mdb.declarative_analyser.c"
  }
#line 2591 "mdb.declarative_analyser.c"
}

#line 2594 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
#line 2597 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2599 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2601 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2603 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2605 "mdb.declarative_analyser.c"
{
#line 2607 "mdb.declarative_analyser.c"
  {
#line 2609 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2612 "mdb.declarative_analyser.c"
    {
#line 2614 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analyser_response_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2617 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2619 "mdb.declarative_analyser.c"
  }
#line 2621 "mdb.declarative_analyser.c"
}

#line 2624 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
#line 2627 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2629 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2631 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2633 "mdb.declarative_analyser.c"
{
#line 2635 "mdb.declarative_analyser.c"
  {
#line 2637 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2640 "mdb.declarative_analyser.c"
    {
#line 2642 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analyser_state_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2645 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2647 "mdb.declarative_analyser.c"
  }
#line 2649 "mdb.declarative_analyser.c"
}

#line 2652 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
#line 2655 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2657 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2659 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2661 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2663 "mdb.declarative_analyser.c"
{
#line 2665 "mdb.declarative_analyser.c"
  {
#line 2667 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2670 "mdb.declarative_analyser.c"
    {
#line 2672 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analyser_state_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2675 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2677 "mdb.declarative_analyser.c"
  }
#line 2679 "mdb.declarative_analyser.c"
}

#line 2682 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
#line 2685 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2687 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2689 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2691 "mdb.declarative_analyser.c"
{
#line 2693 "mdb.declarative_analyser.c"
  {
#line 2695 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2698 "mdb.declarative_analyser.c"
    {
#line 2700 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analysis_type_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2703 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2705 "mdb.declarative_analyser.c"
  }
#line 2707 "mdb.declarative_analyser.c"
}

#line 2710 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
#line 2713 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2715 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2717 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2719 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2721 "mdb.declarative_analyser.c"
{
#line 2723 "mdb.declarative_analyser.c"
  {
#line 2725 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2728 "mdb.declarative_analyser.c"
    {
#line 2730 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analysis_type_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2733 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2735 "mdb.declarative_analyser.c"
  }
#line 2737 "mdb.declarative_analyser.c"
}

#line 2740 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
#line 2743 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2745 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2747 "mdb.declarative_analyser.c"
{
#line 2749 "mdb.declarative_analyser.c"
  {
#line 2751 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2754 "mdb.declarative_analyser.c"
    {
#line 2756 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____explicit_tree_type_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2759 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2761 "mdb.declarative_analyser.c"
  }
#line 2763 "mdb.declarative_analyser.c"
}

#line 2766 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
#line 2769 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2771 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2773 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2775 "mdb.declarative_analyser.c"
{
#line 2777 "mdb.declarative_analyser.c"
  {
#line 2779 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2782 "mdb.declarative_analyser.c"
    {
#line 2784 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____explicit_tree_type_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2787 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2789 "mdb.declarative_analyser.c"
  }
#line 2791 "mdb.declarative_analyser.c"
}

#line 2794 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
#line 2797 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2799 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2801 "mdb.declarative_analyser.c"
{
#line 2803 "mdb.declarative_analyser.c"
  {
#line 2805 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2808 "mdb.declarative_analyser.c"
    {
#line 2810 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2813 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2815 "mdb.declarative_analyser.c"
  }
#line 2817 "mdb.declarative_analyser.c"
}

#line 2820 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
#line 2823 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2825 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2827 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2829 "mdb.declarative_analyser.c"
{
#line 2831 "mdb.declarative_analyser.c"
  {
#line 2833 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2836 "mdb.declarative_analyser.c"
    {
#line 2838 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____reason_for_question_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2841 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2843 "mdb.declarative_analyser.c"
  }
#line 2845 "mdb.declarative_analyser.c"
}

#line 2848 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
#line 2851 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2853 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2855 "mdb.declarative_analyser.c"
{
#line 2857 "mdb.declarative_analyser.c"
  {
#line 2859 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2862 "mdb.declarative_analyser.c"
    {
#line 2864 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2867 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2869 "mdb.declarative_analyser.c"
  }
#line 2871 "mdb.declarative_analyser.c"
}

#line 2874 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
#line 2877 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2879 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2881 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2883 "mdb.declarative_analyser.c"
{
#line 2885 "mdb.declarative_analyser.c"
  {
#line 2887 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2890 "mdb.declarative_analyser.c"
    {
#line 2892 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2895 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2897 "mdb.declarative_analyser.c"
  }
#line 2899 "mdb.declarative_analyser.c"
}

#line 2902 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
#line 2905 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2907 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2909 "mdb.declarative_analyser.c"
{
#line 2911 "mdb.declarative_analyser.c"
  {
#line 2913 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2916 "mdb.declarative_analyser.c"
    {
#line 2918 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_response_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2921 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2923 "mdb.declarative_analyser.c"
  }
#line 2925 "mdb.declarative_analyser.c"
}

#line 2928 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
#line 2931 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2933 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2935 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2937 "mdb.declarative_analyser.c"
{
#line 2939 "mdb.declarative_analyser.c"
  {
#line 2941 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2944 "mdb.declarative_analyser.c"
    {
#line 2946 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____search_response_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2949 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2951 "mdb.declarative_analyser.c"
  }
#line 2953 "mdb.declarative_analyser.c"
}

#line 2956 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
#line 2959 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2961 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2963 "mdb.declarative_analyser.c"
{
#line 2965 "mdb.declarative_analyser.c"
  {
#line 2967 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2970 "mdb.declarative_analyser.c"
    {
#line 2972 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____suspect_and_reason_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2975 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2977 "mdb.declarative_analyser.c"
  }
#line 2979 "mdb.declarative_analyser.c"
}

#line 2982 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
#line 2985 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2987 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2989 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2991 "mdb.declarative_analyser.c"
{
#line 2993 "mdb.declarative_analyser.c"
  {
#line 2995 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2998 "mdb.declarative_analyser.c"
    {
#line 3000 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____suspect_and_reason_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 3003 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 3005 "mdb.declarative_analyser.c"
  }
#line 3007 "mdb.declarative_analyser.c"
}

#line 1121 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_p_0(
#line 1121 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1121 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1121 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_66,
#line 1121 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__4_67,
#line 1121 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__5_68,
#line 1121 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__6_69,
#line 1121 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__HeadVar__7_70)
#line 1121 "declarative_analyser.m"
{
#line 1121 "declarative_analyser.m"
  {
#line 1121 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1121 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_72_72;
#line 1121 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__Weight_87;

#line 3038 "mdb.declarative_analyser.c"
    {
#line 3040 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_72_72);
    }
#line 1177 "declarative_analyser.m"
    {
#line 1177 "declarative_analyser.m"
      mdb__declarative_analyser__Weight_87 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_72_72, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__HeadVar__3_66);
    }
#line 1178 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__Weight_87 > mdb__declarative_analyser__HeadVar__4_67);
#line 1181 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 1179 "declarative_analyser.m"
      {
#line 1179 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__5_68 = mdb__declarative_analyser__Weight_87;
#line 1180 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__7_70 = mdb__declarative_analyser__HeadVar__3_66;
#line 1179 "declarative_analyser.m"
      }
#line 1181 "declarative_analyser.m"
    else
#line 1182 "declarative_analyser.m"
      {
#line 1182 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__5_68 = mdb__declarative_analyser__HeadVar__4_67;
#line 1183 "declarative_analyser.m"
        *mdb__declarative_analyser__HeadVar__7_70 = mdb__declarative_analyser__HeadVar__6_69;
#line 1182 "declarative_analyser.m"
      }
#line 1121 "declarative_analyser.m"
  }
#line 1121 "declarative_analyser.m"
}

#line 740 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_p_0(
#line 740 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 740 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 740 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_52)
#line 740 "declarative_analyser.m"
{
#line 740 "declarative_analyser.m"
  {
#line 740 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 740 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_54_54;

#line 3093 "mdb.declarative_analyser.c"
    {
#line 3095 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_54_54);
    }
#line 740 "declarative_analyser.m"
    {
#line 740 "declarative_analyser.m"
      return mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_inadmissible_2_p_0(mdb__declarative_analyser__TypeInfo_54_54, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, mdb__declarative_analyser__HeadVar__3_52);
    }
#line 740 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 740 "declarative_analyser.m"
  }
#line 740 "declarative_analyser.m"
}

#line 737 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_p_0(
#line 737 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 737 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29,
#line 737 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_48)
#line 737 "declarative_analyser.m"
{
#line 737 "declarative_analyser.m"
  {
#line 737 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 737 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_50_50;

#line 3128 "mdb.declarative_analyser.c"
    {
#line 3130 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_50_50);
    }
#line 737 "declarative_analyser.m"
    {
#line 737 "declarative_analyser.m"
      return mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_correct_or_inadmissible_2_p_0(mdb__declarative_analyser__TypeInfo_50_50, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, mdb__declarative_analyser__HeadVar__3_48);
    }
#line 737 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 737 "declarative_analyser.m"
  }
#line 737 "declarative_analyser.m"
}

#line 655 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_f_0(
#line 655 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 655 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 655 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__HeadVar__3_30)
#line 655 "declarative_analyser.m"
{
#line 655 "declarative_analyser.m"
  {
#line 655 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 655 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__HeadVar__4_31;
#line 655 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_33_33;

#line 3165 "mdb.declarative_analyser.c"
    {
#line 3167 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_33_33);
    }
#line 655 "declarative_analyser.m"
    {
#line 655 "declarative_analyser.m"
      mdb__declarative_analyser__HeadVar__4_31 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_33_33, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__HeadVar__3_30);
    }
#line 655 "declarative_analyser.m"
    return mdb__declarative_analyser__HeadVar__4_31;
#line 655 "declarative_analyser.m"
  }
#line 655 "declarative_analyser.m"
}

#line 331 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0(
#line 331 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 331 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 331 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 331 "declarative_analyser.m"
{
#line 331 "declarative_analyser.m"
  {
#line 331 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 331 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 331 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_10 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 331 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_9 == mdb__declarative_analyser__CastY_10);
#line 331 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 3206 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 331 "declarative_analyser.m"
    else
#line 331 "declarative_analyser.m"
      {
#line 331 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 331 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 331 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 331 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 331 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_8_8;

#line 331 "declarative_analyser.m"
        {
#line 331 "declarative_analyser.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_8_8, mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_6_6);
        }
#line 3228 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_8_8 == (MR_Integer) 0);
#line 331 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 331 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 331 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_8_8;
#line 331 "declarative_analyser.m"
        else
#line 331 "declarative_analyser.m"
          {
#line 331 "declarative_analyser.m"
            mdb__declarative_analyser____Compare____reason_for_question_0_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_5_5, mdb__declarative_analyser__V_7_7);
#line 331 "declarative_analyser.m"
            return;
          }
#line 331 "declarative_analyser.m"
      }
#line 331 "declarative_analyser.m"
  }
#line 331 "declarative_analyser.m"
}

#line 331 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0(
#line 331 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 331 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 331 "declarative_analyser.m"
{
#line 331 "declarative_analyser.m"
  {
#line 331 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 331 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_7 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 331 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 331 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_7 == mdb__declarative_analyser__CastY_8);
#line 331 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 331 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 331 "declarative_analyser.m"
    else
#line 331 "declarative_analyser.m"
      {
#line 331 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 331 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 331 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 331 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));

#line 3289 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_3_3 == mdb__declarative_analyser__V_5_5);
#line 331 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 3293 "mdb.declarative_analyser.c"
          {
#line 3295 "mdb.declarative_analyser.c"
            return mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_6_6);
          }
#line 331 "declarative_analyser.m"
      }
#line 331 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 331 "declarative_analyser.m"
  }
#line 331 "declarative_analyser.m"
}

#line 237 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0(
#line 237 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 237 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 237 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 237 "declarative_analyser.m"
{
#line 237 "declarative_analyser.m"
  {
#line 237 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 237 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_67 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 237 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_68 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 237 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_67 == mdb__declarative_analyser__CastY_68);
#line 237 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 3331 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "declarative_analyser.m"
    else
#line 237 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 237 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 237 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "declarative_analyser.m"
        else
#line 237 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "declarative_analyser.m"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
          else
#line 237 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3351 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
            else
#line 237 "declarative_analyser.m"
              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3357 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
              else
#line 3361 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
      else
#line 237 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 237 "declarative_analyser.m"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
          else
#line 237 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "declarative_analyser.m"
            else
#line 237 "declarative_analyser.m"
              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3381 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
              else
#line 237 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3387 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
                else
#line 3391 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
        else
#line 237 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 237 "declarative_analyser.m"
            {
#line 237 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 237 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 237 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3408 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
              else
#line 237 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3414 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
                else
#line 237 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 237 "declarative_analyser.m"
                    {
#line 237 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 237 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 237 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 237 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_65_65;

#line 237 "declarative_analyser.m"
                      {
#line 237 "declarative_analyser.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_65_65, mdb__declarative_analyser__V_77_77, mdb__declarative_analyser__V_62_62);
                      }
#line 3436 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_65_65 == (MR_Integer) 0);
#line 237 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 237 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 237 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_65_65;
#line 237 "declarative_analyser.m"
                      else
#line 237 "declarative_analyser.m"
                        {
#line 237 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_66_66;

#line 237 "declarative_analyser.m"
                          {
#line 237 "declarative_analyser.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[6], &mdb__declarative_analyser__V_66_66, ((MR_Box) (mdb__declarative_analyser__V_76_76)), ((MR_Box) (mdb__declarative_analyser__V_63_63)));
                          }
#line 3456 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_66_66 == (MR_Integer) 0);
#line 237 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 237 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 237 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_66_66;
#line 237 "declarative_analyser.m"
                          else
#line 237 "declarative_analyser.m"
                            {
#line 237 "declarative_analyser.m"
                              {
#line 237 "declarative_analyser.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[6], mdb__declarative_analyser__HeadVar__1_1, ((MR_Box) (mdb__declarative_analyser__V_75_75)), ((MR_Box) (mdb__declarative_analyser__V_64_64)));
#line 237 "declarative_analyser.m"
                                return;
                              }
#line 237 "declarative_analyser.m"
                            }
#line 237 "declarative_analyser.m"
                        }
#line 237 "declarative_analyser.m"
                    }
#line 237 "declarative_analyser.m"
                  else
#line 237 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3485 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
                    else
#line 3489 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
            }
#line 237 "declarative_analyser.m"
          else
#line 237 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 237 "declarative_analyser.m"
              {
#line 237 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 237 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3506 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
                else
#line 237 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3512 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
                  else
#line 237 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3518 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
                    else
#line 237 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 237 "declarative_analyser.m"
                        {
#line 237 "declarative_analyser.m"
                          MR_Integer mdb__declarative_analyser__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 237 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 237 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_8_8;

#line 237 "declarative_analyser.m"
                          {
#line 237 "declarative_analyser.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_8_8, mdb__declarative_analyser__V_79_79, mdb__declarative_analyser__V_6_6);
                          }
#line 3538 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_8_8 == (MR_Integer) 0);
#line 237 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 237 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 237 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_8_8;
#line 237 "declarative_analyser.m"
                          else
#line 237 "declarative_analyser.m"
                            {
#line 237 "declarative_analyser.m"
                              mdb__declarative_analyser____Compare____reason_for_question_0_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_78_78, mdb__declarative_analyser__V_7_7);
#line 237 "declarative_analyser.m"
                              return;
                            }
#line 237 "declarative_analyser.m"
                        }
#line 237 "declarative_analyser.m"
                      else
#line 3559 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
              }
#line 237 "declarative_analyser.m"
            else
#line 237 "declarative_analyser.m"
              {
#line 237 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 237 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3572 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
                else
#line 237 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3578 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
                  else
#line 237 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3584 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
                    else
#line 237 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3590 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
                      else
#line 237 "declarative_analyser.m"
                        {
#line 237 "declarative_analyser.m"
                          MR_Integer mdb__declarative_analyser__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));

#line 237 "declarative_analyser.m"
                          {
#line 237 "declarative_analyser.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_80_80, mdb__declarative_analyser__V_25_25);
#line 237 "declarative_analyser.m"
                            return;
                          }
#line 237 "declarative_analyser.m"
                        }
#line 237 "declarative_analyser.m"
              }
#line 237 "declarative_analyser.m"
  }
#line 237 "declarative_analyser.m"
}

#line 237 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0(
#line 237 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 237 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 237 "declarative_analyser.m"
{
#line 237 "declarative_analyser.m"
  {
#line 237 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 237 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_19 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 237 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_20 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 237 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_19 == mdb__declarative_analyser__CastY_20);
#line 237 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 237 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 237 "declarative_analyser.m"
    else
#line 237 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 237 "declarative_analyser.m"
        {
#line 237 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastX_11 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 237 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastY_12 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 237 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_12 == mdb__declarative_analyser__CastX_11);
#line 237 "declarative_analyser.m"
        }
#line 237 "declarative_analyser.m"
      else
#line 237 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 237 "declarative_analyser.m"
          {
#line 237 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastX_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 237 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastY_10 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 237 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_10 == mdb__declarative_analyser__CastX_9);
#line 237 "declarative_analyser.m"
          }
#line 237 "declarative_analyser.m"
        else
#line 237 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 237 "declarative_analyser.m"
            {
#line 237 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_22_22;
#line 237 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_23_23;
#line 237 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 237 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 237 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 237 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_16_16;
#line 237 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_17_17;
#line 237 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_18_18;

#line 237 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 237 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 237 "declarative_analyser.m"
                {
#line 237 "declarative_analyser.m"
                  mdb__declarative_analyser__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "declarative_analyser.m"
                  mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "declarative_analyser.m"
                  mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 3704 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_13_13 == mdb__declarative_analyser__V_16_16);
#line 237 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 237 "declarative_analyser.m"
                    {
#line 3710 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__TypeInfo_22_22 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[6];
#line 3712 "mdb.declarative_analyser.c"
                      {
#line 3714 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_22_22, ((MR_Box) (mdb__declarative_analyser__V_14_14)), ((MR_Box) (mdb__declarative_analyser__V_17_17)));
                      }
#line 237 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 237 "declarative_analyser.m"
                        {
#line 3721 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__TypeInfo_23_23 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[6];
#line 3723 "mdb.declarative_analyser.c"
                          {
#line 3725 "mdb.declarative_analyser.c"
                            return mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_23_23, ((MR_Box) (mdb__declarative_analyser__V_15_15)), ((MR_Box) (mdb__declarative_analyser__V_18_18)));
                          }
#line 237 "declarative_analyser.m"
                        }
#line 237 "declarative_analyser.m"
                    }
#line 237 "declarative_analyser.m"
                }
#line 237 "declarative_analyser.m"
            }
#line 237 "declarative_analyser.m"
          else
#line 237 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 237 "declarative_analyser.m"
              {
#line 237 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 237 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 237 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_5_5;
#line 237 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_6_6;

#line 237 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 237 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 237 "declarative_analyser.m"
                  {
#line 237 "declarative_analyser.m"
                    mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "declarative_analyser.m"
                    mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 3761 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_3_3 == mdb__declarative_analyser__V_5_5);
#line 237 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 3765 "mdb.declarative_analyser.c"
                      {
#line 3767 "mdb.declarative_analyser.c"
                        return mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_6_6);
                      }
#line 237 "declarative_analyser.m"
                  }
#line 237 "declarative_analyser.m"
              }
#line 237 "declarative_analyser.m"
            else
#line 237 "declarative_analyser.m"
              {
#line 237 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 237 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__V_8_8;

#line 237 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 237 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 237 "declarative_analyser.m"
                  {
#line 237 "declarative_analyser.m"
                    mdb__declarative_analyser__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 3791 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_7_7 == mdb__declarative_analyser__V_8_8);
#line 237 "declarative_analyser.m"
                  }
#line 237 "declarative_analyser.m"
              }
#line 237 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 237 "declarative_analyser.m"
  }
#line 237 "declarative_analyser.m"
}

#line 169 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0(
#line 169 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 169 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 169 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 169 "declarative_analyser.m"
{
#line 169 "declarative_analyser.m"
  {
#line 169 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 169 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_82 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 169 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_83 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 169 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_82 == mdb__declarative_analyser__CastY_83);
#line 169 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 3828 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "declarative_analyser.m"
    else
#line 169 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 169 "declarative_analyser.m"
        else
#line 169 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3842 "mdb.declarative_analyser.c"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "declarative_analyser.m"
          else
#line 169 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3848 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "declarative_analyser.m"
            else
#line 3852 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "declarative_analyser.m"
      else
#line 169 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 169 "declarative_analyser.m"
          {
#line 169 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "declarative_analyser.m"
            MR_ArrayPtr mdb__declarative_analyser__V_95_95 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 169 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3869 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "declarative_analyser.m"
            else
#line 169 "declarative_analyser.m"
              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 169 "declarative_analyser.m"
                {
#line 169 "declarative_analyser.m"
                  MR_ArrayPtr mdb__declarative_analyser__V_60_60 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 169 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 169 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__V_62_62 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 169 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_63_63;

#line 169 "declarative_analyser.m"
                  {
#line 169 "declarative_analyser.m"
                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[4], &mdb__declarative_analyser__V_63_63, ((MR_Box) (mdb__declarative_analyser__V_95_95)), ((MR_Box) (mdb__declarative_analyser__V_60_60)));
                  }
#line 3891 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_63_63 == (MR_Integer) 0);
#line 169 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 169 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_63_63;
#line 169 "declarative_analyser.m"
                  else
#line 169 "declarative_analyser.m"
                    {
#line 169 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_64_64;

#line 169 "declarative_analyser.m"
                      {
#line 169 "declarative_analyser.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_2[0], &mdb__declarative_analyser__V_64_64, ((MR_Box) (mdb__declarative_analyser__V_94_94)), ((MR_Box) (mdb__declarative_analyser__V_61_61)));
                      }
#line 3911 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_64_64 == (MR_Integer) 0);
#line 169 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 169 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_64_64;
#line 169 "declarative_analyser.m"
                      else
#line 169 "declarative_analyser.m"
                        {
#line 169 "declarative_analyser.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_93_93, mdb__declarative_analyser__V_62_62);
#line 169 "declarative_analyser.m"
                          return;
                        }
#line 169 "declarative_analyser.m"
                    }
#line 169 "declarative_analyser.m"
                }
#line 169 "declarative_analyser.m"
              else
#line 169 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3936 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "declarative_analyser.m"
                else
#line 3940 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "declarative_analyser.m"
          }
#line 169 "declarative_analyser.m"
        else
#line 169 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3))))
#line 169 "declarative_analyser.m"
            {
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 169 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3955 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "declarative_analyser.m"
              else
#line 169 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3961 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "declarative_analyser.m"
                else
#line 169 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 169 "declarative_analyser.m"
                    {
#line 169 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 169 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_102_102 = (MR_Integer) mdb__declarative_analyser__V_96_96;
#line 169 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_103_103 = (MR_Integer) mdb__declarative_analyser__V_81_81;

#line 169 "declarative_analyser.m"
                      {
#line 169 "declarative_analyser.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_102_102, mdb__declarative_analyser__V_103_103);
#line 169 "declarative_analyser.m"
                        return;
                      }
#line 169 "declarative_analyser.m"
                    }
#line 169 "declarative_analyser.m"
                  else
#line 3987 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "declarative_analyser.m"
            }
#line 169 "declarative_analyser.m"
          else
#line 169 "declarative_analyser.m"
            {
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 169 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4008 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "declarative_analyser.m"
              else
#line 169 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4014 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "declarative_analyser.m"
                else
#line 169 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4020 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "declarative_analyser.m"
                  else
#line 169 "declarative_analyser.m"
                    {
#line 169 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 169 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 169 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 169 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
#line 169 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
#line 169 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_28_28;

#line 169 "declarative_analyser.m"
                      {
#line 169 "declarative_analyser.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_28_28, mdb__declarative_analyser__V_101_101, mdb__declarative_analyser__V_23_23);
                      }
#line 4044 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_28_28 == (MR_Integer) 0);
#line 169 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 169 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_28_28;
#line 169 "declarative_analyser.m"
                      else
#line 169 "declarative_analyser.m"
                        {
#line 169 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__V_29_29;

#line 169 "declarative_analyser.m"
                          {
#line 169 "declarative_analyser.m"
                            mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_analyser__V_29_29, mdb__declarative_analyser__V_100_100, mdb__declarative_analyser__V_24_24);
                          }
#line 4064 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_29_29 == (MR_Integer) 0);
#line 169 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 169 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_29_29;
#line 169 "declarative_analyser.m"
                          else
#line 169 "declarative_analyser.m"
                            {
#line 169 "declarative_analyser.m"
                              MR_Word mdb__declarative_analyser__V_30_30;

#line 169 "declarative_analyser.m"
                              {
#line 169 "declarative_analyser.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[2], &mdb__declarative_analyser__V_30_30, ((MR_Box) (mdb__declarative_analyser__V_99_99)), ((MR_Box) (mdb__declarative_analyser__V_25_25)));
                              }
#line 4084 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_30_30 == (MR_Integer) 0);
#line 169 "declarative_analyser.m"
                              mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 169 "declarative_analyser.m"
                              if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                                *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_30_30;
#line 169 "declarative_analyser.m"
                              else
#line 169 "declarative_analyser.m"
                                {
#line 169 "declarative_analyser.m"
                                  MR_Word mdb__declarative_analyser__V_31_31;

#line 169 "declarative_analyser.m"
                                  {
#line 169 "declarative_analyser.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[5], &mdb__declarative_analyser__V_31_31, ((MR_Box) (mdb__declarative_analyser__V_98_98)), ((MR_Box) (mdb__declarative_analyser__V_26_26)));
                                  }
#line 4104 "mdb.declarative_analyser.c"
                                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_31_31 == (MR_Integer) 0);
#line 169 "declarative_analyser.m"
                                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 169 "declarative_analyser.m"
                                  if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_31_31;
#line 169 "declarative_analyser.m"
                                  else
#line 169 "declarative_analyser.m"
                                    {
#line 169 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_104_104 = (MR_Integer) mdb__declarative_analyser__V_97_97;
#line 169 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_105_105 = (MR_Integer) mdb__declarative_analyser__V_27_27;

#line 169 "declarative_analyser.m"
                                      {
#line 169 "declarative_analyser.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_104_104, mdb__declarative_analyser__V_105_105);
#line 169 "declarative_analyser.m"
                                        return;
                                      }
#line 169 "declarative_analyser.m"
                                    }
#line 169 "declarative_analyser.m"
                                }
#line 169 "declarative_analyser.m"
                            }
#line 169 "declarative_analyser.m"
                        }
#line 169 "declarative_analyser.m"
                    }
#line 169 "declarative_analyser.m"
            }
#line 169 "declarative_analyser.m"
  }
#line 169 "declarative_analyser.m"
}

#line 169 "declarative_analyser.m"
MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0(
#line 169 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 169 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 169 "declarative_analyser.m"
{
#line 169 "declarative_analyser.m"
  {
#line 169 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 169 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_23 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 169 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_24 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 169 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_23 == mdb__declarative_analyser__CastY_24);
#line 169 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 169 "declarative_analyser.m"
    else
#line 169 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 169 "declarative_analyser.m"
        {
#line 169 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastX_3 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 169 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastY_4 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 169 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_4 == mdb__declarative_analyser__CastX_3);
#line 169 "declarative_analyser.m"
        }
#line 169 "declarative_analyser.m"
      else
#line 169 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 169 "declarative_analyser.m"
          {
#line 169 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeCtorInfo_25_25;
#line 169 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_26_26;
#line 169 "declarative_analyser.m"
            MR_ArrayPtr mdb__declarative_analyser__V_15_15 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "declarative_analyser.m"
            MR_ArrayPtr mdb__declarative_analyser__V_18_18;
#line 169 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_19_19;
#line 169 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_20_20;

#line 169 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 169 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
              {
#line 169 "declarative_analyser.m"
                mdb__declarative_analyser__V_18_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "declarative_analyser.m"
                mdb__declarative_analyser__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "declarative_analyser.m"
                mdb__declarative_analyser__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 4219 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__TypeCtorInfo_25_25 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 4221 "mdb.declarative_analyser.c"
                {
#line 4223 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mercury__array____Unify____array_1_0(mdb__declarative_analyser__TypeCtorInfo_25_25, (MR_ArrayPtr) mdb__declarative_analyser__V_15_15, (MR_ArrayPtr) mdb__declarative_analyser__V_18_18);
                }
#line 169 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                  {
#line 4230 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeInfo_26_26 = (MR_Word) &mdb__declarative_analyser_scalar_common_2[0];
#line 4232 "mdb.declarative_analyser.c"
                    {
#line 4234 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_26_26, ((MR_Box) (mdb__declarative_analyser__V_16_16)), ((MR_Box) (mdb__declarative_analyser__V_19_19)));
                    }
#line 169 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 4239 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_17_17 == mdb__declarative_analyser__V_20_20);
#line 169 "declarative_analyser.m"
                  }
#line 169 "declarative_analyser.m"
              }
#line 169 "declarative_analyser.m"
          }
#line 169 "declarative_analyser.m"
        else
#line 169 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 169 "declarative_analyser.m"
            {
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_22_22;

#line 169 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 169 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                {
#line 169 "declarative_analyser.m"
                  mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 4266 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_21_21 == mdb__declarative_analyser__V_22_22);
#line 169 "declarative_analyser.m"
                }
#line 169 "declarative_analyser.m"
            }
#line 169 "declarative_analyser.m"
          else
#line 169 "declarative_analyser.m"
            {
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_29_29;
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_30_30;
#line 169 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 169 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_10_10;
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_11_11;
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_12_12;
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_13_13;
#line 169 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_14_14;

#line 169 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 169 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                {
#line 169 "declarative_analyser.m"
                  mdb__declarative_analyser__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 169 "declarative_analyser.m"
                  mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 169 "declarative_analyser.m"
                  mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 169 "declarative_analyser.m"
                  mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 169 "declarative_analyser.m"
                  mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 4317 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_5_5 == mdb__declarative_analyser__V_10_10);
#line 169 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                    {
#line 4323 "mdb.declarative_analyser.c"
                      {
#line 4325 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_analyser__V_6_6, mdb__declarative_analyser__V_11_11);
                      }
#line 169 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                        {
#line 4332 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__TypeInfo_29_29 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[2];
#line 4334 "mdb.declarative_analyser.c"
                          {
#line 4336 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_29_29, ((MR_Box) (mdb__declarative_analyser__V_7_7)), ((MR_Box) (mdb__declarative_analyser__V_12_12)));
                          }
#line 169 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                            {
#line 4343 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_30_30 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[5];
#line 4345 "mdb.declarative_analyser.c"
                              {
#line 4347 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_30_30, ((MR_Box) (mdb__declarative_analyser__V_8_8)), ((MR_Box) (mdb__declarative_analyser__V_13_13)));
                              }
#line 169 "declarative_analyser.m"
                              if (mdb__declarative_analyser__succeeded)
#line 4352 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_9_9 == mdb__declarative_analyser__V_14_14);
#line 169 "declarative_analyser.m"
                            }
#line 169 "declarative_analyser.m"
                        }
#line 169 "declarative_analyser.m"
                    }
#line 169 "declarative_analyser.m"
                }
#line 169 "declarative_analyser.m"
            }
#line 169 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 169 "declarative_analyser.m"
  }
#line 169 "declarative_analyser.m"
}

#line 247 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0(
#line 247 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 247 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 247 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 247 "declarative_analyser.m"
{
#line 247 "declarative_analyser.m"
  {
#line 247 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 247 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_229 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 247 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_230 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 247 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_229 == mdb__declarative_analyser__CastY_230);
#line 247 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 4395 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "declarative_analyser.m"
    else
#line 247 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "declarative_analyser.m"
        else
#line 247 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "declarative_analyser.m"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
          else
#line 247 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
            else
#line 247 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "declarative_analyser.m"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
              else
#line 247 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                else
#line 247 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                  else
#line 247 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4439 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                    else
#line 247 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4445 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                      else
#line 4449 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
      else
#line 247 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "declarative_analyser.m"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
          else
#line 247 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "declarative_analyser.m"
            else
#line 247 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "declarative_analyser.m"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
              else
#line 247 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                else
#line 247 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                  else
#line 247 "declarative_analyser.m"
                    if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                    else
#line 247 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4493 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                      else
#line 247 "declarative_analyser.m"
                        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4499 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                        else
#line 4503 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
        else
#line 247 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
            else
#line 247 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "declarative_analyser.m"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
              else
#line 247 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "declarative_analyser.m"
                else
#line 247 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                  else
#line 247 "declarative_analyser.m"
                    if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                    else
#line 247 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                      else
#line 247 "declarative_analyser.m"
                        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4547 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                        else
#line 247 "declarative_analyser.m"
                          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4553 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                          else
#line 4557 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
          else
#line 247 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "declarative_analyser.m"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
              else
#line 247 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                else
#line 247 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                  else
#line 247 "declarative_analyser.m"
                    if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "declarative_analyser.m"
                    else
#line 247 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                      else
#line 247 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "declarative_analyser.m"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                        else
#line 247 "declarative_analyser.m"
                          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4601 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                          else
#line 247 "declarative_analyser.m"
                            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4607 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                            else
#line 4611 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
            else
#line 247 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                else
#line 247 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                  else
#line 247 "declarative_analyser.m"
                    if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                    else
#line 247 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                      else
#line 247 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "declarative_analyser.m"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "declarative_analyser.m"
                        else
#line 247 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                          else
#line 247 "declarative_analyser.m"
                            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4655 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                            else
#line 247 "declarative_analyser.m"
                              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4661 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                              else
#line 4665 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
              else
#line 247 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "declarative_analyser.m"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                  else
#line 247 "declarative_analyser.m"
                    if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                    else
#line 247 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "declarative_analyser.m"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                      else
#line 247 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "declarative_analyser.m"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                        else
#line 247 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "declarative_analyser.m"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                          else
#line 247 "declarative_analyser.m"
                            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "declarative_analyser.m"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 247 "declarative_analyser.m"
                            else
#line 247 "declarative_analyser.m"
                              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4709 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                              else
#line 247 "declarative_analyser.m"
                                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4715 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                                else
#line 4719 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                else
#line 247 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 247 "declarative_analyser.m"
                    {
#line 247 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_243_243 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 247 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_245_245 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 247 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 4736 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                      else
#line 247 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 4742 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                        else
#line 247 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 4748 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                          else
#line 247 "declarative_analyser.m"
                            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4754 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                            else
#line 247 "declarative_analyser.m"
                              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4760 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                              else
#line 247 "declarative_analyser.m"
                                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4766 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                else
#line 247 "declarative_analyser.m"
                                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 247 "declarative_analyser.m"
                                    {
#line 247 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_147_147 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 247 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                                      MR_Integer mdb__declarative_analyser__V_149_149 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 247 "declarative_analyser.m"
                                      MR_Word mdb__declarative_analyser__V_150_150;

#line 247 "declarative_analyser.m"
                                      {
#line 247 "declarative_analyser.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_150_150, mdb__declarative_analyser__V_245_245, mdb__declarative_analyser__V_147_147);
                                      }
#line 4788 "mdb.declarative_analyser.c"
                                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_150_150 == (MR_Integer) 0);
#line 247 "declarative_analyser.m"
                                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 247 "declarative_analyser.m"
                                      if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_150_150;
#line 247 "declarative_analyser.m"
                                      else
#line 247 "declarative_analyser.m"
                                        {
#line 247 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_151_151;

#line 247 "declarative_analyser.m"
                                          {
#line 247 "declarative_analyser.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_151_151, mdb__declarative_analyser__V_244_244, mdb__declarative_analyser__V_148_148);
                                          }
#line 4808 "mdb.declarative_analyser.c"
                                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_151_151 == (MR_Integer) 0);
#line 247 "declarative_analyser.m"
                                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 247 "declarative_analyser.m"
                                          if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_151_151;
#line 247 "declarative_analyser.m"
                                          else
#line 247 "declarative_analyser.m"
                                            {
#line 247 "declarative_analyser.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_243_243, mdb__declarative_analyser__V_149_149);
#line 247 "declarative_analyser.m"
                                              return;
                                            }
#line 247 "declarative_analyser.m"
                                        }
#line 247 "declarative_analyser.m"
                                    }
#line 247 "declarative_analyser.m"
                                  else
#line 247 "declarative_analyser.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4833 "mdb.declarative_analyser.c"
                                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                    else
#line 4837 "mdb.declarative_analyser.c"
                                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                    }
#line 247 "declarative_analyser.m"
                  else
#line 247 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 247 "declarative_analyser.m"
                      {
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_246_246 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_247_247 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_248_248 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 247 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_249_249 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 247 "declarative_analyser.m"
                        MR_String mdb__declarative_analyser__V_250_250 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_251_251 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 247 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 4862 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                        else
#line 247 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 4868 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                          else
#line 247 "declarative_analyser.m"
                            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 4874 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                            else
#line 247 "declarative_analyser.m"
                              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4880 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                              else
#line 247 "declarative_analyser.m"
                                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4886 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                                else
#line 247 "declarative_analyser.m"
                                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4892 "mdb.declarative_analyser.c"
                                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                  else
#line 247 "declarative_analyser.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4898 "mdb.declarative_analyser.c"
                                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                                    else
#line 247 "declarative_analyser.m"
                                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 247 "declarative_analyser.m"
                                        {
#line 247 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 247 "declarative_analyser.m"
                                          MR_String mdb__declarative_analyser__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 247 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
#line 247 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
#line 247 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 5)));
#line 247 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_52_52;
#line 247 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_255_255 = (MR_Integer) mdb__declarative_analyser__V_251_251;
#line 247 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_256_256 = (MR_Integer) mdb__declarative_analyser__V_46_46;

#line 247 "declarative_analyser.m"
                                          {
#line 247 "declarative_analyser.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_52_52, mdb__declarative_analyser__V_255_255, mdb__declarative_analyser__V_256_256);
                                          }
#line 4930 "mdb.declarative_analyser.c"
                                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_52_52 == (MR_Integer) 0);
#line 247 "declarative_analyser.m"
                                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 247 "declarative_analyser.m"
                                          if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_52_52;
#line 247 "declarative_analyser.m"
                                          else
#line 247 "declarative_analyser.m"
                                            {
#line 247 "declarative_analyser.m"
                                              MR_Word mdb__declarative_analyser__V_53_53;

#line 247 "declarative_analyser.m"
                                              {
#line 247 "declarative_analyser.m"
                                                mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_analyser__V_53_53, mdb__declarative_analyser__V_250_250, mdb__declarative_analyser__V_47_47);
                                              }
#line 4950 "mdb.declarative_analyser.c"
                                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_53_53 == (MR_Integer) 0);
#line 247 "declarative_analyser.m"
                                              mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 247 "declarative_analyser.m"
                                              if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                                *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_53_53;
#line 247 "declarative_analyser.m"
                                              else
#line 247 "declarative_analyser.m"
                                                {
#line 247 "declarative_analyser.m"
                                                  MR_Word mdb__declarative_analyser__V_54_54;

#line 247 "declarative_analyser.m"
                                                  {
#line 247 "declarative_analyser.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_54_54, mdb__declarative_analyser__V_249_249, mdb__declarative_analyser__V_48_48);
                                                  }
#line 4970 "mdb.declarative_analyser.c"
                                                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_54_54 == (MR_Integer) 0);
#line 247 "declarative_analyser.m"
                                                  mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 247 "declarative_analyser.m"
                                                  if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                                    *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_54_54;
#line 247 "declarative_analyser.m"
                                                  else
#line 247 "declarative_analyser.m"
                                                    {
#line 247 "declarative_analyser.m"
                                                      MR_Word mdb__declarative_analyser__V_55_55;

#line 247 "declarative_analyser.m"
                                                      {
#line 247 "declarative_analyser.m"
                                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[3], &mdb__declarative_analyser__V_55_55, ((MR_Box) (mdb__declarative_analyser__V_248_248)), ((MR_Box) (mdb__declarative_analyser__V_49_49)));
                                                      }
#line 4990 "mdb.declarative_analyser.c"
                                                      mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_55_55 == (MR_Integer) 0);
#line 247 "declarative_analyser.m"
                                                      mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 247 "declarative_analyser.m"
                                                      if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                                        *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_55_55;
#line 247 "declarative_analyser.m"
                                                      else
#line 247 "declarative_analyser.m"
                                                        {
#line 247 "declarative_analyser.m"
                                                          MR_Word mdb__declarative_analyser__V_56_56;

#line 247 "declarative_analyser.m"
                                                          {
#line 247 "declarative_analyser.m"
                                                            mdbcomp__prim_data____Compare____proc_label_0_0(&mdb__declarative_analyser__V_56_56, mdb__declarative_analyser__V_247_247, mdb__declarative_analyser__V_50_50);
                                                          }
#line 5010 "mdb.declarative_analyser.c"
                                                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_56_56 == (MR_Integer) 0);
#line 247 "declarative_analyser.m"
                                                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 247 "declarative_analyser.m"
                                                          if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_56_56;
#line 247 "declarative_analyser.m"
                                                          else
#line 247 "declarative_analyser.m"
                                                            {
#line 247 "declarative_analyser.m"
                                                              MR_Integer mdb__declarative_analyser__V_257_257 = (MR_Integer) mdb__declarative_analyser__V_246_246;
#line 247 "declarative_analyser.m"
                                                              MR_Integer mdb__declarative_analyser__V_258_258 = (MR_Integer) mdb__declarative_analyser__V_51_51;

#line 247 "declarative_analyser.m"
                                                              {
#line 247 "declarative_analyser.m"
                                                                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_257_257, mdb__declarative_analyser__V_258_258);
#line 247 "declarative_analyser.m"
                                                                return;
                                                              }
#line 247 "declarative_analyser.m"
                                                            }
#line 247 "declarative_analyser.m"
                                                        }
#line 247 "declarative_analyser.m"
                                                    }
#line 247 "declarative_analyser.m"
                                                }
#line 247 "declarative_analyser.m"
                                            }
#line 247 "declarative_analyser.m"
                                        }
#line 247 "declarative_analyser.m"
                                      else
#line 5048 "mdb.declarative_analyser.c"
                                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                      }
#line 247 "declarative_analyser.m"
                    else
#line 247 "declarative_analyser.m"
                      {
#line 247 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_252_252 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 247 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_253_253 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_254_254 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 247 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 5065 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                        else
#line 247 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 5071 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                          else
#line 247 "declarative_analyser.m"
                            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5077 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                            else
#line 247 "declarative_analyser.m"
                              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5083 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                              else
#line 247 "declarative_analyser.m"
                                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5089 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                else
#line 247 "declarative_analyser.m"
                                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5095 "mdb.declarative_analyser.c"
                                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                  else
#line 247 "declarative_analyser.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5101 "mdb.declarative_analyser.c"
                                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                    else
#line 247 "declarative_analyser.m"
                                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5107 "mdb.declarative_analyser.c"
                                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                      else
#line 247 "declarative_analyser.m"
                                        {
#line 247 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_194_194 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 247 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_195_195 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_196_196 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 247 "declarative_analyser.m"
                                          MR_Word mdb__declarative_analyser__V_197_197;
#line 247 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_259_259 = (MR_Integer) mdb__declarative_analyser__V_254_254;
#line 247 "declarative_analyser.m"
                                          MR_Integer mdb__declarative_analyser__V_260_260 = (MR_Integer) mdb__declarative_analyser__V_194_194;

#line 247 "declarative_analyser.m"
                                          {
#line 247 "declarative_analyser.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_197_197, mdb__declarative_analyser__V_259_259, mdb__declarative_analyser__V_260_260);
                                          }
#line 5131 "mdb.declarative_analyser.c"
                                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_197_197 == (MR_Integer) 0);
#line 247 "declarative_analyser.m"
                                          mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 247 "declarative_analyser.m"
                                          if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                            *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_197_197;
#line 247 "declarative_analyser.m"
                                          else
#line 247 "declarative_analyser.m"
                                            {
#line 247 "declarative_analyser.m"
                                              MR_Word mdb__declarative_analyser__V_198_198;

#line 247 "declarative_analyser.m"
                                              {
#line 247 "declarative_analyser.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_analyser__V_198_198, mdb__declarative_analyser__V_253_253, mdb__declarative_analyser__V_195_195);
                                              }
#line 5151 "mdb.declarative_analyser.c"
                                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_198_198 == (MR_Integer) 0);
#line 247 "declarative_analyser.m"
                                              mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 247 "declarative_analyser.m"
                                              if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                                *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_198_198;
#line 247 "declarative_analyser.m"
                                              else
#line 247 "declarative_analyser.m"
                                                {
#line 247 "declarative_analyser.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_252_252, mdb__declarative_analyser__V_196_196);
#line 247 "declarative_analyser.m"
                                                  return;
                                                }
#line 247 "declarative_analyser.m"
                                            }
#line 247 "declarative_analyser.m"
                                        }
#line 247 "declarative_analyser.m"
                      }
#line 247 "declarative_analyser.m"
  }
#line 247 "declarative_analyser.m"
}

#line 247 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0(
#line 247 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 247 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 247 "declarative_analyser.m"
{
#line 247 "declarative_analyser.m"
  {
#line 247 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 247 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_39 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 247 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_40 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 247 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_39 == mdb__declarative_analyser__CastY_40);
#line 247 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 247 "declarative_analyser.m"
    else
#line 247 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 247 "declarative_analyser.m"
        {
#line 247 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastX_21 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 247 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastY_22 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 247 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_22 == mdb__declarative_analyser__CastX_21);
#line 247 "declarative_analyser.m"
        }
#line 247 "declarative_analyser.m"
      else
#line 247 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 247 "declarative_analyser.m"
          {
#line 247 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastX_37 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 247 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__CastY_38 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 247 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_38 == mdb__declarative_analyser__CastX_37);
#line 247 "declarative_analyser.m"
          }
#line 247 "declarative_analyser.m"
        else
#line 247 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 247 "declarative_analyser.m"
            {
#line 247 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__CastX_35 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 247 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__CastY_36 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 247 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_36 == mdb__declarative_analyser__CastX_35);
#line 247 "declarative_analyser.m"
            }
#line 247 "declarative_analyser.m"
          else
#line 247 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 247 "declarative_analyser.m"
              {
#line 247 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastX_3 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 247 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__CastY_4 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 247 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_4 == mdb__declarative_analyser__CastX_3);
#line 247 "declarative_analyser.m"
              }
#line 247 "declarative_analyser.m"
            else
#line 247 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 247 "declarative_analyser.m"
                {
#line 247 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__CastX_19 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 247 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__CastY_20 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 247 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_20 == mdb__declarative_analyser__CastX_19);
#line 247 "declarative_analyser.m"
                }
#line 247 "declarative_analyser.m"
              else
#line 247 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 247 "declarative_analyser.m"
                  {
#line 247 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__CastX_5 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 247 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__CastY_6 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 247 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_6 == mdb__declarative_analyser__CastX_5);
#line 247 "declarative_analyser.m"
                  }
#line 247 "declarative_analyser.m"
                else
#line 247 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 247 "declarative_analyser.m"
                    {
#line 247 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 247 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 247 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_26_26;
#line 247 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_27_27;
#line 247 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__V_28_28;

#line 247 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 247 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                        {
#line 247 "declarative_analyser.m"
                          mdb__declarative_analyser__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 247 "declarative_analyser.m"
                          mdb__declarative_analyser__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                          mdb__declarative_analyser__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 5324 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_23_23 == mdb__declarative_analyser__V_26_26);
#line 247 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                            {
#line 5330 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_24_24 == mdb__declarative_analyser__V_27_27);
#line 247 "declarative_analyser.m"
                              if (mdb__declarative_analyser__succeeded)
#line 5334 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_25_25 == mdb__declarative_analyser__V_28_28);
#line 247 "declarative_analyser.m"
                            }
#line 247 "declarative_analyser.m"
                        }
#line 247 "declarative_analyser.m"
                    }
#line 247 "declarative_analyser.m"
                  else
#line 247 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 247 "declarative_analyser.m"
                      {
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__TypeInfo_41_41;
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 247 "declarative_analyser.m"
                        MR_String mdb__declarative_analyser__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 5)));
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_13_13;
#line 247 "declarative_analyser.m"
                        MR_String mdb__declarative_analyser__V_14_14;
#line 247 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_15_15;
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_16_16;
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_17_17;
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_18_18;

#line 247 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                          {
#line 247 "declarative_analyser.m"
                            mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 247 "declarative_analyser.m"
                            mdb__declarative_analyser__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                            mdb__declarative_analyser__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 247 "declarative_analyser.m"
                            mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 247 "declarative_analyser.m"
                            mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 247 "declarative_analyser.m"
                            mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
#line 5393 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_7_7 == mdb__declarative_analyser__V_13_13);
#line 247 "declarative_analyser.m"
                            if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                              {
#line 5399 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = (strcmp(mdb__declarative_analyser__V_8_8, mdb__declarative_analyser__V_14_14) == 0);
#line 247 "declarative_analyser.m"
                                if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                  {
#line 5405 "mdb.declarative_analyser.c"
                                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_9_9 == mdb__declarative_analyser__V_15_15);
#line 247 "declarative_analyser.m"
                                    if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                      {
#line 5411 "mdb.declarative_analyser.c"
                                        mdb__declarative_analyser__TypeInfo_41_41 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[3];
#line 5413 "mdb.declarative_analyser.c"
                                        {
#line 5415 "mdb.declarative_analyser.c"
                                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_41_41, ((MR_Box) (mdb__declarative_analyser__V_10_10)), ((MR_Box) (mdb__declarative_analyser__V_16_16)));
                                        }
#line 247 "declarative_analyser.m"
                                        if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                          {
#line 5422 "mdb.declarative_analyser.c"
                                            {
#line 5424 "mdb.declarative_analyser.c"
                                              mdb__declarative_analyser__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdb__declarative_analyser__V_11_11, mdb__declarative_analyser__V_17_17);
                                            }
#line 247 "declarative_analyser.m"
                                            if (mdb__declarative_analyser__succeeded)
#line 5429 "mdb.declarative_analyser.c"
                                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_12_12 == mdb__declarative_analyser__V_18_18);
#line 247 "declarative_analyser.m"
                                          }
#line 247 "declarative_analyser.m"
                                      }
#line 247 "declarative_analyser.m"
                                  }
#line 247 "declarative_analyser.m"
                              }
#line 247 "declarative_analyser.m"
                          }
#line 247 "declarative_analyser.m"
                      }
#line 247 "declarative_analyser.m"
                    else
#line 247 "declarative_analyser.m"
                      {
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 247 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 247 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_32_32;
#line 247 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_33_33;
#line 247 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_34_34;

#line 247 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 247 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                          {
#line 247 "declarative_analyser.m"
                            mdb__declarative_analyser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 247 "declarative_analyser.m"
                            mdb__declarative_analyser__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 247 "declarative_analyser.m"
                            mdb__declarative_analyser__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 5472 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_29_29 == mdb__declarative_analyser__V_32_32);
#line 247 "declarative_analyser.m"
                            if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                              {
#line 5478 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_30_30 == mdb__declarative_analyser__V_33_33);
#line 247 "declarative_analyser.m"
                                if (mdb__declarative_analyser__succeeded)
#line 5482 "mdb.declarative_analyser.c"
                                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_31_31 == mdb__declarative_analyser__V_34_34);
#line 247 "declarative_analyser.m"
                              }
#line 247 "declarative_analyser.m"
                          }
#line 247 "declarative_analyser.m"
                      }
#line 247 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 247 "declarative_analyser.m"
  }
#line 247 "declarative_analyser.m"
}

#line 334 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0(
#line 334 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 334 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 334 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 334 "declarative_analyser.m"
{
#line 334 "declarative_analyser.m"
  {
#line 334 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 334 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 334 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_9 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 334 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_8 == mdb__declarative_analyser__CastY_9);
#line 334 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 5521 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 334 "declarative_analyser.m"
    else
#line 334 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 334 "declarative_analyser.m"
        else
#line 5533 "mdb.declarative_analyser.c"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 334 "declarative_analyser.m"
      else
#line 334 "declarative_analyser.m"
        {
#line 334 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 334 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5544 "mdb.declarative_analyser.c"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 334 "declarative_analyser.m"
          else
#line 334 "declarative_analyser.m"
            {
#line 334 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));

#line 334 "declarative_analyser.m"
              {
#line 334 "declarative_analyser.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_analyser__HeadVar__1_1, mdb__declarative_analyser__V_11_11, mdb__declarative_analyser__V_5_5);
#line 334 "declarative_analyser.m"
                return;
              }
#line 334 "declarative_analyser.m"
            }
#line 334 "declarative_analyser.m"
        }
#line 334 "declarative_analyser.m"
  }
#line 334 "declarative_analyser.m"
}

#line 334 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0(
#line 334 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 334 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 334 "declarative_analyser.m"
{
#line 334 "declarative_analyser.m"
  {
#line 334 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 334 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_7 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 334 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_8 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 334 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_7 == mdb__declarative_analyser__CastY_8);
#line 334 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 334 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 334 "declarative_analyser.m"
    else
#line 334 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 334 "declarative_analyser.m"
        {
#line 334 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastX_5 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 334 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__CastY_6 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 334 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastY_6 == mdb__declarative_analyser__CastX_5);
#line 334 "declarative_analyser.m"
        }
#line 334 "declarative_analyser.m"
      else
#line 334 "declarative_analyser.m"
        {
#line 334 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 334 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_4_4;

#line 334 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 334 "declarative_analyser.m"
          if (mdb__declarative_analyser__succeeded)
#line 334 "declarative_analyser.m"
            {
#line 334 "declarative_analyser.m"
              mdb__declarative_analyser__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 5625 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_3_3 == mdb__declarative_analyser__V_4_4);
#line 334 "declarative_analyser.m"
            }
#line 334 "declarative_analyser.m"
        }
#line 334 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 334 "declarative_analyser.m"
  }
#line 334 "declarative_analyser.m"
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
#line 5664 "mdb.declarative_analyser.c"
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
#line 5676 "mdb.declarative_analyser.c"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "declarative_analyser.m"
      else
#line 84 "declarative_analyser.m"
        {
#line 84 "declarative_analyser.m"
          MR_Box mdb__declarative_analyser__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0));

#line 84 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5687 "mdb.declarative_analyser.c"
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
#line 5770 "mdb.declarative_analyser.c"
              {
#line 5772 "mdb.declarative_analyser.c"
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

#line 298 "declarative_analyser.m"
void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0(
#line 298 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_23,
#line 298 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__HeadVar__1_1,
#line 298 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2,
#line 298 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__3_3)
#line 298 "declarative_analyser.m"
{
#line 298 "declarative_analyser.m"
  {
#line 298 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 298 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_21 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;
#line 298 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_22 = (MR_Integer) mdb__declarative_analyser__HeadVar__3_3;

#line 298 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_21 == mdb__declarative_analyser__CastY_22);
#line 298 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 5812 "mdb.declarative_analyser.c"
      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 0;
#line 298 "declarative_analyser.m"
    else
#line 298 "declarative_analyser.m"
      {
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 1)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 2)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 3)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 4)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 5)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_16_16;

#line 298 "declarative_analyser.m"
        {
#line 298 "declarative_analyser.m"
          mdb__declarative_edt____Compare____search_space_1_0(mdb__declarative_analyser__TypeInfo_for_T_23, &mdb__declarative_analyser__V_16_16, mdb__declarative_analyser__V_4_4, mdb__declarative_analyser__V_10_10);
        }
#line 5850 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_16_16 == (MR_Integer) 0);
#line 298 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 298 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_16_16;
#line 298 "declarative_analyser.m"
        else
#line 298 "declarative_analyser.m"
          {
#line 298 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_17_17;

#line 298 "declarative_analyser.m"
            {
#line 298 "declarative_analyser.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[0], &mdb__declarative_analyser__V_17_17, ((MR_Box) (mdb__declarative_analyser__V_5_5)), ((MR_Box) (mdb__declarative_analyser__V_11_11)));
            }
#line 5870 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_17_17 == (MR_Integer) 0);
#line 298 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 298 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
              *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_17_17;
#line 298 "declarative_analyser.m"
            else
#line 298 "declarative_analyser.m"
              {
#line 298 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_18_18;

#line 298 "declarative_analyser.m"
                {
#line 298 "declarative_analyser.m"
                  mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__V_18_18, mdb__declarative_analyser__V_6_6, mdb__declarative_analyser__V_12_12);
                }
#line 5890 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_18_18 == (MR_Integer) 0);
#line 298 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 298 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
                  *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_18_18;
#line 298 "declarative_analyser.m"
                else
#line 298 "declarative_analyser.m"
                  {
#line 298 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_19_19;

#line 298 "declarative_analyser.m"
                    {
#line 298 "declarative_analyser.m"
                      mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__V_19_19, mdb__declarative_analyser__V_7_7, mdb__declarative_analyser__V_13_13);
                    }
#line 5910 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_19_19 == (MR_Integer) 0);
#line 298 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 298 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
                      *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_19_19;
#line 298 "declarative_analyser.m"
                    else
#line 298 "declarative_analyser.m"
                      {
#line 298 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_20_20;

#line 298 "declarative_analyser.m"
                        {
#line 298 "declarative_analyser.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_analyser_scalar_common_1[1], &mdb__declarative_analyser__V_20_20, ((MR_Box) (mdb__declarative_analyser__V_8_8)), ((MR_Box) (mdb__declarative_analyser__V_14_14)));
                        }
#line 5930 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_20_20 == (MR_Integer) 0);
#line 298 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = !(mdb__declarative_analyser__succeeded);
#line 298 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
                          *mdb__declarative_analyser__HeadVar__1_1 = mdb__declarative_analyser__V_20_20;
#line 298 "declarative_analyser.m"
                        else
#line 298 "declarative_analyser.m"
                          {
#line 298 "declarative_analyser.m"
                            MR_Word mdb__declarative_analyser__TypeInfo_31_31;

#line 5945 "mdb.declarative_analyser.c"
                            {
#line 5947 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5949 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_31_31, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1));
#line 5951 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_31_31, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_23));
#line 5953 "mdb.declarative_analyser.c"
                            }
#line 298 "declarative_analyser.m"
                            {
#line 298 "declarative_analyser.m"
                              mercury__maybe____Compare____maybe_1_0(mdb__declarative_analyser__TypeInfo_31_31, mdb__declarative_analyser__HeadVar__1_1, (MR_Word) mdb__declarative_analyser__V_9_9, (MR_Word) mdb__declarative_analyser__V_15_15);
#line 298 "declarative_analyser.m"
                              return;
                            }
#line 298 "declarative_analyser.m"
                          }
#line 298 "declarative_analyser.m"
                      }
#line 298 "declarative_analyser.m"
                  }
#line 298 "declarative_analyser.m"
              }
#line 298 "declarative_analyser.m"
          }
#line 298 "declarative_analyser.m"
      }
#line 298 "declarative_analyser.m"
  }
#line 298 "declarative_analyser.m"
}

#line 298 "declarative_analyser.m"
MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0(
#line 298 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_17,
#line 298 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1,
#line 298 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__2_2)
#line 298 "declarative_analyser.m"
{
#line 298 "declarative_analyser.m"
  {
#line 298 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 298 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastX_15 = (MR_Integer) mdb__declarative_analyser__HeadVar__1_1;
#line 298 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__CastY_16 = (MR_Integer) mdb__declarative_analyser__HeadVar__2_2;

#line 298 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__CastX_15 == mdb__declarative_analyser__CastY_16);
#line 298 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = MR_TRUE;
#line 298 "declarative_analyser.m"
    else
#line 298 "declarative_analyser.m"
      {
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_20_20;
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_21_21;
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeCtorInfo_22_22;
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_23_23;
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 5)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 1)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 2)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 3)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 4)));
#line 298 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 5)));

#line 6042 "mdb.declarative_analyser.c"
        {
#line 6044 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt____Unify____search_space_1_0(mdb__declarative_analyser__TypeInfo_for_T_17, mdb__declarative_analyser__V_3_3, mdb__declarative_analyser__V_9_9);
        }
#line 298 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
          {
#line 6051 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__TypeInfo_20_20 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[0];
#line 6053 "mdb.declarative_analyser.c"
            {
#line 6055 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_20_20, ((MR_Box) (mdb__declarative_analyser__V_4_4)), ((MR_Box) (mdb__declarative_analyser__V_10_10)));
            }
#line 298 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
              {
#line 6062 "mdb.declarative_analyser.c"
                {
#line 6064 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(mdb__declarative_analyser__V_5_5, mdb__declarative_analyser__V_11_11);
                }
#line 298 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
                  {
#line 6071 "mdb.declarative_analyser.c"
                    {
#line 6073 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(mdb__declarative_analyser__V_6_6, mdb__declarative_analyser__V_12_12);
                    }
#line 298 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
                      {
#line 6080 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeInfo_21_21 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[1];
#line 6082 "mdb.declarative_analyser.c"
                        {
#line 6084 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_21_21, ((MR_Box) (mdb__declarative_analyser__V_7_7)), ((MR_Box) (mdb__declarative_analyser__V_13_13)));
                        }
#line 298 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
                          {
#line 6091 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1;
#line 6093 "mdb.declarative_analyser.c"
                            {
#line 6095 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6097 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__TypeCtorInfo_22_22));
#line 6099 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_17));
#line 6101 "mdb.declarative_analyser.c"
                            }
#line 6103 "mdb.declarative_analyser.c"
                            {
#line 6105 "mdb.declarative_analyser.c"
                              return mdb__declarative_analyser__succeeded = mercury__maybe____Unify____maybe_1_0(mdb__declarative_analyser__TypeInfo_23_23, (MR_Word) mdb__declarative_analyser__V_8_8, (MR_Word) mdb__declarative_analyser__V_14_14);
                            }
#line 298 "declarative_analyser.m"
                          }
#line 298 "declarative_analyser.m"
                      }
#line 298 "declarative_analyser.m"
                  }
#line 298 "declarative_analyser.m"
              }
#line 298 "declarative_analyser.m"
          }
#line 298 "declarative_analyser.m"
      }
#line 298 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 298 "declarative_analyser.m"
  }
#line 298 "declarative_analyser.m"
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
#line 6153 "mdb.declarative_analyser.c"
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
#line 6167 "mdb.declarative_analyser.c"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
          else
#line 35 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6173 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
            else
#line 35 "declarative_analyser.m"
              if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6179 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
              else
#line 35 "declarative_analyser.m"
                if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6185 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                else
#line 6189 "mdb.declarative_analyser.c"
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
#line 6204 "mdb.declarative_analyser.c"
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
#line 6224 "mdb.declarative_analyser.c"
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

#line 6239 "mdb.declarative_analyser.c"
                      {
#line 6241 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6243 "mdb.declarative_analyser.c"
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_86_86, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 6245 "mdb.declarative_analyser.c"
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_86_86, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_79));
#line 6247 "mdb.declarative_analyser.c"
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
#line 6264 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                else
#line 35 "declarative_analyser.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6270 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6276 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    else
#line 6280 "mdb.declarative_analyser.c"
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
#line 6295 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
              else
#line 35 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6301 "mdb.declarative_analyser.c"
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
#line 6325 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    else
#line 35 "declarative_analyser.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6331 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                      else
#line 6335 "mdb.declarative_analyser.c"
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
#line 6350 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                else
#line 35 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6356 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6362 "mdb.declarative_analyser.c"
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
#line 6386 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                        else
#line 6390 "mdb.declarative_analyser.c"
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
#line 6405 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6411 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    else
#line 35 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6417 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                      else
#line 35 "declarative_analyser.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6423 "mdb.declarative_analyser.c"
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
#line 6445 "mdb.declarative_analyser.c"
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
#line 6458 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6464 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    else
#line 35 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6470 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                      else
#line 35 "declarative_analyser.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6476 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                        else
#line 35 "declarative_analyser.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6482 "mdb.declarative_analyser.c"
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
#line 6577 "mdb.declarative_analyser.c"
                {
#line 6579 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mdb__declarative_debugger____Unify____decl_bug_0_0(mdb__declarative_analyser__V_5_5, mdb__declarative_analyser__V_7_7);
                }
#line 35 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 35 "declarative_analyser.m"
                  {
#line 6586 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeCtorInfo_21_21 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1;
#line 6588 "mdb.declarative_analyser.c"
                    {
#line 6590 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6592 "mdb.declarative_analyser.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_22_22, 0) = ((MR_Box) (mdb__declarative_analyser__TypeCtorInfo_21_21));
#line 6594 "mdb.declarative_analyser.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_19));
#line 6596 "mdb.declarative_analyser.c"
                    }
#line 6598 "mdb.declarative_analyser.c"
                    {
#line 6600 "mdb.declarative_analyser.c"
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
#line 6628 "mdb.declarative_analyser.c"
                  {
#line 6630 "mdb.declarative_analyser.c"
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
#line 6656 "mdb.declarative_analyser.c"
                    {
#line 6658 "mdb.declarative_analyser.c"
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
#line 6684 "mdb.declarative_analyser.c"
                      {
#line 6686 "mdb.declarative_analyser.c"
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
#line 6710 "mdb.declarative_analyser.c"
                      {
#line 6712 "mdb.declarative_analyser.c"
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
    if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1350 "declarative_analyser.m"
      mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "top down";
#line 1350 "declarative_analyser.m"
    else
#line 1350 "declarative_analyser.m"
      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1357 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "binary search on path";
#line 1350 "declarative_analyser.m"
      else
#line 1350 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 1350 "declarative_analyser.m"
          {
#line 1350 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));

#line 1350 "declarative_analyser.m"
            if ((mdb__declarative_analyser__V_18_18 == (MR_Integer) 0))
#line 1359 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "divide and query";
#line 1350 "declarative_analyser.m"
            else
#line 1361 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "suspicion divide and query";
#line 1350 "declarative_analyser.m"
          }
#line 1350 "declarative_analyser.m"
        else
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
            if ((mdb__declarative_analyser__V_19_19 == (MR_Integer) 0))
#line 1353 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking marked sub-term (using accurate algorithm)";
#line 1350 "declarative_analyser.m"
            else
#line 1356 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking marked sub-term (using fast algorithm)";
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
    if ((mdb__declarative_analyser__HeadVar__1_1 == (MR_Integer) 0))
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
          return mdb__declarative_analyser__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides the suspect area into two regions of ", mdb__declarative_analyser__V_11_11);
        }
#line 1265 "declarative_analyser.m"
      }
#line 1265 "declarative_analyser.m"
    else
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
          return mdb__declarative_analyser__Str_4 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides the suspect area into ", mdb__declarative_analyser__V_22_22);
        }
#line 1270 "declarative_analyser.m"
      }
#line 1265 "declarative_analyser.m"
    return mdb__declarative_analyser__Str_4;
#line 1265 "declarative_analyser.m"
  }
#line 1263 "declarative_analyser.m"
}

#line 1121 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0_1(
#line 1121 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 1121 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 1121 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 1121 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_3,
#line 1121 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_4,
#line 1121 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_5)
#line 1121 "declarative_analyser.m"
{
#line 1121 "declarative_analyser.m"
  {
#line 1121 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;
#line 1121 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__conv1_HeadVar__5_68;
#line 1121 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__conv0_HeadVar__7_70;

#line 1121 "declarative_analyser.m"
    {
#line 1121 "declarative_analyser.m"
      mdb__declarative_analyser__IntroducedFrom__pred__find_middle_weight__1121__1_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_2), &mdb__declarative_analyser__conv1_HeadVar__5_68, ((MR_Integer) mdb__declarative_analyser__wrapper_arg_4), &mdb__declarative_analyser__conv0_HeadVar__7_70);
    }
#line 1121 "declarative_analyser.m"
    *mdb__declarative_analyser__wrapper_arg_3 = ((MR_Box) (mdb__declarative_analyser__conv1_HeadVar__5_68));
#line 1121 "declarative_analyser.m"
    *mdb__declarative_analyser__wrapper_arg_5 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__7_70));
#line 1121 "declarative_analyser.m"
  }
#line 1121 "declarative_analyser.m"
}

#line 1094 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_9_p_0(
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57,
#line 1094 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_1,
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_2,
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_3,
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__4_4,
#line 1094 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_5,
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_6,
#line 1094 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7,
#line 1094 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8,
#line 1094 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9)
#line 1094 "declarative_analyser.m"
{
#line 1100 "declarative_analyser.m"
  {
#line 1100 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 1100 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1109 "declarative_analyser.m"
      {
#line 1109 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__LastUnknown_17;
#line 1102 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_59_59;
#line 1102 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__PolyConst2_58;

#line 1102 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
#line 1102 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1102 "declarative_analyser.m"
          {
#line 1102 "declarative_analyser.m"
            mdb__declarative_analyser__LastUnknown_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
#line 7016 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__PolyConst2_58 = (MR_Integer) 2;
#line 7018 "mdb.declarative_analyser.c"
            {
#line 7020 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__PolyConst2_58, &mdb__declarative_analyser__TypeInfo_59_59);
            }
#line 1196 "declarative_analyser.m"
            {
#line 1196 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_59_59, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_17);
            }
#line 1102 "declarative_analyser.m"
          }
#line 1109 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1105 "declarative_analyser.m"
          {
#line 1105 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_61_61;
#line 1105 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_62_62;
#line 1105 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_20_20;
#line 1105 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_21_21;
#line 1105 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_22_22;

#line 7045 "mdb.declarative_analyser.c"
            {
#line 7047 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_61_61);
            }
#line 1107 "declarative_analyser.m"
            {
#line 1107 "declarative_analyser.m"
              mdb__declarative_analyser__V_21_21 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_61_61, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__TopId_5);
            }
#line 7055 "mdb.declarative_analyser.c"
            {
#line 7057 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_62_62);
            }
#line 1108 "declarative_analyser.m"
            {
#line 1108 "declarative_analyser.m"
              mdb__declarative_analyser__V_22_22 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_62_62, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_17);
            }
#line 1106 "declarative_analyser.m"
            {
#line 1106 "declarative_analyser.m"
              mdb__declarative_analyser__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1106 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1106 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 1) = ((MR_Box) (mdb__declarative_analyser__V_21_21));
#line 1106 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 2) = ((MR_Box) (mdb__declarative_analyser__V_22_22));
#line 1106 "declarative_analyser.m"
            }
#line 1105 "declarative_analyser.m"
            {
#line 1105 "declarative_analyser.m"
              MR_Word base;
#line 1105 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "declarative_analyser.m"
              *mdb__declarative_analyser__Response_9 = base;
#line 1105 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_17));
#line 1105 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_20_20));
#line 1105 "declarative_analyser.m"
            }
#line 1108 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
#line 1105 "declarative_analyser.m"
          }
#line 1109 "declarative_analyser.m"
        else
#line 1112 "declarative_analyser.m"
          {
#line 1112 "declarative_analyser.m"
            mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
#line 1112 "declarative_analyser.m"
            return;
          }
#line 1109 "declarative_analyser.m"
      }
#line 1100 "declarative_analyser.m"
    else
#line 1115 "declarative_analyser.m"
      {
#line 1115 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_64_64;
#line 1115 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_65_65;
#line 1115 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeCtorInfo_73_73;
#line 1115 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__SuspectId_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__4_4, (MR_Integer) 0)));
#line 1115 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__SuspectIds_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__4_4, (MR_Integer) 1)));
#line 1115 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__TopWeight_33;
#line 1115 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Target_34;
#line 1115 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Weight_35;
#line 1115 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__MaxWeight_36;
#line 1115 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Heaviest_37;
#line 1115 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_44_44;
#line 1121 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__conv3_MaxWeight_36;
#line 1121 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__conv2_Heaviest_37;

#line 7137 "mdb.declarative_analyser.c"
        {
#line 7139 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_64_64);
        }
#line 1116 "declarative_analyser.m"
        {
#line 1116 "declarative_analyser.m"
          mdb__declarative_analyser__TopWeight_33 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_64_64, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__TopId_5);
        }
#line 1117 "declarative_analyser.m"
        {
#line 1117 "declarative_analyser.m"
          mdb__declarative_analyser__Target_34 = mercury__int__f_47_47_2_f_0(mdb__declarative_analyser__TopWeight_33, (MR_Integer) 2);
        }
#line 7152 "mdb.declarative_analyser.c"
        {
#line 7154 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_65_65);
        }
#line 1120 "declarative_analyser.m"
        {
#line 1120 "declarative_analyser.m"
          mdb__declarative_analyser__Weight_35 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_65_65, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__SuspectId_27);
        }
#line 1121 "declarative_analyser.m"
        {
#line 1121 "declarative_analyser.m"
          mdb__declarative_analyser__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1121 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_8[0]));
#line 1121 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 1) = ((MR_Box) (mdb__declarative_analyser__find_middle_weight_9_p_0_1));
#line 1121 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1121 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57));
#line 1121 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_44_44, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7));
#line 1121 "declarative_analyser.m"
        }
#line 7178 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__TypeCtorInfo_73_73 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 1121 "declarative_analyser.m"
        {
#line 1121 "declarative_analyser.m"
          mercury__list__foldl2_6_p_0(mdb__declarative_analyser__TypeCtorInfo_73_73, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_analyser__TypeCtorInfo_73_73, mdb__declarative_analyser__V_44_44, mdb__declarative_analyser__SuspectIds_28, ((MR_Box) (mdb__declarative_analyser__Weight_35)), &mdb__declarative_analyser__conv3_MaxWeight_36, ((MR_Box) (mdb__declarative_analyser__SuspectId_27)), &mdb__declarative_analyser__conv2_Heaviest_37);
        }
#line 1121 "declarative_analyser.m"
        mdb__declarative_analyser__MaxWeight_36 = ((MR_Integer) mdb__declarative_analyser__conv3_MaxWeight_36);
#line 1121 "declarative_analyser.m"
        mdb__declarative_analyser__Heaviest_37 = ((MR_Integer) mdb__declarative_analyser__conv2_Heaviest_37);
#line 1123 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__MaxWeight_36 > mdb__declarative_analyser__Target_34);
#line 1131 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1128 "declarative_analyser.m"
          {
#line 1128 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__NewMaybeLastUnknown_38;
#line 1124 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_75_75;

#line 7200 "mdb.declarative_analyser.c"
            {
#line 7202 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_75_75);
            }
#line 1124 "declarative_analyser.m"
            {
#line 1124 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_75_75, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__Heaviest_37);
            }
#line 1126 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 1125 "declarative_analyser.m"
              {
#line 1125 "declarative_analyser.m"
                mdb__declarative_analyser__NewMaybeLastUnknown_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1125 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_analyser__NewMaybeLastUnknown_38, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
#line 1125 "declarative_analyser.m"
              }
#line 1126 "declarative_analyser.m"
            else
#line 1127 "declarative_analyser.m"
              mdb__declarative_analyser__NewMaybeLastUnknown_38 = mdb__declarative_analyser__MaybeLastUnknown_6;
#line 1129 "declarative_analyser.m"
            {
#line 1129 "declarative_analyser.m"
              mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__Weighting_3, mdb__declarative_analyser__Heaviest_37, mdb__declarative_analyser__TopId_5, mdb__declarative_analyser__NewMaybeLastUnknown_38, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
#line 1129 "declarative_analyser.m"
              return;
            }
#line 1128 "declarative_analyser.m"
          }
#line 1131 "declarative_analyser.m"
        else
#line 1155 "declarative_analyser.m"
          {
#line 1132 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_76_76;

#line 7240 "mdb.declarative_analyser.c"
            {
#line 7242 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_76_76);
            }
#line 1132 "declarative_analyser.m"
            {
#line 1132 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_76_76, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__Heaviest_37);
            }
#line 1155 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 1150 "declarative_analyser.m"
              {
#line 1150 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__LastUnknown_39;
#line 1134 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_77_77;

#line 1134 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
#line 1134 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1134 "declarative_analyser.m"
                  {
#line 1134 "declarative_analyser.m"
                    mdb__declarative_analyser__LastUnknown_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
#line 7267 "mdb.declarative_analyser.c"
                    {
#line 7269 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_77_77);
                    }
#line 1196 "declarative_analyser.m"
                    {
#line 1196 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_77_77, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_39);
                    }
#line 1134 "declarative_analyser.m"
                  }
#line 1150 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1137 "declarative_analyser.m"
                  {
#line 1137 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_78_78;
#line 1137 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__LastUnknownWeight_40;
#line 1141 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_46_46;
#line 1141 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_47_47;

#line 7292 "mdb.declarative_analyser.c"
                    {
#line 7294 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_78_78);
                    }
#line 1137 "declarative_analyser.m"
                    {
#line 1137 "declarative_analyser.m"
                      mdb__declarative_analyser__LastUnknownWeight_40 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_39);
                    }
#line 1141 "declarative_analyser.m"
                    mdb__declarative_analyser__V_46_46 = (mdb__declarative_analyser__LastUnknownWeight_40 - mdb__declarative_analyser__Target_34);
#line 1141 "declarative_analyser.m"
                    mdb__declarative_analyser__V_47_47 = (mdb__declarative_analyser__Target_34 - mdb__declarative_analyser__MaxWeight_36);
#line 1141 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_46_46 < mdb__declarative_analyser__V_47_47);
#line 1145 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 1142 "declarative_analyser.m"
                      {
#line 1142 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_48_48;

#line 1143 "declarative_analyser.m"
                        {
#line 1143 "declarative_analyser.m"
                          mdb__declarative_analyser__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1143 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1143 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1143 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 2) = ((MR_Box) (mdb__declarative_analyser__LastUnknownWeight_40));
#line 1143 "declarative_analyser.m"
                        }
#line 1142 "declarative_analyser.m"
                        {
#line 1142 "declarative_analyser.m"
                          MR_Word base;
#line 1142 "declarative_analyser.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = base;
#line 1142 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_39));
#line 1142 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_48_48));
#line 1142 "declarative_analyser.m"
                        }
#line 1142 "declarative_analyser.m"
                      }
#line 1145 "declarative_analyser.m"
                    else
#line 1146 "declarative_analyser.m"
                      {
#line 1146 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_49_49;

#line 1147 "declarative_analyser.m"
                        {
#line 1147 "declarative_analyser.m"
                          mdb__declarative_analyser__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1147 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1147 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1147 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 2) = ((MR_Box) (mdb__declarative_analyser__MaxWeight_36));
#line 1147 "declarative_analyser.m"
                        }
#line 1146 "declarative_analyser.m"
                        {
#line 1146 "declarative_analyser.m"
                          MR_Word base;
#line 1146 "declarative_analyser.m"
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = base;
#line 1146 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
#line 1146 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 1146 "declarative_analyser.m"
                        }
#line 1146 "declarative_analyser.m"
                      }
#line 1137 "declarative_analyser.m"
                  }
#line 1150 "declarative_analyser.m"
                else
#line 1151 "declarative_analyser.m"
                  {
#line 1151 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_50_50;

#line 1152 "declarative_analyser.m"
                    {
#line 1152 "declarative_analyser.m"
                      mdb__declarative_analyser__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1152 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1152 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1152 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 2) = ((MR_Box) (mdb__declarative_analyser__MaxWeight_36));
#line 1152 "declarative_analyser.m"
                    }
#line 1151 "declarative_analyser.m"
                    {
#line 1151 "declarative_analyser.m"
                      MR_Word base;
#line 1151 "declarative_analyser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "declarative_analyser.m"
                      *mdb__declarative_analyser__Response_9 = base;
#line 1151 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Heaviest_37));
#line 1151 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 1151 "declarative_analyser.m"
                    }
#line 1151 "declarative_analyser.m"
                  }
#line 1152 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
#line 1150 "declarative_analyser.m"
              }
#line 1155 "declarative_analyser.m"
            else
#line 1164 "declarative_analyser.m"
              {
#line 1164 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__LastUnknown_55;
#line 1157 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_79_79;

#line 1157 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastUnknown_6)) == (MR_mktag((MR_Integer) 1)));
#line 1157 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1157 "declarative_analyser.m"
                  {
#line 1157 "declarative_analyser.m"
                    mdb__declarative_analyser__LastUnknown_55 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastUnknown_6, (MR_Integer) 0)));
#line 7436 "mdb.declarative_analyser.c"
                    {
#line 7438 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_79_79);
                    }
#line 1196 "declarative_analyser.m"
                    {
#line 1196 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_79_79, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_55);
                    }
#line 1157 "declarative_analyser.m"
                  }
#line 1164 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1160 "declarative_analyser.m"
                  {
#line 1160 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_80_80;
#line 1160 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_51_51;
#line 1160 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__LastUnknownWeight_54;

#line 7459 "mdb.declarative_analyser.c"
                    {
#line 7461 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
                    }
#line 1160 "declarative_analyser.m"
                    {
#line 1160 "declarative_analyser.m"
                      mdb__declarative_analyser__LastUnknownWeight_54 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_55);
                    }
#line 1162 "declarative_analyser.m"
                    {
#line 1162 "declarative_analyser.m"
                      mdb__declarative_analyser__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1162 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1162 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1162 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 2) = ((MR_Box) (mdb__declarative_analyser__LastUnknownWeight_54));
#line 1162 "declarative_analyser.m"
                    }
#line 1161 "declarative_analyser.m"
                    {
#line 1161 "declarative_analyser.m"
                      MR_Word base;
#line 1161 "declarative_analyser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "declarative_analyser.m"
                      *mdb__declarative_analyser__Response_9 = base;
#line 1161 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_55));
#line 1161 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 1161 "declarative_analyser.m"
                    }
#line 1162 "declarative_analyser.m"
                    *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7;
#line 1160 "declarative_analyser.m"
                  }
#line 1164 "declarative_analyser.m"
                else
#line 1166 "declarative_analyser.m"
                  {
#line 1166 "declarative_analyser.m"
                    {
#line 1166 "declarative_analyser.m"
                      mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, mdb__declarative_analyser__Store_1, mdb__declarative_analyser__Oracle_2, mdb__declarative_analyser__Weighting_3, mdb__declarative_analyser__Heaviest_37, mdb__declarative_analyser__TopId_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_8, mdb__declarative_analyser__Response_9);
#line 1166 "declarative_analyser.m"
                      return;
                    }
#line 1166 "declarative_analyser.m"
                  }
#line 1164 "declarative_analyser.m"
              }
#line 1155 "declarative_analyser.m"
          }
#line 1115 "declarative_analyser.m"
      }
#line 1100 "declarative_analyser.m"
  }
#line 1094 "declarative_analyser.m"
}

#line 1070 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__find_middle_weight_if_children_9_p_0(
#line 1070 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23,
#line 1070 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_10,
#line 1070 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_11,
#line 1070 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Weighting_12,
#line 1070 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_13,
#line 1070 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__TopId_14,
#line 1070 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__MaybeLastUnknown_15,
#line 1070 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19,
#line 1070 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20,
#line 1070 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_17)
#line 1070 "declarative_analyser.m"
{
#line 1081 "declarative_analyser.m"
  {
#line 1081 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1081 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__Children_18;
#line 1081 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21;

#line 1078 "declarative_analyser.m"
    {
#line 1078 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23, mdb__declarative_analyser__Store_10, mdb__declarative_analyser__Oracle_11, mdb__declarative_analyser__SuspectId_13, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21, &mdb__declarative_analyser__Children_18);
    }
#line 1081 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 1079 "declarative_analyser.m"
      {
#line 1079 "declarative_analyser.m"
        mdb__declarative_analyser__find_middle_weight_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_23, mdb__declarative_analyser__Store_10, mdb__declarative_analyser__Oracle_11, mdb__declarative_analyser__Weighting_12, mdb__declarative_analyser__Children_18, mdb__declarative_analyser__TopId_14, mdb__declarative_analyser__MaybeLastUnknown_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_21_21, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20, mdb__declarative_analyser__Response_17);
#line 1079 "declarative_analyser.m"
        return;
      }
#line 1081 "declarative_analyser.m"
    else
#line 1082 "declarative_analyser.m"
      {
#line 1082 "declarative_analyser.m"
        {
#line 1082 "declarative_analyser.m"
          MR_Word base;
#line 1082 "declarative_analyser.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1082 "declarative_analyser.m"
          *mdb__declarative_analyser__Response_17 = base;
#line 1082 "declarative_analyser.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_13));
#line 1082 "declarative_analyser.m"
        }
#line 1082 "declarative_analyser.m"
        *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_20 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_19;
#line 1082 "declarative_analyser.m"
      }
#line 1081 "declarative_analyser.m"
  }
#line 1070 "declarative_analyser.m"
}

#line 1024 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(
#line 1024 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeInfo_for_T_21,
#line 1024 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 1024 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_9,
#line 1024 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterTop_10,
#line 1024 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__OuterBottom_11,
#line 1024 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerTop_12,
#line 1024 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__InnerBottom_13,
#line 1024 "declarative_analyser.m"
  MR_Integer * mdb__declarative_analyser__Unknown_14)
#line 1024 "declarative_analyser.m"
{
#line 1029 "declarative_analyser.m"
  while (MR_TRUE)
#line 1029 "declarative_analyser.m"
    {
#line 1029 "declarative_analyser.m"
      /* tailcall optimized into a loop */
#line 1029 "declarative_analyser.m"
      {
#line 1029 "declarative_analyser.m"
        MR_bool mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerTop_12 <= mdb__declarative_analyser__InnerBottom_13);
#line 1033 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeCtorInfo_22_22;
#line 1033 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_15_15;
#line 1034 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__conv0_V_15_15;

#line 1029 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1029 "declarative_analyser.m"
          {
#line 1031 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__OuterTop_10 <= mdb__declarative_analyser__InnerTop_12);
#line 1031 "declarative_analyser.m"
            if (!(mdb__declarative_analyser__succeeded))
#line 1031 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerBottom_13 <= mdb__declarative_analyser__OuterBottom_11);
#line 1029 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 1029 "declarative_analyser.m"
              {
#line 1033 "declarative_analyser.m"
                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__OuterTop_10 <= mdb__declarative_analyser__InnerTop_12);
#line 1033 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1033 "declarative_analyser.m"
                  {
#line 7654 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 1034 "declarative_analyser.m"
                    {
#line 1034 "declarative_analyser.m"
                      mdb__declarative_analyser__conv0_V_15_15 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_22_22, mdb__declarative_analyser__InnerTop_12, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_9);
                    }
#line 1034 "declarative_analyser.m"
                    mdb__declarative_analyser__V_15_15 = ((MR_Integer) mdb__declarative_analyser__conv0_V_15_15);
#line 1034 "declarative_analyser.m"
                    {
#line 1034 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_21, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__V_15_15);
                    }
#line 1033 "declarative_analyser.m"
                  }
#line 1037 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1036 "declarative_analyser.m"
                  {
#line 1036 "declarative_analyser.m"
                    *mdb__declarative_analyser__Unknown_14 = mdb__declarative_analyser__InnerTop_12;
#line 1036 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = MR_TRUE;
#line 1036 "declarative_analyser.m"
                  }
#line 1037 "declarative_analyser.m"
                else
#line 1042 "declarative_analyser.m"
                  {
#line 1038 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeCtorInfo_23_23;
#line 1038 "declarative_analyser.m"
                    MR_Integer mdb__declarative_analyser__V_16_16;
#line 1039 "declarative_analyser.m"
                    MR_Box mdb__declarative_analyser__conv1_V_16_16;

#line 1038 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__InnerBottom_13 <= mdb__declarative_analyser__OuterBottom_11);
#line 1038 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 1038 "declarative_analyser.m"
                      {
#line 7697 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeCtorInfo_23_23 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 1039 "declarative_analyser.m"
                        {
#line 1039 "declarative_analyser.m"
                          mdb__declarative_analyser__conv1_V_16_16 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_23_23, mdb__declarative_analyser__InnerBottom_13, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_9);
                        }
#line 1039 "declarative_analyser.m"
                        mdb__declarative_analyser__V_16_16 = ((MR_Integer) mdb__declarative_analyser__conv1_V_16_16);
#line 1039 "declarative_analyser.m"
                        {
#line 1039 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_for_T_21, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__V_16_16);
                        }
#line 1038 "declarative_analyser.m"
                      }
#line 1042 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 1041 "declarative_analyser.m"
                      {
#line 1041 "declarative_analyser.m"
                        *mdb__declarative_analyser__Unknown_14 = mdb__declarative_analyser__InnerBottom_13;
#line 1041 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = MR_TRUE;
#line 1041 "declarative_analyser.m"
                      }
#line 1042 "declarative_analyser.m"
                    else
#line 1043 "declarative_analyser.m"
                      {
#line 1043 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_17_17 = (mdb__declarative_analyser__InnerTop_12 - (MR_Integer) 1);
#line 1043 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__V_18_18 = (mdb__declarative_analyser__InnerBottom_13 + (MR_Integer) 1);

#line 1043 "declarative_analyser.m"
                        /* direct tailcall eliminated */
#line 1043 "declarative_analyser.m"
                        {
#line 1043 "declarative_analyser.m"
                          MR_Integer mdb__declarative_analyser__InnerTop__tmp_copy_12 = mdb__declarative_analyser__V_17_17;
#line 1043 "declarative_analyser.m"
                          MR_Integer mdb__declarative_analyser__InnerBottom__tmp_copy_13 = mdb__declarative_analyser__V_18_18;

#line 1043 "declarative_analyser.m"
                          mdb__declarative_analyser__InnerBottom_13 = mdb__declarative_analyser__InnerBottom__tmp_copy_13;
#line 1043 "declarative_analyser.m"
                          mdb__declarative_analyser__InnerTop_12 = mdb__declarative_analyser__InnerTop__tmp_copy_12;
#line 1043 "declarative_analyser.m"
                        }
#line 1043 "declarative_analyser.m"
                        continue;
#line 1043 "declarative_analyser.m"
                      }
#line 1042 "declarative_analyser.m"
                  }
#line 1029 "declarative_analyser.m"
              }
#line 1029 "declarative_analyser.m"
          }
#line 1029 "declarative_analyser.m"
        return mdb__declarative_analyser__succeeded;
#line 1029 "declarative_analyser.m"
      }
#line 1029 "declarative_analyser.m"
      break;
#line 1029 "declarative_analyser.m"
    }
#line 1024 "declarative_analyser.m"
}

#line 946 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__binary_search_11_p_0(
#line 946 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37,
#line 946 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_12,
#line 946 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_13,
#line 946 "declarative_analyser.m"
  MR_ArrayPtr mdb__declarative_analyser__PathArray_14,
#line 946 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Top_15,
#line 946 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__Bottom_16,
#line 946 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__LastTested_17,
#line 946 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 946 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 946 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_19,
#line 946 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_20,
#line 946 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_21)
#line 946 "declarative_analyser.m"
{
#line 952 "declarative_analyser.m"
  {
#line 952 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 952 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeCtorInfo_38_38 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 952 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__SuspectId_22;
#line 952 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__NewTop_23;
#line 952 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__NewBottom_24;
#line 953 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__conv0_SuspectId_22;
#line 959 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_40_40;

#line 953 "declarative_analyser.m"
    {
#line 953 "declarative_analyser.m"
      mdb__declarative_analyser__conv0_SuspectId_22 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_38_38, mdb__declarative_analyser__LastTested_17, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_14);
    }
#line 953 "declarative_analyser.m"
    mdb__declarative_analyser__SuspectId_22 = ((MR_Integer) mdb__declarative_analyser__conv0_SuspectId_22);
#line 7821 "mdb.declarative_analyser.c"
    {
#line 7823 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_40_40);
    }
#line 959 "declarative_analyser.m"
    {
#line 959 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_in_excluded_complement_2_p_0(mdb__declarative_analyser__TypeInfo_40_40, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__SuspectId_22);
    }
#line 963 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 961 "declarative_analyser.m"
      {
#line 961 "declarative_analyser.m"
        mdb__declarative_analyser__NewTop_23 = (mdb__declarative_analyser__LastTested_17 + (MR_Integer) 1);
#line 962 "declarative_analyser.m"
        mdb__declarative_analyser__NewBottom_24 = mdb__declarative_analyser__Bottom_16;
#line 961 "declarative_analyser.m"
      }
#line 963 "declarative_analyser.m"
    else
#line 969 "declarative_analyser.m"
      {
#line 965 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_42_42;

#line 7848 "mdb.declarative_analyser.c"
        {
#line 7850 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_42_42);
        }
#line 965 "declarative_analyser.m"
        {
#line 965 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_in_excluded_subtree_2_p_0(mdb__declarative_analyser__TypeInfo_42_42, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__SuspectId_22);
        }
#line 969 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 967 "declarative_analyser.m"
          {
#line 967 "declarative_analyser.m"
            mdb__declarative_analyser__NewTop_23 = mdb__declarative_analyser__Top_15;
#line 968 "declarative_analyser.m"
            mdb__declarative_analyser__NewBottom_24 = (mdb__declarative_analyser__LastTested_17 - (MR_Integer) 1);
#line 967 "declarative_analyser.m"
          }
#line 969 "declarative_analyser.m"
        else
#line 971 "declarative_analyser.m"
          {
#line 971 "declarative_analyser.m"
            mdb__declarative_analyser__NewTop_23 = mdb__declarative_analyser__Top_15;
#line 972 "declarative_analyser.m"
            mdb__declarative_analyser__NewBottom_24 = mdb__declarative_analyser__Bottom_16;
#line 971 "declarative_analyser.m"
          }
#line 969 "declarative_analyser.m"
      }
#line 975 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__NewTop_23 > mdb__declarative_analyser__NewBottom_24);
#line 980 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 978 "declarative_analyser.m"
      {
#line 978 "declarative_analyser.m"
        mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, mdb__declarative_analyser__Store_12, mdb__declarative_analyser__Oracle_13, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__NewMode_20, mdb__declarative_analyser__Response_21);
#line 978 "declarative_analyser.m"
        return;
      }
#line 980 "declarative_analyser.m"
    else
#line 990 "declarative_analyser.m"
      {
#line 990 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__UnknownClosestToMiddle_25;
#line 982 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_44_44;
#line 982 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Middle_50;
#line 982 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_51_51;
#line 982 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__V_52_52;

#line 7906 "mdb.declarative_analyser.c"
        {
#line 7908 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_44_44);
        }
#line 1010 "declarative_analyser.m"
        mdb__declarative_analyser__V_52_52 = (mdb__declarative_analyser__NewBottom_24 - mdb__declarative_analyser__NewTop_23);
#line 1010 "declarative_analyser.m"
        {
#line 1010 "declarative_analyser.m"
          mdb__declarative_analyser__V_51_51 = mercury__int__f_47_47_2_f_0(mdb__declarative_analyser__V_52_52, (MR_Integer) 2);
        }
#line 1010 "declarative_analyser.m"
        mdb__declarative_analyser__Middle_50 = (mdb__declarative_analyser__NewTop_23 + mdb__declarative_analyser__V_51_51);
#line 1011 "declarative_analyser.m"
        {
#line 1011 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_analyser__find_unknown_closest_to_range_7_p_0(mdb__declarative_analyser__TypeInfo_44_44, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__PathArray_14, mdb__declarative_analyser__NewTop_23, mdb__declarative_analyser__NewBottom_24, mdb__declarative_analyser__Middle_50, mdb__declarative_analyser__Middle_50, &mdb__declarative_analyser__UnknownClosestToMiddle_25);
        }
#line 990 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 986 "declarative_analyser.m"
          {
#line 986 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_32_32;
#line 986 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_33_33;
#line 986 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_34_34;
#line 987 "declarative_analyser.m"
            MR_Box mdb__declarative_analyser__conv1_V_33_33;

#line 985 "declarative_analyser.m"
            {
#line 985 "declarative_analyser.m"
              mdb__declarative_analyser__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 985 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 0) = ((MR_Box) (mdb__declarative_analyser__NewTop_23));
#line 985 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__NewBottom_24));
#line 985 "declarative_analyser.m"
            }
#line 985 "declarative_analyser.m"
            {
#line 985 "declarative_analyser.m"
              MR_Word base;
#line 985 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 985 "declarative_analyser.m"
              *mdb__declarative_analyser__NewMode_20 = base;
#line 985 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__PathArray_14));
#line 985 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_32_32));
#line 985 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_analyser__UnknownClosestToMiddle_25));
#line 985 "declarative_analyser.m"
            }
#line 987 "declarative_analyser.m"
            {
#line 987 "declarative_analyser.m"
              mdb__declarative_analyser__conv1_V_33_33 = mercury__array__elem_2_f_0(mdb__declarative_analyser__TypeCtorInfo_38_38, mdb__declarative_analyser__UnknownClosestToMiddle_25, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_14);
            }
#line 987 "declarative_analyser.m"
            mdb__declarative_analyser__V_33_33 = ((MR_Integer) mdb__declarative_analyser__conv1_V_33_33);
#line 989 "declarative_analyser.m"
            {
#line 989 "declarative_analyser.m"
              mdb__declarative_analyser__V_34_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 989 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), mdb__declarative_analyser__V_34_34, 0) = ((MR_Box) (mdb__declarative_analyser__NewBottom_24));
#line 989 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), mdb__declarative_analyser__V_34_34, 1) = ((MR_Box) (mdb__declarative_analyser__NewTop_23));
#line 989 "declarative_analyser.m"
              MR_hl_field(MR_mktag(2), mdb__declarative_analyser__V_34_34, 2) = ((MR_Box) (mdb__declarative_analyser__UnknownClosestToMiddle_25));
#line 989 "declarative_analyser.m"
            }
#line 987 "declarative_analyser.m"
            {
#line 987 "declarative_analyser.m"
              MR_Word base;
#line 987 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 987 "declarative_analyser.m"
              *mdb__declarative_analyser__Response_21 = base;
#line 987 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_33_33));
#line 987 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_34_34));
#line 987 "declarative_analyser.m"
            }
#line 989 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26;
#line 986 "declarative_analyser.m"
          }
#line 990 "declarative_analyser.m"
        else
#line 993 "declarative_analyser.m"
          {
#line 993 "declarative_analyser.m"
            mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_37, mdb__declarative_analyser__Store_12, mdb__declarative_analyser__Oracle_13, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__FallBackSearchMode_19, mdb__declarative_analyser__NewMode_20, mdb__declarative_analyser__Response_21);
#line 993 "declarative_analyser.m"
            return;
          }
#line 990 "declarative_analyser.m"
      }
#line 952 "declarative_analyser.m"
  }
#line 946 "declarative_analyser.m"
}

#line 787 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70,
#line 787 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_15,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_16,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44,
#line 787 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_18,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46,
#line 787 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_20,
#line 787 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_21,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_22,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_23,
#line 787 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_24,
#line 787 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_25,
#line 787 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_26)
#line 787 "declarative_analyser.m"
{
#line 796 "declarative_analyser.m"
  while (MR_TRUE)
#line 796 "declarative_analyser.m"
    {
#line 796 "declarative_analyser.m"
      /* tailcall optimized into a loop */
#line 796 "declarative_analyser.m"
      {
#line 796 "declarative_analyser.m"
        MR_bool mdb__declarative_analyser__succeeded;
#line 796 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__FindOriginResponse_27;
#line 796 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 796 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;

#line 797 "declarative_analyser.m"
        {
#line 797 "declarative_analyser.m"
          mdb__declarative_edt__find_subterm_origin_11_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__SuspectId_21, mdb__declarative_analyser__ArgPos_22, mdb__declarative_analyser__TermPath_23, mdb__declarative_analyser__HowTrack_18, mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46, &mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, &mdb__declarative_analyser__FindOriginResponse_27);
        }
#line 847 "declarative_analyser.m"
        if ((mdb__declarative_analyser__FindOriginResponse_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 848 "declarative_analyser.m"
          {
#line 856 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__Unknown_64;
#line 850 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_80_80;
#line 850 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__PolyConst2_79;

#line 850 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
#line 850 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 850 "declarative_analyser.m"
              {
#line 850 "declarative_analyser.m"
                mdb__declarative_analyser__Unknown_64 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
#line 8093 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__PolyConst2_79 = (MR_Integer) 2;
#line 8095 "mdb.declarative_analyser.c"
                {
#line 8097 "mdb.declarative_analyser.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_79, &mdb__declarative_analyser__TypeInfo_80_80);
                }
#line 1196 "declarative_analyser.m"
                {
#line 1196 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_64);
                }
#line 850 "declarative_analyser.m"
              }
#line 856 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 854 "declarative_analyser.m"
              {
#line 853 "declarative_analyser.m"
                {
#line 853 "declarative_analyser.m"
                  MR_Word base;
#line 853 "declarative_analyser.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 853 "declarative_analyser.m"
                  *mdb__declarative_analyser__SearchResponse_26 = base;
#line 853 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_64));
#line 853 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 853 "declarative_analyser.m"
                }
#line 855 "declarative_analyser.m"
                *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 855 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 854 "declarative_analyser.m"
              }
#line 856 "declarative_analyser.m"
            else
#line 857 "declarative_analyser.m"
              {
#line 857 "declarative_analyser.m"
                mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
              }
#line 857 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 848 "declarative_analyser.m"
          }
#line 847 "declarative_analyser.m"
        else
#line 847 "declarative_analyser.m"
          if ((mdb__declarative_analyser__FindOriginResponse_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 862 "declarative_analyser.m"
            {
#line 863 "declarative_analyser.m"
              {
#line 863 "declarative_analyser.m"
                MR_Word base;
#line 863 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 863 "declarative_analyser.m"
                *mdb__declarative_analyser__SearchResponse_26 = base;
#line 863 "declarative_analyser.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
#line 863 "declarative_analyser.m"
              }
#line 867 "declarative_analyser.m"
              {
#line 867 "declarative_analyser.m"
                MR_Word base;
#line 867 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 867 "declarative_analyser.m"
                *mdb__declarative_analyser__NewMode_25 = base;
#line 867 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
#line 867 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_22));
#line 867 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
#line 867 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_20));
#line 867 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_18));
#line 867 "declarative_analyser.m"
              }
#line 867 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 867 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 862 "declarative_analyser.m"
            }
#line 847 "declarative_analyser.m"
          else
#line 847 "declarative_analyser.m"
            if ((mdb__declarative_analyser__FindOriginResponse_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 870 "declarative_analyser.m"
              {
#line 871 "declarative_analyser.m"
                *mdb__declarative_analyser__SearchResponse_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 872 "declarative_analyser.m"
                {
#line 872 "declarative_analyser.m"
                  MR_Word base;
#line 872 "declarative_analyser.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 872 "declarative_analyser.m"
                  *mdb__declarative_analyser__NewMode_25 = base;
#line 872 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_21));
#line 872 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_22));
#line 872 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
#line 872 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mdb__declarative_analyser__LastUnknown_20));
#line 872 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_18));
#line 872 "declarative_analyser.m"
                }
#line 872 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 872 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 870 "declarative_analyser.m"
              }
#line 847 "declarative_analyser.m"
            else
#line 847 "declarative_analyser.m"
              if (((MR_tag((MR_Word) mdb__declarative_analyser__FindOriginResponse_27)) == (MR_mktag((MR_Integer) 1))))
#line 876 "declarative_analyser.m"
                {
#line 876 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__OriginId_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 0)));
#line 876 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__OriginArgPos_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 1)));
#line 876 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__OriginTermPath_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 2)));
#line 876 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__SubtermMode_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)));
#line 876 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__NewLastUnknown_43;
#line 878 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_82_82;
#line 891 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_84_84;

#line 8241 "mdb.declarative_analyser.c"
                  {
#line 8243 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_82_82);
                  }
#line 878 "declarative_analyser.m"
                  {
#line 878 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_82_82, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__OriginId_39);
                  }
#line 881 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 880 "declarative_analyser.m"
                    {
#line 880 "declarative_analyser.m"
                      mdb__declarative_analyser__NewLastUnknown_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 880 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_analyser__NewLastUnknown_43, 0) = ((MR_Box) (mdb__declarative_analyser__OriginId_39));
#line 880 "declarative_analyser.m"
                    }
#line 881 "declarative_analyser.m"
                  else
#line 882 "declarative_analyser.m"
                    mdb__declarative_analyser__NewLastUnknown_43 = mdb__declarative_analyser__LastUnknown_20;
#line 8265 "mdb.declarative_analyser.c"
                  {
#line 8267 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_84_84);
                  }
#line 891 "declarative_analyser.m"
                  {
#line 891 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__give_up_subterm_tracking_3_p_0(mdb__declarative_analyser__TypeInfo_84_84, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__OriginId_39, mdb__declarative_analyser__SubtermMode_42);
                  }
#line 905 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 900 "declarative_analyser.m"
                    {
#line 900 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__Unknown_66;
#line 894 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_86_86;
#line 894 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__PolyConst2_85;

#line 894 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
#line 894 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 894 "declarative_analyser.m"
                        {
#line 894 "declarative_analyser.m"
                          mdb__declarative_analyser__Unknown_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
#line 8294 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__PolyConst2_85 = (MR_Integer) 2;
#line 8296 "mdb.declarative_analyser.c"
                          {
#line 8298 "mdb.declarative_analyser.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_85, &mdb__declarative_analyser__TypeInfo_86_86);
                          }
#line 1196 "declarative_analyser.m"
                          {
#line 1196 "declarative_analyser.m"
                            mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_86_86, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_66);
                          }
#line 894 "declarative_analyser.m"
                        }
#line 900 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 898 "declarative_analyser.m"
                        {
#line 897 "declarative_analyser.m"
                          {
#line 897 "declarative_analyser.m"
                            MR_Word base;
#line 897 "declarative_analyser.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 897 "declarative_analyser.m"
                            *mdb__declarative_analyser__SearchResponse_26 = base;
#line 897 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_66));
#line 897 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 897 "declarative_analyser.m"
                          }
#line 899 "declarative_analyser.m"
                          *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 899 "declarative_analyser.m"
                          *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 898 "declarative_analyser.m"
                        }
#line 900 "declarative_analyser.m"
                      else
#line 901 "declarative_analyser.m"
                        {
#line 901 "declarative_analyser.m"
                          mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
                        }
#line 901 "declarative_analyser.m"
                      *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 900 "declarative_analyser.m"
                    }
#line 905 "declarative_analyser.m"
                  else
#line 912 "declarative_analyser.m"
                    {
#line 912 "declarative_analyser.m"
                      /* direct tailcall eliminated */
#line 912 "declarative_analyser.m"
                      {
#line 912 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_44 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 912 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0__tmp_copy_46 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 912 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__LastUnknown__tmp_copy_20 = mdb__declarative_analyser__NewLastUnknown_43;
#line 912 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__SuspectId__tmp_copy_21 = mdb__declarative_analyser__OriginId_39;
#line 912 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__ArgPos__tmp_copy_22 = mdb__declarative_analyser__OriginArgPos_40;
#line 912 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__TermPath__tmp_copy_23 = mdb__declarative_analyser__OriginTermPath_41;

#line 912 "declarative_analyser.m"
                        mdb__declarative_analyser__TermPath_23 = mdb__declarative_analyser__TermPath__tmp_copy_23;
#line 912 "declarative_analyser.m"
                        mdb__declarative_analyser__ArgPos_22 = mdb__declarative_analyser__ArgPos__tmp_copy_22;
#line 912 "declarative_analyser.m"
                        mdb__declarative_analyser__SuspectId_21 = mdb__declarative_analyser__SuspectId__tmp_copy_21;
#line 912 "declarative_analyser.m"
                        mdb__declarative_analyser__LastUnknown_20 = mdb__declarative_analyser__LastUnknown__tmp_copy_20;
#line 912 "declarative_analyser.m"
                        mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0_46 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_0__tmp_copy_46;
#line 912 "declarative_analyser.m"
                        mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_44 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_44;
#line 912 "declarative_analyser.m"
                      }
#line 912 "declarative_analyser.m"
                      continue;
#line 912 "declarative_analyser.m"
                    }
#line 876 "declarative_analyser.m"
                }
#line 847 "declarative_analyser.m"
              else
#line 801 "declarative_analyser.m"
                {
#line 801 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__BindingSuspectId_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 0)));
#line 801 "declarative_analyser.m"
                  MR_String mdb__declarative_analyser__FileName_29 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 1)));
#line 801 "declarative_analyser.m"
                  MR_Integer mdb__declarative_analyser__LineNo_30 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 2)));
#line 801 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__PrimOpType_31 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 801 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__Output_32 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__FindOriginResponse_27, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 801 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__ProcLabel_33;
#line 801 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__MaybePath_36;

#line 802 "declarative_analyser.m"
                  {
#line 802 "declarative_analyser.m"
                    mdb__declarative_analyser__ProcLabel_33 = mdb__declarative_edt__get_proc_label_for_suspect_3_f_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
                  }
#line 811 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__Output_32 == (MR_Integer) 0))
#line 817 "declarative_analyser.m"
                    mdb__declarative_analyser__MaybePath_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 811 "declarative_analyser.m"
                  else
#line 805 "declarative_analyser.m"
                    {
#line 805 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_72_72;
#line 805 "declarative_analyser.m"
                      MR_Box mdb__declarative_analyser__BindingNode_34;
#line 805 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__ArgNum_35;
#line 805 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_58_58;
#line 8424 "mdb.declarative_analyser.c"
                      MR_Box MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8426 "mdb.declarative_analyser.c"
                      MR_Box mdb__declarative_analyser__conv1_ArgNum_35;

#line 8429 "mdb.declarative_analyser.c"
                      {
#line 8431 "mdb.declarative_analyser.c"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_72_72);
                      }
#line 808 "declarative_analyser.m"
                      {
#line 808 "declarative_analyser.m"
                        mdb__declarative_analyser__BindingNode_34 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_72_72, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__SuspectId_21);
                      }
#line 8439 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 0)), (MR_Integer) 19)));
#line 8441 "mdb.declarative_analyser.c"
                      {
#line 8443 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__conv1_ArgNum_35 = mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70), mdb__declarative_analyser__Store_15, mdb__declarative_analyser__BindingNode_34, ((MR_Box) (mdb__declarative_analyser__ArgPos_22)));
                      }
#line 8446 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__ArgNum_35 = ((MR_Integer) mdb__declarative_analyser__conv1_ArgNum_35);
#line 810 "declarative_analyser.m"
                      {
#line 810 "declarative_analyser.m"
                        mdb__declarative_analyser__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 810 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_58_58, 0) = ((MR_Box) (mdb__declarative_analyser__ArgNum_35));
#line 810 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_58_58, 1) = ((MR_Box) (mdb__declarative_analyser__TermPath_23));
#line 810 "declarative_analyser.m"
                      }
#line 810 "declarative_analyser.m"
                      {
#line 810 "declarative_analyser.m"
                        mdb__declarative_analyser__MaybePath_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 810 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybePath_36, 0) = ((MR_Box) (mdb__declarative_analyser__V_58_58));
#line 810 "declarative_analyser.m"
                      }
#line 805 "declarative_analyser.m"
                    }
#line 824 "declarative_analyser.m"
                  {
#line 824 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_74_74;

#line 8473 "mdb.declarative_analyser.c"
                    {
#line 8475 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_74_74);
                    }
#line 824 "declarative_analyser.m"
                    {
#line 824 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_74_74, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
                    }
#line 824 "declarative_analyser.m"
                  }
#line 825 "declarative_analyser.m"
                  if (!(mdb__declarative_analyser__succeeded))
#line 825 "declarative_analyser.m"
                    {
#line 825 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_76_76;

#line 8492 "mdb.declarative_analyser.c"
                      {
#line 8494 "mdb.declarative_analyser.c"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_76_76);
                      }
#line 825 "declarative_analyser.m"
                      {
#line 825 "declarative_analyser.m"
                        mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_skipped_2_p_0(mdb__declarative_analyser__TypeInfo_76_76, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__BindingSuspectId_28);
                      }
#line 825 "declarative_analyser.m"
                    }
#line 832 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 830 "declarative_analyser.m"
                    {
#line 830 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__V_59_59;

#line 829 "declarative_analyser.m"
                      {
#line 829 "declarative_analyser.m"
                        mdb__declarative_analyser__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 829 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 0) = ((MR_Box) (mdb__declarative_analyser__PrimOpType_31));
#line 829 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 1) = ((MR_Box) (mdb__declarative_analyser__FileName_29));
#line 829 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 2) = ((MR_Box) (mdb__declarative_analyser__LineNo_30));
#line 829 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 3) = ((MR_Box) (mdb__declarative_analyser__MaybePath_36));
#line 829 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 4) = ((MR_Box) (mdb__declarative_analyser__ProcLabel_33));
#line 829 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 5) = ((MR_Box) ((MR_Integer) 0));
#line 829 "declarative_analyser.m"
                      }
#line 828 "declarative_analyser.m"
                      {
#line 828 "declarative_analyser.m"
                        MR_Word base;
#line 828 "declarative_analyser.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 828 "declarative_analyser.m"
                        *mdb__declarative_analyser__SearchResponse_26 = base;
#line 828 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__BindingSuspectId_28));
#line 828 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_59_59));
#line 828 "declarative_analyser.m"
                      }
#line 831 "declarative_analyser.m"
                      *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 831 "declarative_analyser.m"
                      *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 830 "declarative_analyser.m"
                    }
#line 832 "declarative_analyser.m"
                  else
#line 841 "declarative_analyser.m"
                    {
#line 841 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__Unknown_37;
#line 834 "declarative_analyser.m"
                      MR_Word mdb__declarative_analyser__TypeInfo_78_78;
#line 834 "declarative_analyser.m"
                      MR_Integer mdb__declarative_analyser__PolyConst2_77;

#line 834 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__LastUnknown_20)) == (MR_mktag((MR_Integer) 1)));
#line 834 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 834 "declarative_analyser.m"
                        {
#line 834 "declarative_analyser.m"
                          mdb__declarative_analyser__Unknown_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__LastUnknown_20, (MR_Integer) 0)));
#line 8568 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__PolyConst2_77 = (MR_Integer) 2;
#line 8570 "mdb.declarative_analyser.c"
                          {
#line 8572 "mdb.declarative_analyser.c"
                            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__PolyConst2_77, &mdb__declarative_analyser__TypeInfo_78_78);
                          }
#line 1196 "declarative_analyser.m"
                          {
#line 1196 "declarative_analyser.m"
                            mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__Unknown_37);
                          }
#line 834 "declarative_analyser.m"
                        }
#line 841 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 838 "declarative_analyser.m"
                        {
#line 838 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__Reason_38;

#line 837 "declarative_analyser.m"
                          {
#line 837 "declarative_analyser.m"
                            mdb__declarative_analyser__Reason_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 837 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 0) = ((MR_Box) (mdb__declarative_analyser__PrimOpType_31));
#line 837 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 1) = ((MR_Box) (mdb__declarative_analyser__FileName_29));
#line 837 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 2) = ((MR_Box) (mdb__declarative_analyser__LineNo_30));
#line 837 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 3) = ((MR_Box) (mdb__declarative_analyser__MaybePath_36));
#line 837 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 4) = ((MR_Box) (mdb__declarative_analyser__ProcLabel_33));
#line 837 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Reason_38, 5) = ((MR_Box) ((MR_Integer) 1));
#line 837 "declarative_analyser.m"
                          }
#line 839 "declarative_analyser.m"
                          {
#line 839 "declarative_analyser.m"
                            MR_Word base;
#line 839 "declarative_analyser.m"
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 839 "declarative_analyser.m"
                            *mdb__declarative_analyser__SearchResponse_26 = base;
#line 839 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_37));
#line 839 "declarative_analyser.m"
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__Reason_38));
#line 839 "declarative_analyser.m"
                          }
#line 840 "declarative_analyser.m"
                          *mdb__declarative_analyser__NewMode_25 = mdb__declarative_analyser__FallBackSearchMode_24;
#line 840 "declarative_analyser.m"
                          *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49;
#line 838 "declarative_analyser.m"
                        }
#line 841 "declarative_analyser.m"
                      else
#line 842 "declarative_analyser.m"
                        {
#line 842 "declarative_analyser.m"
                          mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, mdb__declarative_analyser__Store_15, mdb__declarative_analyser__Oracle_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_45, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__FallBackSearchMode_24, mdb__declarative_analyser__NewMode_25, mdb__declarative_analyser__SearchResponse_26);
                        }
#line 841 "declarative_analyser.m"
                    }
#line 842 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_47 = mdb__declarative_analyser__STATE_VARIABLE_TriedShortcutProcs_48_48;
#line 801 "declarative_analyser.m"
                }
#line 796 "declarative_analyser.m"
      }
#line 796 "declarative_analyser.m"
      break;
#line 796 "declarative_analyser.m"
    }
#line 787 "declarative_analyser.m"
}

#line 774 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__follow_subterm_end_search_12_p_0(
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29,
#line 774 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_13,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_14,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25,
#line 774 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HowTrack_16,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__LastUnknown_17,
#line 774 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_18,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__ArgPos_19,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TermPath_20,
#line 774 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_21,
#line 774 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_22,
#line 774 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__SearchResponse_23)
#line 774 "declarative_analyser.m"
{
#line 782 "declarative_analyser.m"
  {
#line 782 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 782 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28;
#line 783 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_24_24;

#line 784 "declarative_analyser.m"
    {
#line 784 "declarative_analyser.m"
      mdb__declarative_analyser__V_28_28 = mercury__map__init_0_f_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0);
    }
#line 783 "declarative_analyser.m"
    {
#line 783 "declarative_analyser.m"
      mdb__declarative_analyser__follow_subterm_end_search_2_14_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_29, mdb__declarative_analyser__Store_13, mdb__declarative_analyser__Oracle_14, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_25, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26, mdb__declarative_analyser__HowTrack_16, mdb__declarative_analyser__V_28_28, &mdb__declarative_analyser__V_24_24, mdb__declarative_analyser__LastUnknown_17, mdb__declarative_analyser__SuspectId_18, mdb__declarative_analyser__ArgPos_19, mdb__declarative_analyser__TermPath_20, mdb__declarative_analyser__FallBackSearchMode_21, mdb__declarative_analyser__NewMode_22, mdb__declarative_analyser__SearchResponse_23);
    }
#line 782 "declarative_analyser.m"
  }
#line 774 "declarative_analyser.m"
}

#line 740 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_2(
#line 740 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 740 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
#line 740 "declarative_analyser.m"
{
#line 740 "declarative_analyser.m"
  {
#line 740 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 740 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;

#line 740 "declarative_analyser.m"
    {
#line 740 "declarative_analyser.m"
      return mdb__declarative_analyser__succeeded = mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__740__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
#line 740 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 740 "declarative_analyser.m"
  }
#line 740 "declarative_analyser.m"
}

#line 737 "declarative_analyser.m"
static MR_bool MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0_1(
#line 737 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 737 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
#line 737 "declarative_analyser.m"
{
#line 737 "declarative_analyser.m"
  {
#line 737 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 737 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;

#line 737 "declarative_analyser.m"
    {
#line 737 "declarative_analyser.m"
      return mdb__declarative_analyser__succeeded = mdb__declarative_analyser__IntroducedFrom__pred__top_down_search__737__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
#line 737 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 737 "declarative_analyser.m"
  }
#line 737 "declarative_analyser.m"
}

#line 699 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__top_down_search_5_p_0(
#line 699 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39,
#line 699 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 699 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 699 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24,
#line 699 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25,
#line 699 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_9)
#line 699 "declarative_analyser.m"
{
#line 703 "declarative_analyser.m"
  while (MR_TRUE)
#line 703 "declarative_analyser.m"
    {
#line 703 "declarative_analyser.m"
      /* tailcall optimized into a loop */
#line 703 "declarative_analyser.m"
      {
#line 703 "declarative_analyser.m"
        MR_bool mdb__declarative_analyser__succeeded;
#line 703 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__Start_11;
#line 703 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__MaybeUnknownDescendant_12;
#line 703 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 709 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__RootId_10;
#line 707 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_41_41;

#line 8798 "mdb.declarative_analyser.c"
        {
#line 8800 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_41_41);
        }
#line 707 "declarative_analyser.m"
        {
#line 707 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_41_41, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__RootId_10);
        }
#line 709 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 708 "declarative_analyser.m"
          mdb__declarative_analyser__Start_11 = mdb__declarative_analyser__RootId_10;
#line 709 "declarative_analyser.m"
        else
#line 710 "declarative_analyser.m"
          {
#line 710 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_43_43;

#line 8819 "mdb.declarative_analyser.c"
            {
#line 8821 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_43_43);
            }
#line 710 "declarative_analyser.m"
            {
#line 710 "declarative_analyser.m"
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_43_43, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__Start_11);
            }
#line 710 "declarative_analyser.m"
          }
#line 712 "declarative_analyser.m"
        {
#line 712 "declarative_analyser.m"
          mdb__declarative_edt__first_unknown_descendant_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__Start_11, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__MaybeUnknownDescendant_12);
        }
#line 717 "declarative_analyser.m"
        if ((mdb__declarative_analyser__MaybeUnknownDescendant_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 724 "declarative_analyser.m"
          {
#line 724 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__SkippedSuspect_14;
#line 720 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_45_45;

#line 8845 "mdb.declarative_analyser.c"
            {
#line 8847 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_45_45);
            }
#line 720 "declarative_analyser.m"
            {
#line 720 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__choose_skipped_suspect_2_p_0(mdb__declarative_analyser__TypeInfo_45_45, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__SkippedSuspect_14);
            }
#line 724 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 722 "declarative_analyser.m"
              {
#line 722 "declarative_analyser.m"
                {
#line 722 "declarative_analyser.m"
                  MR_Word base;
#line 722 "declarative_analyser.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 722 "declarative_analyser.m"
                  *mdb__declarative_analyser__Response_9 = base;
#line 722 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__SkippedSuspect_14));
#line 722 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 722 "declarative_analyser.m"
                }
#line 723 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 722 "declarative_analyser.m"
              }
#line 724 "declarative_analyser.m"
            else
#line 748 "declarative_analyser.m"
              {
#line 748 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__BugId_15;
#line 731 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_47_47;

#line 8886 "mdb.declarative_analyser.c"
                {
#line 8888 "mdb.declarative_analyser.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_47_47);
                }
#line 731 "declarative_analyser.m"
                {
#line 731 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_47_47, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__BugId_15);
                }
#line 748 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 744 "declarative_analyser.m"
                  {
#line 744 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__BugChildren_16;
#line 744 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__CorrectDescendants_18;
#line 744 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29;
#line 734 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeCtorInfo_51_51;
#line 734 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_61_61;
#line 734 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__NonIgnoredDescendants_17;
#line 734 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28;
#line 734 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_30_30;
#line 734 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_31_31;
#line 734 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__V_60_60;

#line 734 "declarative_analyser.m"
                    {
#line 734 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__BugId_15, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28, &mdb__declarative_analyser__BugChildren_16);
                    }
#line 734 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 734 "declarative_analyser.m"
                      {
#line 735 "declarative_analyser.m"
                        {
#line 735 "declarative_analyser.m"
                          mdb__declarative_analyser__succeeded = mdb__declarative_edt__non_ignored_descendants_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__BugChildren_16, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_28_28, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29, &mdb__declarative_analyser__NonIgnoredDescendants_17);
                        }
#line 734 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 734 "declarative_analyser.m"
                          {
#line 738 "declarative_analyser.m"
                            mdb__declarative_analyser__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8941 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__TypeCtorInfo_51_51 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 737 "declarative_analyser.m"
                            {
#line 737 "declarative_analyser.m"
                              mdb__declarative_analyser__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 737 "declarative_analyser.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_7[0]));
#line 737 "declarative_analyser.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 1) = ((MR_Box) (mdb__declarative_analyser__top_down_search_5_p_0_1));
#line 737 "declarative_analyser.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 737 "declarative_analyser.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39));
#line 737 "declarative_analyser.m"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29));
#line 737 "declarative_analyser.m"
                            }
#line 737 "declarative_analyser.m"
                            {
#line 737 "declarative_analyser.m"
                              mercury__list__filter_4_p_0(mdb__declarative_analyser__TypeCtorInfo_51_51, mdb__declarative_analyser__V_30_30, mdb__declarative_analyser__NonIgnoredDescendants_17, &mdb__declarative_analyser__CorrectDescendants_18, &mdb__declarative_analyser__V_60_60);
                            }
#line 8964 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__TypeInfo_61_61 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[6];
#line 737 "declarative_analyser.m"
                            {
#line 737 "declarative_analyser.m"
                              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_61_61, ((MR_Box) (mdb__declarative_analyser__V_31_31)), ((MR_Box) (mdb__declarative_analyser__V_60_60)));
                            }
#line 734 "declarative_analyser.m"
                          }
#line 734 "declarative_analyser.m"
                      }
#line 744 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 741 "declarative_analyser.m"
                      {
#line 741 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__InadmissibleChildren_19;
#line 741 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__V_32_32;

#line 741 "declarative_analyser.m"
                        *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29;
#line 740 "declarative_analyser.m"
                        {
#line 740 "declarative_analyser.m"
                          mdb__declarative_analyser__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 740 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_7[0]));
#line 740 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__top_down_search_5_p_0_2));
#line 740 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 740 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39));
#line 740 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_32_32, 4) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_29_29));
#line 740 "declarative_analyser.m"
                        }
#line 740 "declarative_analyser.m"
                        {
#line 740 "declarative_analyser.m"
                          mercury__list__filter_3_p_0((MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0, mdb__declarative_analyser__V_32_32, mdb__declarative_analyser__BugChildren_16, &mdb__declarative_analyser__InadmissibleChildren_19);
                        }
#line 742 "declarative_analyser.m"
                        {
#line 742 "declarative_analyser.m"
                          MR_Word base;
#line 742 "declarative_analyser.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 742 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = base;
#line 742 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (mdb__declarative_analyser__BugId_15));
#line 742 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__CorrectDescendants_18));
#line 742 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_analyser__InadmissibleChildren_19));
#line 742 "declarative_analyser.m"
                        }
#line 741 "declarative_analyser.m"
                      }
#line 744 "declarative_analyser.m"
                    else
#line 745 "declarative_analyser.m"
                      {
#line 745 "declarative_analyser.m"
                        {
#line 745 "declarative_analyser.m"
                          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[17])));
#line 745 "declarative_analyser.m"
                          return;
                        }
#line 745 "declarative_analyser.m"
                      }
#line 744 "declarative_analyser.m"
                  }
#line 748 "declarative_analyser.m"
                else
#line 758 "declarative_analyser.m"
                  {
#line 758 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__ExtendedSearchSpace_20;

#line 753 "declarative_analyser.m"
                    {
#line 753 "declarative_analyser.m"
                      mdb__declarative_analyser__succeeded = mdb__declarative_edt__extend_search_space_upwards_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__ExtendedSearchSpace_20);
                    }
#line 758 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 756 "declarative_analyser.m"
                      {
#line 756 "declarative_analyser.m"
                        /* direct tailcall eliminated */
#line 756 "declarative_analyser.m"
                        {
#line 756 "declarative_analyser.m"
                          MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_24 = mdb__declarative_analyser__ExtendedSearchSpace_20;

#line 756 "declarative_analyser.m"
                          mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_24 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0__tmp_copy_24;
#line 756 "declarative_analyser.m"
                        }
#line 756 "declarative_analyser.m"
                        continue;
#line 756 "declarative_analyser.m"
                      }
#line 758 "declarative_analyser.m"
                    else
#line 759 "declarative_analyser.m"
                      {
#line 759 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__TypeInfo_58_58;
#line 759 "declarative_analyser.m"
                        MR_Word mdb__declarative_analyser__TypeInfo_59_59;
#line 759 "declarative_analyser.m"
                        MR_Integer mdb__declarative_analyser__TopMostId_21;
#line 759 "declarative_analyser.m"
                        MR_Box mdb__declarative_analyser__TopMostNode_22;
#line 9083 "mdb.declarative_analyser.c"
                        MR_bool MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box);

#line 9086 "mdb.declarative_analyser.c"
                        {
#line 9088 "mdb.declarative_analyser.c"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_58_58);
                        }
#line 759 "declarative_analyser.m"
                        {
#line 759 "declarative_analyser.m"
                          mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_58_58, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__TopMostId_21);
                        }
#line 9096 "mdb.declarative_analyser.c"
                        {
#line 9098 "mdb.declarative_analyser.c"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_59_59);
                        }
#line 760 "declarative_analyser.m"
                        {
#line 760 "declarative_analyser.m"
                          mdb__declarative_analyser__TopMostNode_22 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_59_59, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, mdb__declarative_analyser__TopMostId_21);
                        }
#line 9106 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 0)), (MR_Integer) 14)));
#line 9108 "mdb.declarative_analyser.c"
                        {
#line 9110 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39), mdb__declarative_analyser__Store_6, mdb__declarative_analyser__TopMostNode_22);
                        }
#line 764 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 763 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 764 "declarative_analyser.m"
                        else
#line 765 "declarative_analyser.m"
                          *mdb__declarative_analyser__Response_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 765 "declarative_analyser.m"
                        *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 759 "declarative_analyser.m"
                      }
#line 758 "declarative_analyser.m"
                  }
#line 748 "declarative_analyser.m"
              }
#line 724 "declarative_analyser.m"
          }
#line 717 "declarative_analyser.m"
        else
#line 717 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__MaybeUnknownDescendant_12)) == (MR_mktag((MR_Integer) 1))))
#line 715 "declarative_analyser.m"
            {
#line 715 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__Unknown_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeUnknownDescendant_12, (MR_Integer) 0)));

#line 716 "declarative_analyser.m"
              {
#line 716 "declarative_analyser.m"
                MR_Word base;
#line 716 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "declarative_analyser.m"
                *mdb__declarative_analyser__Response_9 = base;
#line 716 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Unknown_13));
#line 716 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1))));
#line 716 "declarative_analyser.m"
              }
#line 716 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 715 "declarative_analyser.m"
            }
#line 717 "declarative_analyser.m"
          else
#line 770 "declarative_analyser.m"
            {
#line 770 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__RequireExplicitId_23 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__MaybeUnknownDescendant_12, (MR_Integer) 0)));

#line 771 "declarative_analyser.m"
              {
#line 771 "declarative_analyser.m"
                MR_Word base;
#line 771 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 771 "declarative_analyser.m"
                *mdb__declarative_analyser__Response_9 = base;
#line 771 "declarative_analyser.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__RequireExplicitId_23));
#line 771 "declarative_analyser.m"
              }
#line 771 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26;
#line 770 "declarative_analyser.m"
            }
#line 703 "declarative_analyser.m"
      }
#line 703 "declarative_analyser.m"
      break;
#line 703 "declarative_analyser.m"
    }
#line 699 "declarative_analyser.m"
}

#line 668 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__search_for_question_8_p_0(
#line 668 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33,
#line 668 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_9,
#line 668 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_10,
#line 668 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26,
#line 668 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27,
#line 668 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__OldMode_12,
#line 668 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__FallBackSearchMode_13,
#line 668 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__NewMode_14,
#line 668 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_15)
#line 668 "declarative_analyser.m"
{
#line 676 "declarative_analyser.m"
  {
#line 676 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 676 "declarative_analyser.m"
    if ((mdb__declarative_analyser__OldMode_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 676 "declarative_analyser.m"
      {
#line 677 "declarative_analyser.m"
        {
#line 677 "declarative_analyser.m"
          mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
        }
#line 682 "declarative_analyser.m"
        *mdb__declarative_analyser__NewMode_14 = mdb__declarative_analyser__FallBackSearchMode_13;
#line 676 "declarative_analyser.m"
      }
#line 676 "declarative_analyser.m"
    else
#line 676 "declarative_analyser.m"
      if (((MR_tag((MR_Word) mdb__declarative_analyser__OldMode_12)) == (MR_mktag((MR_Integer) 2))))
#line 690 "declarative_analyser.m"
        {
#line 690 "declarative_analyser.m"
          MR_ArrayPtr mdb__declarative_analyser__PathArray_21 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
#line 690 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__Top_22;
#line 690 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__Bottom_23;
#line 690 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__LastTested_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 2)));
#line 690 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__OldMode_12, (MR_Integer) 1)));

#line 690 "declarative_analyser.m"
          mdb__declarative_analyser__Top_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_29_29, (MR_Integer) 0)));
#line 690 "declarative_analyser.m"
          mdb__declarative_analyser__Bottom_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_29_29, (MR_Integer) 1)));
#line 691 "declarative_analyser.m"
          {
#line 691 "declarative_analyser.m"
            mdb__declarative_analyser__binary_search_11_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__PathArray_21, mdb__declarative_analyser__Top_22, mdb__declarative_analyser__Bottom_23, mdb__declarative_analyser__LastTested_24, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__FallBackSearchMode_13, mdb__declarative_analyser__NewMode_14, mdb__declarative_analyser__Response_15);
#line 691 "declarative_analyser.m"
            return;
          }
#line 690 "declarative_analyser.m"
        }
#line 676 "declarative_analyser.m"
      else
#line 676 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__OldMode_12)) == (MR_mktag((MR_Integer) 3))))
#line 694 "declarative_analyser.m"
          {
#line 694 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__Weighting_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
#line 1062 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__RootId_41;
#line 1055 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_23_48;

#line 1052 "declarative_analyser.m"
            *mdb__declarative_analyser__NewMode_14 = mdb__declarative_analyser__OldMode_12;
#line 9276 "mdb.declarative_analyser.c"
            {
#line 9278 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_23_48);
            }
#line 1055 "declarative_analyser.m"
            {
#line 1055 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_23_48, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, &mdb__declarative_analyser__RootId_41);
            }
#line 1062 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 1059 "declarative_analyser.m"
              {
#line 1059 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__Children_42;
#line 1059 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_43;

#line 1056 "declarative_analyser.m"
                {
#line 1056 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__RootId_41, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_43, &mdb__declarative_analyser__Children_42);
                }
#line 1059 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 1057 "declarative_analyser.m"
                  {
#line 1057 "declarative_analyser.m"
                    {
#line 1057 "declarative_analyser.m"
                      mdb__declarative_analyser__find_middle_weight_9_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__Weighting_25, mdb__declarative_analyser__Children_42, mdb__declarative_analyser__RootId_41, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_43, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
#line 1057 "declarative_analyser.m"
                      return;
                    }
#line 1057 "declarative_analyser.m"
                  }
#line 1059 "declarative_analyser.m"
                else
#line 1060 "declarative_analyser.m"
                  {
#line 1060 "declarative_analyser.m"
                    {
#line 1060 "declarative_analyser.m"
                      MR_Word base;
#line 1060 "declarative_analyser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1060 "declarative_analyser.m"
                      *mdb__declarative_analyser__Response_15 = base;
#line 1060 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__RootId_41));
#line 1060 "declarative_analyser.m"
                    }
#line 1060 "declarative_analyser.m"
                    *mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27 = mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26;
#line 1060 "declarative_analyser.m"
                  }
#line 1059 "declarative_analyser.m"
              }
#line 1062 "declarative_analyser.m"
            else
#line 1063 "declarative_analyser.m"
              {
#line 1063 "declarative_analyser.m"
                mdb__declarative_analyser__top_down_search_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__Response_15);
#line 1063 "declarative_analyser.m"
                return;
              }
#line 694 "declarative_analyser.m"
          }
#line 676 "declarative_analyser.m"
        else
#line 685 "declarative_analyser.m"
          {
#line 685 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__SuspectId_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 0)));
#line 685 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__ArgPos_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 1)));
#line 685 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TermPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 2)));
#line 685 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__LastUnknown_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 3)));
#line 685 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__HowTrack_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__OldMode_12, (MR_Integer) 4)));

#line 686 "declarative_analyser.m"
            {
#line 686 "declarative_analyser.m"
              mdb__declarative_analyser__follow_subterm_end_search_12_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_33, mdb__declarative_analyser__Store_9, mdb__declarative_analyser__Oracle_10, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_26, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_27, mdb__declarative_analyser__HowTrack_20, mdb__declarative_analyser__LastUnknown_19, mdb__declarative_analyser__SuspectId_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, mdb__declarative_analyser__FallBackSearchMode_13, mdb__declarative_analyser__NewMode_14, mdb__declarative_analyser__Response_15);
#line 686 "declarative_analyser.m"
              return;
            }
#line 685 "declarative_analyser.m"
          }
#line 676 "declarative_analyser.m"
  }
#line 668 "declarative_analyser.m"
}

#line 656 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_2(
#line 656 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 656 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 656 "declarative_analyser.m"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2)
#line 656 "declarative_analyser.m"
{
#line 656 "declarative_analyser.m"
  {
#line 656 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;
#line 656 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__conv4_HeadVar__3_3;

#line 656 "declarative_analyser.m"
    {
#line 656 "declarative_analyser.m"
      mdb__declarative_edt__edt_question_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4)), mdb__declarative_analyser__wrapper_arg_1, &mdb__declarative_analyser__conv4_HeadVar__3_3);
    }
#line 656 "declarative_analyser.m"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv4_HeadVar__3_3));
#line 656 "declarative_analyser.m"
  }
#line 656 "declarative_analyser.m"
}

#line 655 "declarative_analyser.m"
static MR_Box MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0_1(
#line 655 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__closure_arg,
#line 655 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__wrapper_arg_1)
#line 655 "declarative_analyser.m"
{
#line 655 "declarative_analyser.m"
  {
#line 655 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__wrapper_arg_2;
#line 655 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__closure = mdb__declarative_analyser__closure_arg;

#line 655 "declarative_analyser.m"
    {
#line 655 "declarative_analyser.m"
      mdb__declarative_analyser__wrapper_arg_2 = mdb__declarative_analyser__IntroducedFrom__func__bug_response__655__1_3_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_analyser__wrapper_arg_1));
    }
#line 655 "declarative_analyser.m"
    return mdb__declarative_analyser__wrapper_arg_2;
#line 655 "declarative_analyser.m"
  }
#line 655 "declarative_analyser.m"
}

#line 638 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__bug_response_6_p_0(
#line 638 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24,
#line 638 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_7,
#line 638 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchSpace_8,
#line 638 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__BugId_9,
#line 638 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Evidence_10,
#line 638 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__InadmissibleChildren_11,
#line 638 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_12)
#line 638 "declarative_analyser.m"
{
#line 643 "declarative_analyser.m"
  {
#line 643 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 643 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_26_26;
#line 643 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_29_29;
#line 643 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_36_36;
#line 643 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_37_37;
#line 643 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_39_39;
#line 643 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__BugNode_13;
#line 643 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__Bug_17;
#line 643 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__EDTNodes_19;
#line 643 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__EvidenceAsQuestions_20;
#line 643 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_22_22;
#line 643 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_23_23;
#line 656 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__conv5_EvidenceAsQuestions_20;

#line 9481 "mdb.declarative_analyser.c"
    {
#line 9483 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_26_26);
    }
#line 644 "declarative_analyser.m"
    {
#line 644 "declarative_analyser.m"
      mdb__declarative_analyser__BugNode_13 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_26_26, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__BugId_9);
    }
#line 650 "declarative_analyser.m"
    if ((mdb__declarative_analyser__InadmissibleChildren_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "declarative_analyser.m"
      {
#line 651 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__EBug_18;
#line 9497 "mdb.declarative_analyser.c"
        void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 6)));
#line 9499 "mdb.declarative_analyser.c"
        MR_Box mdb__declarative_analyser__conv1_EBug_18;

#line 9502 "mdb.declarative_analyser.c"
        {
#line 9504 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__BugNode_13, &mdb__declarative_analyser__conv1_EBug_18);
        }
#line 9507 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__EBug_18 = ((MR_Word) mdb__declarative_analyser__conv1_EBug_18);
#line 653 "declarative_analyser.m"
        {
#line 653 "declarative_analyser.m"
          mdb__declarative_analyser__Bug_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 653 "declarative_analyser.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Bug_17, 0) = ((MR_Box) (mdb__declarative_analyser__EBug_18));
#line 653 "declarative_analyser.m"
        }
#line 651 "declarative_analyser.m"
      }
#line 650 "declarative_analyser.m"
    else
#line 646 "declarative_analyser.m"
      {
#line 646 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_27_27;
#line 646 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__InadmissibleChild_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__InadmissibleChildren_11, (MR_Integer) 0)));
#line 646 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__IBug_16;
#line 646 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__V_21_21;
#line 646 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__InadmissibleChildren_11, (MR_Integer) 1)));
#line 9533 "mdb.declarative_analyser.c"
        void MR_CALL (* mdb__declarative_analyser__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9535 "mdb.declarative_analyser.c"
        MR_Box mdb__declarative_analyser__conv3_IBug_16;

#line 9538 "mdb.declarative_analyser.c"
        {
#line 9540 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_27_27);
        }
#line 648 "declarative_analyser.m"
        {
#line 648 "declarative_analyser.m"
          mdb__declarative_analyser__V_21_21 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_27_27, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__InadmissibleChild_14);
        }
#line 9548 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9550 "mdb.declarative_analyser.c"
        {
#line 9552 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_2(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__BugNode_13, mdb__declarative_analyser__V_21_21, &mdb__declarative_analyser__conv3_IBug_16);
        }
#line 9555 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__IBug_16 = ((MR_Word) mdb__declarative_analyser__conv3_IBug_16);
#line 649 "declarative_analyser.m"
        mdb__declarative_analyser__Bug_17 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) mdb__declarative_analyser__IBug_16);
#line 646 "declarative_analyser.m"
      }
#line 9561 "mdb.declarative_analyser.c"
    {
#line 9563 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_29_29);
    }
#line 655 "declarative_analyser.m"
    {
#line 655 "declarative_analyser.m"
      mdb__declarative_analyser__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 655 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_6[0]));
#line 655 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__bug_response_6_p_0_1));
#line 655 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 655 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24));
#line 655 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, 4) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_8));
#line 655 "declarative_analyser.m"
    }
#line 655 "declarative_analyser.m"
    {
#line 655 "declarative_analyser.m"
      mdb__declarative_analyser__EDTNodes_19 = mercury__list__map_2_f_0((MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0, mdb__declarative_analyser__TypeInfo_29_29, mdb__declarative_analyser__V_22_22, mdb__declarative_analyser__Evidence_10);
    }
#line 656 "declarative_analyser.m"
    {
#line 656 "declarative_analyser.m"
      mdb__declarative_analyser__V_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 0) = ((MR_Box) (&mdb__declarative_analyser_scalar_common_6[1]));
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__bug_response_6_p_0_2));
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 3) = ((MR_Box) (mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24));
#line 656 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_23_23, 4) = mdb__declarative_analyser__Store_7;
#line 656 "declarative_analyser.m"
    }
#line 9603 "mdb.declarative_analyser.c"
    {
#line 9605 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_36_36);
    }
#line 9608 "mdb.declarative_analyser.c"
    {
#line 9610 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_37_37);
    }
#line 9613 "mdb.declarative_analyser.c"
    {
#line 9615 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9617 "mdb.declarative_analyser.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_39_39, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 9619 "mdb.declarative_analyser.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_39_39, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_37_37));
#line 9621 "mdb.declarative_analyser.c"
    }
#line 656 "declarative_analyser.m"
    {
#line 656 "declarative_analyser.m"
      mercury__list__map_3_p_0(mdb__declarative_analyser__TypeInfo_36_36, mdb__declarative_analyser__TypeInfo_39_39, (MR_Word) mdb__declarative_analyser__V_23_23, mdb__declarative_analyser__EDTNodes_19, &mdb__declarative_analyser__conv5_EvidenceAsQuestions_20);
    }
#line 656 "declarative_analyser.m"
    mdb__declarative_analyser__EvidenceAsQuestions_20 = (MR_Word) mdb__declarative_analyser__conv5_EvidenceAsQuestions_20;
#line 658 "declarative_analyser.m"
    {
#line 658 "declarative_analyser.m"
      MR_Word base;
#line 658 "declarative_analyser.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 658 "declarative_analyser.m"
      *mdb__declarative_analyser__Response_12 = base;
#line 658 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_analyser__Bug_17));
#line 658 "declarative_analyser.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_analyser__EvidenceAsQuestions_20));
#line 658 "declarative_analyser.m"
    }
#line 643 "declarative_analyser.m"
  }
#line 638 "declarative_analyser.m"
}

#line 571 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__handle_search_response_5_p_0(
#line 571 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78,
#line 571 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 571 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__SearchResponse_7,
#line 571 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20,
#line 571 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_21,
#line 571 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__AnalyserResponse_9)
#line 571 "declarative_analyser.m"
{
#line 577 "declarative_analyser.m"
  {
#line 577 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 577 "declarative_analyser.m"
    if ((mdb__declarative_analyser__SearchResponse_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 621 "declarative_analyser.m"
      {
#line 622 "declarative_analyser.m"
        *mdb__declarative_analyser__AnalyserResponse_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 622 "declarative_analyser.m"
        *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20;
#line 621 "declarative_analyser.m"
      }
#line 577 "declarative_analyser.m"
    else
#line 577 "declarative_analyser.m"
      if ((mdb__declarative_analyser__SearchResponse_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 613 "declarative_analyser.m"
        {
#line 613 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TypeInfo_88_88;
#line 613 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TypeInfo_89_89;
#line 613 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__TopMostId_15;
#line 613 "declarative_analyser.m"
          MR_Box mdb__declarative_analyser__TopMost_16;
#line 613 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__SearchSpace_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 614 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 614 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 614 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 614 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 614 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));

#line 614 "declarative_analyser.m"
          {
#line 614 "declarative_analyser.m"
            MR_Word base;
#line 614 "declarative_analyser.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 614 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
#line 614 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_39));
#line 614 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_4[2])));
#line 614 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_64_64));
#line 614 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_65_65));
#line 614 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_66_66));
#line 614 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_67_67));
#line 614 "declarative_analyser.m"
          }
#line 9730 "mdb.declarative_analyser.c"
          {
#line 9732 "mdb.declarative_analyser.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_88_88);
          }
#line 616 "declarative_analyser.m"
          {
#line 616 "declarative_analyser.m"
            mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_88_88, mdb__declarative_analyser__SearchSpace_39, &mdb__declarative_analyser__TopMostId_15);
          }
#line 9740 "mdb.declarative_analyser.c"
          {
#line 9742 "mdb.declarative_analyser.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_89_89);
          }
#line 617 "declarative_analyser.m"
          {
#line 617 "declarative_analyser.m"
            mdb__declarative_analyser__TopMost_16 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_89_89, mdb__declarative_analyser__SearchSpace_39, mdb__declarative_analyser__TopMostId_15);
          }
#line 618 "declarative_analyser.m"
          {
#line 618 "declarative_analyser.m"
            MR_Word base;
#line 618 "declarative_analyser.m"
            base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 618 "declarative_analyser.m"
            *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 618 "declarative_analyser.m"
            MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 618 "declarative_analyser.m"
            MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_analyser__TopMost_16;
#line 618 "declarative_analyser.m"
          }
#line 613 "declarative_analyser.m"
        }
#line 577 "declarative_analyser.m"
      else
#line 577 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__SearchResponse_7)) == (MR_mktag((MR_Integer) 3))))
#line 625 "declarative_analyser.m"
          {
#line 625 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__BugId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
#line 625 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__CorrectDescendants_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 1)));
#line 625 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__InadmissibleChildren_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 2)));
#line 625 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 625 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_23_23;
#line 626 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 626 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 626 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 626 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 626 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));

#line 627 "declarative_analyser.m"
            {
#line 627 "declarative_analyser.m"
              mdb__declarative_analyser__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 627 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__BugId_17));
#line 627 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__CorrectDescendants_18));
#line 627 "declarative_analyser.m"
            }
#line 626 "declarative_analyser.m"
            {
#line 626 "declarative_analyser.m"
              mdb__declarative_analyser__bug_response_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__V_22_22, mdb__declarative_analyser__BugId_17, mdb__declarative_analyser__V_23_23, mdb__declarative_analyser__InadmissibleChildren_19, mdb__declarative_analyser__AnalyserResponse_9);
            }
#line 626 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20;
#line 625 "declarative_analyser.m"
          }
#line 577 "declarative_analyser.m"
        else
#line 577 "declarative_analyser.m"
          if (((MR_tag((MR_Word) mdb__declarative_analyser__SearchResponse_7)) == (MR_mktag((MR_Integer) 1))))
#line 577 "declarative_analyser.m"
            {
#line 577 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_80_80;
#line 577 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__SuspectId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
#line 577 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__Reason_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 1)));
#line 577 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__SearchSpace_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 577 "declarative_analyser.m"
              MR_Box mdb__declarative_analyser__Node_13;
#line 577 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__OracleQuestion_14;
#line 577 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_35_35;
#line 577 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_36_36;
#line 578 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 578 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 578 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 578 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 578 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 9844 "mdb.declarative_analyser.c"
              void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9846 "mdb.declarative_analyser.c"
              MR_Box mdb__declarative_analyser__conv1_OracleQuestion_14;
#line 604 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_45_45;
#line 604 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_46_46;
#line 604 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_47_47;
#line 604 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_48_48;
#line 604 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_50_50;
#line 604 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_49_49;

#line 9861 "mdb.declarative_analyser.c"
              {
#line 9863 "mdb.declarative_analyser.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
              }
#line 579 "declarative_analyser.m"
              {
#line 579 "declarative_analyser.m"
                mdb__declarative_analyser__Node_13 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
              }
#line 9871 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9873 "mdb.declarative_analyser.c"
              {
#line 9875 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78), mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_13, &mdb__declarative_analyser__conv1_OracleQuestion_14);
              }
#line 9878 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__OracleQuestion_14 = ((MR_Word) mdb__declarative_analyser__conv1_OracleQuestion_14);
#line 583 "declarative_analyser.m"
              {
#line 583 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_81_81;

#line 9885 "mdb.declarative_analyser.c"
                {
#line 9887 "mdb.declarative_analyser.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_81_81);
                }
#line 583 "declarative_analyser.m"
                {
#line 583 "declarative_analyser.m"
                  mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_unknown_2_p_0(mdb__declarative_analyser__TypeInfo_81_81, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
                }
#line 583 "declarative_analyser.m"
              }
#line 584 "declarative_analyser.m"
              if (!(mdb__declarative_analyser__succeeded))
#line 585 "declarative_analyser.m"
                {
#line 585 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_82_82;

#line 9904 "mdb.declarative_analyser.c"
                  {
#line 9906 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_82_82);
                  }
#line 585 "declarative_analyser.m"
                  {
#line 585 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_skipped_2_p_0(mdb__declarative_analyser__TypeInfo_82_82, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
                  }
#line 585 "declarative_analyser.m"
                }
#line 590 "declarative_analyser.m"
              if (mdb__declarative_analyser__succeeded)
#line 588 "declarative_analyser.m"
                {
#line 588 "declarative_analyser.m"
                  MR_Word base;
#line 588 "declarative_analyser.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 588 "declarative_analyser.m"
                  *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 588 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_14));
#line 588 "declarative_analyser.m"
                }
#line 590 "declarative_analyser.m"
              else
#line 597 "declarative_analyser.m"
                {
#line 591 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_83_83;

#line 9937 "mdb.declarative_analyser.c"
                  {
#line 9939 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_83_83);
                  }
#line 591 "declarative_analyser.m"
                  {
#line 591 "declarative_analyser.m"
                    mdb__declarative_analyser__succeeded = mdb__declarative_edt__suspect_ignored_2_p_0(mdb__declarative_analyser__TypeInfo_83_83, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
                  }
#line 597 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 595 "declarative_analyser.m"
                    {
#line 595 "declarative_analyser.m"
                      {
#line 595 "declarative_analyser.m"
                        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[16])));
#line 595 "declarative_analyser.m"
                        return;
                      }
#line 595 "declarative_analyser.m"
                    }
#line 597 "declarative_analyser.m"
                  else
#line 602 "declarative_analyser.m"
                    {
#line 602 "declarative_analyser.m"
                      MR_Word base;
#line 602 "declarative_analyser.m"
                      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 602 "declarative_analyser.m"
                      *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 602 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 602 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_14));
#line 602 "declarative_analyser.m"
                    }
#line 597 "declarative_analyser.m"
                }
#line 605 "declarative_analyser.m"
              {
#line 605 "declarative_analyser.m"
                mdb__declarative_analyser__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 605 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_36_36, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_10));
#line 605 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_36_36, 1) = ((MR_Box) (mdb__declarative_analyser__Reason_11));
#line 605 "declarative_analyser.m"
              }
#line 605 "declarative_analyser.m"
              {
#line 605 "declarative_analyser.m"
                mdb__declarative_analyser__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 605 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_35_35, 0) = ((MR_Box) (mdb__declarative_analyser__V_36_36));
#line 605 "declarative_analyser.m"
              }
#line 604 "declarative_analyser.m"
              mdb__declarative_analyser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 604 "declarative_analyser.m"
              mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 604 "declarative_analyser.m"
              mdb__declarative_analyser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 604 "declarative_analyser.m"
              mdb__declarative_analyser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 604 "declarative_analyser.m"
              mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 604 "declarative_analyser.m"
              mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 604 "declarative_analyser.m"
              {
#line 604 "declarative_analyser.m"
                MR_Word base;
#line 604 "declarative_analyser.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 604 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
#line 604 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 604 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_46_46));
#line 604 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 604 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_48_48));
#line 604 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_35_35));
#line 604 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 604 "declarative_analyser.m"
              }
#line 577 "declarative_analyser.m"
            }
#line 577 "declarative_analyser.m"
          else
#line 607 "declarative_analyser.m"
            {
#line 607 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__TypeInfo_86_86;
#line 607 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_28_28;
#line 607 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_29_29;
#line 607 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_30_30;
#line 607 "declarative_analyser.m"
              MR_Integer mdb__declarative_analyser__SuspectId_37 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchResponse_7, (MR_Integer) 0)));
#line 607 "declarative_analyser.m"
              MR_Box mdb__declarative_analyser__Node_38;
#line 608 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_51_51;
#line 608 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_53_53;
#line 608 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_54_54;
#line 608 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_55_55;
#line 608 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_56_56;
#line 608 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_52_52;
#line 610 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_57_57;
#line 610 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_58_58;
#line 610 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_59_59;
#line 610 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_60_60;
#line 610 "declarative_analyser.m"
              MR_Word mdb__declarative_analyser__V_61_61;

#line 608 "declarative_analyser.m"
              {
#line 608 "declarative_analyser.m"
                mdb__declarative_analyser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 608 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_29_29, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_37));
#line 608 "declarative_analyser.m"
              }
#line 608 "declarative_analyser.m"
              {
#line 608 "declarative_analyser.m"
                mdb__declarative_analyser__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 608 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_28_28, 0) = ((MR_Box) (mdb__declarative_analyser__V_29_29));
#line 608 "declarative_analyser.m"
              }
#line 608 "declarative_analyser.m"
              mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 0)));
#line 608 "declarative_analyser.m"
              mdb__declarative_analyser__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 1)));
#line 608 "declarative_analyser.m"
              mdb__declarative_analyser__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 2)));
#line 608 "declarative_analyser.m"
              mdb__declarative_analyser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 3)));
#line 608 "declarative_analyser.m"
              mdb__declarative_analyser__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 4)));
#line 608 "declarative_analyser.m"
              mdb__declarative_analyser__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_20, (MR_Integer) 5)));
#line 608 "declarative_analyser.m"
              {
#line 608 "declarative_analyser.m"
                MR_Word base;
#line 608 "declarative_analyser.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 608 "declarative_analyser.m"
                *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21 = base;
#line 608 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 608 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_28_28));
#line 608 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_53_53));
#line 608 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_54_54));
#line 608 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_55_55));
#line 608 "declarative_analyser.m"
                MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_56_56));
#line 608 "declarative_analyser.m"
              }
#line 10121 "mdb.declarative_analyser.c"
              {
#line 10123 "mdb.declarative_analyser.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_86_86);
              }
#line 610 "declarative_analyser.m"
              mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 0)));
#line 610 "declarative_analyser.m"
              mdb__declarative_analyser__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 1)));
#line 610 "declarative_analyser.m"
              mdb__declarative_analyser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 2)));
#line 610 "declarative_analyser.m"
              mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 3)));
#line 610 "declarative_analyser.m"
              mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 4)));
#line 610 "declarative_analyser.m"
              mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_21, (MR_Integer) 5)));
#line 610 "declarative_analyser.m"
              {
#line 610 "declarative_analyser.m"
                mdb__declarative_analyser__Node_38 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_86_86, mdb__declarative_analyser__V_30_30, mdb__declarative_analyser__SuspectId_37);
              }
#line 611 "declarative_analyser.m"
              {
#line 611 "declarative_analyser.m"
                MR_Word base;
#line 611 "declarative_analyser.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 611 "declarative_analyser.m"
                *mdb__declarative_analyser__AnalyserResponse_9 = base;
#line 611 "declarative_analyser.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 611 "declarative_analyser.m"
                MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_analyser__Node_38;
#line 611 "declarative_analyser.m"
              }
#line 607 "declarative_analyser.m"
            }
#line 577 "declarative_analyser.m"
  }
#line 571 "declarative_analyser.m"
}

#line 552 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__decide_analyser_response_5_p_0(
#line 552 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63,
#line 552 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 552 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Oracle_7,
#line 552 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__Response_8,
#line 552 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13,
#line 552 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_14)
#line 552 "declarative_analyser.m"
{
#line 556 "declarative_analyser.m"
  {
#line 556 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__NewMode_11;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__SearchResponse_12;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_24_24;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_32_32;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_33_33;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_47_47;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_49_49;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_50_50;
#line 556 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_51_51;
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 557 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 560 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_31_31;
#line 560 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_34_34;
#line 560 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_35_35;
#line 564 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_46_46;
#line 564 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_48_48;
#line 568 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_58_58;
#line 568 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_59_59;
#line 568 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_60_60;
#line 568 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_61_61;
#line 568 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_62_62;

#line 557 "declarative_analyser.m"
    {
#line 557 "declarative_analyser.m"
      mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__V_15_15, (MR_String) "Start of decide_analyser_response");
    }
#line 560 "declarative_analyser.m"
    mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 560 "declarative_analyser.m"
    mdb__declarative_analyser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 560 "declarative_analyser.m"
    mdb__declarative_analyser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 560 "declarative_analyser.m"
    mdb__declarative_analyser__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 560 "declarative_analyser.m"
    mdb__declarative_analyser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 560 "declarative_analyser.m"
    mdb__declarative_analyser__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 561 "declarative_analyser.m"
    {
#line 561 "declarative_analyser.m"
      mdb__declarative_analyser__search_for_question_8_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Oracle_7, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_17_17, &mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18, mdb__declarative_analyser__V_32_32, mdb__declarative_analyser__V_33_33, &mdb__declarative_analyser__NewMode_11, &mdb__declarative_analyser__SearchResponse_12);
    }
#line 564 "declarative_analyser.m"
    mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 564 "declarative_analyser.m"
    mdb__declarative_analyser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 564 "declarative_analyser.m"
    mdb__declarative_analyser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 564 "declarative_analyser.m"
    mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 564 "declarative_analyser.m"
    mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 564 "declarative_analyser.m"
    mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 565 "declarative_analyser.m"
    {
#line 565 "declarative_analyser.m"
      mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 565 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 0) = ((MR_Box) (mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_18_18));
#line 565 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 565 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 2) = ((MR_Box) (mdb__declarative_analyser__NewMode_11));
#line 565 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 3) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 565 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 4) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 565 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, 5) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 565 "declarative_analyser.m"
    }
#line 566 "declarative_analyser.m"
    {
#line 566 "declarative_analyser.m"
      mdb__declarative_analyser__handle_search_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__SearchResponse_12, mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, mdb__declarative_analyser__Response_8);
    }
#line 568 "declarative_analyser.m"
    mdb__declarative_analyser__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 0)));
#line 568 "declarative_analyser.m"
    mdb__declarative_analyser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 1)));
#line 568 "declarative_analyser.m"
    mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 2)));
#line 568 "declarative_analyser.m"
    mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 3)));
#line 568 "declarative_analyser.m"
    mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 4)));
#line 568 "declarative_analyser.m"
    mdb__declarative_analyser__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14, (MR_Integer) 5)));
#line 568 "declarative_analyser.m"
    {
#line 568 "declarative_analyser.m"
      mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_63, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__V_24_24, (MR_String) "End of decide_analyser_response");
#line 568 "declarative_analyser.m"
      return;
    }
#line 556 "declarative_analyser.m"
  }
#line 552 "declarative_analyser.m"
}

#line 474 "declarative_analyser.m"
static void MR_CALL 
mdb__declarative_analyser__process_answer_5_p_0(
#line 474 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137,
#line 474 "declarative_analyser.m"
  MR_Box mdb__declarative_analyser__Store_6,
#line 474 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__Answer_7,
#line 474 "declarative_analyser.m"
  MR_Integer mdb__declarative_analyser__SuspectId_8,
#line 474 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24,
#line 474 "declarative_analyser.m"
  MR_Word * mdb__declarative_analyser__STATE_VARIABLE_Analyser_25)
#line 474 "declarative_analyser.m"
{
#line 479 "declarative_analyser.m"
  {
#line 479 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 479 "declarative_analyser.m"
    if (((MR_tag((MR_Word) mdb__declarative_analyser__Answer_7)) == (MR_mktag((MR_Integer) 2))))
#line 483 "declarative_analyser.m"
      {
#line 483 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 483 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__SearchSpace_47;
#line 484 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 484 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 484 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 484 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 484 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 486 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_71_71;
#line 486 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_72_72;
#line 486 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_73_73;
#line 486 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_74_74;
#line 486 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_75_75;
#line 486 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_70_70;

#line 484 "declarative_analyser.m"
        {
#line 484 "declarative_analyser.m"
          mdb__declarative_edt__ignore_suspect_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_43_43, &mdb__declarative_analyser__SearchSpace_47);
        }
#line 486 "declarative_analyser.m"
        mdb__declarative_analyser__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 486 "declarative_analyser.m"
        mdb__declarative_analyser__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 486 "declarative_analyser.m"
        mdb__declarative_analyser__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 486 "declarative_analyser.m"
        mdb__declarative_analyser__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 486 "declarative_analyser.m"
        mdb__declarative_analyser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 486 "declarative_analyser.m"
        mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 486 "declarative_analyser.m"
        {
#line 486 "declarative_analyser.m"
          MR_Word base;
#line 486 "declarative_analyser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 486 "declarative_analyser.m"
          *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 486 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_47));
#line 486 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_71_71));
#line 486 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_72_72));
#line 486 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_73_73));
#line 486 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_74_74));
#line 486 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_75_75));
#line 486 "declarative_analyser.m"
        }
#line 483 "declarative_analyser.m"
      }
#line 479 "declarative_analyser.m"
    else
#line 479 "declarative_analyser.m"
      if (((MR_tag((MR_Word) mdb__declarative_analyser__Answer_7)) == (MR_mktag((MR_Integer) 3))))
#line 479 "declarative_analyser.m"
        {
#line 479 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__TypeInfo_139_139;
#line 479 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__SearchSpace_11;
#line 479 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 480 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 480 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 480 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 480 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 480 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_60_60;
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_61_61;
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_62_62;
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_63_63;
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_64_64;
#line 481 "declarative_analyser.m"
          MR_Word mdb__declarative_analyser__V_59_59;

#line 10452 "mdb.declarative_analyser.c"
          {
#line 10454 "mdb.declarative_analyser.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_139_139);
          }
#line 480 "declarative_analyser.m"
          {
#line 480 "declarative_analyser.m"
            mdb__declarative_edt__skip_suspect_3_p_0(mdb__declarative_analyser__TypeInfo_139_139, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_45_45, &mdb__declarative_analyser__SearchSpace_11);
          }
#line 481 "declarative_analyser.m"
          mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 481 "declarative_analyser.m"
          mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 481 "declarative_analyser.m"
          mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 481 "declarative_analyser.m"
          mdb__declarative_analyser__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 481 "declarative_analyser.m"
          mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 481 "declarative_analyser.m"
          mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 481 "declarative_analyser.m"
          {
#line 481 "declarative_analyser.m"
            MR_Word base;
#line 481 "declarative_analyser.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 481 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 481 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_11));
#line 481 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_60_60));
#line 481 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_61_61));
#line 481 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_62_62));
#line 481 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_63_63));
#line 481 "declarative_analyser.m"
            MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_64_64));
#line 481 "declarative_analyser.m"
          }
#line 479 "declarative_analyser.m"
        }
#line 479 "declarative_analyser.m"
      else
#line 479 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__Answer_7)) == (MR_mktag((MR_Integer) 1))))
#line 504 "declarative_analyser.m"
          {
#line 504 "declarative_analyser.m"
            MR_Box mdb__declarative_analyser__Node_16 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 0));
#line 504 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__ArgPos_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 1)));
#line 504 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TermPath_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 2)));
#line 504 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__HowTrack_19 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 504 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__ShouldAssertInvalid_20 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__Answer_7, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 504 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__DebugOrigin_22;
#line 504 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26;
#line 504 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_27_27;
#line 504 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30;
#line 504 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_32_32;
#line 511 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_21_21;
#line 512 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_109_109;
#line 512 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_110_110;
#line 512 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_111_111;
#line 512 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_112_112;
#line 512 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_113_113;
#line 512 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_114_114;
#line 529 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_131_131;
#line 529 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_132_132;
#line 529 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_134_134;
#line 529 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_135_135;
#line 529 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_136_136;
#line 529 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_133_133;

#line 511 "declarative_analyser.m"
            {
#line 511 "declarative_analyser.m"
              mdb__declarative_edt__edt_dependency_6_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, &mdb__declarative_analyser__V_21_21, &mdb__declarative_analyser__DebugOrigin_22);
            }
#line 512 "declarative_analyser.m"
            {
#line 512 "declarative_analyser.m"
              mdb__declarative_analyser__V_27_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 512 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_27_27, 0) = ((MR_Box) (mdb__declarative_analyser__DebugOrigin_22));
#line 512 "declarative_analyser.m"
            }
#line 512 "declarative_analyser.m"
            mdb__declarative_analyser__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 512 "declarative_analyser.m"
            mdb__declarative_analyser__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 512 "declarative_analyser.m"
            mdb__declarative_analyser__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 512 "declarative_analyser.m"
            mdb__declarative_analyser__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 512 "declarative_analyser.m"
            mdb__declarative_analyser__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 512 "declarative_analyser.m"
            mdb__declarative_analyser__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 512 "declarative_analyser.m"
            {
#line 512 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 512 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 0) = ((MR_Box) (mdb__declarative_analyser__V_109_109));
#line 512 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 1) = ((MR_Box) (mdb__declarative_analyser__V_110_110));
#line 512 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 2) = ((MR_Box) (mdb__declarative_analyser__V_111_111));
#line 512 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 3) = ((MR_Box) (mdb__declarative_analyser__V_112_112));
#line 512 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 4) = ((MR_Box) (mdb__declarative_analyser__V_113_113));
#line 512 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, 5) = ((MR_Box) (mdb__declarative_analyser__V_27_27));
#line 512 "declarative_analyser.m"
            }
#line 526 "declarative_analyser.m"
            if ((mdb__declarative_analyser__ShouldAssertInvalid_20 == (MR_Integer) 0))
#line 514 "declarative_analyser.m"
              {
#line 514 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__Mode_23;
#line 514 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__SearchSpace_51;
#line 514 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_150_150;
#line 514 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_151_151;
#line 514 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_152_152;
#line 514 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_153_153;
#line 514 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_154_154;
#line 514 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_155_155;

#line 515 "declarative_analyser.m"
                {
#line 515 "declarative_analyser.m"
                  mdb__declarative_edt__edt_subterm_mode_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_16, mdb__declarative_analyser__ArgPos_17, mdb__declarative_analyser__TermPath_18, &mdb__declarative_analyser__Mode_23);
                }
#line 518 "declarative_analyser.m"
                mdb__declarative_analyser__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 0)));
#line 518 "declarative_analyser.m"
                mdb__declarative_analyser__V_154_154 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 1)));
#line 518 "declarative_analyser.m"
                mdb__declarative_analyser__V_153_153 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 2)));
#line 518 "declarative_analyser.m"
                mdb__declarative_analyser__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 3)));
#line 518 "declarative_analyser.m"
                mdb__declarative_analyser__V_151_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 4)));
#line 518 "declarative_analyser.m"
                mdb__declarative_analyser__V_150_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26, (MR_Integer) 5)));
#line 520 "declarative_analyser.m"
                if ((mdb__declarative_analyser__Mode_23 == (MR_Integer) 0))
#line 517 "declarative_analyser.m"
                  {
#line 517 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_147_147;

#line 10639 "mdb.declarative_analyser.c"
                    {
#line 10641 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_147_147);
                    }
#line 518 "declarative_analyser.m"
                    {
#line 518 "declarative_analyser.m"
                      mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(mdb__declarative_analyser__TypeInfo_147_147, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_155_155, &mdb__declarative_analyser__SearchSpace_51);
                    }
#line 517 "declarative_analyser.m"
                  }
#line 520 "declarative_analyser.m"
                else
#line 521 "declarative_analyser.m"
                  {
#line 521 "declarative_analyser.m"
                    MR_Word mdb__declarative_analyser__TypeInfo_149_149;

#line 10658 "mdb.declarative_analyser.c"
                    {
#line 10660 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_149_149);
                    }
#line 522 "declarative_analyser.m"
                    {
#line 522 "declarative_analyser.m"
                      mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(mdb__declarative_analyser__TypeInfo_149_149, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_155_155, &mdb__declarative_analyser__SearchSpace_51);
                    }
#line 521 "declarative_analyser.m"
                  }
#line 525 "declarative_analyser.m"
                {
#line 525 "declarative_analyser.m"
                  mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 525 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_51));
#line 525 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 1) = ((MR_Box) (mdb__declarative_analyser__V_154_154));
#line 525 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 2) = ((MR_Box) (mdb__declarative_analyser__V_153_153));
#line 525 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 3) = ((MR_Box) (mdb__declarative_analyser__V_152_152));
#line 525 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 4) = ((MR_Box) (mdb__declarative_analyser__V_151_151));
#line 525 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, 5) = ((MR_Box) (mdb__declarative_analyser__V_150_150));
#line 525 "declarative_analyser.m"
                }
#line 514 "declarative_analyser.m"
              }
#line 526 "declarative_analyser.m"
            else
#line 527 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_26_26;
#line 530 "declarative_analyser.m"
            {
#line 530 "declarative_analyser.m"
              mdb__declarative_analyser__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 530 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_8));
#line 530 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_17));
#line 530 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_18));
#line 530 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 530 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_19));
#line 530 "declarative_analyser.m"
            }
#line 529 "declarative_analyser.m"
            mdb__declarative_analyser__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 0)));
#line 529 "declarative_analyser.m"
            mdb__declarative_analyser__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 1)));
#line 529 "declarative_analyser.m"
            mdb__declarative_analyser__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 2)));
#line 529 "declarative_analyser.m"
            mdb__declarative_analyser__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 3)));
#line 529 "declarative_analyser.m"
            mdb__declarative_analyser__V_135_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 4)));
#line 529 "declarative_analyser.m"
            mdb__declarative_analyser__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_30_30, (MR_Integer) 5)));
#line 529 "declarative_analyser.m"
            {
#line 529 "declarative_analyser.m"
              MR_Word base;
#line 529 "declarative_analyser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 529 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 529 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_131_131));
#line 529 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_132_132));
#line 529 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_32_32));
#line 529 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_134_134));
#line 529 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_135_135));
#line 529 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_136_136));
#line 529 "declarative_analyser.m"
            }
#line 504 "declarative_analyser.m"
          }
#line 479 "declarative_analyser.m"
        else
#line 479 "declarative_analyser.m"
          {
#line 479 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Answer_7, (MR_Integer) 1)));
#line 479 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_163_163 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 488 "declarative_analyser.m"
            MR_Box mdb__declarative_analyser__V_157_157 = (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Answer_7, (MR_Integer) 0));
#line 489 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_158_158 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 489 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_159_159 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 489 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 489 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 489 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_162_162 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));

#line 479 "declarative_analyser.m"
            if ((mdb__declarative_analyser__V_156_156 == (MR_Integer) 0))
#line 488 "declarative_analyser.m"
              {
#line 488 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_141_141;
#line 488 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__SearchSpace_48;
#line 491 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_82_82;
#line 491 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_83_83;
#line 491 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_84_84;
#line 491 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_85_85;
#line 491 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_86_86;
#line 491 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_81_81;

#line 10788 "mdb.declarative_analyser.c"
                {
#line 10790 "mdb.declarative_analyser.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_141_141);
                }
#line 489 "declarative_analyser.m"
                {
#line 489 "declarative_analyser.m"
                  mdb__declarative_edt__assert_suspect_is_correct_3_p_0(mdb__declarative_analyser__TypeInfo_141_141, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_163_163, &mdb__declarative_analyser__SearchSpace_48);
                }
#line 491 "declarative_analyser.m"
                mdb__declarative_analyser__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 491 "declarative_analyser.m"
                mdb__declarative_analyser__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 491 "declarative_analyser.m"
                mdb__declarative_analyser__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 491 "declarative_analyser.m"
                mdb__declarative_analyser__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 491 "declarative_analyser.m"
                mdb__declarative_analyser__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 491 "declarative_analyser.m"
                mdb__declarative_analyser__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 491 "declarative_analyser.m"
                {
#line 491 "declarative_analyser.m"
                  MR_Word base;
#line 491 "declarative_analyser.m"
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 491 "declarative_analyser.m"
                  *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 491 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_48));
#line 491 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_82_82));
#line 491 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_83_83));
#line 491 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_84_84));
#line 491 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_85_85));
#line 491 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_86_86));
#line 491 "declarative_analyser.m"
                }
#line 488 "declarative_analyser.m"
              }
#line 479 "declarative_analyser.m"
            else
#line 479 "declarative_analyser.m"
              if ((mdb__declarative_analyser__V_156_156 == (MR_Integer) 1))
#line 498 "declarative_analyser.m"
                {
#line 498 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_145_145;
#line 498 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__SearchSpace_50;
#line 501 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_104_104;
#line 501 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_105_105;
#line 501 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_106_106;
#line 501 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_107_107;
#line 501 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_108_108;
#line 501 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_103_103;

#line 10857 "mdb.declarative_analyser.c"
                  {
#line 10859 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_145_145);
                  }
#line 499 "declarative_analyser.m"
                  {
#line 499 "declarative_analyser.m"
                    mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(mdb__declarative_analyser__TypeInfo_145_145, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_163_163, &mdb__declarative_analyser__SearchSpace_50);
                  }
#line 501 "declarative_analyser.m"
                  mdb__declarative_analyser__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 501 "declarative_analyser.m"
                  mdb__declarative_analyser__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 501 "declarative_analyser.m"
                  mdb__declarative_analyser__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 501 "declarative_analyser.m"
                  mdb__declarative_analyser__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 501 "declarative_analyser.m"
                  mdb__declarative_analyser__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 501 "declarative_analyser.m"
                  mdb__declarative_analyser__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 501 "declarative_analyser.m"
                  {
#line 501 "declarative_analyser.m"
                    MR_Word base;
#line 501 "declarative_analyser.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 501 "declarative_analyser.m"
                    *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 501 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_50));
#line 501 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_104_104));
#line 501 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_105_105));
#line 501 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_106_106));
#line 501 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_107_107));
#line 501 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_108_108));
#line 501 "declarative_analyser.m"
                  }
#line 498 "declarative_analyser.m"
                }
#line 479 "declarative_analyser.m"
              else
#line 493 "declarative_analyser.m"
                {
#line 493 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__TypeInfo_143_143;
#line 493 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__SearchSpace_49;
#line 496 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_93_93;
#line 496 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_94_94;
#line 496 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_95_95;
#line 496 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_96_96;
#line 496 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_97_97;
#line 496 "declarative_analyser.m"
                  MR_Word mdb__declarative_analyser__V_92_92;

#line 10924 "mdb.declarative_analyser.c"
                  {
#line 10926 "mdb.declarative_analyser.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_137, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_143_143);
                  }
#line 494 "declarative_analyser.m"
                  {
#line 494 "declarative_analyser.m"
                    mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(mdb__declarative_analyser__TypeInfo_143_143, mdb__declarative_analyser__SuspectId_8, mdb__declarative_analyser__V_163_163, &mdb__declarative_analyser__SearchSpace_49);
                  }
#line 496 "declarative_analyser.m"
                  mdb__declarative_analyser__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 0)));
#line 496 "declarative_analyser.m"
                  mdb__declarative_analyser__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 1)));
#line 496 "declarative_analyser.m"
                  mdb__declarative_analyser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 2)));
#line 496 "declarative_analyser.m"
                  mdb__declarative_analyser__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 3)));
#line 496 "declarative_analyser.m"
                  mdb__declarative_analyser__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 4)));
#line 496 "declarative_analyser.m"
                  mdb__declarative_analyser__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_24, (MR_Integer) 5)));
#line 496 "declarative_analyser.m"
                  {
#line 496 "declarative_analyser.m"
                    MR_Word base;
#line 496 "declarative_analyser.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 496 "declarative_analyser.m"
                    *mdb__declarative_analyser__STATE_VARIABLE_Analyser_25 = base;
#line 496 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_49));
#line 496 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_93_93));
#line 496 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_94_94));
#line 496 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_95_95));
#line 496 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_96_96));
#line 496 "declarative_analyser.m"
                    MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_97_97));
#line 496 "declarative_analyser.m"
                  }
#line 493 "declarative_analyser.m"
                }
#line 479 "declarative_analyser.m"
          }
#line 479 "declarative_analyser.m"
  }
#line 474 "declarative_analyser.m"
}

#line 416 "declarative_analyser.m"
static MR_Word MR_CALL 
mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(
#line 416 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1)
#line 416 "declarative_analyser.m"
{
#line 419 "declarative_analyser.m"
  {
#line 419 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 419 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__HeadVar__2_2;

#line 419 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "declarative_analyser.m"
      mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "declarative_analyser.m"
    else
#line 419 "declarative_analyser.m"
      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 422 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "declarative_analyser.m"
      else
#line 419 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3))))
#line 419 "declarative_analyser.m"
          {
#line 419 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__Weighting_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));

#line 420 "declarative_analyser.m"
            {
#line 420 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 420 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 420 "declarative_analyser.m"
            }
#line 419 "declarative_analyser.m"
          }
#line 419 "declarative_analyser.m"
        else
#line 424 "declarative_analyser.m"
          mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 419 "declarative_analyser.m"
    return mdb__declarative_analyser__HeadVar__2_2;
#line 419 "declarative_analyser.m"
  }
#line 416 "declarative_analyser.m"
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
#line 369 "declarative_analyser.m"
  {
#line 369 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 369 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 0)));
#line 369 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 1)));
#line 369 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 2)));
#line 369 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 3)));
#line 369 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 4)));

#line 369 "declarative_analyser.m"
    *mdb__declarative_analyser__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_3, (MR_Integer) 5)));
#line 369 "declarative_analyser.m"
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
#line 534 "declarative_analyser.m"
  {
#line 534 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 534 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__SearchSpace_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 535 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 535 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 535 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 535 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 535 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 546 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__RootId_9;
#line 536 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_61_61;

#line 11100 "mdb.declarative_analyser.c"
    {
#line 11102 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_61_61);
    }
#line 536 "declarative_analyser.m"
    {
#line 536 "declarative_analyser.m"
      mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_61_61, mdb__declarative_analyser__SearchSpace_8, &mdb__declarative_analyser__RootId_9);
    }
#line 546 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 537 "declarative_analyser.m"
      {
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__TypeInfo_63_63;
#line 537 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__Node_10;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__Question_11;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__SearchSpace1_12;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_15_15;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_18_18;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_19_19;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_37_37;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_39_39;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_41_41;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_42_42;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_43_43;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_45_45;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_47_47;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_31_31;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_32_32;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_33_33;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_34_34;
#line 537 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_35_35;
#line 11152 "mdb.declarative_analyser.c"
        void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11154 "mdb.declarative_analyser.c"
        MR_Box mdb__declarative_analyser__conv1_Question_11;
#line 541 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_36_36;
#line 541 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_38_38;
#line 541 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_40_40;

#line 11163 "mdb.declarative_analyser.c"
        {
#line 11165 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_63_63);
        }
#line 537 "declarative_analyser.m"
        mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 537 "declarative_analyser.m"
        mdb__declarative_analyser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 537 "declarative_analyser.m"
        mdb__declarative_analyser__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 537 "declarative_analyser.m"
        mdb__declarative_analyser__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 537 "declarative_analyser.m"
        mdb__declarative_analyser__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 537 "declarative_analyser.m"
        mdb__declarative_analyser__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 537 "declarative_analyser.m"
        {
#line 537 "declarative_analyser.m"
          mdb__declarative_analyser__Node_10 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_63_63, mdb__declarative_analyser__V_15_15, mdb__declarative_analyser__RootId_9);
        }
#line 11185 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11187 "mdb.declarative_analyser.c"
        {
#line 11189 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59), mdb__declarative_analyser__Store_5, mdb__declarative_analyser__Node_10, &mdb__declarative_analyser__conv1_Question_11);
        }
#line 11192 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__Question_11 = ((MR_Word) mdb__declarative_analyser__conv1_Question_11);
#line 539 "declarative_analyser.m"
        {
#line 539 "declarative_analyser.m"
          MR_Word base;
#line 539 "declarative_analyser.m"
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 539 "declarative_analyser.m"
          *mdb__declarative_analyser__Response_6 = base;
#line 539 "declarative_analyser.m"
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 539 "declarative_analyser.m"
          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__Question_11));
#line 539 "declarative_analyser.m"
        }
#line 540 "declarative_analyser.m"
        {
#line 540 "declarative_analyser.m"
          mdb__declarative_edt__revise_root_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, mdb__declarative_analyser__Store_5, mdb__declarative_analyser__SearchSpace_8, &mdb__declarative_analyser__SearchSpace1_12);
        }
#line 541 "declarative_analyser.m"
        mdb__declarative_analyser__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 0)));
#line 541 "declarative_analyser.m"
        mdb__declarative_analyser__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 1)));
#line 541 "declarative_analyser.m"
        mdb__declarative_analyser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 2)));
#line 541 "declarative_analyser.m"
        mdb__declarative_analyser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 3)));
#line 541 "declarative_analyser.m"
        mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 4)));
#line 541 "declarative_analyser.m"
        mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_13, (MR_Integer) 5)));
#line 543 "declarative_analyser.m"
        {
#line 543 "declarative_analyser.m"
          mdb__declarative_analyser__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 543 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_19_19, 0) = ((MR_Box) (mdb__declarative_analyser__RootId_9));
#line 543 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_19_19, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5))));
#line 543 "declarative_analyser.m"
        }
#line 543 "declarative_analyser.m"
        {
#line 543 "declarative_analyser.m"
          mdb__declarative_analyser__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 543 "declarative_analyser.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_18_18, 0) = ((MR_Box) (mdb__declarative_analyser__V_19_19));
#line 543 "declarative_analyser.m"
        }
#line 542 "declarative_analyser.m"
        mdb__declarative_analyser__V_42_42 = mdb__declarative_analyser__SearchSpace1_12;
#line 542 "declarative_analyser.m"
        mdb__declarative_analyser__V_43_43 = mdb__declarative_analyser__V_37_37;
#line 542 "declarative_analyser.m"
        mdb__declarative_analyser__V_45_45 = mdb__declarative_analyser__V_39_39;
#line 542 "declarative_analyser.m"
        mdb__declarative_analyser__V_47_47 = mdb__declarative_analyser__V_41_41;
#line 544 "declarative_analyser.m"
        {
#line 544 "declarative_analyser.m"
          MR_Word base;
#line 544 "declarative_analyser.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 544 "declarative_analyser.m"
          *mdb__declarative_analyser__STATE_VARIABLE_Analyser_14 = base;
#line 544 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_42_42));
#line 544 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_43_43));
#line 544 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 544 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 544 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_18_18));
#line 544 "declarative_analyser.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 544 "declarative_analyser.m"
        }
#line 537 "declarative_analyser.m"
      }
#line 546 "declarative_analyser.m"
    else
#line 549 "declarative_analyser.m"
      {
#line 549 "declarative_analyser.m"
        {
#line 549 "declarative_analyser.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[15])));
#line 549 "declarative_analyser.m"
          return;
        }
#line 549 "declarative_analyser.m"
      }
#line 534 "declarative_analyser.m"
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
    MR_String mdb__declarative_analyser__V_155_155;
#line 1277 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__V_156_156;
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
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[10])));
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
#line 1303 "declarative_analyser.m"
        MR_String mdb__declarative_analyser__FileName_15;
#line 1303 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__LineNo_16;
#line 1303 "declarative_analyser.m"
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
#line 11425 "mdb.declarative_analyser.c"
        {
#line 11427 "mdb.declarative_analyser.c"
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
#line 1303 "declarative_analyser.m"
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
#line 11567 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__TypeCtorInfo_138_138 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1300 "declarative_analyser.m"
            {
#line 1300 "declarative_analyser.m"
              mercury__list__append_3_p_0(mdb__declarative_analyser__TypeCtorInfo_138_138, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_32_32, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[11]), &mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59);
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
#line 1303 "declarative_analyser.m"
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
#line 11603 "mdb.declarative_analyser.c"
    mdb__declarative_analyser__TypeCtorInfo_140_140 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1311 "declarative_analyser.m"
    {
#line 1311 "declarative_analyser.m"
      mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_59_59, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[12]));
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
#line 11642 "mdb.declarative_analyser.c"
    {
#line 11644 "mdb.declarative_analyser.c"
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
#line 1336 "declarative_analyser.m"
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
#line 1318 "declarative_analyser.m"
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

#line 11701 "mdb.declarative_analyser.c"
        {
#line 11703 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_143_143);
        }
#line 1316 "declarative_analyser.m"
        {
#line 1316 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_143_143, mdb__declarative_analyser__SearchSpace_10, &mdb__declarative_analyser__RootId_22);
        }
#line 1318 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1317 "declarative_analyser.m"
          mdb__declarative_analyser__StartId_23 = mdb__declarative_analyser__RootId_22;
#line 1318 "declarative_analyser.m"
        else
#line 1319 "declarative_analyser.m"
          {
#line 1319 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_144_144;

#line 11722 "mdb.declarative_analyser.c"
            {
#line 11724 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_144_144);
            }
#line 1319 "declarative_analyser.m"
            {
#line 1319 "declarative_analyser.m"
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_144_144, mdb__declarative_analyser__SearchSpace_10, &mdb__declarative_analyser__StartId_23);
            }
#line 1319 "declarative_analyser.m"
          }
#line 11734 "mdb.declarative_analyser.c"
        {
#line 11736 "mdb.declarative_analyser.c"
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
#line 1331 "declarative_analyser.m"
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
              mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_65_65, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[13]));
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
#line 1331 "declarative_analyser.m"
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
          mdb__declarative_analyser__STATE_VARIABLE_FieldNames_87_87 = mercury__list__f_43_43_2_f_0(mdb__declarative_analyser__TypeCtorInfo_140_140, mdb__declarative_analyser__STATE_VARIABLE_FieldNames_77_77, (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_analyser_scalar_common_1[14]));
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
#line 1336 "declarative_analyser.m"
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
#line 11928 "mdb.declarative_analyser.c"
    {
#line 11930 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__V_153_153 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__WrappedReason_29, (MR_String) "\n");
    }
#line 11933 "mdb.declarative_analyser.c"
    {
#line 11935 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__V_155_155 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mdb__declarative_analyser__V_153_153);
    }
#line 11938 "mdb.declarative_analyser.c"
    {
#line 11940 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__V_156_156 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__InfoMessage_26, mdb__declarative_analyser__V_155_155);
    }
#line 11943 "mdb.declarative_analyser.c"
    {
#line 11945 "mdb.declarative_analyser.c"
      mercury__io__write_string_4_p_0(mdb__declarative_analyser__OutStream_7, mdb__declarative_analyser__V_156_156);
#line 11947 "mdb.declarative_analyser.c"
      return;
    }
#line 1277 "declarative_analyser.m"
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
#line 446 "declarative_analyser.m"
  {
#line 446 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 446 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32;

#line 450 "declarative_analyser.m"
    if ((mdb__declarative_analyser__UserMode_9 == (MR_Integer) 3))
#line 459 "declarative_analyser.m"
      {
#line 459 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 4)));
#line 459 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 0)));
#line 461 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 5)));
#line 461 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 3)));
#line 461 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 2)));
#line 461 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 1)));

#line 466 "declarative_analyser.m"
        if ((mdb__declarative_analyser__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 467 "declarative_analyser.m"
          {
#line 468 "declarative_analyser.m"
            {
#line 468 "declarative_analyser.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[8])));
#line 468 "declarative_analyser.m"
              return;
            }
#line 467 "declarative_analyser.m"
          }
#line 466 "declarative_analyser.m"
        else
#line 462 "declarative_analyser.m"
          {
#line 462 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_57_57;
#line 462 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__SuspectId_12;
#line 462 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__SearchMode_14;
#line 462 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_60_60, (MR_Integer) 0)));
#line 462 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__TopId_69;
#line 462 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__BottomId_70;
#line 462 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_13_13;
#line 933 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__RootId_68;
#line 941 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__Path_71;
#line 465 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_44_44;
#line 465 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_45_45;
#line 465 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_47_47;
#line 465 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_48_48;
#line 465 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_49_49;
#line 465 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_46_46;

#line 462 "declarative_analyser.m"
            mdb__declarative_analyser__SuspectId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, (MR_Integer) 0)));
#line 462 "declarative_analyser.m"
            mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_22_22, (MR_Integer) 1)));
#line 12050 "mdb.declarative_analyser.c"
            {
#line 12052 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_57_57);
            }
#line 930 "declarative_analyser.m"
            {
#line 930 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__root_2_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__V_64_64, &mdb__declarative_analyser__RootId_68);
            }
#line 933 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 931 "declarative_analyser.m"
              {
#line 931 "declarative_analyser.m"
                mdb__declarative_analyser__TopId_69 = mdb__declarative_analyser__RootId_68;
#line 932 "declarative_analyser.m"
                mdb__declarative_analyser__BottomId_70 = mdb__declarative_analyser__SuspectId_12;
#line 931 "declarative_analyser.m"
              }
#line 933 "declarative_analyser.m"
            else
#line 934 "declarative_analyser.m"
              {
#line 934 "declarative_analyser.m"
                {
#line 934 "declarative_analyser.m"
                  mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__V_64_64, &mdb__declarative_analyser__TopId_69);
                }
#line 935 "declarative_analyser.m"
                mdb__declarative_analyser__BottomId_70 = mdb__declarative_analyser__SuspectId_12;
#line 934 "declarative_analyser.m"
              }
#line 937 "declarative_analyser.m"
            {
#line 937 "declarative_analyser.m"
              mdb__declarative_analyser__succeeded = mdb__declarative_edt__get_path_4_p_0(mdb__declarative_analyser__TypeInfo_57_57, mdb__declarative_analyser__V_64_64, mdb__declarative_analyser__BottomId_70, mdb__declarative_analyser__TopId_69, &mdb__declarative_analyser__Path_71);
            }
#line 941 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 938 "declarative_analyser.m"
              {
#line 938 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeCtorInfo_19_79 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 938 "declarative_analyser.m"
                MR_ArrayPtr mdb__declarative_analyser__PathArray_72;
#line 938 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__Top_73;
#line 938 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__Bottom_74;
#line 938 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__V_75_75;
#line 938 "declarative_analyser.m"
                MR_ArrayPtr mdb__declarative_analyser__conv0_PathArray_72;

#line 938 "declarative_analyser.m"
                {
#line 938 "declarative_analyser.m"
                  mdb__declarative_analyser__conv0_PathArray_72 = mercury__array__from_list_1_f_0(mdb__declarative_analyser__TypeCtorInfo_19_79, mdb__declarative_analyser__Path_71);
                }
#line 938 "declarative_analyser.m"
                mdb__declarative_analyser__PathArray_72 = (MR_ArrayPtr) mdb__declarative_analyser__conv0_PathArray_72;
#line 939 "declarative_analyser.m"
                {
#line 939 "declarative_analyser.m"
                  mercury__array__bounds_3_p_0(mdb__declarative_analyser__TypeCtorInfo_19_79, (MR_ArrayPtr) mdb__declarative_analyser__PathArray_72, &mdb__declarative_analyser__Top_73, &mdb__declarative_analyser__Bottom_74);
                }
#line 940 "declarative_analyser.m"
                {
#line 940 "declarative_analyser.m"
                  mdb__declarative_analyser__V_75_75 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 940 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_75_75, 0) = ((MR_Box) (mdb__declarative_analyser__Top_73));
#line 940 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_75_75, 1) = ((MR_Box) (mdb__declarative_analyser__Bottom_74));
#line 940 "declarative_analyser.m"
                }
#line 940 "declarative_analyser.m"
                {
#line 940 "declarative_analyser.m"
                  mdb__declarative_analyser__SearchMode_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 940 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 0) = ((MR_Box) (mdb__declarative_analyser__PathArray_72));
#line 940 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 1) = ((MR_Box) (mdb__declarative_analyser__V_75_75));
#line 940 "declarative_analyser.m"
                  MR_hl_field(MR_mktag(2), mdb__declarative_analyser__SearchMode_14, 2) = ((MR_Box) (mdb__declarative_analyser__Bottom_74));
#line 940 "declarative_analyser.m"
                }
#line 938 "declarative_analyser.m"
              }
#line 941 "declarative_analyser.m"
            else
#line 942 "declarative_analyser.m"
              {
#line 942 "declarative_analyser.m"
                {
#line 942 "declarative_analyser.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[9])));
#line 942 "declarative_analyser.m"
                  return;
                }
#line 942 "declarative_analyser.m"
              }
#line 465 "declarative_analyser.m"
            mdb__declarative_analyser__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 0)));
#line 465 "declarative_analyser.m"
            mdb__declarative_analyser__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 1)));
#line 465 "declarative_analyser.m"
            mdb__declarative_analyser__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 2)));
#line 465 "declarative_analyser.m"
            mdb__declarative_analyser__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 3)));
#line 465 "declarative_analyser.m"
            mdb__declarative_analyser__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 4)));
#line 465 "declarative_analyser.m"
            mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, (MR_Integer) 5)));
#line 465 "declarative_analyser.m"
            {
#line 465 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 465 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 0) = ((MR_Box) (mdb__declarative_analyser__V_44_44));
#line 465 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__V_45_45));
#line 465 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 2) = ((MR_Box) (mdb__declarative_analyser__SearchMode_14));
#line 465 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 3) = ((MR_Box) (mdb__declarative_analyser__V_47_47));
#line 465 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 4) = ((MR_Box) (mdb__declarative_analyser__V_48_48));
#line 465 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, 5) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 465 "declarative_analyser.m"
            }
#line 462 "declarative_analyser.m"
          }
#line 459 "declarative_analyser.m"
      }
#line 450 "declarative_analyser.m"
    else
#line 450 "declarative_analyser.m"
      if ((mdb__declarative_analyser__UserMode_9 == (MR_Integer) 1))
#line 451 "declarative_analyser.m"
        {
#line 452 "declarative_analyser.m"
          {
#line 452 "declarative_analyser.m"
            mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_4[0]), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
          }
#line 451 "declarative_analyser.m"
        }
#line 450 "declarative_analyser.m"
      else
#line 450 "declarative_analyser.m"
        if ((mdb__declarative_analyser__UserMode_9 == (MR_Integer) 2))
#line 455 "declarative_analyser.m"
          {
#line 456 "declarative_analyser.m"
            {
#line 456 "declarative_analyser.m"
              mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_4[1]), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
            }
#line 455 "declarative_analyser.m"
          }
#line 450 "declarative_analyser.m"
        else
#line 448 "declarative_analyser.m"
          {
#line 449 "declarative_analyser.m"
            {
#line 449 "declarative_analyser.m"
              mdb__declarative_analyser__set_fallback_search_mode_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_15, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32);
            }
#line 448 "declarative_analyser.m"
          }
#line 472 "declarative_analyser.m"
    {
#line 472 "declarative_analyser.m"
      mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_11, mdb__declarative_analyser__STATE_VARIABLE_Analyser_32_32, mdb__declarative_analyser__STATE_VARIABLE_Analyser_16);
#line 472 "declarative_analyser.m"
      return;
    }
#line 446 "declarative_analyser.m"
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
#line 434 "declarative_analyser.m"
  {
#line 434 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 434 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22;
#line 434 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 4)));
#line 436 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 5)));
#line 436 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 3)));
#line 436 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 2)));
#line 436 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 1)));
#line 436 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, (MR_Integer) 0)));

#line 439 "declarative_analyser.m"
    if ((mdb__declarative_analyser__V_37_37 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 440 "declarative_analyser.m"
      {
#line 441 "declarative_analyser.m"
        {
#line 441 "declarative_analyser.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_analyser_scalar_common_1[7])));
#line 441 "declarative_analyser.m"
          return;
        }
#line 440 "declarative_analyser.m"
      }
#line 439 "declarative_analyser.m"
    else
#line 437 "declarative_analyser.m"
      {
#line 437 "declarative_analyser.m"
        MR_Integer mdb__declarative_analyser__SuspectId_12;
#line 437 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_37_37, (MR_Integer) 0)));
#line 437 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_13_13;

#line 437 "declarative_analyser.m"
        mdb__declarative_analyser__SuspectId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_21_21, (MR_Integer) 0)));
#line 437 "declarative_analyser.m"
        mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_21_21, (MR_Integer) 1)));
#line 438 "declarative_analyser.m"
        {
#line 438 "declarative_analyser.m"
          mdb__declarative_analyser__process_answer_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_34, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Answer_9, mdb__declarative_analyser__SuspectId_12, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_14, &mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22);
        }
#line 437 "declarative_analyser.m"
      }
#line 444 "declarative_analyser.m"
    {
#line 444 "declarative_analyser.m"
      mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_34, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_22_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_15);
#line 444 "declarative_analyser.m"
      return;
    }
#line 434 "declarative_analyser.m"
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
#line 426 "declarative_analyser.m"
  {
#line 426 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 426 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__TypeInfo_26_26;
#line 426 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__MaybeLastQuestion_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 4)));
#line 426 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__SuspectId_8;
#line 426 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__SearchSpace_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 0)));
#line 426 "declarative_analyser.m"
    MR_Box mdb__declarative_analyser__Node_11;
#line 426 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__OracleQuestion_12;
#line 426 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_13_13;
#line 426 "declarative_analyser.m"
    MR_Integer mdb__declarative_analyser__PolyConst2_25;
#line 427 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 1)));
#line 427 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 2)));
#line 427 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 3)));
#line 427 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__Analyser_5, (MR_Integer) 5)));
#line 428 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_9_9;
#line 12365 "mdb.declarative_analyser.c"
    void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12367 "mdb.declarative_analyser.c"
    MR_Box mdb__declarative_analyser__conv1_OracleQuestion_12;

#line 428 "declarative_analyser.m"
    mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__MaybeLastQuestion_7)) == (MR_mktag((MR_Integer) 1)));
#line 428 "declarative_analyser.m"
    if (mdb__declarative_analyser__succeeded)
#line 428 "declarative_analyser.m"
      {
#line 428 "declarative_analyser.m"
        mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeLastQuestion_7, (MR_Integer) 0)));
#line 428 "declarative_analyser.m"
        mdb__declarative_analyser__SuspectId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_13_13, (MR_Integer) 0)));
#line 428 "declarative_analyser.m"
        mdb__declarative_analyser__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_13_13, (MR_Integer) 1)));
#line 12382 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__PolyConst2_25 = (MR_Integer) 2;
#line 12384 "mdb.declarative_analyser.c"
        {
#line 12386 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, mdb__declarative_analyser__PolyConst2_25, &mdb__declarative_analyser__TypeInfo_26_26);
        }
#line 430 "declarative_analyser.m"
        {
#line 430 "declarative_analyser.m"
          mdb__declarative_analyser__Node_11 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_26_26, mdb__declarative_analyser__SearchSpace_10, mdb__declarative_analyser__SuspectId_8);
        }
#line 12394 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12396 "mdb.declarative_analyser.c"
        {
#line 12398 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_4, mdb__declarative_analyser__Node_11, &mdb__declarative_analyser__conv1_OracleQuestion_12);
        }
#line 12401 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__OracleQuestion_12 = ((MR_Word) mdb__declarative_analyser__conv1_OracleQuestion_12);
#line 432 "declarative_analyser.m"
        {
#line 432 "declarative_analyser.m"
          MR_Word base;
#line 432 "declarative_analyser.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 432 "declarative_analyser.m"
          *mdb__declarative_analyser__Response_6 = base;
#line 432 "declarative_analyser.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_analyser__OracleQuestion_12));
#line 432 "declarative_analyser.m"
        }
#line 432 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = MR_TRUE;
#line 428 "declarative_analyser.m"
      }
#line 426 "declarative_analyser.m"
    return mdb__declarative_analyser__succeeded;
#line 426 "declarative_analyser.m"
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
#line 373 "declarative_analyser.m"
  {
#line 373 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 373 "declarative_analyser.m"
    if ((mdb__declarative_analyser__AnalysisType_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 411 "declarative_analyser.m"
      {
#line 411 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__Response0_21;

#line 409 "declarative_analyser.m"
        {
#line 409 "declarative_analyser.m"
          mdb__declarative_analyser__succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, &mdb__declarative_analyser__Response0_21);
        }
#line 411 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 410 "declarative_analyser.m"
          {
#line 410 "declarative_analyser.m"
            *mdb__declarative_analyser__Response_10 = mdb__declarative_analyser__Response0_21;
#line 410 "declarative_analyser.m"
            *mdb__declarative_analyser__STATE_VARIABLE_Analyser_23 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22;
#line 410 "declarative_analyser.m"
          }
#line 411 "declarative_analyser.m"
        else
#line 412 "declarative_analyser.m"
          {
#line 412 "declarative_analyser.m"
            mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, mdb__declarative_analyser__STATE_VARIABLE_Analyser_23);
#line 412 "declarative_analyser.m"
            return;
          }
#line 411 "declarative_analyser.m"
      }
#line 373 "declarative_analyser.m"
    else
#line 373 "declarative_analyser.m"
      {
#line 373 "declarative_analyser.m"
        MR_Box mdb__declarative_analyser__Node_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__AnalysisType_9, (MR_Integer) 0));
#line 373 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__MaybeRequireExplicit_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 1)));
#line 373 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 0)));
#line 373 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 2)));
#line 373 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 3)));
#line 373 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 4)));
#line 373 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 5)));

#line 390 "declarative_analyser.m"
        if ((mdb__declarative_analyser__MaybeRequireExplicit_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 391 "declarative_analyser.m"
          {
#line 391 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_80_80;
#line 391 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TypeInfo_81_81;
#line 391 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__MaybeWeighting_18;
#line 391 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__TopMostId_19;
#line 391 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__Question_20;
#line 391 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25;
#line 391 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27;
#line 391 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_29_29;
#line 391 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_30_30;
#line 391 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__SearchSpace_36;
#line 391 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__FallBack_85;
#line 391 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_87_87;
#line 348 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_92_92;
#line 348 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_93_93;
#line 348 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_94_94;
#line 348 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_95_95;
#line 348 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_96_96;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_65_65;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_66_66;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_67_67;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_68_68;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_69_69;
#line 400 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_64_64;
#line 402 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_70_70;
#line 402 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_71_71;
#line 402 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_72_72;
#line 402 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_73_73;
#line 402 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_75_75;
#line 402 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_74_74;
#line 12564 "mdb.declarative_analyser.c"
            void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12566 "mdb.declarative_analyser.c"
            MR_Box mdb__declarative_analyser__conv1_Question_20;

#line 12569 "mdb.declarative_analyser.c"
            {
#line 12571 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
            }
#line 348 "declarative_analyser.m"
            mdb__declarative_analyser__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 0)));
#line 348 "declarative_analyser.m"
            mdb__declarative_analyser__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 1)));
#line 348 "declarative_analyser.m"
            mdb__declarative_analyser__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 2)));
#line 348 "declarative_analyser.m"
            mdb__declarative_analyser__FallBack_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 3)));
#line 348 "declarative_analyser.m"
            mdb__declarative_analyser__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 4)));
#line 348 "declarative_analyser.m"
            mdb__declarative_analyser__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_22, (MR_Integer) 5)));
#line 349 "declarative_analyser.m"
            {
#line 349 "declarative_analyser.m"
              mdb__declarative_analyser__V_87_87 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_80_80);
            }
#line 349 "declarative_analyser.m"
            {
#line 349 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 349 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 0) = ((MR_Box) (mdb__declarative_analyser__V_87_87));
#line 349 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 2) = ((MR_Box) (mdb__declarative_analyser__FallBack_85));
#line 349 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 3) = ((MR_Box) (mdb__declarative_analyser__FallBack_85));
#line 349 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "declarative_analyser.m"
            }
#line 397 "declarative_analyser.m"
            {
#line 397 "declarative_analyser.m"
              mdb__declarative_analyser__MaybeWeighting_18 = mdb__declarative_analyser__get_maybe_weighting_from_search_mode_1_f_0(mdb__declarative_analyser__FallBack_85);
            }
#line 399 "declarative_analyser.m"
            {
#line 399 "declarative_analyser.m"
              mdb__declarative_edt__initialise_search_space_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__MaybeWeighting_18, mdb__declarative_analyser__Node_12, &mdb__declarative_analyser__SearchSpace_36);
            }
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 0)));
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 1)));
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 2)));
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 3)));
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 4)));
#line 400 "declarative_analyser.m"
            mdb__declarative_analyser__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_25_25, (MR_Integer) 5)));
#line 400 "declarative_analyser.m"
            {
#line 400 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_36));
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 1) = ((MR_Box) (mdb__declarative_analyser__V_65_65));
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 2) = ((MR_Box) (mdb__declarative_analyser__V_66_66));
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 3) = ((MR_Box) (mdb__declarative_analyser__V_67_67));
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 4) = ((MR_Box) (mdb__declarative_analyser__V_68_68));
#line 400 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, 5) = ((MR_Box) (mdb__declarative_analyser__V_69_69));
#line 400 "declarative_analyser.m"
            }
#line 12649 "mdb.declarative_analyser.c"
            {
#line 12651 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_81_81);
            }
#line 401 "declarative_analyser.m"
            {
#line 401 "declarative_analyser.m"
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_81_81, mdb__declarative_analyser__SearchSpace_36, &mdb__declarative_analyser__TopMostId_19);
            }
#line 403 "declarative_analyser.m"
            {
#line 403 "declarative_analyser.m"
              mdb__declarative_analyser__V_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 403 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 0) = ((MR_Box) (mdb__declarative_analyser__TopMostId_19));
#line 403 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_30_30, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 403 "declarative_analyser.m"
            }
#line 403 "declarative_analyser.m"
            {
#line 403 "declarative_analyser.m"
              mdb__declarative_analyser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 403 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_29_29, 0) = ((MR_Box) (mdb__declarative_analyser__V_30_30));
#line 403 "declarative_analyser.m"
            }
#line 402 "declarative_analyser.m"
            mdb__declarative_analyser__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 0)));
#line 402 "declarative_analyser.m"
            mdb__declarative_analyser__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 1)));
#line 402 "declarative_analyser.m"
            mdb__declarative_analyser__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 2)));
#line 402 "declarative_analyser.m"
            mdb__declarative_analyser__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 3)));
#line 402 "declarative_analyser.m"
            mdb__declarative_analyser__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 4)));
#line 402 "declarative_analyser.m"
            mdb__declarative_analyser__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_27_27, (MR_Integer) 5)));
#line 402 "declarative_analyser.m"
            {
#line 402 "declarative_analyser.m"
              MR_Word base;
#line 402 "declarative_analyser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 402 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_Analyser_23 = base;
#line 402 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_70_70));
#line 402 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_71_71));
#line 402 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_72_72));
#line 402 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_73_73));
#line 402 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_29_29));
#line 402 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_75_75));
#line 402 "declarative_analyser.m"
            }
#line 12711 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12713 "mdb.declarative_analyser.c"
            {
#line 12715 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Node_12, &mdb__declarative_analyser__conv1_Question_20);
            }
#line 12718 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__Question_20 = ((MR_Word) mdb__declarative_analyser__conv1_Question_20);
#line 405 "declarative_analyser.m"
            {
#line 405 "declarative_analyser.m"
              MR_Word base;
#line 405 "declarative_analyser.m"
              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 405 "declarative_analyser.m"
              *mdb__declarative_analyser__Response_10 = base;
#line 405 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 405 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_analyser__Question_20));
#line 405 "declarative_analyser.m"
            }
#line 391 "declarative_analyser.m"
          }
#line 390 "declarative_analyser.m"
        else
#line 376 "declarative_analyser.m"
          {
#line 376 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__TreeType_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__MaybeRequireExplicit_13, (MR_Integer) 0)));
#line 376 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__SearchSpace_16;
#line 376 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33;
#line 376 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_49_49;
#line 376 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_50_50;
#line 376 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_51_51;
#line 376 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_52_52;

#line 382 "declarative_analyser.m"
            if ((mdb__declarative_analyser__TreeType_14 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 380 "declarative_analyser.m"
              {
#line 380 "declarative_analyser.m"
                mdb__declarative_edt__incorporate_explicit_supertree_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Node_12, mdb__declarative_analyser__V_37_37, &mdb__declarative_analyser__SearchSpace_16);
              }
#line 382 "declarative_analyser.m"
            else
#line 383 "declarative_analyser.m"
              {
#line 383 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_78_78;
#line 383 "declarative_analyser.m"
                MR_Integer mdb__declarative_analyser__SuspectId_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__TreeType_14, (MR_Integer) 0)));

#line 12771 "mdb.declarative_analyser.c"
                {
#line 12773 "mdb.declarative_analyser.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_78_78);
                }
#line 384 "declarative_analyser.m"
                {
#line 384 "declarative_analyser.m"
                  mdb__declarative_edt__incorporate_explicit_subtree_4_p_0(mdb__declarative_analyser__TypeInfo_78_78, mdb__declarative_analyser__SuspectId_17, mdb__declarative_analyser__Node_12, mdb__declarative_analyser__V_37_37, &mdb__declarative_analyser__SearchSpace_16);
                }
#line 383 "declarative_analyser.m"
              }
#line 387 "declarative_analyser.m"
            mdb__declarative_analyser__V_49_49 = mdb__declarative_analyser__V_38_38;
#line 387 "declarative_analyser.m"
            mdb__declarative_analyser__V_50_50 = mdb__declarative_analyser__V_39_39;
#line 387 "declarative_analyser.m"
            mdb__declarative_analyser__V_51_51 = mdb__declarative_analyser__V_40_40;
#line 387 "declarative_analyser.m"
            mdb__declarative_analyser__V_52_52 = mdb__declarative_analyser__V_41_41;
#line 388 "declarative_analyser.m"
            {
#line 388 "declarative_analyser.m"
              mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 388 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_16));
#line 388 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 388 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 2) = ((MR_Box) (mdb__declarative_analyser__V_49_49));
#line 388 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 3) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 388 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 4) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 388 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, 5) = ((MR_Box) (mdb__declarative_analyser__V_52_52));
#line 388 "declarative_analyser.m"
            }
#line 389 "declarative_analyser.m"
            {
#line 389 "declarative_analyser.m"
              mdb__declarative_analyser__decide_analyser_response_5_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Oracle_8, mdb__declarative_analyser__Response_10, mdb__declarative_analyser__STATE_VARIABLE_Analyser_33_33, mdb__declarative_analyser__STATE_VARIABLE_Analyser_23);
#line 389 "declarative_analyser.m"
              return;
            }
#line 376 "declarative_analyser.m"
          }
#line 373 "declarative_analyser.m"
      }
#line 373 "declarative_analyser.m"
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
#line 351 "declarative_analyser.m"
  {
#line 351 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 351 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 351 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 0)));
#line 351 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 1)));
#line 351 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 5)));
#line 351 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_32_32 = mdb__declarative_analyser__V_26_26;
#line 351 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_33_33 = mdb__declarative_analyser__V_27_27;
#line 351 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_35_35 = mdb__declarative_analyser__FallBackSearchMode_6;
#line 351 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_37_37 = mdb__declarative_analyser__V_31_31;
#line 351 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_38_38 = mdb__declarative_analyser__V_32_32;
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 2)));
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 3)));
#line 352 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_19, (MR_Integer) 4)));

#line 354 "declarative_analyser.m"
    {
#line 354 "declarative_analyser.m"
      mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 354 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__V_38_38));
#line 354 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__V_33_33));
#line 354 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 2) = ((MR_Box) (mdb__declarative_analyser__FallBackSearchMode_6));
#line 354 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 3) = ((MR_Box) (mdb__declarative_analyser__V_35_35));
#line 354 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 354 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, 5) = ((MR_Box) (mdb__declarative_analyser__V_37_37));
#line 354 "declarative_analyser.m"
    }
#line 361 "declarative_analyser.m"
    if ((mdb__declarative_analyser__FallBackSearchMode_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "declarative_analyser.m"
      *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 361 "declarative_analyser.m"
    else
#line 361 "declarative_analyser.m"
      if (((MR_tag((MR_Word) mdb__declarative_analyser__FallBackSearchMode_6)) == (MR_mktag((MR_Integer) 2))))
#line 364 "declarative_analyser.m"
        *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 361 "declarative_analyser.m"
      else
#line 361 "declarative_analyser.m"
        if (((MR_tag((MR_Word) mdb__declarative_analyser__FallBackSearchMode_6)) == (MR_mktag((MR_Integer) 3))))
#line 356 "declarative_analyser.m"
          {
#line 356 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__Weighting_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__FallBackSearchMode_6, (MR_Integer) 0)));
#line 356 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__SearchSpace_10;
#line 360 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_50_50;
#line 360 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_51_51;
#line 360 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_52_52;
#line 360 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_53_53;
#line 360 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_54_54;
#line 360 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_49_49;

#line 358 "declarative_analyser.m"
            {
#line 358 "declarative_analyser.m"
              mdb__declarative_edt__update_weighting_heuristic_4_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_55, mdb__declarative_analyser__Store_5, mdb__declarative_analyser__Weighting_8, mdb__declarative_analyser__V_38_38, &mdb__declarative_analyser__SearchSpace_10);
            }
#line 360 "declarative_analyser.m"
            mdb__declarative_analyser__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 0)));
#line 360 "declarative_analyser.m"
            mdb__declarative_analyser__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 1)));
#line 360 "declarative_analyser.m"
            mdb__declarative_analyser__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 2)));
#line 360 "declarative_analyser.m"
            mdb__declarative_analyser__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 3)));
#line 360 "declarative_analyser.m"
            mdb__declarative_analyser__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 4)));
#line 360 "declarative_analyser.m"
            mdb__declarative_analyser__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23, (MR_Integer) 5)));
#line 360 "declarative_analyser.m"
            {
#line 360 "declarative_analyser.m"
              MR_Word base;
#line 360 "declarative_analyser.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 360 "declarative_analyser.m"
              *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = base;
#line 360 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__SearchSpace_10));
#line 360 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_analyser__V_50_50));
#line 360 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__V_51_51));
#line 360 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__V_52_52));
#line 360 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_analyser__V_53_53));
#line 360 "declarative_analyser.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_analyser__V_54_54));
#line 360 "declarative_analyser.m"
            }
#line 356 "declarative_analyser.m"
          }
#line 361 "declarative_analyser.m"
        else
#line 362 "declarative_analyser.m"
          *mdb__declarative_analyser__STATE_VARIABLE_Analyser_20 = mdb__declarative_analyser__STATE_VARIABLE_Analyser_23_23;
#line 351 "declarative_analyser.m"
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
#line 347 "declarative_analyser.m"
  {
#line 347 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 347 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__FallBack_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 3)));
#line 347 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_8_8;
#line 348 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 0)));
#line 348 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 1)));
#line 348 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 2)));
#line 348 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 4)));
#line 348 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__STATE_VARIABLE_Analyser_0_5, (MR_Integer) 5)));

#line 349 "declarative_analyser.m"
    {
#line 349 "declarative_analyser.m"
      mdb__declarative_analyser__V_8_8 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_for_T_18);
    }
#line 349 "declarative_analyser.m"
    {
#line 349 "declarative_analyser.m"
      MR_Word base;
#line 349 "declarative_analyser.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 349 "declarative_analyser.m"
      *mdb__declarative_analyser__STATE_VARIABLE_Analyser_6 = base;
#line 349 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_8_8));
#line 349 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_analyser__FallBack_4));
#line 349 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_analyser__FallBack_4));
#line 349 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 349 "declarative_analyser.m"
    }
#line 347 "declarative_analyser.m"
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
#line 344 "declarative_analyser.m"
  {
#line 344 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 344 "declarative_analyser.m"
    MR_Word mdb__declarative_analyser__V_3_3;

#line 344 "declarative_analyser.m"
    {
#line 344 "declarative_analyser.m"
      mdb__declarative_analyser__V_3_3 = mdb__declarative_edt__empty_search_space_0_f_0(mdb__declarative_analyser__TypeInfo_for_T_9);
    }
#line 344 "declarative_analyser.m"
    {
#line 344 "declarative_analyser.m"
      MR_Word base;
#line 344 "declarative_analyser.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 344 "declarative_analyser.m"
      *mdb__declarative_analyser__Analyser_2 = base;
#line 344 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_analyser__V_3_3));
#line 344 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "declarative_analyser.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 344 "declarative_analyser.m"
    }
#line 344 "declarative_analyser.m"
  }
#line 71 "declarative_analyser.m"
}

#line 69 "declarative_analyser.m"
MR_Word MR_CALL 
mdb__declarative_analyser__top_down_search_mode_0_f_0(void)
#line 69 "declarative_analyser.m"
{
#line 231 "declarative_analyser.m"
  {
#line 231 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 231 "declarative_analyser.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 231 "declarative_analyser.m"
  }
#line 69 "declarative_analyser.m"
}

#line 67 "declarative_analyser.m"
MR_Word MR_CALL 
mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_f_0(void)
#line 67 "declarative_analyser.m"
{
#line 229 "declarative_analyser.m"
  {
#line 229 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 229 "declarative_analyser.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_4[1]);
#line 229 "declarative_analyser.m"
  }
#line 67 "declarative_analyser.m"
}

#line 65 "declarative_analyser.m"
MR_Word MR_CALL 
mdb__declarative_analyser__divide_and_query_search_mode_0_f_0(void)
#line 65 "declarative_analyser.m"
{
#line 227 "declarative_analyser.m"
  {
#line 227 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;

#line 227 "declarative_analyser.m"
    return (MR_Word) MR_mkword(MR_mktag(3), &mdb__declarative_analyser_scalar_common_4[0]);
#line 227 "declarative_analyser.m"
  }
#line 65 "declarative_analyser.m"
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

#line 59 "declarative_analyser.m"
MR_String MR_CALL 
mdb__declarative_analyser__reason_to_string_1_f_0(
#line 59 "declarative_analyser.m"
  MR_Word mdb__declarative_analyser__HeadVar__1_1)
#line 59 "declarative_analyser.m"
{
#line 1200 "declarative_analyser.m"
  {
#line 1200 "declarative_analyser.m"
    MR_bool mdb__declarative_analyser__succeeded;
#line 1200 "declarative_analyser.m"
    MR_String mdb__declarative_analyser__HeadVar__2_2;

#line 1200 "declarative_analyser.m"
    if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1245 "declarative_analyser.m"
      mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking of the marked subterm was stopped here, because the binding node lies in a portion of the tree which has been eliminated.";
#line 1200 "declarative_analyser.m"
    else
#line 1200 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1261 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "this question is being revisited, because of an unsuccessful previous bug search.";
#line 1200 "declarative_analyser.m"
      else
#line 1200 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1258 "declarative_analyser.m"
          mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "there are no more non-skipped questions left.";
#line 1200 "declarative_analyser.m"
        else
#line 1200 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1201 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "this is the node where the \140dd\' command was issued.";
#line 1200 "declarative_analyser.m"
          else
#line 1200 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1242 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking of the marked subterm had to be aborted here, because of missing tracing information.";
#line 1200 "declarative_analyser.m"
            else
#line 1200 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1239 "declarative_analyser.m"
                mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "this is the next node in the top-down search.";
#line 1200 "declarative_analyser.m"
              else
#line 1200 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
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
                      return mdb__declarative_analyser__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "this node divides a path of length ", mdb__declarative_analyser__V_73_73);
                    }
#line 1246 "declarative_analyser.m"
                  }
#line 1200 "declarative_analyser.m"
                else
#line 1200 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
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
                      if ((mdb__declarative_analyser__PredOrFunc_15 == (MR_Integer) 1))
#line 1209 "declarative_analyser.m"
                        mdb__declarative_analyser__PredOrFuncStr_16 = (MR_String) "function";
#line 1210 "declarative_analyser.m"
                      else
#line 1212 "declarative_analyser.m"
                        mdb__declarative_analyser__PredOrFuncStr_16 = (MR_String) "predicate";
#line 1214 "declarative_analyser.m"
                      {
#line 1214 "declarative_analyser.m"
                        mdb__declarative_analyser__Module_17 = mdbcomp__prim_data__sym_name_to_string_1_f_0(mdb__declarative_analyser__SymModule_12);
                      }
#line 1215 "declarative_analyser.m"
                      {
#line 1215 "declarative_analyser.m"
                        mdb__declarative_analyser__ArityStr_18 = mercury__string__int_to_string_1_f_0(mdb__declarative_analyser__Arity_14);
                      }
#line 1220 "declarative_analyser.m"
                      if ((mdb__declarative_analyser__Eliminated_8 == (MR_Integer) 0))
#line 1222 "declarative_analyser.m"
                        mdb__declarative_analyser__EliminatedSent_19 = (MR_String) "";
#line 1220 "declarative_analyser.m"
                      else
#line 1219 "declarative_analyser.m"
                        mdb__declarative_analyser__EliminatedSent_19 = (MR_String) " That node was, however, previously eliminated from the bug search.";
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
                        return mdb__declarative_analyser__HeadVar__2_2 = mercury__string__f_43_43_2_f_0((MR_String) "the marked subterm was bound by the ", mdb__declarative_analyser__V_32_32);
                      }
#line 1203 "declarative_analyser.m"
                    }
#line 1200 "declarative_analyser.m"
                  else
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
                        return mdb__declarative_analyser__HeadVar__2_2 = mdb__declarative_analyser__weighting_to_reason_string_3_f_0(mdb__declarative_analyser__Weighting_81, mdb__declarative_analyser__V_84_84, mdb__declarative_analyser__SubtreeWeight_83);
                      }
#line 1254 "declarative_analyser.m"
                    }
#line 1200 "declarative_analyser.m"
    return mdb__declarative_analyser__HeadVar__2_2;
#line 1200 "declarative_analyser.m"
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
