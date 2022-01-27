/*
** Automatically generated from `declarative_debugger.m'
** by the Mercury compiler,
** version DEV
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

#line 501 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(
#line 501 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser_5,
#line 501 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_6);

#line 373 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
#line 373 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 373 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);

#line 368 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
#line 368 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
#line 368 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5);

#line 971 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__debug_origin_3_p_0(
#line 971 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Flag_1);

#line 934 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__write_origin_4_p_0(
#line 934 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38,
#line 934 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 934 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Origin_6);

#line 878 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(
#line 878 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_108,
#line 878 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 878 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_2,
#line 878 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3,
#line 878 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4);

#line 866 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__get_trusted_list_3_p_0(
#line 866 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser_4,
#line 866 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__MDBCommandFormat_5,
#line 866 "declarative_debugger.m"
  MR_String * mdb__declarative_debugger__List_6);

#line 849 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__remove_trusted_3_p_0(
#line 849 "declarative_debugger.m"
  MR_Integer mdb__declarative_debugger__N_4,
#line 849 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 849 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);

#line 837 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__trust_standard_library_2_p_0(
#line 837 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5,
#line 837 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6);

#line 825 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(
#line 825 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__ProcLayout_4,
#line 825 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 825 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);

#line 811 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__add_trusted_module_3_p_0(
#line 811 "declarative_debugger.m"
  MR_String mdb__declarative_debugger__ModuleName_4,
#line 811 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_5,
#line 811 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_6);

#line 798 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_supertree_3_p_0(
#line 798 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 798 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_4,
#line 798 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_5);

#line 787 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_subtree_5_p_0(
#line 787 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 787 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_6,
#line 787 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_7,
#line 787 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__CallPreceding_8,
#line 787 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__MaxDepth_9);

#line 779 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0(
#line 779 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1);

#line 771 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_symptom_found_2_p_0(
#line 771 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 771 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3);

#line 763 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_bug_found_2_p_0(
#line 763 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 763 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3);

#line 747 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_resume_previous_8_p_0(
#line 747 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_9,
#line 747 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_10,
#line 747 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_14,
#line 747 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_15,
#line 747 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16,
#line 747 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_17);

#line 731 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_new_tree_9_p_0(
#line 731 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_10,
#line 731 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Node_11,
#line 731 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 731 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_16,
#line 731 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_17,
#line 731 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18,
#line 731 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_19);

#line 718 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0(void);

#line 709 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__divide_and_query_search_mode_0_f_0(void);

#line 701 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__top_down_search_mode_0_f_0(void);

#line 688 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__reset_knowledge_base_2_p_0(
#line 688 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6,
#line 688 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7);

#line 673 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__set_fallback_search_mode_4_p_0(
#line 673 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_5,
#line 673 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__SearchMode_6,
#line 673 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10,
#line 673 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11);

#line 661 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0(
#line 661 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Testing_4,
#line 661 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8,
#line 661 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9);

#line 650 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnoser_session_init_2_p_0(
#line 650 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
#line 650 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5);

#line 636 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_store_5_p_0(
#line 636 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__InStr_6,
#line 636 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OutStr_7,
#line 636 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Browser_8,
#line 636 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HelpSystem_9,
#line 636 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10);

#line 619 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__overrule_bug_6_p_0(
#line 619 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28,
#line 619 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_7,
#line 619 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_8,
#line 619 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_9,
#line 619 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10);

#line 598 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__confirm_bug_8_p_0(
#line 598 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_35,
#line 598 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34,
#line 598 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_9,
#line 598 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Bug_10,
#line 598 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Evidence_11,
#line 598 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 598 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19,
#line 598 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20);

#line 528 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_oracle_response_7_p_0(
#line 528 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108,
#line 528 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_8,
#line 528 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OracleResponse_9,
#line 528 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_10,
#line 528 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27,
#line 528 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);

#line 416 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_analyser_response_8_p_0(
#line 416 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113,
#line 416 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_9,
#line 416 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__AnalyserResponse_10,
#line 416 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__MaybeOrigin_11,
#line 416 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_12,
#line 416 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33,
#line 416 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34);

#line 402 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_2_6_p_0(
#line 402 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33,
#line 402 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_7,
#line 402 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__AnalysisType_8,
#line 402 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_9,
#line 402 "declarative_debugger.m"
  MR_Tuple * mdb__declarative_debugger__HeadVar__4_4);

#line 387 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0_1(
#line 387 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__closure_arg,
#line 387 "declarative_debugger.m"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 387 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 387 "declarative_debugger.m"
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



#include "mdb.declarative_debugger.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#line 954 "declarative_debugger.m"


/*
** The declarative debugger will print diagnostic information about the origins
** computed by dependency tracking if this flag has a positive value.
*/

int MR_DD_debug_origin = 0;


#line 640 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_state_init(
#line 640 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__InStr_6,
#line 640 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OutStr_7,
#line 640 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Browser_8,
#line 640 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HelpSystem_9,
#line 640 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10)
#line 640 "declarative_debugger.m"
{
#line 640 "declarative_debugger.m"
	mdb__declarative_debugger__diagnoser_state_init_store_5_p_0((MR_Word) mdb__declarative_debugger__InStr_6, (MR_Word) mdb__declarative_debugger__OutStr_7, (MR_Word) mdb__declarative_debugger__Browser_8, (MR_Word) mdb__declarative_debugger__HelpSystem_9, (MR_Word *) mdb__declarative_debugger__Diagnoser_10);
}

#line 656 "declarative_debugger.m"
void 
MR_DD_decl_session_init(
#line 656 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
#line 656 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5)
#line 656 "declarative_debugger.m"
{
#line 656 "declarative_debugger.m"
	mdb__declarative_debugger__diagnoser_session_init_2_p_0((MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5);
}

#line 665 "declarative_debugger.m"
void 
MR_DD_decl_set_diagnoser_testing_flag(
#line 665 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Testing_4,
#line 665 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8,
#line 665 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9)
#line 665 "declarative_debugger.m"
{
#line 665 "declarative_debugger.m"
	mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0((MR_Word) mdb__declarative_debugger__Testing_4, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9);
}

#line 678 "declarative_debugger.m"
void 
MR_DD_decl_set_fallback_search_mode(
#line 678 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_5,
#line 678 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__SearchMode_6,
#line 678 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10,
#line 678 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11)
#line 678 "declarative_debugger.m"
{
#line 678 "declarative_debugger.m"
	mdb__declarative_debugger__set_fallback_search_mode_4_p_0((MR_Word) mdb__declarative_debugger__Store_5, (MR_Word) mdb__declarative_debugger__SearchMode_6, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11);
}

#line 692 "declarative_debugger.m"
void 
MR_DD_decl_reset_knowledge_base(
#line 692 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6,
#line 692 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7)
#line 692 "declarative_debugger.m"
{
#line 692 "declarative_debugger.m"
	mdb__declarative_debugger__reset_knowledge_base_2_p_0((MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7);
}

#line 705 "declarative_debugger.m"
MR_Word 
MR_DD_decl_top_down_search_mode(void)
#line 705 "declarative_debugger.m"
{
#line 705 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__top_down_search_mode_0_f_0();
	return ret_value;
}

#line 714 "declarative_debugger.m"
MR_Word 
MR_DD_decl_divide_and_query_search_mode(void)
#line 714 "declarative_debugger.m"
{
#line 714 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__divide_and_query_search_mode_0_f_0();
	return ret_value;
}

#line 724 "declarative_debugger.m"
MR_Word 
MR_DD_decl_suspicion_divide_and_query_search_mode(void)
#line 724 "declarative_debugger.m"
{
#line 724 "declarative_debugger.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0();
	return ret_value;
}

#line 737 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_new_tree(
#line 737 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_10,
#line 737 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Node_11,
#line 737 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 737 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_16,
#line 737 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_17,
#line 737 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18,
#line 737 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_19)
#line 737 "declarative_debugger.m"
{
#line 737 "declarative_debugger.m"
	mdb__declarative_debugger__diagnosis_new_tree_9_p_0((MR_Word) mdb__declarative_debugger__Store_10, (MR_Word) mdb__declarative_debugger__Node_11, (MR_Word *) mdb__declarative_debugger__Response_12, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_State_0_16, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_State_17, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Browser_19);
}

#line 753 "declarative_debugger.m"
void 
MR_DD_decl_diagnosis_resume_previous(
#line 753 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_9,
#line 753 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_10,
#line 753 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_14,
#line 753 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_15,
#line 753 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16,
#line 753 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_17)
#line 753 "declarative_debugger.m"
{
#line 753 "declarative_debugger.m"
	mdb__declarative_debugger__diagnosis_resume_previous_8_p_0((MR_Word) mdb__declarative_debugger__Store_9, (MR_Word *) mdb__declarative_debugger__Response_10, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_State_0_14, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_State_15, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Browser_17);
}

#line 766 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_bug_found(
#line 766 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 766 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3)
#line 766 "declarative_debugger.m"
{
#line 766 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_bug_found_2_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_3);
	return ret_value;
}

#line 774 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_symptom_found(
#line 774 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 774 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3)
#line 774 "declarative_debugger.m"
{
#line 774 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_symptom_found_2_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_3);
	return ret_value;
}

#line 782 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_no_bug_found(
#line 782 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
#line 782 "declarative_debugger.m"
{
#line 782 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1);
	return ret_value;
}

#line 791 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_require_subtree(
#line 791 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 791 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_6,
#line 791 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_7,
#line 791 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__CallPreceding_8,
#line 791 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__MaxDepth_9)
#line 791 "declarative_debugger.m"
{
#line 791 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_require_subtree_5_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_6, (MR_Integer *) mdb__declarative_debugger__SeqNo_7, (MR_Word *) mdb__declarative_debugger__CallPreceding_8, (MR_Integer *) mdb__declarative_debugger__MaxDepth_9);
	return ret_value;
}

#line 801 "declarative_debugger.m"
MR_bool 
MR_DD_diagnoser_require_supertree(
#line 801 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 801 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_4,
#line 801 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_5)
#line 801 "declarative_debugger.m"
{
#line 801 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__diagnoser_require_supertree_3_p_0((MR_Word) mdb__declarative_debugger__HeadVar__1_1, (MR_Integer *) mdb__declarative_debugger__Event_4, (MR_Integer *) mdb__declarative_debugger__SeqNo_5);
	return ret_value;
}

#line 814 "declarative_debugger.m"
void 
MR_DD_decl_add_trusted_module(
#line 814 "declarative_debugger.m"
  MR_String mdb__declarative_debugger__ModuleName_4,
#line 814 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_5,
#line 814 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_6)
#line 814 "declarative_debugger.m"
{
#line 814 "declarative_debugger.m"
	mdb__declarative_debugger__add_trusted_module_3_p_0((MR_String) mdb__declarative_debugger__ModuleName_4, (MR_Word) mdb__declarative_debugger__Diagnoser0_5, (MR_Word *) mdb__declarative_debugger__Diagnoser_6);
}

#line 829 "declarative_debugger.m"
void 
MR_DD_decl_add_trusted_pred_or_func(
#line 829 "declarative_debugger.m"
  const MR_ProcLayout * mdb__declarative_debugger__ProcLayout_4,
#line 829 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 829 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 829 "declarative_debugger.m"
{
#line 829 "declarative_debugger.m"
	MR_Box mdb__declarative_debugger__boxed_ProcLayout_4;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_ProcLayout *, mdb__declarative_debugger__ProcLayout_4, mdb__declarative_debugger__boxed_ProcLayout_4);
	mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(mdb__declarative_debugger__boxed_ProcLayout_4, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);
}

#line 840 "declarative_debugger.m"
void 
MR_DD_decl_trust_standard_library(
#line 840 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5,
#line 840 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6)
#line 840 "declarative_debugger.m"
{
#line 840 "declarative_debugger.m"
	mdb__declarative_debugger__trust_standard_library_2_p_0((MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6);
}

#line 852 "declarative_debugger.m"
MR_bool 
MR_DD_decl_remove_trusted(
#line 852 "declarative_debugger.m"
  MR_Integer mdb__declarative_debugger__N_4,
#line 852 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 852 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 852 "declarative_debugger.m"
{
#line 852 "declarative_debugger.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_debugger__remove_trusted_3_p_0((MR_Integer) mdb__declarative_debugger__N_4, (MR_Word) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Word *) mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8);
	return ret_value;
}

#line 869 "declarative_debugger.m"
void 
MR_DD_decl_get_trusted_list(
#line 869 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser_4,
#line 869 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__MDBCommandFormat_5,
#line 869 "declarative_debugger.m"
  MR_String * mdb__declarative_debugger__List_6)
#line 869 "declarative_debugger.m"
{
#line 869 "declarative_debugger.m"
	mdb__declarative_debugger__get_trusted_list_3_p_0((MR_Word) mdb__declarative_debugger__Diagnoser_4, (MR_Word) mdb__declarative_debugger__MDBCommandFormat_5, (MR_String *) mdb__declarative_debugger__List_6);
}


#line 1602 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_2 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1610 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analysis_type_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_2 = {
  &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analysis_type_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_2
  }
};

#line 1618 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1626 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1634 "mdb.declarative_debugger.c"
static const MR_VA_PseudoTypeInfo_Struct2 mdb__declarative_debugger____vpti_tuple_2__pseudo_mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_response_1__pseudo_2,
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_2
  }
};

#line 1644 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
};

#line 1650 "mdb.declarative_debugger.c"
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

#line 1665 "mdb.declarative_debugger.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1673 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_1[5] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_how_track_subterm_0,
  (MR_PseudoTypeInfo) &mdb__browser_info__mdb__browser_info__type_ctor_info_should_assert_invalid_0
};

#line 1682 "mdb.declarative_debugger.c"
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

#line 1711 "mdb.declarative_debugger.c"
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

#line 1726 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_2[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1731 "mdb.declarative_debugger.c"
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

#line 1746 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_answer_1_3[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1751 "mdb.declarative_debugger.c"
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

#line 1766 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_0
};

#line 1771 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_1
};

#line 1776 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_2
};

#line 1781 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_answer_1_3[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_3
};

#line 1786 "mdb.declarative_debugger.c"
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

#line 1810 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_answer_1[4] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_3,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_answer_1_0
};

#line 1818 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_answer_1[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1826 "mdb.declarative_debugger.c"
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

#line 1843 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_0[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_e_bug_0
};

#line 1848 "mdb.declarative_debugger.c"
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

#line 1863 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_bug_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_i_bug_0
};

#line 1868 "mdb.declarative_debugger.c"
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

#line 1883 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1
};

#line 1888 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_bug_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0
};

#line 1893 "mdb.declarative_debugger.c"
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

#line 1907 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_bug_0[2] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_bug_0_1
};

#line 1913 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_bug_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1919 "mdb.declarative_debugger.c"
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

#line 1936 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0 = {
  (MR_String) "confirm_bug",
  (MR_Integer) 0
};

#line 1942 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1 = {
  (MR_String) "overrule_bug",
  (MR_Integer) 1
};

#line 1948 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2 = {
  (MR_String) "abort_diagnosis",
  (MR_Integer) 2
};

#line 1954 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_confirmation_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2
};

#line 1961 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_confirmation_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_confirmation_0_1
};

#line 1968 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_confirmation_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

#line 1975 "mdb.declarative_debugger.c"
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

#line 1992 "mdb.declarative_debugger.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
  }
};

#line 2000 "mdb.declarative_debugger.c"
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

#line 2017 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_0[4] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2025 "mdb.declarative_debugger.c"
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

#line 2040 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_1[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2046 "mdb.declarative_debugger.c"
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

#line 2061 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_e_bug_0_2[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2068 "mdb.declarative_debugger.c"
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

#line 2083 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0
};

#line 2088 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1
};

#line 2093 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_e_bug_0_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2
};

#line 2098 "mdb.declarative_debugger.c"
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

#line 2117 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_e_bug_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_e_bug_0_2
};

#line 2124 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_e_bug_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2131 "mdb.declarative_debugger.c"
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

#line 2148 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2156 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__list__pti_list_1__pseudo_mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_decl_question_1__pseudo_1
  }
};

#line 2164 "mdb.declarative_debugger.c"
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

#line 2181 "mdb.declarative_debugger.c"
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

#line 2198 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_i_bug_0_0[4] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__unit__unit__type_ctor_info_unit_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2206 "mdb.declarative_debugger.c"
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

#line 2221 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0
};

#line 2226 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_decl_i_bug_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_i_bug_0_0
  }
};

#line 2235 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_i_bug_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_i_bug_0_0
};

#line 2240 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_i_bug_0[1] = {
  (MR_Integer) 0
};

#line 2245 "mdb.declarative_debugger.c"
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

#line 2262 "mdb.declarative_debugger.c"
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

#line 2279 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

#line 2286 "mdb.declarative_debugger.c"
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

#line 2301 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__list__ti_list_1mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

#line 2308 "mdb.declarative_debugger.c"
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

#line 2323 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_decl_question_1_2[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
  (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0
};

#line 2330 "mdb.declarative_debugger.c"
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

#line 2345 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_0
};

#line 2350 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_1
};

#line 2355 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_decl_question_1_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_2
};

#line 2360 "mdb.declarative_debugger.c"
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

#line 2379 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_decl_question_1[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_decl_question_1_0
};

#line 2386 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_question_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2393 "mdb.declarative_debugger.c"
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

#line 2410 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0 = {
  (MR_String) "truth_correct",
  (MR_Integer) 0
};

#line 2416 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1 = {
  (MR_String) "truth_erroneous",
  (MR_Integer) 1
};

#line 2422 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2 = {
  (MR_String) "truth_inadmissible",
  (MR_Integer) 2
};

#line 2428 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_value_ordered_decl_truth_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2
};

#line 2435 "mdb.declarative_debugger.c"
static const MR_EnumFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__enum_name_ordered_decl_truth_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__enum_functor_desc_decl_truth_0_2
};

#line 2442 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_decl_truth_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2449 "mdb.declarative_debugger.c"
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

#line 2466 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_0[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2472 "mdb.declarative_debugger.c"
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

#line 2487 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_1[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2493 "mdb.declarative_debugger.c"
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

#line 2508 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_exception_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

#line 2513 "mdb.declarative_debugger.c"
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

#line 2528 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0
};

#line 2533 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1
};

#line 2538 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_exception_0_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2
};

#line 2543 "mdb.declarative_debugger.c"
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

#line 2562 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_exception_0[3] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_exception_0_2
};

#line 2569 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_exception_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2576 "mdb.declarative_debugger.c"
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

#line 2593 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2598 "mdb.declarative_debugger.c"
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

#line 2613 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2618 "mdb.declarative_debugger.c"
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

#line 2633 "mdb.declarative_debugger.c"
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

#line 2648 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_3[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2656 "mdb.declarative_debugger.c"
static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_response_1_3[4] = {
  (MR_String) "require_subtree_final_event",
  (MR_String) "require_subtree_seqno",
  (MR_String) "require_subtree_call_preceding_node",
  (MR_String) "require_subtree_max_depth"
};

#line 2664 "mdb.declarative_debugger.c"
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

#line 2679 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_response_1_4[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2685 "mdb.declarative_debugger.c"
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

#line 2700 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2
};

#line 2705 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0
};

#line 2710 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_2[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1
};

#line 2715 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_response_1_3[2] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4
};

#line 2721 "mdb.declarative_debugger.c"
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

#line 2745 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_response_1[5] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_0,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_2,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_3,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_4,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_response_1_1
};

#line 2754 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_response_1[5] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

#line 2763 "mdb.declarative_debugger.c"
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

#line 2780 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_1 = {
  &mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2788 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1 = {
  &mdb__declarative_analyser__mdb__declarative_analyser__type_ctor_info_analyser_state_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_tree__pti_edt_node_1__pseudo_1
  }
};

#line 2796 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2804 "mdb.declarative_debugger.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_debugger__maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1
  }
};

#line 2812 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_diagnoser_state_1_0[4] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_analyser__pti_analyser_state_1__pseudo_mdb__declarative_tree__pti_edt_node_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__maybe__pti_maybe_1__pseudo_mdb__declarative_debugger__pti_diagnoser_state_1__pseudo_1
};

#line 2820 "mdb.declarative_debugger.c"
static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_diagnoser_state_1_0[4] = {
  (MR_String) "analyser_state",
  (MR_String) "oracle_state",
  (MR_String) "warn_if_searching_supertree",
  (MR_String) "previous_diagnoser"
};

#line 2828 "mdb.declarative_debugger.c"
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

#line 2843 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0
};

#line 2848 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_diagnoser_state_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_diagnoser_state_1_0
  }
};

#line 2857 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_diagnoser_state_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_diagnoser_state_1_0
};

#line 2862 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_diagnoser_state_1[1] = {
  (MR_Integer) 0
};

#line 2867 "mdb.declarative_debugger.c"
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

#line 2884 "mdb.declarative_debugger.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_debugger__maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__io_action__mdb__io_action__type_ctor_info_io_action_range_0
  }
};

#line 2892 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_final_decl_atom_0_0[2] = {
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0,
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__maybe__ti_maybe_1mdb__io_action__type_ctor_info_io_action_range_0
};

#line 2898 "mdb.declarative_debugger.c"
static const MR_ConstString mdb__declarative_debugger__mdb__declarative_debugger__field_names_final_decl_atom_0_0[2] = {
  (MR_String) "final_atom",
  (MR_String) "final_io_actions"
};

#line 2904 "mdb.declarative_debugger.c"
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

#line 2919 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0
};

#line 2924 "mdb.declarative_debugger.c"
static const MR_DuPtagLayout mdb__declarative_debugger__mdb__declarative_debugger__du_ptag_ordered_final_decl_atom_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_final_decl_atom_0_0
  }
};

#line 2933 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_final_decl_atom_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_final_decl_atom_0_0
};

#line 2938 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_final_decl_atom_0[1] = {
  (MR_Integer) 0
};

#line 2943 "mdb.declarative_debugger.c"
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

#line 2960 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_init_decl_atom_0[1] = {
  (MR_Integer) 0
};

#line 2965 "mdb.declarative_debugger.c"
static const MR_NotagFunctorDesc mdb__declarative_debugger__mdb__declarative_debugger__notag_functor_desc_init_decl_atom_0 = {
  (MR_String) "init_decl_atom",
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0,
  (MR_String) "init_atom"
};

#line 2972 "mdb.declarative_debugger.c"
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

#line 2989 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_0[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0
};

#line 2994 "mdb.declarative_debugger.c"
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

#line 3009 "mdb.declarative_debugger.c"
static const MR_PseudoTypeInfo mdb__declarative_debugger__mdb__declarative_debugger__field_types_some_decl_atom_0_1[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0
};

#line 3014 "mdb.declarative_debugger.c"
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

#line 3029 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_0[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1
};

#line 3034 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_stag_ordered_some_decl_atom_0_1[1] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0
};

#line 3039 "mdb.declarative_debugger.c"
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

#line 3053 "mdb.declarative_debugger.c"
static const MR_DuFunctorDescPtr mdb__declarative_debugger__mdb__declarative_debugger__du_name_ordered_some_decl_atom_0[2] = {
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_1,
  &mdb__declarative_debugger__mdb__declarative_debugger__du_functor_desc_some_decl_atom_0_0
};

#line 3059 "mdb.declarative_debugger.c"
static const MR_Integer mdb__declarative_debugger__mdb__declarative_debugger__functor_number_map_some_decl_atom_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 3065 "mdb.declarative_debugger.c"
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

