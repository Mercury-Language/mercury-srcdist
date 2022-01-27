/*
** Automatically generated from `declarative_debugger.m'
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


/* :- module mdb.declarative_debugger. */
/* :- implementation. */

/*
INIT mercury__mdb__declarative_debugger__init
ENDINIT
*/

#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_debugger.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
#include "mdb.declarative_oracle.mih"
#include "mdb.declarative_tree.mih"
#include "mdb.declarative_user.mih"
#include "mdb.help.mih"
#include "mdb.io_action.mih"
#include "mdb.parse.mih"
#include "mdb.term_rep.mih"
#include "mdb.util.mih"
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
#include "getopt.mih"
#include "int.mih"
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




#line 94 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_2;

#line 97 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analysis_type_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_2;

#line 100 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2;

#line 103 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2;

#line 106 "mdb.declarative_debugger.c"
static const MR_VA_PseudoTypeInfo_Struct2 mdb__declarative_debugger____vpti_tuple_2__pseudo_mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2;

#line 109 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_0[2];

#line 112 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_0;

#line 115 "mdb.declarative_debugger.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1builtin__type_ctor_info_int_0;

#line 118 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_1[5];

#line 121 "mdb.declarative_debugger.c"
static const MR_DuArgLocn mdb__declarative_debugger__mdb__declarative_debugger__field_locns_decl_answer_1_1[5];

#line 124 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_1;

#line 127 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_2[1];

#line 130 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_2;

#line 133 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_3[1];

#line 136 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_3;

#line 139 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_0[1];

#line 142 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_1[1];

#line 145 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_2[1];

#line 148 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_3[1];

#line 151 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_answer_1[4];

#line 154 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_answer_1[4];

#line 157 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_answer_1[4];

#line 160 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_0[1];

#line 163 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0;

#line 166 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_1[1];

#line 169 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1;

#line 172 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_0[1];

#line 175 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1[1];

#line 178 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_bug_0[2];

#line 181 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_bug_0[2];

#line 184 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_bug_0[2];

#line 187 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0;

#line 190 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1;

#line 193 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2;

#line 196 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_confirmation_0[3];

#line 199 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_confirmation_0[3];

#line 202 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_confirmation_0[3];

#line 205 "mdb.declarative_debugger.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0;

#line 208 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_0[4];

#line 211 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0;

#line 214 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_1[2];

#line 217 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1;

#line 220 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_2[3];

#line 223 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2;

#line 226 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_0[1];

#line 229 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_1[1];

#line 232 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_2[1];

#line 235 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_e_bug_0[3];

#line 238 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_e_bug_0[3];

#line 241 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_e_bug_0[3];

#line 244 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 247 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 250 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_i_bug_0_0[4];

#line 253 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0;

#line 256 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0[1];

#line 259 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0[1];

#line 262 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_i_bug_0[1];

#line 265 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_i_bug_0[1];

#line 268 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_0[3];

#line 271 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_0;

#line 274 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_1[3];

#line 277 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_1;

#line 280 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_2[3];

#line 283 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_2;

#line 286 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_0[1];

#line 289 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_1[1];

#line 292 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_2[1];

#line 295 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_question_1[3];

#line 298 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_question_1[3];

#line 301 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_question_1[3];

#line 304 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0;

#line 307 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1;

#line 310 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2;

#line 313 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_truth_0[3];

#line 316 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_truth_0[3];

#line 319 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_truth_0[3];

#line 322 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_0[2];

#line 325 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0;

#line 328 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_1[2];

#line 331 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1;

#line 334 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_2[1];

#line 337 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2;

#line 340 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_0[1];

#line 343 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_1[1];

#line 346 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_2[1];

#line 349 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_exception_0[3];

#line 352 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_exception_0[3];

#line 355 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_exception_0[3];

#line 358 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_0[1];

#line 361 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0;

#line 364 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_1[1];

#line 367 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1;

#line 370 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2;

#line 373 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_3[4];

#line 376 "mdb.declarative_debugger.c"
static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_response_1_3[4];

#line 379 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3;

#line 382 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_4[2];

#line 385 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4;

#line 388 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_0[1];

#line 391 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_1[1];

#line 394 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_2[1];

#line 397 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_3[2];

#line 400 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_response_1[4];

#line 403 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_response_1[5];

#line 406 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_response_1[5];

#line 409 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_1;

#line 412 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1;

#line 415 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1;

#line 418 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1;

#line 421 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_state_1_0[4];

#line 424 "mdb.declarative_debugger.c"
static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_state_1_0[4];

#line 427 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0;

#line 430 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0[1];

#line 433 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1[1];

#line 436 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_state_1[1];

#line 439 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_state_1[1];

#line 442 "mdb.declarative_debugger.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0;

#line 445 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_final_decl_atom_0_0[2];

#line 448 "mdb.declarative_debugger.c"
static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_final_decl_atom_0_0[2];

#line 451 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0;

#line 454 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0[1];

#line 457 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0[1];

#line 460 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_final_decl_atom_0[1];

#line 463 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_final_decl_atom_0[1];

#line 466 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_init_decl_atom_0[1];

#line 469 "mdb.declarative_debugger.c"
static const MR_NotagFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0;

#line 472 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_0[1];

#line 475 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0;

#line 478 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_1[1];

#line 481 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1;

#line 484 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_0[1];

#line 487 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1[1];

#line 490 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_some_decl_atom_0[2];

#line 493 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_some_decl_atom_0[2];

#line 496 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_some_decl_atom_0[2];

#line 499 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_answer_1_0_10001(
#line 502 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 504 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 506 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 509 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0_10001(
#line 512 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 514 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 516 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 518 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4);

#line 521 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0_10001(
#line 524 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 526 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 529 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0_10001(
#line 532 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 534 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 536 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 539 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001(
#line 542 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 544 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 547 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001(
#line 550 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 552 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 554 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 557 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0_10001(
#line 560 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 562 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 565 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0_10001(
#line 568 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 570 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 572 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 575 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001(
#line 578 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 580 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 583 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001(
#line 586 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 588 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 590 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 593 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0_10001(
#line 596 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 598 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 600 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 603 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0_10001(
#line 606 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 608 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 610 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 612 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4);

#line 615 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0_10001(
#line 618 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 620 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 623 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0_10001(
#line 626 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 628 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 630 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 633 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001(
#line 636 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 638 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 641 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001(
#line 644 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 646 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 648 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 651 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0_10001(
#line 654 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 656 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 659 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0_10001(
#line 662 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 664 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 666 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 669 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0_10001(
#line 672 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 674 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 676 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 679 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0_10001(
#line 682 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 684 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 686 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 688 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4);

#line 691 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_truth_0_0_10001(
#line 694 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 696 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 699 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0_10001(
#line 702 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 704 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 706 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 709 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001(
#line 712 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 714 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 717 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001(
#line 720 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 722 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 724 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 727 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001(
#line 730 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 732 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 734 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 737 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001(
#line 740 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 742 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 744 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 746 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4);

#line 749 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001(
#line 752 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 754 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 756 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 759 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001(
#line 762 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 764 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 766 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 768 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4);

#line 771 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001(
#line 774 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 776 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 779 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001(
#line 782 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 784 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 786 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 789 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001(
#line 792 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 794 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 797 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001(
#line 800 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 802 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 804 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 807 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001(
#line 810 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 812 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2);

#line 815 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001(
#line 818 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 820 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 822 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3);

#line 521 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(
#line 521 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser_5,
#line 521 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_6);

#line 393 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
#line 393 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 393 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);

#line 388 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
#line 388 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
#line 388 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5);

#line 994 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__debug_origin_3_p_0(
#line 994 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Flag_1);

#line 957 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__write_origin_4_p_0(
#line 957 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38,
#line 957 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 957 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Origin_6);

#line 901 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(
#line 901 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_108,
#line 901 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 901 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_2,
#line 901 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3,
#line 901 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4);

#line 889 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__get_trusted_list_3_p_0(
#line 889 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser_4,
#line 889 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__MDBCommandFormat_5,
#line 889 "declarative_debugger.m"
  MR_String * mdb__declarative_debugger__List_6);

#line 872 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__remove_trusted_3_p_0(
#line 872 "declarative_debugger.m"
  MR_Integer mdb__declarative_debugger__N_4,
#line 872 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 872 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);

#line 860 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__trust_standard_library_2_p_0(
#line 860 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5,
#line 860 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6);

#line 848 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(
#line 848 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__ProcLayout_4,
#line 848 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 848 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);

#line 834 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__add_trusted_module_3_p_0(
#line 834 "declarative_debugger.m"
  MR_String mdb__declarative_debugger__ModuleName_4,
#line 834 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_5,
#line 834 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_6);

#line 821 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_supertree_3_p_0(
#line 821 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 821 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_4,
#line 821 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_5);

#line 810 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_subtree_5_p_0(
#line 810 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 810 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_6,
#line 810 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_7,
#line 810 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__CallPreceding_8,
#line 810 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__MaxDepth_9);

#line 802 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0(
#line 802 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1);

#line 794 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_symptom_found_2_p_0(
#line 794 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 794 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3);

#line 786 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_bug_found_2_p_0(
#line 786 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 786 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3);

#line 770 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_resume_previous_8_p_0(
#line 770 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_9,
#line 770 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_10,
#line 770 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_14,
#line 770 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_15,
#line 770 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16,
#line 770 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_17);

#line 754 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_new_tree_9_p_0(
#line 754 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_10,
#line 754 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Node_11,
#line 754 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 754 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_16,
#line 754 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_17,
#line 754 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18,
#line 754 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_19);

#line 741 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0(void);

#line 732 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__divide_and_query_search_mode_0_f_0(void);

#line 724 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__top_down_search_mode_0_f_0(void);

#line 711 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__reset_knowledge_base_2_p_0(
#line 711 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6,
#line 711 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7);

#line 696 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__set_fallback_search_mode_4_p_0(
#line 696 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_5,
#line 696 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__SearchMode_6,
#line 696 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10,
#line 696 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11);

#line 684 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0(
#line 684 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Testing_4,
#line 684 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8,
#line 684 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9);

#line 673 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnoser_session_init_2_p_0(
#line 673 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
#line 673 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5);

#line 659 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_store_5_p_0(
#line 659 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__InStr_6,
#line 659 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OutStr_7,
#line 659 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Browser_8,
#line 659 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HelpSystem_9,
#line 659 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10);

#line 642 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__overrule_bug_6_p_0(
#line 642 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28,
#line 642 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_7,
#line 642 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_8,
#line 642 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_9,
#line 642 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10);

#line 621 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__confirm_bug_8_p_0(
#line 621 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_35,
#line 621 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34,
#line 621 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_9,
#line 621 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Bug_10,
#line 621 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Evidence_11,
#line 621 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 621 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19,
#line 621 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20);

#line 551 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_oracle_response_7_p_0(
#line 551 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108,
#line 551 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_8,
#line 551 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OracleResponse_9,
#line 551 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_10,
#line 551 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27,
#line 551 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);

#line 436 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_analyser_response_8_p_0(
#line 436 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113,
#line 436 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_9,
#line 436 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__AnalyserResponse_10,
#line 436 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__MaybeOrigin_11,
#line 436 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_12,
#line 436 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33,
#line 436 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34);

#line 422 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_2_6_p_0(
#line 422 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33,
#line 422 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_7,
#line 422 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__AnalysisType_8,
#line 422 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_9,
#line 422 "declarative_debugger.m"
  MR_Tuple * mdb__declarative_debugger__HeadVar__4_4);

#line 407 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0_1(
#line 407 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__closure_arg,
#line 407 "declarative_debugger.m"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 407 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 407 "declarative_debugger.m"
  MR_Box * mdb__declarative_debugger__wrapper_arg_3);


static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_1[8][2];

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_2[1][3];

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_3[1][4];

static /* final */ const MR_Integer mdb__declarative_debugger_scalar_common_4[1][3];

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_5[1][10];




static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__io_action__mdb__io_action__type_ctor_info_io_action_range_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_String) "handle_analyser_response")),
    ((MR_Box) ((MR_String) "subtree requested for node which is not an implicit root"))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "handle_oracle_response")),
    ((MR_Box) ((MR_String) "no last question when got show_info request"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "handle_oracle_response")),
    ((MR_Box) ((MR_String) "no last question when got undo request"))
  },
};

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
};

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__)),
    ((MR_Box) (&mdb__declarative_debugger_scalar_common_2[0])),
    ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[0])),
    ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[1]))
  },
};

static /* final */ const MR_Integer mdb__declarative_debugger_scalar_common_4[1][3] = {
  /* row 0 */
  {
    (MR_Integer) 2,
    (MR_Integer) 67631,
    (MR_Integer) 67663
  },
};

static /* final */ const MR_Box mdb__declarative_debugger_scalar_common_5[1][10] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_debugger_scalar_common_4[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 7)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_analyser__pti_analysis_type_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_debugger____vpti_tuple_2__pseudo_mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.declarative_debugger.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#line 977 "declarative_debugger.m"


/*
** The declarative debugger will print diagnostic information about the origins
** computed by dependency tracking if this flag has a positive value.
*/

int MR_DD_debug_origin = 0;


#line 663 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_state_init(
#line 663 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__InStr_6,
#line 663 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OutStr_7,
#line 663 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Browser_8,
#line 663 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HelpSystem_9,
#line 663 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10)
#line 663 "declarative_debugger.m"
{
#line 663 "declarative_debugger.m"
	mdb__declarative_debugger__diagnoser_state_init_store_5_p_0((MR_Word) mdb__declarative_debugger__InStr_6, (MR_Word) mdb__declarative_debugger__OutStr_7, (MR_Word) mdb__declarative_debugger__Browser_8, (MR_Word) mdb__declarative_debugger__HelpSystem_9, (MR_Word *) mdb__declarative_debugger__Diagnoser_10);
}

#line 679 "declarative_debugger.m"
void 
MR_DD_decl_session_init(
#line 679 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
#line 679 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5)
#line 679 "declarative_debugger.m"
{
#line 679 "declarative_debugger.m"
	mdb__declarative_debugger__diagnoser_session_init_2_p_0((MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5);
}

#line 688 "declarative_debugger.m"
void 
MR_DD_decl_set_diagnoser_testing_flag(
#line 688 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Testing_4,
#line 688 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8,
#line 688 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9)
#line 688 "declarative_debugger.m"
{
#line 688 "declarative_debugger.m"
	mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0((MR_Word) mdb__declarative_debugger__Testing_4, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9);
}

#line 701 "declarative_debugger.m"
void 
MR_DD_decl_set_fallback_search_mode(
#line 701 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_5,
#line 701 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__SearchMode_6,
#line 701 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10,
#line 701 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11)
#line 701 "declarative_debugger.m"
{
#line 701 "declarative_debugger.m"
	mdb__declarative_debugger__set_fallback_search_mode_4_p_0((MR_Word) mdb__declarative_debugger__Store_5, (MR_Word) mdb__declarative_debugger__SearchMode_6, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11);
}

#line 715 "declarative_debugger.m"
void 
MR_DD_decl_reset_knowledge_base(
#line 715 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6,
#line 715 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7)
#line 715 "declarative_debugger.m"
{
#line 715 "declarative_debugger.m"
	mdb__declarative_debugger__reset_knowledge_base_2_p_0((MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7);
}

#line 728 "declarative_debugger.m"
MR_Word 
MR_DD_decl_top_down_search_mode(void)
#line 728 "declarative_debugger.m"
{
#line 728 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__top_down_search_mode_0_f_0();
	return ret_value;
}

#line 737 "declarative_debugger.m"
MR_Word 
MR_DD_decl_divide_and_query_search_mode(void)
#line 737 "declarative_debugger.m"
{
#line 737 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__divide_and_query_search_mode_0_f_0();
	return ret_value;
}

#line 747 "declarative_debugger.m"
MR_Word 
MR_DD_decl_suspicion_divide_and_query_search_mode(void)
#line 747 "declarative_debugger.m"
{
#line 747 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0();
	return ret_value;
}

#line 760 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_new_tree(
#line 760 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_10,
#line 760 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Node_11,
#line 760 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 760 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_16,
#line 760 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_17,
#line 760 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18,
#line 760 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_19)
#line 760 "declarative_debugger.m"
{
#line 760 "declarative_debugger.m"
	mdb__declarative_debugger__diagnosis_new_tree_9_p_0((MR_Word) mdb__declarative_debugger__Store_10, (MR_Word) mdb__declarative_debugger__Node_11, (MR_Word *) mdb__declarative_debugger__Response_12, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_State_0_16, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_State_17, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Browser_19);
}

#line 776 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_resume_previous(
#line 776 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_9,
#line 776 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_10,
#line 776 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_14,
#line 776 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_15,
#line 776 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16,
#line 776 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_17)
#line 776 "declarative_debugger.m"
{
#line 776 "declarative_debugger.m"
	mdb__declarative_debugger__diagnosis_resume_previous_8_p_0((MR_Word) mdb__declarative_debugger__Store_9, (MR_Word *) mdb__declarative_debugger__Response_10, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_State_0_14, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_State_15, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Browser_17);
}

#line 789 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_bug_found(
#line 789 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 789 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3)
#line 789 "declarative_debugger.m"
{
#line 789 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_bug_found_2_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_3);
	return ret_value;
}

#line 797 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_symptom_found(
#line 797 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 797 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3)
#line 797 "declarative_debugger.m"
{
#line 797 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_symptom_found_2_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_3);
	return ret_value;
}

#line 805 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_no_bug_found(
#line 805 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
#line 805 "declarative_debugger.m"
{
#line 805 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1);
	return ret_value;
}

#line 814 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_require_subtree(
#line 814 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 814 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_6,
#line 814 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_7,
#line 814 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__CallPreceding_8,
#line 814 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__MaxDepth_9)
#line 814 "declarative_debugger.m"
{
#line 814 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_require_subtree_5_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_6, (MR_Integer *) mdb__declarative_debugger__SeqNo_7, (MR_Word *) mdb__declarative_debugger__CallPreceding_8, (MR_Integer *) mdb__declarative_debugger__MaxDepth_9);
	return ret_value;
}

#line 824 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_require_supertree(
#line 824 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 824 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_4,
#line 824 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_5)
#line 824 "declarative_debugger.m"
{
#line 824 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_require_supertree_3_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_4, (MR_Integer *) mdb__declarative_debugger__SeqNo_5);
	return ret_value;
}

#line 837 "declarative_debugger.m"
void 
MR_DD_decl_add_trusted_module(
#line 837 "declarative_debugger.m"
  MR_String mdb__declarative_debugger__ModuleName_4,
#line 837 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_5,
#line 837 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_6)
#line 837 "declarative_debugger.m"
{
#line 837 "declarative_debugger.m"
	mdb__declarative_debugger__add_trusted_module_3_p_0((MR_String) mdb__declarative_debugger__ModuleName_4, (MR_Word) mdb__declarative_debugger__Diagnoser0_5, (MR_Word *) mdb__declarative_debugger__Diagnoser_6);
}

#line 852 "declarative_debugger.m"
void 
MR_DD_decl_add_trusted_pred_or_func(
#line 852 "declarative_debugger.m"
  const MR_ProcLayout * mdb__declarative_debugger__ProcLayout_4,
#line 852 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 852 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 852 "declarative_debugger.m"
{
#line 852 "declarative_debugger.m"
	MR_Box mdb__declarative_debugger__boxed_ProcLayout_4;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_ProcLayout *, mdb__declarative_debugger__ProcLayout_4, mdb__declarative_debugger__boxed_ProcLayout_4);
	mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(mdb__declarative_debugger__boxed_ProcLayout_4, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);
}

#line 863 "declarative_debugger.m"
void 
MR_DD_decl_trust_standard_library(
#line 863 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5,
#line 863 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6)
#line 863 "declarative_debugger.m"
{
#line 863 "declarative_debugger.m"
	mdb__declarative_debugger__trust_standard_library_2_p_0((MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6);
}

#line 875 "declarative_debugger.m"
MR_bool 
MR_DD_decl_remove_trusted(
#line 875 "declarative_debugger.m"
  MR_Integer mdb__declarative_debugger__N_4,
#line 875 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 875 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 875 "declarative_debugger.m"
{
#line 875 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__remove_trusted_3_p_0((MR_Integer) mdb__declarative_debugger__N_4, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);
	return ret_value;
}

#line 892 "declarative_debugger.m"
void 
MR_DD_decl_get_trusted_list(
#line 892 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser_4,
#line 892 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__MDBCommandFormat_5,
#line 892 "declarative_debugger.m"
  MR_String * mdb__declarative_debugger__List_6)
#line 892 "declarative_debugger.m"
{
#line 892 "declarative_debugger.m"
	mdb__declarative_debugger__get_trusted_list_3_p_0((MR_Word) mdb__declarative_debugger__Diagnoser_4, (MR_Word) mdb__declarative_debugger__MDBCommandFormat_5, (MR_String *) mdb__declarative_debugger__List_6);
}


#line 1599 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_2 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1607 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analysis_type_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_2 = {
  &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analysis_type_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_2
  }
};

#line 1615 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1623 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1631 "mdb.declarative_debugger.c"
static const MR_VA_PseudoTypeInfo_Struct2 mdb__declarative_debugger____vpti_tuple_2__pseudo_mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2,
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2
  }
};

#line 1641 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
};

#line 1647 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_0 = {
  (MR_String) "truth_value",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_0,
  NULL,
  NULL,
  NULL
};

#line 1662 "mdb.declarative_debugger.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1670 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_1[5] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0
};

#line 1679 "mdb.declarative_debugger.c"
static const MR_DuArgLocn mdb__declarative_debugger__mdb__declarative_debugger__field_locns_decl_answer_1_1[5] = {
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
    (MR_Integer) 1
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 1,
    (MR_Integer) 1
  }
};

#line 1708 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_1 = {
  (MR_String) "suspicious_subterm",
  (MR_Integer) 5,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_1,
  NULL,
  mdb__declarative_debugger__mdb__declarative_debugger__field_locns_decl_answer_1_1,
  NULL
};

#line 1723 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1728 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_2 = {
  (MR_String) "ignore",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_2,
  NULL,
  NULL,
  NULL
};

#line 1743 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1748 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_3 = {
  (MR_String) "skip",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_3,
  NULL,
  NULL,
  NULL
};

#line 1763 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_0
};

#line 1768 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_1
};

#line 1773 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_2
};

#line 1778 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_3[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_3
};

#line 1783 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_answer_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_3
  }
};

#line 1807 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_answer_1[4] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_3,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_0
};

#line 1815 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_answer_1[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1823 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_answer_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_answer_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_answer",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_answer_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_answer_1 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_answer_1
};

#line 1840 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_0[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_e_bug_0
};

#line 1845 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0 = {
  (MR_String) "e_bug",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_0,
  NULL,
  NULL,
  NULL
};

#line 1860 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_i_bug_0
};

#line 1865 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1 = {
  (MR_String) "i_bug",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_1,
  NULL,
  NULL,
  NULL
};

#line 1880 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1
};

#line 1885 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0
};

#line 1890 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_bug_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1
  }
};

#line 1904 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_bug_0[2] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1
};

#line 1910 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_bug_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1916 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_bug_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_bug",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_bug_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_bug_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_bug_0
};

#line 1933 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0 = {
  (MR_String) "confirm_bug",
  (MR_Integer) 0
};

#line 1939 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1 = {
  (MR_String) "overrule_bug",
  (MR_Integer) 1
};

#line 1945 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2 = {
  (MR_String) "abort_diagnosis",
  (MR_Integer) 2
};

#line 1951 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_confirmation_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2
};

#line 1958 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_confirmation_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1
};

#line 1965 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_confirmation_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1972 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_confirmation_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_confirmation",
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_confirmation_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_confirmation_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_confirmation_0
};

#line 1989 "mdb.declarative_debugger.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
  }
};

#line 1997 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_contour_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_contour_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_contour_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_contour",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2014 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_0[4] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2022 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0 = {
  (MR_String) "incorrect_contour",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_0,
  NULL,
  NULL,
  NULL
};

#line 2037 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_1[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2043 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1 = {
  (MR_String) "partially_uncovered_atom",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_1,
  NULL,
  NULL,
  NULL
};

#line 2058 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_2[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2065 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2 = {
  (MR_String) "unhandled_exception",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_2,
  NULL,
  NULL,
  NULL
};

#line 2080 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0
};

#line 2085 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1
};

#line 2090 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2
};

#line 2095 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_e_bug_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_2
  }
};

#line 2114 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_e_bug_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2
};

#line 2121 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_e_bug_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2128 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_e_bug_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_e_bug",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_e_bug_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_e_bug_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_e_bug_0
};

#line 2145 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2153 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
  }
};

#line 2161 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_evidence_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_evidence_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_evidence_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_evidence",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2178 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_exception_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_exception_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_exception_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_exception",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2195 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_i_bug_0_0[4] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2203 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0 = {
  (MR_String) "inadmissible_call",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_i_bug_0_0,
  NULL,
  NULL,
  NULL
};

#line 2218 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0
};

#line 2223 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0
  }
};

#line 2232 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_i_bug_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0
};

#line 2237 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_i_bug_0[1] = {
  (MR_Integer) 0
};

#line 2242 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_i_bug_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_i_bug",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_i_bug_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_i_bug_0
};

#line 2259 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_position_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_position_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_position_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_position",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2276 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

#line 2283 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_0 = {
  (MR_String) "wrong_answer",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_0,
  NULL,
  NULL,
  NULL
};

#line 2298 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

#line 2305 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_1 = {
  (MR_String) "missing_answer",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_1,
  NULL,
  NULL,
  NULL
};

#line 2320 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0
};

#line 2327 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_2 = {
  (MR_String) "unexpected_exception",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_2,
  NULL,
  NULL,
  NULL
};

#line 2342 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_0
};

#line 2347 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_1
};

#line 2352 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_2
};

#line 2357 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_question_1[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_2
  }
};

#line 2376 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_question_1[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_0
};

#line 2383 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_question_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2390 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_question_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_question_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_question",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_question_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_question_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_question_1
};

#line 2407 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0 = {
  (MR_String) "truth_correct",
  (MR_Integer) 0
};

#line 2413 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1 = {
  (MR_String) "truth_erroneous",
  (MR_Integer) 1
};

#line 2419 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2 = {
  (MR_String) "truth_inadmissible",
  (MR_Integer) 2
};

#line 2425 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_truth_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2
};

#line 2432 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_truth_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2
};

#line 2439 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_truth_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2446 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_debugger____Unify____decl_truth_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____decl_truth_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "decl_truth",
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_truth_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_truth_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_truth_0
};

#line 2463 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2469 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0 = {
  (MR_String) "internal_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_0,
  NULL,
  NULL,
  NULL
};

#line 2484 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2490 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1 = {
  (MR_String) "io_error",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_1,
  NULL,
  NULL,
  NULL
};

#line 2505 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2510 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2 = {
  (MR_String) "unimplemented_feature",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_2,
  NULL,
  NULL,
  NULL
};

#line 2525 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0
};

#line 2530 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1
};

#line 2535 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2
};

#line 2540 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_exception_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_2
  }
};

#line 2559 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_exception_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2
};

#line 2566 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_exception_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2573 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_exception",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_exception_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_exception_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_exception_0
};

#line 2590 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2595 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0 = {
  (MR_String) "bug_found",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_0,
  NULL,
  NULL,
  NULL
};

#line 2610 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2615 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1 = {
  (MR_String) "symptom_found",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_1,
  NULL,
  NULL,
  NULL
};

#line 2630 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2 = {
  (MR_String) "no_bug_found",
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

#line 2645 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_3[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2653 "mdb.declarative_debugger.c"
static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_response_1_3[4] = {
  (MR_String) "require_subtree_final_event",
  (MR_String) "require_subtree_seqno",
  (MR_String) "require_subtree_call_preceding_node",
  (MR_String) "require_subtree_max_depth"
};

#line 2661 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3 = {
  (MR_String) "require_subtree",
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_3,
  mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_response_1_3,
  NULL,
  NULL
};

#line 2676 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_4[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2682 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4 = {
  (MR_String) "require_supertree",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_4,
  NULL,
  NULL,
  NULL
};

#line 2697 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2
};

#line 2702 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0
};

#line 2707 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1
};

#line 2712 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_3[2] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4
};

#line 2718 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_response_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_3
  }
};

#line 2742 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_response_1[5] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1
};

#line 2751 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_response_1[5] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2760 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_response",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_response_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_response_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_response_1
};

#line 2777 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2785 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1 = {
  &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_state_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_1
  }
};

#line 2793 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2801 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1
  }
};

#line 2809 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_state_1_0[4] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1
};

#line 2817 "mdb.declarative_debugger.c"
static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_state_1_0[4] = {
  (MR_String) "analyser_state",
  (MR_String) "oracle_state",
  (MR_String) "warn_if_searching_supertree",
  (MR_String) "previous_diagnoser"
};

#line 2825 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0 = {
  (MR_String) "diagnoser",
  (MR_Integer) 4,
  (MR_Integer) 9,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_state_1_0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_state_1_0,
  NULL,
  NULL
};

#line 2840 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0
};

#line 2845 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0
  }
};

#line 2854 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_state_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0
};

#line 2859 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_state_1[1] = {
  (MR_Integer) 0
};

#line 2864 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "diagnoser_state",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_state_1 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_state_1
};

#line 2881 "mdb.declarative_debugger.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__io_action__mdb__io_action__type_ctor_info_io_action_range_0
  }
};

#line 2889 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_final_decl_atom_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0
};

#line 2895 "mdb.declarative_debugger.c"
static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_final_decl_atom_0_0[2] = {
  (MR_String) "final_atom",
  (MR_String) "final_io_actions"
};

#line 2901 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0 = {
  (MR_String) "final_decl_atom",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_final_decl_atom_0_0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_names_final_decl_atom_0_0,
  NULL,
  NULL
};

#line 2916 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0
};

#line 2921 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0
  }
};

#line 2930 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_final_decl_atom_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0
};

#line 2935 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_final_decl_atom_0[1] = {
  (MR_Integer) 0
};

#line 2940 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "final_decl_atom",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_final_decl_atom_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_final_decl_atom_0
};

