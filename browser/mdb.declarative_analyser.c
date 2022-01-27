/*
** Automatically generated from `declarative_analyser.m'
** by the Mercury compiler,
** version 14.01-beta-2014-01-02, configured for x86_64-apple-darwin12.5.0.
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




#line 91 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2;

#line 94 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2;

#line 97 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0;

#line 100 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 103 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 106 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1[2];

#line 109 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1;

#line 112 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2[1];

#line 115 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2;

#line 118 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3[1];

#line 121 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3;

#line 124 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4[1];

#line 127 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4;

#line 130 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5[1];

#line 133 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5;

#line 136 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0[1];

#line 139 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1[1];

#line 142 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2[1];

#line 145 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3[3];

#line 148 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_response_1[4];

#line 151 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1[6];

#line 154 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1[6];

#line 157 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1;

#line 160 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0;

#line 163 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0;

#line 166 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1;

#line 169 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1;

#line 172 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0[6];

#line 175 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0[6];

#line 178 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0;

#line 181 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[1];

#line 184 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[1];

#line 187 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1[1];

#line 190 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1[1];

#line 193 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0[1];

#line 196 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0;

#line 199 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1;

#line 202 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[1];

#line 205 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[1];

#line 208 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analysis_type_1[2];

#line 211 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1[2];

#line 214 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1[2];

#line 217 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0[1];

#line 220 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0;

#line 223 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1;

#line 226 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[1];

#line 229 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[1];

#line 232 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_explicit_tree_type_0[2];

#line 235 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0[2];

#line 238 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0[2];

#line 241 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0;

#line 244 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1;

#line 247 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0;

#line 250 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0;

#line 253 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2[6];

#line 256 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2[6];

#line 259 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2;

#line 262 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3;

#line 265 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4;

#line 268 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3];

#line 271 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3];

#line 274 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5;

#line 277 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3];

#line 280 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3];

#line 283 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6;

#line 286 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7;

#line 289 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8;

#line 292 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0[6];

#line 295 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1[1];

#line 298 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2[1];

#line 301 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3[1];

#line 304 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_reason_for_question_0[4];

#line 307 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_reason_for_question_0[9];

#line 310 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_reason_for_question_0[9];

#line 313 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0;

#line 316 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 319 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1[5];

#line 322 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1;

#line 325 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0;

#line 328 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0;

#line 331 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3];

#line 334 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3];

#line 337 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2;

#line 340 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1];

#line 343 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3;

#line 346 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0[1];

#line 349 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1[1];

#line 352 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2[1];

#line 355 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3[1];

#line 358 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_mode_0[4];

#line 361 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0[4];

#line 364 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0[4];

#line 367 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0[2];

#line 370 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0;

#line 373 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1[1];

#line 376 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1;

#line 379 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2;

#line 382 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3;

#line 385 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4[3];

#line 388 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4;

#line 391 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0[2];

#line 394 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1[1];

#line 397 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2[1];

#line 400 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3[1];

#line 403 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_search_response_0[4];

#line 406 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0[5];

#line 409 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0[5];

#line 412 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0[2];

#line 415 "mdb.declarative_analyser.c"
static const MR_DuFunctorDesc mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0;

#line 418 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[1];

#line 421 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[1];

#line 424 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0[1];

#line 427 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0[1];

#line 430 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
#line 433 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 435 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 437 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 440 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
#line 443 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 445 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 447 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 449 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 452 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
#line 455 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 457 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 459 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 462 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
#line 465 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 467 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 469 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 471 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 474 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
#line 477 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 479 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 481 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 484 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
#line 487 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 489 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 491 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 493 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4);

#line 496 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
#line 499 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 501 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 504 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
#line 507 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 509 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 511 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 514 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
#line 517 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 519 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 522 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
#line 525 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 527 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 529 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 532 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
#line 535 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 537 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 540 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
#line 543 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 545 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 547 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 550 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
#line 553 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 555 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 558 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
#line 561 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 563 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 565 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3);

#line 568 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
#line 571 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 573 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2);

#line 576 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
#line 579 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 581 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 583 "mdb.declarative_analyser.c"
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



#line 1294 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1302 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1310 "mdb.declarative_analyser.c"
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

#line 1325 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1333 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
  }
};

#line 1341 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_1[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_bug_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1347 "mdb.declarative_analyser.c"
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

#line 1362 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_2[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1367 "mdb.declarative_analyser.c"
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

#line 1382 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1387 "mdb.declarative_analyser.c"
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

#line 1402 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1407 "mdb.declarative_analyser.c"
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

#line 1422 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_response_1_5[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
};

#line 1427 "mdb.declarative_analyser.c"
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

#line 1442 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0
};

#line 1447 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1
};

#line 1452 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2
};

#line 1457 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_response_1_3[3] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5
};

#line 1464 "mdb.declarative_analyser.c"
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

#line 1488 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_response_1[6] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_response_1_5
};

#line 1498 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_response_1[6] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
};

#line 1508 "mdb.declarative_analyser.c"
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

#line 1529 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1537 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0
  }
};

#line 1545 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0
  }
};

#line 1553 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1561 "mdb.declarative_analyser.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
  }
};

#line 1569 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analyser_state_1_0[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_edt__pti_search_space_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_explicit_tree_type_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_search_mode_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1mdb__declarative_analyser__type_ctor_info_suspect_and_reason_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__pti_maybe_1__pseudo_mdb__declarative_edt__pti_subterm_origin_1__pseudo_1
};

#line 1579 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_analyser_state_1_0[6] = {
  (MR_String) "search_space",
  (MR_String) "require_explicit",
  (MR_String) "search_mode",
  (MR_String) "fallback_search_mode",
  (MR_String) "last_search_question",
  (MR_String) "debug_origin"
};

#line 1589 "mdb.declarative_analyser.c"
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

#line 1604 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

#line 1609 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_analyser_state_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analyser_state_1_0
  }
};

#line 1618 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analyser_state_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analyser_state_1_0
};

#line 1623 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analyser_state_1[1] = {
  (MR_Integer) 0
};

#line 1628 "mdb.declarative_analyser.c"
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

#line 1649 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_analysis_type_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1654 "mdb.declarative_analyser.c"
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

#line 1669 "mdb.declarative_analyser.c"
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

#line 1684 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

#line 1689 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_analysis_type_1_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0
};

#line 1694 "mdb.declarative_analyser.c"
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

#line 1708 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_analysis_type_1[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_analysis_type_1_1
};

#line 1714 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_analysis_type_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1720 "mdb.declarative_analyser.c"
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

#line 1741 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_explicit_tree_type_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1746 "mdb.declarative_analyser.c"
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

#line 1761 "mdb.declarative_analyser.c"
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

#line 1776 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

#line 1781 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_explicit_tree_type_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0
};

#line 1786 "mdb.declarative_analyser.c"
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

#line 1800 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_explicit_tree_type_0[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_explicit_tree_type_0_1
};

#line 1806 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_explicit_tree_type_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1812 "mdb.declarative_analyser.c"
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

#line 1833 "mdb.declarative_analyser.c"
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

#line 1848 "mdb.declarative_analyser.c"
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

#line 1863 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1871 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 1879 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_2[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__prim_data__mdbcomp__prim_data__type_ctor_info_proc_label_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1889 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_2[6] = {
  (MR_String) "binding_prim_op",
  (MR_String) "binding_filename",
  (MR_String) "binding_line_no",
  (MR_String) "maybe_atom_path",
  (MR_String) "binding_proc",
  (MR_String) "binding_node_eliminated"
};

#line 1899 "mdb.declarative_analyser.c"
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

#line 1914 "mdb.declarative_analyser.c"
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

#line 1929 "mdb.declarative_analyser.c"
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

#line 1944 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_5[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1951 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_5[3] = {
  (MR_String) "binary_reason_bottom",
  (MR_String) "binary_reason_top",
  (MR_String) "binary_reason_split"
};

#line 1958 "mdb.declarative_analyser.c"
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

#line 1973 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_reason_for_question_0_6[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1980 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_reason_for_question_0_6[3] = {
  (MR_String) "dq_weighting",
  (MR_String) "dq_old_weight",
  (MR_String) "dq_chosen_subtree_weight"
};

#line 1987 "mdb.declarative_analyser.c"
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

#line 2002 "mdb.declarative_analyser.c"
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

#line 2017 "mdb.declarative_analyser.c"
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

#line 2032 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_0[6] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_7,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_8
};

#line 2042 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_2
};

#line 2047 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_5
};

#line 2052 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_reason_for_question_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_reason_for_question_0_6
};

#line 2057 "mdb.declarative_analyser.c"
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

#line 2081 "mdb.declarative_analyser.c"
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

#line 2094 "mdb.declarative_analyser.c"
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

#line 2107 "mdb.declarative_analyser.c"
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

#line 2128 "mdb.declarative_analyser.c"
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

#line 2143 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2151 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_1[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0
};

#line 2160 "mdb.declarative_analyser.c"
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

#line 2175 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2183 "mdb.declarative_analyser.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2192 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_2[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__array__ti_array_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__pair__ti_pair_2builtin__type_ctor_info_int_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2199 "mdb.declarative_analyser.c"
static const MR_ConstString mdb__declarative_analyser__mdb__declarative_analyser__field_names_search_mode_0_2[3] = {
  (MR_String) "suspects",
  (MR_String) "range",
  (MR_String) "last_tested"
};

#line 2206 "mdb.declarative_analyser.c"
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

#line 2221 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_mode_0_3[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
};

#line 2226 "mdb.declarative_analyser.c"
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

#line 2241 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0
};

#line 2246 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1
};

#line 2251 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2
};

#line 2256 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_mode_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3
};

#line 2261 "mdb.declarative_analyser.c"
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

#line 2285 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_mode_0[4] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_mode_0_0
};

#line 2293 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_mode_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2301 "mdb.declarative_analyser.c"
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

#line 2322 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

#line 2328 "mdb.declarative_analyser.c"
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

#line 2343 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2348 "mdb.declarative_analyser.c"
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

#line 2363 "mdb.declarative_analyser.c"
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

#line 2378 "mdb.declarative_analyser.c"
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

#line 2393 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_search_response_0_4[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2400 "mdb.declarative_analyser.c"
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

#line 2415 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_0[2] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3
};

#line 2421 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_1[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0
};

#line 2426 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_2[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1
};

#line 2431 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_search_response_0_3[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4
};

#line 2436 "mdb.declarative_analyser.c"
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

#line 2460 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_search_response_0[5] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_4,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_3,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_0,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_1,
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_search_response_0_2
};

#line 2469 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_search_response_0[5] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 2478 "mdb.declarative_analyser.c"
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

#line 2499 "mdb.declarative_analyser.c"
static const MR_PseudoTypeInfo mdb__declarative_analyser__mdb__declarative_analyser__field_types_suspect_and_reason_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_reason_for_question_0
};

#line 2505 "mdb.declarative_analyser.c"
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

#line 2520 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

#line 2525 "mdb.declarative_analyser.c"
static const MR_DuPtagLayout mdb__declarative_analyser__mdb__declarative_analyser__du_ptag_ordered_suspect_and_reason_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_analyser__mdb__declarative_analyser__du_stag_ordered_suspect_and_reason_0_0
  }
};

#line 2534 "mdb.declarative_analyser.c"
static const MR_DuFunctorDescPtr mdb__declarative_analyser__mdb__declarative_analyser__du_name_ordered_suspect_and_reason_0[1] = {
  &mdb__declarative_analyser__mdb__declarative_analyser__du_functor_desc_suspect_and_reason_0_0
};

#line 2539 "mdb.declarative_analyser.c"
static const MR_Integer mdb__declarative_analyser__mdb__declarative_analyser__functor_number_map_suspect_and_reason_0[1] = {
  (MR_Integer) 0
};

#line 2544 "mdb.declarative_analyser.c"
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

#line 2565 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_response_1_0_10001(
#line 2568 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2570 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2572 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2574 "mdb.declarative_analyser.c"
{
#line 2576 "mdb.declarative_analyser.c"
  {
#line 2578 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2581 "mdb.declarative_analyser.c"
    {
#line 2583 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analyser_response_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2586 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2588 "mdb.declarative_analyser.c"
  }
#line 2590 "mdb.declarative_analyser.c"
}

#line 2593 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_response_1_0_10001(
#line 2596 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2598 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2600 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2602 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2604 "mdb.declarative_analyser.c"
{
#line 2606 "mdb.declarative_analyser.c"
  {
#line 2608 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2611 "mdb.declarative_analyser.c"
    {
#line 2613 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analyser_response_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2616 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2618 "mdb.declarative_analyser.c"
  }
#line 2620 "mdb.declarative_analyser.c"
}

#line 2623 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analyser_state_1_0_10001(
#line 2626 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2628 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2630 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2632 "mdb.declarative_analyser.c"
{
#line 2634 "mdb.declarative_analyser.c"
  {
#line 2636 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2639 "mdb.declarative_analyser.c"
    {
#line 2641 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analyser_state_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2644 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2646 "mdb.declarative_analyser.c"
  }
#line 2648 "mdb.declarative_analyser.c"
}

#line 2651 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analyser_state_1_0_10001(
#line 2654 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2656 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2658 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2660 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2662 "mdb.declarative_analyser.c"
{
#line 2664 "mdb.declarative_analyser.c"
  {
#line 2666 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2669 "mdb.declarative_analyser.c"
    {
#line 2671 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analyser_state_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2674 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2676 "mdb.declarative_analyser.c"
  }
#line 2678 "mdb.declarative_analyser.c"
}

#line 2681 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____analysis_type_1_0_10001(
#line 2684 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2686 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2688 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2690 "mdb.declarative_analyser.c"
{
#line 2692 "mdb.declarative_analyser.c"
  {
#line 2694 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2697 "mdb.declarative_analyser.c"
    {
#line 2699 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____analysis_type_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2702 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2704 "mdb.declarative_analyser.c"
  }
#line 2706 "mdb.declarative_analyser.c"
}

#line 2709 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____analysis_type_1_0_10001(
#line 2712 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2714 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_2,
#line 2716 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3,
#line 2718 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_4)
#line 2720 "mdb.declarative_analyser.c"
{
#line 2722 "mdb.declarative_analyser.c"
  {
#line 2724 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2727 "mdb.declarative_analyser.c"
    {
#line 2729 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____analysis_type_1_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), &mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_3), ((MR_Word) mdb__declarative_analyser__wrapper_arg_4));
    }
#line 2732 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_2 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2734 "mdb.declarative_analyser.c"
  }
#line 2736 "mdb.declarative_analyser.c"
}

#line 2739 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____explicit_tree_type_0_0_10001(
#line 2742 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2744 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2746 "mdb.declarative_analyser.c"
{
#line 2748 "mdb.declarative_analyser.c"
  {
#line 2750 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2753 "mdb.declarative_analyser.c"
    {
#line 2755 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____explicit_tree_type_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2758 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2760 "mdb.declarative_analyser.c"
  }
#line 2762 "mdb.declarative_analyser.c"
}

#line 2765 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____explicit_tree_type_0_0_10001(
#line 2768 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2770 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2772 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2774 "mdb.declarative_analyser.c"
{
#line 2776 "mdb.declarative_analyser.c"
  {
#line 2778 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2781 "mdb.declarative_analyser.c"
    {
#line 2783 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____explicit_tree_type_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2786 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2788 "mdb.declarative_analyser.c"
  }
#line 2790 "mdb.declarative_analyser.c"
}

#line 2793 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____reason_for_question_0_0_10001(
#line 2796 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2798 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2800 "mdb.declarative_analyser.c"
{
#line 2802 "mdb.declarative_analyser.c"
  {
#line 2804 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2807 "mdb.declarative_analyser.c"
    {
#line 2809 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____reason_for_question_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2812 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2814 "mdb.declarative_analyser.c"
  }
#line 2816 "mdb.declarative_analyser.c"
}

#line 2819 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____reason_for_question_0_0_10001(
#line 2822 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2824 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2826 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2828 "mdb.declarative_analyser.c"
{
#line 2830 "mdb.declarative_analyser.c"
  {
#line 2832 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2835 "mdb.declarative_analyser.c"
    {
#line 2837 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____reason_for_question_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2840 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2842 "mdb.declarative_analyser.c"
  }
#line 2844 "mdb.declarative_analyser.c"
}

#line 2847 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_mode_0_0_10001(
#line 2850 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2852 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2854 "mdb.declarative_analyser.c"
{
#line 2856 "mdb.declarative_analyser.c"
  {
#line 2858 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2861 "mdb.declarative_analyser.c"
    {
#line 2863 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2866 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2868 "mdb.declarative_analyser.c"
  }
#line 2870 "mdb.declarative_analyser.c"
}

#line 2873 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_mode_0_0_10001(
#line 2876 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2878 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2880 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2882 "mdb.declarative_analyser.c"
{
#line 2884 "mdb.declarative_analyser.c"
  {
#line 2886 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2889 "mdb.declarative_analyser.c"
    {
#line 2891 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____search_mode_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2894 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2896 "mdb.declarative_analyser.c"
  }
#line 2898 "mdb.declarative_analyser.c"
}

#line 2901 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____search_response_0_0_10001(
#line 2904 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2906 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2908 "mdb.declarative_analyser.c"
{
#line 2910 "mdb.declarative_analyser.c"
  {
#line 2912 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2915 "mdb.declarative_analyser.c"
    {
#line 2917 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_response_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2920 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2922 "mdb.declarative_analyser.c"
  }
#line 2924 "mdb.declarative_analyser.c"
}

#line 2927 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____search_response_0_0_10001(
#line 2930 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2932 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2934 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2936 "mdb.declarative_analyser.c"
{
#line 2938 "mdb.declarative_analyser.c"
  {
#line 2940 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2943 "mdb.declarative_analyser.c"
    {
#line 2945 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____search_response_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 2948 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 2950 "mdb.declarative_analyser.c"
  }
#line 2952 "mdb.declarative_analyser.c"
}

#line 2955 "mdb.declarative_analyser.c"
static MR_bool MR_CALL 
mdb__declarative_analyser____Unify____suspect_and_reason_0_0_10001(
#line 2958 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_1,
#line 2960 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2)
#line 2962 "mdb.declarative_analyser.c"
{
#line 2964 "mdb.declarative_analyser.c"
  {
#line 2966 "mdb.declarative_analyser.c"
    MR_bool mdb__declarative_analyser__succeeded;

#line 2969 "mdb.declarative_analyser.c"
    {
#line 2971 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____suspect_and_reason_0_0(((MR_Word) mdb__declarative_analyser__wrapper_arg_1), ((MR_Word) mdb__declarative_analyser__wrapper_arg_2));
    }
#line 2974 "mdb.declarative_analyser.c"
    return mdb__declarative_analyser__succeeded;
#line 2976 "mdb.declarative_analyser.c"
  }
#line 2978 "mdb.declarative_analyser.c"
}

#line 2981 "mdb.declarative_analyser.c"
static void MR_CALL 
mdb__declarative_analyser____Compare____suspect_and_reason_0_0_10001(
#line 2984 "mdb.declarative_analyser.c"
  MR_Box * mdb__declarative_analyser__wrapper_arg_1,
#line 2986 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_2,
#line 2988 "mdb.declarative_analyser.c"
  MR_Box mdb__declarative_analyser__wrapper_arg_3)
#line 2990 "mdb.declarative_analyser.c"
{
#line 2992 "mdb.declarative_analyser.c"
  {
#line 2994 "mdb.declarative_analyser.c"
    MR_Word mdb__declarative_analyser__conv0_HeadVar__1_1;

#line 2997 "mdb.declarative_analyser.c"
    {
#line 2999 "mdb.declarative_analyser.c"
      mdb__declarative_analyser____Compare____suspect_and_reason_0_0(&mdb__declarative_analyser__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_analyser__wrapper_arg_2), ((MR_Word) mdb__declarative_analyser__wrapper_arg_3));
    }
#line 3002 "mdb.declarative_analyser.c"
    *mdb__declarative_analyser__wrapper_arg_1 = ((MR_Box) (mdb__declarative_analyser__conv0_HeadVar__1_1));
#line 3004 "mdb.declarative_analyser.c"
  }
#line 3006 "mdb.declarative_analyser.c"
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

#line 3037 "mdb.declarative_analyser.c"
    {
#line 3039 "mdb.declarative_analyser.c"
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

#line 3092 "mdb.declarative_analyser.c"
    {
#line 3094 "mdb.declarative_analyser.c"
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

#line 3127 "mdb.declarative_analyser.c"
    {
#line 3129 "mdb.declarative_analyser.c"
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

#line 3164 "mdb.declarative_analyser.c"
    {
#line 3166 "mdb.declarative_analyser.c"
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
#line 3205 "mdb.declarative_analyser.c"
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
#line 3227 "mdb.declarative_analyser.c"
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

#line 3288 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_3_3 == mdb__declarative_analyser__V_5_5);
#line 331 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 3292 "mdb.declarative_analyser.c"
          {
#line 3294 "mdb.declarative_analyser.c"
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
#line 3330 "mdb.declarative_analyser.c"
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
#line 3350 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
            else
#line 237 "declarative_analyser.m"
              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3356 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
              else
#line 3360 "mdb.declarative_analyser.c"
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
#line 3380 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
              else
#line 237 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3386 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
                else
#line 3390 "mdb.declarative_analyser.c"
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
#line 3407 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
              else
#line 237 "declarative_analyser.m"
                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3413 "mdb.declarative_analyser.c"
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
#line 3435 "mdb.declarative_analyser.c"
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
#line 3455 "mdb.declarative_analyser.c"
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
#line 3484 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 237 "declarative_analyser.m"
                    else
#line 3488 "mdb.declarative_analyser.c"
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
#line 3505 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
                else
#line 237 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3511 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
                  else
#line 237 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3517 "mdb.declarative_analyser.c"
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
#line 3537 "mdb.declarative_analyser.c"
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
#line 3558 "mdb.declarative_analyser.c"
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
#line 3571 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
                else
#line 237 "declarative_analyser.m"
                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3577 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
                  else
#line 237 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3583 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 237 "declarative_analyser.m"
                    else
#line 237 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3589 "mdb.declarative_analyser.c"
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
#line 3703 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_13_13 == mdb__declarative_analyser__V_16_16);
#line 237 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 237 "declarative_analyser.m"
                    {
#line 3709 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__TypeInfo_22_22 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[6];
#line 3711 "mdb.declarative_analyser.c"
                      {
#line 3713 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_22_22, ((MR_Box) (mdb__declarative_analyser__V_14_14)), ((MR_Box) (mdb__declarative_analyser__V_17_17)));
                      }
#line 237 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 237 "declarative_analyser.m"
                        {
#line 3720 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__TypeInfo_23_23 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[6];
#line 3722 "mdb.declarative_analyser.c"
                          {
#line 3724 "mdb.declarative_analyser.c"
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
#line 3760 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_3_3 == mdb__declarative_analyser__V_5_5);
#line 237 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 3764 "mdb.declarative_analyser.c"
                      {
#line 3766 "mdb.declarative_analyser.c"
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
#line 3790 "mdb.declarative_analyser.c"
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
#line 3827 "mdb.declarative_analyser.c"
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
#line 3841 "mdb.declarative_analyser.c"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "declarative_analyser.m"
          else
#line 169 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 3847 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "declarative_analyser.m"
            else
#line 3851 "mdb.declarative_analyser.c"
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
#line 3868 "mdb.declarative_analyser.c"
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
#line 3890 "mdb.declarative_analyser.c"
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
#line 3910 "mdb.declarative_analyser.c"
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
#line 3935 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "declarative_analyser.m"
                else
#line 3939 "mdb.declarative_analyser.c"
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
#line 3954 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "declarative_analyser.m"
              else
#line 169 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3960 "mdb.declarative_analyser.c"
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
#line 3986 "mdb.declarative_analyser.c"
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
#line 4007 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 169 "declarative_analyser.m"
              else
#line 169 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4013 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 169 "declarative_analyser.m"
                else
#line 169 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3))))
#line 4019 "mdb.declarative_analyser.c"
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
#line 4043 "mdb.declarative_analyser.c"
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
#line 4063 "mdb.declarative_analyser.c"
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
#line 4083 "mdb.declarative_analyser.c"
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
#line 4103 "mdb.declarative_analyser.c"
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
#line 4218 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__TypeCtorInfo_25_25 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0;
#line 4220 "mdb.declarative_analyser.c"
                {
#line 4222 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mercury__array____Unify____array_1_0(mdb__declarative_analyser__TypeCtorInfo_25_25, (MR_ArrayPtr) mdb__declarative_analyser__V_15_15, (MR_ArrayPtr) mdb__declarative_analyser__V_18_18);
                }
#line 169 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                  {
#line 4229 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeInfo_26_26 = (MR_Word) &mdb__declarative_analyser_scalar_common_2[0];
#line 4231 "mdb.declarative_analyser.c"
                    {
#line 4233 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_26_26, ((MR_Box) (mdb__declarative_analyser__V_16_16)), ((MR_Box) (mdb__declarative_analyser__V_19_19)));
                    }
#line 169 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 4238 "mdb.declarative_analyser.c"
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
#line 4265 "mdb.declarative_analyser.c"
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
#line 4316 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_5_5 == mdb__declarative_analyser__V_10_10);
#line 169 "declarative_analyser.m"
                  if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                    {
#line 4322 "mdb.declarative_analyser.c"
                      {
#line 4324 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_analyser__V_6_6, mdb__declarative_analyser__V_11_11);
                      }
#line 169 "declarative_analyser.m"
                      if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                        {
#line 4331 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__TypeInfo_29_29 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[2];
#line 4333 "mdb.declarative_analyser.c"
                          {
#line 4335 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_29_29, ((MR_Box) (mdb__declarative_analyser__V_7_7)), ((MR_Box) (mdb__declarative_analyser__V_12_12)));
                          }
#line 169 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 169 "declarative_analyser.m"
                            {
#line 4342 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_30_30 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[5];
#line 4344 "mdb.declarative_analyser.c"
                              {
#line 4346 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_30_30, ((MR_Box) (mdb__declarative_analyser__V_8_8)), ((MR_Box) (mdb__declarative_analyser__V_13_13)));
                              }
#line 169 "declarative_analyser.m"
                              if (mdb__declarative_analyser__succeeded)
#line 4351 "mdb.declarative_analyser.c"
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
#line 4394 "mdb.declarative_analyser.c"
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
#line 4438 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                    else
#line 247 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4444 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                      else
#line 4448 "mdb.declarative_analyser.c"
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
#line 4492 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                      else
#line 247 "declarative_analyser.m"
                        if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4498 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                        else
#line 4502 "mdb.declarative_analyser.c"
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
#line 4546 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                        else
#line 247 "declarative_analyser.m"
                          if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4552 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                          else
#line 4556 "mdb.declarative_analyser.c"
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
#line 4600 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                          else
#line 247 "declarative_analyser.m"
                            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4606 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                            else
#line 4610 "mdb.declarative_analyser.c"
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
#line 4654 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                            else
#line 247 "declarative_analyser.m"
                              if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4660 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                              else
#line 4664 "mdb.declarative_analyser.c"
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
#line 4708 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                              else
#line 247 "declarative_analyser.m"
                                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4714 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                                else
#line 4718 "mdb.declarative_analyser.c"
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
#line 4735 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                      else
#line 247 "declarative_analyser.m"
                        if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 4741 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                        else
#line 247 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 4747 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                          else
#line 247 "declarative_analyser.m"
                            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4753 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                            else
#line 247 "declarative_analyser.m"
                              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4759 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                              else
#line 247 "declarative_analyser.m"
                                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4765 "mdb.declarative_analyser.c"
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
#line 4787 "mdb.declarative_analyser.c"
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
#line 4807 "mdb.declarative_analyser.c"
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
#line 4832 "mdb.declarative_analyser.c"
                                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                    else
#line 4836 "mdb.declarative_analyser.c"
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
#line 4861 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                        else
#line 247 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 4867 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                          else
#line 247 "declarative_analyser.m"
                            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 4873 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                            else
#line 247 "declarative_analyser.m"
                              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4879 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                              else
#line 247 "declarative_analyser.m"
                                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4885 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                                else
#line 247 "declarative_analyser.m"
                                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4891 "mdb.declarative_analyser.c"
                                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                  else
#line 247 "declarative_analyser.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4897 "mdb.declarative_analyser.c"
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
#line 4929 "mdb.declarative_analyser.c"
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
#line 4949 "mdb.declarative_analyser.c"
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
#line 4969 "mdb.declarative_analyser.c"
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
#line 4989 "mdb.declarative_analyser.c"
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
#line 5009 "mdb.declarative_analyser.c"
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
#line 5047 "mdb.declarative_analyser.c"
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
#line 5064 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                        else
#line 247 "declarative_analyser.m"
                          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 5070 "mdb.declarative_analyser.c"
                            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                          else
#line 247 "declarative_analyser.m"
                            if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 5076 "mdb.declarative_analyser.c"
                              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 247 "declarative_analyser.m"
                            else
#line 247 "declarative_analyser.m"
                              if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5082 "mdb.declarative_analyser.c"
                                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                              else
#line 247 "declarative_analyser.m"
                                if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 5088 "mdb.declarative_analyser.c"
                                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                else
#line 247 "declarative_analyser.m"
                                  if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5094 "mdb.declarative_analyser.c"
                                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                  else
#line 247 "declarative_analyser.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5100 "mdb.declarative_analyser.c"
                                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 247 "declarative_analyser.m"
                                    else
#line 247 "declarative_analyser.m"
                                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5106 "mdb.declarative_analyser.c"
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
#line 5130 "mdb.declarative_analyser.c"
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
#line 5150 "mdb.declarative_analyser.c"
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
#line 5323 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_23_23 == mdb__declarative_analyser__V_26_26);
#line 247 "declarative_analyser.m"
                          if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                            {
#line 5329 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_24_24 == mdb__declarative_analyser__V_27_27);
#line 247 "declarative_analyser.m"
                              if (mdb__declarative_analyser__succeeded)
#line 5333 "mdb.declarative_analyser.c"
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
#line 5392 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_7_7 == mdb__declarative_analyser__V_13_13);
#line 247 "declarative_analyser.m"
                            if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                              {
#line 5398 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = (strcmp(mdb__declarative_analyser__V_8_8, mdb__declarative_analyser__V_14_14) == 0);
#line 247 "declarative_analyser.m"
                                if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                  {
#line 5404 "mdb.declarative_analyser.c"
                                    mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_9_9 == mdb__declarative_analyser__V_15_15);
#line 247 "declarative_analyser.m"
                                    if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                      {
#line 5410 "mdb.declarative_analyser.c"
                                        mdb__declarative_analyser__TypeInfo_41_41 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[3];
#line 5412 "mdb.declarative_analyser.c"
                                        {
#line 5414 "mdb.declarative_analyser.c"
                                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_41_41, ((MR_Box) (mdb__declarative_analyser__V_10_10)), ((MR_Box) (mdb__declarative_analyser__V_16_16)));
                                        }
#line 247 "declarative_analyser.m"
                                        if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                                          {
#line 5421 "mdb.declarative_analyser.c"
                                            {
#line 5423 "mdb.declarative_analyser.c"
                                              mdb__declarative_analyser__succeeded = mdbcomp__prim_data____Unify____proc_label_0_0(mdb__declarative_analyser__V_11_11, mdb__declarative_analyser__V_17_17);
                                            }
#line 247 "declarative_analyser.m"
                                            if (mdb__declarative_analyser__succeeded)
#line 5428 "mdb.declarative_analyser.c"
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
#line 5471 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_29_29 == mdb__declarative_analyser__V_32_32);
#line 247 "declarative_analyser.m"
                            if (mdb__declarative_analyser__succeeded)
#line 247 "declarative_analyser.m"
                              {
#line 5477 "mdb.declarative_analyser.c"
                                mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_30_30 == mdb__declarative_analyser__V_33_33);
#line 247 "declarative_analyser.m"
                                if (mdb__declarative_analyser__succeeded)
#line 5481 "mdb.declarative_analyser.c"
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
#line 5520 "mdb.declarative_analyser.c"
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
#line 5532 "mdb.declarative_analyser.c"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 334 "declarative_analyser.m"
      else
#line 334 "declarative_analyser.m"
        {
#line 334 "declarative_analyser.m"
          MR_Integer mdb__declarative_analyser__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0)));

#line 334 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5543 "mdb.declarative_analyser.c"
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
#line 5624 "mdb.declarative_analyser.c"
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
#line 5663 "mdb.declarative_analyser.c"
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
#line 5675 "mdb.declarative_analyser.c"
          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 84 "declarative_analyser.m"
      else
#line 84 "declarative_analyser.m"
        {
#line 84 "declarative_analyser.m"
          MR_Box mdb__declarative_analyser__V_11_11 = (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, (MR_Integer) 0));

#line 84 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5686 "mdb.declarative_analyser.c"
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
#line 5769 "mdb.declarative_analyser.c"
              {
#line 5771 "mdb.declarative_analyser.c"
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
#line 5811 "mdb.declarative_analyser.c"
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
#line 5849 "mdb.declarative_analyser.c"
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
#line 5869 "mdb.declarative_analyser.c"
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
#line 5889 "mdb.declarative_analyser.c"
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
#line 5909 "mdb.declarative_analyser.c"
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
#line 5929 "mdb.declarative_analyser.c"
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

#line 5944 "mdb.declarative_analyser.c"
                            {
#line 5946 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_31_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5948 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_31_31, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1));
#line 5950 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_31_31, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_23));
#line 5952 "mdb.declarative_analyser.c"
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

#line 6041 "mdb.declarative_analyser.c"
        {
#line 6043 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__succeeded = mdb__declarative_edt____Unify____search_space_1_0(mdb__declarative_analyser__TypeInfo_for_T_17, mdb__declarative_analyser__V_3_3, mdb__declarative_analyser__V_9_9);
        }
#line 298 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
          {
#line 6050 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__TypeInfo_20_20 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[0];
#line 6052 "mdb.declarative_analyser.c"
            {
#line 6054 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_20_20, ((MR_Box) (mdb__declarative_analyser__V_4_4)), ((MR_Box) (mdb__declarative_analyser__V_10_10)));
            }
#line 298 "declarative_analyser.m"
            if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
              {
#line 6061 "mdb.declarative_analyser.c"
                {
#line 6063 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(mdb__declarative_analyser__V_5_5, mdb__declarative_analyser__V_11_11);
                }
#line 298 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
                  {
#line 6070 "mdb.declarative_analyser.c"
                    {
#line 6072 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__succeeded = mdb__declarative_analyser____Unify____search_mode_0_0(mdb__declarative_analyser__V_6_6, mdb__declarative_analyser__V_12_12);
                    }
#line 298 "declarative_analyser.m"
                    if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
                      {
#line 6079 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeInfo_21_21 = (MR_Word) &mdb__declarative_analyser_scalar_common_1[1];
#line 6081 "mdb.declarative_analyser.c"
                        {
#line 6083 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_analyser__TypeInfo_21_21, ((MR_Box) (mdb__declarative_analyser__V_7_7)), ((MR_Box) (mdb__declarative_analyser__V_13_13)));
                        }
#line 298 "declarative_analyser.m"
                        if (mdb__declarative_analyser__succeeded)
#line 298 "declarative_analyser.m"
                          {
#line 6090 "mdb.declarative_analyser.c"
                            mdb__declarative_analyser__TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1;
#line 6092 "mdb.declarative_analyser.c"
                            {
#line 6094 "mdb.declarative_analyser.c"
                              mdb__declarative_analyser__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6096 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__TypeCtorInfo_22_22));
#line 6098 "mdb.declarative_analyser.c"
                              MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_17));
#line 6100 "mdb.declarative_analyser.c"
                            }
#line 6102 "mdb.declarative_analyser.c"
                            {
#line 6104 "mdb.declarative_analyser.c"
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
#line 6152 "mdb.declarative_analyser.c"
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
#line 6166 "mdb.declarative_analyser.c"
            *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
          else
#line 35 "declarative_analyser.m"
            if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6172 "mdb.declarative_analyser.c"
              *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
            else
#line 35 "declarative_analyser.m"
              if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6178 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
              else
#line 35 "declarative_analyser.m"
                if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6184 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                else
#line 6188 "mdb.declarative_analyser.c"
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
#line 6203 "mdb.declarative_analyser.c"
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
#line 6223 "mdb.declarative_analyser.c"
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

#line 6238 "mdb.declarative_analyser.c"
                      {
#line 6240 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__TypeInfo_86_86 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6242 "mdb.declarative_analyser.c"
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_86_86, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 6244 "mdb.declarative_analyser.c"
                        MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_86_86, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_79));
#line 6246 "mdb.declarative_analyser.c"
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
#line 6263 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                else
#line 35 "declarative_analyser.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6269 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6275 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    else
#line 6279 "mdb.declarative_analyser.c"
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
#line 6294 "mdb.declarative_analyser.c"
                *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
              else
#line 35 "declarative_analyser.m"
                if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6300 "mdb.declarative_analyser.c"
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
#line 6324 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                    else
#line 35 "declarative_analyser.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6330 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                      else
#line 6334 "mdb.declarative_analyser.c"
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
#line 6349 "mdb.declarative_analyser.c"
                  *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                else
#line 35 "declarative_analyser.m"
                  if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6355 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6361 "mdb.declarative_analyser.c"
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
#line 6385 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "declarative_analyser.m"
                        else
#line 6389 "mdb.declarative_analyser.c"
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
#line 6404 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6410 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    else
#line 35 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6416 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                      else
#line 35 "declarative_analyser.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6422 "mdb.declarative_analyser.c"
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
#line 6444 "mdb.declarative_analyser.c"
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
#line 6457 "mdb.declarative_analyser.c"
                    *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                  else
#line 35 "declarative_analyser.m"
                    if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6463 "mdb.declarative_analyser.c"
                      *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                    else
#line 35 "declarative_analyser.m"
                      if (((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6469 "mdb.declarative_analyser.c"
                        *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                      else
#line 35 "declarative_analyser.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6475 "mdb.declarative_analyser.c"
                          *mdb__declarative_analyser__HeadVar__1_1 = (MR_Integer) 2;
#line 35 "declarative_analyser.m"
                        else
#line 35 "declarative_analyser.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_analyser__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6481 "mdb.declarative_analyser.c"
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
#line 6576 "mdb.declarative_analyser.c"
                {
#line 6578 "mdb.declarative_analyser.c"
                  mdb__declarative_analyser__succeeded = mdb__declarative_debugger____Unify____decl_bug_0_0(mdb__declarative_analyser__V_5_5, mdb__declarative_analyser__V_7_7);
                }
#line 35 "declarative_analyser.m"
                if (mdb__declarative_analyser__succeeded)
#line 35 "declarative_analyser.m"
                  {
#line 6585 "mdb.declarative_analyser.c"
                    mdb__declarative_analyser__TypeCtorInfo_21_21 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1;
#line 6587 "mdb.declarative_analyser.c"
                    {
#line 6589 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6591 "mdb.declarative_analyser.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_22_22, 0) = ((MR_Box) (mdb__declarative_analyser__TypeCtorInfo_21_21));
#line 6593 "mdb.declarative_analyser.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_22_22, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_for_T_19));
#line 6595 "mdb.declarative_analyser.c"
                    }
#line 6597 "mdb.declarative_analyser.c"
                    {
#line 6599 "mdb.declarative_analyser.c"
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
#line 6627 "mdb.declarative_analyser.c"
                  {
#line 6629 "mdb.declarative_analyser.c"
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
#line 6655 "mdb.declarative_analyser.c"
                    {
#line 6657 "mdb.declarative_analyser.c"
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
#line 6683 "mdb.declarative_analyser.c"
                      {
#line 6685 "mdb.declarative_analyser.c"
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
#line 6709 "mdb.declarative_analyser.c"
                      {
#line 6711 "mdb.declarative_analyser.c"
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
#line 1358 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "divide and query";
#line 1350 "declarative_analyser.m"
            else
#line 1360 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "suspicion divide and query";
#line 1350 "declarative_analyser.m"
          }
#line 1350 "declarative_analyser.m"
        else
#line 1350 "declarative_analyser.m"
          {
#line 1350 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 4)));
#line 1352 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 3)));
#line 1352 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 2)));
#line 1352 "declarative_analyser.m"
            MR_Word mdb__declarative_analyser__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 1)));
#line 1352 "declarative_analyser.m"
            MR_Integer mdb__declarative_analyser__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__1_1, (MR_Integer) 0)));

#line 1350 "declarative_analyser.m"
            if ((mdb__declarative_analyser__V_19_19 == (MR_Integer) 0))
#line 1352 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking marked sub-term (using accurate algorithm)";
#line 1350 "declarative_analyser.m"
            else
#line 1355 "declarative_analyser.m"
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
#line 1268 "declarative_analyser.m"
        {
#line 1268 "declarative_analyser.m"
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
#line 1274 "declarative_analyser.m"
        {
#line 1274 "declarative_analyser.m"
          mdb__declarative_analyser__V_25_25 = mercury__string__f_43_43_2_f_0((MR_String) " and\n        ", mdb__declarative_analyser__V_27_27);
        }
#line 1274 "declarative_analyser.m"
        {
#line 1274 "declarative_analyser.m"
          mdb__declarative_analyser__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__Weight1Str_19, mdb__declarative_analyser__V_25_25);
        }
#line 1273 "declarative_analyser.m"
        {
#line 1273 "declarative_analyser.m"
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
#line 7015 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__PolyConst2_58 = (MR_Integer) 2;
#line 7017 "mdb.declarative_analyser.c"
            {
#line 7019 "mdb.declarative_analyser.c"
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

#line 7044 "mdb.declarative_analyser.c"
            {
#line 7046 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_61_61);
            }
#line 1106 "declarative_analyser.m"
            {
#line 1106 "declarative_analyser.m"
              mdb__declarative_analyser__V_21_21 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_61_61, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__TopId_5);
            }
#line 7054 "mdb.declarative_analyser.c"
            {
#line 7056 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_62_62);
            }
#line 1106 "declarative_analyser.m"
            {
#line 1106 "declarative_analyser.m"
              mdb__declarative_analyser__V_22_22 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_62_62, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_17);
            }
#line 1105 "declarative_analyser.m"
            {
#line 1105 "declarative_analyser.m"
              mdb__declarative_analyser__V_20_20 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1105 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1105 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 1) = ((MR_Box) (mdb__declarative_analyser__V_21_21));
#line 1105 "declarative_analyser.m"
              MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_20_20, 2) = ((MR_Box) (mdb__declarative_analyser__V_22_22));
#line 1105 "declarative_analyser.m"
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
#line 1106 "declarative_analyser.m"
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

#line 7136 "mdb.declarative_analyser.c"
        {
#line 7138 "mdb.declarative_analyser.c"
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
#line 7151 "mdb.declarative_analyser.c"
        {
#line 7153 "mdb.declarative_analyser.c"
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
#line 7177 "mdb.declarative_analyser.c"
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

#line 7199 "mdb.declarative_analyser.c"
            {
#line 7201 "mdb.declarative_analyser.c"
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

#line 7239 "mdb.declarative_analyser.c"
            {
#line 7241 "mdb.declarative_analyser.c"
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
#line 7266 "mdb.declarative_analyser.c"
                    {
#line 7268 "mdb.declarative_analyser.c"
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

#line 7291 "mdb.declarative_analyser.c"
                    {
#line 7293 "mdb.declarative_analyser.c"
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

#line 1142 "declarative_analyser.m"
                        {
#line 1142 "declarative_analyser.m"
                          mdb__declarative_analyser__V_48_48 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1142 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1142 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1142 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_48_48, 2) = ((MR_Box) (mdb__declarative_analyser__LastUnknownWeight_40));
#line 1142 "declarative_analyser.m"
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

#line 1146 "declarative_analyser.m"
                        {
#line 1146 "declarative_analyser.m"
                          mdb__declarative_analyser__V_49_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1146 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1146 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1146 "declarative_analyser.m"
                          MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_49_49, 2) = ((MR_Box) (mdb__declarative_analyser__MaxWeight_36));
#line 1146 "declarative_analyser.m"
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

#line 1151 "declarative_analyser.m"
                    {
#line 1151 "declarative_analyser.m"
                      mdb__declarative_analyser__V_50_50 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1151 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1151 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1151 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_50_50, 2) = ((MR_Box) (mdb__declarative_analyser__MaxWeight_36));
#line 1151 "declarative_analyser.m"
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
#line 1151 "declarative_analyser.m"
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
#line 7435 "mdb.declarative_analyser.c"
                    {
#line 7437 "mdb.declarative_analyser.c"
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

#line 7458 "mdb.declarative_analyser.c"
                    {
#line 7460 "mdb.declarative_analyser.c"
                      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
                    }
#line 1160 "declarative_analyser.m"
                    {
#line 1160 "declarative_analyser.m"
                      mdb__declarative_analyser__LastUnknownWeight_54 = mdb__declarative_edt__get_weight_2_f_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_0_7, mdb__declarative_analyser__LastUnknown_55);
                    }
#line 1161 "declarative_analyser.m"
                    {
#line 1161 "declarative_analyser.m"
                      mdb__declarative_analyser__V_51_51 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1161 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 1161 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 1) = ((MR_Box) (mdb__declarative_analyser__TopWeight_33));
#line 1161 "declarative_analyser.m"
                      MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_51_51, 2) = ((MR_Box) (mdb__declarative_analyser__LastUnknownWeight_54));
#line 1161 "declarative_analyser.m"
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
#line 1161 "declarative_analyser.m"
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
#line 7653 "mdb.declarative_analyser.c"
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
#line 7696 "mdb.declarative_analyser.c"
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
#line 7820 "mdb.declarative_analyser.c"
    {
#line 7822 "mdb.declarative_analyser.c"
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

#line 7847 "mdb.declarative_analyser.c"
        {
#line 7849 "mdb.declarative_analyser.c"
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

#line 7905 "mdb.declarative_analyser.c"
        {
#line 7907 "mdb.declarative_analyser.c"
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
#line 987 "declarative_analyser.m"
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
#line 8092 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__PolyConst2_79 = (MR_Integer) 2;
#line 8094 "mdb.declarative_analyser.c"
                {
#line 8096 "mdb.declarative_analyser.c"
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

#line 8240 "mdb.declarative_analyser.c"
                  {
#line 8242 "mdb.declarative_analyser.c"
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
#line 8264 "mdb.declarative_analyser.c"
                  {
#line 8266 "mdb.declarative_analyser.c"
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
#line 8293 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__PolyConst2_85 = (MR_Integer) 2;
#line 8295 "mdb.declarative_analyser.c"
                          {
#line 8297 "mdb.declarative_analyser.c"
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
#line 8423 "mdb.declarative_analyser.c"
                      MR_Box MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
#line 8425 "mdb.declarative_analyser.c"
                      MR_Box mdb__declarative_analyser__conv1_ArgNum_35;

#line 8428 "mdb.declarative_analyser.c"
                      {
#line 8430 "mdb.declarative_analyser.c"
                        mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_72_72);
                      }
#line 808 "declarative_analyser.m"
                      {
#line 808 "declarative_analyser.m"
                        mdb__declarative_analyser__BindingNode_34 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_72_72, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_analyser__SuspectId_21);
                      }
#line 8438 "mdb.declarative_analyser.c"
                      mdb__declarative_analyser__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70, (MR_Integer) 0)), (MR_Integer) 19)));
#line 8440 "mdb.declarative_analyser.c"
                      {
#line 8442 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__conv1_ArgNum_35 = mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_70), mdb__declarative_analyser__Store_15, mdb__declarative_analyser__BindingNode_34, ((MR_Box) (mdb__declarative_analyser__ArgPos_22)));
                      }
#line 8445 "mdb.declarative_analyser.c"
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

#line 8472 "mdb.declarative_analyser.c"
                    {
#line 8474 "mdb.declarative_analyser.c"
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

#line 8491 "mdb.declarative_analyser.c"
                      {
#line 8493 "mdb.declarative_analyser.c"
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

#line 828 "declarative_analyser.m"
                      {
#line 828 "declarative_analyser.m"
                        mdb__declarative_analyser__V_59_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL));
#line 828 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 0) = ((MR_Box) (mdb__declarative_analyser__PrimOpType_31));
#line 828 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 1) = ((MR_Box) (mdb__declarative_analyser__FileName_29));
#line 828 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 2) = ((MR_Box) (mdb__declarative_analyser__LineNo_30));
#line 828 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 3) = ((MR_Box) (mdb__declarative_analyser__MaybePath_36));
#line 828 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 4) = ((MR_Box) (mdb__declarative_analyser__ProcLabel_33));
#line 828 "declarative_analyser.m"
                        MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_59_59, 5) = ((MR_Box) ((MR_Integer) 0));
#line 828 "declarative_analyser.m"
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
#line 8567 "mdb.declarative_analyser.c"
                          mdb__declarative_analyser__PolyConst2_77 = (MR_Integer) 2;
#line 8569 "mdb.declarative_analyser.c"
                          {
#line 8571 "mdb.declarative_analyser.c"
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

#line 783 "declarative_analyser.m"
    {
#line 783 "declarative_analyser.m"
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

#line 8797 "mdb.declarative_analyser.c"
        {
#line 8799 "mdb.declarative_analyser.c"
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

#line 8818 "mdb.declarative_analyser.c"
            {
#line 8820 "mdb.declarative_analyser.c"
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

#line 8844 "mdb.declarative_analyser.c"
            {
#line 8846 "mdb.declarative_analyser.c"
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
#line 722 "declarative_analyser.m"
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

#line 8885 "mdb.declarative_analyser.c"
                {
#line 8887 "mdb.declarative_analyser.c"
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
#line 737 "declarative_analyser.m"
                            mdb__declarative_analyser__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 8940 "mdb.declarative_analyser.c"
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
#line 8963 "mdb.declarative_analyser.c"
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
#line 9082 "mdb.declarative_analyser.c"
                        MR_bool MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box);

#line 9085 "mdb.declarative_analyser.c"
                        {
#line 9087 "mdb.declarative_analyser.c"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_58_58);
                        }
#line 759 "declarative_analyser.m"
                        {
#line 759 "declarative_analyser.m"
                          mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_58_58, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_analyser__TopMostId_21);
                        }
#line 9095 "mdb.declarative_analyser.c"
                        {
#line 9097 "mdb.declarative_analyser.c"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_59_59);
                        }
#line 760 "declarative_analyser.m"
                        {
#line 760 "declarative_analyser.m"
                          mdb__declarative_analyser__TopMostNode_22 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_59_59, mdb__declarative_analyser__STATE_VARIABLE_SearchSpace_26_26, mdb__declarative_analyser__TopMostId_21);
                        }
#line 9105 "mdb.declarative_analyser.c"
                        mdb__declarative_analyser__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_39, (MR_Integer) 0)), (MR_Integer) 14)));
#line 9107 "mdb.declarative_analyser.c"
                        {
#line 9109 "mdb.declarative_analyser.c"
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
#line 9275 "mdb.declarative_analyser.c"
            {
#line 9277 "mdb.declarative_analyser.c"
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

#line 9480 "mdb.declarative_analyser.c"
    {
#line 9482 "mdb.declarative_analyser.c"
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
#line 9496 "mdb.declarative_analyser.c"
        void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 6)));
#line 9498 "mdb.declarative_analyser.c"
        MR_Box mdb__declarative_analyser__conv1_EBug_18;

#line 9501 "mdb.declarative_analyser.c"
        {
#line 9503 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__BugNode_13, &mdb__declarative_analyser__conv1_EBug_18);
        }
#line 9506 "mdb.declarative_analyser.c"
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
#line 9532 "mdb.declarative_analyser.c"
        void MR_CALL (* mdb__declarative_analyser__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9534 "mdb.declarative_analyser.c"
        MR_Box mdb__declarative_analyser__conv3_IBug_16;

#line 9537 "mdb.declarative_analyser.c"
        {
#line 9539 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_27_27);
        }
#line 647 "declarative_analyser.m"
        {
#line 647 "declarative_analyser.m"
          mdb__declarative_analyser__V_21_21 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_27_27, mdb__declarative_analyser__SearchSpace_8, mdb__declarative_analyser__InadmissibleChild_14);
        }
#line 9547 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__func_2 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 7)));
#line 9549 "mdb.declarative_analyser.c"
        {
#line 9551 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_2(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__BugNode_13, mdb__declarative_analyser__V_21_21, &mdb__declarative_analyser__conv3_IBug_16);
        }
#line 9554 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__IBug_16 = ((MR_Word) mdb__declarative_analyser__conv3_IBug_16);
#line 649 "declarative_analyser.m"
        mdb__declarative_analyser__Bug_17 = (MR_Word) MR_mkword(MR_mktag(0), (MR_Word) mdb__declarative_analyser__IBug_16);
#line 646 "declarative_analyser.m"
      }
#line 9560 "mdb.declarative_analyser.c"
    {
#line 9562 "mdb.declarative_analyser.c"
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
#line 9602 "mdb.declarative_analyser.c"
    {
#line 9604 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_36_36);
    }
#line 9607 "mdb.declarative_analyser.c"
    {
#line 9609 "mdb.declarative_analyser.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_37_37);
    }
#line 9612 "mdb.declarative_analyser.c"
    {
#line 9614 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__TypeInfo_39_39 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9616 "mdb.declarative_analyser.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_39_39, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 9618 "mdb.declarative_analyser.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeInfo_39_39, 1) = ((MR_Box) (mdb__declarative_analyser__TypeInfo_37_37));
#line 9620 "mdb.declarative_analyser.c"
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
#line 9729 "mdb.declarative_analyser.c"
          {
#line 9731 "mdb.declarative_analyser.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_88_88);
          }
#line 616 "declarative_analyser.m"
          {
#line 616 "declarative_analyser.m"
            mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_88_88, mdb__declarative_analyser__SearchSpace_39, &mdb__declarative_analyser__TopMostId_15);
          }
#line 9739 "mdb.declarative_analyser.c"
          {
#line 9741 "mdb.declarative_analyser.c"
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

#line 626 "declarative_analyser.m"
            {
#line 626 "declarative_analyser.m"
              mdb__declarative_analyser__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 626 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_23_23, 0) = ((MR_Box) (mdb__declarative_analyser__BugId_17));
#line 626 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_23_23, 1) = ((MR_Box) (mdb__declarative_analyser__CorrectDescendants_18));
#line 626 "declarative_analyser.m"
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
#line 9843 "mdb.declarative_analyser.c"
              void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 9845 "mdb.declarative_analyser.c"
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

#line 9860 "mdb.declarative_analyser.c"
              {
#line 9862 "mdb.declarative_analyser.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_80_80);
              }
#line 579 "declarative_analyser.m"
              {
#line 579 "declarative_analyser.m"
                mdb__declarative_analyser__Node_13 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_80_80, mdb__declarative_analyser__SearchSpace_12, mdb__declarative_analyser__SuspectId_10);
              }
#line 9870 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78, (MR_Integer) 0)), (MR_Integer) 5)));
#line 9872 "mdb.declarative_analyser.c"
              {
#line 9874 "mdb.declarative_analyser.c"
                mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_78), mdb__declarative_analyser__Store_6, mdb__declarative_analyser__Node_13, &mdb__declarative_analyser__conv1_OracleQuestion_14);
              }
#line 9877 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__OracleQuestion_14 = ((MR_Word) mdb__declarative_analyser__conv1_OracleQuestion_14);
#line 583 "declarative_analyser.m"
              {
#line 583 "declarative_analyser.m"
                MR_Word mdb__declarative_analyser__TypeInfo_81_81;

#line 9884 "mdb.declarative_analyser.c"
                {
#line 9886 "mdb.declarative_analyser.c"
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

#line 9903 "mdb.declarative_analyser.c"
                  {
#line 9905 "mdb.declarative_analyser.c"
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

#line 9936 "mdb.declarative_analyser.c"
                  {
#line 9938 "mdb.declarative_analyser.c"
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
#line 604 "declarative_analyser.m"
              {
#line 604 "declarative_analyser.m"
                mdb__declarative_analyser__V_35_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 604 "declarative_analyser.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_35_35, 0) = ((MR_Box) (mdb__declarative_analyser__V_36_36));
#line 604 "declarative_analyser.m"
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
#line 10120 "mdb.declarative_analyser.c"
              {
#line 10122 "mdb.declarative_analyser.c"
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

#line 10451 "mdb.declarative_analyser.c"
          {
#line 10453 "mdb.declarative_analyser.c"
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

#line 10638 "mdb.declarative_analyser.c"
                    {
#line 10640 "mdb.declarative_analyser.c"
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

#line 10657 "mdb.declarative_analyser.c"
                    {
#line 10659 "mdb.declarative_analyser.c"
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
#line 529 "declarative_analyser.m"
            {
#line 529 "declarative_analyser.m"
              mdb__declarative_analyser__V_32_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 529 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 0) = ((MR_Box) (mdb__declarative_analyser__SuspectId_8));
#line 529 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 1) = ((MR_Box) (mdb__declarative_analyser__ArgPos_17));
#line 529 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 2) = ((MR_Box) (mdb__declarative_analyser__TermPath_18));
#line 529 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 529 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_32_32, 4) = ((MR_Box) (mdb__declarative_analyser__HowTrack_19));
#line 529 "declarative_analyser.m"
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

#line 10787 "mdb.declarative_analyser.c"
                {
#line 10789 "mdb.declarative_analyser.c"
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

#line 10856 "mdb.declarative_analyser.c"
                  {
#line 10858 "mdb.declarative_analyser.c"
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

#line 10923 "mdb.declarative_analyser.c"
                  {
#line 10925 "mdb.declarative_analyser.c"
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

#line 419 "declarative_analyser.m"
            {
#line 419 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 419 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__HeadVar__2_2, 0) = ((MR_Box) (mdb__declarative_analyser__Weighting_3));
#line 419 "declarative_analyser.m"
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

#line 11099 "mdb.declarative_analyser.c"
    {
#line 11101 "mdb.declarative_analyser.c"
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
#line 11151 "mdb.declarative_analyser.c"
        void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 11153 "mdb.declarative_analyser.c"
        MR_Box mdb__declarative_analyser__conv1_Question_11;
#line 541 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_36_36;
#line 541 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_38_38;
#line 541 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_40_40;

#line 11162 "mdb.declarative_analyser.c"
        {
#line 11164 "mdb.declarative_analyser.c"
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
#line 11184 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59, (MR_Integer) 0)), (MR_Integer) 5)));
#line 11186 "mdb.declarative_analyser.c"
        {
#line 11188 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_59), mdb__declarative_analyser__Store_5, mdb__declarative_analyser__Node_10, &mdb__declarative_analyser__conv1_Question_11);
        }
#line 11191 "mdb.declarative_analyser.c"
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
#line 542 "declarative_analyser.m"
        {
#line 542 "declarative_analyser.m"
          mdb__declarative_analyser__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 542 "declarative_analyser.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_18_18, 0) = ((MR_Box) (mdb__declarative_analyser__V_19_19));
#line 542 "declarative_analyser.m"
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
#line 11424 "mdb.declarative_analyser.c"
        {
#line 11426 "mdb.declarative_analyser.c"
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
#line 1288 "declarative_analyser.m"
            mdb__declarative_analyser__FileName_15 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_41_41, (MR_Integer) 0)));
#line 1288 "declarative_analyser.m"
            mdb__declarative_analyser__LineNo_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_41_41, (MR_Integer) 1)));
#line 1288 "declarative_analyser.m"
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
#line 1294 "declarative_analyser.m"
                {
#line 1294 "declarative_analyser.m"
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
#line 1294 "declarative_analyser.m"
                {
#line 1294 "declarative_analyser.m"
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
#line 1293 "declarative_analyser.m"
                {
#line 1293 "declarative_analyser.m"
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
#line 11566 "mdb.declarative_analyser.c"
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
#line 11602 "mdb.declarative_analyser.c"
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
#line 11641 "mdb.declarative_analyser.c"
    {
#line 11643 "mdb.declarative_analyser.c"
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

#line 11700 "mdb.declarative_analyser.c"
        {
#line 11702 "mdb.declarative_analyser.c"
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

#line 11721 "mdb.declarative_analyser.c"
            {
#line 11723 "mdb.declarative_analyser.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_135, (MR_Integer) 2, &mdb__declarative_analyser__TypeInfo_144_144);
            }
#line 1319 "declarative_analyser.m"
            {
#line 1319 "declarative_analyser.m"
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_analyser__TypeInfo_144_144, mdb__declarative_analyser__SearchSpace_10, &mdb__declarative_analyser__StartId_23);
            }
#line 1319 "declarative_analyser.m"
          }
#line 11733 "mdb.declarative_analyser.c"
        {
#line 11735 "mdb.declarative_analyser.c"
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
#line 1323 "declarative_analyser.m"
        mdb__declarative_analyser__succeeded = ((MR_tag((MR_Word) mdb__declarative_analyser__V_75_75)) == (MR_mktag((MR_Integer) 3)));
#line 1323 "declarative_analyser.m"
        if (mdb__declarative_analyser__succeeded)
#line 1323 "declarative_analyser.m"
          {
#line 1323 "declarative_analyser.m"
            mdb__declarative_analyser__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_analyser__V_75_75, (MR_Integer) 0)));
#line 1324 "declarative_analyser.m"
            mdb__declarative_analyser__succeeded = (mdb__declarative_analyser__V_76_76 == (MR_Integer) 0);
#line 1323 "declarative_analyser.m"
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
#line 1328 "declarative_analyser.m"
            {
#line 1328 "declarative_analyser.m"
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
#line 11927 "mdb.declarative_analyser.c"
    {
#line 11929 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__V_153_153 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__WrappedReason_29, (MR_String) "\n");
    }
#line 11932 "mdb.declarative_analyser.c"
    {
#line 11934 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__V_155_155 = mercury__string__f_43_43_2_f_0((MR_String) "\n", mdb__declarative_analyser__V_153_153);
    }
#line 11937 "mdb.declarative_analyser.c"
    {
#line 11939 "mdb.declarative_analyser.c"
      mdb__declarative_analyser__V_156_156 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__InfoMessage_26, mdb__declarative_analyser__V_155_155);
    }
#line 11942 "mdb.declarative_analyser.c"
    {
#line 11944 "mdb.declarative_analyser.c"
      mercury__io__write_string_4_p_0(mdb__declarative_analyser__OutStream_7, mdb__declarative_analyser__V_156_156);
#line 11946 "mdb.declarative_analyser.c"
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
#line 12049 "mdb.declarative_analyser.c"
            {
#line 12051 "mdb.declarative_analyser.c"
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
#line 436 "declarative_analyser.m"
        MR_Word mdb__declarative_analyser__V_13_13;

#line 436 "declarative_analyser.m"
        mdb__declarative_analyser__SuspectId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__V_21_21, (MR_Integer) 0)));
#line 436 "declarative_analyser.m"
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
#line 12364 "mdb.declarative_analyser.c"
    void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12366 "mdb.declarative_analyser.c"
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
#line 12381 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__PolyConst2_25 = (MR_Integer) 2;
#line 12383 "mdb.declarative_analyser.c"
        {
#line 12385 "mdb.declarative_analyser.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, mdb__declarative_analyser__PolyConst2_25, &mdb__declarative_analyser__TypeInfo_26_26);
        }
#line 430 "declarative_analyser.m"
        {
#line 430 "declarative_analyser.m"
          mdb__declarative_analyser__Node_11 = mdb__declarative_edt__get_edt_node_2_f_0(mdb__declarative_analyser__TypeInfo_26_26, mdb__declarative_analyser__SearchSpace_10, mdb__declarative_analyser__SuspectId_8);
        }
#line 12393 "mdb.declarative_analyser.c"
        mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12395 "mdb.declarative_analyser.c"
        {
#line 12397 "mdb.declarative_analyser.c"
          mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_24), mdb__declarative_analyser__Store_4, mdb__declarative_analyser__Node_11, &mdb__declarative_analyser__conv1_OracleQuestion_12);
        }
#line 12400 "mdb.declarative_analyser.c"
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
#line 12563 "mdb.declarative_analyser.c"
            void MR_CALL (* mdb__declarative_analyser__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
#line 12565 "mdb.declarative_analyser.c"
            MR_Box mdb__declarative_analyser__conv1_Question_20;

#line 12568 "mdb.declarative_analyser.c"
            {
#line 12570 "mdb.declarative_analyser.c"
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
#line 12648 "mdb.declarative_analyser.c"
            {
#line 12650 "mdb.declarative_analyser.c"
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
#line 402 "declarative_analyser.m"
            {
#line 402 "declarative_analyser.m"
              mdb__declarative_analyser__V_29_29 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 402 "declarative_analyser.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_analyser__V_29_29, 0) = ((MR_Box) (mdb__declarative_analyser__V_30_30));
#line 402 "declarative_analyser.m"
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
#line 12710 "mdb.declarative_analyser.c"
            mdb__declarative_analyser__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76, (MR_Integer) 0)), (MR_Integer) 5)));
#line 12712 "mdb.declarative_analyser.c"
            {
#line 12714 "mdb.declarative_analyser.c"
              mdb__declarative_analyser__func_0(((MR_Box) mdb__declarative_analyser__TypeClassInfo_for_mercury_edt_76), mdb__declarative_analyser__Store_7, mdb__declarative_analyser__Node_12, &mdb__declarative_analyser__conv1_Question_20);
            }
#line 12717 "mdb.declarative_analyser.c"
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

#line 12770 "mdb.declarative_analyser.c"
                {
#line 12772 "mdb.declarative_analyser.c"
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
#line 1243 "declarative_analyser.m"
      mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking of the marked subterm was stopped here, because the binding node lies in a portion of the tree which has been eliminated.";
#line 1200 "declarative_analyser.m"
    else
#line 1200 "declarative_analyser.m"
      if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1259 "declarative_analyser.m"
        mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "this question is being revisited, because of an unsuccessful previous bug search.";
#line 1200 "declarative_analyser.m"
      else
#line 1200 "declarative_analyser.m"
        if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1257 "declarative_analyser.m"
          mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "there are no more non-skipped questions left.";
#line 1200 "declarative_analyser.m"
        else
#line 1200 "declarative_analyser.m"
          if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1200 "declarative_analyser.m"
            mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "this is the node where the \140dd\' command was issued.";
#line 1200 "declarative_analyser.m"
          else
#line 1200 "declarative_analyser.m"
            if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1240 "declarative_analyser.m"
              mdb__declarative_analyser__HeadVar__2_2 = (MR_String) "tracking of the marked subterm had to be aborted here, because of missing tracing information.";
#line 1200 "declarative_analyser.m"
            else
#line 1200 "declarative_analyser.m"
              if ((mdb__declarative_analyser__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1238 "declarative_analyser.m"
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
#line 1251 "declarative_analyser.m"
                    {
#line 1251 "declarative_analyser.m"
                      mdb__declarative_analyser__V_76_76 = mercury__string__f_43_43_2_f_0(mdb__declarative_analyser__SubPath1LengthStr_63, mdb__declarative_analyser__V_77_77);
                    }
#line 1251 "declarative_analyser.m"
                    {
#line 1251 "declarative_analyser.m"
                      mdb__declarative_analyser__V_74_74 = mercury__string__f_43_43_2_f_0((MR_String) " into two paths of length ", mdb__declarative_analyser__V_76_76);
                    }
#line 1250 "declarative_analyser.m"
                    {
#line 1250 "declarative_analyser.m"
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
#line 1218 "declarative_analyser.m"
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
#line 1236 "declarative_analyser.m"
                      {
#line 1236 "declarative_analyser.m"
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
#line 1235 "declarative_analyser.m"
                      {
#line 1235 "declarative_analyser.m"
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
#line 1234 "declarative_analyser.m"
                      {
#line 1234 "declarative_analyser.m"
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
#line 1233 "declarative_analyser.m"
                      {
#line 1233 "declarative_analyser.m"
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

#line 1254 "declarative_analyser.m"
                      {
#line 1254 "declarative_analyser.m"
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