#line 3082 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_answer_1_0_10001(
#line 3085 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3087 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3089 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3091 "mdb.declarative_debugger.c"
{
#line 3093 "mdb.declarative_debugger.c"
  {
#line 3095 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3098 "mdb.declarative_debugger.c"
    {
#line 3100 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3103 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3105 "mdb.declarative_debugger.c"
  }
#line 3107 "mdb.declarative_debugger.c"
}

#line 3110 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0_10001(
#line 3113 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3115 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 3117 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 3119 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
#line 3121 "mdb.declarative_debugger.c"
{
#line 3123 "mdb.declarative_debugger.c"
  {
#line 3125 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3128 "mdb.declarative_debugger.c"
    {
#line 3130 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_answer_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
#line 3133 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3135 "mdb.declarative_debugger.c"
  }
#line 3137 "mdb.declarative_debugger.c"
}

#line 3140 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_bug_0_0_10001(
#line 3143 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3145 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3147 "mdb.declarative_debugger.c"
{
#line 3149 "mdb.declarative_debugger.c"
  {
#line 3151 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3154 "mdb.declarative_debugger.c"
    {
#line 3156 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_bug_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3159 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3161 "mdb.declarative_debugger.c"
  }
#line 3163 "mdb.declarative_debugger.c"
}

#line 3166 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_bug_0_0_10001(
#line 3169 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3171 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3173 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3175 "mdb.declarative_debugger.c"
{
#line 3177 "mdb.declarative_debugger.c"
  {
#line 3179 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3182 "mdb.declarative_debugger.c"
    {
#line 3184 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_bug_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3187 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3189 "mdb.declarative_debugger.c"
  }
#line 3191 "mdb.declarative_debugger.c"
}

#line 3194 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_confirmation_0_0_10001(
#line 3197 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3199 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3201 "mdb.declarative_debugger.c"
{
#line 3203 "mdb.declarative_debugger.c"
  {
#line 3205 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3208 "mdb.declarative_debugger.c"
    {
#line 3210 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_confirmation_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3213 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3215 "mdb.declarative_debugger.c"
  }
#line 3217 "mdb.declarative_debugger.c"
}

#line 3220 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_confirmation_0_0_10001(
#line 3223 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3225 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3227 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3229 "mdb.declarative_debugger.c"
{
#line 3231 "mdb.declarative_debugger.c"
  {
#line 3233 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3236 "mdb.declarative_debugger.c"
    {
#line 3238 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_confirmation_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3241 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3243 "mdb.declarative_debugger.c"
  }
#line 3245 "mdb.declarative_debugger.c"
}

#line 3248 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0_10001(
#line 3251 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3253 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3255 "mdb.declarative_debugger.c"
{
#line 3257 "mdb.declarative_debugger.c"
  {
#line 3259 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3262 "mdb.declarative_debugger.c"
    {
#line 3264 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_contour_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3267 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3269 "mdb.declarative_debugger.c"
  }
#line 3271 "mdb.declarative_debugger.c"
}

#line 3274 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0_10001(
#line 3277 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3279 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3281 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3283 "mdb.declarative_debugger.c"
{
#line 3285 "mdb.declarative_debugger.c"
  {
#line 3287 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3290 "mdb.declarative_debugger.c"
    {
#line 3292 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_contour_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3295 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3297 "mdb.declarative_debugger.c"
  }
#line 3299 "mdb.declarative_debugger.c"
}

#line 3302 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_e_bug_0_0_10001(
#line 3305 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3307 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3309 "mdb.declarative_debugger.c"
{
#line 3311 "mdb.declarative_debugger.c"
  {
#line 3313 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3316 "mdb.declarative_debugger.c"
    {
#line 3318 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_e_bug_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3321 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3323 "mdb.declarative_debugger.c"
  }
#line 3325 "mdb.declarative_debugger.c"
}

#line 3328 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_e_bug_0_0_10001(
#line 3331 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3333 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3335 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3337 "mdb.declarative_debugger.c"
{
#line 3339 "mdb.declarative_debugger.c"
  {
#line 3341 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3344 "mdb.declarative_debugger.c"
    {
#line 3346 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_e_bug_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3349 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3351 "mdb.declarative_debugger.c"
  }
#line 3353 "mdb.declarative_debugger.c"
}

#line 3356 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0_10001(
#line 3359 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3361 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3363 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3365 "mdb.declarative_debugger.c"
{
#line 3367 "mdb.declarative_debugger.c"
  {
#line 3369 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3372 "mdb.declarative_debugger.c"
    {
#line 3374 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_evidence_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3377 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3379 "mdb.declarative_debugger.c"
  }
#line 3381 "mdb.declarative_debugger.c"
}

#line 3384 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0_10001(
#line 3387 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3389 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 3391 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 3393 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
#line 3395 "mdb.declarative_debugger.c"
{
#line 3397 "mdb.declarative_debugger.c"
  {
#line 3399 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3402 "mdb.declarative_debugger.c"
    {
#line 3404 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_evidence_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
#line 3407 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3409 "mdb.declarative_debugger.c"
  }
#line 3411 "mdb.declarative_debugger.c"
}

#line 3414 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0_10001(
#line 3417 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3419 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3421 "mdb.declarative_debugger.c"
{
#line 3423 "mdb.declarative_debugger.c"
  {
#line 3425 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3428 "mdb.declarative_debugger.c"
    {
#line 3430 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_exception_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3433 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3435 "mdb.declarative_debugger.c"
  }
#line 3437 "mdb.declarative_debugger.c"
}

#line 3440 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0_10001(
#line 3443 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3445 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3447 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3449 "mdb.declarative_debugger.c"
{
#line 3451 "mdb.declarative_debugger.c"
  {
#line 3453 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3456 "mdb.declarative_debugger.c"
    {
#line 3458 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_exception_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3461 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3463 "mdb.declarative_debugger.c"
  }
#line 3465 "mdb.declarative_debugger.c"
}

#line 3468 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0_10001(
#line 3471 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3473 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3475 "mdb.declarative_debugger.c"
{
#line 3477 "mdb.declarative_debugger.c"
  {
#line 3479 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3482 "mdb.declarative_debugger.c"
    {
#line 3484 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_i_bug_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3487 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3489 "mdb.declarative_debugger.c"
  }
#line 3491 "mdb.declarative_debugger.c"
}

#line 3494 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0_10001(
#line 3497 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3499 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3501 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3503 "mdb.declarative_debugger.c"
{
#line 3505 "mdb.declarative_debugger.c"
  {
#line 3507 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3510 "mdb.declarative_debugger.c"
    {
#line 3512 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_i_bug_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3515 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3517 "mdb.declarative_debugger.c"
  }
#line 3519 "mdb.declarative_debugger.c"
}

#line 3522 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0_10001(
#line 3525 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3527 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3529 "mdb.declarative_debugger.c"
{
#line 3531 "mdb.declarative_debugger.c"
  {
#line 3533 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3536 "mdb.declarative_debugger.c"
    {
#line 3538 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_position_0_0();
    }
#line 3541 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3543 "mdb.declarative_debugger.c"
  }
#line 3545 "mdb.declarative_debugger.c"
}

#line 3548 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0_10001(
#line 3551 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3553 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3555 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3557 "mdb.declarative_debugger.c"
{
#line 3559 "mdb.declarative_debugger.c"
  {
#line 3561 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3564 "mdb.declarative_debugger.c"
    {
#line 3566 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_position_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1);
    }
#line 3569 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3571 "mdb.declarative_debugger.c"
  }
#line 3573 "mdb.declarative_debugger.c"
}

#line 3576 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0_10001(
#line 3579 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3581 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3583 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3585 "mdb.declarative_debugger.c"
{
#line 3587 "mdb.declarative_debugger.c"
  {
#line 3589 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3592 "mdb.declarative_debugger.c"
    {
#line 3594 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_question_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3597 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3599 "mdb.declarative_debugger.c"
  }
#line 3601 "mdb.declarative_debugger.c"
}

#line 3604 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0_10001(
#line 3607 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3609 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 3611 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 3613 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
#line 3615 "mdb.declarative_debugger.c"
{
#line 3617 "mdb.declarative_debugger.c"
  {
#line 3619 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3622 "mdb.declarative_debugger.c"
    {
#line 3624 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_question_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
#line 3627 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3629 "mdb.declarative_debugger.c"
  }
#line 3631 "mdb.declarative_debugger.c"
}

#line 3634 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_truth_0_0_10001(
#line 3637 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3639 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3641 "mdb.declarative_debugger.c"
{
#line 3643 "mdb.declarative_debugger.c"
  {
#line 3645 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3648 "mdb.declarative_debugger.c"
    {
#line 3650 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_truth_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3653 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3655 "mdb.declarative_debugger.c"
  }
#line 3657 "mdb.declarative_debugger.c"
}

#line 3660 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____decl_truth_0_0_10001(
#line 3663 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3665 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3667 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3669 "mdb.declarative_debugger.c"
{
#line 3671 "mdb.declarative_debugger.c"
  {
#line 3673 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3676 "mdb.declarative_debugger.c"
    {
#line 3678 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____decl_truth_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3681 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3683 "mdb.declarative_debugger.c"
  }
#line 3685 "mdb.declarative_debugger.c"
}

#line 3688 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0_10001(
#line 3691 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3693 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3695 "mdb.declarative_debugger.c"
{
#line 3697 "mdb.declarative_debugger.c"
  {
#line 3699 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3702 "mdb.declarative_debugger.c"
    {
#line 3704 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____diagnoser_exception_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3707 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3709 "mdb.declarative_debugger.c"
  }
#line 3711 "mdb.declarative_debugger.c"
}

#line 3714 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0_10001(
#line 3717 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3719 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3721 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3723 "mdb.declarative_debugger.c"
{
#line 3725 "mdb.declarative_debugger.c"
  {
#line 3727 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3730 "mdb.declarative_debugger.c"
    {
#line 3732 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____diagnoser_exception_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3735 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3737 "mdb.declarative_debugger.c"
  }
#line 3739 "mdb.declarative_debugger.c"
}

#line 3742 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0_10001(
#line 3745 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3747 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3749 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3751 "mdb.declarative_debugger.c"
{
#line 3753 "mdb.declarative_debugger.c"
  {
#line 3755 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3758 "mdb.declarative_debugger.c"
    {
#line 3760 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____diagnoser_response_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3763 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3765 "mdb.declarative_debugger.c"
  }
#line 3767 "mdb.declarative_debugger.c"
}

#line 3770 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0_10001(
#line 3773 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3775 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 3777 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 3779 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
#line 3781 "mdb.declarative_debugger.c"
{
#line 3783 "mdb.declarative_debugger.c"
  {
#line 3785 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3788 "mdb.declarative_debugger.c"
    {
#line 3790 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____diagnoser_response_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
#line 3793 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3795 "mdb.declarative_debugger.c"
  }
#line 3797 "mdb.declarative_debugger.c"
}

#line 3800 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0_10001(
#line 3803 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3805 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3807 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3809 "mdb.declarative_debugger.c"
{
#line 3811 "mdb.declarative_debugger.c"
  {
#line 3813 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3816 "mdb.declarative_debugger.c"
    {
#line 3818 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____diagnoser_state_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3821 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3823 "mdb.declarative_debugger.c"
  }
#line 3825 "mdb.declarative_debugger.c"
}

#line 3828 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0_10001(
#line 3831 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3833 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_2,
#line 3835 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3,
#line 3837 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_4)
#line 3839 "mdb.declarative_debugger.c"
{
#line 3841 "mdb.declarative_debugger.c"
  {
#line 3843 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3846 "mdb.declarative_debugger.c"
    {
#line 3848 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____diagnoser_state_1_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), &mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_3), ((MR_Word) mdb__declarative_debugger__wrapper_arg_4));
    }
#line 3851 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_2 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3853 "mdb.declarative_debugger.c"
  }
#line 3855 "mdb.declarative_debugger.c"
}

#line 3858 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0_10001(
#line 3861 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3863 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3865 "mdb.declarative_debugger.c"
{
#line 3867 "mdb.declarative_debugger.c"
  {
#line 3869 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3872 "mdb.declarative_debugger.c"
    {
#line 3874 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3877 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3879 "mdb.declarative_debugger.c"
  }
#line 3881 "mdb.declarative_debugger.c"
}

#line 3884 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0_10001(
#line 3887 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3889 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3891 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3893 "mdb.declarative_debugger.c"
{
#line 3895 "mdb.declarative_debugger.c"
  {
#line 3897 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3900 "mdb.declarative_debugger.c"
    {
#line 3902 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____final_decl_atom_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3905 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3907 "mdb.declarative_debugger.c"
  }
#line 3909 "mdb.declarative_debugger.c"
}

#line 3912 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0_10001(
#line 3915 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3917 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3919 "mdb.declarative_debugger.c"
{
#line 3921 "mdb.declarative_debugger.c"
  {
#line 3923 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3926 "mdb.declarative_debugger.c"
    {
#line 3928 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3931 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3933 "mdb.declarative_debugger.c"
  }
#line 3935 "mdb.declarative_debugger.c"
}

#line 3938 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0_10001(
#line 3941 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3943 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3945 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 3947 "mdb.declarative_debugger.c"
{
#line 3949 "mdb.declarative_debugger.c"
  {
#line 3951 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 3954 "mdb.declarative_debugger.c"
    {
#line 3956 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 3959 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 3961 "mdb.declarative_debugger.c"
  }
#line 3963 "mdb.declarative_debugger.c"
}

#line 3966 "mdb.declarative_debugger.c"
static MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0_10001(
#line 3969 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_1,
#line 3971 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2)
#line 3973 "mdb.declarative_debugger.c"
{
#line 3975 "mdb.declarative_debugger.c"
  {
#line 3977 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded;

#line 3980 "mdb.declarative_debugger.c"
    {
#line 3982 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____some_decl_atom_0_0(((MR_Word) mdb__declarative_debugger__wrapper_arg_1), ((MR_Word) mdb__declarative_debugger__wrapper_arg_2));
    }
#line 3985 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 3987 "mdb.declarative_debugger.c"
  }
#line 3989 "mdb.declarative_debugger.c"
}

#line 3992 "mdb.declarative_debugger.c"
static void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0_10001(
#line 3995 "mdb.declarative_debugger.c"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 3997 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 3999 "mdb.declarative_debugger.c"
  MR_Box mdb__declarative_debugger__wrapper_arg_3)
#line 4001 "mdb.declarative_debugger.c"
{
#line 4003 "mdb.declarative_debugger.c"
  {
#line 4005 "mdb.declarative_debugger.c"
    MR_Word mdb__declarative_debugger__conv0_HeadVar__1_1;

#line 4008 "mdb.declarative_debugger.c"
    {
#line 4010 "mdb.declarative_debugger.c"
      mdb__declarative_debugger____Compare____some_decl_atom_0_0(&mdb__declarative_debugger__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_debugger__wrapper_arg_2), ((MR_Word) mdb__declarative_debugger__wrapper_arg_3));
    }
#line 4013 "mdb.declarative_debugger.c"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__1_1));
#line 4015 "mdb.declarative_debugger.c"
  }
#line 4017 "mdb.declarative_debugger.c"
}

#line 138 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
#line 138 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1)
#line 138 "declarative_debugger.m"
{
#line 138 "declarative_debugger.m"
  {
#line 138 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 138 "declarative_debugger.m"
    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 138 "declarative_debugger.m"
  }
#line 138 "declarative_debugger.m"
}

#line 138 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0(void)
#line 138 "declarative_debugger.m"
{
#line 138 "declarative_debugger.m"
  {
#line 138 "declarative_debugger.m"
    return MR_TRUE;
#line 138 "declarative_debugger.m"
  }
#line 138 "declarative_debugger.m"
}

#line 501 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(
#line 501 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser_5,
#line 501 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_6)
#line 501 "declarative_debugger.m"
{
#line 504 "declarative_debugger.m"
  while (MR_TRUE)
#line 504 "declarative_debugger.m"
    {
#line 504 "declarative_debugger.m"
      /* tailcall optimized into a loop */
#line 504 "declarative_debugger.m"
      {
#line 504 "declarative_debugger.m"
        MR_bool mdb__declarative_debugger__succeeded;
#line 504 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__In_8;
#line 504 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__Out_9;
#line 504 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__Result_11;
#line 504 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 1)));
#line 504 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_18_18;
#line 505 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 0)));
#line 505 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 2)));
#line 505 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 3)));
#line 506 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_34_34;
#line 506 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_35_35;
#line 506 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_36_36;

#line 505 "declarative_debugger.m"
        {
#line 505 "declarative_debugger.m"
          mdb__declarative_debugger__In_8 = mdb__declarative_oracle__get_user_input_stream_1_f_0(mdb__declarative_debugger__V_17_17);
        }
#line 506 "declarative_debugger.m"
        mdb__declarative_debugger__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 0)));
#line 506 "declarative_debugger.m"
        mdb__declarative_debugger__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 1)));
#line 506 "declarative_debugger.m"
        mdb__declarative_debugger__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 2)));
#line 506 "declarative_debugger.m"
        mdb__declarative_debugger__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_5, (MR_Integer) 3)));
#line 506 "declarative_debugger.m"
        {
#line 506 "declarative_debugger.m"
          mdb__declarative_debugger__Out_9 = mdb__declarative_oracle__get_user_output_stream_1_f_0(mdb__declarative_debugger__V_18_18);
        }
#line 508 "declarative_debugger.m"
        {
#line 508 "declarative_debugger.m"
          mdb__util__trace_getline_6_p_0((MR_String) "> ", &mdb__declarative_debugger__Result_11, mdb__declarative_debugger__In_8, mdb__declarative_debugger__Out_9);
        }
#line 519 "declarative_debugger.m"
#line 519 "declarative_debugger.m"
        switch (MR_tag((MR_Word) mdb__declarative_debugger__Result_11)) {
#line 519 "declarative_debugger.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 519 "declarative_debugger.m"
          case (MR_Integer) 0:
#line 523 "declarative_debugger.m"
            {
#line 524 "declarative_debugger.m"
              {
#line 524 "declarative_debugger.m"
                mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_9, (MR_String) "Unexpected EOF. Aborting.\n");
              }
#line 525 "declarative_debugger.m"
              *mdb__declarative_debugger__Response_6 = (MR_Integer) 0;
#line 523 "declarative_debugger.m"
            }
#line 519 "declarative_debugger.m"
            break;
#line 519 "declarative_debugger.m"
          case (MR_Integer) 1:
#line 509 "declarative_debugger.m"
            {
#line 509 "declarative_debugger.m"
              MR_String mdb__declarative_debugger__Line_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Result_11, (MR_Integer) 0)));
#line 509 "declarative_debugger.m"
              MR_String mdb__declarative_debugger__UpperLine_13;

#line 510 "declarative_debugger.m"
              {
#line 510 "declarative_debugger.m"
                mdb__declarative_debugger__UpperLine_13 = mercury__string__to_upper_1_f_0(mdb__declarative_debugger__Line_12);
              }
#line 511 "declarative_debugger.m"
              if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "Y") == 0))
#line 511 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = MR_TRUE;
#line 511 "declarative_debugger.m"
              else
#line 511 "declarative_debugger.m"
              if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "YES") == 0))
#line 511 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = MR_TRUE;
#line 511 "declarative_debugger.m"
              else
#line 511 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = MR_FALSE;
#line 513 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 512 "declarative_debugger.m"
                *mdb__declarative_debugger__Response_6 = (MR_Integer) 1;
#line 513 "declarative_debugger.m"
              else
#line 515 "declarative_debugger.m"
                {
#line 513 "declarative_debugger.m"
                  if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "N") == 0))
#line 513 "declarative_debugger.m"
                    mdb__declarative_debugger__succeeded = MR_TRUE;
#line 513 "declarative_debugger.m"
                  else
#line 513 "declarative_debugger.m"
                  if ((strcmp(mdb__declarative_debugger__UpperLine_13, (MR_String) "NO") == 0))
#line 513 "declarative_debugger.m"
                    mdb__declarative_debugger__succeeded = MR_TRUE;
#line 513 "declarative_debugger.m"
                  else
#line 513 "declarative_debugger.m"
                    mdb__declarative_debugger__succeeded = MR_FALSE;
#line 515 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 514 "declarative_debugger.m"
                    *mdb__declarative_debugger__Response_6 = (MR_Integer) 0;
#line 515 "declarative_debugger.m"
                  else
#line 516 "declarative_debugger.m"
                    {
#line 516 "declarative_debugger.m"
                      {
#line 516 "declarative_debugger.m"
                        mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_9, (MR_String) "Please answer yes or no.\n");
                      }
#line 517 "declarative_debugger.m"
                      /* direct tailcall eliminated */
#line 517 "declarative_debugger.m"
                      {
#line 517 "declarative_debugger.m"
                      }
#line 517 "declarative_debugger.m"
                      continue;
#line 516 "declarative_debugger.m"
                    }
#line 515 "declarative_debugger.m"
                }
#line 509 "declarative_debugger.m"
            }
#line 519 "declarative_debugger.m"
            break;
#line 519 "declarative_debugger.m"
          case (MR_Integer) 2:
#line 519 "declarative_debugger.m"
            {
#line 519 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__ErrNo_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__Result_11, (MR_Integer) 0)));
#line 519 "declarative_debugger.m"
              MR_String mdb__declarative_debugger__V_22_22;
#line 519 "declarative_debugger.m"
              MR_String mdb__declarative_debugger__V_25_25;
#line 519 "declarative_debugger.m"
              MR_String mdb__declarative_debugger__V_26_26;

#line 521 "declarative_debugger.m"
              {
#line 521 "declarative_debugger.m"
                mdb__declarative_debugger__V_26_26 = mercury__io__error_message_1_f_0(mdb__declarative_debugger__ErrNo_14);
              }
#line 521 "declarative_debugger.m"
              {
#line 521 "declarative_debugger.m"
                mdb__declarative_debugger__V_25_25 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__V_26_26, (MR_String) ". Aborting.\n");
              }
#line 520 "declarative_debugger.m"
              {
#line 520 "declarative_debugger.m"
                mdb__declarative_debugger__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "Error reading input: ", mdb__declarative_debugger__V_25_25);
              }
#line 520 "declarative_debugger.m"
              {
#line 520 "declarative_debugger.m"
                mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_9, mdb__declarative_debugger__V_22_22);
              }
#line 522 "declarative_debugger.m"
              *mdb__declarative_debugger__Response_6 = (MR_Integer) 0;
#line 519 "declarative_debugger.m"
            }
#line 519 "declarative_debugger.m"
            break;
#line 519 "declarative_debugger.m"
        }
#line 504 "declarative_debugger.m"
      }
#line 504 "declarative_debugger.m"
      break;
#line 504 "declarative_debugger.m"
    }
#line 501 "declarative_debugger.m"
}

#line 373 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
#line 373 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 373 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 373 "declarative_debugger.m"
{
#line 376 "declarative_debugger.m"
  {
#line 376 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 376 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__LatestOracle_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
#line 376 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__LastPushedOracle_5;
#line 376 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_6;
#line 376 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10;
#line 376 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
#line 377 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
#line 377 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
#line 379 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_18_18;
#line 379 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_19_19;
#line 379 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_20_20;
#line 381 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_21_21;
#line 381 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_23_23;
#line 381 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_24_24;
#line 381 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_22_22;

#line 378 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 378 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 378 "declarative_debugger.m"
      {
#line 378 "declarative_debugger.m"
        mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__V_14_14, (MR_Integer) 0)));
#line 379 "declarative_debugger.m"
        mdb__declarative_debugger__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 0)));
#line 379 "declarative_debugger.m"
        mdb__declarative_debugger__LastPushedOracle_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 1)));
#line 379 "declarative_debugger.m"
        mdb__declarative_debugger__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 2)));
#line 379 "declarative_debugger.m"
        mdb__declarative_debugger__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 3)));
#line 380 "declarative_debugger.m"
        {
#line 380 "declarative_debugger.m"
          mdb__declarative_oracle__update_revised_knowledge_base_3_p_0(mdb__declarative_debugger__LastPushedOracle_5, mdb__declarative_debugger__LatestOracle_4, &mdb__declarative_debugger__Oracle_6);
        }
#line 381 "declarative_debugger.m"
        mdb__declarative_debugger__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 0)));
#line 381 "declarative_debugger.m"
        mdb__declarative_debugger__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 1)));
#line 381 "declarative_debugger.m"
        mdb__declarative_debugger__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 2)));
#line 381 "declarative_debugger.m"
        mdb__declarative_debugger__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_10_10, (MR_Integer) 3)));
#line 381 "declarative_debugger.m"
        {
#line 381 "declarative_debugger.m"
          MR_Word base;
#line 381 "declarative_debugger.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 381 "declarative_debugger.m"
          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8 = base;
#line 381 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_21_21));
#line 381 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_6));
#line 381 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_23_23));
#line 381 "declarative_debugger.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_24_24));
#line 381 "declarative_debugger.m"
        }
#line 381 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = MR_TRUE;
#line 378 "declarative_debugger.m"
      }
#line 376 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 376 "declarative_debugger.m"
  }
#line 373 "declarative_debugger.m"
}

#line 368 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(
#line 368 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
#line 368 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5)
#line 368 "declarative_debugger.m"
{
#line 370 "declarative_debugger.m"
  {
#line 370 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 370 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_7_7;
#line 371 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_8_8;
#line 371 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9;
#line 371 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10;
#line 371 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11;

#line 371 "declarative_debugger.m"
    {
#line 371 "declarative_debugger.m"
      mdb__declarative_debugger__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 371 "declarative_debugger.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_debugger__V_7_7, 0) = ((MR_Box) (mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4));
#line 371 "declarative_debugger.m"
    }
#line 371 "declarative_debugger.m"
    mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 0)));
#line 371 "declarative_debugger.m"
    mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 1)));
#line 371 "declarative_debugger.m"
    mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 2)));
#line 371 "declarative_debugger.m"
    mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 3)));
#line 371 "declarative_debugger.m"
    {
#line 371 "declarative_debugger.m"
      MR_Word base;
#line 371 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 371 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5 = base;
#line 371 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_8_8));
#line 371 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_9_9));
#line 371 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_10_10));
#line 371 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_7_7));
#line 371 "declarative_debugger.m"
    }
#line 370 "declarative_debugger.m"
  }
#line 368 "declarative_debugger.m"
}

#line 208 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____some_decl_atom_0_0(
#line 208 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 208 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 208 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 208 "declarative_debugger.m"
{
#line 208 "declarative_debugger.m"
  {
#line 208 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 208 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_12 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 208 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_13 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 208 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_12 == mdb__declarative_debugger__CastY_13);
#line 208 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 4454 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 208 "declarative_debugger.m"
    else
#line 208 "declarative_debugger.m"
    if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 208 "declarative_debugger.m"
      {
#line 208 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_16_16 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__2_2), (MR_Integer) 0);

#line 208 "declarative_debugger.m"
        if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 208 "declarative_debugger.m"
          {
#line 208 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_11_11 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__3_3), (MR_Integer) 0);

#line 208 "declarative_debugger.m"
            {
#line 208 "declarative_debugger.m"
              mdb__declarative_debugger____Compare____final_decl_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_16_16, mdb__declarative_debugger__V_11_11);
#line 208 "declarative_debugger.m"
              return;
            }
#line 208 "declarative_debugger.m"
          }
#line 208 "declarative_debugger.m"
        else
#line 4483 "mdb.declarative_debugger.c"
          *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 208 "declarative_debugger.m"
      }
#line 208 "declarative_debugger.m"
    else
#line 208 "declarative_debugger.m"
      {
#line 208 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 208 "declarative_debugger.m"
        if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4496 "mdb.declarative_debugger.c"
          *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 208 "declarative_debugger.m"
        else
#line 208 "declarative_debugger.m"
          {
#line 208 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

#line 208 "declarative_debugger.m"
            {
#line 208 "declarative_debugger.m"
              mdb__declarative_debugger____Compare____init_decl_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_17_17, mdb__declarative_debugger__V_5_5);
#line 208 "declarative_debugger.m"
              return;
            }
#line 208 "declarative_debugger.m"
          }
#line 208 "declarative_debugger.m"
      }
#line 208 "declarative_debugger.m"
  }
#line 208 "declarative_debugger.m"
}

#line 208 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____some_decl_atom_0_0(
#line 208 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 208 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 208 "declarative_debugger.m"
{
#line 208 "declarative_debugger.m"
  {
#line 208 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 208 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 208 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_8 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 208 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_7 == mdb__declarative_debugger__CastY_8);
#line 208 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 208 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 208 "declarative_debugger.m"
    else
#line 208 "declarative_debugger.m"
    if (((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 208 "declarative_debugger.m"
      {
#line 208 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__1_1), (MR_Integer) 0);
#line 208 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6;

#line 208 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 208 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 208 "declarative_debugger.m"
          {
#line 208 "declarative_debugger.m"
            mdb__declarative_debugger__V_6_6 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__HeadVar__2_2), (MR_Integer) 0);
#line 4564 "mdb.declarative_debugger.c"
            {
#line 4566 "mdb.declarative_debugger.c"
              return mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(mdb__declarative_debugger__V_5_5, mdb__declarative_debugger__V_6_6);
            }
#line 208 "declarative_debugger.m"
          }
#line 208 "declarative_debugger.m"
      }
#line 208 "declarative_debugger.m"
    else
#line 208 "declarative_debugger.m"
      {
#line 208 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 208 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4;

#line 208 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 208 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 208 "declarative_debugger.m"
          {
#line 208 "declarative_debugger.m"
            mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 4590 "mdb.declarative_debugger.c"
            {
#line 4592 "mdb.declarative_debugger.c"
              return mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_4_4);
            }
#line 208 "declarative_debugger.m"
          }
#line 208 "declarative_debugger.m"
      }
#line 208 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 208 "declarative_debugger.m"
  }
#line 208 "declarative_debugger.m"
}

#line 212 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____init_decl_atom_0_0(
#line 212 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 212 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 212 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 212 "declarative_debugger.m"
{
#line 212 "declarative_debugger.m"
  {
#line 212 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 212 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_6 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 212 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 212 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_6 == mdb__declarative_debugger__CastY_7);
#line 212 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 4630 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 212 "declarative_debugger.m"
    else
#line 212 "declarative_debugger.m"
      {
#line 212 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = (MR_Word) mdb__declarative_debugger__HeadVar__2_2;
#line 212 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = (MR_Word) mdb__declarative_debugger__HeadVar__3_3;

#line 212 "declarative_debugger.m"
        {
#line 212 "declarative_debugger.m"
          mdb__declarative_execution____Compare____trace_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_5_5);
#line 212 "declarative_debugger.m"
          return;
        }
#line 212 "declarative_debugger.m"
      }
#line 212 "declarative_debugger.m"
  }
#line 212 "declarative_debugger.m"
}

#line 212 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____init_decl_atom_0_0(
#line 212 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 212 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 212 "declarative_debugger.m"
{
#line 212 "declarative_debugger.m"
  {
#line 212 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 212 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_5 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 212 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_6 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 212 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_5 == mdb__declarative_debugger__CastY_6);
#line 212 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 212 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 212 "declarative_debugger.m"
    else
#line 212 "declarative_debugger.m"
      {
#line 212 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_3_3 = (MR_Word) mdb__declarative_debugger__HeadVar__1_1;
#line 212 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = (MR_Word) mdb__declarative_debugger__HeadVar__2_2;

#line 4688 "mdb.declarative_debugger.c"
        {
#line 4690 "mdb.declarative_debugger.c"
          return mdb__declarative_debugger__succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_4_4);
        }
#line 212 "declarative_debugger.m"
      }
#line 212 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 212 "declarative_debugger.m"
  }
#line 212 "declarative_debugger.m"
}

#line 217 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____final_decl_atom_0_0(
#line 217 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 217 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 217 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 217 "declarative_debugger.m"
{
#line 217 "declarative_debugger.m"
  {
#line 217 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 217 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_9 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 217 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_10 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 217 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_9 == mdb__declarative_debugger__CastY_10);
#line 217 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 4726 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 217 "declarative_debugger.m"
    else
#line 217 "declarative_debugger.m"
      {
#line 217 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 217 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 217 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 217 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 217 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_8_8;

#line 217 "declarative_debugger.m"
        {
#line 217 "declarative_debugger.m"
          mdb__declarative_execution____Compare____trace_atom_0_0(&mdb__declarative_debugger__V_8_8, mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_6_6);
        }
#line 4748 "mdb.declarative_debugger.c"
        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_8_8 == (MR_Integer) 0);
#line 217 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 217 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 217 "declarative_debugger.m"
          *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_8_8;
#line 217 "declarative_debugger.m"
        else
#line 217 "declarative_debugger.m"
          {
#line 217 "declarative_debugger.m"
            {
#line 217 "declarative_debugger.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[4], mdb__declarative_debugger__HeadVar__1_1, ((MR_Box) (mdb__declarative_debugger__V_5_5)), ((MR_Box) (mdb__declarative_debugger__V_7_7)));
#line 217 "declarative_debugger.m"
              return;
            }
#line 217 "declarative_debugger.m"
          }
#line 217 "declarative_debugger.m"
      }
#line 217 "declarative_debugger.m"
  }
#line 217 "declarative_debugger.m"
}

#line 217 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____final_decl_atom_0_0(
#line 217 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 217 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 217 "declarative_debugger.m"
{
#line 217 "declarative_debugger.m"
  {
#line 217 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 217 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 217 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_8 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 217 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_7 == mdb__declarative_debugger__CastY_8);
#line 217 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 217 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 217 "declarative_debugger.m"
    else
#line 217 "declarative_debugger.m"
      {
#line 217 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_10_10;
#line 217 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 217 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 217 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 217 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));

#line 4815 "mdb.declarative_debugger.c"
        {
#line 4817 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_5_5);
        }
#line 217 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 217 "declarative_debugger.m"
          {
#line 4824 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_10_10 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[4];
#line 4826 "mdb.declarative_debugger.c"
            {
#line 4828 "mdb.declarative_debugger.c"
              return mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_10_10, ((MR_Box) (mdb__declarative_debugger__V_4_4)), ((MR_Box) (mdb__declarative_debugger__V_6_6)));
            }
#line 217 "declarative_debugger.m"
          }
#line 217 "declarative_debugger.m"
      }
#line 217 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 217 "declarative_debugger.m"
  }
#line 217 "declarative_debugger.m"
}