#line 2957 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_init_decl_atom_0[1] = {
  (MR_Integer) 0
};

#line 2962 "mdb.declarative_debugger.c"
static const MR_NotagFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 = {
  (MR_String) "init_decl_atom",
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0,
  (MR_String) "init_atom"
};

#line 2969 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "init_decl_atom",
  {     &mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 },
  {     &mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_init_decl_atom_0
};

#line 2986 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_0[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0
};

#line 2991 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0 = {
  (MR_String) "init",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_0,
  NULL,
  NULL,
  NULL
};

#line 3006 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

#line 3011 "mdb.declarative_debugger.c"
static const MR_DuFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1 = {
  (MR_String) "final",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_1,
  NULL,
  NULL,
  NULL
};

#line 3026 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1
};

#line 3031 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0
};

#line 3036 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_some_decl_atom_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE_DIRECT_ARG,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1
  }
};

#line 3050 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_some_decl_atom_0[2] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0
};

#line 3056 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_some_decl_atom_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3062 "mdb.declarative_debugger.c"
const MR_TypeCtorInfo_Struct mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_some_decl_atom_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001)),
  (MR_String) "mdb.declarative_debugger",
  (MR_String) "some_decl_atom",
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_some_decl_atom_0 },
  {     mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_some_decl_atom_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_some_decl_atom_0
};

#line 3079 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_answer_1_0_10001(
#line 3082 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3084 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3086 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3088 "mdb.declarative_debugger.c"
{
#line 3090 "mdb.declarative_debugger.c"
  {
#line 3092 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3095 "mdb.declarative_debugger.c"
    {
#line 3097 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3100 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3102 "mdb.declarative_debugger.c"
  }
#line 3104 "mdb.declarative_debugger.c"
}

#line 3107 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0_10001(
#line 3110 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3112 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 3114 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 3116 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
#line 3118 "mdb.declarative_debugger.c"
{
#line 3120 "mdb.declarative_debugger.c"
  {
#line 3122 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3125 "mdb.declarative_debugger.c"
    {
#line 3127 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_answer_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
#line 3130 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3132 "mdb.declarative_debugger.c"
  }
#line 3134 "mdb.declarative_debugger.c"
}

#line 3137 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0_10001(
#line 3140 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3142 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3144 "mdb.declarative_debugger.c"
{
#line 3146 "mdb.declarative_debugger.c"
  {
#line 3148 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3151 "mdb.declarative_debugger.c"
    {
#line 3153 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_bug_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3156 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3158 "mdb.declarative_debugger.c"
  }
#line 3160 "mdb.declarative_debugger.c"
}

#line 3163 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0_10001(
#line 3166 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3168 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3170 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3172 "mdb.declarative_debugger.c"
{
#line 3174 "mdb.declarative_debugger.c"
  {
#line 3176 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3179 "mdb.declarative_debugger.c"
    {
#line 3181 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_bug_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3184 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3186 "mdb.declarative_debugger.c"
  }
#line 3188 "mdb.declarative_debugger.c"
}

#line 3191 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001(
#line 3194 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3196 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3198 "mdb.declarative_debugger.c"
{
#line 3200 "mdb.declarative_debugger.c"
  {
#line 3202 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3205 "mdb.declarative_debugger.c"
    {
#line 3207 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_confirmation_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3210 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3212 "mdb.declarative_debugger.c"
  }
#line 3214 "mdb.declarative_debugger.c"
}

#line 3217 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001(
#line 3220 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3222 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3224 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3226 "mdb.declarative_debugger.c"
{
#line 3228 "mdb.declarative_debugger.c"
  {
#line 3230 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3233 "mdb.declarative_debugger.c"
    {
#line 3235 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_confirmation_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3238 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3240 "mdb.declarative_debugger.c"
  }
#line 3242 "mdb.declarative_debugger.c"
}

#line 3245 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0_10001(
#line 3248 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3250 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3252 "mdb.declarative_debugger.c"
{
#line 3254 "mdb.declarative_debugger.c"
  {
#line 3256 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3259 "mdb.declarative_debugger.c"
    {
#line 3261 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_contour_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3264 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3266 "mdb.declarative_debugger.c"
  }
#line 3268 "mdb.declarative_debugger.c"
}

#line 3271 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0_10001(
#line 3274 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3276 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3278 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3280 "mdb.declarative_debugger.c"
{
#line 3282 "mdb.declarative_debugger.c"
  {
#line 3284 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3287 "mdb.declarative_debugger.c"
    {
#line 3289 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_contour_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3292 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3294 "mdb.declarative_debugger.c"
  }
#line 3296 "mdb.declarative_debugger.c"
}

#line 3299 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001(
#line 3302 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3304 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3306 "mdb.declarative_debugger.c"
{
#line 3308 "mdb.declarative_debugger.c"
  {
#line 3310 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3313 "mdb.declarative_debugger.c"
    {
#line 3315 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_e_bug_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3318 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3320 "mdb.declarative_debugger.c"
  }
#line 3322 "mdb.declarative_debugger.c"
}

#line 3325 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001(
#line 3328 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3330 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3332 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3334 "mdb.declarative_debugger.c"
{
#line 3336 "mdb.declarative_debugger.c"
  {
#line 3338 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3341 "mdb.declarative_debugger.c"
    {
#line 3343 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_e_bug_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3346 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3348 "mdb.declarative_debugger.c"
  }
#line 3350 "mdb.declarative_debugger.c"
}

#line 3353 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0_10001(
#line 3356 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3358 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3360 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3362 "mdb.declarative_debugger.c"
{
#line 3364 "mdb.declarative_debugger.c"
  {
#line 3366 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3369 "mdb.declarative_debugger.c"
    {
#line 3371 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_evidence_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3374 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3376 "mdb.declarative_debugger.c"
  }
#line 3378 "mdb.declarative_debugger.c"
}

#line 3381 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0_10001(
#line 3384 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3386 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 3388 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 3390 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
#line 3392 "mdb.declarative_debugger.c"
{
#line 3394 "mdb.declarative_debugger.c"
  {
#line 3396 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3399 "mdb.declarative_debugger.c"
    {
#line 3401 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_evidence_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
#line 3404 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3406 "mdb.declarative_debugger.c"
  }
#line 3408 "mdb.declarative_debugger.c"
}

#line 3411 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0_10001(
#line 3414 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3416 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3418 "mdb.declarative_debugger.c"
{
#line 3420 "mdb.declarative_debugger.c"
  {
#line 3422 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3425 "mdb.declarative_debugger.c"
    {
#line 3427 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_exception_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3430 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3432 "mdb.declarative_debugger.c"
  }
#line 3434 "mdb.declarative_debugger.c"
}

#line 3437 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0_10001(
#line 3440 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3442 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3444 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3446 "mdb.declarative_debugger.c"
{
#line 3448 "mdb.declarative_debugger.c"
  {
#line 3450 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3453 "mdb.declarative_debugger.c"
    {
#line 3455 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_exception_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3458 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3460 "mdb.declarative_debugger.c"
  }
#line 3462 "mdb.declarative_debugger.c"
}

#line 3465 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001(
#line 3468 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3470 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3472 "mdb.declarative_debugger.c"
{
#line 3474 "mdb.declarative_debugger.c"
  {
#line 3476 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3479 "mdb.declarative_debugger.c"
    {
#line 3481 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_i_bug_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3484 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3486 "mdb.declarative_debugger.c"
  }
#line 3488 "mdb.declarative_debugger.c"
}

#line 3491 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001(
#line 3494 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3496 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3498 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3500 "mdb.declarative_debugger.c"
{
#line 3502 "mdb.declarative_debugger.c"
  {
#line 3504 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3507 "mdb.declarative_debugger.c"
    {
#line 3509 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_i_bug_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3512 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3514 "mdb.declarative_debugger.c"
  }
#line 3516 "mdb.declarative_debugger.c"
}

#line 3519 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0_10001(
#line 3522 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3524 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3526 "mdb.declarative_debugger.c"
{
#line 3528 "mdb.declarative_debugger.c"
  {
#line 3530 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3533 "mdb.declarative_debugger.c"
    {
#line 3535 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_position_0_0();
    }
#line 3538 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3540 "mdb.declarative_debugger.c"
  }
#line 3542 "mdb.declarative_debugger.c"
}

#line 3545 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0_10001(
#line 3548 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3550 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3552 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3554 "mdb.declarative_debugger.c"
{
#line 3556 "mdb.declarative_debugger.c"
  {
#line 3558 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3561 "mdb.declarative_debugger.c"
    {
#line 3563 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_position_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1);
    }
#line 3566 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3568 "mdb.declarative_debugger.c"
  }
#line 3570 "mdb.declarative_debugger.c"
}

#line 3573 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0_10001(
#line 3576 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3578 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3580 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3582 "mdb.declarative_debugger.c"
{
#line 3584 "mdb.declarative_debugger.c"
  {
#line 3586 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3589 "mdb.declarative_debugger.c"
    {
#line 3591 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3594 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3596 "mdb.declarative_debugger.c"
  }
#line 3598 "mdb.declarative_debugger.c"
}

#line 3601 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0_10001(
#line 3604 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3606 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 3608 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 3610 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
#line 3612 "mdb.declarative_debugger.c"
{
#line 3614 "mdb.declarative_debugger.c"
  {
#line 3616 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3619 "mdb.declarative_debugger.c"
    {
#line 3621 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_question_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
#line 3624 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3626 "mdb.declarative_debugger.c"
  }
#line 3628 "mdb.declarative_debugger.c"
}

#line 3631 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_truth_0_0_10001(
#line 3634 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3636 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3638 "mdb.declarative_debugger.c"
{
#line 3640 "mdb.declarative_debugger.c"
  {
#line 3642 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3645 "mdb.declarative_debugger.c"
    {
#line 3647 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_truth_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3650 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3652 "mdb.declarative_debugger.c"
  }
#line 3654 "mdb.declarative_debugger.c"
}

#line 3657 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0_10001(
#line 3660 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3662 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3664 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3666 "mdb.declarative_debugger.c"
{
#line 3668 "mdb.declarative_debugger.c"
  {
#line 3670 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3673 "mdb.declarative_debugger.c"
    {
#line 3675 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_truth_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3678 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3680 "mdb.declarative_debugger.c"
  }
#line 3682 "mdb.declarative_debugger.c"
}

#line 3685 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001(
#line 3688 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3690 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3692 "mdb.declarative_debugger.c"
{
#line 3694 "mdb.declarative_debugger.c"
  {
#line 3696 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3699 "mdb.declarative_debugger.c"
    {
#line 3701 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____diagnoser_exception_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3704 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3706 "mdb.declarative_debugger.c"
  }
#line 3708 "mdb.declarative_debugger.c"
}

#line 3711 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001(
#line 3714 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3716 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3718 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3720 "mdb.declarative_debugger.c"
{
#line 3722 "mdb.declarative_debugger.c"
  {
#line 3724 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3727 "mdb.declarative_debugger.c"
    {
#line 3729 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____diagnoser_exception_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3732 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3734 "mdb.declarative_debugger.c"
  }
#line 3736 "mdb.declarative_debugger.c"
}

#line 3739 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001(
#line 3742 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3744 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3746 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3748 "mdb.declarative_debugger.c"
{
#line 3750 "mdb.declarative_debugger.c"
  {
#line 3752 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3755 "mdb.declarative_debugger.c"
    {
#line 3757 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____diagnoser_response_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3760 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3762 "mdb.declarative_debugger.c"
  }
#line 3764 "mdb.declarative_debugger.c"
}

#line 3767 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001(
#line 3770 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3772 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 3774 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 3776 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
#line 3778 "mdb.declarative_debugger.c"
{
#line 3780 "mdb.declarative_debugger.c"
  {
#line 3782 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3785 "mdb.declarative_debugger.c"
    {
#line 3787 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____diagnoser_response_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
#line 3790 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3792 "mdb.declarative_debugger.c"
  }
#line 3794 "mdb.declarative_debugger.c"
}

#line 3797 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001(
#line 3800 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3802 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3804 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3806 "mdb.declarative_debugger.c"
{
#line 3808 "mdb.declarative_debugger.c"
  {
#line 3810 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3813 "mdb.declarative_debugger.c"
    {
#line 3815 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____diagnoser_state_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3818 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3820 "mdb.declarative_debugger.c"
  }
#line 3822 "mdb.declarative_debugger.c"
}

#line 3825 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001(
#line 3828 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3830 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 3832 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 3834 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
#line 3836 "mdb.declarative_debugger.c"
{
#line 3838 "mdb.declarative_debugger.c"
  {
#line 3840 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3843 "mdb.declarative_debugger.c"
    {
#line 3845 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____diagnoser_state_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
#line 3848 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3850 "mdb.declarative_debugger.c"
  }
#line 3852 "mdb.declarative_debugger.c"
}

#line 3855 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001(
#line 3858 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3860 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3862 "mdb.declarative_debugger.c"
{
#line 3864 "mdb.declarative_debugger.c"
  {
#line 3866 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3869 "mdb.declarative_debugger.c"
    {
#line 3871 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3874 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3876 "mdb.declarative_debugger.c"
  }
#line 3878 "mdb.declarative_debugger.c"
}

#line 3881 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001(
#line 3884 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3886 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3888 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3890 "mdb.declarative_debugger.c"
{
#line 3892 "mdb.declarative_debugger.c"
  {
#line 3894 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3897 "mdb.declarative_debugger.c"
    {
#line 3899 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____final_decl_atom_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3902 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3904 "mdb.declarative_debugger.c"
  }
#line 3906 "mdb.declarative_debugger.c"
}

#line 3909 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001(
#line 3912 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3914 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3916 "mdb.declarative_debugger.c"
{
#line 3918 "mdb.declarative_debugger.c"
  {
#line 3920 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3923 "mdb.declarative_debugger.c"
    {
#line 3925 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3928 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3930 "mdb.declarative_debugger.c"
  }
#line 3932 "mdb.declarative_debugger.c"
}

#line 3935 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001(
#line 3938 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3940 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3942 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3944 "mdb.declarative_debugger.c"
{
#line 3946 "mdb.declarative_debugger.c"
  {
#line 3948 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3951 "mdb.declarative_debugger.c"
    {
#line 3953 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3956 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3958 "mdb.declarative_debugger.c"
  }
#line 3960 "mdb.declarative_debugger.c"
}

#line 3963 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001(
#line 3966 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3968 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3970 "mdb.declarative_debugger.c"
{
#line 3972 "mdb.declarative_debugger.c"
  {
#line 3974 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3977 "mdb.declarative_debugger.c"
    {
#line 3979 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____some_decl_atom_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3982 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3984 "mdb.declarative_debugger.c"
  }
#line 3986 "mdb.declarative_debugger.c"
}

#line 3989 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001(
#line 3992 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3994 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3996 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3998 "mdb.declarative_debugger.c"
{
#line 4000 "mdb.declarative_debugger.c"
  {
#line 4002 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 4005 "mdb.declarative_debugger.c"
    {
#line 4007 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____some_decl_atom_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 4010 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 4012 "mdb.declarative_debugger.c"
  }
#line 4014 "mdb.declarative_debugger.c"
}

#line 158 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 158 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1)
#line 158 "declarative_debugger.m"
{
#line 158 "declarative_debugger.m"
  {
#line 158 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 158 "declarative_debugger.m"
    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 158 "declarative_debugger.m"
  }
#line 158 "declarative_debugger.m"
}

#line 158 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 158 "declarative_debugger.m"
{
#line 158 "declarative_debugger.m"
  {
#line 158 "declarative_debugger.m"
    return MR_TRUE;
#line 158 "declarative_debugger.m"
  }
#line 158 "declarative_debugger.m"
}

#line 521 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(
#line 521 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser_5,
#line 521 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_6)
#line 521 "declarative_debugger.m"
{
#line 524 "declarative_debugger.m"
  while (MR_TRUE)
#line 524 "declarative_debugger.m"
    {
#line 524 "declarative_debugger.m"
      /* tailcall optimized into a loop */
#line 524 "declarative_debugger.m"
      {
#line 524 "declarative_debugger.m"
        MR_bool mdb__declarative_debugger__succeeded;
#line 524 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__In_8;
#line 524 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__Out_9;
#line 524 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__Result_11;
#line 524 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 1)));
#line 524 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_18_18;
#line 525 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 0)));
#line 525 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 2)));
#line 525 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 3)));
#line 526 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_34_34;
#line 526 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_35_35;
#line 526 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_36_36;

#line 525 "declarative_debugger.m"
        {
#line 525 "declarative_debugger.m"
          mdb__declarative_debugger__In_8 = mdb__declarative_oracle__get_user_input_stream_1_f_0(mdb__declarative_debugger__V_17_17);
        }
#line 526 "declarative_debugger.m"
        mdb__declarative_debugger__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 0)));
#line 526 "declarative_debugger.m"
        mdb__declarative_debugger__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 1)));
#line 526 "declarative_debugger.m"
        mdb__declarative_debugger__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 2)));
#line 526 "declarative_debugger.m"
        mdb__declarative_debugger__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 3)));
#line 526 "declarative_debugger.m"
        {
#line 526 "declarative_debugger.m"
          mdb__declarative_debugger__Out_9 = mdb__declarative_oracle__get_user_output_stream_1_f_0(mdb__declarative_debugger__V_18_18);
        }
#line 528 "declarative_debugger.m"
        {
#line 528 "declarative_debugger.m"
          mdb__util__trace_getline_6_p_0((MR_String) "> ", &mdb__declarative_debugger__Result_11, mdb__declarative_debugger__In_8, mdb__declarative_debugger__Out_9);
        }
#line 540 "declarative_debugger.m"
#line 540 "declarative_debugger.m"
        switch (MR_tag((MR_Word) mdb__declarative_debugger__Result_11)) {
#line 540 "declarative_debugger.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 540 "declarative_debugger.m"
          case (MR_Integer) 0:
#line 546 "declarative_debugger.m"
            {
#line 547 "declarative_debugger.m"
              {
#line 547 "declarative_debugger.m"
                mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_9, (MR_String) "Unexpected EOF. Aborting.\n");
              }
#line 548 "declarative_debugger.m"
              *mdb__declarative_debugger__Response_6 = (MR_Integer) 0;
#line 546 "declarative_debugger.m"
            }
#line 540 "declarative_debugger.m"
            break;
#line 540 "declarative_debugger.m"
          case (MR_Integer) 1:
#line 530 "declarative_debugger.m"
            {
#line 530 "declarative_debugger.m"
              MR_String mdb__declarative_debugger__Line_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Result_11, (MR_Integer) 0)));
#line 530 "declarative_debugger.m"
              MR_String mdb__declarative_debugger__UpperLine_13;

#line 531 "declarative_debugger.m"
              {
#line 531 "declarative_debugger.m"
                mdb__declarative_debugger__UpperLine_13 = mercury__string__to_upper_1_f_0(mdb__declarative_debugger__Line_12);
              }
#line 532 "declarative_debugger.m"
              if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "Y") == 0))
#line 532 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = MR_TRUE;
#line 532 "declarative_debugger.m"
              else
#line 532 "declarative_debugger.m"
              if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "YES") == 0))
#line 532 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = MR_TRUE;
#line 532 "declarative_debugger.m"
              else
#line 532 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = MR_FALSE;
#line 532 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 533 "declarative_debugger.m"
                *mdb__declarative_debugger__Response_6 = (MR_Integer) 1;
#line 532 "declarative_debugger.m"
              else
#line 534 "declarative_debugger.m"
                {
#line 534 "declarative_debugger.m"
                  if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "N") == 0))
#line 534 "declarative_debugger.m"
                    mdb__declarative_debugger__succeeded = MR_TRUE;
#line 534 "declarative_debugger.m"
                  else
#line 534 "declarative_debugger.m"
                  if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "NO") == 0))
#line 534 "declarative_debugger.m"
                    mdb__declarative_debugger__succeeded = MR_TRUE;
#line 534 "declarative_debugger.m"
                  else
#line 534 "declarative_debugger.m"
                    mdb__declarative_debugger__succeeded = MR_FALSE;
#line 534 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 535 "declarative_debugger.m"
                    *mdb__declarative_debugger__Response_6 = (MR_Integer) 0;
#line 534 "declarative_debugger.m"
                  else
#line 537 "declarative_debugger.m"
                    {
#line 537 "declarative_debugger.m"
                      {
#line 537 "declarative_debugger.m"
                        mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_9, (MR_String) "Please answer yes or no.\n");
                      }
#line 538 "declarative_debugger.m"
                      /* direct tailcall eliminated */
#line 538 "declarative_debugger.m"
                      {
#line 538 "declarative_debugger.m"
                      }
#line 538 "declarative_debugger.m"
                      continue;
#line 537 "declarative_debugger.m"
                    }
#line 534 "declarative_debugger.m"
                }
#line 530 "declarative_debugger.m"
            }
#line 540 "declarative_debugger.m"
            break;
#line 540 "declarative_debugger.m"
          case (MR_Integer) 2:
#line 541 "declarative_debugger.m"
            {
#line 541 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__ErrNo_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__Result_11, (MR_Integer) 0)));
#line 541 "declarative_debugger.m"
              MR_String mdb__declarative_debugger__V_22_22;
#line 541 "declarative_debugger.m"
              MR_String mdb__declarative_debugger__V_25_25;
#line 541 "declarative_debugger.m"
              MR_String mdb__declarative_debugger__V_26_26;

#line 543 "declarative_debugger.m"
              {
#line 543 "declarative_debugger.m"
                mdb__declarative_debugger__V_26_26 = mercury__io__error_message_1_f_0(mdb__declarative_debugger__ErrNo_14);
              }
#line 543 "declarative_debugger.m"
              {
#line 543 "declarative_debugger.m"
                mdb__declarative_debugger__V_25_25 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__V_26_26, (MR_String) ". Aborting.\n");
              }
#line 542 "declarative_debugger.m"
              {
#line 542 "declarative_debugger.m"
                mdb__declarative_debugger__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading input: ", mdb__declarative_debugger__V_25_25);
              }
#line 542 "declarative_debugger.m"
              {
#line 542 "declarative_debugger.m"
                mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_9, mdb__declarative_debugger__V_22_22);
              }
#line 544 "declarative_debugger.m"
              *mdb__declarative_debugger__Response_6 = (MR_Integer) 0;
#line 541 "declarative_debugger.m"
            }
#line 540 "declarative_debugger.m"
            break;
#line 540 "declarative_debugger.m"
        }
#line 524 "declarative_debugger.m"
      }
#line 524 "declarative_debugger.m"
      break;
#line 524 "declarative_debugger.m"
    }
#line 521 "declarative_debugger.m"
}

#line 393 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
#line 393 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 393 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 393 "declarative_debugger.m"
{
#line 396 "declarative_debugger.m"
  {
#line 396 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 396 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__LatestOracle_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
#line 396 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__LastPushedOracle_5;
#line 396 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_6;
#line 396 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10;
#line 396 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
#line 397 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
#line 397 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
#line 399 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_18_18;
#line 399 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_19_19;
#line 399 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_20_20;
#line 401 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_21_21;
#line 401 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_23_23;
#line 401 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_24_24;
#line 401 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_22_22;

#line 398 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 398 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 398 "declarative_debugger.m"
      {
#line 398 "declarative_debugger.m"
        mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__V_14_14, (MR_Integer) 0)));
#line 399 "declarative_debugger.m"
        mdb__declarative_debugger__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 0)));
#line 399 "declarative_debugger.m"
        mdb__declarative_debugger__LastPushedOracle_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 1)));
#line 399 "declarative_debugger.m"
        mdb__declarative_debugger__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 2)));
#line 399 "declarative_debugger.m"
        mdb__declarative_debugger__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 3)));
#line 400 "declarative_debugger.m"
        {
#line 400 "declarative_debugger.m"
          mdb__declarative_oracle__update_revised_knowledge_base_3_p_0(mdb__declarative_debugger__LastPushedOracle_5, mdb__declarative_debugger__LatestOracle_4, &mdb__declarative_debugger__Oracle_6);
        }
#line 401 "declarative_debugger.m"
        mdb__declarative_debugger__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 0)));
#line 401 "declarative_debugger.m"
        mdb__declarative_debugger__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 1)));
#line 401 "declarative_debugger.m"
        mdb__declarative_debugger__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 2)));
#line 401 "declarative_debugger.m"
        mdb__declarative_debugger__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 3)));
#line 401 "declarative_debugger.m"
        {
#line 401 "declarative_debugger.m"
          MR_Word base;
#line 401 "declarative_debugger.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 401 "declarative_debugger.m"
          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8 = base;
#line 401 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_21_21));
#line 401 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_6));
#line 401 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_23_23));
#line 401 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_24_24));
#line 401 "declarative_debugger.m"
        }
#line 401 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = MR_TRUE;
#line 398 "declarative_debugger.m"
      }
#line 396 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 396 "declarative_debugger.m"
  }
#line 393 "declarative_debugger.m"
}

#line 388 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
#line 388 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
#line 388 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5)
#line 388 "declarative_debugger.m"
{
#line 390 "declarative_debugger.m"
  {
#line 390 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 390 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_7_7;
#line 391 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_8_8;
#line 391 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9;
#line 391 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10;
#line 391 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11;

#line 391 "declarative_debugger.m"
    {
#line 391 "declarative_debugger.m"
      mdb__declarative_debugger__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 391 "declarative_debugger.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_debugger__V_7_7, 0) = ((MR_Box) (mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4));
#line 391 "declarative_debugger.m"
    }
#line 391 "declarative_debugger.m"
    mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 0)));
#line 391 "declarative_debugger.m"
    mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 1)));
#line 391 "declarative_debugger.m"
    mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 2)));
#line 391 "declarative_debugger.m"
    mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 3)));
#line 391 "declarative_debugger.m"
    {
#line 391 "declarative_debugger.m"
      MR_Word base;
#line 391 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 391 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5 = base;
#line 391 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_8_8));
#line 391 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_9_9));
#line 391 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_10_10));
#line 391 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_7_7));
#line 391 "declarative_debugger.m"
    }
#line 390 "declarative_debugger.m"
  }
#line 388 "declarative_debugger.m"
}

#line 228 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0(
#line 228 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 228 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 228 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 228 "declarative_debugger.m"
{
#line 228 "declarative_debugger.m"
  {
#line 228 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 228 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_12 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 228 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_13 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 228 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_12 == mdb__declarative_debugger__CastY_13);
#line 228 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 4451 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 228 "declarative_debugger.m"
    else
#line 228 "declarative_debugger.m"
    if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 228 "declarative_debugger.m"
      {
#line 228 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_16_16 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__2_2), (MR_Integer) 0);

#line 228 "declarative_debugger.m"
        if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 228 "declarative_debugger.m"
          {
#line 228 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_11_11 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__3_3), (MR_Integer) 0);

#line 228 "declarative_debugger.m"
            {
#line 228 "declarative_debugger.m"
              mdb__declarative_debugger____Compare____final_decl_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_16_16, mdb__declarative_debugger__V_11_11);
            }
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
        else
#line 4478 "mdb.declarative_debugger.c"
          *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "declarative_debugger.m"
      }
#line 228 "declarative_debugger.m"
    else
#line 228 "declarative_debugger.m"
      {
#line 228 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 228 "declarative_debugger.m"
        if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4491 "mdb.declarative_debugger.c"
          *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "declarative_debugger.m"
        else
#line 228 "declarative_debugger.m"
          {
#line 228 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

#line 228 "declarative_debugger.m"
            {
#line 228 "declarative_debugger.m"
              mdb__declarative_debugger____Compare____init_decl_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_17_17, mdb__declarative_debugger__V_5_5);
            }
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
      }
#line 228 "declarative_debugger.m"
  }
#line 228 "declarative_debugger.m"
}

#line 228 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0(
#line 228 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 228 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 228 "declarative_debugger.m"
{
#line 228 "declarative_debugger.m"
  {
#line 228 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 228 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 228 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_8 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 228 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_7 == mdb__declarative_debugger__CastY_8);
#line 228 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 228 "declarative_debugger.m"
    else
#line 228 "declarative_debugger.m"
    if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 228 "declarative_debugger.m"
      {
#line 228 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__1_1), (MR_Integer) 0);
#line 228 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6;

#line 228 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 228 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
          {
#line 228 "declarative_debugger.m"
            mdb__declarative_debugger__V_6_6 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__2_2), (MR_Integer) 0);
#line 4557 "mdb.declarative_debugger.c"
            {
#line 4559 "mdb.declarative_debugger.c"
              mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(mdb__declarative_debugger__V_5_5, mdb__declarative_debugger__V_6_6);
            }
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
      }
#line 228 "declarative_debugger.m"
    else
#line 228 "declarative_debugger.m"
      {
#line 228 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 228 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4;

#line 228 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 228 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
          {
#line 228 "declarative_debugger.m"
            mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 4583 "mdb.declarative_debugger.c"
            {
#line 4585 "mdb.declarative_debugger.c"
              mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_4_4);
            }
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
      }
#line 228 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 228 "declarative_debugger.m"
  }
#line 228 "declarative_debugger.m"
}

#line 232 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0(
#line 232 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 232 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 232 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 232 "declarative_debugger.m"
{
#line 232 "declarative_debugger.m"
  {
#line 232 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 232 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_6 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 232 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 232 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_6 == mdb__declarative_debugger__CastY_7);
#line 232 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 4623 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 232 "declarative_debugger.m"
    else
#line 232 "declarative_debugger.m"
      {
#line 232 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = (MR_Word) mdb__declarative_debugger__HeadVar__2_2;
#line 232 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = (MR_Word) mdb__declarative_debugger__HeadVar__3_3;

#line 232 "declarative_debugger.m"
        {
#line 232 "declarative_debugger.m"
          mdb__declarative_execution____Compare____trace_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_5_5);
        }
#line 232 "declarative_debugger.m"
      }
#line 232 "declarative_debugger.m"
  }
#line 232 "declarative_debugger.m"
}