#line 344 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_state_1_0(
#line 344 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_17,
#line 344 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 344 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 344 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 344 "declarative_debugger.m"
{
#line 344 "declarative_debugger.m"
  {
#line 344 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 344 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_15 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 344 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_16 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 344 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_15 == mdb__declarative_debugger__CastY_16);
#line 344 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 4868 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 344 "declarative_debugger.m"
    else
#line 344 "declarative_debugger.m"
      {
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_12_12;
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_19_19;

#line 4895 "mdb.declarative_debugger.c"
        {
#line 4897 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4899 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_19_19, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 4901 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_19_19, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_17));
#line 4903 "mdb.declarative_debugger.c"
        }
#line 344 "declarative_debugger.m"
        {
#line 344 "declarative_debugger.m"
          mdb__declarative_analyser____Compare____analyser_state_1_0(mdb__declarative_debugger__TypeInfo_19_19, &mdb__declarative_debugger__V_12_12, (MR_Word) mdb__declarative_debugger__V_4_4, (MR_Word) mdb__declarative_debugger__V_8_8);
        }
#line 4910 "mdb.declarative_debugger.c"
        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_12_12 == (MR_Integer) 0);
#line 344 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 344 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 344 "declarative_debugger.m"
          *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_12_12;
#line 344 "declarative_debugger.m"
        else
#line 344 "declarative_debugger.m"
          {
#line 344 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_13_13;

#line 344 "declarative_debugger.m"
            {
#line 344 "declarative_debugger.m"
              mdb__declarative_oracle____Compare____oracle_state_0_0(&mdb__declarative_debugger__V_13_13, mdb__declarative_debugger__V_5_5, mdb__declarative_debugger__V_9_9);
            }
#line 4930 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_13_13 == (MR_Integer) 0);
#line 344 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 344 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 344 "declarative_debugger.m"
              *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_13_13;
#line 344 "declarative_debugger.m"
            else
#line 344 "declarative_debugger.m"
              {
#line 344 "declarative_debugger.m"
                MR_Word mdb__declarative_debugger__V_14_14;
#line 344 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_28_28 = (MR_Integer) mdb__declarative_debugger__V_6_6;
#line 344 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_29_29 = (MR_Integer) mdb__declarative_debugger__V_10_10;

#line 344 "declarative_debugger.m"
                {
#line 344 "declarative_debugger.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__V_14_14, mdb__declarative_debugger__V_28_28, mdb__declarative_debugger__V_29_29);
                }
#line 4954 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_14_14 == (MR_Integer) 0);
#line 344 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 344 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 344 "declarative_debugger.m"
                  *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_14_14;
#line 344 "declarative_debugger.m"
                else
#line 344 "declarative_debugger.m"
                  {
#line 344 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__TypeInfo_25_25;

#line 4969 "mdb.declarative_debugger.c"
                    {
#line 4971 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__TypeInfo_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4973 "mdb.declarative_debugger.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_25_25, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1));
#line 4975 "mdb.declarative_debugger.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_25_25, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_17));
#line 4977 "mdb.declarative_debugger.c"
                    }
#line 344 "declarative_debugger.m"
                    {
#line 344 "declarative_debugger.m"
                      mercury__maybe____Compare____maybe_1_0(mdb__declarative_debugger__TypeInfo_25_25, mdb__declarative_debugger__HeadVar__1_1, (MR_Word) mdb__declarative_debugger__V_7_7, (MR_Word) mdb__declarative_debugger__V_11_11);
#line 344 "declarative_debugger.m"
                      return;
                    }
#line 344 "declarative_debugger.m"
                  }
#line 344 "declarative_debugger.m"
              }
#line 344 "declarative_debugger.m"
          }
#line 344 "declarative_debugger.m"
      }
#line 344 "declarative_debugger.m"
  }
#line 344 "declarative_debugger.m"
}

#line 344 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_state_1_0(
#line 344 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_13,
#line 344 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 344 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 344 "declarative_debugger.m"
{
#line 344 "declarative_debugger.m"
  {
#line 344 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 344 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_11 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 344 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_12 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 344 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_11 == mdb__declarative_debugger__CastY_12);
#line 344 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 344 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 344 "declarative_debugger.m"
    else
#line 344 "declarative_debugger.m"
      {
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_15_15;
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeCtorInfo_19_19;
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_20_20;
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 344 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));

#line 5052 "mdb.declarative_debugger.c"
        {
#line 5054 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5056 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_15_15, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 5058 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_15_15, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_13));
#line 5060 "mdb.declarative_debugger.c"
        }
#line 5062 "mdb.declarative_debugger.c"
        {
#line 5064 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__succeeded = mdb__declarative_analyser____Unify____analyser_state_1_0(mdb__declarative_debugger__TypeInfo_15_15, (MR_Word) mdb__declarative_debugger__V_3_3, (MR_Word) mdb__declarative_debugger__V_7_7);
        }
#line 344 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 344 "declarative_debugger.m"
          {
#line 5071 "mdb.declarative_debugger.c"
            {
#line 5073 "mdb.declarative_debugger.c"
              mdb__declarative_debugger__succeeded = mdb__declarative_oracle____Unify____oracle_state_0_0(mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_8_8);
            }
#line 344 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 344 "declarative_debugger.m"
              {
#line 5080 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_5_5 == mdb__declarative_debugger__V_9_9);
#line 344 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 344 "declarative_debugger.m"
                  {
#line 5086 "mdb.declarative_debugger.c"
                    mdb__declarative_debugger__TypeCtorInfo_19_19 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1;
#line 5088 "mdb.declarative_debugger.c"
                    {
#line 5090 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 5092 "mdb.declarative_debugger.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_20_20, 0) = ((MR_Box) (mdb__declarative_debugger__TypeCtorInfo_19_19));
#line 5094 "mdb.declarative_debugger.c"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_20_20, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_13));
#line 5096 "mdb.declarative_debugger.c"
                    }
#line 5098 "mdb.declarative_debugger.c"
                    {
#line 5100 "mdb.declarative_debugger.c"
                      return mdb__declarative_debugger__succeeded = mercury__maybe____Unify____maybe_1_0(mdb__declarative_debugger__TypeInfo_20_20, (MR_Word) mdb__declarative_debugger__V_6_6, (MR_Word) mdb__declarative_debugger__V_10_10);
                    }
#line 344 "declarative_debugger.m"
                  }
#line 344 "declarative_debugger.m"
              }
#line 344 "declarative_debugger.m"
          }
#line 344 "declarative_debugger.m"
      }
#line 344 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 344 "declarative_debugger.m"
  }
#line 344 "declarative_debugger.m"
}

#line 228 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_response_1_0(
#line 228 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_90,
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
    MR_Integer mdb__declarative_debugger__CastX_88 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 228 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_89 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 228 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_88 == mdb__declarative_debugger__CastY_89);
#line 228 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 5144 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 228 "declarative_debugger.m"
    else
#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
#line 228 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
          switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 228 "declarative_debugger.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
            case (MR_Integer) 0:
#line 228 "declarative_debugger.m"
              *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 228 "declarative_debugger.m"
              break;
#line 228 "declarative_debugger.m"
            case (MR_Integer) 1:
#line 5168 "mdb.declarative_debugger.c"
              *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "declarative_debugger.m"
              break;
#line 228 "declarative_debugger.m"
            case (MR_Integer) 2:
#line 5174 "mdb.declarative_debugger.c"
              *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "declarative_debugger.m"
              break;
#line 228 "declarative_debugger.m"
            case (MR_Integer) 3:
#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
#line 228 "declarative_debugger.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
                case (MR_Integer) 0:
#line 5187 "mdb.declarative_debugger.c"
                  *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "declarative_debugger.m"
                  break;
#line 228 "declarative_debugger.m"
                case (MR_Integer) 1:
#line 5193 "mdb.declarative_debugger.c"
                  *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "declarative_debugger.m"
                  break;
#line 228 "declarative_debugger.m"
              }
#line 228 "declarative_debugger.m"
              break;
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
          break;
#line 228 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 228 "declarative_debugger.m"
          {
#line 228 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 228 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 5219 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "declarative_debugger.m"
                break;
#line 228 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 228 "declarative_debugger.m"
                {
#line 228 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

#line 228 "declarative_debugger.m"
                  {
#line 228 "declarative_debugger.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_98_98, mdb__declarative_debugger__V_5_5);
#line 228 "declarative_debugger.m"
                    return;
                  }
#line 228 "declarative_debugger.m"
                }
#line 228 "declarative_debugger.m"
                break;
#line 228 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 5243 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "declarative_debugger.m"
                break;
#line 228 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
#line 228 "declarative_debugger.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 0:
#line 5256 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 1:
#line 5262 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                }
#line 228 "declarative_debugger.m"
                break;
#line 228 "declarative_debugger.m"
            }
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
          break;
#line 228 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 228 "declarative_debugger.m"
          {
#line 228 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 228 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 5290 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "declarative_debugger.m"
                break;
#line 228 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 5296 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "declarative_debugger.m"
                break;
#line 228 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 228 "declarative_debugger.m"
                {
#line 228 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

#line 228 "declarative_debugger.m"
                  {
#line 228 "declarative_debugger.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_105_105, mdb__declarative_debugger__V_20_20);
#line 228 "declarative_debugger.m"
                    return;
                  }
#line 228 "declarative_debugger.m"
                }
#line 228 "declarative_debugger.m"
                break;
#line 228 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
#line 228 "declarative_debugger.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 0:
#line 5327 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 1:
#line 5333 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                }
#line 228 "declarative_debugger.m"
                break;
#line 228 "declarative_debugger.m"
            }
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
          break;
#line 228 "declarative_debugger.m"
        case (MR_Integer) 3:
#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)))) {
#line 228 "declarative_debugger.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
            case (MR_Integer) 0:
#line 228 "declarative_debugger.m"
              {
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 4)));
#line 228 "declarative_debugger.m"
                MR_Box mdb__declarative_debugger__V_100_100 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3));
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_101_101 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_102_102 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));

#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
                switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 228 "declarative_debugger.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 0:
#line 5374 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 1:
#line 5380 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 2:
#line 5386 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 3:
#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
#line 228 "declarative_debugger.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
                      case (MR_Integer) 0:
#line 228 "declarative_debugger.m"
                        {
#line 228 "declarative_debugger.m"
                          MR_Integer mdb__declarative_debugger__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 228 "declarative_debugger.m"
                          MR_Integer mdb__declarative_debugger__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 228 "declarative_debugger.m"
                          MR_Box mdb__declarative_debugger__V_58_58 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3));
#line 228 "declarative_debugger.m"
                          MR_Integer mdb__declarative_debugger__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 4)));
#line 228 "declarative_debugger.m"
                          MR_Word mdb__declarative_debugger__V_60_60;

#line 228 "declarative_debugger.m"
                          {
#line 228 "declarative_debugger.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__V_60_60, mdb__declarative_debugger__V_102_102, mdb__declarative_debugger__V_56_56);
                          }
#line 5417 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_60_60 == (MR_Integer) 0);
#line 228 "declarative_debugger.m"
                          mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 228 "declarative_debugger.m"
                          if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
                            *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_60_60;
#line 228 "declarative_debugger.m"
                          else
#line 228 "declarative_debugger.m"
                            {
#line 228 "declarative_debugger.m"
                              MR_Word mdb__declarative_debugger__V_61_61;

#line 228 "declarative_debugger.m"
                              {
#line 228 "declarative_debugger.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__V_61_61, mdb__declarative_debugger__V_101_101, mdb__declarative_debugger__V_57_57);
                              }
#line 5437 "mdb.declarative_debugger.c"
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_61_61 == (MR_Integer) 0);
#line 228 "declarative_debugger.m"
                              mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 228 "declarative_debugger.m"
                              if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
                                *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_61_61;
#line 228 "declarative_debugger.m"
                              else
#line 228 "declarative_debugger.m"
                                {
#line 228 "declarative_debugger.m"
                                  MR_Word mdb__declarative_debugger__V_62_62;

#line 228 "declarative_debugger.m"
                                  {
#line 228 "declarative_debugger.m"
                                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_R_90, &mdb__declarative_debugger__V_62_62, mdb__declarative_debugger__V_100_100, mdb__declarative_debugger__V_58_58);
                                  }
#line 5457 "mdb.declarative_debugger.c"
                                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_62_62 == (MR_Integer) 0);
#line 228 "declarative_debugger.m"
                                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 228 "declarative_debugger.m"
                                  if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
                                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_62_62;
#line 228 "declarative_debugger.m"
                                  else
#line 228 "declarative_debugger.m"
                                    {
#line 228 "declarative_debugger.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_99_99, mdb__declarative_debugger__V_59_59);
#line 228 "declarative_debugger.m"
                                      return;
                                    }
#line 228 "declarative_debugger.m"
                                }
#line 228 "declarative_debugger.m"
                            }
#line 228 "declarative_debugger.m"
                        }
#line 228 "declarative_debugger.m"
                        break;
#line 228 "declarative_debugger.m"
                      case (MR_Integer) 1:
#line 5484 "mdb.declarative_debugger.c"
                        *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 228 "declarative_debugger.m"
                        break;
#line 228 "declarative_debugger.m"
                    }
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                }
#line 228 "declarative_debugger.m"
              }
#line 228 "declarative_debugger.m"
              break;
#line 228 "declarative_debugger.m"
            case (MR_Integer) 1:
#line 228 "declarative_debugger.m"
              {
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_103_103 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_104_104 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));

#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
                switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 228 "declarative_debugger.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 0:
#line 5514 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 1:
#line 5520 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 2:
#line 5526 "mdb.declarative_debugger.c"
                    *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                  case (MR_Integer) 3:
#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)))) {
#line 228 "declarative_debugger.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
                      case (MR_Integer) 0:
#line 5539 "mdb.declarative_debugger.c"
                        *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 228 "declarative_debugger.m"
                        break;
#line 228 "declarative_debugger.m"
                      case (MR_Integer) 1:
#line 228 "declarative_debugger.m"
                        {
#line 228 "declarative_debugger.m"
                          MR_Integer mdb__declarative_debugger__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 228 "declarative_debugger.m"
                          MR_Integer mdb__declarative_debugger__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 228 "declarative_debugger.m"
                          MR_Word mdb__declarative_debugger__V_87_87;

#line 228 "declarative_debugger.m"
                          {
#line 228 "declarative_debugger.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__V_87_87, mdb__declarative_debugger__V_104_104, mdb__declarative_debugger__V_85_85);
                          }
#line 5559 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_87_87 == (MR_Integer) 0);
#line 228 "declarative_debugger.m"
                          mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 228 "declarative_debugger.m"
                          if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
                            *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_87_87;
#line 228 "declarative_debugger.m"
                          else
#line 228 "declarative_debugger.m"
                            {
#line 228 "declarative_debugger.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_103_103, mdb__declarative_debugger__V_86_86);
#line 228 "declarative_debugger.m"
                              return;
                            }
#line 228 "declarative_debugger.m"
                        }
#line 228 "declarative_debugger.m"
                        break;
#line 228 "declarative_debugger.m"
                    }
#line 228 "declarative_debugger.m"
                    break;
#line 228 "declarative_debugger.m"
                }
#line 228 "declarative_debugger.m"
              }
#line 228 "declarative_debugger.m"
              break;
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
          break;
#line 228 "declarative_debugger.m"
      }
#line 228 "declarative_debugger.m"
  }
#line 228 "declarative_debugger.m"
}

#line 228 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_response_1_0(
#line 228 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_23,
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
    MR_Integer mdb__declarative_debugger__CastX_21 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 228 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_22 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 228 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_21 == mdb__declarative_debugger__CastY_22);
#line 228 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 228 "declarative_debugger.m"
    else
#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 228 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 228 "declarative_debugger.m"
          {
#line 228 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__CastX_7 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 228 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__CastY_8 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 228 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastY_8 == mdb__declarative_debugger__CastX_7);
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
          break;
#line 228 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 228 "declarative_debugger.m"
          {
#line 228 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 228 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_4_4;

#line 228 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 228 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
              {
#line 228 "declarative_debugger.m"
                mdb__declarative_debugger__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 5666 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_3_3 == mdb__declarative_debugger__V_4_4);
#line 228 "declarative_debugger.m"
              }
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
          break;
#line 228 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 228 "declarative_debugger.m"
          {
#line 228 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 228 "declarative_debugger.m"
            MR_Integer mdb__declarative_debugger__V_6_6;

#line 228 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 228 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
              {
#line 228 "declarative_debugger.m"
                mdb__declarative_debugger__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 5691 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_5_5 == mdb__declarative_debugger__V_6_6);
#line 228 "declarative_debugger.m"
              }
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
          break;
#line 228 "declarative_debugger.m"
        case (MR_Integer) 3:
#line 228 "declarative_debugger.m"
#line 228 "declarative_debugger.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)))) {
#line 228 "declarative_debugger.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 228 "declarative_debugger.m"
            case (MR_Integer) 0:
#line 228 "declarative_debugger.m"
              {
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 228 "declarative_debugger.m"
                MR_Box mdb__declarative_debugger__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3));
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 4)));
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_13_13;
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_14_14;
#line 228 "declarative_debugger.m"
                MR_Box mdb__declarative_debugger__V_15_15;
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_16_16;

#line 228 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 228 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
                  {
#line 228 "declarative_debugger.m"
                    mdb__declarative_debugger__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 228 "declarative_debugger.m"
                    mdb__declarative_debugger__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 228 "declarative_debugger.m"
                    mdb__declarative_debugger__V_15_15 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3));
#line 228 "declarative_debugger.m"
                    mdb__declarative_debugger__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 4)));
#line 5741 "mdb.declarative_debugger.c"
                    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_9_9 == mdb__declarative_debugger__V_13_13);
#line 228 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
                      {
#line 5747 "mdb.declarative_debugger.c"
                        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_10_10 == mdb__declarative_debugger__V_14_14);
#line 228 "declarative_debugger.m"
                        if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
                          {
#line 5753 "mdb.declarative_debugger.c"
                            {
#line 5755 "mdb.declarative_debugger.c"
                              mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_R_23, mdb__declarative_debugger__V_11_11, mdb__declarative_debugger__V_15_15);
                            }
#line 228 "declarative_debugger.m"
                            if (mdb__declarative_debugger__succeeded)
#line 5760 "mdb.declarative_debugger.c"
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_12_12 == mdb__declarative_debugger__V_16_16);
#line 228 "declarative_debugger.m"
                          }
#line 228 "declarative_debugger.m"
                      }
#line 228 "declarative_debugger.m"
                  }
#line 228 "declarative_debugger.m"
              }
#line 228 "declarative_debugger.m"
              break;
#line 228 "declarative_debugger.m"
            case (MR_Integer) 1:
#line 228 "declarative_debugger.m"
              {
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_19_19;
#line 228 "declarative_debugger.m"
                MR_Integer mdb__declarative_debugger__V_20_20;

#line 228 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 228 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 228 "declarative_debugger.m"
                  {
#line 228 "declarative_debugger.m"
                    mdb__declarative_debugger__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 228 "declarative_debugger.m"
                    mdb__declarative_debugger__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 5795 "mdb.declarative_debugger.c"
                    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_17_17 == mdb__declarative_debugger__V_19_19);
#line 228 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 5799 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_18_18 == mdb__declarative_debugger__V_20_20);
#line 228 "declarative_debugger.m"
                  }
#line 228 "declarative_debugger.m"
              }
#line 228 "declarative_debugger.m"
              break;
#line 228 "declarative_debugger.m"
          }
#line 228 "declarative_debugger.m"
          break;
#line 228 "declarative_debugger.m"
      }
#line 228 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 228 "declarative_debugger.m"
  }
#line 228 "declarative_debugger.m"
}

#line 293 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____diagnoser_exception_0_0(
#line 293 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 293 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 293 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 293 "declarative_debugger.m"
{
#line 293 "declarative_debugger.m"
  {
#line 293 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 293 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_36 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 293 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_37 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 293 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_36 == mdb__declarative_debugger__CastY_37);
#line 293 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 5844 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 293 "declarative_debugger.m"
    else
#line 293 "declarative_debugger.m"
#line 293 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
#line 293 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 293 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 293 "declarative_debugger.m"
          {
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_43_43 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_44_44 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 293 "declarative_debugger.m"
#line 293 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 293 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 293 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 293 "declarative_debugger.m"
                {
#line 293 "declarative_debugger.m"
                  MR_String mdb__declarative_debugger__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 293 "declarative_debugger.m"
                  MR_String mdb__declarative_debugger__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 293 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_8_8;

#line 293 "declarative_debugger.m"
                  {
#line 293 "declarative_debugger.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_debugger__V_8_8, mdb__declarative_debugger__V_44_44, mdb__declarative_debugger__V_6_6);
                  }
#line 5883 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_8_8 == (MR_Integer) 0);
#line 293 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 293 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 293 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_8_8;
#line 293 "declarative_debugger.m"
                  else
#line 293 "declarative_debugger.m"
                    {
#line 293 "declarative_debugger.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_43_43, mdb__declarative_debugger__V_7_7);
#line 293 "declarative_debugger.m"
                      return;
                    }
#line 293 "declarative_debugger.m"
                }
#line 293 "declarative_debugger.m"
                break;
#line 293 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 5906 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 293 "declarative_debugger.m"
                break;
#line 293 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 5912 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 293 "declarative_debugger.m"
                break;
#line 293 "declarative_debugger.m"
            }
#line 293 "declarative_debugger.m"
          }
#line 293 "declarative_debugger.m"
          break;
#line 293 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 293 "declarative_debugger.m"
          {
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_45_45 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_46_46 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 293 "declarative_debugger.m"
#line 293 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 293 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 293 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 5938 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 293 "declarative_debugger.m"
                break;
#line 293 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 293 "declarative_debugger.m"
                {
#line 293 "declarative_debugger.m"
                  MR_String mdb__declarative_debugger__V_22_22 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 293 "declarative_debugger.m"
                  MR_String mdb__declarative_debugger__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 293 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_24_24;

#line 293 "declarative_debugger.m"
                  {
#line 293 "declarative_debugger.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_debugger__V_24_24, mdb__declarative_debugger__V_46_46, mdb__declarative_debugger__V_22_22);
                  }
#line 5958 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_24_24 == (MR_Integer) 0);
#line 293 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 293 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 293 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_24_24;
#line 293 "declarative_debugger.m"
                  else
#line 293 "declarative_debugger.m"
                    {
#line 293 "declarative_debugger.m"
                      mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_45_45, mdb__declarative_debugger__V_23_23);
#line 293 "declarative_debugger.m"
                      return;
                    }
#line 293 "declarative_debugger.m"
                }
#line 293 "declarative_debugger.m"
                break;
#line 293 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 5981 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 293 "declarative_debugger.m"
                break;
#line 293 "declarative_debugger.m"
            }
#line 293 "declarative_debugger.m"
          }
#line 293 "declarative_debugger.m"
          break;
#line 293 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 293 "declarative_debugger.m"
          {
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_47_47 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));

#line 293 "declarative_debugger.m"
#line 293 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 293 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 293 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 6005 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 293 "declarative_debugger.m"
                break;
#line 293 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 6011 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 293 "declarative_debugger.m"
                break;
#line 293 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 293 "declarative_debugger.m"
                {
#line 293 "declarative_debugger.m"
                  MR_String mdb__declarative_debugger__V_35_35 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));

#line 293 "declarative_debugger.m"
                  {
#line 293 "declarative_debugger.m"
                    mercury__private_builtin__builtin_compare_string_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_47_47, mdb__declarative_debugger__V_35_35);
#line 293 "declarative_debugger.m"
                    return;
                  }
#line 293 "declarative_debugger.m"
                }
#line 293 "declarative_debugger.m"
                break;
#line 293 "declarative_debugger.m"
            }
#line 293 "declarative_debugger.m"
          }
#line 293 "declarative_debugger.m"
          break;
#line 293 "declarative_debugger.m"
      }
#line 293 "declarative_debugger.m"
  }
#line 293 "declarative_debugger.m"
}

#line 293 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____diagnoser_exception_0_0(
#line 293 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 293 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 293 "declarative_debugger.m"
{
#line 293 "declarative_debugger.m"
  {
#line 293 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 293 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_13 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 293 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_14 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 293 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_13 == mdb__declarative_debugger__CastY_14);
#line 293 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 293 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 293 "declarative_debugger.m"
    else
#line 293 "declarative_debugger.m"
#line 293 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 293 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 293 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 293 "declarative_debugger.m"
          {
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_3_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_4_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_5_5;
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_6_6;

#line 293 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 293 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 293 "declarative_debugger.m"
              {
#line 293 "declarative_debugger.m"
                mdb__declarative_debugger__V_5_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "declarative_debugger.m"
                mdb__declarative_debugger__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 6100 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_5_5) == 0);
#line 293 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 6104 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_6_6) == 0);
#line 293 "declarative_debugger.m"
              }
#line 293 "declarative_debugger.m"
          }
#line 293 "declarative_debugger.m"
          break;
#line 293 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 293 "declarative_debugger.m"
          {
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_7_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_8_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_9_9;
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_10_10;

#line 293 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 293 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 293 "declarative_debugger.m"
              {
#line 293 "declarative_debugger.m"
                mdb__declarative_debugger__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 293 "declarative_debugger.m"
                mdb__declarative_debugger__V_10_10 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 6135 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__V_7_7, mdb__declarative_debugger__V_9_9) == 0);
#line 293 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 6139 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__V_8_8, mdb__declarative_debugger__V_10_10) == 0);
#line 293 "declarative_debugger.m"
              }
#line 293 "declarative_debugger.m"
          }
#line 293 "declarative_debugger.m"
          break;
#line 293 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 293 "declarative_debugger.m"
          {
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_11_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 293 "declarative_debugger.m"
            MR_String mdb__declarative_debugger__V_12_12;

#line 293 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 293 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 293 "declarative_debugger.m"
              {
#line 293 "declarative_debugger.m"
                mdb__declarative_debugger__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 6164 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__succeeded = (strcmp(mdb__declarative_debugger__V_11_11, mdb__declarative_debugger__V_12_12) == 0);
#line 293 "declarative_debugger.m"
              }
#line 293 "declarative_debugger.m"
          }
#line 293 "declarative_debugger.m"
          break;
#line 293 "declarative_debugger.m"
      }
#line 293 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 293 "declarative_debugger.m"
  }
#line 293 "declarative_debugger.m"
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
#line 82 "declarative_debugger.m"
      return;
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
#line 6222 "mdb.declarative_debugger.c"
  {
#line 6224 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__HeadVar__2_1 == mdb__declarative_debugger__HeadVar__2_2);

#line 6227 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 6229 "mdb.declarative_debugger.c"
  }
#line 82 "declarative_debugger.m"
}

#line 148 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_question_1_0(
#line 148 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_66,
#line 148 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 148 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 148 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 148 "declarative_debugger.m"
{
#line 148 "declarative_debugger.m"
  {
#line 148 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 148 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_64 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 148 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_65 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 148 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_64 == mdb__declarative_debugger__CastY_65);
#line 148 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 6260 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 148 "declarative_debugger.m"
    else
#line 148 "declarative_debugger.m"
#line 148 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) {
#line 148 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 148 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 148 "declarative_debugger.m"
          {
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_81_81 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 148 "declarative_debugger.m"
#line 148 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 148 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 148 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 148 "declarative_debugger.m"
                {
#line 148 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_7_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
#line 148 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 148 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_10_10;

#line 148 "declarative_debugger.m"
                  {
#line 148 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_66, &mdb__declarative_debugger__V_10_10, mdb__declarative_debugger__V_81_81, mdb__declarative_debugger__V_7_7);
                  }
#line 6303 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_10_10 == (MR_Integer) 0);
#line 148 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 148 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_10_10;
#line 148 "declarative_debugger.m"
                  else
#line 148 "declarative_debugger.m"
                    {
#line 148 "declarative_debugger.m"
                      MR_Word mdb__declarative_debugger__V_11_11;

#line 148 "declarative_debugger.m"
                      {
#line 148 "declarative_debugger.m"
                        mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_11_11, mdb__declarative_debugger__V_80_80, mdb__declarative_debugger__V_8_8);
                      }
#line 6323 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_11_11 == (MR_Integer) 0);
#line 148 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 148 "declarative_debugger.m"
                      if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_11_11;
#line 148 "declarative_debugger.m"
                      else
#line 148 "declarative_debugger.m"
                        {
#line 148 "declarative_debugger.m"
                          mdb__declarative_debugger____Compare____final_decl_atom_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_79_79, mdb__declarative_debugger__V_9_9);
#line 148 "declarative_debugger.m"
                          return;
                        }
#line 148 "declarative_debugger.m"
                    }
#line 148 "declarative_debugger.m"
                }
#line 148 "declarative_debugger.m"
                break;
#line 148 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 6348 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "declarative_debugger.m"
                break;
#line 148 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 6354 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "declarative_debugger.m"
                break;
#line 148 "declarative_debugger.m"
            }
#line 148 "declarative_debugger.m"
          }
#line 148 "declarative_debugger.m"
          break;
#line 148 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 148 "declarative_debugger.m"
          {
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_75_75 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 148 "declarative_debugger.m"
#line 148 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 148 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 148 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 6382 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "declarative_debugger.m"
                break;
#line 148 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 148 "declarative_debugger.m"
                {
#line 148 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_33_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
#line 148 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 148 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_36_36;

#line 148 "declarative_debugger.m"
                  {
#line 148 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_66, &mdb__declarative_debugger__V_36_36, mdb__declarative_debugger__V_75_75, mdb__declarative_debugger__V_33_33);
                  }
#line 6404 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_36_36 == (MR_Integer) 0);
#line 148 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 148 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_36_36;
#line 148 "declarative_debugger.m"
                  else
#line 148 "declarative_debugger.m"
                    {
#line 148 "declarative_debugger.m"
                      MR_Word mdb__declarative_debugger__V_37_37;

#line 148 "declarative_debugger.m"
                      {
#line 148 "declarative_debugger.m"
                        mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_37_37, mdb__declarative_debugger__V_74_74, mdb__declarative_debugger__V_34_34);
                      }
#line 6424 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_37_37 == (MR_Integer) 0);
#line 148 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 148 "declarative_debugger.m"
                      if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_37_37;
#line 148 "declarative_debugger.m"
                      else
#line 148 "declarative_debugger.m"
                        {
#line 148 "declarative_debugger.m"
                          {
#line 148 "declarative_debugger.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[3], mdb__declarative_debugger__HeadVar__1_1, ((MR_Box) (mdb__declarative_debugger__V_73_73)), ((MR_Box) (mdb__declarative_debugger__V_35_35)));
#line 148 "declarative_debugger.m"
                            return;
                          }
#line 148 "declarative_debugger.m"
                        }
#line 148 "declarative_debugger.m"
                    }
#line 148 "declarative_debugger.m"
                }
#line 148 "declarative_debugger.m"
                break;
#line 148 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 6453 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 148 "declarative_debugger.m"
                break;
#line 148 "declarative_debugger.m"
            }
#line 148 "declarative_debugger.m"
          }
#line 148 "declarative_debugger.m"
          break;