#line 232 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0(
#line 232 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 232 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 232 "declarative_debugger.m"
{
#line 232 "declarative_debugger.m"
  {
#line 232 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 232 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_5 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 232 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_6 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 232 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_5 == mdb__declarative_debugger__CastY_6);
#line 232 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 232 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 232 "declarative_debugger.m"
    else
#line 232 "declarative_debugger.m"
      {
#line 232 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_3_3 = (MR_Word) mdb__declarative_debugger__HeadVar__1_1;
#line 232 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = (MR_Word) mdb__declarative_debugger__HeadVar__2_2;

#line 4679 "mdb.declarative_debugger.c"
        {
#line 4681 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_4_4);
        }
#line 232 "declarative_debugger.m"
      }
#line 232 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 232 "declarative_debugger.m"
  }
#line 232 "declarative_debugger.m"
}

#line 237 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0(
#line 237 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 237 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 237 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 237 "declarative_debugger.m"
{
#line 237 "declarative_debugger.m"
  {
#line 237 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 237 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_9 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 237 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_10 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 237 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_9 == mdb__declarative_debugger__CastY_10);
#line 237 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 4717 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 237 "declarative_debugger.m"
    else
#line 237 "declarative_debugger.m"
      {
#line 237 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 237 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 237 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 237 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_8_8;

#line 237 "declarative_debugger.m"
        {
#line 237 "declarative_debugger.m"
          mdb__declarative_execution____Compare____trace_atom_0_0(&mdb__declarative_debugger__V_8_8, mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_6_6);
        }
#line 4739 "mdb.declarative_debugger.c"
        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_8_8 == (MR_Integer) 0);
#line 237 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 237 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 237 "declarative_debugger.m"
          *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_8_8;
#line 237 "declarative_debugger.m"
        else
#line 237 "declarative_debugger.m"
          {
#line 237 "declarative_debugger.m"
            {
#line 237 "declarative_debugger.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[4], mdb__declarative_debugger__HeadVar__1_1, ((MR_Box) (mdb__declarative_debugger__V_5_5)), ((MR_Box) (mdb__declarative_debugger__V_7_7)));
            }
#line 237 "declarative_debugger.m"
          }
#line 237 "declarative_debugger.m"
      }
#line 237 "declarative_debugger.m"
  }
#line 237 "declarative_debugger.m"
}

#line 237 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0(
#line 237 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 237 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 237 "declarative_debugger.m"
{
#line 237 "declarative_debugger.m"
  {
#line 237 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 237 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 237 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_8 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 237 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_7 == mdb__declarative_debugger__CastY_8);
#line 237 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 237 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 237 "declarative_debugger.m"
    else
#line 237 "declarative_debugger.m"
      {
#line 237 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_10_10;
#line 237 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 237 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 237 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 237 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));

#line 4804 "mdb.declarative_debugger.c"
        {
#line 4806 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_5_5);
        }
#line 237 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 237 "declarative_debugger.m"
          {
#line 4813 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_10_10 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[4];
#line 4815 "mdb.declarative_debugger.c"
            {
#line 4817 "mdb.declarative_debugger.c"
              mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_10_10, ((MR_Box) (mdb__declarative_debugger__V_4_4)), ((MR_Box) (mdb__declarative_debugger__V_6_6)));
            }
#line 237 "declarative_debugger.m"
          }
#line 237 "declarative_debugger.m"
      }
#line 237 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 237 "declarative_debugger.m"
  }
#line 237 "declarative_debugger.m"
}

#line 364 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0(
#line 364 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_17,
#line 364 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 364 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 364 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 364 "declarative_debugger.m"
{
#line 364 "declarative_debugger.m"
  {
#line 364 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 364 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_15 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 364 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_16 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 364 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_15 == mdb__declarative_debugger__CastY_16);
#line 364 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 4857 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 364 "declarative_debugger.m"
    else
#line 364 "declarative_debugger.m"
      {
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_12_12;
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_19_19;

#line 4884 "mdb.declarative_debugger.c"
        {
#line 4886 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4888 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_19_19, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 4890 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_19_19, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_17));
#line 4892 "mdb.declarative_debugger.c"
        }
#line 364 "declarative_debugger.m"
        {
#line 364 "declarative_debugger.m"
          mdb__declarative_analyser____Compare____analyser_state_1_0(mdb__declarative_debugger__TypeInfo_19_19, &mdb__declarative_debugger__V_12_12, (MR_Word) mdb__declarative_debugger__V_4_4, (MR_Word) mdb__declarative_debugger__V_8_8);
        }
#line 4899 "mdb.declarative_debugger.c"
        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_12_12 == (MR_Integer) 0);
#line 364 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 364 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 364 "declarative_debugger.m"
          *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_12_12;
#line 364 "declarative_debugger.m"
        else
#line 364 "declarative_debugger.m"
          {
#line 364 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_13_13;

#line 364 "declarative_debugger.m"
            {
#line 364 "declarative_debugger.m"
              mdb__declarative_oracle____Compare____oracle_state_0_0(&mdb__declarative_debugger__V_13_13, mdb__declarative_debugger__V_5_5, mdb__declarative_debugger__V_9_9);
            }
#line 4919 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_13_13 == (MR_Integer) 0);
#line 364 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 364 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 364 "declarative_debugger.m"
              *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_13_13;
#line 364 "declarative_debugger.m"
            else
#line 364 "declarative_debugger.m"
              {
#line 364 "declarative_debugger.m"
                MR_Word mdb__declarative_debugger__V_14_14;
#line 364 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_28_28 = (MR_Integer) mdb__declarative_debugger__V_6_6;
#line 364 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_29_29 = (MR_Integer) mdb__declarative_debugger__V_10_10;

#line 364 "declarative_debugger.m"
                {
#line 364 "declarative_debugger.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__V_14_14, mdb__declarative_debugger__V_28_28, mdb__declarative_debugger__V_29_29);
                }
#line 4943 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_14_14 == (MR_Integer) 0);
#line 364 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 364 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 364 "declarative_debugger.m"
                  *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_14_14;
#line 364 "declarative_debugger.m"
                else
#line 364 "declarative_debugger.m"
                  {
#line 364 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__TypeInfo_25_25;

#line 4958 "mdb.declarative_debugger.c"
                    {
#line 4960 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4962 "mdb.declarative_debugger.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_25_25, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1));
#line 4964 "mdb.declarative_debugger.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_25_25, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_17));
#line 4966 "mdb.declarative_debugger.c"
                    }
#line 364 "declarative_debugger.m"
                    {
#line 364 "declarative_debugger.m"
                      mercury__maybe____Compare____maybe_1_0(mdb__declarative_debugger__TypeInfo_25_25, mdb__declarative_debugger__HeadVar__1_1, (MR_Word) mdb__declarative_debugger__V_7_7, (MR_Word) mdb__declarative_debugger__V_11_11);
                    }
#line 364 "declarative_debugger.m"
                  }
#line 364 "declarative_debugger.m"
              }
#line 364 "declarative_debugger.m"
          }
#line 364 "declarative_debugger.m"
      }
#line 364 "declarative_debugger.m"
  }
#line 364 "declarative_debugger.m"
}

#line 364 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0(
#line 364 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_13,
#line 364 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 364 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 364 "declarative_debugger.m"
{
#line 364 "declarative_debugger.m"
  {
#line 364 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 364 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_11 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 364 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_12 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 364 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_11 == mdb__declarative_debugger__CastY_12);
#line 364 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 364 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 364 "declarative_debugger.m"
    else
#line 364 "declarative_debugger.m"
      {
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_15_15;
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeCtorInfo_19_19;
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_20_20;
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 364 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));

#line 5039 "mdb.declarative_debugger.c"
        {
#line 5041 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5043 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_15_15, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 5045 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_15_15, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_13));
#line 5047 "mdb.declarative_debugger.c"
        }
#line 5049 "mdb.declarative_debugger.c"
        {
#line 5051 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__succeeded = mdb__declarative_analyser____Unify____analyser_state_1_0(mdb__declarative_debugger__TypeInfo_15_15, (MR_Word) mdb__declarative_debugger__V_3_3, (MR_Word) mdb__declarative_debugger__V_7_7);
        }
#line 364 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 364 "declarative_debugger.m"
          {
#line 5058 "mdb.declarative_debugger.c"
            {
#line 5060 "mdb.declarative_debugger.c"
              mdb__declarative_debugger__succeeded = mdb__declarative_oracle____Unify____oracle_state_0_0(mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_8_8);
            }
#line 364 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 364 "declarative_debugger.m"
              {
#line 5067 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_5_5 == mdb__declarative_debugger__V_9_9);
#line 364 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 364 "declarative_debugger.m"
                  {
#line 5073 "mdb.declarative_debugger.c"
                    mdb__declarative_debugger__TypeCtorInfo_19_19 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1;
#line 5075 "mdb.declarative_debugger.c"
                    {
#line 5077 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5079 "mdb.declarative_debugger.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_20_20, 0) = ((MR_Box) (mdb__declarative_debugger__TypeCtorInfo_19_19));
#line 5081 "mdb.declarative_debugger.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_20_20, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_13));
#line 5083 "mdb.declarative_debugger.c"
                    }
#line 5085 "mdb.declarative_debugger.c"
                    {
#line 5087 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mercury__maybe____Unify____maybe_1_0(mdb__declarative_debugger__TypeInfo_20_20, (MR_Word) mdb__declarative_debugger__V_6_6, (MR_Word) mdb__declarative_debugger__V_10_10);
                    }
#line 364 "declarative_debugger.m"
                  }
#line 364 "declarative_debugger.m"
              }
#line 364 "declarative_debugger.m"
          }
#line 364 "declarative_debugger.m"
      }
#line 364 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 364 "declarative_debugger.m"
  }
#line 364 "declarative_debugger.m"
}

#line 248 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0(
#line 248 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_90,
#line 248 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 248 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 248 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 248 "declarative_debugger.m"
{
#line 248 "declarative_debugger.m"
  {
#line 248 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 248 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_88 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 248 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_89 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 248 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_88 == mdb__declarative_debugger__CastY_89);
#line 248 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 5131 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "declarative_debugger.m"
    else
#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
#line 248 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
          switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 248 "declarative_debugger.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
            case (MR_Integer) 0:
#line 248 "declarative_debugger.m"
              *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 248 "declarative_debugger.m"
              break;
#line 248 "declarative_debugger.m"
            case (MR_Integer) 1:
#line 5155 "mdb.declarative_debugger.c"
              *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_debugger.m"
              break;
#line 248 "declarative_debugger.m"
            case (MR_Integer) 2:
#line 5161 "mdb.declarative_debugger.c"
              *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_debugger.m"
              break;
#line 248 "declarative_debugger.m"
            case (MR_Integer) 3:
#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
#line 248 "declarative_debugger.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
                case (MR_Integer) 0:
#line 5174 "mdb.declarative_debugger.c"
                  *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_debugger.m"
                  break;
#line 248 "declarative_debugger.m"
                case (MR_Integer) 1:
#line 5180 "mdb.declarative_debugger.c"
                  *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_debugger.m"
                  break;
#line 248 "declarative_debugger.m"
              }
#line 248 "declarative_debugger.m"
              break;
#line 248 "declarative_debugger.m"
          }
#line 248 "declarative_debugger.m"
          break;
#line 248 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 248 "declarative_debugger.m"
          {
#line 248 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 248 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 5206 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_debugger.m"
                break;
#line 248 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 248 "declarative_debugger.m"
                {
#line 248 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

#line 248 "declarative_debugger.m"
                  {
#line 248 "declarative_debugger.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_98_98, mdb__declarative_debugger__V_5_5);
                  }
#line 248 "declarative_debugger.m"
                }
#line 248 "declarative_debugger.m"
                break;
#line 248 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 5228 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_debugger.m"
                break;
#line 248 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
#line 248 "declarative_debugger.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 0:
#line 5241 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 1:
#line 5247 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                }
#line 248 "declarative_debugger.m"
                break;
#line 248 "declarative_debugger.m"
            }
#line 248 "declarative_debugger.m"
          }
#line 248 "declarative_debugger.m"
          break;
#line 248 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 248 "declarative_debugger.m"
          {
#line 248 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 248 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 5275 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_debugger.m"
                break;
#line 248 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 5281 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_debugger.m"
                break;
#line 248 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 248 "declarative_debugger.m"
                {
#line 248 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

#line 248 "declarative_debugger.m"
                  {
#line 248 "declarative_debugger.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_105_105, mdb__declarative_debugger__V_20_20);
                  }
#line 248 "declarative_debugger.m"
                }
#line 248 "declarative_debugger.m"
                break;
#line 248 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
#line 248 "declarative_debugger.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 0:
#line 5310 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 1:
#line 5316 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                }
#line 248 "declarative_debugger.m"
                break;
#line 248 "declarative_debugger.m"
            }
#line 248 "declarative_debugger.m"
          }
#line 248 "declarative_debugger.m"
          break;
#line 248 "declarative_debugger.m"
        case (MR_Integer) 3:
#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)))) {
#line 248 "declarative_debugger.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
            case (MR_Integer) 0:
#line 248 "declarative_debugger.m"
              {
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 4)));
#line 248 "declarative_debugger.m"
                MR_Box mdb__declarative_debugger__V_100_100 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3));
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));

#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
                switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 248 "declarative_debugger.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 0:
#line 5357 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 1:
#line 5363 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 2:
#line 5369 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 3:
#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
#line 248 "declarative_debugger.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
                      case (MR_Integer) 0:
#line 248 "declarative_debugger.m"
                        {
#line 248 "declarative_debugger.m"
                          MR_Integer mdb__declarative_debugger__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 248 "declarative_debugger.m"
                          MR_Integer mdb__declarative_debugger__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 248 "declarative_debugger.m"
                          MR_Box mdb__declarative_debugger__V_58_58 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3));
#line 248 "declarative_debugger.m"
                          MR_Integer mdb__declarative_debugger__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 4)));
#line 248 "declarative_debugger.m"
                          MR_Word mdb__declarative_debugger__V_60_60;

#line 248 "declarative_debugger.m"
                          {
#line 248 "declarative_debugger.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__V_60_60, mdb__declarative_debugger__V_102_102, mdb__declarative_debugger__V_56_56);
                          }
#line 5400 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_60_60 == (MR_Integer) 0);
#line 248 "declarative_debugger.m"
                          mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 248 "declarative_debugger.m"
                          if (mdb__declarative_debugger__succeeded)
#line 248 "declarative_debugger.m"
                            *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_60_60;
#line 248 "declarative_debugger.m"
                          else
#line 248 "declarative_debugger.m"
                            {
#line 248 "declarative_debugger.m"
                              MR_Word mdb__declarative_debugger__V_61_61;

#line 248 "declarative_debugger.m"
                              {
#line 248 "declarative_debugger.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__V_61_61, mdb__declarative_debugger__V_101_101, mdb__declarative_debugger__V_57_57);
                              }
#line 5420 "mdb.declarative_debugger.c"
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_61_61 == (MR_Integer) 0);
#line 248 "declarative_debugger.m"
                              mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 248 "declarative_debugger.m"
                              if (mdb__declarative_debugger__succeeded)
#line 248 "declarative_debugger.m"
                                *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_61_61;
#line 248 "declarative_debugger.m"
                              else
#line 248 "declarative_debugger.m"
                                {
#line 248 "declarative_debugger.m"
                                  MR_Word mdb__declarative_debugger__V_62_62;

#line 248 "declarative_debugger.m"
                                  {
#line 248 "declarative_debugger.m"
                                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_R_90, &mdb__declarative_debugger__V_62_62, mdb__declarative_debugger__V_100_100, mdb__declarative_debugger__V_58_58);
                                  }
#line 5440 "mdb.declarative_debugger.c"
                                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_62_62 == (MR_Integer) 0);
#line 248 "declarative_debugger.m"
                                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 248 "declarative_debugger.m"
                                  if (mdb__declarative_debugger__succeeded)
#line 248 "declarative_debugger.m"
                                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_62_62;
#line 248 "declarative_debugger.m"
                                  else
#line 248 "declarative_debugger.m"
                                    {
#line 248 "declarative_debugger.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_99_99, mdb__declarative_debugger__V_59_59);
                                    }
#line 248 "declarative_debugger.m"
                                }
#line 248 "declarative_debugger.m"
                            }
#line 248 "declarative_debugger.m"
                        }
#line 248 "declarative_debugger.m"
                        break;
#line 248 "declarative_debugger.m"
                      case (MR_Integer) 1:
#line 5465 "mdb.declarative_debugger.c"
                        *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 248 "declarative_debugger.m"
                        break;
#line 248 "declarative_debugger.m"
                    }
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                }
#line 248 "declarative_debugger.m"
              }
#line 248 "declarative_debugger.m"
              break;
#line 248 "declarative_debugger.m"
            case (MR_Integer) 1:
#line 248 "declarative_debugger.m"
              {
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));

#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
                switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 248 "declarative_debugger.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 0:
#line 5495 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 1:
#line 5501 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 2:
#line 5507 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                  case (MR_Integer) 3:
#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
#line 248 "declarative_debugger.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
                      case (MR_Integer) 0:
#line 5520 "mdb.declarative_debugger.c"
                        *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 248 "declarative_debugger.m"
                        break;
#line 248 "declarative_debugger.m"
                      case (MR_Integer) 1:
#line 248 "declarative_debugger.m"
                        {
#line 248 "declarative_debugger.m"
                          MR_Integer mdb__declarative_debugger__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 248 "declarative_debugger.m"
                          MR_Integer mdb__declarative_debugger__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 248 "declarative_debugger.m"
                          MR_Word mdb__declarative_debugger__V_87_87;

#line 248 "declarative_debugger.m"
                          {
#line 248 "declarative_debugger.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__V_87_87, mdb__declarative_debugger__V_104_104, mdb__declarative_debugger__V_85_85);
                          }
#line 5540 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_87_87 == (MR_Integer) 0);
#line 248 "declarative_debugger.m"
                          mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 248 "declarative_debugger.m"
                          if (mdb__declarative_debugger__succeeded)
#line 248 "declarative_debugger.m"
                            *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_87_87;
#line 248 "declarative_debugger.m"
                          else
#line 248 "declarative_debugger.m"
                            {
#line 248 "declarative_debugger.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_103_103, mdb__declarative_debugger__V_86_86);
                            }
#line 248 "declarative_debugger.m"
                        }
#line 248 "declarative_debugger.m"
                        break;
#line 248 "declarative_debugger.m"
                    }
#line 248 "declarative_debugger.m"
                    break;
#line 248 "declarative_debugger.m"
                }
#line 248 "declarative_debugger.m"
              }
#line 248 "declarative_debugger.m"
              break;
#line 248 "declarative_debugger.m"
          }
#line 248 "declarative_debugger.m"
          break;
#line 248 "declarative_debugger.m"
      }
#line 248 "declarative_debugger.m"
  }
#line 248 "declarative_debugger.m"
}

#line 248 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0(
#line 248 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_23,
#line 248 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 248 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 248 "declarative_debugger.m"
{
#line 248 "declarative_debugger.m"
  {
#line 248 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 248 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_21 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 248 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_22 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 248 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_21 == mdb__declarative_debugger__CastY_22);
#line 248 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 248 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 248 "declarative_debugger.m"
    else
#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 248 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 248 "declarative_debugger.m"
          {
#line 248 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__CastX_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 248 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__CastY_8 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 248 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastY_8 == mdb__declarative_debugger__CastX_7);
#line 248 "declarative_debugger.m"
          }
#line 248 "declarative_debugger.m"
          break;
#line 248 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 248 "declarative_debugger.m"
          {
#line 248 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_4_4;

#line 248 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 248 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 248 "declarative_debugger.m"
              {
#line 248 "declarative_debugger.m"
                mdb__declarative_debugger__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 5645 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_3_3 == mdb__declarative_debugger__V_4_4);
#line 248 "declarative_debugger.m"
              }
#line 248 "declarative_debugger.m"
          }
#line 248 "declarative_debugger.m"
          break;
#line 248 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 248 "declarative_debugger.m"
          {
#line 248 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 248 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_6_6;

#line 248 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 248 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 248 "declarative_debugger.m"
              {
#line 248 "declarative_debugger.m"
                mdb__declarative_debugger__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 5670 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_5_5 == mdb__declarative_debugger__V_6_6);
#line 248 "declarative_debugger.m"
              }
#line 248 "declarative_debugger.m"
          }
#line 248 "declarative_debugger.m"
          break;
#line 248 "declarative_debugger.m"
        case (MR_Integer) 3:
#line 248 "declarative_debugger.m"
#line 248 "declarative_debugger.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)))) {
#line 248 "declarative_debugger.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 248 "declarative_debugger.m"
            case (MR_Integer) 0:
#line 248 "declarative_debugger.m"
              {
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 248 "declarative_debugger.m"
                MR_Box mdb__declarative_debugger__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3));
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 4)));
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_13_13;
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_14_14;
#line 248 "declarative_debugger.m"
                MR_Box mdb__declarative_debugger__V_15_15;
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_16_16;

#line 248 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 248 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 248 "declarative_debugger.m"
                  {
#line 248 "declarative_debugger.m"
                    mdb__declarative_debugger__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "declarative_debugger.m"
                    mdb__declarative_debugger__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 248 "declarative_debugger.m"
                    mdb__declarative_debugger__V_15_15 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3));
#line 248 "declarative_debugger.m"
                    mdb__declarative_debugger__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 4)));
#line 5720 "mdb.declarative_debugger.c"
                    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_9_9 == mdb__declarative_debugger__V_13_13);
#line 248 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 248 "declarative_debugger.m"
                      {
#line 5726 "mdb.declarative_debugger.c"
                        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_10_10 == mdb__declarative_debugger__V_14_14);
#line 248 "declarative_debugger.m"
                        if (mdb__declarative_debugger__succeeded)
#line 248 "declarative_debugger.m"
                          {
#line 5732 "mdb.declarative_debugger.c"
                            {
#line 5734 "mdb.declarative_debugger.c"
                              mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_R_23, mdb__declarative_debugger__V_11_11, mdb__declarative_debugger__V_15_15);
                            }
#line 248 "declarative_debugger.m"
                            if (mdb__declarative_debugger__succeeded)
#line 5739 "mdb.declarative_debugger.c"
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_12_12 == mdb__declarative_debugger__V_16_16);
#line 248 "declarative_debugger.m"
                          }
#line 248 "declarative_debugger.m"
                      }
#line 248 "declarative_debugger.m"
                  }
#line 248 "declarative_debugger.m"
              }
#line 248 "declarative_debugger.m"
              break;
#line 248 "declarative_debugger.m"
            case (MR_Integer) 1:
#line 248 "declarative_debugger.m"
              {
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_19_19;
#line 248 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_20_20;

#line 248 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 248 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 248 "declarative_debugger.m"
                  {
#line 248 "declarative_debugger.m"
                    mdb__declarative_debugger__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 248 "declarative_debugger.m"
                    mdb__declarative_debugger__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 5774 "mdb.declarative_debugger.c"
                    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_17_17 == mdb__declarative_debugger__V_19_19);
#line 248 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 5778 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_18_18 == mdb__declarative_debugger__V_20_20);
#line 248 "declarative_debugger.m"
                  }
#line 248 "declarative_debugger.m"
              }
#line 248 "declarative_debugger.m"
              break;
#line 248 "declarative_debugger.m"
          }
#line 248 "declarative_debugger.m"
          break;
#line 248 "declarative_debugger.m"
      }
#line 248 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 248 "declarative_debugger.m"
  }
#line 248 "declarative_debugger.m"
}

#line 313 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0(
#line 313 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 313 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 313 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 313 "declarative_debugger.m"
{
#line 313 "declarative_debugger.m"
  {
#line 313 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 313 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_36 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 313 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_37 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 313 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_36 == mdb__declarative_debugger__CastY_37);
#line 313 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 5823 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 313 "declarative_debugger.m"
    else
#line 313 "declarative_debugger.m"
#line 313 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
#line 313 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 313 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 313 "declarative_debugger.m"
          {
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 313 "declarative_debugger.m"
#line 313 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 313 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 313 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 313 "declarative_debugger.m"
                {
#line 313 "declarative_debugger.m"
                  MR_String mdb__declarative_debugger__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 313 "declarative_debugger.m"
                  MR_String mdb__declarative_debugger__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 313 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_8_8;

#line 313 "declarative_debugger.m"
                  {
#line 313 "declarative_debugger.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_debugger__V_8_8, mdb__declarative_debugger__V_44_44, mdb__declarative_debugger__V_6_6);
                  }
#line 5862 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_8_8 == (MR_Integer) 0);
#line 313 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 313 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 313 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_8_8;
#line 313 "declarative_debugger.m"
                  else
#line 313 "declarative_debugger.m"
                    {
#line 313 "declarative_debugger.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_43_43, mdb__declarative_debugger__V_7_7);
                    }
#line 313 "declarative_debugger.m"
                }
#line 313 "declarative_debugger.m"
                break;
#line 313 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 5883 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 313 "declarative_debugger.m"
                break;
#line 313 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 5889 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 313 "declarative_debugger.m"
                break;
#line 313 "declarative_debugger.m"
            }
#line 313 "declarative_debugger.m"
          }
#line 313 "declarative_debugger.m"
          break;
#line 313 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 313 "declarative_debugger.m"
          {
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 313 "declarative_debugger.m"
#line 313 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 313 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 313 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 5915 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 313 "declarative_debugger.m"
                break;
#line 313 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 313 "declarative_debugger.m"
                {
#line 313 "declarative_debugger.m"
                  MR_String mdb__declarative_debugger__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 313 "declarative_debugger.m"
                  MR_String mdb__declarative_debugger__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 313 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_24_24;

#line 313 "declarative_debugger.m"
                  {
#line 313 "declarative_debugger.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_debugger__V_24_24, mdb__declarative_debugger__V_46_46, mdb__declarative_debugger__V_22_22);
                  }
#line 5935 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_24_24 == (MR_Integer) 0);
#line 313 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 313 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 313 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_24_24;
#line 313 "declarative_debugger.m"
                  else
#line 313 "declarative_debugger.m"
                    {
#line 313 "declarative_debugger.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_45_45, mdb__declarative_debugger__V_23_23);
                    }
#line 313 "declarative_debugger.m"
                }
#line 313 "declarative_debugger.m"
                break;
#line 313 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 5956 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 313 "declarative_debugger.m"
                break;
#line 313 "declarative_debugger.m"
            }
#line 313 "declarative_debugger.m"
          }
#line 313 "declarative_debugger.m"
          break;
#line 313 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 313 "declarative_debugger.m"
          {
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 313 "declarative_debugger.m"
#line 313 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 313 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 313 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 5980 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 313 "declarative_debugger.m"
                break;
#line 313 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 5986 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 313 "declarative_debugger.m"
                break;
#line 313 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 313 "declarative_debugger.m"
                {
#line 313 "declarative_debugger.m"
                  MR_String mdb__declarative_debugger__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

#line 313 "declarative_debugger.m"
                  {
#line 313 "declarative_debugger.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_47_47, mdb__declarative_debugger__V_35_35);
                  }
#line 313 "declarative_debugger.m"
                }
#line 313 "declarative_debugger.m"
                break;
#line 313 "declarative_debugger.m"
            }
#line 313 "declarative_debugger.m"
          }
#line 313 "declarative_debugger.m"
          break;
#line 313 "declarative_debugger.m"
      }
#line 313 "declarative_debugger.m"
  }
#line 313 "declarative_debugger.m"
}

#line 313 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0(
#line 313 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 313 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 313 "declarative_debugger.m"
{
#line 313 "declarative_debugger.m"
  {
#line 313 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 313 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_13 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 313 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_14 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 313 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_13 == mdb__declarative_debugger__CastY_14);
#line 313 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 313 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 313 "declarative_debugger.m"
    else
#line 313 "declarative_debugger.m"
#line 313 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 313 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 313 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 313 "declarative_debugger.m"
          {
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_5_5;
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_6_6;

#line 313 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 313 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 313 "declarative_debugger.m"
              {
#line 313 "declarative_debugger.m"
                mdb__declarative_debugger__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 313 "declarative_debugger.m"
                mdb__declarative_debugger__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 6073 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_5_5) == 0);
#line 313 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 6077 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_6_6) == 0);
#line 313 "declarative_debugger.m"
              }
#line 313 "declarative_debugger.m"
          }
#line 313 "declarative_debugger.m"
          break;
#line 313 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 313 "declarative_debugger.m"
          {
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_9_9;
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_10_10;

#line 313 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 313 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 313 "declarative_debugger.m"
              {
#line 313 "declarative_debugger.m"
                mdb__declarative_debugger__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 313 "declarative_debugger.m"
                mdb__declarative_debugger__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 6108 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__V_7_7, mdb__declarative_debugger__V_9_9) == 0);
#line 313 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 6112 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__V_8_8, mdb__declarative_debugger__V_10_10) == 0);
#line 313 "declarative_debugger.m"
              }
#line 313 "declarative_debugger.m"
          }
#line 313 "declarative_debugger.m"
          break;
#line 313 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 313 "declarative_debugger.m"
          {
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 313 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_12_12;

#line 313 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 313 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 313 "declarative_debugger.m"
              {
#line 313 "declarative_debugger.m"
                mdb__declarative_debugger__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 6137 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__V_11_11, mdb__declarative_debugger__V_12_12) == 0);
#line 313 "declarative_debugger.m"
              }
#line 313 "declarative_debugger.m"
          }
#line 313 "declarative_debugger.m"
          break;
#line 313 "declarative_debugger.m"
      }
#line 313 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 313 "declarative_debugger.m"
  }
#line 313 "declarative_debugger.m"
}

#line 82 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0(
#line 82 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 82 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 82 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 82 "declarative_debugger.m"
{
#line 82 "declarative_debugger.m"
  {
#line 82 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 82 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 82 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 82 "declarative_debugger.m"
    {
#line 82 "declarative_debugger.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Cast_HeadVar1_4, mdb__declarative_debugger__Cast_HeadVar2_5);
    }
#line 82 "declarative_debugger.m"
  }
#line 82 "declarative_debugger.m"
}