#line 148 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 148 "declarative_debugger.m"
          {
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_78_78 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 148 "declarative_debugger.m"
#line 148 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 148 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 148 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 6481 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "declarative_debugger.m"
                break;
#line 148 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 6487 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 148 "declarative_debugger.m"
                break;
#line 148 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 148 "declarative_debugger.m"
                {
#line 148 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_59_59 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
#line 148 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 148 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_62_62;

#line 148 "declarative_debugger.m"
                  {
#line 148 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_66, &mdb__declarative_debugger__V_62_62, mdb__declarative_debugger__V_78_78, mdb__declarative_debugger__V_59_59);
                  }
#line 6509 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_62_62 == (MR_Integer) 0);
#line 148 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 148 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_62_62;
#line 148 "declarative_debugger.m"
                  else
#line 148 "declarative_debugger.m"
                    {
#line 148 "declarative_debugger.m"
                      MR_Word mdb__declarative_debugger__V_63_63;

#line 148 "declarative_debugger.m"
                      {
#line 148 "declarative_debugger.m"
                        mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_63_63, mdb__declarative_debugger__V_77_77, mdb__declarative_debugger__V_60_60);
                      }
#line 6529 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_63_63 == (MR_Integer) 0);
#line 148 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 148 "declarative_debugger.m"
                      if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_63_63;
#line 148 "declarative_debugger.m"
                      else
#line 148 "declarative_debugger.m"
                        {
#line 148 "declarative_debugger.m"
                          mdb__term_rep____Compare____term_rep_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_76_76, mdb__declarative_debugger__V_61_61);
#line 148 "declarative_debugger.m"
                          return;
                        }
#line 148 "declarative_debugger.m"
                    }
#line 148 "declarative_debugger.m"
                }
#line 148 "declarative_debugger.m"
                break;
#line 148 "declarative_debugger.m"
            }
#line 148 "declarative_debugger.m"
          }
#line 148 "declarative_debugger.m"
          break;
#line 148 "declarative_debugger.m"
      }
#line 148 "declarative_debugger.m"
  }
#line 148 "declarative_debugger.m"
}

#line 148 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_question_1_0(
#line 148 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_23,
#line 148 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 148 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 148 "declarative_debugger.m"
{
#line 148 "declarative_debugger.m"
  {
#line 148 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 148 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_21 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 148 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_22 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 148 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_21 == mdb__declarative_debugger__CastY_22);
#line 148 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 148 "declarative_debugger.m"
    else
#line 148 "declarative_debugger.m"
#line 148 "declarative_debugger.m"
      switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 148 "declarative_debugger.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 148 "declarative_debugger.m"
        case (MR_Integer) 0:
#line 148 "declarative_debugger.m"
          {
#line 148 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 148 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_6_6;
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_7_7;
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_8_8;

#line 148 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 148 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
              {
#line 148 "declarative_debugger.m"
                mdb__declarative_debugger__V_6_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 148 "declarative_debugger.m"
                mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
                mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 6627 "mdb.declarative_debugger.c"
                {
#line 6629 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_6_6);
                }
#line 148 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
                  {
#line 6636 "mdb.declarative_debugger.c"
                    {
#line 6638 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_7_7);
                    }
#line 148 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 6643 "mdb.declarative_debugger.c"
                      {
#line 6645 "mdb.declarative_debugger.c"
                        return mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(mdb__declarative_debugger__V_5_5, mdb__declarative_debugger__V_8_8);
                      }
#line 148 "declarative_debugger.m"
                  }
#line 148 "declarative_debugger.m"
              }
#line 148 "declarative_debugger.m"
          }
#line 148 "declarative_debugger.m"
          break;
#line 148 "declarative_debugger.m"
        case (MR_Integer) 1:
#line 148 "declarative_debugger.m"
          {
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__TypeInfo_24_24;
#line 148 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 148 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_12_12;
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_13_13;
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_14_14;

#line 148 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 148 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
              {
#line 148 "declarative_debugger.m"
                mdb__declarative_debugger__V_12_12 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 148 "declarative_debugger.m"
                mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
                mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 6687 "mdb.declarative_debugger.c"
                {
#line 6689 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_9_9, mdb__declarative_debugger__V_12_12);
                }
#line 148 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
                  {
#line 6696 "mdb.declarative_debugger.c"
                    {
#line 6698 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_10_10, mdb__declarative_debugger__V_13_13);
                    }
#line 148 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
                      {
#line 6705 "mdb.declarative_debugger.c"
                        mdb__declarative_debugger__TypeInfo_24_24 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[3];
#line 6707 "mdb.declarative_debugger.c"
                        {
#line 6709 "mdb.declarative_debugger.c"
                          return mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_24_24, ((MR_Box) (mdb__declarative_debugger__V_11_11)), ((MR_Box) (mdb__declarative_debugger__V_14_14)));
                        }
#line 148 "declarative_debugger.m"
                      }
#line 148 "declarative_debugger.m"
                  }
#line 148 "declarative_debugger.m"
              }
#line 148 "declarative_debugger.m"
          }
#line 148 "declarative_debugger.m"
          break;
#line 148 "declarative_debugger.m"
        case (MR_Integer) 2:
#line 148 "declarative_debugger.m"
          {
#line 148 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_15_15 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 148 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_18_18;
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_19_19;
#line 148 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_20_20;

#line 148 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 148 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
              {
#line 148 "declarative_debugger.m"
                mdb__declarative_debugger__V_18_18 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 148 "declarative_debugger.m"
                mdb__declarative_debugger__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 148 "declarative_debugger.m"
                mdb__declarative_debugger__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 6751 "mdb.declarative_debugger.c"
                {
#line 6753 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_15_15, mdb__declarative_debugger__V_18_18);
                }
#line 148 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 148 "declarative_debugger.m"
                  {
#line 6760 "mdb.declarative_debugger.c"
                    {
#line 6762 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_16_16, mdb__declarative_debugger__V_19_19);
                    }
#line 148 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 6767 "mdb.declarative_debugger.c"
                      {
#line 6769 "mdb.declarative_debugger.c"
                        return mdb__declarative_debugger__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_debugger__V_17_17, mdb__declarative_debugger__V_20_20);
                      }
#line 148 "declarative_debugger.m"
                  }
#line 148 "declarative_debugger.m"
              }
#line 148 "declarative_debugger.m"
          }
#line 148 "declarative_debugger.m"
          break;
#line 148 "declarative_debugger.m"
      }
#line 148 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 148 "declarative_debugger.m"
  }
#line 148 "declarative_debugger.m"
}

#line 138 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_position_0_0(
#line 138 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1)
#line 138 "declarative_debugger.m"
{
#line 138 "declarative_debugger.m"
  {
#line 138 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 138 "declarative_debugger.m"
    {
#line 138 "declarative_debugger.m"
      mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(mdb__declarative_debugger__HeadVar__1_1);
#line 138 "declarative_debugger.m"
      return;
    }
#line 138 "declarative_debugger.m"
  }
#line 138 "declarative_debugger.m"
}

#line 138 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_position_0_0(void)
#line 138 "declarative_debugger.m"
{
#line 138 "declarative_debugger.m"
  {
#line 138 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 138 "declarative_debugger.m"
    {
#line 138 "declarative_debugger.m"
      return mdb__declarative_debugger__succeeded = mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_85_110_105_102_121_95_95_95_109_100_98_95_95_100_101_99_108_97_114_97_116_105_118_101_95_100_101_98_117_103_103_101_114_95_95_100_101_99_108_95_112_111_115_105_116_105_111_110_95_48_95_95_91_49_44_32_50_93_95_48_2_p_0();
    }
#line 138 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 138 "declarative_debugger.m"
  }
#line 138 "declarative_debugger.m"
}

#line 126 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_i_bug_0_0(
#line 126 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 126 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 126 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 126 "declarative_debugger.m"
{
#line 126 "declarative_debugger.m"
  {
#line 126 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 126 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_14 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 126 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_15 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 126 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_14 == mdb__declarative_debugger__CastY_15);
#line 126 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 6859 "mdb.declarative_debugger.c"
      *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 0;
#line 126 "declarative_debugger.m"
    else
#line 126 "declarative_debugger.m"
      {
#line 126 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 126 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 126 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));
#line 126 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0)));
#line 126 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 126 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)));
#line 126 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_12_12;

#line 126 "declarative_debugger.m"
        {
#line 126 "declarative_debugger.m"
          mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_12_12, mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_8_8);
        }
#line 6885 "mdb.declarative_debugger.c"
        mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_12_12 == (MR_Integer) 0);
#line 126 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 126 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 126 "declarative_debugger.m"
          *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_12_12;
#line 126 "declarative_debugger.m"
        else
#line 126 "declarative_debugger.m"
          {
#line 126 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_13_13;

#line 126 "declarative_debugger.m"
            {
#line 126 "declarative_debugger.m"
              mdb__declarative_debugger____Compare____init_decl_atom_0_0(&mdb__declarative_debugger__V_13_13, mdb__declarative_debugger__V_6_6, mdb__declarative_debugger__V_10_10);
            }
#line 6905 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_13_13 == (MR_Integer) 0);
#line 126 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 126 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 126 "declarative_debugger.m"
              *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_13_13;
#line 126 "declarative_debugger.m"
            else
#line 126 "declarative_debugger.m"
              {
#line 126 "declarative_debugger.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_7_7, mdb__declarative_debugger__V_11_11);
#line 126 "declarative_debugger.m"
                return;
              }
#line 126 "declarative_debugger.m"
          }
#line 126 "declarative_debugger.m"
      }
#line 126 "declarative_debugger.m"
  }
#line 126 "declarative_debugger.m"
}

#line 126 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_i_bug_0_0(
#line 126 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 126 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 126 "declarative_debugger.m"
{
#line 126 "declarative_debugger.m"
  {
#line 126 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 126 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastX_11 = (MR_Integer) mdb__declarative_debugger__HeadVar__1_1;
#line 126 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_12 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;

#line 126 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_11 == mdb__declarative_debugger__CastY_12);
#line 126 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 126 "declarative_debugger.m"
      mdb__declarative_debugger__succeeded = MR_TRUE;
#line 126 "declarative_debugger.m"
    else
#line 126 "declarative_debugger.m"
      {
#line 126 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 126 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 126 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)));
#line 126 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0)));
#line 126 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 126 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)));

#line 6972 "mdb.declarative_debugger.c"
        {
#line 6974 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_7_7);
        }
#line 126 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 126 "declarative_debugger.m"
          {
#line 6981 "mdb.declarative_debugger.c"
            {
#line 6983 "mdb.declarative_debugger.c"
              mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_5_5, mdb__declarative_debugger__V_9_9);
            }
#line 126 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 6988 "mdb.declarative_debugger.c"
              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_6_6 == mdb__declarative_debugger__V_10_10);
#line 126 "declarative_debugger.m"
          }
#line 126 "declarative_debugger.m"
      }
#line 126 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 126 "declarative_debugger.m"
  }
#line 126 "declarative_debugger.m"
}

#line 223 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_exception_0_0(
#line 223 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 223 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 223 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 223 "declarative_debugger.m"
{
#line 223 "declarative_debugger.m"
  {
#line 223 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 223 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_4 = mdb__declarative_debugger__HeadVar__2_2;
#line 223 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_5 = mdb__declarative_debugger__HeadVar__3_3;

#line 223 "declarative_debugger.m"
    {
#line 223 "declarative_debugger.m"
      mdb__term_rep____Compare____term_rep_0_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__Cast_HeadVar1_4, mdb__declarative_debugger__Cast_HeadVar2_5);
#line 223 "declarative_debugger.m"
      return;
    }
#line 223 "declarative_debugger.m"
  }
#line 223 "declarative_debugger.m"
}

#line 223 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_exception_0_0(
#line 223 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 223 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 223 "declarative_debugger.m"
{
#line 223 "declarative_debugger.m"
  {
#line 223 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 223 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_3 = mdb__declarative_debugger__HeadVar__1_1;
#line 223 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_4 = mdb__declarative_debugger__HeadVar__2_2;

#line 223 "declarative_debugger.m"
    {
#line 223 "declarative_debugger.m"
      return mdb__declarative_debugger__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_debugger__Cast_HeadVar1_3, mdb__declarative_debugger__Cast_HeadVar2_4);
    }
#line 223 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 223 "declarative_debugger.m"
  }
#line 223 "declarative_debugger.m"
}

#line 198 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_evidence_1_0(
#line 198 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_6,
#line 198 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 198 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 198 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 198 "declarative_debugger.m"
{
#line 198 "declarative_debugger.m"
  {
#line 198 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 198 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_8_8;
#line 198 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_4 = mdb__declarative_debugger__HeadVar__2_2;
#line 198 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_5 = mdb__declarative_debugger__HeadVar__3_3;

#line 7087 "mdb.declarative_debugger.c"
    {
#line 7089 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7091 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_8_8, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 7093 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_8_8, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_T_6));
#line 7095 "mdb.declarative_debugger.c"
    }
#line 198 "declarative_debugger.m"
    {
#line 198 "declarative_debugger.m"
      mercury__list____Compare____list_1_0(mdb__declarative_debugger__TypeInfo_8_8, mdb__declarative_debugger__HeadVar__1_1, (MR_Word) mdb__declarative_debugger__Cast_HeadVar1_4, (MR_Word) mdb__declarative_debugger__Cast_HeadVar2_5);
#line 198 "declarative_debugger.m"
      return;
    }
#line 198 "declarative_debugger.m"
  }
#line 198 "declarative_debugger.m"
}

#line 198 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_evidence_1_0(
#line 198 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_5,
#line 198 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 198 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 198 "declarative_debugger.m"
{
#line 198 "declarative_debugger.m"
  {
#line 198 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 198 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_7_7;
#line 198 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_3 = mdb__declarative_debugger__HeadVar__1_1;
#line 198 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_4 = mdb__declarative_debugger__HeadVar__2_2;

#line 7131 "mdb.declarative_debugger.c"
    {
#line 7133 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7135 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_7_7, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 7137 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_7_7, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_T_5));
#line 7139 "mdb.declarative_debugger.c"
    }
#line 198 "declarative_debugger.m"
    {
#line 198 "declarative_debugger.m"
      return mdb__declarative_debugger__succeeded = mercury__list____Unify____list_1_0(mdb__declarative_debugger__TypeInfo_7_7, (MR_Word) mdb__declarative_debugger__Cast_HeadVar1_3, (MR_Word) mdb__declarative_debugger__Cast_HeadVar2_4);
    }
#line 198 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 198 "declarative_debugger.m"
  }
#line 198 "declarative_debugger.m"
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
#line 7177 "mdb.declarative_debugger.c"
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
#line 7224 "mdb.declarative_debugger.c"
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
#line 7244 "mdb.declarative_debugger.c"
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
#line 7264 "mdb.declarative_debugger.c"
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
#line 107 "declarative_debugger.m"
                              return;
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
#line 7291 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 7297 "mdb.declarative_debugger.c"
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
#line 7323 "mdb.declarative_debugger.c"
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
#line 7343 "mdb.declarative_debugger.c"
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
#line 107 "declarative_debugger.m"
                      return;
                    }
#line 107 "declarative_debugger.m"
                }
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 7366 "mdb.declarative_debugger.c"
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
#line 7394 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 107 "declarative_debugger.m"
                break;
#line 107 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 7400 "mdb.declarative_debugger.c"
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
#line 7422 "mdb.declarative_debugger.c"
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
#line 7442 "mdb.declarative_debugger.c"
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
#line 107 "declarative_debugger.m"
                          return;
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
#line 7546 "mdb.declarative_debugger.c"
                {
#line 7548 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_7_7);
                }
#line 107 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                  {
#line 7555 "mdb.declarative_debugger.c"
                    {
#line 7557 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____final_decl_atom_0_0(mdb__declarative_debugger__V_4_4, mdb__declarative_debugger__V_8_8);
                    }
#line 107 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                      {
#line 7564 "mdb.declarative_debugger.c"
                        mdb__declarative_debugger__TypeInfo_23_23 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[3];
#line 7566 "mdb.declarative_debugger.c"
                        {
#line 7568 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_23_23, ((MR_Box) (mdb__declarative_debugger__V_5_5)), ((MR_Box) (mdb__declarative_debugger__V_9_9)));
                        }
#line 107 "declarative_debugger.m"
                        if (mdb__declarative_debugger__succeeded)
#line 7573 "mdb.declarative_debugger.c"
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
#line 7608 "mdb.declarative_debugger.c"
                {
#line 7610 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_11_11, mdb__declarative_debugger__V_13_13);
                }
#line 107 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 7615 "mdb.declarative_debugger.c"
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
#line 7652 "mdb.declarative_debugger.c"
                {
#line 7654 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____init_decl_atom_0_0(mdb__declarative_debugger__V_15_15, mdb__declarative_debugger__V_18_18);
                }
#line 107 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 107 "declarative_debugger.m"
                  {
#line 7661 "mdb.declarative_debugger.c"
                    {
#line 7663 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_debugger__V_16_16, mdb__declarative_debugger__V_19_19);
                    }
#line 107 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 7668 "mdb.declarative_debugger.c"
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

#line 134 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_contour_0_0(
#line 134 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__HeadVar__1_1,
#line 134 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2,
#line 134 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__3_3)
#line 134 "declarative_debugger.m"
{
#line 134 "declarative_debugger.m"
  {
#line 134 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 134 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_4 = mdb__declarative_debugger__HeadVar__2_2;
#line 134 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_5 = mdb__declarative_debugger__HeadVar__3_3;

#line 134 "declarative_debugger.m"
    {
#line 134 "declarative_debugger.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[3], mdb__declarative_debugger__HeadVar__1_1, ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar1_4)), ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar2_5)));
#line 134 "declarative_debugger.m"
      return;
    }
#line 134 "declarative_debugger.m"
  }
#line 134 "declarative_debugger.m"
}

#line 134 "declarative_debugger.m"
MR_bool MR_CALL 
mdb__declarative_debugger____Unify____decl_contour_0_0(
#line 134 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 134 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__2_2)
#line 134 "declarative_debugger.m"
{
#line 134 "declarative_debugger.m"
  {
#line 134 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 134 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar1_3 = mdb__declarative_debugger__HeadVar__1_1;
#line 134 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Cast_HeadVar2_4 = mdb__declarative_debugger__HeadVar__2_2;

#line 134 "declarative_debugger.m"
    {
#line 134 "declarative_debugger.m"
      return mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[3], ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar1_3)), ((MR_Box) (mdb__declarative_debugger__Cast_HeadVar2_4)));
    }
#line 134 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 134 "declarative_debugger.m"
  }
#line 134 "declarative_debugger.m"
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
#line 90 "declarative_debugger.m"
      return;
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
#line 7790 "mdb.declarative_debugger.c"
  {
#line 7792 "mdb.declarative_debugger.c"
    MR_bool mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__HeadVar__2_1 == mdb__declarative_debugger__HeadVar__2_2);

#line 7795 "mdb.declarative_debugger.c"
    return mdb__declarative_debugger__succeeded;
#line 7797 "mdb.declarative_debugger.c"
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
#line 7826 "mdb.declarative_debugger.c"
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
#line 98 "declarative_debugger.m"
              return;
            }
#line 98 "declarative_debugger.m"
          }
#line 98 "declarative_debugger.m"
        else
#line 7855 "mdb.declarative_debugger.c"
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
#line 7868 "mdb.declarative_debugger.c"
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
#line 98 "declarative_debugger.m"
              return;
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
#line 7936 "mdb.declarative_debugger.c"
            {
#line 7938 "mdb.declarative_debugger.c"
              return mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_e_bug_0_0(mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_4_4);
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
#line 7962 "mdb.declarative_debugger.c"
            {
#line 7964 "mdb.declarative_debugger.c"
              return mdb__declarative_debugger__succeeded = mdb__declarative_debugger____Unify____decl_i_bug_0_0(mdb__declarative_debugger__V_5_5, mdb__declarative_debugger__V_6_6);
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

#line 168 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger____Compare____decl_answer_1_0(
#line 168 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_83,
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
    MR_Integer mdb__declarative_debugger__CastX_81 = (MR_Integer) mdb__declarative_debugger__HeadVar__2_2;
#line 168 "declarative_debugger.m"
    MR_Integer mdb__declarative_debugger__CastY_82 = (MR_Integer) mdb__declarative_debugger__HeadVar__3_3;

#line 168 "declarative_debugger.m"
    mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__CastX_81 == mdb__declarative_debugger__CastY_82);
#line 168 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 8004 "mdb.declarative_debugger.c"
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
            MR_Word mdb__declarative_debugger__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_97_97 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

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
                  MR_Box mdb__declarative_debugger__V_6_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_8_8;

#line 168 "declarative_debugger.m"
                  {
#line 168 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, &mdb__declarative_debugger__V_8_8, mdb__declarative_debugger__V_97_97, mdb__declarative_debugger__V_6_6);
                  }
#line 8043 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_8_8 == (MR_Integer) 0);
#line 168 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 168 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_8_8;
#line 168 "declarative_debugger.m"
                  else
#line 168 "declarative_debugger.m"
                    {
#line 168 "declarative_debugger.m"
                      MR_Integer mdb__declarative_debugger__V_102_102 = (MR_Integer) mdb__declarative_debugger__V_96_96;
#line 168 "declarative_debugger.m"
                      MR_Integer mdb__declarative_debugger__V_103_103 = (MR_Integer) mdb__declarative_debugger__V_7_7;

#line 168 "declarative_debugger.m"
                      {
#line 168 "declarative_debugger.m"
                        mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_102_102, mdb__declarative_debugger__V_103_103);
#line 168 "declarative_debugger.m"
                        return;
                      }
#line 168 "declarative_debugger.m"
                    }
#line 168 "declarative_debugger.m"
                }
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 8075 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 8081 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 8087 "mdb.declarative_debugger.c"
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
            MR_Word mdb__declarative_debugger__V_91_91 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_92_92 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_95_95 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 168 "declarative_debugger.m"
#line 168 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 168 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 168 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 8119 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 168 "declarative_debugger.m"
                {
#line 168 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_34_34 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_37_37 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_38_38 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 168 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_39_39;

#line 168 "declarative_debugger.m"
                  {
#line 168 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, &mdb__declarative_debugger__V_39_39, mdb__declarative_debugger__V_95_95, mdb__declarative_debugger__V_34_34);
                  }
#line 8145 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_39_39 == (MR_Integer) 0);
#line 168 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 168 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                    *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_39_39;
#line 168 "declarative_debugger.m"
                  else
#line 168 "declarative_debugger.m"
                    {
#line 168 "declarative_debugger.m"
                      MR_Word mdb__declarative_debugger__V_40_40;

#line 168 "declarative_debugger.m"
                      {
#line 168 "declarative_debugger.m"
                        mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_debugger__V_40_40, mdb__declarative_debugger__V_94_94, mdb__declarative_debugger__V_35_35);
                      }
#line 8165 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_40_40 == (MR_Integer) 0);
#line 168 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 168 "declarative_debugger.m"
                      if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                        *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_40_40;
#line 168 "declarative_debugger.m"
                      else
#line 168 "declarative_debugger.m"
                        {
#line 168 "declarative_debugger.m"
                          MR_Word mdb__declarative_debugger__V_41_41;

#line 168 "declarative_debugger.m"
                          {
#line 168 "declarative_debugger.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[2], &mdb__declarative_debugger__V_41_41, ((MR_Box) (mdb__declarative_debugger__V_93_93)), ((MR_Box) (mdb__declarative_debugger__V_36_36)));
                          }
#line 8185 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_41_41 == (MR_Integer) 0);
#line 168 "declarative_debugger.m"
                          mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 168 "declarative_debugger.m"
                          if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                            *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_41_41;
#line 168 "declarative_debugger.m"
                          else
#line 168 "declarative_debugger.m"
                            {
#line 168 "declarative_debugger.m"
                              MR_Word mdb__declarative_debugger__V_42_42;
#line 168 "declarative_debugger.m"
                              MR_Integer mdb__declarative_debugger__V_98_98 = (MR_Integer) mdb__declarative_debugger__V_92_92;
#line 168 "declarative_debugger.m"
                              MR_Integer mdb__declarative_debugger__V_99_99 = (MR_Integer) mdb__declarative_debugger__V_37_37;

#line 168 "declarative_debugger.m"
                              {
#line 168 "declarative_debugger.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_debugger__V_42_42, mdb__declarative_debugger__V_98_98, mdb__declarative_debugger__V_99_99);
                              }
#line 8209 "mdb.declarative_debugger.c"
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_42_42 == (MR_Integer) 0);
#line 168 "declarative_debugger.m"
                              mdb__declarative_debugger__succeeded = !(mdb__declarative_debugger__succeeded);
#line 168 "declarative_debugger.m"
                              if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                                *mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_debugger__V_42_42;
#line 168 "declarative_debugger.m"
                              else
#line 168 "declarative_debugger.m"
                                {
#line 168 "declarative_debugger.m"
                                  MR_Integer mdb__declarative_debugger__V_100_100 = (MR_Integer) mdb__declarative_debugger__V_91_91;
#line 168 "declarative_debugger.m"
                                  MR_Integer mdb__declarative_debugger__V_101_101 = (MR_Integer) mdb__declarative_debugger__V_38_38;

#line 168 "declarative_debugger.m"
                                  {
#line 168 "declarative_debugger.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_100_100, mdb__declarative_debugger__V_101_101);
#line 168 "declarative_debugger.m"
                                    return;
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
                }
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 8247 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 1;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 8253 "mdb.declarative_debugger.c"
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
            MR_Box mdb__declarative_debugger__V_89_89 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 168 "declarative_debugger.m"
#line 168 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 168 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 168 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 8277 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 8283 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 168 "declarative_debugger.m"
                {
#line 168 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_65_65 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));

#line 168 "declarative_debugger.m"
                  {
#line 168 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_89_89, mdb__declarative_debugger__V_65_65);
#line 168 "declarative_debugger.m"
                    return;
                  }
#line 168 "declarative_debugger.m"
                }
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 8307 "mdb.declarative_debugger.c"
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
        case (MR_Integer) 3:
#line 168 "declarative_debugger.m"
          {
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_90_90 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));

#line 168 "declarative_debugger.m"
#line 168 "declarative_debugger.m"
            switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__3_3)) {
#line 168 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 168 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 8331 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 8337 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 8343 "mdb.declarative_debugger.c"
                *mdb__declarative_debugger__HeadVar__1_1 = (MR_Integer) 2;
#line 168 "declarative_debugger.m"
                break;
#line 168 "declarative_debugger.m"
              case (MR_Integer) 3:
#line 168 "declarative_debugger.m"
                {
#line 168 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_80_80 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__3_3, (MR_Integer) 0));

#line 168 "declarative_debugger.m"
                  {
#line 168 "declarative_debugger.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_debugger__TypeInfo_for_T_83, mdb__declarative_debugger__HeadVar__1_1, mdb__declarative_debugger__V_90_90, mdb__declarative_debugger__V_80_80);
#line 168 "declarative_debugger.m"
                    return;
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
mdb__declarative_debugger____Unify____decl_answer_1_0(
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
            MR_Box mdb__declarative_debugger__V_5_5;
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_6_6;

#line 168 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 168 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
              {
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 1)));
#line 8434 "mdb.declarative_debugger.c"
                {
#line 8436 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_3_3, mdb__declarative_debugger__V_5_5);
                }
#line 168 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 8441 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_4_4 == mdb__declarative_debugger__V_6_6);
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
            MR_Word mdb__declarative_debugger__TypeInfo_25_25;
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_10_10 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_11_11 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_12_12;
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_13_13;
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_14_14;
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_15_15;
#line 168 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__V_16_16;

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
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_15_15 = ((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 1);
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_16_16 = ((((((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 1)) & (MR_Integer) 1);
#line 8492 "mdb.declarative_debugger.c"
                {
#line 8494 "mdb.declarative_debugger.c"
                  mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_7_7, mdb__declarative_debugger__V_12_12);
                }
#line 168 "declarative_debugger.m"
                if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                  {
#line 8501 "mdb.declarative_debugger.c"
                    {
#line 8503 "mdb.declarative_debugger.c"
                      mdb__declarative_debugger__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_debugger__V_8_8, mdb__declarative_debugger__V_13_13);
                    }
#line 168 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                      {
#line 8510 "mdb.declarative_debugger.c"
                        mdb__declarative_debugger__TypeInfo_25_25 = (MR_Word) &mdb__declarative_debugger_scalar_common_1[2];
#line 8512 "mdb.declarative_debugger.c"
                        {
#line 8514 "mdb.declarative_debugger.c"
                          mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_25_25, ((MR_Box) (mdb__declarative_debugger__V_9_9)), ((MR_Box) (mdb__declarative_debugger__V_14_14)));
                        }
#line 168 "declarative_debugger.m"
                        if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
                          {
#line 8521 "mdb.declarative_debugger.c"
                            mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_10_10 == mdb__declarative_debugger__V_15_15);
#line 168 "declarative_debugger.m"
                            if (mdb__declarative_debugger__succeeded)
#line 8525 "mdb.declarative_debugger.c"
                              mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__V_11_11 == mdb__declarative_debugger__V_16_16);
#line 168 "declarative_debugger.m"
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
            MR_Box mdb__declarative_debugger__V_17_17 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_18_18;

#line 168 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 168 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
              {
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_18_18 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 8556 "mdb.declarative_debugger.c"
                {
#line 8558 "mdb.declarative_debugger.c"
                  return mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_17_17, mdb__declarative_debugger__V_18_18);
                }
#line 168 "declarative_debugger.m"
              }
#line 168 "declarative_debugger.m"
          }
#line 168 "declarative_debugger.m"
          break;
#line 168 "declarative_debugger.m"
        case (MR_Integer) 3:
#line 168 "declarative_debugger.m"
          {
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 168 "declarative_debugger.m"
            MR_Box mdb__declarative_debugger__V_20_20;

#line 168 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 168 "declarative_debugger.m"
            if (mdb__declarative_debugger__succeeded)
#line 168 "declarative_debugger.m"
              {
#line 168 "declarative_debugger.m"
                mdb__declarative_debugger__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__2_2, (MR_Integer) 0));
#line 8584 "mdb.declarative_debugger.c"
                {
#line 8586 "mdb.declarative_debugger.c"
                  return mdb__declarative_debugger__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_debugger__TypeInfo_for_T_23, mdb__declarative_debugger__V_19_19, mdb__declarative_debugger__V_20_20);
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

#line 971 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__debug_origin_3_p_0(
#line 971 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Flag_1)
#line 971 "declarative_debugger.m"
{
#line 973 "declarative_debugger.m"
  {
#line 973 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 976 "declarative_debugger.m"
{
#define MR_PROC_LABEL mdb__declarative_debugger__debug_origin_3_p_0

	MR_Integer Flag;

		{
#line 976 "declarative_debugger.m"

    Flag = MR_DD_debug_origin;

#line 8627 "mdb.declarative_debugger.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_debugger__Flag_1  = Flag;
#line 976 "declarative_debugger.m"
}
#line 973 "declarative_debugger.m"
  }
#line 971 "declarative_debugger.m"
}

#line 934 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__write_origin_4_p_0(
#line 934 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38,
#line 934 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 934 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Origin_6)
#line 934 "declarative_debugger.m"
{
#line 937 "declarative_debugger.m"
  {
#line 937 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__Origin_6)) == (MR_mktag((MR_Integer) 1)));
#line 937 "declarative_debugger.m"
    MR_Box mdb__declarative_debugger__Store_5 = ((MR_Box) (mdb__declarative_debugger__HeadVar__1_1));
#line 950 "declarative_debugger.m"
    MR_Box mdb__declarative_debugger__NodeId_8;
#line 950 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__ArgPos_9;
#line 950 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TermPath_10;
#line 938 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_17_17;

#line 938 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 938 "declarative_debugger.m"
      {
#line 938 "declarative_debugger.m"
        mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Origin_6, (MR_Integer) 0)));
#line 938 "declarative_debugger.m"
        mdb__declarative_debugger__ArgPos_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Origin_6, (MR_Integer) 1)));