#line 82 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_truth_0_0(
#line 82 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_1,
#line 82 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 82 "declarative_debugger.m"
{
#line 6193 "mdb.declarative_debugger.c"
  {
#line 6195 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__HeadVar__2_1 == mdb__declarative_debugger__HeadVar__2_2);

#line 6198 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 6200 "mdb.declarative_debugger.c"
  }
#line 82 "declarative_debugger.m"
}

#line 168 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0(
#line 168 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_66,
#line 168 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 168 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 168 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 168 "declarative_debugger.m"
{
#line 168 "declarative_debugger.m"
  {
#line 168 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 168 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_64 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 168 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_65 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 168 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_64 == mdb__declarative_debugger__CastY_65);
#line 168 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 6231 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 168 "declarative_debugger.m"
    else
#line 168 "declarative_debugger.m"
#line 168 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
#line 168 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 168 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 168 "declarative_debugger.m"
          {
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_81_81 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 168 "declarative_debugger.m"
#line 168 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 168 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 168 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 168 "declarative_debugger.m"
                {
#line 168 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_7_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_10_10;

#line 168 "declarative_debugger.m"
                  {
#line 168 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_66, &mdb__declarative_debugger__V_10_10, mdb__declarative_debugger__V_81_81, mdb__declarative_debugger__V_7_7);
                  }
#line 6274 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_10_10 == (MR_Integer) 0);
#line 168 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 168 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_10_10;
#line 168 "declarative_debugger.m"
                  else
#line 168 "declarative_debugger.m"
                    {
#line 168 "declarative_debugger.m"
                      MR_Word mdb__declarative_debugger__V_11_11;

#line 168 "declarative_debugger.m"
                      {
#line 168 "declarative_debugger.m"
                        mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_11_11, mdb__declarative_debugger__V_80_80, mdb__declarative_debugger__V_8_8);
                      }
#line 6294 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_11_11 == (MR_Integer) 0);
#line 168 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 168 "declarative_debugger.m"
                      if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_11_11;
#line 168 "declarative_debugger.m"
                      else
#line 168 "declarative_debugger.m"
                        {
#line 168 "declarative_debugger.m"
                          mdb__declarative_debugger____Compare____final_decl_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_79_79, mdb__declarative_debugger__V_9_9);
                        }
#line 168 "declarative_debugger.m"
                    }
#line 168 "declarative_debugger.m"
                }
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 6317 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 6323 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
            }
#line 168 "declarative_debugger.m"
          }
#line 168 "declarative_debugger.m"
          break;
#line 168 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 168 "declarative_debugger.m"
          {
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_75_75 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 168 "declarative_debugger.m"
#line 168 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 168 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 168 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 6351 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 168 "declarative_debugger.m"
                {
#line 168 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_33_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_36_36;

#line 168 "declarative_debugger.m"
                  {
#line 168 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_66, &mdb__declarative_debugger__V_36_36, mdb__declarative_debugger__V_75_75, mdb__declarative_debugger__V_33_33);
                  }
#line 6373 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_36_36 == (MR_Integer) 0);
#line 168 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 168 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_36_36;
#line 168 "declarative_debugger.m"
                  else
#line 168 "declarative_debugger.m"
                    {
#line 168 "declarative_debugger.m"
                      MR_Word mdb__declarative_debugger__V_37_37;

#line 168 "declarative_debugger.m"
                      {
#line 168 "declarative_debugger.m"
                        mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_37_37, mdb__declarative_debugger__V_74_74, mdb__declarative_debugger__V_34_34);
                      }
#line 6393 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_37_37 == (MR_Integer) 0);
#line 168 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 168 "declarative_debugger.m"
                      if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_37_37;
#line 168 "declarative_debugger.m"
                      else
#line 168 "declarative_debugger.m"
                        {
#line 168 "declarative_debugger.m"
                          {
#line 168 "declarative_debugger.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[3], mdb__declarative_debugger__HeadVar__1_1, ((MR_Box) (mdb__declarative_debugger__V_73_73)), ((MR_Box) (mdb__declarative_debugger__V_35_35)));
                          }
#line 168 "declarative_debugger.m"
                        }
#line 168 "declarative_debugger.m"
                    }
#line 168 "declarative_debugger.m"
                }
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 6420 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
            }
#line 168 "declarative_debugger.m"
          }
#line 168 "declarative_debugger.m"
          break;
#line 168 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 168 "declarative_debugger.m"
          {
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_78_78 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 168 "declarative_debugger.m"
#line 168 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 168 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 168 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 6448 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 6454 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 168 "declarative_debugger.m"
                {
#line 168 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_59_59 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_62_62;

#line 168 "declarative_debugger.m"
                  {
#line 168 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_66, &mdb__declarative_debugger__V_62_62, mdb__declarative_debugger__V_78_78, mdb__declarative_debugger__V_59_59);
                  }
#line 6476 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_62_62 == (MR_Integer) 0);
#line 168 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 168 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_62_62;
#line 168 "declarative_debugger.m"
                  else
#line 168 "declarative_debugger.m"
                    {
#line 168 "declarative_debugger.m"
                      MR_Word mdb__declarative_debugger__V_63_63;

#line 168 "declarative_debugger.m"
                      {
#line 168 "declarative_debugger.m"
                        mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_63_63, mdb__declarative_debugger__V_77_77, mdb__declarative_debugger__V_60_60);
                      }
#line 6496 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_63_63 == (MR_Integer) 0);
#line 168 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 168 "declarative_debugger.m"
                      if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_63_63;
#line 168 "declarative_debugger.m"
                      else
#line 168 "declarative_debugger.m"
                        {
#line 168 "declarative_debugger.m"
                          mdb__term_rep____Compare____term_rep_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_76_76, mdb__declarative_debugger__V_61_61);
                        }
#line 168 "declarative_debugger.m"
                    }
#line 168 "declarative_debugger.m"
                }
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
            }
#line 168 "declarative_debugger.m"
          }
#line 168 "declarative_debugger.m"
          break;
#line 168 "declarative_debugger.m"
      }
#line 168 "declarative_debugger.m"
  }
#line 168 "declarative_debugger.m"
}

#line 168 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0(
#line 168 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_23,
#line 168 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 168 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 168 "declarative_debugger.m"
{
#line 168 "declarative_debugger.m"
  {
#line 168 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 168 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_21 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 168 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_22 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 168 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_21 == mdb__declarative_debugger__CastY_22);
#line 168 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 168 "declarative_debugger.m"
    else
#line 168 "declarative_debugger.m"
#line 168 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 168 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 168 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 168 "declarative_debugger.m"
          {
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_6_6;
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_7_7;
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_8_8;

#line 168 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 168 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
              {
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_6_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 6592 "mdb.declarative_debugger.c"
                {
#line 6594 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_6_6);
                }
#line 168 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                  {
#line 6601 "mdb.declarative_debugger.c"
                    {
#line 6603 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_7_7);
                    }
#line 168 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 6608 "mdb.declarative_debugger.c"
                      {
#line 6610 "mdb.declarative_debugger.c"
                        mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(mdb__declarative_debugger__V_5_5, mdb__declarative_debugger__V_8_8);
                      }
#line 168 "declarative_debugger.m"
                  }
#line 168 "declarative_debugger.m"
              }
#line 168 "declarative_debugger.m"
          }
#line 168 "declarative_debugger.m"
          break;
#line 168 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 168 "declarative_debugger.m"
          {
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__TypeInfo_24_24;
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_12_12;
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_13_13;
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_14_14;

#line 168 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 168 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
              {
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 6652 "mdb.declarative_debugger.c"
                {
#line 6654 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_9_9, mdb__declarative_debugger__V_12_12);
                }
#line 168 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                  {
#line 6661 "mdb.declarative_debugger.c"
                    {
#line 6663 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_10_10, mdb__declarative_debugger__V_13_13);
                    }
#line 168 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                      {
#line 6670 "mdb.declarative_debugger.c"
                        mdb__declarative_debugger__TypeInfo_24_24 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[3];
#line 6672 "mdb.declarative_debugger.c"
                        {
#line 6674 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_24_24, ((MR_Box) (mdb__declarative_debugger__V_11_11)), ((MR_Box) (mdb__declarative_debugger__V_14_14)));
                        }
#line 168 "declarative_debugger.m"
                      }
#line 168 "declarative_debugger.m"
                  }
#line 168 "declarative_debugger.m"
              }
#line 168 "declarative_debugger.m"
          }
#line 168 "declarative_debugger.m"
          break;
#line 168 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 168 "declarative_debugger.m"
          {
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_15_15 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_18_18;
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_19_19;
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_20_20;

#line 168 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 168 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
              {
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_18_18 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 6716 "mdb.declarative_debugger.c"
                {
#line 6718 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_15_15, mdb__declarative_debugger__V_18_18);
                }
#line 168 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                  {
#line 6725 "mdb.declarative_debugger.c"
                    {
#line 6727 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_16_16, mdb__declarative_debugger__V_19_19);
                    }
#line 168 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 6732 "mdb.declarative_debugger.c"
                      {
#line 6734 "mdb.declarative_debugger.c"
                        mdb__declarative_debugger__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_debugger__V_17_17, mdb__declarative_debugger__V_20_20);
                      }
#line 168 "declarative_debugger.m"
                  }
#line 168 "declarative_debugger.m"
              }
#line 168 "declarative_debugger.m"
          }
#line 168 "declarative_debugger.m"
          break;
#line 168 "declarative_debugger.m"
      }
#line 168 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 168 "declarative_debugger.m"
  }
#line 168 "declarative_debugger.m"
}

#line 158 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0(
#line 158 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1)
#line 158 "declarative_debugger.m"
{
#line 158 "declarative_debugger.m"
  {
#line 158 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 158 "declarative_debugger.m"
    {
#line 158 "declarative_debugger.m"
      mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mdb__declarative_debugger__HeadVar__1_1);
    }
#line 158 "declarative_debugger.m"
  }
#line 158 "declarative_debugger.m"
}

#line 158 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0(void)
#line 158 "declarative_debugger.m"
{
#line 158 "declarative_debugger.m"
  {
#line 158 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 158 "declarative_debugger.m"
    {
#line 158 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 158 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 158 "declarative_debugger.m"
  }
#line 158 "declarative_debugger.m"
}

#line 139 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0(
#line 139 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 139 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 139 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 139 "declarative_debugger.m"
{
#line 139 "declarative_debugger.m"
  {
#line 139 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 139 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_14 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 139 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_15 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 139 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_14 == mdb__declarative_debugger__CastY_15);
#line 139 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 6822 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 139 "declarative_debugger.m"
    else
#line 139 "declarative_debugger.m"
      {
#line 139 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 139 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));
#line 139 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 139 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 139 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)));
#line 139 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_12_12;

#line 139 "declarative_debugger.m"
        {
#line 139 "declarative_debugger.m"
          mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_12_12, mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_8_8);
        }
#line 6848 "mdb.declarative_debugger.c"
        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_12_12 == (MR_Integer) 0);
#line 139 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 139 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 139 "declarative_debugger.m"
          *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_12_12;
#line 139 "declarative_debugger.m"
        else
#line 139 "declarative_debugger.m"
          {
#line 139 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_13_13;

#line 139 "declarative_debugger.m"
            {
#line 139 "declarative_debugger.m"
              mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_13_13, mdb__declarative_debugger__V_6_6, mdb__declarative_debugger__V_10_10);
            }
#line 6868 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_13_13 == (MR_Integer) 0);
#line 139 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 139 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 139 "declarative_debugger.m"
              *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_13_13;
#line 139 "declarative_debugger.m"
            else
#line 139 "declarative_debugger.m"
              {
#line 139 "declarative_debugger.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_7_7, mdb__declarative_debugger__V_11_11);
              }
#line 139 "declarative_debugger.m"
          }
#line 139 "declarative_debugger.m"
      }
#line 139 "declarative_debugger.m"
  }
#line 139 "declarative_debugger.m"
}

#line 139 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0(
#line 139 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 139 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 139 "declarative_debugger.m"
{
#line 139 "declarative_debugger.m"
  {
#line 139 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 139 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_11 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 139 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_12 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 139 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_11 == mdb__declarative_debugger__CastY_12);
#line 139 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 139 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 139 "declarative_debugger.m"
    else
#line 139 "declarative_debugger.m"
      {
#line 139 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 139 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 139 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)));
#line 139 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 139 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 139 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));

#line 6933 "mdb.declarative_debugger.c"
        {
#line 6935 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_7_7);
        }
#line 139 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 139 "declarative_debugger.m"
          {
#line 6942 "mdb.declarative_debugger.c"
            {
#line 6944 "mdb.declarative_debugger.c"
              mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_5_5, mdb__declarative_debugger__V_9_9);
            }
#line 139 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 6949 "mdb.declarative_debugger.c"
              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_6_6 == mdb__declarative_debugger__V_10_10);
#line 139 "declarative_debugger.m"
          }
#line 139 "declarative_debugger.m"
      }
#line 139 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 139 "declarative_debugger.m"
  }
#line 139 "declarative_debugger.m"
}

#line 243 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0(
#line 243 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 243 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 243 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 243 "declarative_debugger.m"
{
#line 243 "declarative_debugger.m"
  {
#line 243 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 243 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_4 = mdb__declarative_debugger__HeadVar__2_2;
#line 243 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_5 = mdb__declarative_debugger__HeadVar__3_3;

#line 243 "declarative_debugger.m"
    {
#line 243 "declarative_debugger.m"
      mdb__term_rep____Compare____term_rep_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Cast_HeadVar1_4, mdb__declarative_debugger__Cast_HeadVar2_5);
    }
#line 243 "declarative_debugger.m"
  }
#line 243 "declarative_debugger.m"
}

#line 243 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0(
#line 243 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 243 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 243 "declarative_debugger.m"
{
#line 243 "declarative_debugger.m"
  {
#line 243 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 243 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_3 = mdb__declarative_debugger__HeadVar__1_1;
#line 243 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_4 = mdb__declarative_debugger__HeadVar__2_2;

#line 243 "declarative_debugger.m"
    {
#line 243 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_debugger__Cast_HeadVar1_3, mdb__declarative_debugger__Cast_HeadVar2_4);
    }
#line 243 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 243 "declarative_debugger.m"
  }
#line 243 "declarative_debugger.m"
}

#line 218 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0(
#line 218 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_6,
#line 218 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 218 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 218 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 218 "declarative_debugger.m"
{
#line 218 "declarative_debugger.m"
  {
#line 218 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 218 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_8_8;
#line 218 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_4 = mdb__declarative_debugger__HeadVar__2_2;
#line 218 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_5 = mdb__declarative_debugger__HeadVar__3_3;

#line 7046 "mdb.declarative_debugger.c"
    {
#line 7048 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7050 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_8_8, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 7052 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_8_8, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_T_6));
#line 7054 "mdb.declarative_debugger.c"
    }
#line 218 "declarative_debugger.m"
    {
#line 218 "declarative_debugger.m"
      mercury__list____Compare____list_1_0(mdb__declarative_debugger__TypeInfo_8_8, mdb__declarative_debugger__HeadVar__1_1, (MR_Word) mdb__declarative_debugger__Cast_HeadVar1_4, (MR_Word) mdb__declarative_debugger__Cast_HeadVar2_5);
    }
#line 218 "declarative_debugger.m"
  }
#line 218 "declarative_debugger.m"
}

#line 218 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0(
#line 218 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_5,
#line 218 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 218 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 218 "declarative_debugger.m"
{
#line 218 "declarative_debugger.m"
  {
#line 218 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 218 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_7_7;
#line 218 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_3 = mdb__declarative_debugger__HeadVar__1_1;
#line 218 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_4 = mdb__declarative_debugger__HeadVar__2_2;

#line 7088 "mdb.declarative_debugger.c"
    {
#line 7090 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7092 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_7_7, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 7094 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_7_7, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_T_5));
#line 7096 "mdb.declarative_debugger.c"
    }
#line 218 "declarative_debugger.m"
    {
#line 218 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_debugger__TypeInfo_7_7, (MR_Word) mdb__declarative_debugger__Cast_HeadVar1_3, (MR_Word) mdb__declarative_debugger__Cast_HeadVar2_4);
    }
#line 218 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 218 "declarative_debugger.m"
  }
#line 218 "declarative_debugger.m"
}

#line 107 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0(
#line 107 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 107 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 107 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 107 "declarative_debugger.m"
{
#line 107 "declarative_debugger.m"
  {
#line 107 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 107 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_64 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 107 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_65 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 107 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_64 == mdb__declarative_debugger__CastY_65);
#line 107 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 7134 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 107 "declarative_debugger.m"
    else
#line 107 "declarative_debugger.m"
#line 107 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
#line 107 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 107 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 107 "declarative_debugger.m"
          {
#line 107 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_75_75 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 107 "declarative_debugger.m"
#line 107 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 107 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 107 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 107 "declarative_debugger.m"
                {
#line 107 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 107 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 107 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)));
#line 107 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_12_12;

#line 107 "declarative_debugger.m"
                  {
#line 107 "declarative_debugger.m"
                    mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_12_12, mdb__declarative_debugger__V_78_78, mdb__declarative_debugger__V_8_8);
                  }
#line 7181 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_12_12 == (MR_Integer) 0);
#line 107 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 107 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_12_12;
#line 107 "declarative_debugger.m"
                  else
#line 107 "declarative_debugger.m"
                    {
#line 107 "declarative_debugger.m"
                      MR_Word mdb__declarative_debugger__V_13_13;

#line 107 "declarative_debugger.m"
                      {
#line 107 "declarative_debugger.m"
                        mdb__declarative_debugger____Compare____final_decl_atom_0_0(&mdb__declarative_debugger__V_13_13, mdb__declarative_debugger__V_77_77, mdb__declarative_debugger__V_9_9);
                      }
#line 7201 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_13_13 == (MR_Integer) 0);
#line 107 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 107 "declarative_debugger.m"
                      if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_13_13;
#line 107 "declarative_debugger.m"
                      else
#line 107 "declarative_debugger.m"
                        {
#line 107 "declarative_debugger.m"
                          MR_Word mdb__declarative_debugger__V_14_14;

#line 107 "declarative_debugger.m"
                          {
#line 107 "declarative_debugger.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[3], &mdb__declarative_debugger__V_14_14, ((MR_Box) (mdb__declarative_debugger__V_76_76)), ((MR_Box) (mdb__declarative_debugger__V_10_10)));
                          }
#line 7221 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_14_14 == (MR_Integer) 0);
#line 107 "declarative_debugger.m"
                          mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 107 "declarative_debugger.m"
                          if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                            *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_14_14;
#line 107 "declarative_debugger.m"
                          else
#line 107 "declarative_debugger.m"
                            {
#line 107 "declarative_debugger.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_75_75, mdb__declarative_debugger__V_11_11);
                            }
#line 107 "declarative_debugger.m"
                        }
#line 107 "declarative_debugger.m"
                    }
#line 107 "declarative_debugger.m"
                }
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 7246 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 7252 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
            }
#line 107 "declarative_debugger.m"
          }
#line 107 "declarative_debugger.m"
          break;
#line 107 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 107 "declarative_debugger.m"
          {
#line 107 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 107 "declarative_debugger.m"
#line 107 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 107 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 107 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 7278 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 107 "declarative_debugger.m"
                {
#line 107 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 107 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_38_38;

#line 107 "declarative_debugger.m"
                  {
#line 107 "declarative_debugger.m"
                    mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_38_38, mdb__declarative_debugger__V_80_80, mdb__declarative_debugger__V_36_36);
                  }
#line 7298 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_38_38 == (MR_Integer) 0);
#line 107 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 107 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_38_38;
#line 107 "declarative_debugger.m"
                  else
#line 107 "declarative_debugger.m"
                    {
#line 107 "declarative_debugger.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_79_79, mdb__declarative_debugger__V_37_37);
                    }
#line 107 "declarative_debugger.m"
                }
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 7319 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
            }
#line 107 "declarative_debugger.m"
          }
#line 107 "declarative_debugger.m"
          break;
#line 107 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 107 "declarative_debugger.m"
          {
#line 107 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_81_81 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 107 "declarative_debugger.m"
#line 107 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 107 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 107 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 7347 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 7353 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 107 "declarative_debugger.m"
                {
#line 107 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 107 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 107 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 107 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_62_62;

#line 107 "declarative_debugger.m"
                  {
#line 107 "declarative_debugger.m"
                    mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_62_62, mdb__declarative_debugger__V_83_83, mdb__declarative_debugger__V_59_59);
                  }
#line 7375 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_62_62 == (MR_Integer) 0);
#line 107 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 107 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_62_62;
#line 107 "declarative_debugger.m"
                  else
#line 107 "declarative_debugger.m"
                    {
#line 107 "declarative_debugger.m"
                      MR_Word mdb__declarative_debugger__V_63_63;

#line 107 "declarative_debugger.m"
                      {
#line 107 "declarative_debugger.m"
                        mdb__term_rep____Compare____term_rep_0_0(&mdb__declarative_debugger__V_63_63, mdb__declarative_debugger__V_82_82, mdb__declarative_debugger__V_60_60);
                      }
#line 7395 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_63_63 == (MR_Integer) 0);
#line 107 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 107 "declarative_debugger.m"
                      if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_63_63;
#line 107 "declarative_debugger.m"
                      else
#line 107 "declarative_debugger.m"
                        {
#line 107 "declarative_debugger.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_81_81, mdb__declarative_debugger__V_61_61);
                        }
#line 107 "declarative_debugger.m"
                    }
#line 107 "declarative_debugger.m"
                }
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
            }
#line 107 "declarative_debugger.m"
          }
#line 107 "declarative_debugger.m"
          break;
#line 107 "declarative_debugger.m"
      }
#line 107 "declarative_debugger.m"
  }
#line 107 "declarative_debugger.m"
}

#line 107 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0(
#line 107 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 107 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 107 "declarative_debugger.m"
{
#line 107 "declarative_debugger.m"
  {
#line 107 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 107 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_21 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 107 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_22 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 107 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_21 == mdb__declarative_debugger__CastY_22);
#line 107 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 107 "declarative_debugger.m"
    else
#line 107 "declarative_debugger.m"
#line 107 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 107 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 107 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 107 "declarative_debugger.m"
          {
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__TypeInfo_23_23;
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 107 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_7_7;
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_8_8;
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_9_9;
#line 107 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_10_10;

#line 107 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 107 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
              {
#line 107 "declarative_debugger.m"
                mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "declarative_debugger.m"
                mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "declarative_debugger.m"
                mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 107 "declarative_debugger.m"
                mdb__declarative_debugger__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));
#line 7497 "mdb.declarative_debugger.c"
                {
#line 7499 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_7_7);
                }
#line 107 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                  {
#line 7506 "mdb.declarative_debugger.c"
                    {
#line 7508 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_8_8);
                    }
#line 107 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                      {
#line 7515 "mdb.declarative_debugger.c"
                        mdb__declarative_debugger__TypeInfo_23_23 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[3];
#line 7517 "mdb.declarative_debugger.c"
                        {
#line 7519 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_23_23, ((MR_Box) (mdb__declarative_debugger__V_5_5)), ((MR_Box) (mdb__declarative_debugger__V_9_9)));
                        }
#line 107 "declarative_debugger.m"
                        if (mdb__declarative_debugger__succeeded)
#line 7524 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_6_6 == mdb__declarative_debugger__V_10_10);
#line 107 "declarative_debugger.m"
                      }
#line 107 "declarative_debugger.m"
                  }
#line 107 "declarative_debugger.m"
              }
#line 107 "declarative_debugger.m"
          }
#line 107 "declarative_debugger.m"
          break;
#line 107 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 107 "declarative_debugger.m"
          {
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_13_13;
#line 107 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_14_14;

#line 107 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 107 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
              {
#line 107 "declarative_debugger.m"
                mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "declarative_debugger.m"
                mdb__declarative_debugger__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 7559 "mdb.declarative_debugger.c"
                {
#line 7561 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_11_11, mdb__declarative_debugger__V_13_13);
                }
#line 107 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 7566 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_12_12 == mdb__declarative_debugger__V_14_14);
#line 107 "declarative_debugger.m"
              }
#line 107 "declarative_debugger.m"
          }
#line 107 "declarative_debugger.m"
          break;
#line 107 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 107 "declarative_debugger.m"
          {
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 107 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_18_18;
#line 107 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_19_19;
#line 107 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_20_20;

#line 107 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 107 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
              {
#line 107 "declarative_debugger.m"
                mdb__declarative_debugger__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 107 "declarative_debugger.m"
                mdb__declarative_debugger__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 107 "declarative_debugger.m"
                mdb__declarative_debugger__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 7603 "mdb.declarative_debugger.c"
                {
#line 7605 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_15_15, mdb__declarative_debugger__V_18_18);
                }
#line 107 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                  {
#line 7612 "mdb.declarative_debugger.c"
                    {
#line 7614 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_debugger__V_16_16, mdb__declarative_debugger__V_19_19);
                    }
#line 107 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 7619 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_17_17 == mdb__declarative_debugger__V_20_20);
#line 107 "declarative_debugger.m"
                  }
#line 107 "declarative_debugger.m"
              }
#line 107 "declarative_debugger.m"
          }
#line 107 "declarative_debugger.m"
          break;
#line 107 "declarative_debugger.m"
      }
#line 107 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 107 "declarative_debugger.m"
  }
#line 107 "declarative_debugger.m"
}

#line 154 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0(
#line 154 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 154 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 154 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 154 "declarative_debugger.m"
{
#line 154 "declarative_debugger.m"
  {
#line 154 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 154 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_4 = mdb__declarative_debugger__HeadVar__2_2;
#line 154 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_5 = mdb__declarative_debugger__HeadVar__3_3;

#line 154 "declarative_debugger.m"
    {
#line 154 "declarative_debugger.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[3], mdb__declarative_debugger__HeadVar__1_1, ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar1_4)), ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar2_5)));
    }
#line 154 "declarative_debugger.m"
  }
#line 154 "declarative_debugger.m"
}

#line 154 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0(
#line 154 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 154 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 154 "declarative_debugger.m"
{
#line 154 "declarative_debugger.m"
  {
#line 154 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 154 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_3 = mdb__declarative_debugger__HeadVar__1_1;
#line 154 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_4 = mdb__declarative_debugger__HeadVar__2_2;

#line 154 "declarative_debugger.m"
    {
#line 154 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[3], ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar1_3)), ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar2_4)));
    }
#line 154 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 154 "declarative_debugger.m"
  }
#line 154 "declarative_debugger.m"
}

#line 90 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0(
#line 90 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 90 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 90 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 90 "declarative_debugger.m"
{
#line 90 "declarative_debugger.m"
  {
#line 90 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 90 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 90 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 90 "declarative_debugger.m"
    {
#line 90 "declarative_debugger.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Cast_HeadVar1_4, mdb__declarative_debugger__Cast_HeadVar2_5);
    }
#line 90 "declarative_debugger.m"
  }
#line 90 "declarative_debugger.m"
}

#line 90 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_confirmation_0_0(
#line 90 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_1,
#line 90 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 90 "declarative_debugger.m"
{
#line 7737 "mdb.declarative_debugger.c"
  {
#line 7739 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__HeadVar__2_1 == mdb__declarative_debugger__HeadVar__2_2);

#line 7742 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 7744 "mdb.declarative_debugger.c"
  }
#line 90 "declarative_debugger.m"
}

#line 98 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0(
#line 98 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 98 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 98 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 98 "declarative_debugger.m"
{
#line 98 "declarative_debugger.m"
  {
#line 98 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 98 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_12 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 98 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_13 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 98 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_12 == mdb__declarative_debugger__CastY_13);
#line 98 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 7773 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 98 "declarative_debugger.m"
    else
#line 98 "declarative_debugger.m"
    if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 98 "declarative_debugger.m"
      {
#line 98 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 98 "declarative_debugger.m"
        if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 98 "declarative_debugger.m"
          {
#line 98 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

#line 98 "declarative_debugger.m"
            {
#line 98 "declarative_debugger.m"
              mdb__declarative_debugger____Compare____decl_e_bug_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_16_16, mdb__declarative_debugger__V_5_5);
            }
#line 98 "declarative_debugger.m"
          }
#line 98 "declarative_debugger.m"
        else
#line 7800 "mdb.declarative_debugger.c"
          *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 98 "declarative_debugger.m"
      }
#line 98 "declarative_debugger.m"
    else
#line 98 "declarative_debugger.m"
      {
#line 98 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_17_17 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__2_2), (MR_Integer) 0);

#line 98 "declarative_debugger.m"
        if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 7813 "mdb.declarative_debugger.c"
          *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 98 "declarative_debugger.m"
        else
#line 98 "declarative_debugger.m"
          {
#line 98 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_11_11 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__3_3), (MR_Integer) 0);

#line 98 "declarative_debugger.m"
            {
#line 98 "declarative_debugger.m"
              mdb__declarative_debugger____Compare____decl_i_bug_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_17_17, mdb__declarative_debugger__V_11_11);
            }
#line 98 "declarative_debugger.m"
          }
#line 98 "declarative_debugger.m"
      }
#line 98 "declarative_debugger.m"
  }
#line 98 "declarative_debugger.m"
}

#line 98 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0(
#line 98 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 98 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 98 "declarative_debugger.m"
{
#line 98 "declarative_debugger.m"
  {
#line 98 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 98 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 98 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_8 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 98 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_7 == mdb__declarative_debugger__CastY_8);
#line 98 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 98 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 98 "declarative_debugger.m"
    else
#line 98 "declarative_debugger.m"
    if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 98 "declarative_debugger.m"
      {
#line 98 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 98 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4;

#line 98 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 98 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 98 "declarative_debugger.m"
          {
#line 98 "declarative_debugger.m"
            mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 7879 "mdb.declarative_debugger.c"
            {
#line 7881 "mdb.declarative_debugger.c"
              mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_e_bug_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_4_4);
            }
#line 98 "declarative_debugger.m"
          }
#line 98 "declarative_debugger.m"
      }
#line 98 "declarative_debugger.m"
    else
#line 98 "declarative_debugger.m"
      {
#line 98 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__1_1), (MR_Integer) 0);
#line 98 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6;

#line 98 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 98 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 98 "declarative_debugger.m"
          {
#line 98 "declarative_debugger.m"
            mdb__declarative_debugger__V_6_6 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__2_2), (MR_Integer) 0);
#line 7905 "mdb.declarative_debugger.c"
            {
#line 7907 "mdb.declarative_debugger.c"
              mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_i_bug_0_0(mdb__declarative_debugger__V_5_5, mdb__declarative_debugger__V_6_6);
            }
#line 98 "declarative_debugger.m"
          }