#line 938 "declarative_debugger.m"
        mdb__declarative_debugger__TermPath_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Origin_6, (MR_Integer) 2)));
#line 938 "declarative_debugger.m"
        mdb__declarative_debugger__NodeId_8 = ((MR_Box) (mdb__declarative_debugger__V_17_17));
#line 938 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = MR_TRUE;
#line 938 "declarative_debugger.m"
      }
#line 950 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 939 "declarative_debugger.m"
      {
#line 939 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__ExitNode_11;
#line 939 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__ProcLayout_12;
#line 939 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__ProcLabel_13;
#line 939 "declarative_debugger.m"
        MR_String mdb__declarative_debugger__ProcName_14;
#line 939 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__V_18_18;
#line 940 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__V_31_31;
#line 940 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__V_32_32;
#line 940 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__V_33_33;
#line 940 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_34_34;
#line 940 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_35_35;
#line 940 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_36_36;
#line 940 "declarative_debugger.m"
        MR_Integer mdb__declarative_debugger__V_37_37;

#line 939 "declarative_debugger.m"
        {
#line 939 "declarative_debugger.m"
          mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38, mdb__declarative_debugger__Store_5, mdb__declarative_debugger__NodeId_8, &mdb__declarative_debugger__ExitNode_11);
        }
#line 940 "declarative_debugger.m"
        mdb__declarative_debugger__V_31_31 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 0));
#line 940 "declarative_debugger.m"
        mdb__declarative_debugger__V_32_32 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 1));
#line 940 "declarative_debugger.m"
        mdb__declarative_debugger__V_33_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 2));
#line 940 "declarative_debugger.m"
        mdb__declarative_debugger__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 3)));
#line 940 "declarative_debugger.m"
        mdb__declarative_debugger__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 4)));
#line 940 "declarative_debugger.m"
        mdb__declarative_debugger__V_18_18 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 5)));
#line 940 "declarative_debugger.m"
        mdb__declarative_debugger__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 6)));
#line 940 "declarative_debugger.m"
        mdb__declarative_debugger__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__ExitNode_11, (MR_Integer) 7)));
#line 940 "declarative_debugger.m"
        {
#line 940 "declarative_debugger.m"
          mdb__declarative_debugger__ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_debugger__V_18_18);
        }
#line 941 "declarative_debugger.m"
        {
#line 941 "declarative_debugger.m"
          mdb__declarative_debugger__ProcLabel_13 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_debugger__ProcLayout_12);
        }
#line 942 "declarative_debugger.m"
        {
#line 942 "declarative_debugger.m"
          mdb__declarative_debugger__ProcName_14 = mdbcomp__rtti_access__get_proc_name_1_f_0(mdb__declarative_debugger__ProcLabel_13);
        }
#line 943 "declarative_debugger.m"
        {
#line 943 "declarative_debugger.m"
          mercury__io__write_string_3_p_0((MR_String) "output(");
        }
#line 944 "declarative_debugger.m"
        {
#line 944 "declarative_debugger.m"
          mercury__io__write_string_3_p_0(mdb__declarative_debugger__ProcName_14);
        }
#line 945 "declarative_debugger.m"
        {
#line 945 "declarative_debugger.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 946 "declarative_debugger.m"
        {
#line 946 "declarative_debugger.m"
          mercury__io__write_3_p_0((MR_Word) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0, ((MR_Box) (mdb__declarative_debugger__ArgPos_9)));
        }
#line 947 "declarative_debugger.m"
        {
#line 947 "declarative_debugger.m"
          mercury__io__write_string_3_p_0((MR_String) ", ");
        }
#line 948 "declarative_debugger.m"
        {
#line 948 "declarative_debugger.m"
          mercury__io__write_3_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[2], ((MR_Box) (mdb__declarative_debugger__TermPath_10)));
        }
#line 949 "declarative_debugger.m"
        {
#line 949 "declarative_debugger.m"
          mercury__io__write_string_3_p_0((MR_String) ")");
#line 949 "declarative_debugger.m"
          return;
        }
#line 939 "declarative_debugger.m"
      }
#line 950 "declarative_debugger.m"
    else
#line 951 "declarative_debugger.m"
      {
#line 951 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_42_42;
#line 951 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_44_44;
#line 951 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__TypeInfo_46_46;

#line 8796 "mdb.declarative_debugger.c"
        {
#line 8798 "mdb.declarative_debugger.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_38, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_42_42);
        }
#line 8801 "mdb.declarative_debugger.c"
        {
#line 8803 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__TypeInfo_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8805 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_44_44, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 8807 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_44_44, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_42_42));
#line 8809 "mdb.declarative_debugger.c"
        }
#line 8811 "mdb.declarative_debugger.c"
        {
#line 8813 "mdb.declarative_debugger.c"
          mdb__declarative_debugger__TypeInfo_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8815 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_46_46, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1));
#line 8817 "mdb.declarative_debugger.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_46_46, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_44_44));
#line 8819 "mdb.declarative_debugger.c"
        }
#line 951 "declarative_debugger.m"
        {
#line 951 "declarative_debugger.m"
          mercury__io__write_3_p_0(mdb__declarative_debugger__TypeInfo_46_46, ((MR_Box) (mdb__declarative_debugger__Origin_6)));
#line 951 "declarative_debugger.m"
          return;
        }
#line 951 "declarative_debugger.m"
      }
#line 937 "declarative_debugger.m"
  }
#line 934 "declarative_debugger.m"
}

#line 878 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(
#line 878 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_108,
#line 878 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 878 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_2,
#line 878 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3,
#line 878 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4)
#line 878 "declarative_debugger.m"
{
#line 883 "declarative_debugger.m"
  {
#line 883 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 883 "declarative_debugger.m"
#line 883 "declarative_debugger.m"
    switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 883 "declarative_debugger.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 883 "declarative_debugger.m"
      case (MR_Integer) 0:
#line 883 "declarative_debugger.m"
        {
#line 883 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_110_110;
#line 883 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__Loc_7 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 883 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__Msg_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 883 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__StdErr_12;
#line 883 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser_13;
#line 883 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_19_19;
#line 883 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_22_22;
#line 883 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_24_24;
#line 883 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_26_26;
#line 883 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_27_27;
#line 883 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_29_29;
#line 883 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_37_37;
#line 892 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_87_87;
#line 892 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_88_88;
#line 892 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_89_89;
#line 892 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv0_Analyser_13;
#line 893 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_91_91;
#line 893 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_92_92;
#line 893 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_93_93;
#line 893 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_90_90;

#line 884 "declarative_debugger.m"
          {
#line 884 "declarative_debugger.m"
            mercury__io__stderr_stream_3_p_0(&mdb__declarative_debugger__StdErr_12);
          }
#line 887 "declarative_debugger.m"
          {
#line 887 "declarative_debugger.m"
            mdb__declarative_debugger__V_29_29 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Msg_8, (MR_String) "\nPlease report bugs via the Mercury bug tracking system at\n<https://www.mercurylang.org/bugs> or via e-mail tobugs\100mercurylang.org.\n");
          }
#line 887 "declarative_debugger.m"
          {
#line 887 "declarative_debugger.m"
            mdb__declarative_debugger__V_27_27 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdb__declarative_debugger__V_29_29);
          }
#line 887 "declarative_debugger.m"
          {
#line 887 "declarative_debugger.m"
            mdb__declarative_debugger__V_26_26 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Loc_7, mdb__declarative_debugger__V_27_27);
          }
#line 887 "declarative_debugger.m"
          {
#line 887 "declarative_debugger.m"
            mdb__declarative_debugger__V_24_24 = mercury__string__f_43_43_2_f_0((MR_String) "message follows:\n", mdb__declarative_debugger__V_26_26);
          }
#line 886 "declarative_debugger.m"
          {
#line 886 "declarative_debugger.m"
            mdb__declarative_debugger__V_22_22 = mercury__string__f_43_43_2_f_0((MR_String) "diagnosis will be aborted.  Debugging\n", mdb__declarative_debugger__V_24_24);
          }
#line 885 "declarative_debugger.m"
          {
#line 885 "declarative_debugger.m"
            mdb__declarative_debugger__V_19_19 = mercury__string__f_43_43_2_f_0((MR_String) "An internal error has occurred; ", mdb__declarative_debugger__V_22_22);
          }
#line 885 "declarative_debugger.m"
          {
#line 885 "declarative_debugger.m"
            mercury__io__write_string_4_p_0(mdb__declarative_debugger__StdErr_12, mdb__declarative_debugger__V_19_19);
          }
#line 892 "declarative_debugger.m"
          mdb__declarative_debugger__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 892 "declarative_debugger.m"
          mdb__declarative_debugger__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 892 "declarative_debugger.m"
          mdb__declarative_debugger__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 892 "declarative_debugger.m"
          mdb__declarative_debugger__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 8953 "mdb.declarative_debugger.c"
          {
#line 8955 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_110_110 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8957 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_110_110, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 8959 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_110_110, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_108));
#line 8961 "mdb.declarative_debugger.c"
          }
#line 892 "declarative_debugger.m"
          {
#line 892 "declarative_debugger.m"
            mdb__declarative_analyser__reset_analyser_2_p_0(mdb__declarative_debugger__TypeInfo_110_110, (MR_Word) mdb__declarative_debugger__V_37_37, &mdb__declarative_debugger__conv0_Analyser_13);
          }
#line 892 "declarative_debugger.m"
          mdb__declarative_debugger__Analyser_13 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_13;
#line 893 "declarative_debugger.m"
          mdb__declarative_debugger__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 893 "declarative_debugger.m"
          mdb__declarative_debugger__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 893 "declarative_debugger.m"
          mdb__declarative_debugger__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 893 "declarative_debugger.m"
          mdb__declarative_debugger__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 893 "declarative_debugger.m"
          {
#line 893 "declarative_debugger.m"
            MR_Word base;
#line 893 "declarative_debugger.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 893 "declarative_debugger.m"
            *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4 = base;
#line 893 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_13));
#line 893 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_91_91));
#line 893 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_92_92));
#line 893 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_93_93));
#line 893 "declarative_debugger.m"
          }
#line 894 "declarative_debugger.m"
          *mdb__declarative_debugger__Response_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 883 "declarative_debugger.m"
        }
#line 883 "declarative_debugger.m"
        break;
#line 883 "declarative_debugger.m"
      case (MR_Integer) 1:
#line 896 "declarative_debugger.m"
        {
#line 896 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_112_112;
#line 896 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__Loc_39 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 896 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__Msg_40 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 896 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__StdErr_44;
#line 896 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser_45;
#line 896 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_51_51;
#line 896 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_54_54;
#line 896 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_55_55;
#line 896 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_57_57;
#line 896 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_61_61;
#line 901 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_94_94;
#line 901 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_95_95;
#line 901 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_96_96;
#line 901 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv1_Analyser_45;
#line 902 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_98_98;
#line 902 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_99_99;
#line 902 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_100_100;
#line 902 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_97_97;

#line 897 "declarative_debugger.m"
          {
#line 897 "declarative_debugger.m"
            mercury__io__stderr_stream_3_p_0(&mdb__declarative_debugger__StdErr_44);
          }
#line 898 "declarative_debugger.m"
          {
#line 898 "declarative_debugger.m"
            mdb__declarative_debugger__V_57_57 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Msg_40, (MR_String) ".\nDiagnosis will be aborted.\n");
          }
#line 898 "declarative_debugger.m"
          {
#line 898 "declarative_debugger.m"
            mdb__declarative_debugger__V_55_55 = mercury__string__f_43_43_2_f_0((MR_String) ": ", mdb__declarative_debugger__V_57_57);
          }
#line 898 "declarative_debugger.m"
          {
#line 898 "declarative_debugger.m"
            mdb__declarative_debugger__V_54_54 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Loc_39, mdb__declarative_debugger__V_55_55);
          }
#line 898 "declarative_debugger.m"
          {
#line 898 "declarative_debugger.m"
            mdb__declarative_debugger__V_51_51 = mercury__string__f_43_43_2_f_0((MR_String) "I/O error: ", mdb__declarative_debugger__V_54_54);
          }
#line 898 "declarative_debugger.m"
          {
#line 898 "declarative_debugger.m"
            mercury__io__write_string_4_p_0(mdb__declarative_debugger__StdErr_44, mdb__declarative_debugger__V_51_51);
          }
#line 901 "declarative_debugger.m"
          mdb__declarative_debugger__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 901 "declarative_debugger.m"
          mdb__declarative_debugger__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 901 "declarative_debugger.m"
          mdb__declarative_debugger__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 901 "declarative_debugger.m"
          mdb__declarative_debugger__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 9081 "mdb.declarative_debugger.c"
          {
#line 9083 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9085 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 9087 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_108));
#line 9089 "mdb.declarative_debugger.c"
          }
#line 901 "declarative_debugger.m"
          {
#line 901 "declarative_debugger.m"
            mdb__declarative_analyser__reset_analyser_2_p_0(mdb__declarative_debugger__TypeInfo_112_112, (MR_Word) mdb__declarative_debugger__V_61_61, &mdb__declarative_debugger__conv1_Analyser_45);
          }
#line 901 "declarative_debugger.m"
          mdb__declarative_debugger__Analyser_45 = (MR_Word) mdb__declarative_debugger__conv1_Analyser_45;
#line 902 "declarative_debugger.m"
          mdb__declarative_debugger__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 902 "declarative_debugger.m"
          mdb__declarative_debugger__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 902 "declarative_debugger.m"
          mdb__declarative_debugger__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 902 "declarative_debugger.m"
          mdb__declarative_debugger__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 902 "declarative_debugger.m"
          {
#line 902 "declarative_debugger.m"
            MR_Word base;
#line 902 "declarative_debugger.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 902 "declarative_debugger.m"
            *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4 = base;
#line 902 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_45));
#line 902 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_98_98));
#line 902 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_99_99));
#line 902 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_100_100));
#line 902 "declarative_debugger.m"
          }
#line 903 "declarative_debugger.m"
          *mdb__declarative_debugger__Response_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 896 "declarative_debugger.m"
        }
#line 883 "declarative_debugger.m"
        break;
#line 883 "declarative_debugger.m"
      case (MR_Integer) 2:
#line 906 "declarative_debugger.m"
        {
#line 906 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_114_114;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__Feature_63 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 906 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser_67;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_72_72;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_75_75;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_77_77;
#line 906 "declarative_debugger.m"
          MR_String mdb__declarative_debugger__V_79_79;
#line 906 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_85_85;
#line 913 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_101_101;
#line 913 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_102_102;
#line 913 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_103_103;
#line 913 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv2_Analyser_67;
#line 914 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_105_105;
#line 914 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_106_106;
#line 914 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_107_107;
#line 914 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_104_104;

#line 909 "declarative_debugger.m"
          {
#line 909 "declarative_debugger.m"
            mdb__declarative_debugger__V_79_79 = mercury__string__f_43_43_2_f_0(mdb__declarative_debugger__Feature_63, (MR_String) ".\nThe debugger is a work in progress, and this is not supported in the\ncurrent version.\n");
          }
#line 909 "declarative_debugger.m"
          {
#line 909 "declarative_debugger.m"
            mdb__declarative_debugger__V_77_77 = mercury__string__f_43_43_2_f_0((MR_String) "the following: ", mdb__declarative_debugger__V_79_79);
          }
#line 908 "declarative_debugger.m"
          {
#line 908 "declarative_debugger.m"
            mdb__declarative_debugger__V_75_75 = mercury__string__f_43_43_2_f_0((MR_String) "it requires support for\n", mdb__declarative_debugger__V_77_77);
          }
#line 907 "declarative_debugger.m"
          {
#line 907 "declarative_debugger.m"
            mdb__declarative_debugger__V_72_72 = mercury__string__f_43_43_2_f_0((MR_String) "Sorry, the diagnosis cannot continue because ", mdb__declarative_debugger__V_75_75);
          }
#line 907 "declarative_debugger.m"
          {
#line 907 "declarative_debugger.m"
            mercury__io__write_string_3_p_0(mdb__declarative_debugger__V_72_72);
          }
#line 913 "declarative_debugger.m"
          mdb__declarative_debugger__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 913 "declarative_debugger.m"
          mdb__declarative_debugger__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 913 "declarative_debugger.m"
          mdb__declarative_debugger__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 913 "declarative_debugger.m"
          mdb__declarative_debugger__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 9200 "mdb.declarative_debugger.c"
          {
#line 9202 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_114_114 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9204 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_114_114, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 9206 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_114_114, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_108));
#line 9208 "mdb.declarative_debugger.c"
          }
#line 913 "declarative_debugger.m"
          {
#line 913 "declarative_debugger.m"
            mdb__declarative_analyser__reset_analyser_2_p_0(mdb__declarative_debugger__TypeInfo_114_114, (MR_Word) mdb__declarative_debugger__V_85_85, &mdb__declarative_debugger__conv2_Analyser_67);
          }
#line 913 "declarative_debugger.m"
          mdb__declarative_debugger__Analyser_67 = (MR_Word) mdb__declarative_debugger__conv2_Analyser_67;
#line 914 "declarative_debugger.m"
          mdb__declarative_debugger__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 0)));
#line 914 "declarative_debugger.m"
          mdb__declarative_debugger__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 1)));
#line 914 "declarative_debugger.m"
          mdb__declarative_debugger__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 2)));
#line 914 "declarative_debugger.m"
          mdb__declarative_debugger__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_3, (MR_Integer) 3)));
#line 914 "declarative_debugger.m"
          {
#line 914 "declarative_debugger.m"
            MR_Word base;
#line 914 "declarative_debugger.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 914 "declarative_debugger.m"
            *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_4 = base;
#line 914 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_67));
#line 914 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_105_105));
#line 914 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_106_106));
#line 914 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_107_107));
#line 914 "declarative_debugger.m"
          }
#line 915 "declarative_debugger.m"
          *mdb__declarative_debugger__Response_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 906 "declarative_debugger.m"
        }
#line 883 "declarative_debugger.m"
        break;
#line 883 "declarative_debugger.m"
    }
#line 883 "declarative_debugger.m"
  }
#line 878 "declarative_debugger.m"
}

#line 866 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__get_trusted_list_3_p_0(
#line 866 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser_4,
#line 866 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__MDBCommandFormat_5,
#line 866 "declarative_debugger.m"
  MR_String * mdb__declarative_debugger__List_6)
#line 866 "declarative_debugger.m"
{
#line 873 "declarative_debugger.m"
  {
#line 873 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 873 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 1)));
#line 874 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 0)));
#line 874 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 2)));
#line 874 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser_4, (MR_Integer) 3)));

#line 874 "declarative_debugger.m"
    {
#line 874 "declarative_debugger.m"
      mdb__declarative_oracle__get_trusted_list_3_p_0(mdb__declarative_debugger__V_7_7, mdb__declarative_debugger__MDBCommandFormat_5, mdb__declarative_debugger__List_6);
#line 874 "declarative_debugger.m"
      return;
    }
#line 873 "declarative_debugger.m"
  }
#line 866 "declarative_debugger.m"
}

#line 849 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__remove_trusted_3_p_0(
#line 849 "declarative_debugger.m"
  MR_Integer mdb__declarative_debugger__N_4,
#line 849 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 849 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 849 "declarative_debugger.m"
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
      mdb__declarative_debugger__succeeded = mdb__declarative_oracle__remove_trusted_3_p_0(mdb__declarative_debugger__N_4, mdb__declarative_debugger__V_9_9, &mdb__declarative_debugger__Oracle_6);
    }
#line 856 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 856 "declarative_debugger.m"
      {
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
#line 858 "declarative_debugger.m"
        mdb__declarative_debugger__succeeded = MR_TRUE;
#line 856 "declarative_debugger.m"
      }
#line 856 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 856 "declarative_debugger.m"
  }
#line 849 "declarative_debugger.m"
}

#line 837 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__trust_standard_library_2_p_0(
#line 837 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5,
#line 837 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6)
#line 837 "declarative_debugger.m"
{
#line 844 "declarative_debugger.m"
  {
#line 844 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 844 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_4;
#line 844 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 1)));
#line 845 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 0)));
#line 845 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 2)));
#line 845 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 3)));
#line 847 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12;
#line 847 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14;
#line 847 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15;
#line 847 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13;

#line 845 "declarative_debugger.m"
    {
#line 845 "declarative_debugger.m"
      mdb__declarative_oracle__trust_standard_library_2_p_0(mdb__declarative_debugger__V_7_7, &mdb__declarative_debugger__Oracle_4);
    }
#line 847 "declarative_debugger.m"
    mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 0)));
#line 847 "declarative_debugger.m"
    mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 1)));
#line 847 "declarative_debugger.m"
    mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 2)));
#line 847 "declarative_debugger.m"
    mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_5, (MR_Integer) 3)));
#line 847 "declarative_debugger.m"
    {
#line 847 "declarative_debugger.m"
      MR_Word base;
#line 847 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 847 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_6 = base;
#line 847 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_12_12));
#line 847 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_4));
#line 847 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_14_14));
#line 847 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_15_15));
#line 847 "declarative_debugger.m"
    }
#line 844 "declarative_debugger.m"
  }
#line 837 "declarative_debugger.m"
}

#line 825 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__add_trusted_pred_or_func_3_p_0(
#line 825 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__ProcLayout_4,
#line 825 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7,
#line 825 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8)
#line 825 "declarative_debugger.m"
{
#line 833 "declarative_debugger.m"
  {
#line 833 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 833 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_6;
#line 833 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
#line 834 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
#line 834 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
#line 834 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
#line 835 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14;
#line 835 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_16_16;
#line 835 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_17_17;
#line 835 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15;

#line 834 "declarative_debugger.m"
    {
#line 834 "declarative_debugger.m"
      mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(mdb__declarative_debugger__ProcLayout_4, mdb__declarative_debugger__V_9_9, &mdb__declarative_debugger__Oracle_6);
    }
#line 835 "declarative_debugger.m"
    mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 0)));
#line 835 "declarative_debugger.m"
    mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 1)));
#line 835 "declarative_debugger.m"
    mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 2)));
#line 835 "declarative_debugger.m"
    mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_7, (MR_Integer) 3)));
#line 835 "declarative_debugger.m"
    {
#line 835 "declarative_debugger.m"
      MR_Word base;
#line 835 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 835 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_8 = base;
#line 835 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_14_14));
#line 835 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_6));
#line 835 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_16_16));
#line 835 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_17_17));
#line 835 "declarative_debugger.m"
    }
#line 833 "declarative_debugger.m"
  }
#line 825 "declarative_debugger.m"
}

#line 811 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__add_trusted_module_3_p_0(
#line 811 "declarative_debugger.m"
  MR_String mdb__declarative_debugger__ModuleName_4,
#line 811 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_5,
#line 811 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_6)
#line 811 "declarative_debugger.m"
{
#line 818 "declarative_debugger.m"
  {
#line 818 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 818 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__SymModuleName_7;
#line 818 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_8;
#line 818 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9;
#line 820 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10;
#line 820 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11;
#line 820 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12;
#line 821 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13;
#line 821 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15;
#line 821 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_16_16;
#line 821 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14;

#line 819 "declarative_debugger.m"
    {
#line 819 "declarative_debugger.m"
      mdb__declarative_debugger__SymModuleName_7 = mdbcomp__sym_name__string_to_sym_name_1_f_0(mdb__declarative_debugger__ModuleName_4);
    }
#line 820 "declarative_debugger.m"
    mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 0)));
#line 820 "declarative_debugger.m"
    mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 1)));
#line 820 "declarative_debugger.m"
    mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 2)));
#line 820 "declarative_debugger.m"
    mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 3)));
#line 820 "declarative_debugger.m"
    {
#line 820 "declarative_debugger.m"
      mdb__declarative_oracle__add_trusted_module_3_p_0(mdb__declarative_debugger__SymModuleName_7, mdb__declarative_debugger__V_9_9, &mdb__declarative_debugger__Oracle_8);
    }
#line 821 "declarative_debugger.m"
    mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 0)));
#line 821 "declarative_debugger.m"
    mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 1)));
#line 821 "declarative_debugger.m"
    mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 2)));
#line 821 "declarative_debugger.m"
    mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_5, (MR_Integer) 3)));
#line 821 "declarative_debugger.m"
    {
#line 821 "declarative_debugger.m"
      MR_Word base;
#line 821 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 821 "declarative_debugger.m"
      *mdb__declarative_debugger__Diagnoser_6 = base;
#line 821 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_13_13));
#line 821 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_8));
#line 821 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_15_15));
#line 821 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_16_16));
#line 821 "declarative_debugger.m"
    }
#line 818 "declarative_debugger.m"
  }
#line 811 "declarative_debugger.m"
}

#line 798 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_supertree_3_p_0(
#line 798 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 798 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_4,
#line 798 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_5)
#line 798 "declarative_debugger.m"
{
#line 805 "declarative_debugger.m"
  {
#line 805 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1)));

#line 805 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 805 "declarative_debugger.m"
      {
#line 805 "declarative_debugger.m"
        *mdb__declarative_debugger__Event_4 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 805 "declarative_debugger.m"
        *mdb__declarative_debugger__SeqNo_5 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 805 "declarative_debugger.m"
      }
#line 805 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 805 "declarative_debugger.m"
  }
#line 798 "declarative_debugger.m"
}

#line 787 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_require_subtree_5_p_0(
#line 787 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 787 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_6,
#line 787 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__SeqNo_7,
#line 787 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__CallPreceding_8,
#line 787 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__MaxDepth_9)
#line 787 "declarative_debugger.m"
{
#line 795 "declarative_debugger.m"
  {
#line 795 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = ((((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0)));

#line 795 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 795 "declarative_debugger.m"
      {
#line 795 "declarative_debugger.m"
        *mdb__declarative_debugger__Event_6 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 795 "declarative_debugger.m"
        *mdb__declarative_debugger__SeqNo_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 795 "declarative_debugger.m"
        *mdb__declarative_debugger__CallPreceding_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 3)));
#line 795 "declarative_debugger.m"
        *mdb__declarative_debugger__MaxDepth_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 4)));
#line 795 "declarative_debugger.m"
      }
#line 795 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 795 "declarative_debugger.m"
  }
#line 787 "declarative_debugger.m"
}

#line 779 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_no_bug_found_1_p_0(
#line 779 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
#line 779 "declarative_debugger.m"
{
#line 785 "declarative_debugger.m"
  {
#line 785 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 785 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 785 "declarative_debugger.m"
  }
#line 779 "declarative_debugger.m"
}

#line 771 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_symptom_found_2_p_0(
#line 771 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 771 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3)
#line 771 "declarative_debugger.m"
{
#line 777 "declarative_debugger.m"
  {
#line 777 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2)));

#line 777 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 777 "declarative_debugger.m"
      *mdb__declarative_debugger__Event_3 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 777 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 777 "declarative_debugger.m"
  }
#line 771 "declarative_debugger.m"
}

#line 763 "declarative_debugger.m"
static MR_bool MR_CALL 
mdb__declarative_debugger__diagnoser_bug_found_2_p_0(
#line 763 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1,
#line 763 "declarative_debugger.m"
  MR_Integer * mdb__declarative_debugger__Event_3)
#line 763 "declarative_debugger.m"
{
#line 769 "declarative_debugger.m"
  {
#line 769 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 769 "declarative_debugger.m"
    if (mdb__declarative_debugger__succeeded)
#line 769 "declarative_debugger.m"
      *mdb__declarative_debugger__Event_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0)));
#line 769 "declarative_debugger.m"
    return mdb__declarative_debugger__succeeded;
#line 769 "declarative_debugger.m"
  }
#line 763 "declarative_debugger.m"
}