#line 98 "declarative_debugger.m"
      }
#line 98 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 98 "declarative_debugger.m"
  }
#line 98 "declarative_debugger.m"
}

#line 188 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0(
#line 188 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_83,
#line 188 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 188 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 188 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 188 "declarative_debugger.m"
{
#line 188 "declarative_debugger.m"
  {
#line 188 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 188 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_81 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 188 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_82 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 188 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_81 == mdb__declarative_debugger__CastY_82);
#line 188 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 7947 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 188 "declarative_debugger.m"
    else
#line 188 "declarative_debugger.m"
#line 188 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
#line 188 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 188 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 188 "declarative_debugger.m"
          {
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_97_97 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 188 "declarative_debugger.m"
#line 188 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 188 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 188 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 188 "declarative_debugger.m"
                {
#line 188 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_6_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
#line 188 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 188 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_8_8;

#line 188 "declarative_debugger.m"
                  {
#line 188 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, &mdb__declarative_debugger__V_8_8, mdb__declarative_debugger__V_97_97, mdb__declarative_debugger__V_6_6);
                  }
#line 7986 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_8_8 == (MR_Integer) 0);
#line 188 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 188 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_8_8;
#line 188 "declarative_debugger.m"
                  else
#line 188 "declarative_debugger.m"
                    {
#line 188 "declarative_debugger.m"
                      MR_Integer mdb__declarative_debugger__V_102_102 = (MR_Integer) mdb__declarative_debugger__V_96_96;
#line 188 "declarative_debugger.m"
                      MR_Integer mdb__declarative_debugger__V_103_103 = (MR_Integer) mdb__declarative_debugger__V_7_7;

#line 188 "declarative_debugger.m"
                      {
#line 188 "declarative_debugger.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_102_102, mdb__declarative_debugger__V_103_103);
                      }
#line 188 "declarative_debugger.m"
                    }
#line 188 "declarative_debugger.m"
                }
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 8016 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 8022 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 8028 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
            }
#line 188 "declarative_debugger.m"
          }
#line 188 "declarative_debugger.m"
          break;
#line 188 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 188 "declarative_debugger.m"
          {
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_92_92 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_95_95 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 188 "declarative_debugger.m"
#line 188 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 188 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 188 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 8060 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 188 "declarative_debugger.m"
                {
#line 188 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_34_34 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
#line 188 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 188 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 188 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 188 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 188 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_39_39;

#line 188 "declarative_debugger.m"
                  {
#line 188 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, &mdb__declarative_debugger__V_39_39, mdb__declarative_debugger__V_95_95, mdb__declarative_debugger__V_34_34);
                  }
#line 8086 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_39_39 == (MR_Integer) 0);
#line 188 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 188 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_39_39;
#line 188 "declarative_debugger.m"
                  else
#line 188 "declarative_debugger.m"
                    {
#line 188 "declarative_debugger.m"
                      MR_Word mdb__declarative_debugger__V_40_40;

#line 188 "declarative_debugger.m"
                      {
#line 188 "declarative_debugger.m"
                        mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_debugger__V_40_40, mdb__declarative_debugger__V_94_94, mdb__declarative_debugger__V_35_35);
                      }
#line 8106 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_40_40 == (MR_Integer) 0);
#line 188 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 188 "declarative_debugger.m"
                      if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_40_40;
#line 188 "declarative_debugger.m"
                      else
#line 188 "declarative_debugger.m"
                        {
#line 188 "declarative_debugger.m"
                          MR_Word mdb__declarative_debugger__V_41_41;

#line 188 "declarative_debugger.m"
                          {
#line 188 "declarative_debugger.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[2], &mdb__declarative_debugger__V_41_41, ((MR_Box) (mdb__declarative_debugger__V_93_93)), ((MR_Box) (mdb__declarative_debugger__V_36_36)));
                          }
#line 8126 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_41_41 == (MR_Integer) 0);
#line 188 "declarative_debugger.m"
                          mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 188 "declarative_debugger.m"
                          if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
                            *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_41_41;
#line 188 "declarative_debugger.m"
                          else
#line 188 "declarative_debugger.m"
                            {
#line 188 "declarative_debugger.m"
                              MR_Word mdb__declarative_debugger__V_42_42;
#line 188 "declarative_debugger.m"
                              MR_Integer mdb__declarative_debugger__V_98_98 = (MR_Integer) mdb__declarative_debugger__V_92_92;
#line 188 "declarative_debugger.m"
                              MR_Integer mdb__declarative_debugger__V_99_99 = (MR_Integer) mdb__declarative_debugger__V_37_37;

#line 188 "declarative_debugger.m"
                              {
#line 188 "declarative_debugger.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__V_42_42, mdb__declarative_debugger__V_98_98, mdb__declarative_debugger__V_99_99);
                              }
#line 8150 "mdb.declarative_debugger.c"
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_42_42 == (MR_Integer) 0);
#line 188 "declarative_debugger.m"
                              mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 188 "declarative_debugger.m"
                              if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
                                *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_42_42;
#line 188 "declarative_debugger.m"
                              else
#line 188 "declarative_debugger.m"
                                {
#line 188 "declarative_debugger.m"
                                  MR_Integer mdb__declarative_debugger__V_100_100 = (MR_Integer) mdb__declarative_debugger__V_91_91;
#line 188 "declarative_debugger.m"
                                  MR_Integer mdb__declarative_debugger__V_101_101 = (MR_Integer) mdb__declarative_debugger__V_38_38;

#line 188 "declarative_debugger.m"
                                  {
#line 188 "declarative_debugger.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_100_100, mdb__declarative_debugger__V_101_101);
                                  }
#line 188 "declarative_debugger.m"
                                }
#line 188 "declarative_debugger.m"
                            }
#line 188 "declarative_debugger.m"
                        }
#line 188 "declarative_debugger.m"
                    }
#line 188 "declarative_debugger.m"
                }
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 8186 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 8192 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
            }
#line 188 "declarative_debugger.m"
          }
#line 188 "declarative_debugger.m"
          break;
#line 188 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 188 "declarative_debugger.m"
          {
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_89_89 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 188 "declarative_debugger.m"
#line 188 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 188 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 188 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 8216 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 8222 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 188 "declarative_debugger.m"
                {
#line 188 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_65_65 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));

#line 188 "declarative_debugger.m"
                  {
#line 188 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_89_89, mdb__declarative_debugger__V_65_65);
                  }
#line 188 "declarative_debugger.m"
                }
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 8244 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
            }
#line 188 "declarative_debugger.m"
          }
#line 188 "declarative_debugger.m"
          break;
#line 188 "declarative_debugger.m"
        case (MR_Integer) 3:
#line 188 "declarative_debugger.m"
          {
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_90_90 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 188 "declarative_debugger.m"
#line 188 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 188 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 188 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 8268 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 8274 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 8280 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 188 "declarative_debugger.m"
                {
#line 188 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_80_80 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));

#line 188 "declarative_debugger.m"
                  {
#line 188 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_90_90, mdb__declarative_debugger__V_80_80);
                  }
#line 188 "declarative_debugger.m"
                }
#line 188 "declarative_debugger.m"
                break;
#line 188 "declarative_debugger.m"
            }
#line 188 "declarative_debugger.m"
          }
#line 188 "declarative_debugger.m"
          break;
#line 188 "declarative_debugger.m"
      }
#line 188 "declarative_debugger.m"
  }
#line 188 "declarative_debugger.m"
}

#line 188 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_answer_1_0(
#line 188 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_23,
#line 188 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 188 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 188 "declarative_debugger.m"
{
#line 188 "declarative_debugger.m"
  {
#line 188 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 188 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_21 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 188 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_22 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 188 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_21 == mdb__declarative_debugger__CastY_22);
#line 188 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 188 "declarative_debugger.m"
    else
#line 188 "declarative_debugger.m"
#line 188 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 188 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 188 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 188 "declarative_debugger.m"
          {
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_5_5;
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_6_6;

#line 188 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 188 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
              {
#line 188 "declarative_debugger.m"
                mdb__declarative_debugger__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 188 "declarative_debugger.m"
                mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 8369 "mdb.declarative_debugger.c"
                {
#line 8371 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_5_5);
                }
#line 188 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 8376 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_4_4 == mdb__declarative_debugger__V_6_6);
#line 188 "declarative_debugger.m"
              }
#line 188 "declarative_debugger.m"
          }
#line 188 "declarative_debugger.m"
          break;
#line 188 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 188 "declarative_debugger.m"
          {
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__TypeInfo_25_25;
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_12_12;
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_13_13;
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_14_14;
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_15_15;
#line 188 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_16_16;

#line 188 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 188 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
              {
#line 188 "declarative_debugger.m"
                mdb__declarative_debugger__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 188 "declarative_debugger.m"
                mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 188 "declarative_debugger.m"
                mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 188 "declarative_debugger.m"
                mdb__declarative_debugger__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 188 "declarative_debugger.m"
                mdb__declarative_debugger__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 8427 "mdb.declarative_debugger.c"
                {
#line 8429 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_7_7, mdb__declarative_debugger__V_12_12);
                }
#line 188 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
                  {
#line 8436 "mdb.declarative_debugger.c"
                    {
#line 8438 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_debugger__V_8_8, mdb__declarative_debugger__V_13_13);
                    }
#line 188 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
                      {
#line 8445 "mdb.declarative_debugger.c"
                        mdb__declarative_debugger__TypeInfo_25_25 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[2];
#line 8447 "mdb.declarative_debugger.c"
                        {
#line 8449 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_25_25, ((MR_Box) (mdb__declarative_debugger__V_9_9)), ((MR_Box) (mdb__declarative_debugger__V_14_14)));
                        }
#line 188 "declarative_debugger.m"
                        if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
                          {
#line 8456 "mdb.declarative_debugger.c"
                            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_10_10 == mdb__declarative_debugger__V_15_15);
#line 188 "declarative_debugger.m"
                            if (mdb__declarative_debugger__succeeded)
#line 8460 "mdb.declarative_debugger.c"
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_11_11 == mdb__declarative_debugger__V_16_16);
#line 188 "declarative_debugger.m"
                          }
#line 188 "declarative_debugger.m"
                      }
#line 188 "declarative_debugger.m"
                  }
#line 188 "declarative_debugger.m"
              }
#line 188 "declarative_debugger.m"
          }
#line 188 "declarative_debugger.m"
          break;
#line 188 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 188 "declarative_debugger.m"
          {
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_17_17 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_18_18;

#line 188 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 188 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
              {
#line 188 "declarative_debugger.m"
                mdb__declarative_debugger__V_18_18 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 8491 "mdb.declarative_debugger.c"
                {
#line 8493 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_17_17, mdb__declarative_debugger__V_18_18);
                }
#line 188 "declarative_debugger.m"
              }
#line 188 "declarative_debugger.m"
          }
#line 188 "declarative_debugger.m"
          break;
#line 188 "declarative_debugger.m"
        case (MR_Integer) 3:
#line 188 "declarative_debugger.m"
          {
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 188 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_20_20;

#line 188 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 188 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 188 "declarative_debugger.m"
              {
#line 188 "declarative_debugger.m"
                mdb__declarative_debugger__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 8519 "mdb.declarative_debugger.c"
                {
#line 8521 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_19_19, mdb__declarative_debugger__V_20_20);
                }
#line 188 "declarative_debugger.m"
              }
#line 188 "declarative_debugger.m"
          }
#line 188 "declarative_debugger.m"
          break;
#line 188 "declarative_debugger.m"
      }
#line 188 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 188 "declarative_debugger.m"
  }
#line 188 "declarative_debugger.m"
}

#line 994 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__debug_origin_3_p_0(
#line 994 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Flag_1)
#line 994 "declarative_debugger.m"
{
#line 996 "declarative_debugger.m"
  {
#line 996 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 999 "declarative_debugger.m"
{
#define MR_PROC_LABEL mdb__declarative_debugger__debug_origin_3_p_0

	MR_Integer Flag;

		{
#line 999 "declarative_debugger.m"

    Flag = MR_DD_debug_origin;

#line 8562 "mdb.declarative_debugger.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_debugger__Flag_1  = Flag;
#line 999 "declarative_debugger.m"
}
#line 996 "declarative_debugger.m"
  }
#line 994 "declarative_debugger.m"
}

#line 957 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__write_origin_4_p_0(
#line 957 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38,
#line 957 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 957 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Origin_6)
#line 957 "declarative_debugger.m"
{
#line 960 "declarative_debugger.m"
  {
#line 960 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__Origin_6)) == (MR_mktag((MR_Integer) 1)));
#line 960 "declarative_debugger.m"
    MR_Box mdb__declarative_debugger__Store_5 = ((MR_Box) (mdb__declarative_debugger__HeadVar__1_1));
#line 961 "declarative_debugger.m"
    MR_Box mdb__declarative_debugger__NodeId_8;
#line 961 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__ArgPos_9;
#line 961 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TermPath_10;
#line 961 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_17_17;

#line 961 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 961 "declarative_debugger.m"
      {
#line 961 "declarative_debugger.m"
        mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Origin_6, (MR_Integer) 0)));
#line 961 "declarative_debugger.m"
        mdb__declarative_debugger__ArgPos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Origin_6, (MR_Integer) 1)));
#line 961 "declarative_debugger.m"
        mdb__declarative_debugger__TermPath_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Origin_6, (MR_Integer) 2)));
#line 961 "declarative_debugger.m"
        mdb__declarative_debugger__NodeId_8 = ((MR_Box) (mdb__declarative_debugger__V_17_17));
#line 961 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = MR_TRUE;
#line 961 "declarative_debugger.m"
      }
#line 961 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 962 "declarative_debugger.m"
      {
#line 962 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__ExitNode_11;
#line 962 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__ProcLayout_12;
#line 962 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__ProcLabel_13;
#line 962 "declarative_debugger.m"
        MR_String mdb__declarative_debugger__ProcName_14;
#line 962 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__V_18_18;
#line 963 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__V_31_31;
#line 963 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__V_32_32;
#line 963 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__V_33_33;
#line 963 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_34_34;
#line 963 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_35_35;
#line 963 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_36_36;
#line 963 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_37_37;

#line 962 "declarative_debugger.m"
        {
#line 962 "declarative_debugger.m"
          mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38, mdb__declarative_debugger__Store_5, mdb__declarative_debugger__NodeId_8, &mdb__declarative_debugger__ExitNode_11);
        }
#line 963 "declarative_debugger.m"
        mdb__declarative_debugger__V_31_31 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 0));
#line 963 "declarative_debugger.m"
        mdb__declarative_debugger__V_32_32 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 1));
#line 963 "declarative_debugger.m"
        mdb__declarative_debugger__V_33_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 2));
#line 963 "declarative_debugger.m"
        mdb__declarative_debugger__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 3)));
#line 963 "declarative_debugger.m"
        mdb__declarative_debugger__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 4)));
#line 963 "declarative_debugger.m"
        mdb__declarative_debugger__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 5)));
#line 963 "declarative_debugger.m"
        mdb__declarative_debugger__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 6)));
#line 963 "declarative_debugger.m"
        mdb__declarative_debugger__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 7)));
#line 963 "declarative_debugger.m"
        {
#line 963 "declarative_debugger.m"
          mdb__declarative_debugger__ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_debugger__V_18_18);
        }
#line 964 "declarative_debugger.m"
        {
#line 964 "declarative_debugger.m"
          mdb__declarative_debugger__ProcLabel_13 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_debugger__ProcLayout_12);
        }
#line 965 "declarative_debugger.m"
        {
#line 965 "declarative_debugger.m"
          mdb__declarative_debugger__ProcName_14 = mdbcomp__rtti_access__get_proc_name_1_f_0(mdb__declarative_debugger__ProcLabel_13);
        }
#line 966 "declarative_debugger.m"
        {
#line 966 "declarative_debugger.m"
          mercury__io__write_string_3_p_0((MR_String) "output(");
        }
#line 967 "declarative_debugger.m"
        {
#line 967 "declarative_debugger.m"
          mercury__io__write_string_3_p_0(mdb__declarative_debugger__ProcName_14);
        }
#line 968 "declarative_debugger.m"
        {
#line 968 "declarative_debugger.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 969 "declarative_debugger.m"
        {
#line 969 "declarative_debugger.m"
          mercury__io__write_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0, ((MR_Box) (mdb__declarative_debugger__ArgPos_9)));
        }
#line 970 "declarative_debugger.m"
        {
#line 970 "declarative_debugger.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 971 "declarative_debugger.m"
        {
#line 971 "declarative_debugger.m"
          mercury__io__write_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[2], ((MR_Box) (mdb__declarative_debugger__TermPath_10)));
        }
#line 972 "declarative_debugger.m"
        {
#line 972 "declarative_debugger.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
        }
#line 962 "declarative_debugger.m"
      }
#line 961 "declarative_debugger.m"
    else
#line 974 "declarative_debugger.m"
      {
#line 974 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_42_42;
#line 974 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_44_44;
#line 974 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_46_46;

#line 974 "declarative_debugger.m"
        {
#line 974 "declarative_debugger.m"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_42_42);
        }
#line 8734 "mdb.declarative_debugger.c"
        {
#line 8736 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8738 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_44_44, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 8740 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_44_44, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_42_42));
#line 8742 "mdb.declarative_debugger.c"
        }
#line 8744 "mdb.declarative_debugger.c"
        {
#line 8746 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8748 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_46_46, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1));
#line 8750 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_46_46, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_44_44));
#line 8752 "mdb.declarative_debugger.c"
        }
#line 974 "declarative_debugger.m"
        {
#line 974 "declarative_debugger.m"
          mercury__io__write_3_p_0(mdb__declarative_debugger__TypeInfo_46_46, ((MR_Box) (mdb__declarative_debugger__Origin_6)));
        }
#line 974 "declarative_debugger.m"
      }
#line 960 "declarative_debugger.m"
  }
#line 957 "declarative_debugger.m"
}

#line 901 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(
#line 901 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_108,
#line 901 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 901 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_2,
#line 901 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3,
#line 901 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4)
#line 901 "declarative_debugger.m"
{
#line 906 "declarative_debugger.m"
  {
#line 906 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 906 "declarative_debugger.m"
#line 906 "declarative_debugger.m"
    switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 906 "declarative_debugger.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 906 "declarative_debugger.m"
      case (MR_Integer) 0:
#line 906 "declarative_debugger.m"
        {
#line 906 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_110_110;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__Loc_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__Msg_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 906 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__StdErr_12;
#line 906 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser_13;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_19_19;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_22_22;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_24_24;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_26_26;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_27_27;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_29_29;
#line 906 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_37_37;
#line 915 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_87_87;
#line 915 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_88_88;
#line 915 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_89_89;
#line 915 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv0_Analyser_13;
#line 916 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_91_91;
#line 916 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_92_92;
#line 916 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_93_93;
#line 916 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_90_90;

#line 907 "declarative_debugger.m"
          {
#line 907 "declarative_debugger.m"
            mercury__io__stderr_stream_3_p_0(&mdb__declarative_debugger__StdErr_12);
          }
#line 910 "declarative_debugger.m"
          {
#line 910 "declarative_debugger.m"
            mdb__declarative_debugger__V_29_29 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Msg_8, (MR_String) "\nPlease report bugs via the Mercury bug tracking system at\n<https://www.mercurylang.org/bugs> or via e-mail tobugs\100mercurylang.org.\n");
          }
#line 910 "declarative_debugger.m"
          {
#line 910 "declarative_debugger.m"
            mdb__declarative_debugger__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdb__declarative_debugger__V_29_29);
          }
#line 910 "declarative_debugger.m"
          {
#line 910 "declarative_debugger.m"
            mdb__declarative_debugger__V_26_26 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Loc_7, mdb__declarative_debugger__V_27_27);
          }
#line 910 "declarative_debugger.m"
          {
#line 910 "declarative_debugger.m"
            mdb__declarative_debugger__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "message follows:\n", mdb__declarative_debugger__V_26_26);
          }
#line 909 "declarative_debugger.m"
          {
#line 909 "declarative_debugger.m"
            mdb__declarative_debugger__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "diagnosis will be aborted. Debugging\n", mdb__declarative_debugger__V_24_24);
          }
#line 908 "declarative_debugger.m"
          {
#line 908 "declarative_debugger.m"
            mdb__declarative_debugger__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "An internal error has occurred; ", mdb__declarative_debugger__V_22_22);
          }
#line 908 "declarative_debugger.m"
          {
#line 908 "declarative_debugger.m"
            mercury__io__write_string_4_p_0(mdb__declarative_debugger__StdErr_12, mdb__declarative_debugger__V_19_19);
          }
#line 915 "declarative_debugger.m"
          mdb__declarative_debugger__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 915 "declarative_debugger.m"
          mdb__declarative_debugger__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 915 "declarative_debugger.m"
          mdb__declarative_debugger__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 915 "declarative_debugger.m"
          mdb__declarative_debugger__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 8884 "mdb.declarative_debugger.c"
          {
#line 8886 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8888 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_110_110, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 8890 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_110_110, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_108));
#line 8892 "mdb.declarative_debugger.c"
          }
#line 915 "declarative_debugger.m"
          {
#line 915 "declarative_debugger.m"
            mdb__declarative_analyser__reset_analyser_2_p_0(mdb__declarative_debugger__TypeInfo_110_110, (MR_Word) mdb__declarative_debugger__V_37_37, &mdb__declarative_debugger__conv0_Analyser_13);
          }
#line 915 "declarative_debugger.m"
          mdb__declarative_debugger__Analyser_13 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_13;
#line 916 "declarative_debugger.m"
          mdb__declarative_debugger__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 916 "declarative_debugger.m"
          mdb__declarative_debugger__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 916 "declarative_debugger.m"
          mdb__declarative_debugger__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 916 "declarative_debugger.m"
          mdb__declarative_debugger__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 916 "declarative_debugger.m"
          {
#line 916 "declarative_debugger.m"
            MR_Word base;
#line 916 "declarative_debugger.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 916 "declarative_debugger.m"
            *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4 = base;
#line 916 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_13));
#line 916 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_91_91));
#line 916 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_92_92));
#line 916 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_93_93));
#line 916 "declarative_debugger.m"
          }
#line 917 "declarative_debugger.m"
          *mdb__declarative_debugger__Response_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 906 "declarative_debugger.m"
        }
#line 906 "declarative_debugger.m"
        break;
#line 906 "declarative_debugger.m"
      case (MR_Integer) 1:
#line 919 "declarative_debugger.m"
        {
#line 919 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_112_112;
#line 919 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__Loc_39 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 919 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__Msg_40 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 919 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__StdErr_44;
#line 919 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser_45;
#line 919 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_51_51;
#line 919 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_54_54;
#line 919 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_55_55;
#line 919 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_57_57;
#line 919 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_61_61;
#line 924 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_94_94;
#line 924 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_95_95;
#line 924 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_96_96;
#line 924 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv1_Analyser_45;
#line 925 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_98_98;
#line 925 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_99_99;
#line 925 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_100_100;
#line 925 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_97_97;

#line 920 "declarative_debugger.m"
          {
#line 920 "declarative_debugger.m"
            mercury__io__stderr_stream_3_p_0(&mdb__declarative_debugger__StdErr_44);
          }
#line 921 "declarative_debugger.m"
          {
#line 921 "declarative_debugger.m"
            mdb__declarative_debugger__V_57_57 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Msg_40, (MR_String) ".\nDiagnosis will be aborted.\n");
          }
#line 921 "declarative_debugger.m"
          {
#line 921 "declarative_debugger.m"
            mdb__declarative_debugger__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdb__declarative_debugger__V_57_57);
          }
#line 921 "declarative_debugger.m"
          {
#line 921 "declarative_debugger.m"
            mdb__declarative_debugger__V_54_54 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Loc_39, mdb__declarative_debugger__V_55_55);
          }
#line 921 "declarative_debugger.m"
          {
#line 921 "declarative_debugger.m"
            mdb__declarative_debugger__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", mdb__declarative_debugger__V_54_54);
          }
#line 921 "declarative_debugger.m"
          {
#line 921 "declarative_debugger.m"
            mercury__io__write_string_4_p_0(mdb__declarative_debugger__StdErr_44, mdb__declarative_debugger__V_51_51);
          }
#line 924 "declarative_debugger.m"
          mdb__declarative_debugger__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 924 "declarative_debugger.m"
          mdb__declarative_debugger__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 924 "declarative_debugger.m"
          mdb__declarative_debugger__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 924 "declarative_debugger.m"
          mdb__declarative_debugger__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 9012 "mdb.declarative_debugger.c"
          {
#line 9014 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9016 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 9018 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_108));
#line 9020 "mdb.declarative_debugger.c"
          }
#line 924 "declarative_debugger.m"
          {
#line 924 "declarative_debugger.m"
            mdb__declarative_analyser__reset_analyser_2_p_0(mdb__declarative_debugger__TypeInfo_112_112, (MR_Word) mdb__declarative_debugger__V_61_61, &mdb__declarative_debugger__conv1_Analyser_45);
          }
#line 924 "declarative_debugger.m"
          mdb__declarative_debugger__Analyser_45 = (MR_Word) mdb__declarative_debugger__conv1_Analyser_45;
#line 925 "declarative_debugger.m"
          mdb__declarative_debugger__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 925 "declarative_debugger.m"
          mdb__declarative_debugger__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 925 "declarative_debugger.m"
          mdb__declarative_debugger__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 925 "declarative_debugger.m"
          mdb__declarative_debugger__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 925 "declarative_debugger.m"
          {
#line 925 "declarative_debugger.m"
            MR_Word base;
#line 925 "declarative_debugger.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 925 "declarative_debugger.m"
            *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4 = base;
#line 925 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_45));
#line 925 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_98_98));
#line 925 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_99_99));
#line 925 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_100_100));
#line 925 "declarative_debugger.m"
          }
#line 926 "declarative_debugger.m"
          *mdb__declarative_debugger__Response_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 919 "declarative_debugger.m"
        }
#line 906 "declarative_debugger.m"
        break;
#line 906 "declarative_debugger.m"
      case (MR_Integer) 2:
#line 929 "declarative_debugger.m"
        {
#line 929 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_114_114;
#line 929 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__Feature_63 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 929 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser_67;
#line 929 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_72_72;
#line 929 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_75_75;
#line 929 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_77_77;
#line 929 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_79_79;
#line 929 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_85_85;
#line 936 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_101_101;
#line 936 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_102_102;
#line 936 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_103_103;
#line 936 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv2_Analyser_67;
#line 937 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_105_105;
#line 937 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_106_106;
#line 937 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_107_107;
#line 937 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_104_104;

#line 932 "declarative_debugger.m"
          {
#line 932 "declarative_debugger.m"
            mdb__declarative_debugger__V_79_79 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Feature_63, (MR_String) ".\nThe debugger is a work in progress, and this is not supported in the\ncurrent version.\n");
          }
#line 932 "declarative_debugger.m"
          {
#line 932 "declarative_debugger.m"
            mdb__declarative_debugger__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) "the following: ", mdb__declarative_debugger__V_79_79);
          }
#line 931 "declarative_debugger.m"
          {
#line 931 "declarative_debugger.m"
            mdb__declarative_debugger__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "it requires support for\n", mdb__declarative_debugger__V_77_77);
          }
#line 930 "declarative_debugger.m"
          {
#line 930 "declarative_debugger.m"
            mdb__declarative_debugger__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) "Sorry, the diagnosis cannot continue because ", mdb__declarative_debugger__V_75_75);
          }
#line 930 "declarative_debugger.m"
          {
#line 930 "declarative_debugger.m"
            mercury__io__write_string_3_p_0(mdb__declarative_debugger__V_72_72);
          }
#line 936 "declarative_debugger.m"
          mdb__declarative_debugger__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 936 "declarative_debugger.m"
          mdb__declarative_debugger__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 936 "declarative_debugger.m"
          mdb__declarative_debugger__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 936 "declarative_debugger.m"
          mdb__declarative_debugger__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 9131 "mdb.declarative_debugger.c"
          {
#line 9133 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9135 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_114_114, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 9137 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_114_114, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_108));
#line 9139 "mdb.declarative_debugger.c"
          }
#line 936 "declarative_debugger.m"
          {
#line 936 "declarative_debugger.m"
            mdb__declarative_analyser__reset_analyser_2_p_0(mdb__declarative_debugger__TypeInfo_114_114, (MR_Word) mdb__declarative_debugger__V_85_85, &mdb__declarative_debugger__conv2_Analyser_67);
          }
#line 936 "declarative_debugger.m"
          mdb__declarative_debugger__Analyser_67 = (MR_Word) mdb__declarative_debugger__conv2_Analyser_67;
#line 937 "declarative_debugger.m"
          mdb__declarative_debugger__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 937 "declarative_debugger.m"
          mdb__declarative_debugger__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 937 "declarative_debugger.m"
          mdb__declarative_debugger__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 937 "declarative_debugger.m"
          mdb__declarative_debugger__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 937 "declarative_debugger.m"
          {
#line 937 "declarative_debugger.m"
            MR_Word base;
#line 937 "declarative_debugger.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 937 "declarative_debugger.m"
            *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4 = base;
#line 937 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_67));
#line 937 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_105_105));
#line 937 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_106_106));
#line 937 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_107_107));
#line 937 "declarative_debugger.m"
          }
#line 938 "declarative_debugger.m"
          *mdb__declarative_debugger__Response_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 929 "declarative_debugger.m"
        }
#line 906 "declarative_debugger.m"
        break;
#line 906 "declarative_debugger.m"
    }
#line 906 "declarative_debugger.m"
  }
#line 901 "declarative_debugger.m"
}

#line 889 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__get_trusted_list_3_p_0(
#line 889 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser_4,
#line 889 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__MDBCommandFormat_5,
#line 889 "declarative_debugger.m"
  MR_String * mdb__declarative_debugger__List_6)