#line 747 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_resume_previous_8_p_0(
#line 747 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_9,
#line 747 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_10,
#line 747 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_14,
#line 747 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_15,
#line 747 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16,
#line 747 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_17)
#line 747 "declarative_debugger.m"
{
#line 757 "declarative_debugger.m"
  {
#line 757 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 758 "declarative_debugger.m"
    {
#line 758 "declarative_debugger.m"
      mdb__declarative_debugger__diagnosis_9_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_2[0], ((MR_Box) (mdb__declarative_debugger__Store_9)), (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_debugger__Response_10, mdb__declarative_debugger__STATE_VARIABLE_State_0_14, mdb__declarative_debugger__STATE_VARIABLE_State_15, mdb__declarative_debugger__STATE_VARIABLE_Browser_0_16, mdb__declarative_debugger__STATE_VARIABLE_Browser_17);
#line 758 "declarative_debugger.m"
      return;
    }
#line 757 "declarative_debugger.m"
  }
#line 747 "declarative_debugger.m"
}

#line 731 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_new_tree_9_p_0(
#line 731 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_10,
#line 731 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Node_11,
#line 731 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 731 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_State_0_16,
#line 731 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_State_17,
#line 731 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18,
#line 731 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_19)
#line 731 "declarative_debugger.m"
{
#line 741 "declarative_debugger.m"
  {
#line 741 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 741 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_22_22;
#line 741 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_26_26 = (MR_Word) mdb__declarative_debugger__Node_11;

#line 742 "declarative_debugger.m"
    {
#line 742 "declarative_debugger.m"
      mdb__declarative_debugger__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 742 "declarative_debugger.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_debugger__V_22_22, 0) = ((MR_Box) (mdb__declarative_debugger__V_26_26));
#line 742 "declarative_debugger.m"
    }
#line 742 "declarative_debugger.m"
    {
#line 742 "declarative_debugger.m"
      mdb__declarative_debugger__diagnosis_9_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_2[0], ((MR_Box) (mdb__declarative_debugger__Store_10)), mdb__declarative_debugger__V_22_22, mdb__declarative_debugger__Response_12, mdb__declarative_debugger__STATE_VARIABLE_State_0_16, mdb__declarative_debugger__STATE_VARIABLE_State_17, mdb__declarative_debugger__STATE_VARIABLE_Browser_0_18, mdb__declarative_debugger__STATE_VARIABLE_Browser_19);
#line 742 "declarative_debugger.m"
      return;
    }
#line 741 "declarative_debugger.m"
  }
#line 731 "declarative_debugger.m"
}

#line 718 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__suspicion_divide_and_query_search_mode_0_f_0(void)
#line 718 "declarative_debugger.m"
{
#line 722 "declarative_debugger.m"
  {
#line 722 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 722 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__HeadVar__1_1;

#line 722 "declarative_debugger.m"
    {
#line 722 "declarative_debugger.m"
      return mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_analyser__suspicion_divide_and_query_search_mode_0_f_0();
    }
#line 722 "declarative_debugger.m"
    return mdb__declarative_debugger__HeadVar__1_1;
#line 722 "declarative_debugger.m"
  }
#line 718 "declarative_debugger.m"
}

#line 709 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__divide_and_query_search_mode_0_f_0(void)
#line 709 "declarative_debugger.m"
{
#line 712 "declarative_debugger.m"
  {
#line 712 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 712 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__HeadVar__1_1;

#line 712 "declarative_debugger.m"
    {
#line 712 "declarative_debugger.m"
      return mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_analyser__divide_and_query_search_mode_0_f_0();
    }
#line 712 "declarative_debugger.m"
    return mdb__declarative_debugger__HeadVar__1_1;
#line 712 "declarative_debugger.m"
  }
#line 709 "declarative_debugger.m"
}

#line 701 "declarative_debugger.m"
static MR_Word MR_CALL 
mdb__declarative_debugger__top_down_search_mode_0_f_0(void)
#line 701 "declarative_debugger.m"
{
#line 703 "declarative_debugger.m"
  {
#line 703 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 703 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__HeadVar__1_1;

#line 703 "declarative_debugger.m"
    {
#line 703 "declarative_debugger.m"
      return mdb__declarative_debugger__HeadVar__1_1 = mdb__declarative_analyser__top_down_search_mode_0_f_0();
    }
#line 703 "declarative_debugger.m"
    return mdb__declarative_debugger__HeadVar__1_1;
#line 703 "declarative_debugger.m"
  }
#line 701 "declarative_debugger.m"
}

#line 688 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__reset_knowledge_base_2_p_0(
#line 688 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6,
#line 688 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7)
#line 688 "declarative_debugger.m"
{
#line 696 "declarative_debugger.m"
  {
#line 696 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 696 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle0_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 1)));
#line 696 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_5;
#line 697 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 0)));
#line 697 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 2)));
#line 697 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 3)));
#line 699 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12;
#line 699 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14;
#line 699 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15;
#line 699 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13;

#line 698 "declarative_debugger.m"
    {
#line 698 "declarative_debugger.m"
      mdb__declarative_oracle__reset_oracle_knowledge_base_2_p_0(mdb__declarative_debugger__Oracle0_4, &mdb__declarative_debugger__Oracle_5);
    }
#line 699 "declarative_debugger.m"
    mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 0)));
#line 699 "declarative_debugger.m"
    mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 1)));
#line 699 "declarative_debugger.m"
    mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 2)));
#line 699 "declarative_debugger.m"
    mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_6, (MR_Integer) 3)));
#line 699 "declarative_debugger.m"
    {
#line 699 "declarative_debugger.m"
      MR_Word base;
#line 699 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 699 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_7 = base;
#line 699 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_12_12));
#line 699 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_5));
#line 699 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_14_14));
#line 699 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_15_15));
#line 699 "declarative_debugger.m"
    }
#line 696 "declarative_debugger.m"
  }
#line 688 "declarative_debugger.m"
}

#line 673 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__set_fallback_search_mode_4_p_0(
#line 673 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Store_5,
#line 673 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__SearchMode_6,
#line 673 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10,
#line 673 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11)
#line 673 "declarative_debugger.m"
{
#line 682 "declarative_debugger.m"
  {
#line 682 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 682 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 0)));
#line 682 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser_9;
#line 682 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12 = (MR_Word) mdb__declarative_debugger__Store_5;
#line 683 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 1)));
#line 683 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 2)));
#line 683 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 3)));
#line 686 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_18_18;
#line 686 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_19_19;
#line 686 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_20_20;
#line 686 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_17_17;

#line 684 "declarative_debugger.m"
    {
#line 684 "declarative_debugger.m"
      mdb__declarative_analyser__set_fallback_search_mode_4_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_3[0], ((MR_Box) (mdb__declarative_debugger__V_12_12)), mdb__declarative_debugger__SearchMode_6, mdb__declarative_debugger__Analyser0_8, &mdb__declarative_debugger__Analyser_9);
    }
#line 686 "declarative_debugger.m"
    mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 0)));
#line 686 "declarative_debugger.m"
    mdb__declarative_debugger__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 1)));
#line 686 "declarative_debugger.m"
    mdb__declarative_debugger__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 2)));
#line 686 "declarative_debugger.m"
    mdb__declarative_debugger__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_10, (MR_Integer) 3)));
#line 686 "declarative_debugger.m"
    {
#line 686 "declarative_debugger.m"
      MR_Word base;
#line 686 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 686 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_11 = base;
#line 686 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_9));
#line 686 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_18_18));
#line 686 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_19_19));
#line 686 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_20_20));
#line 686 "declarative_debugger.m"
    }
#line 682 "declarative_debugger.m"
  }
#line 673 "declarative_debugger.m"
}

#line 661 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__set_diagnoser_testing_flag_3_p_0(
#line 661 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Testing_4,
#line 661 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8,
#line 661 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9)
#line 661 "declarative_debugger.m"
{
#line 668 "declarative_debugger.m"
  {
#line 668 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 668 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 1)));
#line 668 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_7;
#line 669 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 0)));
#line 669 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 2)));
#line 669 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 3)));
#line 671 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_14_14;
#line 671 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_16_16;
#line 671 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_17_17;
#line 671 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_15_15;

#line 670 "declarative_debugger.m"
    {
#line 670 "declarative_debugger.m"
      mdb__declarative_oracle__set_oracle_testing_flag_3_p_0(mdb__declarative_debugger__Testing_4, mdb__declarative_debugger__Oracle0_6, &mdb__declarative_debugger__Oracle_7);
    }
#line 671 "declarative_debugger.m"
    mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 0)));
#line 671 "declarative_debugger.m"
    mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 1)));
#line 671 "declarative_debugger.m"
    mdb__declarative_debugger__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 2)));
#line 671 "declarative_debugger.m"
    mdb__declarative_debugger__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_8, (MR_Integer) 3)));
#line 671 "declarative_debugger.m"
    {
#line 671 "declarative_debugger.m"
      MR_Word base;
#line 671 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 671 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_9 = base;
#line 671 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_14_14));
#line 671 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_7));
#line 671 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_debugger__V_16_16));
#line 671 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_17_17));
#line 671 "declarative_debugger.m"
    }
#line 668 "declarative_debugger.m"
  }
#line 661 "declarative_debugger.m"
}

#line 650 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnoser_session_init_2_p_0(
#line 650 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4,
#line 650 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5)
#line 650 "declarative_debugger.m"
{
#line 653 "declarative_debugger.m"
  {
#line 653 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 654 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 0)));
#line 654 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 1)));
#line 654 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 3)));
#line 654 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_4, (MR_Integer) 2)));

#line 654 "declarative_debugger.m"
    {
#line 654 "declarative_debugger.m"
      MR_Word base;
#line 654 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 654 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_5 = base;
#line 654 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_8_8));
#line 654 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_9_9));
#line 654 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 654 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_11_11));
#line 654 "declarative_debugger.m"
    }
#line 653 "declarative_debugger.m"
  }
#line 650 "declarative_debugger.m"
}

#line 636 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_store_5_p_0(
#line 636 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__InStr_6,
#line 636 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OutStr_7,
#line 636 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Browser_8,
#line 636 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HelpSystem_9,
#line 636 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10)
#line 636 "declarative_debugger.m"
{
#line 644 "declarative_debugger.m"
  {
#line 644 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 644 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser_17;
#line 644 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_18;

#line 364 "declarative_debugger.m"
    {
#line 364 "declarative_debugger.m"
      mdb__declarative_analyser__analyser_state_init_1_p_0((MR_Word) &mdb__declarative_debugger_scalar_common_1[1], &mdb__declarative_debugger__Analyser_17);
    }
#line 365 "declarative_debugger.m"
    {
#line 365 "declarative_debugger.m"
      mdb__declarative_oracle__oracle_state_init_5_p_0(mdb__declarative_debugger__InStr_6, mdb__declarative_debugger__OutStr_7, mdb__declarative_debugger__Browser_8, mdb__declarative_debugger__HelpSystem_9, &mdb__declarative_debugger__Oracle_18);
    }
#line 366 "declarative_debugger.m"
    {
#line 366 "declarative_debugger.m"
      MR_Word base;
#line 366 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 366 "declarative_debugger.m"
      *mdb__declarative_debugger__Diagnoser_10 = base;
#line 366 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_17));
#line 366 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_18));
#line 366 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 366 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "declarative_debugger.m"
    }
#line 644 "declarative_debugger.m"
  }
#line 636 "declarative_debugger.m"
}

#line 619 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__overrule_bug_6_p_0(
#line 619 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28,
#line 619 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_7,
#line 619 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_8,
#line 619 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_9,
#line 619 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10)
#line 619 "declarative_debugger.m"
{
#line 623 "declarative_debugger.m"
  {
#line 623 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 623 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_30_30;
#line 623 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_32_32;
#line 623 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_34_34;
#line 623 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_36_36;
#line 623 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38;
#line 623 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 0)));
#line 623 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__AnalyserResponse_13;
#line 623 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser_14;
#line 623 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Diagnoser1_15;
#line 623 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__MaybeOrigin_16;
#line 623 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_19_19 = ((MR_Word) mdb__declarative_debugger__Store_7);
#line 624 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 1)));
#line 624 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 2)));
#line 624 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 3)));
#line 625 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__conv1_AnalyserResponse_13;
#line 625 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__conv0_Analyser_14;
#line 626 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_25_25;
#line 626 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_26_26;
#line 626 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_27_27;
#line 626 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_24_24;

#line 10266 "mdb.declarative_debugger.c"
    {
#line 10268 "mdb.declarative_debugger.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_30_30);
    }
#line 10271 "mdb.declarative_debugger.c"
    {
#line 10273 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10275 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_32_32, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 10277 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_32_32, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_30_30));
#line 10279 "mdb.declarative_debugger.c"
    }
#line 10281 "mdb.declarative_debugger.c"
    {
#line 10283 "mdb.declarative_debugger.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_34_34);
    }
#line 10286 "mdb.declarative_debugger.c"
    {
#line 10288 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10290 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_36_36, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 10292 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_36_36, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_34_34));
#line 10294 "mdb.declarative_debugger.c"
    }
#line 10296 "mdb.declarative_debugger.c"
    {
#line 10298 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 10300 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 10302 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28));
#line 10304 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_32_32));
#line 10306 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_36_36));
#line 10308 "mdb.declarative_debugger.c"
    }
#line 625 "declarative_debugger.m"
    {
#line 625 "declarative_debugger.m"
      mdb__declarative_analyser__revise_analysis_4_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_38, ((MR_Box) (mdb__declarative_debugger__V_19_19)), &mdb__declarative_debugger__conv1_AnalyserResponse_13, (MR_Word) mdb__declarative_debugger__Analyser0_12, &mdb__declarative_debugger__conv0_Analyser_14);
    }
#line 625 "declarative_debugger.m"
    mdb__declarative_debugger__AnalyserResponse_13 = (MR_Word) mdb__declarative_debugger__conv1_AnalyserResponse_13;
#line 625 "declarative_debugger.m"
    mdb__declarative_debugger__Analyser_14 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_14;
#line 626 "declarative_debugger.m"
    mdb__declarative_debugger__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 0)));
#line 626 "declarative_debugger.m"
    mdb__declarative_debugger__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 1)));
#line 626 "declarative_debugger.m"
    mdb__declarative_debugger__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 2)));
#line 626 "declarative_debugger.m"
    mdb__declarative_debugger__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 3)));
#line 626 "declarative_debugger.m"
    {
#line 626 "declarative_debugger.m"
      mdb__declarative_debugger__Diagnoser1_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 626 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_15, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_14));
#line 626 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_15, 1) = ((MR_Box) (mdb__declarative_debugger__V_25_25));
#line 626 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_15, 2) = ((MR_Box) (mdb__declarative_debugger__V_26_26));
#line 626 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_15, 3) = ((MR_Box) (mdb__declarative_debugger__V_27_27));
#line 626 "declarative_debugger.m"
    }
#line 627 "declarative_debugger.m"
    {
#line 627 "declarative_debugger.m"
      mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_36_36, mdb__declarative_debugger__Analyser_14, &mdb__declarative_debugger__MaybeOrigin_16);
    }
#line 628 "declarative_debugger.m"
    {
#line 628 "declarative_debugger.m"
      mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_28, mdb__declarative_debugger__Store_7, mdb__declarative_debugger__AnalyserResponse_13, mdb__declarative_debugger__MaybeOrigin_16, mdb__declarative_debugger__Response_8, mdb__declarative_debugger__Diagnoser1_15, mdb__declarative_debugger__Diagnoser_10);
#line 628 "declarative_debugger.m"
      return;
    }
#line 623 "declarative_debugger.m"
  }
#line 619 "declarative_debugger.m"
}

#line 598 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__confirm_bug_8_p_0(
#line 598 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_35,
#line 598 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34,
#line 598 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_9,
#line 598 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Bug_10,
#line 598 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Evidence_11,
#line 598 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 598 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19,
#line 598 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20)
#line 598 "declarative_debugger.m"
{
#line 603 "declarative_debugger.m"
  {
#line 603 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 603 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle0_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 1)));
#line 603 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Confirmation_16;
#line 603 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_17;
#line 603 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24;
#line 604 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 0)));
#line 604 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 2)));
#line 604 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 3)));
#line 606 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_30_30;
#line 606 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_32_32;
#line 606 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_33_33;
#line 606 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_31_31;

#line 605 "declarative_debugger.m"
    {
#line 605 "declarative_debugger.m"
      mdb__declarative_oracle__oracle_confirm_bug_7_p_0(mdb__declarative_debugger__TypeInfo_for_T_35, mdb__declarative_debugger__Bug_10, mdb__declarative_debugger__Evidence_11, &mdb__declarative_debugger__Confirmation_16, mdb__declarative_debugger__Oracle0_15, &mdb__declarative_debugger__Oracle_17);
    }
#line 606 "declarative_debugger.m"
    mdb__declarative_debugger__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 0)));
#line 606 "declarative_debugger.m"
    mdb__declarative_debugger__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 1)));
#line 606 "declarative_debugger.m"
    mdb__declarative_debugger__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 2)));
#line 606 "declarative_debugger.m"
    mdb__declarative_debugger__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_19, (MR_Integer) 3)));
#line 606 "declarative_debugger.m"
    {
#line 606 "declarative_debugger.m"
      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 606 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 0) = ((MR_Box) (mdb__declarative_debugger__V_30_30));
#line 606 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_17));
#line 606 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 2) = ((MR_Box) (mdb__declarative_debugger__V_32_32));
#line 606 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, 3) = ((MR_Box) (mdb__declarative_debugger__V_33_33));
#line 606 "declarative_debugger.m"
    }
#line 611 "declarative_debugger.m"
#line 611 "declarative_debugger.m"
    switch (mdb__declarative_debugger__Confirmation_16) {
#line 611 "declarative_debugger.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 611 "declarative_debugger.m"
      case (MR_Integer) 2:
#line 615 "declarative_debugger.m"
        {
#line 616 "declarative_debugger.m"
          *mdb__declarative_debugger__Response_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "declarative_debugger.m"
          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24;
#line 615 "declarative_debugger.m"
        }
#line 611 "declarative_debugger.m"
        break;
#line 611 "declarative_debugger.m"
      case (MR_Integer) 0:
#line 608 "declarative_debugger.m"
        {
#line 608 "declarative_debugger.m"
          MR_Integer mdb__declarative_debugger__Event_18;

#line 921 "declarative_debugger.m"
          if (((MR_tag((MR_Word) mdb__declarative_debugger__Bug_10)) == (MR_mktag((MR_Integer) 1))))
#line 921 "declarative_debugger.m"
            {
#line 921 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__EBug_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Bug_10, (MR_Integer) 0)));

#line 924 "declarative_debugger.m"
#line 924 "declarative_debugger.m"
              switch (MR_tag((MR_Word) mdb__declarative_debugger__EBug_36)) {
#line 924 "declarative_debugger.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 924 "declarative_debugger.m"
                case (MR_Integer) 0:
#line 923 "declarative_debugger.m"
                  {
#line 923 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 0)));
#line 923 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 1)));
#line 923 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 2)));

#line 923 "declarative_debugger.m"
                    mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__EBug_36, (MR_Integer) 3)));
#line 923 "declarative_debugger.m"
                  }
#line 924 "declarative_debugger.m"
                  break;
#line 924 "declarative_debugger.m"
                case (MR_Integer) 1:
#line 925 "declarative_debugger.m"
                  {
#line 925 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__EBug_36, (MR_Integer) 0)));

#line 925 "declarative_debugger.m"
                    mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__EBug_36, (MR_Integer) 1)));
#line 925 "declarative_debugger.m"
                  }
#line 924 "declarative_debugger.m"
                  break;
#line 924 "declarative_debugger.m"
                case (MR_Integer) 2:
#line 927 "declarative_debugger.m"
                  {
#line 927 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__EBug_36, (MR_Integer) 0)));
#line 927 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__EBug_36, (MR_Integer) 1)));

#line 927 "declarative_debugger.m"
                    mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__EBug_36, (MR_Integer) 2)));
#line 927 "declarative_debugger.m"
                  }
#line 924 "declarative_debugger.m"
                  break;
#line 924 "declarative_debugger.m"
              }
#line 921 "declarative_debugger.m"
            }
#line 921 "declarative_debugger.m"
          else
#line 929 "declarative_debugger.m"
            {
#line 929 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__IBug_44 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__Bug_10), (MR_Integer) 0);
#line 930 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__IBug_44, (MR_Integer) 0)));
#line 930 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__IBug_44, (MR_Integer) 2)));

#line 930 "declarative_debugger.m"
              mdb__declarative_debugger__Event_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__IBug_44, (MR_Integer) 3)));
#line 929 "declarative_debugger.m"
            }
#line 610 "declarative_debugger.m"
          {
#line 610 "declarative_debugger.m"
            MR_Word base;
#line 610 "declarative_debugger.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 610 "declarative_debugger.m"
            *mdb__declarative_debugger__Response_12 = base;
#line 610 "declarative_debugger.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_debugger__Event_18));
#line 610 "declarative_debugger.m"
          }
#line 608 "declarative_debugger.m"
          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24;
#line 608 "declarative_debugger.m"
        }
#line 611 "declarative_debugger.m"
        break;
#line 611 "declarative_debugger.m"
      case (MR_Integer) 1:
#line 613 "declarative_debugger.m"
        {
#line 613 "declarative_debugger.m"
          mdb__declarative_debugger__overrule_bug_6_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_34, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__Response_12, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_24_24, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_20);
#line 613 "declarative_debugger.m"
          return;
        }
#line 611 "declarative_debugger.m"
        break;
#line 611 "declarative_debugger.m"
    }
#line 603 "declarative_debugger.m"
  }
#line 598 "declarative_debugger.m"
}

#line 528 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_oracle_response_7_p_0(
#line 528 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108,
#line 528 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_8,
#line 528 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OracleResponse_9,
#line 528 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_10,
#line 528 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27,
#line 528 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28)
#line 528 "declarative_debugger.m"
{
#line 536 "declarative_debugger.m"
  {
#line 536 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 536 "declarative_debugger.m"
#line 536 "declarative_debugger.m"
    switch (MR_tag((MR_Word) mdb__declarative_debugger__OracleResponse_9)) {
#line 536 "declarative_debugger.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 536 "declarative_debugger.m"
      case (MR_Integer) 0:
#line 536 "declarative_debugger.m"
#line 536 "declarative_debugger.m"
        switch (MR_unmkbody(mdb__declarative_debugger__OracleResponse_9)) {
#line 536 "declarative_debugger.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 536 "declarative_debugger.m"
          case (MR_Integer) 0:
#line 568 "declarative_debugger.m"
            {
#line 568 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_154_154;
#line 568 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_156_156;
#line 568 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33;
#line 568 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_42_42;
#line 568 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__AnalyserResponse_72;
#line 568 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__MaybeOrigin_73;
#line 571 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__PoppedDiagnoser_22;
#line 10621 "mdb.declarative_debugger.c"
              MR_Word mdb__declarative_debugger__TypeInfo_141_141;
#line 581 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__AnalyserResponse0_71;
#line 577 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_143_143;
#line 577 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_145_145;
#line 577 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_147_147;
#line 577 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_149_149;
#line 577 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151;
#line 577 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_37_37;
#line 577 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_38_38;
#line 577 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_102_102;
#line 577 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_103_103;
#line 577 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_104_104;
#line 577 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__conv5_AnalyserResponse0_71;
#line 585 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_105_105;
#line 585 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_106_106;
#line 585 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_107_107;

#line 10654 "mdb.declarative_debugger.c"
              {
#line 10656 "mdb.declarative_debugger.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_141_141);
              }
#line 569 "declarative_debugger.m"
              {
#line 569 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_111_112_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, &mdb__declarative_debugger__PoppedDiagnoser_22);
              }
#line 571 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 570 "declarative_debugger.m"
                mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33 = mdb__declarative_debugger__PoppedDiagnoser_22;
#line 571 "declarative_debugger.m"
              else
#line 573 "declarative_debugger.m"
                {
#line 573 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 573 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__OutStream_69;
#line 572 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 572 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 572 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));

#line 572 "declarative_debugger.m"
                  {
#line 572 "declarative_debugger.m"
                    mdb__declarative_debugger__OutStream_69 = mdb__declarative_oracle__get_user_output_stream_1_f_0(mdb__declarative_debugger__V_34_34);
                  }
#line 574 "declarative_debugger.m"
                  {
#line 574 "declarative_debugger.m"
                    mercury__io__write_string_4_p_0(mdb__declarative_debugger__OutStream_69, (MR_String) "Undo stack empty.\n");
                  }
#line 573 "declarative_debugger.m"
                  mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27;
#line 573 "declarative_debugger.m"
                }
#line 577 "declarative_debugger.m"
              mdb__declarative_debugger__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 0)));
#line 577 "declarative_debugger.m"
              mdb__declarative_debugger__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 1)));
#line 577 "declarative_debugger.m"
              mdb__declarative_debugger__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 2)));
#line 577 "declarative_debugger.m"
              mdb__declarative_debugger__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 3)));
#line 577 "declarative_debugger.m"
              mdb__declarative_debugger__V_37_37 = ((MR_Word) mdb__declarative_debugger__Store_8);
#line 10707 "mdb.declarative_debugger.c"
              {
#line 10709 "mdb.declarative_debugger.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_143_143);
              }
#line 10712 "mdb.declarative_debugger.c"
              {
#line 10714 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_145_145 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10716 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_145_145, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 10718 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_145_145, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_143_143));
#line 10720 "mdb.declarative_debugger.c"
              }
#line 10722 "mdb.declarative_debugger.c"
              {
#line 10724 "mdb.declarative_debugger.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_147_147);
              }
#line 10727 "mdb.declarative_debugger.c"
              {
#line 10729 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_149_149 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10731 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_149_149, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 10733 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_149_149, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_147_147));
#line 10735 "mdb.declarative_debugger.c"
              }
#line 10737 "mdb.declarative_debugger.c"
              {
#line 10739 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 10741 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 10743 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
#line 10745 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_145_145));
#line 10747 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_149_149));
#line 10749 "mdb.declarative_debugger.c"
              }
#line 577 "declarative_debugger.m"
              {
#line 577 "declarative_debugger.m"
                mdb__declarative_debugger__succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_151, ((MR_Box) (mdb__declarative_debugger__V_37_37)), (MR_Word) mdb__declarative_debugger__V_38_38, &mdb__declarative_debugger__conv5_AnalyserResponse0_71);
              }
#line 577 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 577 "declarative_debugger.m"
                {
#line 577 "declarative_debugger.m"
                  mdb__declarative_debugger__AnalyserResponse0_71 = (MR_Word) mdb__declarative_debugger__conv5_AnalyserResponse0_71;
#line 577 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = MR_TRUE;
#line 577 "declarative_debugger.m"
                }
#line 581 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 580 "declarative_debugger.m"
                mdb__declarative_debugger__AnalyserResponse_72 = mdb__declarative_debugger__AnalyserResponse0_71;
#line 581 "declarative_debugger.m"
              else
#line 582 "declarative_debugger.m"
                {
#line 582 "declarative_debugger.m"
                  {
#line 582 "declarative_debugger.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[7])));
#line 582 "declarative_debugger.m"
                    return;
                  }
#line 582 "declarative_debugger.m"
                }
#line 585 "declarative_debugger.m"
              mdb__declarative_debugger__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 0)));
#line 585 "declarative_debugger.m"
              mdb__declarative_debugger__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 1)));
#line 585 "declarative_debugger.m"
              mdb__declarative_debugger__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 2)));
#line 585 "declarative_debugger.m"
              mdb__declarative_debugger__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, (MR_Integer) 3)));
#line 10791 "mdb.declarative_debugger.c"
              {
#line 10793 "mdb.declarative_debugger.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_154_154);
              }
#line 10796 "mdb.declarative_debugger.c"
              {
#line 10798 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_156_156 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10800 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_156_156, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 10802 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_156_156, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_154_154));
#line 10804 "mdb.declarative_debugger.c"
              }
#line 585 "declarative_debugger.m"
              {
#line 585 "declarative_debugger.m"
                mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_156_156, mdb__declarative_debugger__V_42_42, &mdb__declarative_debugger__MaybeOrigin_73);
              }
#line 586 "declarative_debugger.m"
              {
#line 586 "declarative_debugger.m"
                mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_72, mdb__declarative_debugger__MaybeOrigin_73, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_33_33, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
#line 586 "declarative_debugger.m"
                return;
              }
#line 568 "declarative_debugger.m"
            }
#line 536 "declarative_debugger.m"
            break;
#line 536 "declarative_debugger.m"
          case (MR_Integer) 1:
#line 593 "declarative_debugger.m"
            {
#line 594 "declarative_debugger.m"
              *mdb__declarative_debugger__DiagnoserResponse_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 595 "declarative_debugger.m"
              {
#line 595 "declarative_debugger.m"
                mercury__io__write_string_3_p_0((MR_String) "Diagnosis aborted.\n");
              }
#line 593 "declarative_debugger.m"
              *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27;
#line 593 "declarative_debugger.m"
            }
#line 536 "declarative_debugger.m"
            break;
#line 536 "declarative_debugger.m"
        }
#line 536 "declarative_debugger.m"
        break;
#line 536 "declarative_debugger.m"
      case (MR_Integer) 1:
#line 536 "declarative_debugger.m"
        {
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_110_110;
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_112_112;
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_114_114;
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_116_116;
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118;
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Answer_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 0)));
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__AnalyserResponse_15;
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser_16;
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__MaybeOrigin_17;
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_57_57 = ((MR_Word) mdb__declarative_debugger__Store_8);
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59;
#line 536 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 537 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 537 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
#line 538 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv1_AnalyserResponse_15;
#line 538 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv0_Analyser_16;
#line 540 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_83_83;
#line 540 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_84_84;
#line 540 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_85_85;
#line 540 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_82_82;

#line 10890 "mdb.declarative_debugger.c"
          {
#line 10892 "mdb.declarative_debugger.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_110_110);
          }
#line 10895 "mdb.declarative_debugger.c"
          {
#line 10897 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_112_112 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10899 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 10901 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_112_112, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_110_110));
#line 10903 "mdb.declarative_debugger.c"
          }