#line 889 "declarative_debugger.m"
{
#line 896 "declarative_debugger.m"
  {
#line 896 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 896 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 1)));
#line 897 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 0)));
#line 897 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 2)));
#line 897 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 3)));

#line 897 "declarative_debugger.m"
    {
#line 897 "declarative_debugger.m"
      mdb__declarative_oracle__get_trusted_list_3_p_0(mdb__declarative_debugger__V_7_7, mdb__declarative_debugger__MDBCommandFormat_5, mdb__declarative_debugger__List_6);
    }
#line 896 "declarative_debugger.m"
  }
#line 889 "declarative_debugger.m"
}

#line 872 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__remove_trusted_3_p_0(
#line 872 "declarative_debugger.m"
  MR_Integer mdb__declarative_debugger__N_4,
#line 872 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 872 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 872 "declarative_debugger.m"
{
#line 879 "declarative_debugger.m"
  {
#line 879 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 879 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_6;
#line 879 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
#line 880 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
#line 880 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
#line 880 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
#line 881 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14;
#line 881 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_16_16;
#line 881 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_17_17;
#line 881 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15;

#line 880 "declarative_debugger.m"
    {
#line 880 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = mdb__declarative_oracle__remove_trusted_3_p_0(mdb__declarative_debugger__N_4, mdb__declarative_debugger__V_9_9, &mdb__declarative_debugger__Oracle_6);
    }
#line 879 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 879 "declarative_debugger.m"
      {
#line 881 "declarative_debugger.m"
        mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
#line 881 "declarative_debugger.m"
        mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
#line 881 "declarative_debugger.m"
        mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
#line 881 "declarative_debugger.m"
        mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
#line 881 "declarative_debugger.m"
        {
#line 881 "declarative_debugger.m"
          MR_Word base;
#line 881 "declarative_debugger.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 881 "declarative_debugger.m"
          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8 = base;
#line 881 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_14_14));
#line 881 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_6));
#line 881 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_16_16));
#line 881 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_17_17));
#line 881 "declarative_debugger.m"
        }
#line 881 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = MR_TRUE;
#line 879 "declarative_debugger.m"
      }
#line 879 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 879 "declarative_debugger.m"
  }
#line 872 "declarative_debugger.m"
}

#line 860 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__trust_standard_library_2_p_0(
#line 860 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5,
#line 860 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6)
#line 860 "declarative_debugger.m"
{
#line 867 "declarative_debugger.m"
  {
#line 867 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 867 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_4;
#line 867 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 1)));
#line 868 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 0)));
#line 868 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 2)));
#line 868 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 3)));
#line 870 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12;
#line 870 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14;
#line 870 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15;
#line 870 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13;

#line 868 "declarative_debugger.m"
    {
#line 868 "declarative_debugger.m"
      mdb__declarative_oracle__trust_standard_library_2_p_0(mdb__declarative_debugger__V_7_7, &mdb__declarative_debugger__Oracle_4);
    }
#line 870 "declarative_debugger.m"
    mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 0)));
#line 870 "declarative_debugger.m"
    mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 1)));
#line 870 "declarative_debugger.m"
    mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 2)));
#line 870 "declarative_debugger.m"
    mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 3)));
#line 870 "declarative_debugger.m"
    {
#line 870 "declarative_debugger.m"
      MR_Word base;
#line 870 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 870 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6 = base;
#line 870 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_12_12));
#line 870 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_4));
#line 870 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_14_14));
#line 870 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_15_15));
#line 870 "declarative_debugger.m"
    }
#line 867 "declarative_debugger.m"
  }
#line 860 "declarative_debugger.m"
}

#line 848 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(
#line 848 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__ProcLayout_4,
#line 848 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 848 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 848 "declarative_debugger.m"
{
#line 856 "declarative_debugger.m"
  {
#line 856 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 856 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_6;
#line 856 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
#line 857 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
#line 857 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
#line 857 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
#line 858 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14;
#line 858 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_16_16;
#line 858 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_17_17;
#line 858 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15;

#line 857 "declarative_debugger.m"
    {
#line 857 "declarative_debugger.m"
      mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(mdb__declarative_debugger__ProcLayout_4, mdb__declarative_debugger__V_9_9, &mdb__declarative_debugger__Oracle_6);
    }
#line 858 "declarative_debugger.m"
    mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
#line 858 "declarative_debugger.m"
    mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
#line 858 "declarative_debugger.m"
    mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
#line 858 "declarative_debugger.m"
    mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
#line 858 "declarative_debugger.m"
    {
#line 858 "declarative_debugger.m"
      MR_Word base;
#line 858 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 858 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8 = base;
#line 858 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_14_14));
#line 858 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_6));
#line 858 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_16_16));
#line 858 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_17_17));
#line 858 "declarative_debugger.m"
    }
#line 856 "declarative_debugger.m"
  }
#line 848 "declarative_debugger.m"
}

#line 834 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__add_trusted_module_3_p_0(
#line 834 "declarative_debugger.m"
  MR_String mdb__declarative_debugger__ModuleName_4,
#line 834 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_5,
#line 834 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_6)
#line 834 "declarative_debugger.m"
{
#line 841 "declarative_debugger.m"
  {
#line 841 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 841 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__SymModuleName_7;
#line 841 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_8;
#line 841 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9;
#line 843 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10;
#line 843 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11;
#line 843 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12;
#line 844 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13;
#line 844 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15;
#line 844 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_16_16;
#line 844 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14;

#line 842 "declarative_debugger.m"
    {
#line 842 "declarative_debugger.m"
      mdb__declarative_debugger__SymModuleName_7 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdb__declarative_debugger__ModuleName_4);
    }
#line 843 "declarative_debugger.m"
    mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 0)));
#line 843 "declarative_debugger.m"
    mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 1)));
#line 843 "declarative_debugger.m"
    mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 2)));
#line 843 "declarative_debugger.m"
    mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 3)));
#line 843 "declarative_debugger.m"
    {
#line 843 "declarative_debugger.m"
      mdb__declarative_oracle__add_trusted_module_3_p_0(mdb__declarative_debugger__SymModuleName_7, mdb__declarative_debugger__V_9_9, &mdb__declarative_debugger__Oracle_8);
    }
#line 844 "declarative_debugger.m"
    mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 0)));
#line 844 "declarative_debugger.m"
    mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 1)));
#line 844 "declarative_debugger.m"
    mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 2)));
#line 844 "declarative_debugger.m"
    mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 3)));
#line 844 "declarative_debugger.m"
    {
#line 844 "declarative_debugger.m"
      MR_Word base;
#line 844 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 844 "declarative_debugger.m"
      *mdb__declarative_debugger__Diagnoser_6 = base;
#line 844 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_13_13));
#line 844 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_8));
#line 844 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_15_15));
#line 844 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_16_16));
#line 844 "declarative_debugger.m"
    }
#line 841 "declarative_debugger.m"
  }
#line 834 "declarative_debugger.m"
}

#line 821 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_supertree_3_p_0(
#line 821 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 821 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_4,
#line 821 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_5)
#line 821 "declarative_debugger.m"
{
#line 828 "declarative_debugger.m"
  {
#line 828 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1)));

#line 828 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 828 "declarative_debugger.m"
      {
#line 828 "declarative_debugger.m"
        *mdb__declarative_debugger__Event_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 828 "declarative_debugger.m"
        *mdb__declarative_debugger__SeqNo_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 828 "declarative_debugger.m"
      }
#line 828 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 828 "declarative_debugger.m"
  }
#line 821 "declarative_debugger.m"
}

#line 810 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_subtree_5_p_0(
#line 810 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 810 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_6,
#line 810 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_7,
#line 810 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__CallPreceding_8,
#line 810 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__MaxDepth_9)
#line 810 "declarative_debugger.m"
{
#line 818 "declarative_debugger.m"
  {
#line 818 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0)));

#line 818 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 818 "declarative_debugger.m"
      {
#line 818 "declarative_debugger.m"
        *mdb__declarative_debugger__Event_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 818 "declarative_debugger.m"
        *mdb__declarative_debugger__SeqNo_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 818 "declarative_debugger.m"
        *mdb__declarative_debugger__CallPreceding_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)));
#line 818 "declarative_debugger.m"
        *mdb__declarative_debugger__MaxDepth_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 4)));
#line 818 "declarative_debugger.m"
      }
#line 818 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 818 "declarative_debugger.m"
  }
#line 810 "declarative_debugger.m"
}

#line 802 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0(
#line 802 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
#line 802 "declarative_debugger.m"
{
#line 808 "declarative_debugger.m"
  {
#line 808 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 808 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 808 "declarative_debugger.m"
  }
#line 802 "declarative_debugger.m"
}

#line 794 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_symptom_found_2_p_0(
#line 794 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 794 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3)
#line 794 "declarative_debugger.m"
{
#line 800 "declarative_debugger.m"
  {
#line 800 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));

#line 800 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 800 "declarative_debugger.m"
      *mdb__declarative_debugger__Event_3 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 800 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 800 "declarative_debugger.m"
  }
#line 794 "declarative_debugger.m"
}

#line 786 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_bug_found_2_p_0(
#line 786 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 786 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3)
#line 786 "declarative_debugger.m"
{
#line 792 "declarative_debugger.m"
  {
#line 792 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 792 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 792 "declarative_debugger.m"
      *mdb__declarative_debugger__Event_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 792 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 792 "declarative_debugger.m"
  }
#line 786 "declarative_debugger.m"
}

#line 770 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_resume_previous_8_p_0(
#line 770 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_9,
#line 770 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_10,
#line 770 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_14,
#line 770 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_15,
#line 770 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16,
#line 770 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_17)
#line 770 "declarative_debugger.m"
{
#line 780 "declarative_debugger.m"
  {
#line 780 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 781 "declarative_debugger.m"
    {
#line 781 "declarative_debugger.m"
      mdb__declarative_debugger__diagnosis_9_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_2[0], ((MR_Box) (mdb__declarative_debugger__Store_9)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_debugger__Response_10, mdb__declarative_debugger__STATE_VARIABLE_State_0_14, mdb__declarative_debugger__STATE_VARIABLE_State_15, mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16, mdb__declarative_debugger__STATE_VARIABLE_Browser_17);
    }
#line 780 "declarative_debugger.m"
  }
#line 770 "declarative_debugger.m"
}

#line 754 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_new_tree_9_p_0(
#line 754 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_10,
#line 754 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Node_11,
#line 754 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 754 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_16,
#line 754 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_17,
#line 754 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18,
#line 754 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_19)
#line 754 "declarative_debugger.m"
{
#line 764 "declarative_debugger.m"
  {
#line 764 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 764 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_22_22;
#line 764 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_26_26 = (MR_Word) mdb__declarative_debugger__Node_11;

#line 765 "declarative_debugger.m"
    {
#line 765 "declarative_debugger.m"
      mdb__declarative_debugger__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 765 "declarative_debugger.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_debugger__V_22_22, 0) = ((MR_Box) (mdb__declarative_debugger__V_26_26));
#line 765 "declarative_debugger.m"
    }
#line 765 "declarative_debugger.m"
    {
#line 765 "declarative_debugger.m"
      mdb__declarative_debugger__diagnosis_9_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_2[0], ((MR_Box) (mdb__declarative_debugger__Store_10)), mdb__declarative_debugger__V_22_22, mdb__declarative_debugger__Response_12, mdb__declarative_debugger__STATE_VARIABLE_State_0_16, mdb__declarative_debugger__STATE_VARIABLE_State_17, mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18, mdb__declarative_debugger__STATE_VARIABLE_Browser_19);
    }
#line 764 "declarative_debugger.m"
  }
#line 754 "declarative_debugger.m"
}

#line 741 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0(void)
#line 741 "declarative_debugger.m"
{
#line 745 "declarative_debugger.m"
  {
#line 745 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 745 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__HeadVar__1_1;

#line 745 "declarative_debugger.m"
    {
#line 745 "declarative_debugger.m"
      mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_f_0();
    }
#line 745 "declarative_debugger.m"
    return mdb__declarative_debugger__HeadVar__1_1;
#line 745 "declarative_debugger.m"
  }
#line 741 "declarative_debugger.m"
}

#line 732 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__divide_and_query_search_mode_0_f_0(void)
#line 732 "declarative_debugger.m"
{
#line 735 "declarative_debugger.m"
  {
#line 735 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 735 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__HeadVar__1_1;

#line 735 "declarative_debugger.m"
    {
#line 735 "declarative_debugger.m"
      mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_analyser__divide_and_query_search_mode_0_f_0();
    }
#line 735 "declarative_debugger.m"
    return mdb__declarative_debugger__HeadVar__1_1;
#line 735 "declarative_debugger.m"
  }
#line 732 "declarative_debugger.m"
}

#line 724 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__top_down_search_mode_0_f_0(void)
#line 724 "declarative_debugger.m"
{
#line 726 "declarative_debugger.m"
  {
#line 726 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 726 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__HeadVar__1_1;

#line 726 "declarative_debugger.m"
    {
#line 726 "declarative_debugger.m"
      mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_analyser__top_down_search_mode_0_f_0();
    }
#line 726 "declarative_debugger.m"
    return mdb__declarative_debugger__HeadVar__1_1;
#line 726 "declarative_debugger.m"
  }
#line 724 "declarative_debugger.m"
}

#line 711 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__reset_knowledge_base_2_p_0(
#line 711 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6,
#line 711 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7)
#line 711 "declarative_debugger.m"
{
#line 719 "declarative_debugger.m"
  {
#line 719 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 719 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 1)));
#line 719 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_5;
#line 720 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 0)));
#line 720 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 2)));
#line 720 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 3)));
#line 722 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12;
#line 722 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14;
#line 722 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15;
#line 722 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13;

#line 721 "declarative_debugger.m"
    {
#line 721 "declarative_debugger.m"
      mdb__declarative_oracle__reset_oracle_knowledge_base_2_p_0(mdb__declarative_debugger__Oracle0_4, &mdb__declarative_debugger__Oracle_5);
    }
#line 722 "declarative_debugger.m"
    mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 0)));
#line 722 "declarative_debugger.m"
    mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 1)));
#line 722 "declarative_debugger.m"
    mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 2)));
#line 722 "declarative_debugger.m"
    mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 3)));
#line 722 "declarative_debugger.m"
    {
#line 722 "declarative_debugger.m"
      MR_Word base;
#line 722 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 722 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7 = base;
#line 722 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_12_12));
#line 722 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_5));
#line 722 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_14_14));
#line 722 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_15_15));
#line 722 "declarative_debugger.m"
    }
#line 719 "declarative_debugger.m"
  }
#line 711 "declarative_debugger.m"
}

#line 696 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__set_fallback_search_mode_4_p_0(
#line 696 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_5,
#line 696 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__SearchMode_6,
#line 696 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10,
#line 696 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11)
#line 696 "declarative_debugger.m"
{
#line 705 "declarative_debugger.m"
  {
#line 705 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 705 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 0)));
#line 705 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser_9;
#line 705 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12 = (MR_Word) mdb__declarative_debugger__Store_5;
#line 706 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 1)));
#line 706 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 2)));
#line 706 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 3)));
#line 709 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_18_18;
#line 709 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_19_19;
#line 709 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_20_20;
#line 709 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_17_17;

#line 707 "declarative_debugger.m"
    {
#line 707 "declarative_debugger.m"
      mdb__declarative_analyser__set_fallback_search_mode_4_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_3[0], ((MR_Box) (mdb__declarative_debugger__V_12_12)), mdb__declarative_debugger__SearchMode_6, mdb__declarative_debugger__Analyser0_8, &mdb__declarative_debugger__Analyser_9);
    }
#line 709 "declarative_debugger.m"
    mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 0)));
#line 709 "declarative_debugger.m"
    mdb__declarative_debugger__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 1)));
#line 709 "declarative_debugger.m"
    mdb__declarative_debugger__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 2)));
#line 709 "declarative_debugger.m"
    mdb__declarative_debugger__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 3)));
#line 709 "declarative_debugger.m"
    {
#line 709 "declarative_debugger.m"
      MR_Word base;
#line 709 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 709 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11 = base;
#line 709 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_9));
#line 709 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_18_18));
#line 709 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_19_19));
#line 709 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_20_20));
#line 709 "declarative_debugger.m"
    }
#line 705 "declarative_debugger.m"
  }
#line 696 "declarative_debugger.m"
}

#line 684 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0(
#line 684 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Testing_4,
#line 684 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8,
#line 684 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9)
#line 684 "declarative_debugger.m"
{
#line 691 "declarative_debugger.m"
  {
#line 691 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 691 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 1)));
#line 691 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_7;
#line 692 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 0)));
#line 692 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 2)));
#line 692 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 3)));
#line 694 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14;
#line 694 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_16_16;
#line 694 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_17_17;
#line 694 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15;

#line 693 "declarative_debugger.m"
    {
#line 693 "declarative_debugger.m"
      mdb__declarative_oracle__set_oracle_testing_flag_3_p_0(mdb__declarative_debugger__Testing_4, mdb__declarative_debugger__Oracle0_6, &mdb__declarative_debugger__Oracle_7);
    }
#line 694 "declarative_debugger.m"
    mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 0)));
#line 694 "declarative_debugger.m"
    mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 1)));
#line 694 "declarative_debugger.m"
    mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 2)));
#line 694 "declarative_debugger.m"
    mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 3)));
#line 694 "declarative_debugger.m"
    {
#line 694 "declarative_debugger.m"
      MR_Word base;
#line 694 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 694 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9 = base;
#line 694 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_14_14));
#line 694 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_7));
#line 694 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_16_16));
#line 694 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_17_17));
#line 694 "declarative_debugger.m"
    }
#line 691 "declarative_debugger.m"
  }
#line 684 "declarative_debugger.m"
}

#line 673 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnoser_session_init_2_p_0(
#line 673 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
#line 673 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5)
#line 673 "declarative_debugger.m"
{
#line 676 "declarative_debugger.m"
  {
#line 676 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 677 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 0)));
#line 677 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 1)));
#line 677 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 3)));
#line 677 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 2)));

#line 677 "declarative_debugger.m"
    {
#line 677 "declarative_debugger.m"
      MR_Word base;
#line 677 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 677 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5 = base;
#line 677 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_8_8));
#line 677 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_9_9));
#line 677 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 677 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_11_11));
#line 677 "declarative_debugger.m"
    }
#line 676 "declarative_debugger.m"
  }
#line 673 "declarative_debugger.m"
}

#line 659 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_store_5_p_0(
#line 659 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__InStr_6,
#line 659 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OutStr_7,
#line 659 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Browser_8,
#line 659 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HelpSystem_9,
#line 659 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10)
#line 659 "declarative_debugger.m"
{
#line 667 "declarative_debugger.m"
  {
#line 667 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 667 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser_17;
#line 667 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_18;

#line 384 "declarative_debugger.m"
    {
#line 384 "declarative_debugger.m"
      mdb__declarative_analyser__analyser_state_init_1_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[1], &mdb__declarative_debugger__Analyser_17);
    }
#line 385 "declarative_debugger.m"
    {
#line 385 "declarative_debugger.m"
      mdb__declarative_oracle__oracle_state_init_5_p_0(mdb__declarative_debugger__InStr_6, mdb__declarative_debugger__OutStr_7, mdb__declarative_debugger__Browser_8, mdb__declarative_debugger__HelpSystem_9, &mdb__declarative_debugger__Oracle_18);
    }
#line 386 "declarative_debugger.m"
    {
#line 386 "declarative_debugger.m"
      MR_Word base;
#line 386 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 386 "declarative_debugger.m"
      *mdb__declarative_debugger__Diagnoser_10 = base;
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_17));
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_18));
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "declarative_debugger.m"
    }
#line 667 "declarative_debugger.m"
  }
#line 659 "declarative_debugger.m"
}

#line 642 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__overrule_bug_6_p_0(
#line 642 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28,
#line 642 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_7,
#line 642 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_8,
#line 642 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_9,
#line 642 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10)
#line 642 "declarative_debugger.m"
{
#line 646 "declarative_debugger.m"
  {
#line 646 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 646 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_30_30;
#line 646 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_32_32;
#line 646 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_34_34;
#line 646 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_36_36;
#line 646 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38;
#line 646 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 0)));
#line 646 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__AnalyserResponse_13;
#line 646 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser_14;
#line 646 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Diagnoser1_15;
#line 646 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__MaybeOrigin_16;
#line 646 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_19_19 = ((MR_Word) mdb__declarative_debugger__Store_7);
#line 647 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 1)));
#line 647 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 2)));
#line 647 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 3)));
#line 648 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__conv1_AnalyserResponse_13;
#line 648 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__conv0_Analyser_14;
#line 649 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_25_25;
#line 649 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_26_26;
#line 649 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_27_27;
#line 649 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_24_24;

#line 648 "declarative_debugger.m"
    {
#line 648 "declarative_debugger.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_30_30);
    }
#line 10196 "mdb.declarative_debugger.c"
    {
#line 10198 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10200 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_32_32, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 10202 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_32_32, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_30_30));
#line 10204 "mdb.declarative_debugger.c"
    }
#line 648 "declarative_debugger.m"
    {
#line 648 "declarative_debugger.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_34_34);
    }
#line 10211 "mdb.declarative_debugger.c"
    {
#line 10213 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10215 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_36_36, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 10217 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_36_36, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_34_34));
#line 10219 "mdb.declarative_debugger.c"
    }
#line 10221 "mdb.declarative_debugger.c"
    {
#line 10223 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 10225 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 10227 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28));
#line 10229 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_32_32));
#line 10231 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_36_36));
#line 10233 "mdb.declarative_debugger.c"
    }
#line 648 "declarative_debugger.m"
    {
#line 648 "declarative_debugger.m"
      mdb__declarative_analyser__revise_analysis_4_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38, ((MR_Box) (mdb__declarative_debugger__V_19_19)), &mdb__declarative_debugger__conv1_AnalyserResponse_13, (MR_Word) mdb__declarative_debugger__Analyser0_12, &mdb__declarative_debugger__conv0_Analyser_14);
    }
#line 648 "declarative_debugger.m"
    mdb__declarative_debugger__AnalyserResponse_13 = (MR_Word) mdb__declarative_debugger__conv1_AnalyserResponse_13;
#line 648 "declarative_debugger.m"
    mdb__declarative_debugger__Analyser_14 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_14;
#line 649 "declarative_debugger.m"
    mdb__declarative_debugger__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 0)));
#line 649 "declarative_debugger.m"
    mdb__declarative_debugger__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 1)));
#line 649 "declarative_debugger.m"
    mdb__declarative_debugger__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 2)));
#line 649 "declarative_debugger.m"
    mdb__declarative_debugger__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 3)));
#line 649 "declarative_debugger.m"
    {
#line 649 "declarative_debugger.m"
      mdb__declarative_debugger__Diagnoser1_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 649 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_15, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_14));
#line 649 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_15, 1) = ((MR_Box) (mdb__declarative_debugger__V_25_25));
#line 649 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_15, 2) = ((MR_Box) (mdb__declarative_debugger__V_26_26));
#line 649 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_15, 3) = ((MR_Box) (mdb__declarative_debugger__V_27_27));
#line 649 "declarative_debugger.m"
    }
#line 650 "declarative_debugger.m"
    {
#line 650 "declarative_debugger.m"
      mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_36_36, mdb__declarative_debugger__Analyser_14, &mdb__declarative_debugger__MaybeOrigin_16);
    }
#line 651 "declarative_debugger.m"
    {
#line 651 "declarative_debugger.m"
      mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28, mdb__declarative_debugger__Store_7, mdb__declarative_debugger__AnalyserResponse_13, mdb__declarative_debugger__MaybeOrigin_16, mdb__declarative_debugger__Response_8, mdb__declarative_debugger__Diagnoser1_15, mdb__declarative_debugger__Diagnoser_10);
    }
#line 646 "declarative_debugger.m"
  }
#line 642 "declarative_debugger.m"
}

#line 621 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__confirm_bug_8_p_0(
#line 621 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_35,
#line 621 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34,
#line 621 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_9,
#line 621 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Bug_10,
#line 621 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Evidence_11,
#line 621 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 621 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19,
#line 621 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20)
#line 621 "declarative_debugger.m"
{
#line 626 "declarative_debugger.m"
  {
#line 626 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 626 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 1)));
#line 626 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Confirmation_16;
#line 626 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_17;
#line 626 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24;
#line 627 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 0)));
#line 627 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 2)));
#line 627 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 3)));
#line 629 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_30_30;
#line 629 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_32_32;
#line 629 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_33_33;
#line 629 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_31_31;

#line 628 "declarative_debugger.m"
    {
#line 628 "declarative_debugger.m"
      mdb__declarative_oracle__oracle_confirm_bug_7_p_0(mdb__declarative_debugger__TypeInfo_for_T_35, mdb__declarative_debugger__Bug_10, mdb__declarative_debugger__Evidence_11, &mdb__declarative_debugger__Confirmation_16, mdb__declarative_debugger__Oracle0_15, &mdb__declarative_debugger__Oracle_17);
    }
#line 629 "declarative_debugger.m"
    mdb__declarative_debugger__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 0)));
#line 629 "declarative_debugger.m"
    mdb__declarative_debugger__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 1)));
#line 629 "declarative_debugger.m"
    mdb__declarative_debugger__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 2)));
#line 629 "declarative_debugger.m"
    mdb__declarative_debugger__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 3)));
#line 629 "declarative_debugger.m"
    {
#line 629 "declarative_debugger.m"
      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 629 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 0) = ((MR_Box) (mdb__declarative_debugger__V_30_30));
#line 629 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_17));
#line 629 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 2) = ((MR_Box) (mdb__declarative_debugger__V_32_32));
#line 629 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 3) = ((MR_Box) (mdb__declarative_debugger__V_33_33));
#line 629 "declarative_debugger.m"
    }
#line 634 "declarative_debugger.m"
#line 634 "declarative_debugger.m"
    switch (mdb__declarative_debugger__Confirmation_16) {
#line 634 "declarative_debugger.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 634 "declarative_debugger.m"
      case (MR_Integer) 2:
#line 638 "declarative_debugger.m"
        {
#line 639 "declarative_debugger.m"
          *mdb__declarative_debugger__Response_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 638 "declarative_debugger.m"
          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24;
#line 638 "declarative_debugger.m"
        }
#line 634 "declarative_debugger.m"
        break;
#line 634 "declarative_debugger.m"
      case (MR_Integer) 0:
#line 631 "declarative_debugger.m"
        {
#line 631 "declarative_debugger.m"
          MR_Integer mdb__declarative_debugger__Event_18;

#line 944 "declarative_debugger.m"
          if (((MR_tag((MR_Word) mdb__declarative_debugger__Bug_10)) == (MR_mktag((MR_Integer) 1))))
#line 944 "declarative_debugger.m"
            {
#line 944 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__EBug_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Bug_10, (MR_Integer) 0)));

#line 947 "declarative_debugger.m"
#line 947 "declarative_debugger.m"
              switch (MR_tag((MR_Word) mdb__declarative_debugger__EBug_36)) {
#line 947 "declarative_debugger.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 947 "declarative_debugger.m"
                case (MR_Integer) 0:
#line 946 "declarative_debugger.m"
                  {
#line 946 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 0)));
#line 946 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 1)));
#line 946 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 2)));

#line 946 "declarative_debugger.m"
                    mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 3)));
#line 946 "declarative_debugger.m"
                  }
#line 947 "declarative_debugger.m"
                  break;
#line 947 "declarative_debugger.m"
                case (MR_Integer) 1:
#line 948 "declarative_debugger.m"
                  {
#line 948 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__EBug_36, (MR_Integer) 0)));

#line 948 "declarative_debugger.m"
                    mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__EBug_36, (MR_Integer) 1)));
#line 948 "declarative_debugger.m"
                  }
#line 947 "declarative_debugger.m"
                  break;
#line 947 "declarative_debugger.m"
                case (MR_Integer) 2:
#line 950 "declarative_debugger.m"
                  {
#line 950 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__EBug_36, (MR_Integer) 0)));
#line 950 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__EBug_36, (MR_Integer) 1)));

#line 950 "declarative_debugger.m"
                    mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__EBug_36, (MR_Integer) 2)));
#line 950 "declarative_debugger.m"
                  }
#line 947 "declarative_debugger.m"
                  break;
#line 947 "declarative_debugger.m"
              }
#line 944 "declarative_debugger.m"
            }
#line 944 "declarative_debugger.m"
          else
#line 952 "declarative_debugger.m"
            {
#line 952 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__IBug_44 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__Bug_10), (MR_Integer) 0);
#line 953 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__IBug_44, (MR_Integer) 0)));
#line 953 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__IBug_44, (MR_Integer) 2)));

#line 953 "declarative_debugger.m"
              mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__IBug_44, (MR_Integer) 3)));
#line 952 "declarative_debugger.m"
            }
#line 633 "declarative_debugger.m"
          {
#line 633 "declarative_debugger.m"
            MR_Word base;
#line 633 "declarative_debugger.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 633 "declarative_debugger.m"
            *mdb__declarative_debugger__Response_12 = base;
#line 633 "declarative_debugger.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_debugger__Event_18));
#line 633 "declarative_debugger.m"
          }
#line 631 "declarative_debugger.m"
          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24;
#line 631 "declarative_debugger.m"
        }
#line 634 "declarative_debugger.m"
        break;
#line 634 "declarative_debugger.m"
      case (MR_Integer) 1:
#line 636 "declarative_debugger.m"
        {
#line 636 "declarative_debugger.m"
          mdb__declarative_debugger__overrule_bug_6_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__Response_12, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20);
        }
#line 634 "declarative_debugger.m"
        break;
#line 634 "declarative_debugger.m"
    }
#line 626 "declarative_debugger.m"
  }
#line 621 "declarative_debugger.m"
}