#line 10905 "mdb.declarative_debugger.c"
          {
#line 10907 "mdb.declarative_debugger.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_114_114);
          }
#line 10910 "mdb.declarative_debugger.c"
          {
#line 10912 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_116_116 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10914 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_116_116, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 10916 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_116_116, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_114_114));
#line 10918 "mdb.declarative_debugger.c"
          }
#line 10920 "mdb.declarative_debugger.c"
          {
#line 10922 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 10924 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 10926 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
#line 10928 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_112_112));
#line 10930 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_116_116));
#line 10932 "mdb.declarative_debugger.c"
          }
#line 538 "declarative_debugger.m"
          {
#line 538 "declarative_debugger.m"
            mdb__declarative_analyser__continue_analysis_6_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_118, ((MR_Box) (mdb__declarative_debugger__V_57_57)), mdb__declarative_debugger__V_76_76, (MR_Word) mdb__declarative_debugger__Answer_13, &mdb__declarative_debugger__conv1_AnalyserResponse_15, (MR_Word) mdb__declarative_debugger__Analyser0_14, &mdb__declarative_debugger__conv0_Analyser_16);
          }
#line 538 "declarative_debugger.m"
          mdb__declarative_debugger__AnalyserResponse_15 = (MR_Word) mdb__declarative_debugger__conv1_AnalyserResponse_15;
#line 538 "declarative_debugger.m"
          mdb__declarative_debugger__Analyser_16 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_16;
#line 540 "declarative_debugger.m"
          mdb__declarative_debugger__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 540 "declarative_debugger.m"
          mdb__declarative_debugger__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 540 "declarative_debugger.m"
          mdb__declarative_debugger__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 540 "declarative_debugger.m"
          mdb__declarative_debugger__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
#line 540 "declarative_debugger.m"
          {
#line 540 "declarative_debugger.m"
            mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 540 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_16));
#line 540 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 1) = ((MR_Box) (mdb__declarative_debugger__V_83_83));
#line 540 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 2) = ((MR_Box) (mdb__declarative_debugger__V_84_84));
#line 540 "declarative_debugger.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, 3) = ((MR_Box) (mdb__declarative_debugger__V_85_85));
#line 540 "declarative_debugger.m"
          }
#line 541 "declarative_debugger.m"
          {
#line 541 "declarative_debugger.m"
            mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_116_116, mdb__declarative_debugger__Analyser_16, &mdb__declarative_debugger__MaybeOrigin_17);
          }
#line 542 "declarative_debugger.m"
          {
#line 542 "declarative_debugger.m"
            mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_15, mdb__declarative_debugger__MaybeOrigin_17, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_59_59, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
#line 542 "declarative_debugger.m"
            return;
          }
#line 536 "declarative_debugger.m"
        }
#line 536 "declarative_debugger.m"
        break;
#line 536 "declarative_debugger.m"
      case (MR_Integer) 2:
#line 545 "declarative_debugger.m"
        {
#line 545 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_120_120;
#line 545 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_122_122;
#line 545 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_124_124;
#line 545 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeInfo_126_126;
#line 545 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128;
#line 545 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__OutStream_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 0)));
#line 545 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_49_49 = ((MR_Word) mdb__declarative_debugger__Store_8);
#line 545 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__AnalyserResponse_62;
#line 545 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__Analyser_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 545 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__MaybeOrigin_64;
#line 546 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 546 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 546 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
#line 550 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__AnalyserResponse0_19;
#line 548 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__conv4_AnalyserResponse0_19;

#line 11016 "mdb.declarative_debugger.c"
          {
#line 11018 "mdb.declarative_debugger.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_120_120);
          }
#line 11021 "mdb.declarative_debugger.c"
          {
#line 11023 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_122_122 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11025 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_122_122, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 11027 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_122_122, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_120_120));
#line 11029 "mdb.declarative_debugger.c"
          }
#line 11031 "mdb.declarative_debugger.c"
          {
#line 11033 "mdb.declarative_debugger.c"
            mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_124_124);
          }
#line 11036 "mdb.declarative_debugger.c"
          {
#line 11038 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeInfo_126_126 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11040 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_126_126, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 11042 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_126_126, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_124_124));
#line 11044 "mdb.declarative_debugger.c"
          }
#line 11046 "mdb.declarative_debugger.c"
          {
#line 11048 "mdb.declarative_debugger.c"
            mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 11050 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 11052 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
#line 11054 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_122_122));
#line 11056 "mdb.declarative_debugger.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_126_126));
#line 11058 "mdb.declarative_debugger.c"
          }
#line 547 "declarative_debugger.m"
          {
#line 547 "declarative_debugger.m"
            mdb__declarative_analyser__show_info_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, ((MR_Box) (mdb__declarative_debugger__V_49_49)), mdb__declarative_debugger__OutStream_18, (MR_Word) mdb__declarative_debugger__Analyser_63);
          }
#line 548 "declarative_debugger.m"
          {
#line 548 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = mdb__declarative_analyser__reask_last_question_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_128, ((MR_Box) (mdb__declarative_debugger__V_49_49)), (MR_Word) mdb__declarative_debugger__Analyser_63, &mdb__declarative_debugger__conv4_AnalyserResponse0_19);
          }
#line 548 "declarative_debugger.m"
          if (mdb__declarative_debugger__succeeded)
#line 548 "declarative_debugger.m"
            {
#line 548 "declarative_debugger.m"
              mdb__declarative_debugger__AnalyserResponse0_19 = (MR_Word) mdb__declarative_debugger__conv4_AnalyserResponse0_19;
#line 548 "declarative_debugger.m"
              mdb__declarative_debugger__succeeded = MR_TRUE;
#line 548 "declarative_debugger.m"
            }
#line 550 "declarative_debugger.m"
          if (mdb__declarative_debugger__succeeded)
#line 549 "declarative_debugger.m"
            mdb__declarative_debugger__AnalyserResponse_62 = mdb__declarative_debugger__AnalyserResponse0_19;
#line 550 "declarative_debugger.m"
          else
#line 551 "declarative_debugger.m"
            {
#line 551 "declarative_debugger.m"
              {
#line 551 "declarative_debugger.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[6])));
#line 551 "declarative_debugger.m"
                return;
              }
#line 551 "declarative_debugger.m"
            }
#line 554 "declarative_debugger.m"
          {
#line 554 "declarative_debugger.m"
            mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_126_126, mdb__declarative_debugger__Analyser_63, &mdb__declarative_debugger__MaybeOrigin_64);
          }
#line 555 "declarative_debugger.m"
          {
#line 555 "declarative_debugger.m"
            mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_62, mdb__declarative_debugger__MaybeOrigin_64, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
#line 555 "declarative_debugger.m"
            return;
          }
#line 545 "declarative_debugger.m"
        }
#line 536 "declarative_debugger.m"
        break;
#line 536 "declarative_debugger.m"
      case (MR_Integer) 3:
#line 536 "declarative_debugger.m"
#line 536 "declarative_debugger.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 0)))) {
#line 536 "declarative_debugger.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 536 "declarative_debugger.m"
          case (MR_Integer) 0:
#line 558 "declarative_debugger.m"
            {
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_131_131;
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_133_133;
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_135_135;
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_137_137;
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139;
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Mode_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 1)));
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Oracle_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_45_45 = ((MR_Word) mdb__declarative_debugger__Store_8);
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46;
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Analyser0_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__AnalyserResponse_66;
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Analyser_67;
#line 558 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__MaybeOrigin_68;
#line 559 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 559 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
#line 561 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__conv3_Analyser_67;
#line 561 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__conv2_AnalyserResponse_66;
#line 563 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_96_96;
#line 563 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_97_97;
#line 563 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_98_98;
#line 563 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_95_95;

#line 11167 "mdb.declarative_debugger.c"
              {
#line 11169 "mdb.declarative_debugger.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_131_131);
              }
#line 11172 "mdb.declarative_debugger.c"
              {
#line 11174 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_133_133 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11176 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_133_133, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 11178 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_133_133, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_131_131));
#line 11180 "mdb.declarative_debugger.c"
              }
#line 11182 "mdb.declarative_debugger.c"
              {
#line 11184 "mdb.declarative_debugger.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_135_135);
              }
#line 11187 "mdb.declarative_debugger.c"
              {
#line 11189 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_137_137 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11191 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_137_137, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 11193 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_137_137, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_135_135));
#line 11195 "mdb.declarative_debugger.c"
              }
#line 11197 "mdb.declarative_debugger.c"
              {
#line 11199 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 11201 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 11203 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108));
#line 11205 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_133_133));
#line 11207 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_137_137));
#line 11209 "mdb.declarative_debugger.c"
              }
#line 561 "declarative_debugger.m"
              {
#line 561 "declarative_debugger.m"
                mdb__declarative_analyser__change_search_mode_6_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_139, ((MR_Box) (mdb__declarative_debugger__V_45_45)), mdb__declarative_debugger__Oracle_21, mdb__declarative_debugger__Mode_20, (MR_Word) mdb__declarative_debugger__Analyser0_65, &mdb__declarative_debugger__conv3_Analyser_67, &mdb__declarative_debugger__conv2_AnalyserResponse_66);
              }
#line 561 "declarative_debugger.m"
              mdb__declarative_debugger__Analyser_67 = (MR_Word) mdb__declarative_debugger__conv3_Analyser_67;
#line 561 "declarative_debugger.m"
              mdb__declarative_debugger__AnalyserResponse_66 = (MR_Word) mdb__declarative_debugger__conv2_AnalyserResponse_66;
#line 563 "declarative_debugger.m"
              mdb__declarative_debugger__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 0)));
#line 563 "declarative_debugger.m"
              mdb__declarative_debugger__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 1)));
#line 563 "declarative_debugger.m"
              mdb__declarative_debugger__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 2)));
#line 563 "declarative_debugger.m"
              mdb__declarative_debugger__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27, (MR_Integer) 3)));
#line 563 "declarative_debugger.m"
              {
#line 563 "declarative_debugger.m"
                mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 563 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_67));
#line 563 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 1) = ((MR_Box) (mdb__declarative_debugger__V_96_96));
#line 563 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 2) = ((MR_Box) (mdb__declarative_debugger__V_97_97));
#line 563 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, 3) = ((MR_Box) (mdb__declarative_debugger__V_98_98));
#line 563 "declarative_debugger.m"
              }
#line 564 "declarative_debugger.m"
              {
#line 564 "declarative_debugger.m"
                mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_137_137, mdb__declarative_debugger__Analyser_67, &mdb__declarative_debugger__MaybeOrigin_68);
              }
#line 565 "declarative_debugger.m"
              {
#line 565 "declarative_debugger.m"
                mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__AnalyserResponse_66, mdb__declarative_debugger__MaybeOrigin_68, mdb__declarative_debugger__DiagnoserResponse_10, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_46_46, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28);
#line 565 "declarative_debugger.m"
                return;
              }
#line 558 "declarative_debugger.m"
            }
#line 536 "declarative_debugger.m"
            break;
#line 536 "declarative_debugger.m"
          case (MR_Integer) 1:
#line 589 "declarative_debugger.m"
            {
#line 589 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Node_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__OracleResponse_9, (MR_Integer) 1)));
#line 589 "declarative_debugger.m"
              MR_Integer mdb__declarative_debugger__Event_24;
#line 590 "declarative_debugger.m"
              MR_Integer mdb__declarative_debugger__V_25_25;
#line 590 "declarative_debugger.m"
              MR_Box mdb__declarative_debugger__V_26_26;

#line 590 "declarative_debugger.m"
              {
#line 590 "declarative_debugger.m"
                mdb__declarative_tree__edt_subtree_details_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_108, mdb__declarative_debugger__Store_8, mdb__declarative_debugger__Node_23, &mdb__declarative_debugger__Event_24, &mdb__declarative_debugger__V_25_25, &mdb__declarative_debugger__V_26_26);
              }
#line 591 "declarative_debugger.m"
              {
#line 591 "declarative_debugger.m"
                MR_Word base;
#line 591 "declarative_debugger.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 591 "declarative_debugger.m"
                *mdb__declarative_debugger__DiagnoserResponse_10 = base;
#line 591 "declarative_debugger.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_debugger__Event_24));
#line 591 "declarative_debugger.m"
              }
#line 589 "declarative_debugger.m"
              *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_28 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_27;
#line 589 "declarative_debugger.m"
            }
#line 536 "declarative_debugger.m"
            break;
#line 536 "declarative_debugger.m"
        }
#line 536 "declarative_debugger.m"
        break;
#line 536 "declarative_debugger.m"
    }
#line 536 "declarative_debugger.m"
  }
#line 528 "declarative_debugger.m"
}

#line 416 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__handle_analyser_response_8_p_0(
#line 416 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113,
#line 416 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_9,
#line 416 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__AnalyserResponse_10,
#line 416 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__MaybeOrigin_11,
#line 416 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__DiagnoserResponse_12,
#line 416 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33,
#line 416 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34)
#line 416 "declarative_debugger.m"
{
#line 424 "declarative_debugger.m"
  while (MR_TRUE)
#line 424 "declarative_debugger.m"
    {
#line 424 "declarative_debugger.m"
      /* tailcall optimized into a loop */
#line 424 "declarative_debugger.m"
      {
#line 424 "declarative_debugger.m"
        MR_bool mdb__declarative_debugger__succeeded;

#line 424 "declarative_debugger.m"
#line 424 "declarative_debugger.m"
        switch (MR_tag((MR_Word) mdb__declarative_debugger__AnalyserResponse_10)) {
#line 424 "declarative_debugger.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 424 "declarative_debugger.m"
          case (MR_Integer) 0:
#line 424 "declarative_debugger.m"
            {
#line 425 "declarative_debugger.m"
              *mdb__declarative_debugger__DiagnoserResponse_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 426 "declarative_debugger.m"
              {
#line 426 "declarative_debugger.m"
                mercury__io__write_string_3_p_0((MR_String) "No bug found.\n");
              }
#line 424 "declarative_debugger.m"
              *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
#line 424 "declarative_debugger.m"
            }
#line 424 "declarative_debugger.m"
            break;
#line 424 "declarative_debugger.m"
          case (MR_Integer) 1:
#line 428 "declarative_debugger.m"
            {
#line 428 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_115_115;
#line 428 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_117_117;
#line 428 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Bug_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 0)));
#line 428 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Evidence_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));

#line 11370 "mdb.declarative_debugger.c"
              {
#line 11372 "mdb.declarative_debugger.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_115_115);
              }
#line 11375 "mdb.declarative_debugger.c"
              {
#line 11377 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_117_117 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11379 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_117_117, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 11381 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_117_117, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_115_115));
#line 11383 "mdb.declarative_debugger.c"
              }
#line 429 "declarative_debugger.m"
              {
#line 429 "declarative_debugger.m"
                mdb__declarative_debugger__confirm_bug_8_p_0(mdb__declarative_debugger__TypeInfo_117_117, mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__Bug_15, (MR_Word) mdb__declarative_debugger__Evidence_16, mdb__declarative_debugger__DiagnoserResponse_12, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34);
#line 429 "declarative_debugger.m"
                return;
              }
#line 428 "declarative_debugger.m"
            }
#line 424 "declarative_debugger.m"
            break;
#line 424 "declarative_debugger.m"
          case (MR_Integer) 2:
#line 431 "declarative_debugger.m"
            {
#line 431 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_119_119;
#line 431 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__TypeInfo_121_121;
#line 431 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Question_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 0)));
#line 431 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Oracle0_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 431 "declarative_debugger.m"
              MR_Integer mdb__declarative_debugger__Flag_19;
#line 431 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__OracleResponse_21;
#line 431 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__FromUser_22;
#line 431 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Oracle_23;
#line 431 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68;
#line 431 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69;
#line 432 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 432 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
#line 432 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 441 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__Origin_20;
#line 435 "declarative_debugger.m"
              MR_Integer mdb__declarative_debugger__V_59_59;
#line 458 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_89_89;
#line 458 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_91_91;
#line 458 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_92_92;
#line 458 "declarative_debugger.m"
              MR_Word mdb__declarative_debugger__V_90_90;

#line 433 "declarative_debugger.m"
              {
#line 433 "declarative_debugger.m"
                mdb__declarative_debugger__debug_origin_3_p_0(&mdb__declarative_debugger__Flag_19);
              }
#line 435 "declarative_debugger.m"
              mdb__declarative_debugger__succeeded = ((MR_tag((MR_Word) mdb__declarative_debugger__MaybeOrigin_11)) == (MR_mktag((MR_Integer) 1)));
#line 435 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 435 "declarative_debugger.m"
                {
#line 435 "declarative_debugger.m"
                  mdb__declarative_debugger__Origin_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__MaybeOrigin_11, (MR_Integer) 0)));
#line 436 "declarative_debugger.m"
                  mdb__declarative_debugger__V_59_59 = (MR_Integer) 0;
#line 436 "declarative_debugger.m"
                  mdb__declarative_debugger__succeeded = (mdb__declarative_debugger__Flag_19 > mdb__declarative_debugger__V_59_59);
#line 435 "declarative_debugger.m"
                }
#line 441 "declarative_debugger.m"
              if (mdb__declarative_debugger__succeeded)
#line 438 "declarative_debugger.m"
                {
#line 438 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_62_62;

#line 438 "declarative_debugger.m"
                  {
#line 438 "declarative_debugger.m"
                    mercury__io__write_string_3_p_0((MR_String) "Origin: ");
                  }
#line 439 "declarative_debugger.m"
                  mdb__declarative_debugger__V_62_62 = ((MR_Word) mdb__declarative_debugger__Store_9);
#line 439 "declarative_debugger.m"
                  {
#line 439 "declarative_debugger.m"
                    mdb__declarative_debugger__write_origin_4_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__V_62_62, mdb__declarative_debugger__Origin_20);
                  }
#line 440 "declarative_debugger.m"
                  {
#line 440 "declarative_debugger.m"
                    mercury__io__nl_2_p_0();
                  }
#line 438 "declarative_debugger.m"
                }
#line 441 "declarative_debugger.m"
              else
#line 441 "declarative_debugger.m"
                {
#line 441 "declarative_debugger.m"
                }
#line 11490 "mdb.declarative_debugger.c"
              {
#line 11492 "mdb.declarative_debugger.c"
                mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_119_119);
              }
#line 11495 "mdb.declarative_debugger.c"
              {
#line 11497 "mdb.declarative_debugger.c"
                mdb__declarative_debugger__TypeInfo_121_121 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11499 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_121_121, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 11501 "mdb.declarative_debugger.c"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_121_121, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_119_119));
#line 11503 "mdb.declarative_debugger.c"
              }
#line 444 "declarative_debugger.m"
              {
#line 444 "declarative_debugger.m"
                mdb__declarative_oracle__query_oracle_7_p_0(mdb__declarative_debugger__TypeInfo_121_121, mdb__declarative_debugger__Question_17, &mdb__declarative_debugger__OracleResponse_21, &mdb__declarative_debugger__FromUser_22, mdb__declarative_debugger__Oracle0_18, &mdb__declarative_debugger__Oracle_23);
              }
#line 455 "declarative_debugger.m"
#line 455 "declarative_debugger.m"
              switch (mdb__declarative_debugger__FromUser_22) {
#line 455 "declarative_debugger.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 455 "declarative_debugger.m"
                case (MR_Integer) 0:
#line 456 "declarative_debugger.m"
                  mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
#line 455 "declarative_debugger.m"
                  break;
#line 455 "declarative_debugger.m"
                case (MR_Integer) 1:
#line 446 "declarative_debugger.m"
                  {
#line 446 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66;
#line 447 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 447 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 447 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 447 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));

#line 447 "declarative_debugger.m"
                    {
#line 447 "declarative_debugger.m"
                      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 447 "declarative_debugger.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 0) = ((MR_Box) (mdb__declarative_debugger__V_85_85));
#line 447 "declarative_debugger.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 1) = ((MR_Box) (mdb__declarative_debugger__V_86_86));
#line 447 "declarative_debugger.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 2) = ((MR_Box) ((MR_Integer) 0));
#line 447 "declarative_debugger.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, 3) = ((MR_Box) (mdb__declarative_debugger__V_88_88));
#line 447 "declarative_debugger.m"
                    }
#line 449 "declarative_debugger.m"
                    {
#line 449 "declarative_debugger.m"
                      mdb__declarative_debugger__succeeded = mdb__declarative_oracle__oracle_response_undoable_1_p_0(mdb__declarative_debugger__TypeInfo_121_121, mdb__declarative_debugger__OracleResponse_21);
                    }
#line 452 "declarative_debugger.m"
                    if (mdb__declarative_debugger__succeeded)
#line 451 "declarative_debugger.m"
                      {
#line 11559 "mdb.declarative_debugger.c"
                        MR_Word mdb__declarative_debugger__TypeInfo_122_122;

#line 11562 "mdb.declarative_debugger.c"
                        {
#line 11564 "mdb.declarative_debugger.c"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_122_122);
                        }
#line 451 "declarative_debugger.m"
                        {
#line 451 "declarative_debugger.m"
                          mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_115_104_95_100_105_97_103_110_111_115_101_114_95_95_91_49_93_95_48_2_p_0(mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66, &mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68);
                        }
#line 451 "declarative_debugger.m"
                      }
#line 452 "declarative_debugger.m"
                    else
#line 452 "declarative_debugger.m"
                      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_66_66;
#line 446 "declarative_debugger.m"
                  }
#line 455 "declarative_debugger.m"
                  break;
#line 455 "declarative_debugger.m"
              }
#line 458 "declarative_debugger.m"
              mdb__declarative_debugger__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 0)));
#line 458 "declarative_debugger.m"
              mdb__declarative_debugger__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 1)));
#line 458 "declarative_debugger.m"
              mdb__declarative_debugger__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 2)));
#line 458 "declarative_debugger.m"
              mdb__declarative_debugger__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_68_68, (MR_Integer) 3)));
#line 458 "declarative_debugger.m"
              {
#line 458 "declarative_debugger.m"
                mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 458 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 0) = ((MR_Box) (mdb__declarative_debugger__V_89_89));
#line 458 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_23));
#line 458 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 2) = ((MR_Box) (mdb__declarative_debugger__V_91_91));
#line 458 "declarative_debugger.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, 3) = ((MR_Box) (mdb__declarative_debugger__V_92_92));
#line 458 "declarative_debugger.m"
              }
#line 459 "declarative_debugger.m"
              {
#line 459 "declarative_debugger.m"
                mdb__declarative_debugger__handle_oracle_response_7_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__OracleResponse_21, mdb__declarative_debugger__DiagnoserResponse_12, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_69_69, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34);
#line 459 "declarative_debugger.m"
                return;
              }
#line 431 "declarative_debugger.m"
            }
#line 424 "declarative_debugger.m"
            break;
#line 424 "declarative_debugger.m"
          case (MR_Integer) 3:
#line 424 "declarative_debugger.m"
#line 424 "declarative_debugger.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 0)))) {
#line 424 "declarative_debugger.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 424 "declarative_debugger.m"
              case (MR_Integer) 0:
#line 462 "declarative_debugger.m"
                {
#line 462 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__Node_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));
#line 462 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__Event_25;
#line 462 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__Seqno_26;
#line 462 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__CallPreceding_27;
#line 462 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__IdealDepth_29;
#line 466 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__ImplicitTreeInfo_28;
#line 464 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_54_54;

#line 463 "declarative_debugger.m"
                  {
#line 463 "declarative_debugger.m"
                    mdb__declarative_tree__edt_subtree_details_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__Node_24, &mdb__declarative_debugger__Event_25, &mdb__declarative_debugger__Seqno_26, &mdb__declarative_debugger__CallPreceding_27);
                  }
#line 464 "declarative_debugger.m"
                  mdb__declarative_debugger__V_54_54 = ((MR_Word) mdb__declarative_debugger__Store_9);
#line 464 "declarative_debugger.m"
                  {
#line 464 "declarative_debugger.m"
                    mdb__declarative_debugger__succeeded = mdb__declarative_tree__trace_implicit_tree_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__V_54_54, mdb__declarative_debugger__Node_24, &mdb__declarative_debugger__ImplicitTreeInfo_28);
                  }
#line 466 "declarative_debugger.m"
                  if (mdb__declarative_debugger__succeeded)
#line 465 "declarative_debugger.m"
                    mdb__declarative_debugger__IdealDepth_29 = (MR_Integer) mdb__declarative_debugger__ImplicitTreeInfo_28;
#line 466 "declarative_debugger.m"
                  else
#line 467 "declarative_debugger.m"
                    {
#line 467 "declarative_debugger.m"
                      {
#line 467 "declarative_debugger.m"
                        mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_debugger_scalar_common_1[5])));
#line 467 "declarative_debugger.m"
                        return;
                      }
#line 467 "declarative_debugger.m"
                    }
#line 470 "declarative_debugger.m"
                  {
#line 470 "declarative_debugger.m"
                    MR_Word base;
#line 470 "declarative_debugger.m"
                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 470 "declarative_debugger.m"
                    *mdb__declarative_debugger__DiagnoserResponse_12 = base;
#line 470 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 470 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_debugger__Event_25));
#line 470 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_debugger__Seqno_26));
#line 470 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(3), base, 3) = mdb__declarative_debugger__CallPreceding_27;
#line 470 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mdb__declarative_debugger__IdealDepth_29));
#line 470 "declarative_debugger.m"
                  }
#line 462 "declarative_debugger.m"
                  *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
#line 462 "declarative_debugger.m"
                }
#line 424 "declarative_debugger.m"
                break;
#line 424 "declarative_debugger.m"
              case (MR_Integer) 1:
#line 473 "declarative_debugger.m"
                {
#line 473 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__Node_76 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));
#line 473 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__Event_77;
#line 473 "declarative_debugger.m"
                  MR_Integer mdb__declarative_debugger__Seqno_78;
#line 473 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_131_131;
#line 473 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_132_132;
#line 474 "declarative_debugger.m"
                  MR_Box mdb__declarative_debugger__V_30_30;
#line 475 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_130_130;
#line 475 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_133_133;

#line 474 "declarative_debugger.m"
                  {
#line 474 "declarative_debugger.m"
                    mdb__declarative_tree__edt_subtree_details_5_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, mdb__declarative_debugger__Store_9, mdb__declarative_debugger__Node_76, &mdb__declarative_debugger__Event_77, &mdb__declarative_debugger__Seqno_78, &mdb__declarative_debugger__V_30_30);
                  }
#line 475 "declarative_debugger.m"
                  mdb__declarative_debugger__V_133_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 475 "declarative_debugger.m"
                  mdb__declarative_debugger__V_132_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 475 "declarative_debugger.m"
                  mdb__declarative_debugger__V_131_131 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
#line 475 "declarative_debugger.m"
                  mdb__declarative_debugger__V_130_130 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 477 "declarative_debugger.m"
#line 477 "declarative_debugger.m"
                  switch (mdb__declarative_debugger__V_131_131) {
#line 477 "declarative_debugger.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 477 "declarative_debugger.m"
                    case (MR_Integer) 0:
#line 475 "declarative_debugger.m"
                      {
#line 476 "declarative_debugger.m"
                        {
#line 476 "declarative_debugger.m"
                          MR_Word base;
#line 476 "declarative_debugger.m"
                          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 476 "declarative_debugger.m"
                          *mdb__declarative_debugger__DiagnoserResponse_12 = base;
#line 476 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 476 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_debugger__Event_77));
#line 476 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_debugger__Seqno_78));
#line 476 "declarative_debugger.m"
                        }
#line 475 "declarative_debugger.m"
                        *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33;
#line 475 "declarative_debugger.m"
                      }
#line 477 "declarative_debugger.m"
                      break;
#line 477 "declarative_debugger.m"
                    case (MR_Integer) 1:
#line 477 "declarative_debugger.m"
                      {
#line 477 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__Out_31;
#line 477 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__Response_32;
#line 11771 "mdb.declarative_debugger.c"
                        MR_Word mdb__declarative_debugger__TypeInfo_125_125;
#line 489 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__V_102_102;
#line 489 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__V_103_103;
#line 489 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__V_105_105;
#line 489 "declarative_debugger.m"
                        MR_Word mdb__declarative_debugger__V_104_104;

#line 478 "declarative_debugger.m"
                        {
#line 478 "declarative_debugger.m"
                          mdb__declarative_debugger__Out_31 = mdb__declarative_oracle__get_user_output_stream_1_f_0(mdb__declarative_debugger__V_132_132);
                        }
#line 479 "declarative_debugger.m"
                        {
#line 479 "declarative_debugger.m"
                          mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_31, (MR_String) "All descendent calls are trusted.\nShall I continue searching in ancestor calls\?\n");
                        }
#line 11792 "mdb.declarative_debugger.c"
                        {
#line 11794 "mdb.declarative_debugger.c"
                          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_125_125);
                        }
#line 481 "declarative_debugger.m"
                        {
#line 481 "declarative_debugger.m"
                          mdb__declarative_debugger__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_115_101_97_114_99_104_95_115_117_112_101_114_116_114_101_101_95_114_101_115_112_111_110_115_101_95_95_91_49_93_95_48_4_p_0(mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, &mdb__declarative_debugger__Response_32);
                        }
#line 484 "declarative_debugger.m"
#line 484 "declarative_debugger.m"
                        switch (mdb__declarative_debugger__Response_32) {
#line 484 "declarative_debugger.m"
                          default: /*NOTREACHED*/ MR_assert(0);
#line 484 "declarative_debugger.m"
                          case (MR_Integer) 0:
#line 484 "declarative_debugger.m"
                            {
#line 485 "declarative_debugger.m"
                              {
#line 485 "declarative_debugger.m"
                                mercury__io__write_string_4_p_0(mdb__declarative_debugger__Out_31, (MR_String) "Diagnosis aborted.\n");
                              }
#line 486 "declarative_debugger.m"
                              *mdb__declarative_debugger__DiagnoserResponse_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 484 "declarative_debugger.m"
                            }
#line 484 "declarative_debugger.m"
                            break;
#line 484 "declarative_debugger.m"
                          case (MR_Integer) 1:
#line 483 "declarative_debugger.m"
                            {
#line 483 "declarative_debugger.m"
                              MR_Word base;
#line 483 "declarative_debugger.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 483 "declarative_debugger.m"
                              *mdb__declarative_debugger__DiagnoserResponse_12 = base;
#line 483 "declarative_debugger.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 483 "declarative_debugger.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_debugger__Event_77));
#line 483 "declarative_debugger.m"
                              MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_debugger__Seqno_78));