#line 551 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_oracle_response_7_p_0(
#line 551 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108,
#line 551 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_8,
#line 551 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OracleResponse_9,
#line 551 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_10,
#line 551 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27,
#line 551 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28)
#line 551 "declarative_debugger.m"
{
#line 559 "declarative_debugger.m"
  {
#line 559 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 559 "declarative_debugger.m"
#line 559 "declarative_debugger.m"
    switch (MR_tag((MR_Word) mdb__declarative_debugger__OracleResponse_9)) {
#line 559 "declarative_debugger.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 559 "declarative_debugger.m"
      case (MR_Integer) 0:
#line 559 "declarative_debugger.m"
#line 559 "declarative_debugger.m"
        switch (MR_unmkbody(mdb__declarative_debugger__OracleResponse_9)) {
#line 559 "declarative_debugger.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 559 "declarative_debugger.m"
          case (MR_Integer) 0:
#line 591 "declarative_debugger.m"
            {
#line 591 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_154_154;
#line 591 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_156_156;
#line 591 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33;
#line 591 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_42_42;
#line 591 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__AnalyserResponse_72;
#line 591 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__MaybeOrigin_73;
#line 592 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__PoppedDiagnoser_22;
#line 592 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_141_141;
#line 599 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__AnalyserResponse0_71;
#line 600 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_143_143;
#line 600 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_145_145;
#line 600 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_147_147;
#line 600 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_149_149;
#line 600 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151;
#line 600 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_37_37;
#line 600 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_38_38;
#line 600 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_102_102;
#line 600 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_103_103;
#line 600 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_104_104;
#line 600 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__conv5_AnalyserResponse0_71;
#line 608 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_105_105;
#line 608 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_106_106;
#line 608 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_107_107;

#line 592 "declarative_debugger.m"
              {
#line 592 "declarative_debugger.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_141_141);
              }
#line 592 "declarative_debugger.m"
              {
#line 592 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, &mdb__declarative_debugger__PoppedDiagnoser_22);
              }
#line 592 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 593 "declarative_debugger.m"
                mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33 = mdb__declarative_debugger__PoppedDiagnoser_22;
#line 592 "declarative_debugger.m"
              else
#line 596 "declarative_debugger.m"
                {
#line 596 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 596 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__OutStream_69;
#line 595 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 595 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 595 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));

#line 595 "declarative_debugger.m"
                  {
#line 595 "declarative_debugger.m"
                    mdb__declarative_debugger__OutStream_69 = mdb__declarative_oracle__get_user_output_stream_1_f_0(mdb__declarative_debugger__V_34_34);
                  }
#line 597 "declarative_debugger.m"
                  {
#line 597 "declarative_debugger.m"
                    mercury__io__write_string_4_p_0(mdb__declarative_debugger__OutStream_69, (MR_String) "Undo stack empty.\n");
                  }
#line 596 "declarative_debugger.m"
                  mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27;
#line 596 "declarative_debugger.m"
                }
#line 600 "declarative_debugger.m"
              mdb__declarative_debugger__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 0)));
#line 600 "declarative_debugger.m"
              mdb__declarative_debugger__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 1)));
#line 600 "declarative_debugger.m"
              mdb__declarative_debugger__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 2)));
#line 600 "declarative_debugger.m"
              mdb__declarative_debugger__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 3)));
#line 600 "declarative_debugger.m"
              mdb__declarative_debugger__V_37_37 = ((MR_Word) mdb__declarative_debugger__Store_8);
#line 600 "declarative_debugger.m"
              {
#line 600 "declarative_debugger.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_143_143);
              }
#line 10633 "mdb.declarative_debugger.c"
              {
#line 10635 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10637 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_145_145, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 10639 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_145_145, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_143_143));
#line 10641 "mdb.declarative_debugger.c"
              }
#line 600 "declarative_debugger.m"
              {
#line 600 "declarative_debugger.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_147_147);
              }
#line 10648 "mdb.declarative_debugger.c"
              {
#line 10650 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10652 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_149_149, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 10654 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_149_149, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_147_147));
#line 10656 "mdb.declarative_debugger.c"
              }
#line 10658 "mdb.declarative_debugger.c"
              {
#line 10660 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 10662 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 10664 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
#line 10666 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_145_145));
#line 10668 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_149_149));
#line 10670 "mdb.declarative_debugger.c"
              }
#line 600 "declarative_debugger.m"
              {
#line 600 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, ((MR_Box) (mdb__declarative_debugger__V_37_37)), (MR_Word) mdb__declarative_debugger__V_38_38, &mdb__declarative_debugger__conv5_AnalyserResponse0_71);
              }
#line 600 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 600 "declarative_debugger.m"
                {
#line 600 "declarative_debugger.m"
                  mdb__declarative_debugger__AnalyserResponse0_71 = (MR_Word) mdb__declarative_debugger__conv5_AnalyserResponse0_71;
#line 600 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = MR_TRUE;
#line 600 "declarative_debugger.m"
                }
#line 599 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 603 "declarative_debugger.m"
                mdb__declarative_debugger__AnalyserResponse_72 = mdb__declarative_debugger__AnalyserResponse0_71;
#line 599 "declarative_debugger.m"
              else
#line 605 "declarative_debugger.m"
                {
#line 605 "declarative_debugger.m"
                  {
#line 605 "declarative_debugger.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[7])));
#line 605 "declarative_debugger.m"
                    return;
                  }
#line 605 "declarative_debugger.m"
                }
#line 608 "declarative_debugger.m"
              mdb__declarative_debugger__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 0)));
#line 608 "declarative_debugger.m"
              mdb__declarative_debugger__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 1)));
#line 608 "declarative_debugger.m"
              mdb__declarative_debugger__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 2)));
#line 608 "declarative_debugger.m"
              mdb__declarative_debugger__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 3)));
#line 608 "declarative_debugger.m"
              {
#line 608 "declarative_debugger.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_154_154);
              }
#line 10717 "mdb.declarative_debugger.c"
              {
#line 10719 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10721 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_156_156, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 10723 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_156_156, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_154_154));
#line 10725 "mdb.declarative_debugger.c"
              }
#line 608 "declarative_debugger.m"
              {
#line 608 "declarative_debugger.m"
                mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_156_156, mdb__declarative_debugger__V_42_42, &mdb__declarative_debugger__MaybeOrigin_73);
              }
#line 609 "declarative_debugger.m"
              {
#line 609 "declarative_debugger.m"
                mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_72, mdb__declarative_debugger__MaybeOrigin_73, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
              }
#line 591 "declarative_debugger.m"
            }
#line 559 "declarative_debugger.m"
            break;
#line 559 "declarative_debugger.m"
          case (MR_Integer) 1:
#line 616 "declarative_debugger.m"
            {
#line 617 "declarative_debugger.m"
              *mdb__declarative_debugger__DiagnoserResponse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 618 "declarative_debugger.m"
              {
#line 618 "declarative_debugger.m"
                mercury__io__write_string_3_p_0((MR_String) "Diagnosis aborted.\n");
              }
#line 616 "declarative_debugger.m"
              *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27;
#line 616 "declarative_debugger.m"
            }
#line 559 "declarative_debugger.m"
            break;
#line 559 "declarative_debugger.m"
        }
#line 559 "declarative_debugger.m"
        break;
#line 559 "declarative_debugger.m"
      case (MR_Integer) 1:
#line 559 "declarative_debugger.m"
        {
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_110_110;
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_112_112;
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_114_114;
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_116_116;
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118;
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Answer_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 0)));
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__AnalyserResponse_15;
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser_16;
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__MaybeOrigin_17;
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_57_57 = ((MR_Word) mdb__declarative_debugger__Store_8);
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59;
#line 559 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 560 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 560 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
#line 561 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv1_AnalyserResponse_15;
#line 561 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv0_Analyser_16;
#line 563 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_83_83;
#line 563 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_84_84;
#line 563 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_85_85;
#line 563 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_82_82;

#line 561 "declarative_debugger.m"
          {
#line 561 "declarative_debugger.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_110_110);
          }
#line 10814 "mdb.declarative_debugger.c"
          {
#line 10816 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10818 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 10820 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_110_110));
#line 10822 "mdb.declarative_debugger.c"
          }
#line 561 "declarative_debugger.m"
          {
#line 561 "declarative_debugger.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_114_114);
          }
#line 10829 "mdb.declarative_debugger.c"
          {
#line 10831 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10833 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_116_116, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 10835 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_116_116, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_114_114));
#line 10837 "mdb.declarative_debugger.c"
          }
#line 10839 "mdb.declarative_debugger.c"
          {
#line 10841 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 10843 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 10845 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
#line 10847 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_112_112));
#line 10849 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_116_116));
#line 10851 "mdb.declarative_debugger.c"
          }
#line 561 "declarative_debugger.m"
          {
#line 561 "declarative_debugger.m"
            mdb__declarative_analyser__continue_analysis_6_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, ((MR_Box) (mdb__declarative_debugger__V_57_57)), mdb__declarative_debugger__V_76_76, (MR_Word) mdb__declarative_debugger__Answer_13, &mdb__declarative_debugger__conv1_AnalyserResponse_15, (MR_Word) mdb__declarative_debugger__Analyser0_14, &mdb__declarative_debugger__conv0_Analyser_16);
          }
#line 561 "declarative_debugger.m"
          mdb__declarative_debugger__AnalyserResponse_15 = (MR_Word) mdb__declarative_debugger__conv1_AnalyserResponse_15;
#line 561 "declarative_debugger.m"
          mdb__declarative_debugger__Analyser_16 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_16;
#line 563 "declarative_debugger.m"
          mdb__declarative_debugger__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 563 "declarative_debugger.m"
          mdb__declarative_debugger__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 563 "declarative_debugger.m"
          mdb__declarative_debugger__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 563 "declarative_debugger.m"
          mdb__declarative_debugger__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
#line 563 "declarative_debugger.m"
          {
#line 563 "declarative_debugger.m"
            mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 563 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_16));
#line 563 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 1) = ((MR_Box) (mdb__declarative_debugger__V_83_83));
#line 563 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 2) = ((MR_Box) (mdb__declarative_debugger__V_84_84));
#line 563 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 3) = ((MR_Box) (mdb__declarative_debugger__V_85_85));
#line 563 "declarative_debugger.m"
          }
#line 564 "declarative_debugger.m"
          {
#line 564 "declarative_debugger.m"
            mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_116_116, mdb__declarative_debugger__Analyser_16, &mdb__declarative_debugger__MaybeOrigin_17);
          }
#line 565 "declarative_debugger.m"
          {
#line 565 "declarative_debugger.m"
            mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_15, mdb__declarative_debugger__MaybeOrigin_17, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
          }
#line 559 "declarative_debugger.m"
        }
#line 559 "declarative_debugger.m"
        break;
#line 559 "declarative_debugger.m"
      case (MR_Integer) 2:
#line 568 "declarative_debugger.m"
        {
#line 568 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_120_120;
#line 568 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_122_122;
#line 568 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_124_124;
#line 568 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_126_126;
#line 568 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128;
#line 568 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__OutStream_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 0)));
#line 568 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_49_49 = ((MR_Word) mdb__declarative_debugger__Store_8);
#line 568 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__AnalyserResponse_62;
#line 568 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 568 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__MaybeOrigin_64;
#line 569 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 569 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 569 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
#line 571 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__AnalyserResponse0_19;
#line 571 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv4_AnalyserResponse0_19;

#line 570 "declarative_debugger.m"
          {
#line 570 "declarative_debugger.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_120_120);
          }
#line 10938 "mdb.declarative_debugger.c"
          {
#line 10940 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10942 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_122_122, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 10944 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_122_122, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_120_120));
#line 10946 "mdb.declarative_debugger.c"
          }
#line 570 "declarative_debugger.m"
          {
#line 570 "declarative_debugger.m"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_124_124);
          }
#line 10953 "mdb.declarative_debugger.c"
          {
#line 10955 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10957 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_126_126, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 10959 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_126_126, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_124_124));
#line 10961 "mdb.declarative_debugger.c"
          }
#line 10963 "mdb.declarative_debugger.c"
          {
#line 10965 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 10967 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 10969 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
#line 10971 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_122_122));
#line 10973 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_126_126));
#line 10975 "mdb.declarative_debugger.c"
          }
#line 570 "declarative_debugger.m"
          {
#line 570 "declarative_debugger.m"
            mdb__declarative_analyser__show_info_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, ((MR_Box) (mdb__declarative_debugger__V_49_49)), mdb__declarative_debugger__OutStream_18, (MR_Word) mdb__declarative_debugger__Analyser_63);
          }
#line 571 "declarative_debugger.m"
          {
#line 571 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, ((MR_Box) (mdb__declarative_debugger__V_49_49)), (MR_Word) mdb__declarative_debugger__Analyser_63, &mdb__declarative_debugger__conv4_AnalyserResponse0_19);
          }
#line 571 "declarative_debugger.m"
          if (mdb__declarative_debugger__succeeded)
#line 571 "declarative_debugger.m"
            {
#line 571 "declarative_debugger.m"
              mdb__declarative_debugger__AnalyserResponse0_19 = (MR_Word) mdb__declarative_debugger__conv4_AnalyserResponse0_19;
#line 571 "declarative_debugger.m"
              mdb__declarative_debugger__succeeded = MR_TRUE;
#line 571 "declarative_debugger.m"
            }
#line 571 "declarative_debugger.m"
          if (mdb__declarative_debugger__succeeded)
#line 572 "declarative_debugger.m"
            mdb__declarative_debugger__AnalyserResponse_62 = mdb__declarative_debugger__AnalyserResponse0_19;
#line 571 "declarative_debugger.m"
          else
#line 574 "declarative_debugger.m"
            {
#line 574 "declarative_debugger.m"
              {
#line 574 "declarative_debugger.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[6])));
#line 574 "declarative_debugger.m"
                return;
              }
#line 574 "declarative_debugger.m"
            }
#line 577 "declarative_debugger.m"
          {
#line 577 "declarative_debugger.m"
            mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_126_126, mdb__declarative_debugger__Analyser_63, &mdb__declarative_debugger__MaybeOrigin_64);
          }
#line 578 "declarative_debugger.m"
          {
#line 578 "declarative_debugger.m"
            mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_62, mdb__declarative_debugger__MaybeOrigin_64, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
          }
#line 568 "declarative_debugger.m"
        }
#line 559 "declarative_debugger.m"
        break;
#line 559 "declarative_debugger.m"
      case (MR_Integer) 3:
#line 559 "declarative_debugger.m"
#line 559 "declarative_debugger.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 0)))) {
#line 559 "declarative_debugger.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 559 "declarative_debugger.m"
          case (MR_Integer) 0:
#line 581 "declarative_debugger.m"
            {
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_131_131;
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_133_133;
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_135_135;
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_137_137;
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139;
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Mode_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 1)));
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Oracle_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_45_45 = ((MR_Word) mdb__declarative_debugger__Store_8);
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46;
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Analyser0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__AnalyserResponse_66;
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Analyser_67;
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__MaybeOrigin_68;
#line 582 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 582 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
#line 584 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__conv3_Analyser_67;
#line 584 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__conv2_AnalyserResponse_66;
#line 586 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_96_96;
#line 586 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_97_97;
#line 586 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_98_98;
#line 586 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_95_95;

#line 584 "declarative_debugger.m"
              {
#line 584 "declarative_debugger.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_131_131);
              }
#line 11087 "mdb.declarative_debugger.c"
              {
#line 11089 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11091 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_133_133, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 11093 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_133_133, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_131_131));
#line 11095 "mdb.declarative_debugger.c"
              }
#line 584 "declarative_debugger.m"
              {
#line 584 "declarative_debugger.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_135_135);
              }
#line 11102 "mdb.declarative_debugger.c"
              {
#line 11104 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11106 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_137_137, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 11108 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_137_137, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_135_135));
#line 11110 "mdb.declarative_debugger.c"
              }
#line 11112 "mdb.declarative_debugger.c"
              {
#line 11114 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 11116 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 11118 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
#line 11120 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_133_133));
#line 11122 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_137_137));
#line 11124 "mdb.declarative_debugger.c"
              }
#line 584 "declarative_debugger.m"
              {
#line 584 "declarative_debugger.m"
                mdb__declarative_analyser__change_search_mode_6_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, ((MR_Box) (mdb__declarative_debugger__V_45_45)), mdb__declarative_debugger__Oracle_21, mdb__declarative_debugger__Mode_20, (MR_Word) mdb__declarative_debugger__Analyser0_65, &mdb__declarative_debugger__conv3_Analyser_67, &mdb__declarative_debugger__conv2_AnalyserResponse_66);
              }
#line 584 "declarative_debugger.m"
              mdb__declarative_debugger__Analyser_67 = (MR_Word) mdb__declarative_debugger__conv3_Analyser_67;
#line 584 "declarative_debugger.m"
              mdb__declarative_debugger__AnalyserResponse_66 = (MR_Word) mdb__declarative_debugger__conv2_AnalyserResponse_66;
#line 586 "declarative_debugger.m"
              mdb__declarative_debugger__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 586 "declarative_debugger.m"
              mdb__declarative_debugger__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 586 "declarative_debugger.m"
              mdb__declarative_debugger__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 586 "declarative_debugger.m"
              mdb__declarative_debugger__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
#line 586 "declarative_debugger.m"
              {
#line 586 "declarative_debugger.m"
                mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 586 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_67));
#line 586 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 1) = ((MR_Box) (mdb__declarative_debugger__V_96_96));
#line 586 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 2) = ((MR_Box) (mdb__declarative_debugger__V_97_97));
#line 586 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 3) = ((MR_Box) (mdb__declarative_debugger__V_98_98));
#line 586 "declarative_debugger.m"
              }
#line 587 "declarative_debugger.m"
              {
#line 587 "declarative_debugger.m"
                mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_137_137, mdb__declarative_debugger__Analyser_67, &mdb__declarative_debugger__MaybeOrigin_68);
              }
#line 588 "declarative_debugger.m"
              {
#line 588 "declarative_debugger.m"
                mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_66, mdb__declarative_debugger__MaybeOrigin_68, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
              }
#line 581 "declarative_debugger.m"
            }
#line 559 "declarative_debugger.m"
            break;
#line 559 "declarative_debugger.m"
          case (MR_Integer) 1:
#line 612 "declarative_debugger.m"
            {
#line 612 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Node_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 1)));
#line 612 "declarative_debugger.m"
              MR_Integer mdb__declarative_debugger__Event_24;
#line 613 "declarative_debugger.m"
              MR_Integer mdb__declarative_debugger__V_25_25;
#line 613 "declarative_debugger.m"
              MR_Box mdb__declarative_debugger__V_26_26;

#line 613 "declarative_debugger.m"
              {
#line 613 "declarative_debugger.m"
                mdb__declarative_tree__edt_subtree_details_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__Node_23, &mdb__declarative_debugger__Event_24, &mdb__declarative_debugger__V_25_25, &mdb__declarative_debugger__V_26_26);
              }
#line 614 "declarative_debugger.m"
              {
#line 614 "declarative_debugger.m"
                MR_Word base;
#line 614 "declarative_debugger.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 614 "declarative_debugger.m"
                *mdb__declarative_debugger__DiagnoserResponse_10 = base;
#line 614 "declarative_debugger.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_debugger__Event_24));
#line 614 "declarative_debugger.m"
              }
#line 612 "declarative_debugger.m"
              *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27;
#line 612 "declarative_debugger.m"
            }
#line 559 "declarative_debugger.m"
            break;
#line 559 "declarative_debugger.m"
        }
#line 559 "declarative_debugger.m"
        break;
#line 559 "declarative_debugger.m"
    }
#line 559 "declarative_debugger.m"
  }
#line 551 "declarative_debugger.m"
}

#line 436 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_analyser_response_8_p_0(
#line 436 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113,
#line 436 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_9,
#line 436 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__AnalyserResponse_10,
#line 436 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__MaybeOrigin_11,
#line 436 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_12,
#line 436 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33,
#line 436 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34)
#line 436 "declarative_debugger.m"
{
#line 444 "declarative_debugger.m"
  while (MR_TRUE)
#line 444 "declarative_debugger.m"
    {
#line 444 "declarative_debugger.m"
      /* tailcall optimized into a loop */
#line 444 "declarative_debugger.m"
      {
#line 444 "declarative_debugger.m"
        MR_bool mdb__declarative_debugger__succeeded;

#line 444 "declarative_debugger.m"
#line 444 "declarative_debugger.m"
        switch (MR_tag((MR_Word) mdb__declarative_debugger__AnalyserResponse_10)) {
#line 444 "declarative_debugger.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 444 "declarative_debugger.m"
          case (MR_Integer) 0:
#line 444 "declarative_debugger.m"
            {
#line 445 "declarative_debugger.m"
              *mdb__declarative_debugger__DiagnoserResponse_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 446 "declarative_debugger.m"
              {
#line 446 "declarative_debugger.m"
                mercury__io__write_string_3_p_0((MR_String) "No bug found.\n");
              }
#line 444 "declarative_debugger.m"
              *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
#line 444 "declarative_debugger.m"
            }
#line 444 "declarative_debugger.m"
            break;
#line 444 "declarative_debugger.m"
          case (MR_Integer) 1:
#line 448 "declarative_debugger.m"
            {
#line 448 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_115_115;
#line 448 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_117_117;
#line 448 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Bug_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 0)));
#line 448 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Evidence_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));

#line 449 "declarative_debugger.m"
              {
#line 449 "declarative_debugger.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_115_115);
              }
#line 11288 "mdb.declarative_debugger.c"
              {
#line 11290 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11292 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_117_117, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 11294 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_117_117, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_115_115));
#line 11296 "mdb.declarative_debugger.c"
              }
#line 449 "declarative_debugger.m"
              {
#line 449 "declarative_debugger.m"
                mdb__declarative_debugger__confirm_bug_8_p_0(mdb__declarative_debugger__TypeInfo_117_117, mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__Bug_15, (MR_Word) mdb__declarative_debugger__Evidence_16, mdb__declarative_debugger__DiagnoserResponse_12, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34);
              }
#line 448 "declarative_debugger.m"
            }
#line 444 "declarative_debugger.m"
            break;
#line 444 "declarative_debugger.m"
          case (MR_Integer) 2:
#line 451 "declarative_debugger.m"
            {
#line 451 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_119_119;
#line 451 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_121_121;
#line 451 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Question_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 0)));
#line 451 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Oracle0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 451 "declarative_debugger.m"
              MR_Integer mdb__declarative_debugger__Flag_19;
#line 451 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__OracleResponse_21;
#line 451 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__FromUser_22;
#line 451 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Oracle_23;
#line 451 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68;
#line 451 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69;
#line 452 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 452 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
#line 452 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 454 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Origin_20;
#line 455 "declarative_debugger.m"
              MR_Integer mdb__declarative_debugger__V_59_59;
#line 476 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_89_89;
#line 476 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_91_91;
#line 476 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_92_92;
#line 476 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_90_90;

#line 453 "declarative_debugger.m"
              {
#line 453 "declarative_debugger.m"
                mdb__declarative_debugger__debug_origin_3_p_0(&mdb__declarative_debugger__Flag_19);
              }
#line 455 "declarative_debugger.m"
              mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__MaybeOrigin_11)) == (MR_mktag((MR_Integer) 1)));
#line 455 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 455 "declarative_debugger.m"
                {
#line 455 "declarative_debugger.m"
                  mdb__declarative_debugger__Origin_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__MaybeOrigin_11, (MR_Integer) 0)));
#line 456 "declarative_debugger.m"
                  mdb__declarative_debugger__V_59_59 = (MR_Integer) 0;
#line 456 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Flag_19 > mdb__declarative_debugger__V_59_59);
#line 455 "declarative_debugger.m"
                }
#line 454 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 458 "declarative_debugger.m"
                {
#line 458 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_62_62;

#line 458 "declarative_debugger.m"
                  {
#line 458 "declarative_debugger.m"
                    mercury__io__write_string_3_p_0((MR_String) "Origin: ");
                  }
#line 459 "declarative_debugger.m"
                  mdb__declarative_debugger__V_62_62 = ((MR_Word) mdb__declarative_debugger__Store_9);
#line 459 "declarative_debugger.m"
                  {
#line 459 "declarative_debugger.m"
                    mdb__declarative_debugger__write_origin_4_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__V_62_62, mdb__declarative_debugger__Origin_20);
                  }
#line 460 "declarative_debugger.m"
                  {
#line 460 "declarative_debugger.m"
                    mercury__io__nl_2_p_0();
                  }
#line 458 "declarative_debugger.m"
                }
#line 454 "declarative_debugger.m"
              else
#line 454 "declarative_debugger.m"
                {
#line 454 "declarative_debugger.m"
                }
#line 464 "declarative_debugger.m"
              {
#line 464 "declarative_debugger.m"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_119_119);
              }
#line 11406 "mdb.declarative_debugger.c"
              {
#line 11408 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11410 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_121_121, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 11412 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_121_121, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_119_119));
#line 11414 "mdb.declarative_debugger.c"
              }
#line 464 "declarative_debugger.m"
              {
#line 464 "declarative_debugger.m"
                mdb__declarative_oracle__query_oracle_7_p_0(mdb__declarative_debugger__TypeInfo_121_121, mdb__declarative_debugger__Question_17, &mdb__declarative_debugger__OracleResponse_21, &mdb__declarative_debugger__FromUser_22, mdb__declarative_debugger__Oracle0_18, &mdb__declarative_debugger__Oracle_23);
              }
#line 473 "declarative_debugger.m"
#line 473 "declarative_debugger.m"
              switch (mdb__declarative_debugger__FromUser_22) {
#line 473 "declarative_debugger.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 473 "declarative_debugger.m"
                case (MR_Integer) 0:
#line 474 "declarative_debugger.m"
                  mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
#line 473 "declarative_debugger.m"
                  break;
#line 473 "declarative_debugger.m"
                case (MR_Integer) 1:
#line 466 "declarative_debugger.m"
                  {
#line 466 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66;
#line 467 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 467 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 467 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 467 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));

#line 467 "declarative_debugger.m"
                    {
#line 467 "declarative_debugger.m"
                      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 467 "declarative_debugger.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 0) = ((MR_Box) (mdb__declarative_debugger__V_85_85));
#line 467 "declarative_debugger.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 1) = ((MR_Box) (mdb__declarative_debugger__V_86_86));
#line 467 "declarative_debugger.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 2) = ((MR_Box) ((MR_Integer) 0));
#line 467 "declarative_debugger.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 3) = ((MR_Box) (mdb__declarative_debugger__V_88_88));
#line 467 "declarative_debugger.m"
                    }
#line 468 "declarative_debugger.m"
                    {
#line 468 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = mdb__declarative_oracle__oracle_response_undoable_1_p_0(mdb__declarative_debugger__TypeInfo_121_121, mdb__declarative_debugger__OracleResponse_21);
                    }
#line 468 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 469 "declarative_debugger.m"
                      {
#line 469 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__TypeInfo_122_122;

#line 469 "declarative_debugger.m"
                        {
#line 469 "declarative_debugger.m"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_122_122);
                        }
#line 469 "declarative_debugger.m"
                        {
#line 469 "declarative_debugger.m"
                          mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, &mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68);
                        }
#line 469 "declarative_debugger.m"
                      }
#line 468 "declarative_debugger.m"
                    else
#line 468 "declarative_debugger.m"
                      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66;
#line 466 "declarative_debugger.m"
                  }
#line 473 "declarative_debugger.m"
                  break;
#line 473 "declarative_debugger.m"
              }
#line 476 "declarative_debugger.m"
              mdb__declarative_debugger__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 0)));
#line 476 "declarative_debugger.m"
              mdb__declarative_debugger__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 1)));
#line 476 "declarative_debugger.m"
              mdb__declarative_debugger__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 2)));
#line 476 "declarative_debugger.m"
              mdb__declarative_debugger__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 3)));
#line 476 "declarative_debugger.m"
              {
#line 476 "declarative_debugger.m"
                mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 476 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 0) = ((MR_Box) (mdb__declarative_debugger__V_89_89));
#line 476 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_23));
#line 476 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 2) = ((MR_Box) (mdb__declarative_debugger__V_91_91));
#line 476 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 3) = ((MR_Box) (mdb__declarative_debugger__V_92_92));
#line 476 "declarative_debugger.m"
              }
#line 477 "declarative_debugger.m"
              {
#line 477 "declarative_debugger.m"
                mdb__declarative_debugger__handle_oracle_response_7_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__OracleResponse_21, mdb__declarative_debugger__DiagnoserResponse_12, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34);
              }
#line 451 "declarative_debugger.m"
            }
#line 444 "declarative_debugger.m"
            break;
#line 444 "declarative_debugger.m"
          case (MR_Integer) 3:
#line 444 "declarative_debugger.m"
#line 444 "declarative_debugger.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 0)))) {
#line 444 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 444 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 480 "declarative_debugger.m"
                {
#line 480 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__Node_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));
#line 480 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__Event_25;
#line 480 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__Seqno_26;
#line 480 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__CallPreceding_27;
#line 480 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__IdealDepth_29;
#line 482 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__ImplicitTreeInfo_28;
#line 482 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_54_54;

#line 481 "declarative_debugger.m"
                  {
#line 481 "declarative_debugger.m"
                    mdb__declarative_tree__edt_subtree_details_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__Node_24, &mdb__declarative_debugger__Event_25, &mdb__declarative_debugger__Seqno_26, &mdb__declarative_debugger__CallPreceding_27);
                  }
#line 482 "declarative_debugger.m"
                  mdb__declarative_debugger__V_54_54 = ((MR_Word) mdb__declarative_debugger__Store_9);
#line 482 "declarative_debugger.m"
                  {
#line 482 "declarative_debugger.m"
                    mdb__declarative_debugger__succeeded = mdb__declarative_tree__trace_implicit_tree_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__V_54_54, mdb__declarative_debugger__Node_24, &mdb__declarative_debugger__ImplicitTreeInfo_28);
                  }
#line 482 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 483 "declarative_debugger.m"
                    mdb__declarative_debugger__IdealDepth_29 = (MR_Integer) mdb__declarative_debugger__ImplicitTreeInfo_28;
#line 482 "declarative_debugger.m"
                  else
#line 485 "declarative_debugger.m"
                    {
#line 485 "declarative_debugger.m"
                      {
#line 485 "declarative_debugger.m"
                        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[5])));
#line 485 "declarative_debugger.m"
                        return;
                      }
#line 485 "declarative_debugger.m"
                    }
#line 488 "declarative_debugger.m"
                  {
#line 488 "declarative_debugger.m"
                    MR_Word base;
#line 488 "declarative_debugger.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 488 "declarative_debugger.m"
                    *mdb__declarative_debugger__DiagnoserResponse_12 = base;
#line 488 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 488 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_debugger__Event_25));
#line 488 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_debugger__Seqno_26));
#line 488 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(3), base, 3) = mdb__declarative_debugger__CallPreceding_27;
#line 488 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mdb__declarative_debugger__IdealDepth_29));
#line 488 "declarative_debugger.m"
                  }
#line 480 "declarative_debugger.m"
                  *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
#line 480 "declarative_debugger.m"
                }
#line 444 "declarative_debugger.m"
                break;
#line 444 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 491 "declarative_debugger.m"
                {
#line 491 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__Node_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));
#line 491 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__Event_77;
#line 491 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__Seqno_78;
#line 491 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_131_131;
#line 491 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_132_132;
#line 492 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_30_30;
#line 494 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_130_130;
#line 494 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_133_133;

#line 492 "declarative_debugger.m"
                  {
#line 492 "declarative_debugger.m"
                    mdb__declarative_tree__edt_subtree_details_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__Node_76, &mdb__declarative_debugger__Event_77, &mdb__declarative_debugger__Seqno_78, &mdb__declarative_debugger__V_30_30);
                  }
#line 494 "declarative_debugger.m"
                  mdb__declarative_debugger__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 494 "declarative_debugger.m"
                  mdb__declarative_debugger__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 494 "declarative_debugger.m"
                  mdb__declarative_debugger__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
#line 494 "declarative_debugger.m"
                  mdb__declarative_debugger__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 496 "declarative_debugger.m"
#line 496 "declarative_debugger.m"
                  switch (mdb__declarative_debugger__V_131_131) {
#line 496 "declarative_debugger.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 496 "declarative_debugger.m"
                    case (MR_Integer) 0:
#line 494 "declarative_debugger.m"
                      {
#line 495 "declarative_debugger.m"
                        {
#line 495 "declarative_debugger.m"
                          MR_Word base;
#line 495 "declarative_debugger.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 495 "declarative_debugger.m"
                          *mdb__declarative_debugger__DiagnoserResponse_12 = base;
#line 495 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 495 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_debugger__Event_77));
#line 495 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_debugger__Seqno_78));
#line 495 "declarative_debugger.m"
                        }
#line 494 "declarative_debugger.m"
                        *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
#line 494 "declarative_debugger.m"
                      }
#line 496 "declarative_debugger.m"
                      break;
#line 496 "declarative_debugger.m"
                    case (MR_Integer) 1:
#line 497 "declarative_debugger.m"
                      {
#line 497 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__Out_31;
#line 497 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__Response_32;
#line 501 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__TypeInfo_125_125;
#line 509 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__V_102_102;
#line 509 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__V_103_103;
#line 509 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__V_105_105;
#line 509 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__V_104_104;

#line 498 "declarative_debugger.m"
                        {
#line 498 "declarative_debugger.m"
                          mdb__declarative_debugger__Out_31 = mdb__declarative_oracle__get_user_output_stream_1_f_0(mdb__declarative_debugger__V_132_132);
                        }
#line 499 "declarative_debugger.m"
                        {
#line 499 "declarative_debugger.m"
                          mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_31, (MR_String) "All descendent calls are trusted.\nShall I continue searching in ancestor calls\?\n");
                        }
#line 501 "declarative_debugger.m"
                        {
#line 501 "declarative_debugger.m"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_125_125);
                        }
#line 501 "declarative_debugger.m"
                        {
#line 501 "declarative_debugger.m"
                          mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, &mdb__declarative_debugger__Response_32);
                        }
#line 504 "declarative_debugger.m"
#line 504 "declarative_debugger.m"
                        switch (mdb__declarative_debugger__Response_32) {
#line 504 "declarative_debugger.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 504 "declarative_debugger.m"
                          case (MR_Integer) 0:
#line 504 "declarative_debugger.m"
                            {
#line 505 "declarative_debugger.m"
                              {
#line 505 "declarative_debugger.m"
                                mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_31, (MR_String) "Diagnosis aborted.\n");
                              }
#line 506 "declarative_debugger.m"
                              *mdb__declarative_debugger__DiagnoserResponse_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 504 "declarative_debugger.m"
                            }
#line 504 "declarative_debugger.m"
                            break;
#line 504 "declarative_debugger.m"
                          case (MR_Integer) 1:
#line 503 "declarative_debugger.m"
                            {
#line 503 "declarative_debugger.m"
                              MR_Word base;
#line 503 "declarative_debugger.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 503 "declarative_debugger.m"
                              *mdb__declarative_debugger__DiagnoserResponse_12 = base;
#line 503 "declarative_debugger.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 503 "declarative_debugger.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_debugger__Event_77));
#line 503 "declarative_debugger.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_debugger__Seqno_78));
#line 503 "declarative_debugger.m"
                            }
#line 504 "declarative_debugger.m"
                            break;
#line 504 "declarative_debugger.m"
                        }
#line 509 "declarative_debugger.m"
                        mdb__declarative_debugger__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 509 "declarative_debugger.m"
                        mdb__declarative_debugger__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 509 "declarative_debugger.m"
                        mdb__declarative_debugger__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
#line 509 "declarative_debugger.m"
                        mdb__declarative_debugger__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 509 "declarative_debugger.m"
                        {
#line 509 "declarative_debugger.m"
                          MR_Word base;
#line 509 "declarative_debugger.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 509 "declarative_debugger.m"
                          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = base;
#line 509 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_102_102));
#line 509 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_103_103));
#line 509 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 0));
#line 509 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_105_105));
#line 509 "declarative_debugger.m"
                        }
#line 497 "declarative_debugger.m"
                      }
#line 496 "declarative_debugger.m"
                      break;
#line 496 "declarative_debugger.m"
                  }
#line 491 "declarative_debugger.m"
                }
#line 444 "declarative_debugger.m"
                break;
#line 444 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 512 "declarative_debugger.m"
                {
#line 512 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__TypeInfo_127_127;
#line 512 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__TypeInfo_129_129;
#line 512 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37;
#line 512 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_38_38;
#line 512 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__Question_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));
#line 512 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__Oracle0_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 512 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__Oracle_81;
#line 513 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 513 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
#line 513 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 515 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_109_109;
#line 515 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_111_111;
#line 515 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_112_112;
#line 515 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_110_110;

#line 514 "declarative_debugger.m"
                  {
#line 514 "declarative_debugger.m"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_127_127);
                  }
#line 11827 "mdb.declarative_debugger.c"
                  {
#line 11829 "mdb.declarative_debugger.c"
                    mdb__declarative_debugger__TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11831 "mdb.declarative_debugger.c"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_129_129, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 11833 "mdb.declarative_debugger.c"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_129_129, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_127_127));
#line 11835 "mdb.declarative_debugger.c"
                  }
#line 514 "declarative_debugger.m"
                  {
#line 514 "declarative_debugger.m"
                    mdb__declarative_oracle__revise_oracle_3_p_0(mdb__declarative_debugger__TypeInfo_129_129, mdb__declarative_debugger__Question_79, mdb__declarative_debugger__Oracle0_80, &mdb__declarative_debugger__Oracle_81);
                  }
#line 515 "declarative_debugger.m"
                  mdb__declarative_debugger__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 515 "declarative_debugger.m"
                  mdb__declarative_debugger__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 515 "declarative_debugger.m"
                  mdb__declarative_debugger__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
#line 515 "declarative_debugger.m"
                  mdb__declarative_debugger__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 515 "declarative_debugger.m"
                  {
#line 515 "declarative_debugger.m"
                    mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 515 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 0) = ((MR_Box) (mdb__declarative_debugger__V_109_109));
#line 515 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_81));
#line 515 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 2) = ((MR_Box) (mdb__declarative_debugger__V_111_111));
#line 515 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 3) = ((MR_Box) (mdb__declarative_debugger__V_112_112));
#line 515 "declarative_debugger.m"
                  }
#line 517 "declarative_debugger.m"
                  {
#line 517 "declarative_debugger.m"
                    mdb__declarative_debugger__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 517 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(2), mdb__declarative_debugger__V_38_38, 0) = ((MR_Box) (mdb__declarative_debugger__Question_79));
#line 517 "declarative_debugger.m"
                  }
#line 516 "declarative_debugger.m"
                  /* direct tailcall eliminated */
#line 516 "declarative_debugger.m"
                  {
#line 516 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__AnalyserResponse__tmp_copy_10 = mdb__declarative_debugger__V_38_38;
#line 516 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0__tmp_copy_33 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37;

#line 516 "declarative_debugger.m"
                    mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0__tmp_copy_33;
#line 516 "declarative_debugger.m"
                    mdb__declarative_debugger__MaybeOrigin_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 516 "declarative_debugger.m"
                    mdb__declarative_debugger__AnalyserResponse_10 = mdb__declarative_debugger__AnalyserResponse__tmp_copy_10;
#line 516 "declarative_debugger.m"
                  }
#line 516 "declarative_debugger.m"
                  continue;
#line 512 "declarative_debugger.m"
                }
#line 444 "declarative_debugger.m"
                break;
#line 444 "declarative_debugger.m"
            }
#line 444 "declarative_debugger.m"
            break;
#line 444 "declarative_debugger.m"
        }
#line 444 "declarative_debugger.m"
      }
#line 444 "declarative_debugger.m"
      break;
#line 444 "declarative_debugger.m"
    }
#line 436 "declarative_debugger.m"
}

#line 422 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_2_6_p_0(
#line 422 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33,
#line 422 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_7,
#line 422 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__AnalysisType_8,
#line 422 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_9,
#line 422 "declarative_debugger.m"
  MR_Tuple * mdb__declarative_debugger__HeadVar__4_4)
#line 422 "declarative_debugger.m"
{
#line 427 "declarative_debugger.m"
  {
#line 427 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_35_35;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_37_37;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_39_39;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_41_41;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Response_10;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Diagnoser_11;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 0)));
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__AnalyserResponse_14;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser_15;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Diagnoser1_16;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__MaybeOrigin_17;
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_20_20 = ((MR_Word) mdb__declarative_debugger__Store_7);
#line 427 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 1)));
#line 428 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 2)));
#line 428 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 3)));
#line 429 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__conv1_AnalyserResponse_14;
#line 429 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__conv0_Analyser_15;
#line 431 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_30_30;
#line 431 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_31_31;
#line 431 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_32_32;
#line 431 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_29_29;

#line 429 "declarative_debugger.m"
    {
#line 429 "declarative_debugger.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_35_35);
    }
#line 11979 "mdb.declarative_debugger.c"
    {
#line 11981 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11983 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_37_37, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 11985 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_37_37, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_35_35));
#line 11987 "mdb.declarative_debugger.c"
    }
#line 429 "declarative_debugger.m"
    {
#line 429 "declarative_debugger.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_39_39);
    }
#line 11994 "mdb.declarative_debugger.c"
    {
#line 11996 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11998 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_41_41, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 12000 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_41_41, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_39_39));
#line 12002 "mdb.declarative_debugger.c"
    }
#line 12004 "mdb.declarative_debugger.c"
    {
#line 12006 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 12008 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 12010 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33));
#line 12012 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_37_37));
#line 12014 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_41_41));
#line 12016 "mdb.declarative_debugger.c"
    }
#line 429 "declarative_debugger.m"
    {
#line 429 "declarative_debugger.m"
      mdb__declarative_analyser__start_or_resume_analysis_6_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, ((MR_Box) (mdb__declarative_debugger__V_20_20)), mdb__declarative_debugger__V_23_23, (MR_Word) mdb__declarative_debugger__AnalysisType_8, &mdb__declarative_debugger__conv1_AnalyserResponse_14, (MR_Word) mdb__declarative_debugger__Analyser0_13, &mdb__declarative_debugger__conv0_Analyser_15);
    }
#line 429 "declarative_debugger.m"
    mdb__declarative_debugger__AnalyserResponse_14 = (MR_Word) mdb__declarative_debugger__conv1_AnalyserResponse_14;
#line 429 "declarative_debugger.m"
    mdb__declarative_debugger__Analyser_15 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_15;
#line 431 "declarative_debugger.m"
    mdb__declarative_debugger__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 0)));
#line 431 "declarative_debugger.m"
    mdb__declarative_debugger__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 1)));
#line 431 "declarative_debugger.m"
    mdb__declarative_debugger__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 2)));
#line 431 "declarative_debugger.m"
    mdb__declarative_debugger__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 3)));
#line 431 "declarative_debugger.m"
    {
#line 431 "declarative_debugger.m"
      mdb__declarative_debugger__Diagnoser1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 431 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_15));
#line 431 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 1) = ((MR_Box) (mdb__declarative_debugger__V_30_30));
#line 431 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 2) = ((MR_Box) (mdb__declarative_debugger__V_31_31));
#line 431 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 3) = ((MR_Box) (mdb__declarative_debugger__V_32_32));
#line 431 "declarative_debugger.m"
    }
#line 432 "declarative_debugger.m"
    {
#line 432 "declarative_debugger.m"
      mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_41_41, mdb__declarative_debugger__Analyser_15, &mdb__declarative_debugger__MaybeOrigin_17);
    }
#line 433 "declarative_debugger.m"
    {
#line 433 "declarative_debugger.m"
      mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33, mdb__declarative_debugger__Store_7, mdb__declarative_debugger__AnalyserResponse_14, mdb__declarative_debugger__MaybeOrigin_17, &mdb__declarative_debugger__Response_10, mdb__declarative_debugger__Diagnoser1_16, &mdb__declarative_debugger__Diagnoser_11);
    }
#line 427 "declarative_debugger.m"
    {
#line 427 "declarative_debugger.m"
      MR_Tuple base;
#line 427 "declarative_debugger.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 427 "declarative_debugger.m"
      *mdb__declarative_debugger__HeadVar__4_4 = base;
#line 427 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Response_10));
#line 427 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Diagnoser_11));
#line 427 "declarative_debugger.m"
    }
#line 427 "declarative_debugger.m"
  }
#line 422 "declarative_debugger.m"
}

#line 306 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger__unravel_decl_atom_3_p_0(
#line 306 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__DeclAtom_4,
#line 306 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__TraceAtom_5,
#line 306 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__MaybeIoActions_6)
#line 306 "declarative_debugger.m"
{
#line 347 "declarative_debugger.m"
  {
#line 347 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 347 "declarative_debugger.m"
    if (((MR_tag((MR_Word) mdb__declarative_debugger__DeclAtom_4)) == (MR_mktag((MR_Integer) 0))))
#line 350 "declarative_debugger.m"
      {
#line 350 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_7_7 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__DeclAtom_4), (MR_Integer) 0);

#line 350 "declarative_debugger.m"
        *mdb__declarative_debugger__TraceAtom_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_7_7, (MR_Integer) 0)));
#line 350 "declarative_debugger.m"
        *mdb__declarative_debugger__MaybeIoActions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_7_7, (MR_Integer) 1)));
#line 350 "declarative_debugger.m"
      }
#line 347 "declarative_debugger.m"
    else
#line 347 "declarative_debugger.m"
      {
#line 347 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__DeclAtom_4, (MR_Integer) 0)));

#line 347 "declarative_debugger.m"
        *mdb__declarative_debugger__TraceAtom_5 = (MR_Word) mdb__declarative_debugger__V_8_8;
#line 348 "declarative_debugger.m"
        *mdb__declarative_debugger__MaybeIoActions_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 347 "declarative_debugger.m"
      }
#line 347 "declarative_debugger.m"
  }
#line 306 "declarative_debugger.m"
}

#line 407 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0_1(
#line 407 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__closure_arg,
#line 407 "declarative_debugger.m"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 407 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 407 "declarative_debugger.m"
  MR_Box * mdb__declarative_debugger__wrapper_arg_3)
#line 407 "declarative_debugger.m"
{
#line 407 "declarative_debugger.m"
  {
#line 407 "declarative_debugger.m"
    MR_Box mdb__declarative_debugger__closure = mdb__declarative_debugger__closure_arg;
#line 407 "declarative_debugger.m"
    MR_Tuple mdb__declarative_debugger__conv0_HeadVar__4_4;

#line 407 "declarative_debugger.m"
    {
#line 407 "declarative_debugger.m"
      mdb__declarative_debugger__diagnosis_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 4)), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 6))), &mdb__declarative_debugger__conv0_HeadVar__4_4);
    }
#line 407 "declarative_debugger.m"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__4_4));
#line 407 "declarative_debugger.m"
  }
#line 407 "declarative_debugger.m"
}

#line 299 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0(
#line 299 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46,
#line 299 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_10,
#line 299 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__AnalysisType_11,
#line 299 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 299 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20,
#line 299 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21,
#line 299 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_22,
#line 299 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_23)
#line 299 "declarative_debugger.m"
{
#line 403 "declarative_debugger.m"
  {
#line 403 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 403 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_51_51;
#line 403 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_53_53;
#line 403 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_54_54;
#line 403 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_56_56;
#line 403 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_58_58;
#line 403 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_16;
#line 403 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Result_17;
#line 403 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 1)));
#line 403 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27;
#line 403 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_28_28;
#line 403 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_35_35;
#line 404 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 0)));
#line 404 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 2)));
#line 404 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 3)));
#line 406 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_39_39;
#line 406 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_41_41;
#line 406 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_42_42;
#line 406 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_40_40;
#line 419 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_43_43;
#line 419 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_44_44;
#line 419 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_45_45;

#line 404 "declarative_debugger.m"
    {
#line 404 "declarative_debugger.m"
      mdb__declarative_oracle__set_browser_state_3_p_0(mdb__declarative_debugger__STATE_VARIABLE_Browser_0_22, mdb__declarative_debugger__V_26_26, &mdb__declarative_debugger__Oracle_16);
    }
#line 406 "declarative_debugger.m"
    mdb__declarative_debugger__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 0)));
#line 406 "declarative_debugger.m"
    mdb__declarative_debugger__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 1)));
#line 406 "declarative_debugger.m"
    mdb__declarative_debugger__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 2)));
#line 406 "declarative_debugger.m"
    mdb__declarative_debugger__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 3)));
#line 406 "declarative_debugger.m"
    {
#line 406 "declarative_debugger.m"
      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 406 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 0) = ((MR_Box) (mdb__declarative_debugger__V_39_39));
#line 406 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_16));
#line 406 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 2) = ((MR_Box) (mdb__declarative_debugger__V_41_41));
#line 406 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 3) = ((MR_Box) (mdb__declarative_debugger__V_42_42));
#line 406 "declarative_debugger.m"
    }
#line 407 "declarative_debugger.m"
    {
#line 407 "declarative_debugger.m"
      mdb__declarative_debugger__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 407 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 0) = ((MR_Box) (&mdb__declarative_debugger_scalar_common_5[0]));
#line 407 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 1) = ((MR_Box) (mdb__declarative_debugger__diagnosis_9_p_0_1));
#line 407 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 407 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 3) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46));
#line 407 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 4) = mdb__declarative_debugger__Store_10;
#line 407 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 5) = ((MR_Box) (mdb__declarative_debugger__AnalysisType_11));
#line 407 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 6) = ((MR_Box) (mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27));
#line 407 "declarative_debugger.m"
    }
#line 407 "declarative_debugger.m"
    {
#line 407 "declarative_debugger.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_51_51);
    }
#line 12277 "mdb.declarative_debugger.c"
    {
#line 12279 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12281 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_53_53, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1));
#line 12283 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_53_53, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_51_51));
#line 12285 "mdb.declarative_debugger.c"
    }
#line 407 "declarative_debugger.m"
    {
#line 407 "declarative_debugger.m"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_54_54);
    }
#line 12292 "mdb.declarative_debugger.c"
    {
#line 12294 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12296 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_56_56, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1));
#line 12298 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_56_56, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_54_54));
#line 12300 "mdb.declarative_debugger.c"
    }
#line 12302 "mdb.declarative_debugger.c"
    {
#line 12304 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 12306 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
#line 12308 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 1) = ((MR_Box) ((MR_Integer) 2));
#line 12310 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_53_53));
#line 12312 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_56_56));
#line 12314 "mdb.declarative_debugger.c"
    }
#line 407 "declarative_debugger.m"
    {
#line 407 "declarative_debugger.m"
      mercury__exception__try_io_4_p_1(mdb__declarative_debugger__TypeInfo_58_58, mdb__declarative_debugger__V_28_28, &mdb__declarative_debugger__Result_17);
    }
#line 410 "declarative_debugger.m"
    if (((MR_tag((MR_Word) mdb__declarative_debugger__Result_17)) == (MR_mktag((MR_Integer) 2))))
#line 411 "declarative_debugger.m"
      {
#line 411 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__UnivException_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__Result_17, (MR_Integer) 0)));
#line 412 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__DiagnoserException_19;
#line 412 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__conv1_DiagnoserException_19;

#line 412 "declarative_debugger.m"
        {
#line 412 "declarative_debugger.m"
          mdb__declarative_debugger__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, mdb__declarative_debugger__UnivException_18, &mdb__declarative_debugger__conv1_DiagnoserException_19);
        }
#line 412 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 412 "declarative_debugger.m"
          {
#line 412 "declarative_debugger.m"
            mdb__declarative_debugger__DiagnoserException_19 = ((MR_Word) mdb__declarative_debugger__conv1_DiagnoserException_19);
#line 412 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = MR_TRUE;
#line 412 "declarative_debugger.m"
          }
#line 412 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 413 "declarative_debugger.m"
          {
#line 413 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__TypeInfo_60_60;

#line 413 "declarative_debugger.m"
            {
#line 413 "declarative_debugger.m"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_60_60);
            }
#line 413 "declarative_debugger.m"
            {
#line 413 "declarative_debugger.m"
              mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(mdb__declarative_debugger__TypeInfo_60_60, mdb__declarative_debugger__DiagnoserException_19, mdb__declarative_debugger__Response_12, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21);
            }
#line 413 "declarative_debugger.m"
          }
#line 412 "declarative_debugger.m"
        else
#line 416 "declarative_debugger.m"
          {
#line 416 "declarative_debugger.m"
            mercury__exception__rethrow_1_p_0(mdb__declarative_debugger__TypeInfo_58_58, mdb__declarative_debugger__Result_17);
#line 416 "declarative_debugger.m"
            return;
          }
#line 411 "declarative_debugger.m"
      }
#line 410 "declarative_debugger.m"
    else
#line 409 "declarative_debugger.m"
      {
#line 409 "declarative_debugger.m"
        MR_Tuple mdb__declarative_debugger__V_32_32 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Result_17, (MR_Integer) 0)));

#line 409 "declarative_debugger.m"
        *mdb__declarative_debugger__Response_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_32_32, (MR_Integer) 0)));
#line 409 "declarative_debugger.m"
        *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_32_32, (MR_Integer) 1)));
#line 409 "declarative_debugger.m"
      }
#line 419 "declarative_debugger.m"
    mdb__declarative_debugger__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 0)));
#line 419 "declarative_debugger.m"
    mdb__declarative_debugger__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 1)));
#line 419 "declarative_debugger.m"
    mdb__declarative_debugger__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 2)));
#line 419 "declarative_debugger.m"
    mdb__declarative_debugger__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 3)));
#line 419 "declarative_debugger.m"
    {
#line 419 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Browser_23 = mdb__declarative_oracle__get_browser_state_1_f_0(mdb__declarative_debugger__V_35_35);
    }
#line 403 "declarative_debugger.m"
  }
#line 299 "declarative_debugger.m"
}

#line 295 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_5_p_0(
#line 295 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_15,
#line 295 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__InStr_6,
#line 295 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OutStr_7,
#line 295 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Browser_8,
#line 295 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HelpSystem_9,
#line 295 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10)
#line 295 "declarative_debugger.m"
{
#line 383 "declarative_debugger.m"
  {
#line 383 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_17_17;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser_11;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_12;
#line 384 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__conv0_Analyser_11;

#line 12438 "mdb.declarative_debugger.c"
    {
#line 12440 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12442 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_17_17, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 12444 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_17_17, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_15));
#line 12446 "mdb.declarative_debugger.c"
    }
#line 384 "declarative_debugger.m"
    {
#line 384 "declarative_debugger.m"
      mdb__declarative_analyser__analyser_state_init_1_p_0(mdb__declarative_debugger__TypeInfo_17_17, &mdb__declarative_debugger__conv0_Analyser_11);
    }
#line 384 "declarative_debugger.m"
    mdb__declarative_debugger__Analyser_11 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_11;
#line 385 "declarative_debugger.m"
    {
#line 385 "declarative_debugger.m"
      mdb__declarative_oracle__oracle_state_init_5_p_0(mdb__declarative_debugger__InStr_6, mdb__declarative_debugger__OutStr_7, mdb__declarative_debugger__Browser_8, mdb__declarative_debugger__HelpSystem_9, &mdb__declarative_debugger__Oracle_12);
    }
#line 386 "declarative_debugger.m"
    {
#line 386 "declarative_debugger.m"
      MR_Word base;
#line 386 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 386 "declarative_debugger.m"
      *mdb__declarative_debugger__Diagnoser_10 = base;
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_11));
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_12));
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 386 "declarative_debugger.m"
    }
#line 383 "declarative_debugger.m"
  }
#line 295 "declarative_debugger.m"
}

#line 226 "declarative_debugger.m"
MR_Word MR_CALL 
mdb__declarative_debugger__get_decl_question_atom_1_f_0(
#line 226 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_16_16,
#line 226 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
#line 226 "declarative_debugger.m"
{
#line 357 "declarative_debugger.m"
  {
#line 357 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 357 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Atom_2;

#line 357 "declarative_debugger.m"
#line 357 "declarative_debugger.m"
    switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 357 "declarative_debugger.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 357 "declarative_debugger.m"
      case (MR_Integer) 0:
#line 357 "declarative_debugger.m"
        {
#line 357 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 357 "declarative_debugger.m"
          MR_Box mdb__declarative_debugger__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 357 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 357 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_6_6;

#line 357 "declarative_debugger.m"
          mdb__declarative_debugger__Atom_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_7_7, (MR_Integer) 0)));
#line 357 "declarative_debugger.m"
          mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_7_7, (MR_Integer) 1)));
#line 357 "declarative_debugger.m"
        }
#line 357 "declarative_debugger.m"
        break;
#line 357 "declarative_debugger.m"
      case (MR_Integer) 1:
#line 358 "declarative_debugger.m"
        {
#line 358 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 358 "declarative_debugger.m"
          MR_Box mdb__declarative_debugger__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 358 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));

#line 358 "declarative_debugger.m"
          mdb__declarative_debugger__Atom_2 = (MR_Word) mdb__declarative_debugger__V_11_11;
#line 358 "declarative_debugger.m"
        }
#line 357 "declarative_debugger.m"
        break;
#line 357 "declarative_debugger.m"
      case (MR_Integer) 2:
#line 359 "declarative_debugger.m"
        {
#line 359 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 359 "declarative_debugger.m"
          MR_Box mdb__declarative_debugger__V_12_12 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 359 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));

#line 359 "declarative_debugger.m"
          mdb__declarative_debugger__Atom_2 = (MR_Word) mdb__declarative_debugger__V_15_15;
#line 359 "declarative_debugger.m"
        }
#line 357 "declarative_debugger.m"
        break;
#line 357 "declarative_debugger.m"
    }
#line 357 "declarative_debugger.m"
    return mdb__declarative_debugger__Atom_2;
#line 357 "declarative_debugger.m"
  }
#line 226 "declarative_debugger.m"
}

#line 222 "declarative_debugger.m"
MR_Box MR_CALL 
mdb__declarative_debugger__get_decl_question_node_1_f_0(
#line 222 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_12,
#line 222 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
#line 222 "declarative_debugger.m"
{
#line 353 "declarative_debugger.m"
  {
#line 353 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 353 "declarative_debugger.m"
    MR_Box mdb__declarative_debugger__Node_2;

#line 353 "declarative_debugger.m"
#line 353 "declarative_debugger.m"
    switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 353 "declarative_debugger.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 353 "declarative_debugger.m"
      case (MR_Integer) 0:
#line 353 "declarative_debugger.m"
        {
#line 353 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_4_4;
#line 353 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_5_5;

#line 353 "declarative_debugger.m"
          mdb__declarative_debugger__Node_2 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 353 "declarative_debugger.m"
          mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 353 "declarative_debugger.m"
          mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 353 "declarative_debugger.m"
        }
#line 353 "declarative_debugger.m"
        break;
#line 353 "declarative_debugger.m"
      case (MR_Integer) 1:
#line 354 "declarative_debugger.m"
        {
#line 354 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_7_7;
#line 354 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_8_8;

#line 354 "declarative_debugger.m"
          mdb__declarative_debugger__Node_2 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 354 "declarative_debugger.m"
          mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 354 "declarative_debugger.m"
          mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 354 "declarative_debugger.m"
        }
#line 353 "declarative_debugger.m"
        break;
#line 353 "declarative_debugger.m"
      case (MR_Integer) 2:
#line 355 "declarative_debugger.m"
        {
#line 355 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_10_10;
#line 355 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_11_11;

#line 355 "declarative_debugger.m"
          mdb__declarative_debugger__Node_2 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 355 "declarative_debugger.m"
          mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 355 "declarative_debugger.m"
          mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 355 "declarative_debugger.m"
        }
#line 353 "declarative_debugger.m"
        break;
#line 353 "declarative_debugger.m"
    }
#line 353 "declarative_debugger.m"
    return mdb__declarative_debugger__Node_2;
#line 353 "declarative_debugger.m"
  }
#line 222 "declarative_debugger.m"
}

void mercury__mdb__declarative_debugger__init(void)
{
}

void mercury__mdb__declarative_debugger__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_bug_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_confirmation_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_contour_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_e_bug_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_evidence_1);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_exception_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_i_bug_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_position_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0);
	MR_register_type_ctor_info(&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_some_decl_atom_0);
}

void mercury__mdb__declarative_debugger__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.declarative_debugger. */