#line 483 "declarative_debugger.m"
                            }
#line 484 "declarative_debugger.m"
                            break;
#line 484 "declarative_debugger.m"
                        }
#line 489 "declarative_debugger.m"
                        mdb__declarative_debugger__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 489 "declarative_debugger.m"
                        mdb__declarative_debugger__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 489 "declarative_debugger.m"
                        mdb__declarative_debugger__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
#line 489 "declarative_debugger.m"
                        mdb__declarative_debugger__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 489 "declarative_debugger.m"
                        {
#line 489 "declarative_debugger.m"
                          MR_Word base;
#line 489 "declarative_debugger.m"
                          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 489 "declarative_debugger.m"
                          *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_34 = base;
#line 489 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__V_102_102));
#line 489 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__V_103_103));
#line 489 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 0));
#line 489 "declarative_debugger.m"
                          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_debugger__V_105_105));
#line 489 "declarative_debugger.m"
                        }
#line 477 "declarative_debugger.m"
                      }
#line 477 "declarative_debugger.m"
                      break;
#line 477 "declarative_debugger.m"
                  }
#line 473 "declarative_debugger.m"
                }
#line 424 "declarative_debugger.m"
                break;
#line 424 "declarative_debugger.m"
              case (MR_Integer) 2:
#line 492 "declarative_debugger.m"
                {
#line 492 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__TypeInfo_127_127;
#line 492 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__TypeInfo_129_129;
#line 492 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37;
#line 492 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_38_38;
#line 492 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__Question_79 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_debugger__AnalyserResponse_10, (MR_Integer) 1)));
#line 492 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__Oracle0_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 492 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__Oracle_81;
#line 493 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 493 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
#line 493 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 495 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_109_109;
#line 495 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_111_111;
#line 495 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_112_112;
#line 495 "declarative_debugger.m"
                  MR_Word mdb__declarative_debugger__V_110_110;

#line 11913 "mdb.declarative_debugger.c"
                  {
#line 11915 "mdb.declarative_debugger.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_113, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_127_127);
                  }
#line 11918 "mdb.declarative_debugger.c"
                  {
#line 11920 "mdb.declarative_debugger.c"
                    mdb__declarative_debugger__TypeInfo_129_129 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11922 "mdb.declarative_debugger.c"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_129_129, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 11924 "mdb.declarative_debugger.c"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_129_129, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_127_127));
#line 11926 "mdb.declarative_debugger.c"
                  }
#line 494 "declarative_debugger.m"
                  {
#line 494 "declarative_debugger.m"
                    mdb__declarative_oracle__revise_oracle_3_p_0(mdb__declarative_debugger__TypeInfo_129_129, mdb__declarative_debugger__Question_79, mdb__declarative_debugger__Oracle0_80, &mdb__declarative_debugger__Oracle_81);
                  }
#line 495 "declarative_debugger.m"
                  mdb__declarative_debugger__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 0)));
#line 495 "declarative_debugger.m"
                  mdb__declarative_debugger__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 1)));
#line 495 "declarative_debugger.m"
                  mdb__declarative_debugger__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 2)));
#line 495 "declarative_debugger.m"
                  mdb__declarative_debugger__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33, (MR_Integer) 3)));
#line 495 "declarative_debugger.m"
                  {
#line 495 "declarative_debugger.m"
                    mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 495 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 0) = ((MR_Box) (mdb__declarative_debugger__V_109_109));
#line 495 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_81));
#line 495 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 2) = ((MR_Box) (mdb__declarative_debugger__V_111_111));
#line 495 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37, 3) = ((MR_Box) (mdb__declarative_debugger__V_112_112));
#line 495 "declarative_debugger.m"
                  }
#line 497 "declarative_debugger.m"
                  {
#line 497 "declarative_debugger.m"
                    mdb__declarative_debugger__V_38_38 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 497 "declarative_debugger.m"
                    MR_hl_field(MR_mktag(2), mdb__declarative_debugger__V_38_38, 0) = ((MR_Box) (mdb__declarative_debugger__Question_79));
#line 497 "declarative_debugger.m"
                  }
#line 496 "declarative_debugger.m"
                  /* direct tailcall eliminated */
#line 496 "declarative_debugger.m"
                  {
#line 496 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__AnalyserResponse__tmp_copy_10 = mdb__declarative_debugger__V_38_38;
#line 496 "declarative_debugger.m"
                    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0__tmp_copy_33 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_37_37;

#line 496 "declarative_debugger.m"
                    mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_33 = mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0__tmp_copy_33;
#line 496 "declarative_debugger.m"
                    mdb__declarative_debugger__MaybeOrigin_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 496 "declarative_debugger.m"
                    mdb__declarative_debugger__AnalyserResponse_10 = mdb__declarative_debugger__AnalyserResponse__tmp_copy_10;
#line 496 "declarative_debugger.m"
                  }
#line 496 "declarative_debugger.m"
                  continue;
#line 492 "declarative_debugger.m"
                }
#line 424 "declarative_debugger.m"
                break;
#line 424 "declarative_debugger.m"
            }
#line 424 "declarative_debugger.m"
            break;
#line 424 "declarative_debugger.m"
        }
#line 424 "declarative_debugger.m"
      }
#line 424 "declarative_debugger.m"
      break;
#line 424 "declarative_debugger.m"
    }
#line 416 "declarative_debugger.m"
}

#line 402 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_2_6_p_0(
#line 402 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33,
#line 402 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_7,
#line 402 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__AnalysisType_8,
#line 402 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Diagnoser0_9,
#line 402 "declarative_debugger.m"
  MR_Tuple * mdb__declarative_debugger__HeadVar__4_4)
#line 402 "declarative_debugger.m"
{
#line 407 "declarative_debugger.m"
  {
#line 407 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_35_35;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_37_37;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_39_39;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_41_41;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Response_10;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Diagnoser_11;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser0_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 0)));
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__AnalyserResponse_14;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser_15;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Diagnoser1_16;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__MaybeOrigin_17;
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_20_20 = ((MR_Word) mdb__declarative_debugger__Store_7);
#line 407 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 1)));
#line 408 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 2)));
#line 408 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 3)));
#line 409 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__conv1_AnalyserResponse_14;
#line 409 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__conv0_Analyser_15;
#line 411 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_30_30;
#line 411 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_31_31;
#line 411 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_32_32;
#line 411 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_29_29;

#line 12065 "mdb.declarative_debugger.c"
    {
#line 12067 "mdb.declarative_debugger.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33, (MR_Integer) 1, &mdb__declarative_debugger__TypeInfo_35_35);
    }
#line 12070 "mdb.declarative_debugger.c"
    {
#line 12072 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_37_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12074 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_37_37, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_wrap_1));
#line 12076 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_37_37, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_35_35));
#line 12078 "mdb.declarative_debugger.c"
    }
#line 12080 "mdb.declarative_debugger.c"
    {
#line 12082 "mdb.declarative_debugger.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_39_39);
    }
#line 12085 "mdb.declarative_debugger.c"
    {
#line 12087 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_41_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12089 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_41_41, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 12091 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_41_41, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_39_39));
#line 12093 "mdb.declarative_debugger.c"
    }
#line 12095 "mdb.declarative_debugger.c"
    {
#line 12097 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 12099 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 0) = ((MR_Box) (base_typeclass_info_mdb__declarative_edt__mercury_edt__arity2__mdb__declarative_tree__wrap__arity1__mdb__declarative_tree__edt_node__arity1__));
#line 12101 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 1) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33));
#line 12103 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_37_37));
#line 12105 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_41_41));
#line 12107 "mdb.declarative_debugger.c"
    }
#line 409 "declarative_debugger.m"
    {
#line 409 "declarative_debugger.m"
      mdb__declarative_analyser__start_or_resume_analysis_6_p_0(mdb__declarative_debugger__TypeClassInfo_for_mercury_edt_43, ((MR_Box) (mdb__declarative_debugger__V_20_20)), mdb__declarative_debugger__V_23_23, (MR_Word) mdb__declarative_debugger__AnalysisType_8, &mdb__declarative_debugger__conv1_AnalyserResponse_14, (MR_Word) mdb__declarative_debugger__Analyser0_13, &mdb__declarative_debugger__conv0_Analyser_15);
    }
#line 409 "declarative_debugger.m"
    mdb__declarative_debugger__AnalyserResponse_14 = (MR_Word) mdb__declarative_debugger__conv1_AnalyserResponse_14;
#line 409 "declarative_debugger.m"
    mdb__declarative_debugger__Analyser_15 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_15;
#line 411 "declarative_debugger.m"
    mdb__declarative_debugger__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 0)));
#line 411 "declarative_debugger.m"
    mdb__declarative_debugger__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 1)));
#line 411 "declarative_debugger.m"
    mdb__declarative_debugger__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 2)));
#line 411 "declarative_debugger.m"
    mdb__declarative_debugger__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser0_9, (MR_Integer) 3)));
#line 411 "declarative_debugger.m"
    {
#line 411 "declarative_debugger.m"
      mdb__declarative_debugger__Diagnoser1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 411 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_15));
#line 411 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 1) = ((MR_Box) (mdb__declarative_debugger__V_30_30));
#line 411 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 2) = ((MR_Box) (mdb__declarative_debugger__V_31_31));
#line 411 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__Diagnoser1_16, 3) = ((MR_Box) (mdb__declarative_debugger__V_32_32));
#line 411 "declarative_debugger.m"
    }
#line 412 "declarative_debugger.m"
    {
#line 412 "declarative_debugger.m"
      mdb__declarative_analyser__debug_analyser_state_2_p_0(mdb__declarative_debugger__TypeInfo_41_41, mdb__declarative_debugger__Analyser_15, &mdb__declarative_debugger__MaybeOrigin_17);
    }
#line 413 "declarative_debugger.m"
    {
#line 413 "declarative_debugger.m"
      mdb__declarative_debugger__handle_analyser_response_8_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_33, mdb__declarative_debugger__Store_7, mdb__declarative_debugger__AnalyserResponse_14, mdb__declarative_debugger__MaybeOrigin_17, &mdb__declarative_debugger__Response_10, mdb__declarative_debugger__Diagnoser1_16, &mdb__declarative_debugger__Diagnoser_11);
    }
#line 407 "declarative_debugger.m"
    {
#line 407 "declarative_debugger.m"
      MR_Tuple base;
#line 407 "declarative_debugger.m"
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 407 "declarative_debugger.m"
      *mdb__declarative_debugger__HeadVar__4_4 = base;
#line 407 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Response_10));
#line 407 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Diagnoser_11));
#line 407 "declarative_debugger.m"
    }
#line 407 "declarative_debugger.m"
  }
#line 402 "declarative_debugger.m"
}

#line 286 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger__unravel_decl_atom_3_p_0(
#line 286 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__DeclAtom_4,
#line 286 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__TraceAtom_5,
#line 286 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__MaybeIoActions_6)
#line 286 "declarative_debugger.m"
{
#line 327 "declarative_debugger.m"
  {
#line 327 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;

#line 327 "declarative_debugger.m"
    if (((MR_tag((MR_Word) mdb__declarative_debugger__DeclAtom_4)) == (MR_mktag((MR_Integer) 0))))
#line 330 "declarative_debugger.m"
      {
#line 330 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_7_7 = (MR_Word) MR_body(((MR_Word) mdb__declarative_debugger__DeclAtom_4), (MR_Integer) 0);

#line 330 "declarative_debugger.m"
        *mdb__declarative_debugger__TraceAtom_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_7_7, (MR_Integer) 0)));
#line 330 "declarative_debugger.m"
        *mdb__declarative_debugger__MaybeIoActions_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_7_7, (MR_Integer) 1)));
#line 330 "declarative_debugger.m"
      }
#line 327 "declarative_debugger.m"
    else
#line 327 "declarative_debugger.m"
      {
#line 327 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__DeclAtom_4, (MR_Integer) 0)));

#line 327 "declarative_debugger.m"
        *mdb__declarative_debugger__TraceAtom_5 = (MR_Word) mdb__declarative_debugger__V_8_8;
#line 328 "declarative_debugger.m"
        *mdb__declarative_debugger__MaybeIoActions_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 327 "declarative_debugger.m"
      }
#line 327 "declarative_debugger.m"
  }
#line 286 "declarative_debugger.m"
}

#line 387 "declarative_debugger.m"
static void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0_1(
#line 387 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__closure_arg,
#line 387 "declarative_debugger.m"
  MR_Box * mdb__declarative_debugger__wrapper_arg_1,
#line 387 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__wrapper_arg_2,
#line 387 "declarative_debugger.m"
  MR_Box * mdb__declarative_debugger__wrapper_arg_3)
#line 387 "declarative_debugger.m"
{
#line 387 "declarative_debugger.m"
  {
#line 387 "declarative_debugger.m"
    MR_Box mdb__declarative_debugger__closure = mdb__declarative_debugger__closure_arg;
#line 387 "declarative_debugger.m"
    MR_Tuple mdb__declarative_debugger__conv0_HeadVar__4_4;

#line 387 "declarative_debugger.m"
    {
#line 387 "declarative_debugger.m"
      mdb__declarative_debugger__diagnosis_2_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 4)), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__closure, (MR_Integer) 6))), &mdb__declarative_debugger__conv0_HeadVar__4_4);
    }
#line 387 "declarative_debugger.m"
    *mdb__declarative_debugger__wrapper_arg_1 = ((MR_Box) (mdb__declarative_debugger__conv0_HeadVar__4_4));
#line 387 "declarative_debugger.m"
  }
#line 387 "declarative_debugger.m"
}

#line 279 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger__diagnosis_9_p_0(
#line 279 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46,
#line 279 "declarative_debugger.m"
  MR_Box mdb__declarative_debugger__Store_10,
#line 279 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__AnalysisType_11,
#line 279 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Response_12,
#line 279 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20,
#line 279 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21,
#line 279 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__STATE_VARIABLE_Browser_0_22,
#line 279 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__STATE_VARIABLE_Browser_23)
#line 279 "declarative_debugger.m"
{
#line 383 "declarative_debugger.m"
  {
#line 383 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_51_51;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_53_53;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_54_54;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_56_56;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_58_58;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_16;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Result_17;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 1)));
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_28_28;
#line 383 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_35_35;
#line 384 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 0)));
#line 384 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 2)));
#line 384 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 3)));
#line 386 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_39_39;
#line 386 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_41_41;
#line 386 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_42_42;
#line 386 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_40_40;
#line 399 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_43_43;
#line 399 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_44_44;
#line 399 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__V_45_45;

#line 384 "declarative_debugger.m"
    {
#line 384 "declarative_debugger.m"
      mdb__declarative_oracle__set_browser_state_3_p_0(mdb__declarative_debugger__STATE_VARIABLE_Browser_0_22, mdb__declarative_debugger__V_26_26, &mdb__declarative_debugger__Oracle_16);
    }
#line 386 "declarative_debugger.m"
    mdb__declarative_debugger__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 0)));
#line 386 "declarative_debugger.m"
    mdb__declarative_debugger__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 1)));
#line 386 "declarative_debugger.m"
    mdb__declarative_debugger__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 2)));
#line 386 "declarative_debugger.m"
    mdb__declarative_debugger__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_0_20, (MR_Integer) 3)));
#line 386 "declarative_debugger.m"
    {
#line 386 "declarative_debugger.m"
      mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 0) = ((MR_Box) (mdb__declarative_debugger__V_39_39));
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_16));
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 2) = ((MR_Box) (mdb__declarative_debugger__V_41_41));
#line 386 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, 3) = ((MR_Box) (mdb__declarative_debugger__V_42_42));
#line 386 "declarative_debugger.m"
    }
#line 387 "declarative_debugger.m"
    {
#line 387 "declarative_debugger.m"
      mdb__declarative_debugger__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 387 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 0) = ((MR_Box) (&mdb__declarative_debugger_scalar_common_5[0]));
#line 387 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 1) = ((MR_Box) (mdb__declarative_debugger__diagnosis_9_p_0_1));
#line 387 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 387 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 3) = ((MR_Box) (mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46));
#line 387 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 4) = mdb__declarative_debugger__Store_10;
#line 387 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 5) = ((MR_Box) (mdb__declarative_debugger__AnalysisType_11));
#line 387 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_28_28, 6) = ((MR_Box) (mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27));
#line 387 "declarative_debugger.m"
    }
#line 12363 "mdb.declarative_debugger.c"
    {
#line 12365 "mdb.declarative_debugger.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_51_51);
    }
#line 12368 "mdb.declarative_debugger.c"
    {
#line 12370 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12372 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_53_53, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_response_1));
#line 12374 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_53_53, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_51_51));
#line 12376 "mdb.declarative_debugger.c"
    }
#line 12378 "mdb.declarative_debugger.c"
    {
#line 12380 "mdb.declarative_debugger.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_54_54);
    }
#line 12383 "mdb.declarative_debugger.c"
    {
#line 12385 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12387 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_56_56, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_state_1));
#line 12389 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_56_56, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_54_54));
#line 12391 "mdb.declarative_debugger.c"
    }
#line 12393 "mdb.declarative_debugger.c"
    {
#line 12395 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_58_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 12397 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
#line 12399 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 1) = ((MR_Box) ((MR_Integer) 2));
#line 12401 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 2) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_53_53));
#line 12403 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_58_58, 3) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_56_56));
#line 12405 "mdb.declarative_debugger.c"
    }
#line 387 "declarative_debugger.m"
    {
#line 387 "declarative_debugger.m"
      mercury__exception__try_io_4_p_1(mdb__declarative_debugger__TypeInfo_58_58, mdb__declarative_debugger__V_28_28, &mdb__declarative_debugger__Result_17);
    }
#line 390 "declarative_debugger.m"
    if (((MR_tag((MR_Word) mdb__declarative_debugger__Result_17)) == (MR_mktag((MR_Integer) 2))))
#line 391 "declarative_debugger.m"
      {
#line 391 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__UnivException_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__Result_17, (MR_Integer) 0)));
#line 395 "declarative_debugger.m"
        MR_Word mdb__declarative_debugger__DiagnoserException_19;
#line 392 "declarative_debugger.m"
        MR_Box mdb__declarative_debugger__conv1_DiagnoserException_19;

#line 392 "declarative_debugger.m"
        {
#line 392 "declarative_debugger.m"
          mdb__declarative_debugger__succeeded = mercury__univ__univ_to_type_2_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, mdb__declarative_debugger__UnivException_18, &mdb__declarative_debugger__conv1_DiagnoserException_19);
        }
#line 392 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 392 "declarative_debugger.m"
          {
#line 392 "declarative_debugger.m"
            mdb__declarative_debugger__DiagnoserException_19 = ((MR_Word) mdb__declarative_debugger__conv1_DiagnoserException_19);
#line 392 "declarative_debugger.m"
            mdb__declarative_debugger__succeeded = MR_TRUE;
#line 392 "declarative_debugger.m"
          }
#line 395 "declarative_debugger.m"
        if (mdb__declarative_debugger__succeeded)
#line 393 "declarative_debugger.m"
          {
#line 393 "declarative_debugger.m"
            MR_Word mdb__declarative_debugger__TypeInfo_60_60;

#line 12445 "mdb.declarative_debugger.c"
            {
#line 12447 "mdb.declarative_debugger.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_debugger__TypeClassInfo_for_annotated_trace_46, (MR_Integer) 2, &mdb__declarative_debugger__TypeInfo_60_60);
            }
#line 393 "declarative_debugger.m"
            {
#line 393 "declarative_debugger.m"
              mdb__declarative_debugger__handle_diagnoser_exception_6_p_0(mdb__declarative_debugger__TypeInfo_60_60, mdb__declarative_debugger__DiagnoserException_19, mdb__declarative_debugger__Response_12, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_27_27, mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21);
            }
#line 393 "declarative_debugger.m"
          }
#line 395 "declarative_debugger.m"
        else
#line 396 "declarative_debugger.m"
          {
#line 396 "declarative_debugger.m"
            mercury__exception__rethrow_1_p_0(mdb__declarative_debugger__TypeInfo_58_58, mdb__declarative_debugger__Result_17);
#line 396 "declarative_debugger.m"
            return;
          }
#line 391 "declarative_debugger.m"
      }
#line 390 "declarative_debugger.m"
    else
#line 389 "declarative_debugger.m"
      {
#line 389 "declarative_debugger.m"
        MR_Tuple mdb__declarative_debugger__V_32_32 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__Result_17, (MR_Integer) 0)));

#line 389 "declarative_debugger.m"
        *mdb__declarative_debugger__Response_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_32_32, (MR_Integer) 0)));
#line 389 "declarative_debugger.m"
        *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_32_32, (MR_Integer) 1)));
#line 389 "declarative_debugger.m"
      }
#line 399 "declarative_debugger.m"
    mdb__declarative_debugger__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 0)));
#line 399 "declarative_debugger.m"
    mdb__declarative_debugger__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 1)));
#line 399 "declarative_debugger.m"
    mdb__declarative_debugger__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 2)));
#line 399 "declarative_debugger.m"
    mdb__declarative_debugger__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_debugger__STATE_VARIABLE_Diagnoser_21, (MR_Integer) 3)));
#line 399 "declarative_debugger.m"
    {
#line 399 "declarative_debugger.m"
      *mdb__declarative_debugger__STATE_VARIABLE_Browser_23 = mdb__declarative_oracle__get_browser_state_1_f_0(mdb__declarative_debugger__V_35_35);
    }
#line 383 "declarative_debugger.m"
  }
#line 279 "declarative_debugger.m"
}

#line 275 "declarative_debugger.m"
void MR_CALL 
mdb__declarative_debugger__diagnoser_state_init_5_p_0(
#line 275 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_R_15,
#line 275 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__InStr_6,
#line 275 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__OutStr_7,
#line 275 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__Browser_8,
#line 275 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HelpSystem_9,
#line 275 "declarative_debugger.m"
  MR_Word * mdb__declarative_debugger__Diagnoser_10)
#line 275 "declarative_debugger.m"
{
#line 363 "declarative_debugger.m"
  {
#line 363 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 363 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__TypeInfo_17_17;
#line 363 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Analyser_11;
#line 363 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Oracle_12;
#line 364 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__conv0_Analyser_11;

#line 12529 "mdb.declarative_debugger.c"
    {
#line 12531 "mdb.declarative_debugger.c"
      mdb__declarative_debugger__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12533 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_17_17, 0) = ((MR_Box) (&mdb__declarative_tree__mdb__declarative_tree__type_ctor_info_edt_node_1));
#line 12535 "mdb.declarative_debugger.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_debugger__TypeInfo_17_17, 1) = ((MR_Box) (mdb__declarative_debugger__TypeInfo_for_R_15));
#line 12537 "mdb.declarative_debugger.c"
    }
#line 364 "declarative_debugger.m"
    {
#line 364 "declarative_debugger.m"
      mdb__declarative_analyser__analyser_state_init_1_p_0(mdb__declarative_debugger__TypeInfo_17_17, &mdb__declarative_debugger__conv0_Analyser_11);
    }
#line 364 "declarative_debugger.m"
    mdb__declarative_debugger__Analyser_11 = (MR_Word) mdb__declarative_debugger__conv0_Analyser_11;
#line 365 "declarative_debugger.m"
    {
#line 365 "declarative_debugger.m"
      mdb__declarative_oracle__oracle_state_init_5_p_0(mdb__declarative_debugger__InStr_6, mdb__declarative_debugger__OutStr_7, mdb__declarative_debugger__Browser_8, mdb__declarative_debugger__HelpSystem_9, &mdb__declarative_debugger__Oracle_12);
    }
#line 366 "declarative_debugger.m"
    {
#line 366 "declarative_debugger.m"
      MR_Word base;
#line 366 "declarative_debugger.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 366 "declarative_debugger.m"
      *mdb__declarative_debugger__Diagnoser_10 = base;
#line 366 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_debugger__Analyser_11));
#line 366 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_debugger__Oracle_12));
#line 366 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) ((MR_Integer) 1));
#line 366 "declarative_debugger.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 366 "declarative_debugger.m"
    }
#line 363 "declarative_debugger.m"
  }
#line 275 "declarative_debugger.m"
}

#line 206 "declarative_debugger.m"
MR_Word MR_CALL 
mdb__declarative_debugger__get_decl_question_atom_1_f_0(
#line 206 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_16_16,
#line 206 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
#line 206 "declarative_debugger.m"
{
#line 337 "declarative_debugger.m"
  {
#line 337 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 337 "declarative_debugger.m"
    MR_Word mdb__declarative_debugger__Atom_2;

#line 337 "declarative_debugger.m"
#line 337 "declarative_debugger.m"
    switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 337 "declarative_debugger.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 337 "declarative_debugger.m"
      case (MR_Integer) 0:
#line 337 "declarative_debugger.m"
        {
#line 337 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 337 "declarative_debugger.m"
          MR_Box mdb__declarative_debugger__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 337 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 337 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_6_6;

#line 337 "declarative_debugger.m"
          mdb__declarative_debugger__Atom_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_7_7, (MR_Integer) 0)));
#line 337 "declarative_debugger.m"
          mdb__declarative_debugger__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__V_7_7, (MR_Integer) 1)));
#line 337 "declarative_debugger.m"
        }
#line 337 "declarative_debugger.m"
        break;
#line 337 "declarative_debugger.m"
      case (MR_Integer) 1:
#line 338 "declarative_debugger.m"
        {
#line 338 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 338 "declarative_debugger.m"
          MR_Box mdb__declarative_debugger__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 338 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));

#line 338 "declarative_debugger.m"
          mdb__declarative_debugger__Atom_2 = (MR_Word) mdb__declarative_debugger__V_11_11;
#line 338 "declarative_debugger.m"
        }
#line 337 "declarative_debugger.m"
        break;
#line 337 "declarative_debugger.m"
      case (MR_Integer) 2:
#line 339 "declarative_debugger.m"
        {
#line 339 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 339 "declarative_debugger.m"
          MR_Box mdb__declarative_debugger__V_12_12 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 339 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));

#line 339 "declarative_debugger.m"
          mdb__declarative_debugger__Atom_2 = (MR_Word) mdb__declarative_debugger__V_15_15;
#line 339 "declarative_debugger.m"
        }
#line 337 "declarative_debugger.m"
        break;
#line 337 "declarative_debugger.m"
    }
#line 337 "declarative_debugger.m"
    return mdb__declarative_debugger__Atom_2;
#line 337 "declarative_debugger.m"
  }
#line 206 "declarative_debugger.m"
}

#line 202 "declarative_debugger.m"
MR_Box MR_CALL 
mdb__declarative_debugger__get_decl_question_node_1_f_0(
#line 202 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__TypeInfo_for_T_12,
#line 202 "declarative_debugger.m"
  MR_Word mdb__declarative_debugger__HeadVar__1_1)
#line 202 "declarative_debugger.m"
{
#line 333 "declarative_debugger.m"
  {
#line 333 "declarative_debugger.m"
    MR_bool mdb__declarative_debugger__succeeded;
#line 333 "declarative_debugger.m"
    MR_Box mdb__declarative_debugger__Node_2;

#line 333 "declarative_debugger.m"
#line 333 "declarative_debugger.m"
    switch (MR_tag((MR_Word) mdb__declarative_debugger__HeadVar__1_1)) {
#line 333 "declarative_debugger.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 333 "declarative_debugger.m"
      case (MR_Integer) 0:
#line 333 "declarative_debugger.m"
        {
#line 333 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_4_4;
#line 333 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_5_5;

#line 333 "declarative_debugger.m"
          mdb__declarative_debugger__Node_2 = (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 333 "declarative_debugger.m"
          mdb__declarative_debugger__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 333 "declarative_debugger.m"
          mdb__declarative_debugger__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 333 "declarative_debugger.m"
        }
#line 333 "declarative_debugger.m"
        break;
#line 333 "declarative_debugger.m"
      case (MR_Integer) 1:
#line 334 "declarative_debugger.m"
        {
#line 334 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_7_7;
#line 334 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_8_8;

#line 334 "declarative_debugger.m"
          mdb__declarative_debugger__Node_2 = (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 334 "declarative_debugger.m"
          mdb__declarative_debugger__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 334 "declarative_debugger.m"
          mdb__declarative_debugger__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 334 "declarative_debugger.m"
        }
#line 333 "declarative_debugger.m"
        break;
#line 333 "declarative_debugger.m"
      case (MR_Integer) 2:
#line 335 "declarative_debugger.m"
        {
#line 335 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_10_10;
#line 335 "declarative_debugger.m"
          MR_Word mdb__declarative_debugger__V_11_11;

#line 335 "declarative_debugger.m"
          mdb__declarative_debugger__Node_2 = (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 0));
#line 335 "declarative_debugger.m"
          mdb__declarative_debugger__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 1)));
#line 335 "declarative_debugger.m"
          mdb__declarative_debugger__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_debugger__HeadVar__1_1, (MR_Integer) 2)));
#line 335 "declarative_debugger.m"
        }
#line 333 "declarative_debugger.m"
        break;
#line 333 "declarative_debugger.m"
    }
#line 333 "declarative_debugger.m"
    return mdb__declarative_debugger__Node_2;
#line 333 "declarative_debugger.m"
  }
#line 202 "declarative_debugger.m"
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
