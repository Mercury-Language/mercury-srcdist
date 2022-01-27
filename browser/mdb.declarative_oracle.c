/*
** Automatically generated from `declarative_oracle.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module mdb.declarative_oracle. */
/* :- implementation. */

/*
INIT mercury__mdb__declarative_oracle__init
ENDINIT
*/

#include "mdb.declarative_oracle.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "integer.mih"
#include "io.mih"
#include "library.mih"
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
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
#include "mdb.declarative_execution.mih"
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




#line 91 "mdb.declarative_oracle.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1;

#line 94 "mdb.declarative_oracle.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0;

#line 97 "mdb.declarative_oracle.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0;

#line 100 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_known_exceptions_0_0[3];

#line 103 "mdb.declarative_oracle.c"
static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_known_exceptions_0_0[3];

#line 106 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0;

#line 109 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0[1];

#line 112 "mdb.declarative_oracle.c"
static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0[1];

#line 115 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_known_exceptions_0[1];

#line 118 "mdb.declarative_oracle.c"
static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_known_exceptions_0[1];

#line 121 "mdb.declarative_oracle.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_final_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0;

#line 124 "mdb.declarative_oracle.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0;

#line 127 "mdb.declarative_oracle.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_oracle__type_ctor_info_known_exceptions_0;

#line 130 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_kb_0_0[3];

#line 133 "mdb.declarative_oracle.c"
static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_kb_0_0[3];

#line 136 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0;

#line 139 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0[1];

#line 142 "mdb.declarative_oracle.c"
static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0[1];

#line 145 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_kb_0[1];

#line 148 "mdb.declarative_oracle.c"
static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_kb_0[1];

#line 151 "mdb.declarative_oracle.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1;

#line 154 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_0[1];

#line 157 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_0;

#line 160 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_1[1];

#line 163 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_1;

#line 166 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_2[1];

#line 169 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_2;

#line 172 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_3;

#line 175 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_4[1];

#line 178 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_4;

#line 181 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_5;

#line 184 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_0[2];

#line 187 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1[1];

#line 190 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2[1];

#line 193 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_3[2];

#line 196 "mdb.declarative_oracle.c"
static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_response_1[4];

#line 199 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_response_1[6];

#line 202 "mdb.declarative_oracle.c"
static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_response_1[6];

#line 205 "mdb.declarative_oracle.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0;

#line 208 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_state_0_0[5];

#line 211 "mdb.declarative_oracle.c"
static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_state_0_0[5];

#line 214 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0;

#line 217 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0[1];

#line 220 "mdb.declarative_oracle.c"
static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0[1];

#line 223 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_state_0[1];

#line 226 "mdb.declarative_oracle.c"
static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_state_0[1];

#line 229 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_0[1];

#line 232 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0;

#line 235 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_1[3];

#line 238 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1;

#line 241 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_2[3];

#line 244 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2;

#line 247 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3;

#line 250 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0[1];

#line 253 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1[1];

#line 256 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2[1];

#line 259 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3[1];

#line 262 "mdb.declarative_oracle.c"
static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_trusted_object_0[4];

#line 265 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_trusted_object_0[4];

#line 268 "mdb.declarative_oracle.c"
static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trusted_object_0[4];

#line 271 "mdb.declarative_oracle.c"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0_10001(
#line 274 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 276 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2);

#line 279 "mdb.declarative_oracle.c"
static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0_10001(
#line 282 "mdb.declarative_oracle.c"
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
#line 284 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 286 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3);

#line 289 "mdb.declarative_oracle.c"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0_10001(
#line 292 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 294 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2);

#line 297 "mdb.declarative_oracle.c"
static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0_10001(
#line 300 "mdb.declarative_oracle.c"
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
#line 302 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 304 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3);

#line 307 "mdb.declarative_oracle.c"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_response_1_0_10001(
#line 310 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 312 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 314 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3);

#line 317 "mdb.declarative_oracle.c"
static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_response_1_0_10001(
#line 320 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 322 "mdb.declarative_oracle.c"
  MR_Box * mdb__declarative_oracle__wrapper_arg_2,
#line 324 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3,
#line 326 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_4);

#line 329 "mdb.declarative_oracle.c"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_state_0_0_10001(
#line 332 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 334 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2);

#line 337 "mdb.declarative_oracle.c"
static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_state_0_0_10001(
#line 340 "mdb.declarative_oracle.c"
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
#line 342 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 344 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3);

#line 347 "mdb.declarative_oracle.c"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0_10001(
#line 350 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 352 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2);

#line 355 "mdb.declarative_oracle.c"
static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0_10001(
#line 358 "mdb.declarative_oracle.c"
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
#line 360 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 362 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3);

#line 664 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1(
#line 664 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__closure_arg,
#line 664 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 664 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 664 "declarative_oracle.m"
  MR_Box * mdb__declarative_oracle__wrapper_arg_3);

#line 658 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
#line 658 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 658 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_2,
#line 658 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_3);

#line 616 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1(
#line 616 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__closure_arg,
#line 616 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 616 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 616 "declarative_oracle.m"
  MR_Box * mdb__declarative_oracle__wrapper_arg_3);

#line 598 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(
#line 598 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 598 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 598 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_3,
#line 598 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_4);

#line 564 "declarative_oracle.m"
static MR_bool MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
#line 564 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_1,
#line 564 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Question_2,
#line 564 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__Answer_3);

#line 325 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0(
#line 325 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
#line 325 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 325 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__3_3);

#line 325 "declarative_oracle.m"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0(
#line 325 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 325 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2);

#line 462 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0(
#line 462 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
#line 462 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 462 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__3_3);

#line 462 "declarative_oracle.m"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0(
#line 462 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 462 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2);

#line 481 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0(
#line 481 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
#line 481 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 481 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__3_3);

#line 481 "declarative_oracle.m"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0(
#line 481 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 481 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2);

#line 699 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(
#line 699 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__FinalAtom_5,
#line 699 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__ProcLayout_6,
#line 699 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Map_0_8,
#line 699 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Map_9);

#line 689 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(
#line 689 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Truth_6,
#line 689 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__FinalAtom_7,
#line 689 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__ProcLayout_8,
#line 689 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Map_0_10,
#line 689 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Map_11);

#line 515 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__set_kb_exceptions_map_3_p_0(
#line 515 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__M_4,
#line 515 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_5,
#line 515 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__3_3);

#line 513 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__set_kb_complete_map_3_p_0(
#line 513 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__M_4,
#line 513 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_5,
#line 513 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__3_3);

#line 511 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__set_kb_ground_map_3_p_0(
#line 511 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__M_4,
#line 511 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_5,
#line 511 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__3_3);

#line 504 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__get_kb_exceptions_map_2_p_0(
#line 504 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_3,
#line 504 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__2_2);

#line 502 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__get_kb_complete_map_2_p_0(
#line 502 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_3,
#line 502 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__2_2);

#line 500 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__get_kb_ground_map_2_p_0(
#line 500 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_3,
#line 500 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__2_2);

#line 432 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__format_trust_display_4_p_0(
#line 432 "declarative_oracle.m"
  MR_Integer mdb__declarative_oracle__Id_1,
#line 432 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 432 "declarative_oracle.m"
  MR_String mdb__declarative_oracle__S_3,
#line 432 "declarative_oracle.m"
  MR_String * mdb__declarative_oracle__HeadVar__4_4);

#line 412 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__format_trust_command_3_p_0(
#line 412 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 412 "declarative_oracle.m"
  MR_String mdb__declarative_oracle__S_2,
#line 412 "declarative_oracle.m"
  MR_String * mdb__declarative_oracle__HeadVar__3_3);

#line 212 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__query_oracle_user_6_p_0(
#line 212 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_77,
#line 212 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__UserQuestion_7,
#line 212 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__OracleResponse_8,
#line 212 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29,
#line 212 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_30);

#line 265 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1(
#line 265 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__closure_arg,
#line 265 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 265 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 265 "declarative_oracle.m"
  MR_Box * mdb__declarative_oracle__wrapper_arg_3);

#line 401 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_2(
#line 401 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__closure_arg,
#line 401 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 401 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 401 "declarative_oracle.m"
  MR_Box * mdb__declarative_oracle__wrapper_arg_3);

#line 404 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_1(
#line 404 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__closure_arg,
#line 404 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 404 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 404 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_3,
#line 404 "declarative_oracle.m"
  MR_Box * mdb__declarative_oracle__wrapper_arg_4);


static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_1[6][3];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_2[1][2];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_3[3][7];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_4[1][6];

static /* final */ const MR_Integer mdb__declarative_oracle_scalar_common_5[1][2];

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_6[1][8];




static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_1[6][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_oracle__get_trusted_list_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_4[0])),
    ((MR_Box) (mdb__declarative_oracle__get_trusted_list_3_p_0_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_2[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1)),
    ((MR_Box) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_3[3][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_oracle_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_4[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Integer mdb__declarative_oracle_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mdb__declarative_oracle_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0)),
    ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0)),
    ((MR_Box) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0)),
    ((MR_Box) (&mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0))
  },
};



#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"



#line 771 "mdb.declarative_oracle.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_question_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 779 "mdb.declarative_oracle.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_oracle__tree234__pti_tree234_2__plain_mdb__declarative_debugger__type_ctor_info_final_decl_atom_0__plain_mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
    (MR_PseudoTypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
  }
};

#line 788 "mdb.declarative_oracle.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_TypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0
  }
};

#line 796 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_known_exceptions_0_0[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__set_ordlist__ti_set_ordlist_1mdb__term_rep__type_ctor_info_term_rep_0
};

#line 803 "mdb.declarative_oracle.c"
static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_known_exceptions_0_0[3] = {
  (MR_String) "possible",
  (MR_String) "impossible",
  (MR_String) "inadmissible"
};

#line 810 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0 = {
  (MR_String) "known_excp",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_known_exceptions_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_known_exceptions_0_0,
  NULL,
  NULL
};

#line 825 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0
};

#line 830 "mdb.declarative_oracle.c"
static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_known_exceptions_0_0
  }
};

#line 839 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_known_exceptions_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_known_exceptions_0_0
};

#line 844 "mdb.declarative_oracle.c"
static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_known_exceptions_0[1] = {
  (MR_Integer) 0
};

#line 849 "mdb.declarative_oracle.c"
const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____known_exceptions_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____known_exceptions_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "known_exceptions",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_known_exceptions_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_known_exceptions_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_known_exceptions_0
};

#line 866 "mdb.declarative_oracle.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_final_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0,
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
  }
};

#line 875 "mdb.declarative_oracle.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0
  }
};

#line 884 "mdb.declarative_oracle.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_oracle__type_ctor_info_known_exceptions_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0,
    (MR_TypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0
  }
};

#line 893 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_kb_0_0[3] = {
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_final_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_debugger__type_ctor_info_decl_truth_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__tree234__ti_tree234_2mdb__declarative_debugger__type_ctor_info_init_decl_atom_0mdb__declarative_oracle__type_ctor_info_known_exceptions_0
};

#line 900 "mdb.declarative_oracle.c"
static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_kb_0_0[3] = {
  (MR_String) "kb_ground_map",
  (MR_String) "kb_complete_map",
  (MR_String) "kb_exceptions_map"
};

#line 907 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0 = {
  (MR_String) "oracle_kb",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_kb_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_kb_0_0,
  NULL,
  NULL
};

#line 922 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0
};

#line 927 "mdb.declarative_oracle.c"
static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_kb_0_0
  }
};

#line 936 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_kb_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_kb_0_0
};

#line 941 "mdb.declarative_oracle.c"
static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_kb_0[1] = {
  (MR_Integer) 0
};

#line 946 "mdb.declarative_oracle.c"
const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_kb_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_kb_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_kb",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_kb_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_kb_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_kb_0
};

#line 963 "mdb.declarative_oracle.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1 = {
  &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_answer_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 971 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_0[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__mdb__declarative_debugger__pti_decl_answer_1__pseudo_1
};

#line 976 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_0 = {
  (MR_String) "oracle_response_answer",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_0,
  NULL,
  NULL,
  NULL
};

#line 991 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_output_stream_0
};

#line 996 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_1 = {
  (MR_String) "oracle_response_show_info",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_1,
  NULL,
  NULL,
  NULL
};

#line 1011 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_2[1] = {
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_search_mode_0
};

#line 1016 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_2 = {
  (MR_String) "oracle_response_change_search",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_2,
  NULL,
  NULL,
  NULL
};

#line 1031 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_3 = {
  (MR_String) "oracle_response_undo",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1046 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_4[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 1051 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_4 = {
  (MR_String) "oracle_response_exit_diagnosis",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_response_1_4,
  NULL,
  NULL,
  NULL
};

#line 1066 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_5 = {
  (MR_String) "oracle_response_abort_diagnosis",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1081 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_0[2] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_3,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_5
};

#line 1087 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_0
};

#line 1092 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_1
};

#line 1097 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_3[2] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_2,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_4
};

#line 1103 "mdb.declarative_oracle.c"
static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_response_1[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_2
  },
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_response_1_3
  }
};

#line 1127 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_response_1[6] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_5,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_0,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_2,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_4,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_1,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_response_1_3
};

#line 1137 "mdb.declarative_oracle.c"
static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_response_1[6] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 0
};

#line 1147 "mdb.declarative_oracle.c"
const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_response_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_response_1_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_response_1_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_response",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_response_1 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_response_1 },
  (MR_Integer) 6,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_response_1
};

#line 1164 "mdb.declarative_oracle.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_oracle__bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0,
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1173 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_state_0_0[5] = {
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0,
  (MR_PseudoTypeInfo) &mdb__declarative_user__mdb__declarative_user__type_ctor_info_user_state_0,
  (MR_PseudoTypeInfo) &mdb__declarative_oracle__bimap__ti_bimap_2mdb__declarative_oracle__type_ctor_info_trusted_object_0builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0
};

#line 1182 "mdb.declarative_oracle.c"
static const MR_ConstString mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_state_0_0[5] = {
  (MR_String) "kb_current",
  (MR_String) "kb_revised",
  (MR_String) "user_state",
  (MR_String) "trusted",
  (MR_String) "trusted_id_counter"
};

#line 1191 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0 = {
  (MR_String) "oracle",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_oracle_state_0_0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_names_oracle_state_0_0,
  NULL,
  NULL
};

#line 1206 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0
};

#line 1211 "mdb.declarative_oracle.c"
static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_oracle_state_0_0
  }
};

#line 1220 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_state_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_oracle_state_0_0
};

#line 1225 "mdb.declarative_oracle.c"
static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_state_0[1] = {
  (MR_Integer) 0
};

#line 1230 "mdb.declarative_oracle.c"
const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____oracle_state_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____oracle_state_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "oracle_state",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_oracle_state_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_oracle_state_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_oracle_state_0
};

#line 1247 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_0[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0
};

#line 1252 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0 = {
  (MR_String) "trusted_module",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_0,
  NULL,
  NULL,
  NULL
};

#line 1267 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_1[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1274 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1 = {
  (MR_String) "trusted_predicate",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_1,
  NULL,
  NULL,
  NULL
};

#line 1289 "mdb.declarative_oracle.c"
static const MR_PseudoTypeInfo mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_2[3] = {
  (MR_PseudoTypeInfo) &mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1296 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2 = {
  (MR_String) "trusted_function",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_oracle__mdb__declarative_oracle__field_types_trusted_object_0_2,
  NULL,
  NULL,
  NULL
};

#line 1311 "mdb.declarative_oracle.c"
static const MR_DuFunctorDesc mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3 = {
  (MR_String) "trusted_standard_library",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1326 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3
};

#line 1331 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0
};

#line 1336 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1
};

#line 1341 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3[1] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2
};

#line 1346 "mdb.declarative_oracle.c"
static const MR_DuPtagLayout mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_trusted_object_0[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_oracle__mdb__declarative_oracle__du_stag_ordered_trusted_object_0_3
  }
};

#line 1370 "mdb.declarative_oracle.c"
static const MR_DuFunctorDescPtr mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_trusted_object_0[4] = {
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_2,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_0,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_1,
  &mdb__declarative_oracle__mdb__declarative_oracle__du_functor_desc_trusted_object_0_3
};

#line 1378 "mdb.declarative_oracle.c"
static const MR_Integer mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trusted_object_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3
};

#line 1386 "mdb.declarative_oracle.c"
const MR_TypeCtorInfo_Struct mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_oracle____Unify____trusted_object_0_0_10001)),
  ((MR_Box) (mdb__declarative_oracle____Compare____trusted_object_0_0_10001)),
  (MR_String) "mdb.declarative_oracle",
  (MR_String) "trusted_object",
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_name_ordered_trusted_object_0 },
  {     mdb__declarative_oracle__mdb__declarative_oracle__du_ptag_ordered_trusted_object_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_oracle__mdb__declarative_oracle__functor_number_map_trusted_object_0
};

#line 1403 "mdb.declarative_oracle.c"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0_10001(
#line 1406 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 1408 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2)
#line 1410 "mdb.declarative_oracle.c"
{
#line 1412 "mdb.declarative_oracle.c"
  {
#line 1414 "mdb.declarative_oracle.c"
    MR_bool mdb__declarative_oracle__succeeded;

#line 1417 "mdb.declarative_oracle.c"
    {
#line 1419 "mdb.declarative_oracle.c"
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle____Unify____known_exceptions_0_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2));
    }
#line 1422 "mdb.declarative_oracle.c"
    return mdb__declarative_oracle__succeeded;
#line 1424 "mdb.declarative_oracle.c"
  }
#line 1426 "mdb.declarative_oracle.c"
}

#line 1429 "mdb.declarative_oracle.c"
static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0_10001(
#line 1432 "mdb.declarative_oracle.c"
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
#line 1434 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 1436 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3)
#line 1438 "mdb.declarative_oracle.c"
{
#line 1440 "mdb.declarative_oracle.c"
  {
#line 1442 "mdb.declarative_oracle.c"
    MR_Word mdb__declarative_oracle__conv0_HeadVar__1_1;

#line 1445 "mdb.declarative_oracle.c"
    {
#line 1447 "mdb.declarative_oracle.c"
      mdb__declarative_oracle____Compare____known_exceptions_0_0(&mdb__declarative_oracle__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_Word) mdb__declarative_oracle__wrapper_arg_3));
    }
#line 1450 "mdb.declarative_oracle.c"
    *mdb__declarative_oracle__wrapper_arg_1 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__1_1));
#line 1452 "mdb.declarative_oracle.c"
  }
#line 1454 "mdb.declarative_oracle.c"
}

#line 1457 "mdb.declarative_oracle.c"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0_10001(
#line 1460 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 1462 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2)
#line 1464 "mdb.declarative_oracle.c"
{
#line 1466 "mdb.declarative_oracle.c"
  {
#line 1468 "mdb.declarative_oracle.c"
    MR_bool mdb__declarative_oracle__succeeded;

#line 1471 "mdb.declarative_oracle.c"
    {
#line 1473 "mdb.declarative_oracle.c"
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle____Unify____oracle_kb_0_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2));
    }
#line 1476 "mdb.declarative_oracle.c"
    return mdb__declarative_oracle__succeeded;
#line 1478 "mdb.declarative_oracle.c"
  }
#line 1480 "mdb.declarative_oracle.c"
}

#line 1483 "mdb.declarative_oracle.c"
static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0_10001(
#line 1486 "mdb.declarative_oracle.c"
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
#line 1488 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 1490 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3)
#line 1492 "mdb.declarative_oracle.c"
{
#line 1494 "mdb.declarative_oracle.c"
  {
#line 1496 "mdb.declarative_oracle.c"
    MR_Word mdb__declarative_oracle__conv0_HeadVar__1_1;

#line 1499 "mdb.declarative_oracle.c"
    {
#line 1501 "mdb.declarative_oracle.c"
      mdb__declarative_oracle____Compare____oracle_kb_0_0(&mdb__declarative_oracle__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_Word) mdb__declarative_oracle__wrapper_arg_3));
    }
#line 1504 "mdb.declarative_oracle.c"
    *mdb__declarative_oracle__wrapper_arg_1 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__1_1));
#line 1506 "mdb.declarative_oracle.c"
  }
#line 1508 "mdb.declarative_oracle.c"
}

#line 1511 "mdb.declarative_oracle.c"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_response_1_0_10001(
#line 1514 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 1516 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 1518 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3)
#line 1520 "mdb.declarative_oracle.c"
{
#line 1522 "mdb.declarative_oracle.c"
  {
#line 1524 "mdb.declarative_oracle.c"
    MR_bool mdb__declarative_oracle__succeeded;

#line 1527 "mdb.declarative_oracle.c"
    {
#line 1529 "mdb.declarative_oracle.c"
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle____Unify____oracle_response_1_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_Word) mdb__declarative_oracle__wrapper_arg_3));
    }
#line 1532 "mdb.declarative_oracle.c"
    return mdb__declarative_oracle__succeeded;
#line 1534 "mdb.declarative_oracle.c"
  }
#line 1536 "mdb.declarative_oracle.c"
}

#line 1539 "mdb.declarative_oracle.c"
static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_response_1_0_10001(
#line 1542 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 1544 "mdb.declarative_oracle.c"
  MR_Box * mdb__declarative_oracle__wrapper_arg_2,
#line 1546 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3,
#line 1548 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_4)
#line 1550 "mdb.declarative_oracle.c"
{
#line 1552 "mdb.declarative_oracle.c"
  {
#line 1554 "mdb.declarative_oracle.c"
    MR_Word mdb__declarative_oracle__conv0_HeadVar__1_1;

#line 1557 "mdb.declarative_oracle.c"
    {
#line 1559 "mdb.declarative_oracle.c"
      mdb__declarative_oracle____Compare____oracle_response_1_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), &mdb__declarative_oracle__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_oracle__wrapper_arg_3), ((MR_Word) mdb__declarative_oracle__wrapper_arg_4));
    }
#line 1562 "mdb.declarative_oracle.c"
    *mdb__declarative_oracle__wrapper_arg_2 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__1_1));
#line 1564 "mdb.declarative_oracle.c"
  }
#line 1566 "mdb.declarative_oracle.c"
}

#line 1569 "mdb.declarative_oracle.c"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_state_0_0_10001(
#line 1572 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 1574 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2)
#line 1576 "mdb.declarative_oracle.c"
{
#line 1578 "mdb.declarative_oracle.c"
  {
#line 1580 "mdb.declarative_oracle.c"
    MR_bool mdb__declarative_oracle__succeeded;

#line 1583 "mdb.declarative_oracle.c"
    {
#line 1585 "mdb.declarative_oracle.c"
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle____Unify____oracle_state_0_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2));
    }
#line 1588 "mdb.declarative_oracle.c"
    return mdb__declarative_oracle__succeeded;
#line 1590 "mdb.declarative_oracle.c"
  }
#line 1592 "mdb.declarative_oracle.c"
}

#line 1595 "mdb.declarative_oracle.c"
static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_state_0_0_10001(
#line 1598 "mdb.declarative_oracle.c"
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
#line 1600 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 1602 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3)
#line 1604 "mdb.declarative_oracle.c"
{
#line 1606 "mdb.declarative_oracle.c"
  {
#line 1608 "mdb.declarative_oracle.c"
    MR_Word mdb__declarative_oracle__conv0_HeadVar__1_1;

#line 1611 "mdb.declarative_oracle.c"
    {
#line 1613 "mdb.declarative_oracle.c"
      mdb__declarative_oracle____Compare____oracle_state_0_0(&mdb__declarative_oracle__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_Word) mdb__declarative_oracle__wrapper_arg_3));
    }
#line 1616 "mdb.declarative_oracle.c"
    *mdb__declarative_oracle__wrapper_arg_1 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__1_1));
#line 1618 "mdb.declarative_oracle.c"
  }
#line 1620 "mdb.declarative_oracle.c"
}

#line 1623 "mdb.declarative_oracle.c"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0_10001(
#line 1626 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 1628 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2)
#line 1630 "mdb.declarative_oracle.c"
{
#line 1632 "mdb.declarative_oracle.c"
  {
#line 1634 "mdb.declarative_oracle.c"
    MR_bool mdb__declarative_oracle__succeeded;

#line 1637 "mdb.declarative_oracle.c"
    {
#line 1639 "mdb.declarative_oracle.c"
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle____Unify____trusted_object_0_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2));
    }
#line 1642 "mdb.declarative_oracle.c"
    return mdb__declarative_oracle__succeeded;
#line 1644 "mdb.declarative_oracle.c"
  }
#line 1646 "mdb.declarative_oracle.c"
}

#line 1649 "mdb.declarative_oracle.c"
static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0_10001(
#line 1652 "mdb.declarative_oracle.c"
  MR_Box * mdb__declarative_oracle__wrapper_arg_1,
#line 1654 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 1656 "mdb.declarative_oracle.c"
  MR_Box mdb__declarative_oracle__wrapper_arg_3)
#line 1658 "mdb.declarative_oracle.c"
{
#line 1660 "mdb.declarative_oracle.c"
  {
#line 1662 "mdb.declarative_oracle.c"
    MR_Word mdb__declarative_oracle__conv0_HeadVar__1_1;

#line 1665 "mdb.declarative_oracle.c"
    {
#line 1667 "mdb.declarative_oracle.c"
      mdb__declarative_oracle____Compare____trusted_object_0_0(&mdb__declarative_oracle__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_Word) mdb__declarative_oracle__wrapper_arg_3));
    }
#line 1670 "mdb.declarative_oracle.c"
    *mdb__declarative_oracle__wrapper_arg_1 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__1_1));
#line 1672 "mdb.declarative_oracle.c"
  }
#line 1674 "mdb.declarative_oracle.c"
}

#line 664 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1(
#line 664 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__closure_arg,
#line 664 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 664 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 664 "declarative_oracle.m"
  MR_Box * mdb__declarative_oracle__wrapper_arg_3)
#line 664 "declarative_oracle.m"
{
#line 664 "declarative_oracle.m"
  {
#line 664 "declarative_oracle.m"
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
#line 664 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_9;

#line 664 "declarative_oracle.m"
    {
#line 664 "declarative_oracle.m"
      mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__closure, (MR_Integer) 3))), ((MR_Box) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), &mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_9);
    }
#line 664 "declarative_oracle.m"
    *mdb__declarative_oracle__wrapper_arg_3 = ((MR_Box) (mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_9));
#line 664 "declarative_oracle.m"
  }
#line 664 "declarative_oracle.m"
}

#line 658 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
#line 658 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 658 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_2,
#line 658 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_3)
#line 658 "declarative_oracle.m"
{
#line 661 "declarative_oracle.m"
  {
#line 661 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 661 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 2)));
#line 661 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 1)));
#line 661 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 0)));

#line 661 "declarative_oracle.m"
#line 661 "declarative_oracle.m"
    switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) {
#line 661 "declarative_oracle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 661 "declarative_oracle.m"
      case (MR_Integer) 0:
#line 661 "declarative_oracle.m"
        {
#line 661 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Atom_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 661 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Map_9;
#line 661 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_12_12;
#line 661 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_13_13;
#line 661 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__V_14_14;
#line 661 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_15_15;
#line 661 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
#line 661 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 665 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_45_45;
#line 665 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_46_46;
#line 664 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__conv2_Map_9;
#line 666 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_48_48;
#line 666 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_49_49;
#line 666 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_47_47;

#line 664 "declarative_oracle.m"
          {
#line 664 "declarative_oracle.m"
            mdb__declarative_oracle__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 664 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_3[2]));
#line 664 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 1) = ((MR_Box) (mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0_1));
#line 664 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 664 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 3) = ((MR_Box) (mdb__declarative_oracle__Atom_6));
#line 664 "declarative_oracle.m"
          }
#line 665 "declarative_oracle.m"
          mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_6, (MR_Integer) 0)));
#line 665 "declarative_oracle.m"
          mdb__declarative_oracle__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_6, (MR_Integer) 1)));
#line 665 "declarative_oracle.m"
          mdb__declarative_oracle__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_15_15, (MR_Integer) 0)));
#line 665 "declarative_oracle.m"
          mdb__declarative_oracle__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_15_15, (MR_Integer) 1)));
#line 665 "declarative_oracle.m"
          {
#line 665 "declarative_oracle.m"
            mdb__declarative_oracle__V_13_13 = mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(mdb__declarative_oracle__V_14_14);
          }
#line 664 "declarative_oracle.m"
          {
#line 664 "declarative_oracle.m"
            mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[0], mdb__declarative_oracle__V_12_12, mdb__declarative_oracle__V_13_13, ((MR_Box) (mdb__declarative_oracle__V_75_75)), &mdb__declarative_oracle__conv2_Map_9);
          }
#line 664 "declarative_oracle.m"
          mdb__declarative_oracle__Map_9 = ((MR_Word) mdb__declarative_oracle__conv2_Map_9);
#line 666 "declarative_oracle.m"
          mdb__declarative_oracle__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 0)));
#line 666 "declarative_oracle.m"
          mdb__declarative_oracle__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 1)));
#line 666 "declarative_oracle.m"
          mdb__declarative_oracle__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 2)));
#line 666 "declarative_oracle.m"
          {
#line 666 "declarative_oracle.m"
            MR_Word base;
#line 666 "declarative_oracle.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 666 "declarative_oracle.m"
            *mdb__declarative_oracle__STATE_VARIABLE_KB_3 = base;
#line 666 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Map_9));
#line 666 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_48_48));
#line 666 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_49_49));
#line 666 "declarative_oracle.m"
          }
#line 661 "declarative_oracle.m"
        }
#line 661 "declarative_oracle.m"
        break;
#line 661 "declarative_oracle.m"
      case (MR_Integer) 1:
#line 668 "declarative_oracle.m"
        {
#line 668 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__InitAtom_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 668 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__CompleteMap_22;
#line 668 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__V_17_17 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
#line 668 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 671 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_52_52;
#line 671 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_54_54;
#line 671 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_53_53;

#line 670 "declarative_oracle.m"
          {
#line 670 "declarative_oracle.m"
            mercury__map__delete_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__InitAtom_18)), mdb__declarative_oracle__V_74_74, &mdb__declarative_oracle__CompleteMap_22);
          }
#line 671 "declarative_oracle.m"
          mdb__declarative_oracle__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 0)));
#line 671 "declarative_oracle.m"
          mdb__declarative_oracle__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 1)));
#line 671 "declarative_oracle.m"
          mdb__declarative_oracle__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 2)));
#line 671 "declarative_oracle.m"
          {
#line 671 "declarative_oracle.m"
            MR_Word base;
#line 671 "declarative_oracle.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 671 "declarative_oracle.m"
            *mdb__declarative_oracle__STATE_VARIABLE_KB_3 = base;
#line 671 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_52_52));
#line 671 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__CompleteMap_22));
#line 671 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_54_54));
#line 671 "declarative_oracle.m"
          }
#line 668 "declarative_oracle.m"
        }
#line 661 "declarative_oracle.m"
        break;
#line 661 "declarative_oracle.m"
      case (MR_Integer) 2:
#line 673 "declarative_oracle.m"
        {
#line 673 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__InitAtom_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 673 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Exception_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 673 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__ExceptionsMap_39;
#line 673 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__V_26_26 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
#line 684 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Possible0_32;
#line 684 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Impossible0_33;
#line 684 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Inadmissible0_34;
#line 676 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__KnownExceptions0_31;
#line 676 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__conv0_KnownExceptions0_31;
#line 687 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_57_57;
#line 687 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_58_58;
#line 687 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_59_59;

#line 676 "declarative_oracle.m"
          {
#line 676 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__V_73_73, ((MR_Box) (mdb__declarative_oracle__InitAtom_27)), &mdb__declarative_oracle__conv0_KnownExceptions0_31);
          }
#line 676 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 676 "declarative_oracle.m"
            {
#line 676 "declarative_oracle.m"
              mdb__declarative_oracle__KnownExceptions0_31 = ((MR_Word) mdb__declarative_oracle__conv0_KnownExceptions0_31);
#line 676 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 676 "declarative_oracle.m"
            }
#line 676 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 676 "declarative_oracle.m"
            {
#line 677 "declarative_oracle.m"
              mdb__declarative_oracle__Possible0_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_31, (MR_Integer) 0)));
#line 677 "declarative_oracle.m"
              mdb__declarative_oracle__Impossible0_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_31, (MR_Integer) 1)));
#line 677 "declarative_oracle.m"
              mdb__declarative_oracle__Inadmissible0_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_31, (MR_Integer) 2)));
#line 677 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 676 "declarative_oracle.m"
            }
#line 684 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 679 "declarative_oracle.m"
            {
#line 679 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__TypeCtorInfo_70_70 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
#line 679 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Possible_35;
#line 679 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Impossible_36;
#line 679 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Inadmissible_37;
#line 679 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__KnownExceptions_38;

#line 679 "declarative_oracle.m"
              {
#line 679 "declarative_oracle.m"
                mercury__set__delete_3_p_0(mdb__declarative_oracle__TypeCtorInfo_70_70, ((MR_Box) (mdb__declarative_oracle__Exception_28)), mdb__declarative_oracle__Possible0_32, &mdb__declarative_oracle__Possible_35);
              }
#line 680 "declarative_oracle.m"
              {
#line 680 "declarative_oracle.m"
                mercury__set__delete_3_p_0(mdb__declarative_oracle__TypeCtorInfo_70_70, ((MR_Box) (mdb__declarative_oracle__Exception_28)), mdb__declarative_oracle__Impossible0_33, &mdb__declarative_oracle__Impossible_36);
              }
#line 681 "declarative_oracle.m"
              {
#line 681 "declarative_oracle.m"
                mercury__set__delete_3_p_0(mdb__declarative_oracle__TypeCtorInfo_70_70, ((MR_Box) (mdb__declarative_oracle__Exception_28)), mdb__declarative_oracle__Inadmissible0_34, &mdb__declarative_oracle__Inadmissible_37);
              }
#line 682 "declarative_oracle.m"
              {
#line 682 "declarative_oracle.m"
                mdb__declarative_oracle__KnownExceptions_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 682 "declarative_oracle.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_38, 0) = ((MR_Box) (mdb__declarative_oracle__Possible_35));
#line 682 "declarative_oracle.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_38, 1) = ((MR_Box) (mdb__declarative_oracle__Impossible_36));
#line 682 "declarative_oracle.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_38, 2) = ((MR_Box) (mdb__declarative_oracle__Inadmissible_37));
#line 682 "declarative_oracle.m"
              }
#line 683 "declarative_oracle.m"
              {
#line 683 "declarative_oracle.m"
                mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, ((MR_Box) (mdb__declarative_oracle__InitAtom_27)), ((MR_Box) (mdb__declarative_oracle__KnownExceptions_38)), mdb__declarative_oracle__V_73_73, &mdb__declarative_oracle__ExceptionsMap_39);
              }
#line 679 "declarative_oracle.m"
            }
#line 684 "declarative_oracle.m"
          else
#line 685 "declarative_oracle.m"
            mdb__declarative_oracle__ExceptionsMap_39 = mdb__declarative_oracle__V_73_73;
#line 687 "declarative_oracle.m"
          mdb__declarative_oracle__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 0)));
#line 687 "declarative_oracle.m"
          mdb__declarative_oracle__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 1)));
#line 687 "declarative_oracle.m"
          mdb__declarative_oracle__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_KB_0_2, (MR_Integer) 2)));
#line 687 "declarative_oracle.m"
          {
#line 687 "declarative_oracle.m"
            MR_Word base;
#line 687 "declarative_oracle.m"
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 687 "declarative_oracle.m"
            *mdb__declarative_oracle__STATE_VARIABLE_KB_3 = base;
#line 687 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_57_57));
#line 687 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_58_58));
#line 687 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__ExceptionsMap_39));
#line 687 "declarative_oracle.m"
          }
#line 673 "declarative_oracle.m"
        }
#line 661 "declarative_oracle.m"
        break;
#line 661 "declarative_oracle.m"
    }
#line 661 "declarative_oracle.m"
  }
#line 658 "declarative_oracle.m"
}

#line 616 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1(
#line 616 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__closure_arg,
#line 616 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 616 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 616 "declarative_oracle.m"
  MR_Box * mdb__declarative_oracle__wrapper_arg_3)
#line 616 "declarative_oracle.m"
{
#line 616 "declarative_oracle.m"
  {
#line 616 "declarative_oracle.m"
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
#line 616 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_11;

#line 616 "declarative_oracle.m"
    {
#line 616 "declarative_oracle.m"
      mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__closure, (MR_Integer) 4))), ((MR_Box) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), &mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_11);
    }
#line 616 "declarative_oracle.m"
    *mdb__declarative_oracle__wrapper_arg_3 = ((MR_Box) (mdb__declarative_oracle__conv1_STATE_VARIABLE_Map_11));
#line 616 "declarative_oracle.m"
  }
#line 616 "declarative_oracle.m"
}

#line 598 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(
#line 598 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 598 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 598 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_KB_0_3,
#line 598 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_KB_4)
#line 598 "declarative_oracle.m"
{
#line 601 "declarative_oracle.m"
  {
#line 601 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;

#line 601 "declarative_oracle.m"
#line 601 "declarative_oracle.m"
    switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) {
#line 601 "declarative_oracle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 601 "declarative_oracle.m"
      case (MR_Integer) 0:
#line 601 "declarative_oracle.m"
        {
#line 601 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 626 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__V_107_107 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0));

#line 601 "declarative_oracle.m"
#line 601 "declarative_oracle.m"
          switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) {
#line 601 "declarative_oracle.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 601 "declarative_oracle.m"
            case (MR_Integer) 0:
#line 604 "declarative_oracle.m"
              {
#line 604 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__Atom_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 604 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__Map0_30;
#line 604 "declarative_oracle.m"
                MR_Box mdb__declarative_oracle__ProcLayout_31;
#line 604 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__Map_32;
#line 604 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_35_35;
#line 604 "declarative_oracle.m"
                MR_Box mdb__declarative_oracle__V_24_24 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
#line 604 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 606 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_73_73;
#line 606 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_74_74;

#line 605 "declarative_oracle.m"
                {
#line 605 "declarative_oracle.m"
                  mdb__declarative_oracle__get_kb_ground_map_2_p_0(mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, &mdb__declarative_oracle__Map0_30);
                }
#line 606 "declarative_oracle.m"
                mdb__declarative_oracle__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_26, (MR_Integer) 0)));
#line 606 "declarative_oracle.m"
                mdb__declarative_oracle__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_26, (MR_Integer) 1)));
#line 606 "declarative_oracle.m"
                mdb__declarative_oracle__ProcLayout_31 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_35_35, (MR_Integer) 0)));
#line 606 "declarative_oracle.m"
                mdb__declarative_oracle__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_35_35, (MR_Integer) 1)));
#line 618 "declarative_oracle.m"
#line 618 "declarative_oracle.m"
                switch (mdb__declarative_oracle__V_106_106) {
#line 618 "declarative_oracle.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 618 "declarative_oracle.m"
                  case (MR_Integer) 0:
#line 615 "declarative_oracle.m"
                    {
#line 615 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_36_36;
#line 615 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_37_37;
#line 616 "declarative_oracle.m"
                      MR_Box mdb__declarative_oracle__conv2_Map_32;

#line 616 "declarative_oracle.m"
                      {
#line 616 "declarative_oracle.m"
                        mdb__declarative_oracle__V_36_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 616 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_36_36, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_6[0]));
#line 616 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_36_36, 1) = ((MR_Box) (mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0_1));
#line 616 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_36_36, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 616 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_36_36, 3) = ((MR_Box) (mdb__declarative_oracle__V_106_106));
#line 616 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_36_36, 4) = ((MR_Box) (mdb__declarative_oracle__Atom_26));
#line 616 "declarative_oracle.m"
                      }
#line 617 "declarative_oracle.m"
                      {
#line 617 "declarative_oracle.m"
                        mdb__declarative_oracle__V_37_37 = mdbcomp__rtti_access__get_all_modes_for_layout_1_f_0(mdb__declarative_oracle__ProcLayout_31);
                      }
#line 616 "declarative_oracle.m"
                      {
#line 616 "declarative_oracle.m"
                        mercury__list__foldl_4_p_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[0], mdb__declarative_oracle__V_36_36, mdb__declarative_oracle__V_37_37, ((MR_Box) (mdb__declarative_oracle__Map0_30)), &mdb__declarative_oracle__conv2_Map_32);
                      }
#line 616 "declarative_oracle.m"
                      mdb__declarative_oracle__Map_32 = ((MR_Word) mdb__declarative_oracle__conv2_Map_32);
#line 615 "declarative_oracle.m"
                    }
#line 618 "declarative_oracle.m"
                    break;
#line 618 "declarative_oracle.m"
                  case (MR_Integer) 1:
#line 618 "declarative_oracle.m"
                  case (MR_Integer) 2:
#line 621 "declarative_oracle.m"
                    {
#line 621 "declarative_oracle.m"
                      mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(mdb__declarative_oracle__V_106_106, mdb__declarative_oracle__Atom_26, mdb__declarative_oracle__ProcLayout_31, mdb__declarative_oracle__Map0_30, &mdb__declarative_oracle__Map_32);
                    }
#line 618 "declarative_oracle.m"
                    break;
#line 618 "declarative_oracle.m"
                }
#line 624 "declarative_oracle.m"
                {
#line 624 "declarative_oracle.m"
                  mdb__declarative_oracle__set_kb_ground_map_3_p_0(mdb__declarative_oracle__Map_32, mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, mdb__declarative_oracle__STATE_VARIABLE_KB_4);
#line 624 "declarative_oracle.m"
                  return;
                }
#line 604 "declarative_oracle.m"
              }
#line 601 "declarative_oracle.m"
              break;
#line 601 "declarative_oracle.m"
            case (MR_Integer) 1:
#line 626 "declarative_oracle.m"
              {
#line 626 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__Call_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 626 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__Map0_45;
#line 626 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__Map_46;
#line 626 "declarative_oracle.m"
                MR_Box mdb__declarative_oracle__V_39_39 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
#line 626 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));

#line 627 "declarative_oracle.m"
                {
#line 627 "declarative_oracle.m"
                  mdb__declarative_oracle__get_kb_complete_map_2_p_0(mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, &mdb__declarative_oracle__Map0_45);
                }
#line 628 "declarative_oracle.m"
                {
#line 628 "declarative_oracle.m"
                  mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__Call_40)), ((MR_Box) (mdb__declarative_oracle__V_106_106)), mdb__declarative_oracle__Map0_45, &mdb__declarative_oracle__Map_46);
                }
#line 629 "declarative_oracle.m"
                {
#line 629 "declarative_oracle.m"
                  mdb__declarative_oracle__set_kb_complete_map_3_p_0(mdb__declarative_oracle__Map_46, mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, mdb__declarative_oracle__STATE_VARIABLE_KB_4);
#line 629 "declarative_oracle.m"
                  return;
                }
#line 626 "declarative_oracle.m"
              }
#line 601 "declarative_oracle.m"
              break;
#line 601 "declarative_oracle.m"
            case (MR_Integer) 2:
#line 632 "declarative_oracle.m"
              {
#line 632 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__Call_51 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 632 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__Exception_52 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 632 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__Map0_56;
#line 632 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__KnownExceptions0_58;
#line 632 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__KnownExceptions_63;
#line 632 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__Map_66;
#line 632 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_108_108;
#line 632 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_109_109;
#line 632 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_110_110;
#line 631 "declarative_oracle.m"
                MR_Box mdb__declarative_oracle__V_50_50 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0));
#line 636 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__Found_57;
#line 634 "declarative_oracle.m"
                MR_Box mdb__declarative_oracle__conv0_Found_57;

#line 633 "declarative_oracle.m"
                {
#line 633 "declarative_oracle.m"
                  mdb__declarative_oracle__get_kb_exceptions_map_2_p_0(mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, &mdb__declarative_oracle__Map0_56);
                }
#line 634 "declarative_oracle.m"
                {
#line 634 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__Map0_56, ((MR_Box) (mdb__declarative_oracle__Call_51)), &mdb__declarative_oracle__conv0_Found_57);
                }
#line 634 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 634 "declarative_oracle.m"
                  {
#line 634 "declarative_oracle.m"
                    mdb__declarative_oracle__Found_57 = ((MR_Word) mdb__declarative_oracle__conv0_Found_57);
#line 634 "declarative_oracle.m"
                    mdb__declarative_oracle__succeeded = MR_TRUE;
#line 634 "declarative_oracle.m"
                  }
#line 636 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 635 "declarative_oracle.m"
                  mdb__declarative_oracle__KnownExceptions0_58 = mdb__declarative_oracle__Found_57;
#line 636 "declarative_oracle.m"
                else
#line 637 "declarative_oracle.m"
                  {
#line 637 "declarative_oracle.m"
                    MR_Word mdb__declarative_oracle__TypeCtorInfo_100_100 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
#line 637 "declarative_oracle.m"
                    MR_Word mdb__declarative_oracle__Possible0_59;
#line 637 "declarative_oracle.m"
                    MR_Word mdb__declarative_oracle__Impossible0_60;
#line 637 "declarative_oracle.m"
                    MR_Word mdb__declarative_oracle__Inadmissible0_61;

#line 637 "declarative_oracle.m"
                    {
#line 637 "declarative_oracle.m"
                      mercury__set__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_100_100, &mdb__declarative_oracle__Possible0_59);
                    }
#line 638 "declarative_oracle.m"
                    {
#line 638 "declarative_oracle.m"
                      mercury__set__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_100_100, &mdb__declarative_oracle__Impossible0_60);
                    }
#line 639 "declarative_oracle.m"
                    {
#line 639 "declarative_oracle.m"
                      mercury__set__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_100_100, &mdb__declarative_oracle__Inadmissible0_61);
                    }
#line 640 "declarative_oracle.m"
                    {
#line 640 "declarative_oracle.m"
                      mdb__declarative_oracle__KnownExceptions0_58 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 640 "declarative_oracle.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, 0) = ((MR_Box) (mdb__declarative_oracle__Possible0_59));
#line 640 "declarative_oracle.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, 1) = ((MR_Box) (mdb__declarative_oracle__Impossible0_60));
#line 640 "declarative_oracle.m"
                      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, 2) = ((MR_Box) (mdb__declarative_oracle__Inadmissible0_61));
#line 640 "declarative_oracle.m"
                    }
#line 637 "declarative_oracle.m"
                  }
#line 644 "declarative_oracle.m"
                mdb__declarative_oracle__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 0)));
#line 644 "declarative_oracle.m"
                mdb__declarative_oracle__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 1)));
#line 644 "declarative_oracle.m"
                mdb__declarative_oracle__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 2)));
#line 646 "declarative_oracle.m"
#line 646 "declarative_oracle.m"
                switch (mdb__declarative_oracle__V_106_106) {
#line 646 "declarative_oracle.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 646 "declarative_oracle.m"
                  case (MR_Integer) 0:
#line 643 "declarative_oracle.m"
                    {
#line 643 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__Possible_62;
#line 645 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_78_78;
#line 645 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_79_79;
#line 645 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_77_77;

#line 644 "declarative_oracle.m"
                      {
#line 644 "declarative_oracle.m"
                        mercury__set__insert_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_52)), mdb__declarative_oracle__V_110_110, &mdb__declarative_oracle__Possible_62);
                      }
#line 645 "declarative_oracle.m"
                      mdb__declarative_oracle__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 0)));
#line 645 "declarative_oracle.m"
                      mdb__declarative_oracle__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 1)));
#line 645 "declarative_oracle.m"
                      mdb__declarative_oracle__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 2)));
#line 645 "declarative_oracle.m"
                      {
#line 645 "declarative_oracle.m"
                        mdb__declarative_oracle__KnownExceptions_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 645 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 0) = ((MR_Box) (mdb__declarative_oracle__Possible_62));
#line 645 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 1) = ((MR_Box) (mdb__declarative_oracle__V_78_78));
#line 645 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 2) = ((MR_Box) (mdb__declarative_oracle__V_79_79));
#line 645 "declarative_oracle.m"
                      }
#line 643 "declarative_oracle.m"
                    }
#line 646 "declarative_oracle.m"
                    break;
#line 646 "declarative_oracle.m"
                  case (MR_Integer) 1:
#line 647 "declarative_oracle.m"
                    {
#line 647 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__Impossible_64;
#line 649 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_82_82;
#line 649 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_84_84;
#line 649 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_83_83;

#line 648 "declarative_oracle.m"
                      {
#line 648 "declarative_oracle.m"
                        mercury__set__insert_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_52)), mdb__declarative_oracle__V_109_109, &mdb__declarative_oracle__Impossible_64);
                      }
#line 649 "declarative_oracle.m"
                      mdb__declarative_oracle__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 0)));
#line 649 "declarative_oracle.m"
                      mdb__declarative_oracle__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 1)));
#line 649 "declarative_oracle.m"
                      mdb__declarative_oracle__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 2)));
#line 649 "declarative_oracle.m"
                      {
#line 649 "declarative_oracle.m"
                        mdb__declarative_oracle__KnownExceptions_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 649 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 0) = ((MR_Box) (mdb__declarative_oracle__V_82_82));
#line 649 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 1) = ((MR_Box) (mdb__declarative_oracle__Impossible_64));
#line 649 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 2) = ((MR_Box) (mdb__declarative_oracle__V_84_84));
#line 649 "declarative_oracle.m"
                      }
#line 647 "declarative_oracle.m"
                    }
#line 646 "declarative_oracle.m"
                    break;
#line 646 "declarative_oracle.m"
                  case (MR_Integer) 2:
#line 651 "declarative_oracle.m"
                    {
#line 651 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__Inadmissible_65;
#line 653 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_87_87;
#line 653 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_88_88;
#line 653 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_89_89;

#line 652 "declarative_oracle.m"
                      {
#line 652 "declarative_oracle.m"
                        mercury__set__insert_3_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_52)), mdb__declarative_oracle__V_108_108, &mdb__declarative_oracle__Inadmissible_65);
                      }
#line 653 "declarative_oracle.m"
                      mdb__declarative_oracle__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 0)));
#line 653 "declarative_oracle.m"
                      mdb__declarative_oracle__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 1)));
#line 653 "declarative_oracle.m"
                      mdb__declarative_oracle__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions0_58, (MR_Integer) 2)));
#line 653 "declarative_oracle.m"
                      {
#line 653 "declarative_oracle.m"
                        mdb__declarative_oracle__KnownExceptions_63 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 653 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 0) = ((MR_Box) (mdb__declarative_oracle__V_87_87));
#line 653 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 1) = ((MR_Box) (mdb__declarative_oracle__V_88_88));
#line 653 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KnownExceptions_63, 2) = ((MR_Box) (mdb__declarative_oracle__Inadmissible_65));
#line 653 "declarative_oracle.m"
                      }
#line 651 "declarative_oracle.m"
                    }
#line 646 "declarative_oracle.m"
                    break;
#line 646 "declarative_oracle.m"
                }
#line 655 "declarative_oracle.m"
                {
#line 655 "declarative_oracle.m"
                  mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, ((MR_Box) (mdb__declarative_oracle__Call_51)), ((MR_Box) (mdb__declarative_oracle__KnownExceptions_63)), mdb__declarative_oracle__Map0_56, &mdb__declarative_oracle__Map_66);
                }
#line 656 "declarative_oracle.m"
                {
#line 656 "declarative_oracle.m"
                  mdb__declarative_oracle__set_kb_exceptions_map_3_p_0(mdb__declarative_oracle__Map_66, mdb__declarative_oracle__STATE_VARIABLE_KB_0_3, mdb__declarative_oracle__STATE_VARIABLE_KB_4);
#line 656 "declarative_oracle.m"
                  return;
                }
#line 632 "declarative_oracle.m"
              }
#line 601 "declarative_oracle.m"
              break;
#line 601 "declarative_oracle.m"
          }
#line 601 "declarative_oracle.m"
        }
#line 601 "declarative_oracle.m"
        break;
#line 601 "declarative_oracle.m"
      case (MR_Integer) 1:
#line 601 "declarative_oracle.m"
        *mdb__declarative_oracle__STATE_VARIABLE_KB_4 = mdb__declarative_oracle__STATE_VARIABLE_KB_0_3;
#line 601 "declarative_oracle.m"
        break;
#line 601 "declarative_oracle.m"
      case (MR_Integer) 2:
#line 602 "declarative_oracle.m"
        *mdb__declarative_oracle__STATE_VARIABLE_KB_4 = mdb__declarative_oracle__STATE_VARIABLE_KB_0_3;
#line 601 "declarative_oracle.m"
        break;
#line 601 "declarative_oracle.m"
      case (MR_Integer) 3:
#line 603 "declarative_oracle.m"
        *mdb__declarative_oracle__STATE_VARIABLE_KB_4 = mdb__declarative_oracle__STATE_VARIABLE_KB_0_3;
#line 601 "declarative_oracle.m"
        break;
#line 601 "declarative_oracle.m"
    }
#line 601 "declarative_oracle.m"
  }
#line 598 "declarative_oracle.m"
}

#line 564 "declarative_oracle.m"
static MR_bool MR_CALL 
mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(
#line 564 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_1,
#line 564 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Question_2,
#line 564 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__Answer_3)
#line 564 "declarative_oracle.m"
{
#line 567 "declarative_oracle.m"
  {
#line 567 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;

#line 567 "declarative_oracle.m"
#line 567 "declarative_oracle.m"
    switch (MR_tag((MR_Word) mdb__declarative_oracle__Question_2)) {
#line 567 "declarative_oracle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 567 "declarative_oracle.m"
      case (MR_Integer) 0:
#line 567 "declarative_oracle.m"
        {
#line 567 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__Node_7 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_2, (MR_Integer) 0));
#line 567 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Atom_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_2, (MR_Integer) 2)));
#line 567 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Map_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 0)));
#line 567 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Truth_11;
#line 568 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_2, (MR_Integer) 1)));
#line 507 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 1)));
#line 507 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 2)));
#line 570 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__conv2_Truth_11;

#line 570 "declarative_oracle.m"
          {
#line 570 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__Map_10, ((MR_Box) (mdb__declarative_oracle__Atom_9)), &mdb__declarative_oracle__conv2_Truth_11);
          }
#line 570 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 570 "declarative_oracle.m"
            {
#line 570 "declarative_oracle.m"
              mdb__declarative_oracle__Truth_11 = ((MR_Word) mdb__declarative_oracle__conv2_Truth_11);
#line 570 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 570 "declarative_oracle.m"
            }
#line 567 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 567 "declarative_oracle.m"
            {
#line 571 "declarative_oracle.m"
              {
#line 571 "declarative_oracle.m"
                MR_Word base;
#line 571 "declarative_oracle.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 571 "declarative_oracle.m"
                *mdb__declarative_oracle__Answer_3 = base;
#line 571 "declarative_oracle.m"
                MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_7;
#line 571 "declarative_oracle.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_11));
#line 571 "declarative_oracle.m"
              }
#line 571 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 567 "declarative_oracle.m"
            }
#line 567 "declarative_oracle.m"
        }
#line 567 "declarative_oracle.m"
        break;
#line 567 "declarative_oracle.m"
      case (MR_Integer) 1:
#line 573 "declarative_oracle.m"
        {
#line 573 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__Node_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_2, (MR_Integer) 0));
#line 573 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Call_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_2, (MR_Integer) 1)));
#line 573 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__CMap_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 1)));
#line 573 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Truth_19;
#line 574 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle___Solns_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_2, (MR_Integer) 2)));
#line 508 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 0)));
#line 508 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 2)));
#line 576 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__conv0_Truth_19;

#line 576 "declarative_oracle.m"
          {
#line 576 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__CMap_18, ((MR_Box) (mdb__declarative_oracle__Call_16)), &mdb__declarative_oracle__conv0_Truth_19);
          }
#line 576 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 576 "declarative_oracle.m"
            {
#line 576 "declarative_oracle.m"
              mdb__declarative_oracle__Truth_19 = ((MR_Word) mdb__declarative_oracle__conv0_Truth_19);
#line 576 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 576 "declarative_oracle.m"
            }
#line 573 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 573 "declarative_oracle.m"
            {
#line 577 "declarative_oracle.m"
              {
#line 577 "declarative_oracle.m"
                MR_Word base;
#line 577 "declarative_oracle.m"
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "declarative_oracle.m"
                *mdb__declarative_oracle__Answer_3 = base;
#line 577 "declarative_oracle.m"
                MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_15;
#line 577 "declarative_oracle.m"
                MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_19));
#line 577 "declarative_oracle.m"
              }
#line 577 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 573 "declarative_oracle.m"
            }
#line 573 "declarative_oracle.m"
        }
#line 567 "declarative_oracle.m"
        break;
#line 567 "declarative_oracle.m"
      case (MR_Integer) 2:
#line 579 "declarative_oracle.m"
        {
#line 579 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__Node_23 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_2, (MR_Integer) 0));
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Call_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_2, (MR_Integer) 1)));
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Exception_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_2, (MR_Integer) 2)));
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__XMap_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 2)));
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__X_27;
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Possible_28;
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Impossible_29;
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Inadmissible_30;
#line 509 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 0)));
#line 509 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_1, (MR_Integer) 1)));
#line 582 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__conv1_X_27;
#line 584 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__TypeCtorInfo_41_41;

#line 582 "declarative_oracle.m"
          {
#line 582 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__XMap_26, ((MR_Box) (mdb__declarative_oracle__Call_24)), &mdb__declarative_oracle__conv1_X_27);
          }
#line 582 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 582 "declarative_oracle.m"
            {
#line 582 "declarative_oracle.m"
              mdb__declarative_oracle__X_27 = ((MR_Word) mdb__declarative_oracle__conv1_X_27);
#line 582 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 582 "declarative_oracle.m"
            }
#line 579 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 579 "declarative_oracle.m"
            {
#line 583 "declarative_oracle.m"
              mdb__declarative_oracle__Possible_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_27, (MR_Integer) 0)));
#line 583 "declarative_oracle.m"
              mdb__declarative_oracle__Impossible_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_27, (MR_Integer) 1)));
#line 583 "declarative_oracle.m"
              mdb__declarative_oracle__Inadmissible_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_27, (MR_Integer) 2)));
#line 2710 "mdb.declarative_oracle.c"
              mdb__declarative_oracle__TypeCtorInfo_41_41 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
#line 584 "declarative_oracle.m"
              {
#line 584 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0(mdb__declarative_oracle__TypeCtorInfo_41_41, ((MR_Box) (mdb__declarative_oracle__Exception_25)), mdb__declarative_oracle__Possible_28);
              }
#line 586 "declarative_oracle.m"
              if (mdb__declarative_oracle__succeeded)
#line 585 "declarative_oracle.m"
                {
#line 585 "declarative_oracle.m"
                  {
#line 585 "declarative_oracle.m"
                    MR_Word base;
#line 585 "declarative_oracle.m"
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "declarative_oracle.m"
                    *mdb__declarative_oracle__Answer_3 = base;
#line 585 "declarative_oracle.m"
                    MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_23;
#line 585 "declarative_oracle.m"
                    MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 0));
#line 585 "declarative_oracle.m"
                  }
#line 585 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = MR_TRUE;
#line 585 "declarative_oracle.m"
                }
#line 586 "declarative_oracle.m"
              else
#line 588 "declarative_oracle.m"
                {
#line 586 "declarative_oracle.m"
                  {
#line 586 "declarative_oracle.m"
                    mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_25)), mdb__declarative_oracle__Impossible_29);
                  }
#line 588 "declarative_oracle.m"
                  if (mdb__declarative_oracle__succeeded)
#line 587 "declarative_oracle.m"
                    {
#line 587 "declarative_oracle.m"
                      {
#line 587 "declarative_oracle.m"
                        MR_Word base;
#line 587 "declarative_oracle.m"
                        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "declarative_oracle.m"
                        *mdb__declarative_oracle__Answer_3 = base;
#line 587 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_23;
#line 587 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((MR_Integer) 1));
#line 587 "declarative_oracle.m"
                      }
#line 587 "declarative_oracle.m"
                      mdb__declarative_oracle__succeeded = MR_TRUE;
#line 587 "declarative_oracle.m"
                    }
#line 588 "declarative_oracle.m"
                  else
#line 589 "declarative_oracle.m"
                    {
#line 589 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_33_33;

#line 589 "declarative_oracle.m"
                      {
#line 589 "declarative_oracle.m"
                        mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_25)), mdb__declarative_oracle__Inadmissible_30);
                      }
#line 589 "declarative_oracle.m"
                      if (mdb__declarative_oracle__succeeded)
#line 589 "declarative_oracle.m"
                        {
#line 590 "declarative_oracle.m"
                          mdb__declarative_oracle__V_33_33 = (MR_Integer) 2;
#line 590 "declarative_oracle.m"
                          {
#line 590 "declarative_oracle.m"
                            MR_Word base;
#line 590 "declarative_oracle.m"
                            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "declarative_oracle.m"
                            *mdb__declarative_oracle__Answer_3 = base;
#line 590 "declarative_oracle.m"
                            MR_hl_field(MR_mktag(0), base, 0) = mdb__declarative_oracle__Node_23;
#line 590 "declarative_oracle.m"
                            MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_33_33));
#line 590 "declarative_oracle.m"
                          }
#line 590 "declarative_oracle.m"
                          mdb__declarative_oracle__succeeded = MR_TRUE;
#line 589 "declarative_oracle.m"
                        }
#line 589 "declarative_oracle.m"
                    }
#line 588 "declarative_oracle.m"
                }
#line 579 "declarative_oracle.m"
            }
#line 579 "declarative_oracle.m"
        }
#line 567 "declarative_oracle.m"
        break;
#line 567 "declarative_oracle.m"
    }
#line 567 "declarative_oracle.m"
    return mdb__declarative_oracle__succeeded;
#line 567 "declarative_oracle.m"
  }
#line 564 "declarative_oracle.m"
}

#line 325 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle____Compare____trusted_object_0_0(
#line 325 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
#line 325 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 325 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__3_3)
#line 325 "declarative_oracle.m"
{
#line 325 "declarative_oracle.m"
  {
#line 325 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 325 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastX_64 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;
#line 325 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastY_65 = (MR_Integer) mdb__declarative_oracle__HeadVar__3_3;

#line 325 "declarative_oracle.m"
    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_64 == mdb__declarative_oracle__CastY_65);
#line 325 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 2849 "mdb.declarative_oracle.c"
      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
#line 325 "declarative_oracle.m"
    else
#line 325 "declarative_oracle.m"
#line 325 "declarative_oracle.m"
      switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) {
#line 325 "declarative_oracle.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 325 "declarative_oracle.m"
        case (MR_Integer) 0:
#line 325 "declarative_oracle.m"
#line 325 "declarative_oracle.m"
          switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
#line 325 "declarative_oracle.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 325 "declarative_oracle.m"
            case (MR_Integer) 0:
#line 325 "declarative_oracle.m"
              *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
#line 325 "declarative_oracle.m"
              break;
#line 325 "declarative_oracle.m"
            case (MR_Integer) 1:
#line 2873 "mdb.declarative_oracle.c"
              *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "declarative_oracle.m"
              break;
#line 325 "declarative_oracle.m"
            case (MR_Integer) 2:
#line 2879 "mdb.declarative_oracle.c"
              *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "declarative_oracle.m"
              break;
#line 325 "declarative_oracle.m"
            case (MR_Integer) 3:
#line 2885 "mdb.declarative_oracle.c"
              *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "declarative_oracle.m"
              break;
#line 325 "declarative_oracle.m"
          }
#line 325 "declarative_oracle.m"
          break;
#line 325 "declarative_oracle.m"
        case (MR_Integer) 1:
#line 325 "declarative_oracle.m"
          {
#line 325 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

#line 325 "declarative_oracle.m"
#line 325 "declarative_oracle.m"
            switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
#line 325 "declarative_oracle.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 325 "declarative_oracle.m"
              case (MR_Integer) 0:
#line 2907 "mdb.declarative_oracle.c"
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
              case (MR_Integer) 1:
#line 325 "declarative_oracle.m"
                {
#line 325 "declarative_oracle.m"
                  MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));

#line 325 "declarative_oracle.m"
                  {
#line 325 "declarative_oracle.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_76_76, mdb__declarative_oracle__V_5_5);
#line 325 "declarative_oracle.m"
                    return;
                  }
#line 325 "declarative_oracle.m"
                }
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
              case (MR_Integer) 2:
#line 2931 "mdb.declarative_oracle.c"
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
              case (MR_Integer) 3:
#line 2937 "mdb.declarative_oracle.c"
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
            }
#line 325 "declarative_oracle.m"
          }
#line 325 "declarative_oracle.m"
          break;
#line 325 "declarative_oracle.m"
        case (MR_Integer) 2:
#line 325 "declarative_oracle.m"
          {
#line 325 "declarative_oracle.m"
            MR_Integer mdb__declarative_oracle__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
#line 325 "declarative_oracle.m"
            MR_String mdb__declarative_oracle__V_78_78 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

#line 325 "declarative_oracle.m"
#line 325 "declarative_oracle.m"
            switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
#line 325 "declarative_oracle.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 325 "declarative_oracle.m"
              case (MR_Integer) 0:
#line 2965 "mdb.declarative_oracle.c"
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
              case (MR_Integer) 1:
#line 2971 "mdb.declarative_oracle.c"
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
              case (MR_Integer) 2:
#line 325 "declarative_oracle.m"
                {
#line 325 "declarative_oracle.m"
                  MR_Word mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
#line 325 "declarative_oracle.m"
                  MR_String mdb__declarative_oracle__V_23_23 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
#line 325 "declarative_oracle.m"
                  MR_Integer mdb__declarative_oracle__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
#line 325 "declarative_oracle.m"
                  MR_Word mdb__declarative_oracle__V_25_25;

#line 325 "declarative_oracle.m"
                  {
#line 325 "declarative_oracle.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&mdb__declarative_oracle__V_25_25, mdb__declarative_oracle__V_79_79, mdb__declarative_oracle__V_22_22);
                  }
#line 2993 "mdb.declarative_oracle.c"
                  mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_25_25 == (MR_Integer) 0);
#line 325 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 325 "declarative_oracle.m"
                  if (mdb__declarative_oracle__succeeded)
#line 325 "declarative_oracle.m"
                    *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_25_25;
#line 325 "declarative_oracle.m"
                  else
#line 325 "declarative_oracle.m"
                    {
#line 325 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_26_26;

#line 325 "declarative_oracle.m"
                      {
#line 325 "declarative_oracle.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_oracle__V_26_26, mdb__declarative_oracle__V_78_78, mdb__declarative_oracle__V_23_23);
                      }
#line 3013 "mdb.declarative_oracle.c"
                      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_26_26 == (MR_Integer) 0);
#line 325 "declarative_oracle.m"
                      mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 325 "declarative_oracle.m"
                      if (mdb__declarative_oracle__succeeded)
#line 325 "declarative_oracle.m"
                        *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_26_26;
#line 325 "declarative_oracle.m"
                      else
#line 325 "declarative_oracle.m"
                        {
#line 325 "declarative_oracle.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_77_77, mdb__declarative_oracle__V_24_24);
#line 325 "declarative_oracle.m"
                          return;
                        }
#line 325 "declarative_oracle.m"
                    }
#line 325 "declarative_oracle.m"
                }
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
              case (MR_Integer) 3:
#line 3038 "mdb.declarative_oracle.c"
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
            }
#line 325 "declarative_oracle.m"
          }
#line 325 "declarative_oracle.m"
          break;
#line 325 "declarative_oracle.m"
        case (MR_Integer) 3:
#line 325 "declarative_oracle.m"
          {
#line 325 "declarative_oracle.m"
            MR_Integer mdb__declarative_oracle__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
#line 325 "declarative_oracle.m"
            MR_String mdb__declarative_oracle__V_74_74 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

#line 325 "declarative_oracle.m"
#line 325 "declarative_oracle.m"
            switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
#line 325 "declarative_oracle.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 325 "declarative_oracle.m"
              case (MR_Integer) 0:
#line 3066 "mdb.declarative_oracle.c"
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
              case (MR_Integer) 1:
#line 3072 "mdb.declarative_oracle.c"
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
              case (MR_Integer) 2:
#line 3078 "mdb.declarative_oracle.c"
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
              case (MR_Integer) 3:
#line 325 "declarative_oracle.m"
                {
#line 325 "declarative_oracle.m"
                  MR_Word mdb__declarative_oracle__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
#line 325 "declarative_oracle.m"
                  MR_String mdb__declarative_oracle__V_50_50 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
#line 325 "declarative_oracle.m"
                  MR_Integer mdb__declarative_oracle__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
#line 325 "declarative_oracle.m"
                  MR_Word mdb__declarative_oracle__V_52_52;

#line 325 "declarative_oracle.m"
                  {
#line 325 "declarative_oracle.m"
                    mdbcomp__sym_name____Compare____sym_name_0_0(&mdb__declarative_oracle__V_52_52, mdb__declarative_oracle__V_75_75, mdb__declarative_oracle__V_49_49);
                  }
#line 3100 "mdb.declarative_oracle.c"
                  mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_52_52 == (MR_Integer) 0);
#line 325 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 325 "declarative_oracle.m"
                  if (mdb__declarative_oracle__succeeded)
#line 325 "declarative_oracle.m"
                    *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_52_52;
#line 325 "declarative_oracle.m"
                  else
#line 325 "declarative_oracle.m"
                    {
#line 325 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_53_53;

#line 325 "declarative_oracle.m"
                      {
#line 325 "declarative_oracle.m"
                        mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_oracle__V_53_53, mdb__declarative_oracle__V_74_74, mdb__declarative_oracle__V_50_50);
                      }
#line 3120 "mdb.declarative_oracle.c"
                      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_53_53 == (MR_Integer) 0);
#line 325 "declarative_oracle.m"
                      mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 325 "declarative_oracle.m"
                      if (mdb__declarative_oracle__succeeded)
#line 325 "declarative_oracle.m"
                        *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_53_53;
#line 325 "declarative_oracle.m"
                      else
#line 325 "declarative_oracle.m"
                        {
#line 325 "declarative_oracle.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_73_73, mdb__declarative_oracle__V_51_51);
#line 325 "declarative_oracle.m"
                          return;
                        }
#line 325 "declarative_oracle.m"
                    }
#line 325 "declarative_oracle.m"
                }
#line 325 "declarative_oracle.m"
                break;
#line 325 "declarative_oracle.m"
            }
#line 325 "declarative_oracle.m"
          }
#line 325 "declarative_oracle.m"
          break;
#line 325 "declarative_oracle.m"
      }
#line 325 "declarative_oracle.m"
  }
#line 325 "declarative_oracle.m"
}

#line 325 "declarative_oracle.m"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____trusted_object_0_0(
#line 325 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 325 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2)
#line 325 "declarative_oracle.m"
{
#line 325 "declarative_oracle.m"
  {
#line 325 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 325 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastX_19 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
#line 325 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastY_20 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

#line 325 "declarative_oracle.m"
    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_19 == mdb__declarative_oracle__CastY_20);
#line 325 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 325 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = MR_TRUE;
#line 325 "declarative_oracle.m"
    else
#line 325 "declarative_oracle.m"
#line 325 "declarative_oracle.m"
      switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) {
#line 325 "declarative_oracle.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 325 "declarative_oracle.m"
        case (MR_Integer) 0:
#line 325 "declarative_oracle.m"
          {
#line 325 "declarative_oracle.m"
            MR_Integer mdb__declarative_oracle__CastX_17 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
#line 325 "declarative_oracle.m"
            MR_Integer mdb__declarative_oracle__CastY_18 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

#line 325 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastY_18 == mdb__declarative_oracle__CastX_17);
#line 325 "declarative_oracle.m"
          }
#line 325 "declarative_oracle.m"
          break;
#line 325 "declarative_oracle.m"
        case (MR_Integer) 1:
#line 325 "declarative_oracle.m"
          {
#line 325 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_4_4;

#line 325 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 325 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 325 "declarative_oracle.m"
              {
#line 325 "declarative_oracle.m"
                mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 3219 "mdb.declarative_oracle.c"
                {
#line 3221 "mdb.declarative_oracle.c"
                  return mdb__declarative_oracle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdb__declarative_oracle__V_3_3, mdb__declarative_oracle__V_4_4);
                }
#line 325 "declarative_oracle.m"
              }
#line 325 "declarative_oracle.m"
          }
#line 325 "declarative_oracle.m"
          break;
#line 325 "declarative_oracle.m"
        case (MR_Integer) 2:
#line 325 "declarative_oracle.m"
          {
#line 325 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "declarative_oracle.m"
            MR_String mdb__declarative_oracle__V_6_6 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "declarative_oracle.m"
            MR_Integer mdb__declarative_oracle__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 325 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_8_8;
#line 325 "declarative_oracle.m"
            MR_String mdb__declarative_oracle__V_9_9;
#line 325 "declarative_oracle.m"
            MR_Integer mdb__declarative_oracle__V_10_10;

#line 325 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 325 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 325 "declarative_oracle.m"
              {
#line 325 "declarative_oracle.m"
                mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 325 "declarative_oracle.m"
                mdb__declarative_oracle__V_9_9 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "declarative_oracle.m"
                mdb__declarative_oracle__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
#line 3259 "mdb.declarative_oracle.c"
                {
#line 3261 "mdb.declarative_oracle.c"
                  mdb__declarative_oracle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdb__declarative_oracle__V_5_5, mdb__declarative_oracle__V_8_8);
                }
#line 325 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 325 "declarative_oracle.m"
                  {
#line 3268 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__succeeded = (strcmp(mdb__declarative_oracle__V_6_6, mdb__declarative_oracle__V_9_9) == 0);
#line 325 "declarative_oracle.m"
                    if (mdb__declarative_oracle__succeeded)
#line 3272 "mdb.declarative_oracle.c"
                      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_7_7 == mdb__declarative_oracle__V_10_10);
#line 325 "declarative_oracle.m"
                  }
#line 325 "declarative_oracle.m"
              }
#line 325 "declarative_oracle.m"
          }
#line 325 "declarative_oracle.m"
          break;
#line 325 "declarative_oracle.m"
        case (MR_Integer) 3:
#line 325 "declarative_oracle.m"
          {
#line 325 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
#line 325 "declarative_oracle.m"
            MR_String mdb__declarative_oracle__V_12_12 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 325 "declarative_oracle.m"
            MR_Integer mdb__declarative_oracle__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 325 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_14_14;
#line 325 "declarative_oracle.m"
            MR_String mdb__declarative_oracle__V_15_15;
#line 325 "declarative_oracle.m"
            MR_Integer mdb__declarative_oracle__V_16_16;

#line 325 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 325 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 325 "declarative_oracle.m"
              {
#line 325 "declarative_oracle.m"
                mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 325 "declarative_oracle.m"
                mdb__declarative_oracle__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 325 "declarative_oracle.m"
                mdb__declarative_oracle__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
#line 3311 "mdb.declarative_oracle.c"
                {
#line 3313 "mdb.declarative_oracle.c"
                  mdb__declarative_oracle__succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(mdb__declarative_oracle__V_11_11, mdb__declarative_oracle__V_14_14);
                }
#line 325 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 325 "declarative_oracle.m"
                  {
#line 3320 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__succeeded = (strcmp(mdb__declarative_oracle__V_12_12, mdb__declarative_oracle__V_15_15) == 0);
#line 325 "declarative_oracle.m"
                    if (mdb__declarative_oracle__succeeded)
#line 3324 "mdb.declarative_oracle.c"
                      mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_13_13 == mdb__declarative_oracle__V_16_16);
#line 325 "declarative_oracle.m"
                  }
#line 325 "declarative_oracle.m"
              }
#line 325 "declarative_oracle.m"
          }
#line 325 "declarative_oracle.m"
          break;
#line 325 "declarative_oracle.m"
      }
#line 325 "declarative_oracle.m"
    return mdb__declarative_oracle__succeeded;
#line 325 "declarative_oracle.m"
  }
#line 325 "declarative_oracle.m"
}

#line 290 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle____Compare____oracle_state_0_0(
#line 290 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
#line 290 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 290 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__3_3)
#line 290 "declarative_oracle.m"
{
#line 290 "declarative_oracle.m"
  {
#line 290 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 290 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastX_18 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;
#line 290 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastY_19 = (MR_Integer) mdb__declarative_oracle__HeadVar__3_3;

#line 290 "declarative_oracle.m"
    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_18 == mdb__declarative_oracle__CastY_19);
#line 290 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 3367 "mdb.declarative_oracle.c"
      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
#line 290 "declarative_oracle.m"
    else
#line 290 "declarative_oracle.m"
      {
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 3)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 4)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 3)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 4)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_14_14;
#line 462 "declarative_oracle.m"
        MR_Integer mdb__declarative_oracle__CastX_33 = (MR_Integer) mdb__declarative_oracle__V_4_4;
#line 462 "declarative_oracle.m"
        MR_Integer mdb__declarative_oracle__CastY_34 = (MR_Integer) mdb__declarative_oracle__V_9_9;

#line 462 "declarative_oracle.m"
        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_33 == mdb__declarative_oracle__CastY_34);
#line 462 "declarative_oracle.m"
        if (mdb__declarative_oracle__succeeded)
#line 3404 "mdb.declarative_oracle.c"
          {
#line 3406 "mdb.declarative_oracle.c"
            mdb__declarative_oracle__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 290 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 3410 "mdb.declarative_oracle.c"
            if (mdb__declarative_oracle__succeeded)
#line 3412 "mdb.declarative_oracle.c"
              {
#line 3414 "mdb.declarative_oracle.c"
                mdb__declarative_oracle__V_14_14 = (MR_Integer) 0;
#line 3416 "mdb.declarative_oracle.c"
                mdb__declarative_oracle__succeeded = MR_TRUE;
#line 3418 "mdb.declarative_oracle.c"
              }
#line 3420 "mdb.declarative_oracle.c"
          }
#line 462 "declarative_oracle.m"
        else
#line 462 "declarative_oracle.m"
          {
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 2)));
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 2)));
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_31_31;

#line 462 "declarative_oracle.m"
            {
#line 462 "declarative_oracle.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], &mdb__declarative_oracle__V_31_31, ((MR_Box) (mdb__declarative_oracle__V_25_25)), ((MR_Box) (mdb__declarative_oracle__V_28_28)));
            }
#line 3446 "mdb.declarative_oracle.c"
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_31_31 == (MR_Integer) 0);
#line 462 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
              {
#line 462 "declarative_oracle.m"
                mdb__declarative_oracle__V_14_14 = mdb__declarative_oracle__V_31_31;
#line 3456 "mdb.declarative_oracle.c"
                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_14_14 == (MR_Integer) 0);
#line 290 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
              }
#line 462 "declarative_oracle.m"
            else
#line 462 "declarative_oracle.m"
              {
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_32_32;

#line 462 "declarative_oracle.m"
                {
#line 462 "declarative_oracle.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], &mdb__declarative_oracle__V_32_32, ((MR_Box) (mdb__declarative_oracle__V_26_26)), ((MR_Box) (mdb__declarative_oracle__V_29_29)));
                }
#line 3474 "mdb.declarative_oracle.c"
                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_32_32 == (MR_Integer) 0);
#line 462 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
                  {
#line 462 "declarative_oracle.m"
                    mdb__declarative_oracle__V_14_14 = mdb__declarative_oracle__V_32_32;
#line 3484 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_14_14 == (MR_Integer) 0);
#line 290 "declarative_oracle.m"
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
                  }
#line 462 "declarative_oracle.m"
                else
#line 462 "declarative_oracle.m"
                  {
#line 462 "declarative_oracle.m"
                    {
#line 462 "declarative_oracle.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[2], &mdb__declarative_oracle__V_14_14, ((MR_Box) (mdb__declarative_oracle__V_27_27)), ((MR_Box) (mdb__declarative_oracle__V_30_30)));
                    }
#line 3499 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_14_14 == (MR_Integer) 0);
#line 290 "declarative_oracle.m"
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
                  }
#line 462 "declarative_oracle.m"
              }
#line 462 "declarative_oracle.m"
          }
#line 290 "declarative_oracle.m"
        if (mdb__declarative_oracle__succeeded)
#line 290 "declarative_oracle.m"
          *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_14_14;
#line 290 "declarative_oracle.m"
        else
#line 290 "declarative_oracle.m"
          {
#line 290 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_15_15;
#line 462 "declarative_oracle.m"
            MR_Integer mdb__declarative_oracle__CastX_46 = (MR_Integer) mdb__declarative_oracle__V_5_5;
#line 462 "declarative_oracle.m"
            MR_Integer mdb__declarative_oracle__CastY_47 = (MR_Integer) mdb__declarative_oracle__V_10_10;

#line 462 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_46 == mdb__declarative_oracle__CastY_47);
#line 462 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 3528 "mdb.declarative_oracle.c"
              {
#line 3530 "mdb.declarative_oracle.c"
                mdb__declarative_oracle__succeeded = ((MR_Integer) 0 == (MR_Integer) 0);
#line 290 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 3534 "mdb.declarative_oracle.c"
                if (mdb__declarative_oracle__succeeded)
#line 3536 "mdb.declarative_oracle.c"
                  {
#line 3538 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__V_15_15 = (MR_Integer) 0;
#line 3540 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__succeeded = MR_TRUE;
#line 3542 "mdb.declarative_oracle.c"
                  }
#line 3544 "mdb.declarative_oracle.c"
              }
#line 462 "declarative_oracle.m"
            else
#line 462 "declarative_oracle.m"
              {
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_5_5, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_5_5, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_5_5, (MR_Integer) 2)));
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_10_10, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_10_10, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_10_10, (MR_Integer) 2)));
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_44_44;

#line 462 "declarative_oracle.m"
                {
#line 462 "declarative_oracle.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], &mdb__declarative_oracle__V_44_44, ((MR_Box) (mdb__declarative_oracle__V_38_38)), ((MR_Box) (mdb__declarative_oracle__V_41_41)));
                }
#line 3570 "mdb.declarative_oracle.c"
                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_44_44 == (MR_Integer) 0);
#line 462 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
                  {
#line 462 "declarative_oracle.m"
                    mdb__declarative_oracle__V_15_15 = mdb__declarative_oracle__V_44_44;
#line 3580 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_15_15 == (MR_Integer) 0);
#line 290 "declarative_oracle.m"
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
                  }
#line 462 "declarative_oracle.m"
                else
#line 462 "declarative_oracle.m"
                  {
#line 462 "declarative_oracle.m"
                    MR_Word mdb__declarative_oracle__V_45_45;

#line 462 "declarative_oracle.m"
                    {
#line 462 "declarative_oracle.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], &mdb__declarative_oracle__V_45_45, ((MR_Box) (mdb__declarative_oracle__V_39_39)), ((MR_Box) (mdb__declarative_oracle__V_42_42)));
                    }
#line 3598 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_45_45 == (MR_Integer) 0);
#line 462 "declarative_oracle.m"
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
                    if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
                      {
#line 462 "declarative_oracle.m"
                        mdb__declarative_oracle__V_15_15 = mdb__declarative_oracle__V_45_45;
#line 3608 "mdb.declarative_oracle.c"
                        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_15_15 == (MR_Integer) 0);
#line 290 "declarative_oracle.m"
                        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
                      }
#line 462 "declarative_oracle.m"
                    else
#line 462 "declarative_oracle.m"
                      {
#line 462 "declarative_oracle.m"
                        {
#line 462 "declarative_oracle.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[2], &mdb__declarative_oracle__V_15_15, ((MR_Box) (mdb__declarative_oracle__V_40_40)), ((MR_Box) (mdb__declarative_oracle__V_43_43)));
                        }
#line 3623 "mdb.declarative_oracle.c"
                        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_15_15 == (MR_Integer) 0);
#line 290 "declarative_oracle.m"
                        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
                      }
#line 462 "declarative_oracle.m"
                  }
#line 462 "declarative_oracle.m"
              }
#line 290 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 290 "declarative_oracle.m"
              *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_15_15;
#line 290 "declarative_oracle.m"
            else
#line 290 "declarative_oracle.m"
              {
#line 290 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_16_16;

#line 290 "declarative_oracle.m"
                {
#line 290 "declarative_oracle.m"
                  mdb__declarative_user____Compare____user_state_0_0(&mdb__declarative_oracle__V_16_16, mdb__declarative_oracle__V_6_6, mdb__declarative_oracle__V_11_11);
                }
#line 3649 "mdb.declarative_oracle.c"
                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_16_16 == (MR_Integer) 0);
#line 290 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 290 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 290 "declarative_oracle.m"
                  *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_16_16;
#line 290 "declarative_oracle.m"
                else
#line 290 "declarative_oracle.m"
                  {
#line 290 "declarative_oracle.m"
                    MR_Word mdb__declarative_oracle__V_17_17;

#line 290 "declarative_oracle.m"
                    {
#line 290 "declarative_oracle.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[3], &mdb__declarative_oracle__V_17_17, ((MR_Box) (mdb__declarative_oracle__V_7_7)), ((MR_Box) (mdb__declarative_oracle__V_12_12)));
                    }
#line 3669 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_17_17 == (MR_Integer) 0);
#line 290 "declarative_oracle.m"
                    mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 290 "declarative_oracle.m"
                    if (mdb__declarative_oracle__succeeded)
#line 290 "declarative_oracle.m"
                      *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_17_17;
#line 290 "declarative_oracle.m"
                    else
#line 290 "declarative_oracle.m"
                      {
#line 290 "declarative_oracle.m"
                        mercury__counter____Compare____counter_0_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_8_8, mdb__declarative_oracle__V_13_13);
#line 290 "declarative_oracle.m"
                        return;
                      }
#line 290 "declarative_oracle.m"
                  }
#line 290 "declarative_oracle.m"
              }
#line 290 "declarative_oracle.m"
          }
#line 290 "declarative_oracle.m"
      }
#line 290 "declarative_oracle.m"
  }
#line 290 "declarative_oracle.m"
}

#line 290 "declarative_oracle.m"
MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_state_0_0(
#line 290 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 290 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2)
#line 290 "declarative_oracle.m"
{
#line 290 "declarative_oracle.m"
  {
#line 290 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 290 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastX_13 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
#line 290 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastY_14 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

#line 290 "declarative_oracle.m"
    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_13 == mdb__declarative_oracle__CastY_14);
#line 290 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 290 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = MR_TRUE;
#line 290 "declarative_oracle.m"
    else
#line 290 "declarative_oracle.m"
      {
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__TypeInfo_16_16;
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 3)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 4)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 3)));
#line 290 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 4)));
#line 462 "declarative_oracle.m"
        MR_Integer mdb__declarative_oracle__CastX_24 = (MR_Integer) mdb__declarative_oracle__V_3_3;
#line 462 "declarative_oracle.m"
        MR_Integer mdb__declarative_oracle__CastY_25 = (MR_Integer) mdb__declarative_oracle__V_8_8;
#line 462 "declarative_oracle.m"
        MR_Integer mdb__declarative_oracle__CastX_35;
#line 462 "declarative_oracle.m"
        MR_Integer mdb__declarative_oracle__CastY_36;

#line 462 "declarative_oracle.m"
        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_24 == mdb__declarative_oracle__CastY_25);
#line 462 "declarative_oracle.m"
        if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
          mdb__declarative_oracle__succeeded = MR_TRUE;
#line 462 "declarative_oracle.m"
        else
#line 462 "declarative_oracle.m"
          {
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__TypeInfo_12_27;
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__TypeInfo_13_28;
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_3_3, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_3_3, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_3_3, (MR_Integer) 2)));
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_8_8, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_8_8, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_8_8, (MR_Integer) 2)));

#line 3785 "mdb.declarative_oracle.c"
            {
#line 3787 "mdb.declarative_oracle.c"
              mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], ((MR_Box) (mdb__declarative_oracle__V_18_18)), ((MR_Box) (mdb__declarative_oracle__V_21_21)));
            }
#line 462 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
              {
#line 3794 "mdb.declarative_oracle.c"
                mdb__declarative_oracle__TypeInfo_12_27 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[1];
#line 3796 "mdb.declarative_oracle.c"
                {
#line 3798 "mdb.declarative_oracle.c"
                  mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_27, ((MR_Box) (mdb__declarative_oracle__V_19_19)), ((MR_Box) (mdb__declarative_oracle__V_22_22)));
                }
#line 462 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
                  {
#line 3805 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__TypeInfo_13_28 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[2];
#line 3807 "mdb.declarative_oracle.c"
                    {
#line 3809 "mdb.declarative_oracle.c"
                      mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_28, ((MR_Box) (mdb__declarative_oracle__V_20_20)), ((MR_Box) (mdb__declarative_oracle__V_23_23)));
                    }
#line 462 "declarative_oracle.m"
                  }
#line 462 "declarative_oracle.m"
              }
#line 462 "declarative_oracle.m"
          }
#line 290 "declarative_oracle.m"
        if (mdb__declarative_oracle__succeeded)
#line 290 "declarative_oracle.m"
          {
#line 462 "declarative_oracle.m"
            mdb__declarative_oracle__CastX_35 = (MR_Integer) mdb__declarative_oracle__V_4_4;
#line 462 "declarative_oracle.m"
            mdb__declarative_oracle__CastY_36 = (MR_Integer) mdb__declarative_oracle__V_9_9;
#line 462 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_35 == mdb__declarative_oracle__CastY_36);
#line 462 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 462 "declarative_oracle.m"
            else
#line 462 "declarative_oracle.m"
              {
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__TypeInfo_12_38;
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__TypeInfo_13_39;
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_4_4, (MR_Integer) 2)));
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_9_9, (MR_Integer) 2)));

#line 3853 "mdb.declarative_oracle.c"
                {
#line 3855 "mdb.declarative_oracle.c"
                  mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], ((MR_Box) (mdb__declarative_oracle__V_29_29)), ((MR_Box) (mdb__declarative_oracle__V_32_32)));
                }
#line 462 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
                  {
#line 3862 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__TypeInfo_12_38 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[1];
#line 3864 "mdb.declarative_oracle.c"
                    {
#line 3866 "mdb.declarative_oracle.c"
                      mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_38, ((MR_Box) (mdb__declarative_oracle__V_30_30)), ((MR_Box) (mdb__declarative_oracle__V_33_33)));
                    }
#line 462 "declarative_oracle.m"
                    if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
                      {
#line 3873 "mdb.declarative_oracle.c"
                        mdb__declarative_oracle__TypeInfo_13_39 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[2];
#line 3875 "mdb.declarative_oracle.c"
                        {
#line 3877 "mdb.declarative_oracle.c"
                          mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_39, ((MR_Box) (mdb__declarative_oracle__V_31_31)), ((MR_Box) (mdb__declarative_oracle__V_34_34)));
                        }
#line 462 "declarative_oracle.m"
                      }
#line 462 "declarative_oracle.m"
                  }
#line 462 "declarative_oracle.m"
              }
#line 290 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 290 "declarative_oracle.m"
              {
#line 3890 "mdb.declarative_oracle.c"
                {
#line 3892 "mdb.declarative_oracle.c"
                  mdb__declarative_oracle__succeeded = mdb__declarative_user____Unify____user_state_0_0(mdb__declarative_oracle__V_5_5, mdb__declarative_oracle__V_10_10);
                }
#line 290 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 290 "declarative_oracle.m"
                  {
#line 3899 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__TypeInfo_16_16 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[3];
#line 3901 "mdb.declarative_oracle.c"
                    {
#line 3903 "mdb.declarative_oracle.c"
                      mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_16_16, ((MR_Box) (mdb__declarative_oracle__V_6_6)), ((MR_Box) (mdb__declarative_oracle__V_11_11)));
                    }
#line 290 "declarative_oracle.m"
                    if (mdb__declarative_oracle__succeeded)
#line 3908 "mdb.declarative_oracle.c"
                      {
#line 3910 "mdb.declarative_oracle.c"
                        return mdb__declarative_oracle__succeeded = mercury__counter____Unify____counter_0_0(mdb__declarative_oracle__V_7_7, mdb__declarative_oracle__V_12_12);
                      }
#line 290 "declarative_oracle.m"
                  }
#line 290 "declarative_oracle.m"
              }
#line 290 "declarative_oracle.m"
          }
#line 290 "declarative_oracle.m"
      }
#line 290 "declarative_oracle.m"
    return mdb__declarative_oracle__succeeded;
#line 290 "declarative_oracle.m"
  }
#line 290 "declarative_oracle.m"
}

#line 48 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle____Compare____oracle_response_1_0(
#line 48 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_54,
#line 48 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
#line 48 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 48 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__3_3)
#line 48 "declarative_oracle.m"
{
#line 48 "declarative_oracle.m"
  {
#line 48 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 48 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastX_52 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;
#line 48 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastY_53 = (MR_Integer) mdb__declarative_oracle__HeadVar__3_3;

#line 48 "declarative_oracle.m"
    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_52 == mdb__declarative_oracle__CastY_53);
#line 48 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 3954 "mdb.declarative_oracle.c"
      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
#line 48 "declarative_oracle.m"
    else
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
      switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) {
#line 48 "declarative_oracle.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
        case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
          switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__2_2)) {
#line 48 "declarative_oracle.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
            case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
              switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                  switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                    case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
#line 48 "declarative_oracle.m"
                      break;
#line 48 "declarative_oracle.m"
                    case (MR_Integer) 1:
#line 48 "declarative_oracle.m"
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                      break;
#line 48 "declarative_oracle.m"
                  }
#line 48 "declarative_oracle.m"
                  break;
#line 48 "declarative_oracle.m"
                case (MR_Integer) 1:
#line 4002 "mdb.declarative_oracle.c"
                  *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                  break;
#line 48 "declarative_oracle.m"
                case (MR_Integer) 2:
#line 4008 "mdb.declarative_oracle.c"
                  *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                  break;
#line 48 "declarative_oracle.m"
                case (MR_Integer) 3:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
#line 48 "declarative_oracle.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                    case (MR_Integer) 0:
#line 4021 "mdb.declarative_oracle.c"
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                      break;
#line 48 "declarative_oracle.m"
                    case (MR_Integer) 1:
#line 4027 "mdb.declarative_oracle.c"
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                      break;
#line 48 "declarative_oracle.m"
                  }
#line 48 "declarative_oracle.m"
                  break;
#line 48 "declarative_oracle.m"
              }
#line 48 "declarative_oracle.m"
              break;
#line 48 "declarative_oracle.m"
            case (MR_Integer) 1:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
              switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                  switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                    case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                      break;
#line 48 "declarative_oracle.m"
                    case (MR_Integer) 1:
#line 48 "declarative_oracle.m"
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
#line 48 "declarative_oracle.m"
                      break;
#line 48 "declarative_oracle.m"
                  }
#line 48 "declarative_oracle.m"
                  break;
#line 48 "declarative_oracle.m"
                case (MR_Integer) 1:
#line 4071 "mdb.declarative_oracle.c"
                  *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                  break;
#line 48 "declarative_oracle.m"
                case (MR_Integer) 2:
#line 4077 "mdb.declarative_oracle.c"
                  *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                  break;
#line 48 "declarative_oracle.m"
                case (MR_Integer) 3:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
#line 48 "declarative_oracle.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                    case (MR_Integer) 0:
#line 4090 "mdb.declarative_oracle.c"
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                      break;
#line 48 "declarative_oracle.m"
                    case (MR_Integer) 1:
#line 4096 "mdb.declarative_oracle.c"
                      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                      break;
#line 48 "declarative_oracle.m"
                  }
#line 48 "declarative_oracle.m"
                  break;
#line 48 "declarative_oracle.m"
              }
#line 48 "declarative_oracle.m"
              break;
#line 48 "declarative_oracle.m"
          }
#line 48 "declarative_oracle.m"
          break;
#line 48 "declarative_oracle.m"
        case (MR_Integer) 1:
#line 48 "declarative_oracle.m"
          {
#line 48 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
            switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
              case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 0:
#line 4133 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 1:
#line 4139 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                }
#line 48 "declarative_oracle.m"
                break;
#line 48 "declarative_oracle.m"
              case (MR_Integer) 1:
#line 48 "declarative_oracle.m"
                {
#line 48 "declarative_oracle.m"
                  MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));

#line 48 "declarative_oracle.m"
                  {
#line 48 "declarative_oracle.m"
                    mdb__declarative_debugger____Compare____decl_answer_1_0(mdb__declarative_oracle__TypeInfo_for_T_54, mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_59_59, mdb__declarative_oracle__V_5_5);
#line 48 "declarative_oracle.m"
                    return;
                  }
#line 48 "declarative_oracle.m"
                }
#line 48 "declarative_oracle.m"
                break;
#line 48 "declarative_oracle.m"
              case (MR_Integer) 2:
#line 4167 "mdb.declarative_oracle.c"
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                break;
#line 48 "declarative_oracle.m"
              case (MR_Integer) 3:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
#line 48 "declarative_oracle.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 0:
#line 4180 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 1:
#line 4186 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                }
#line 48 "declarative_oracle.m"
                break;
#line 48 "declarative_oracle.m"
            }
#line 48 "declarative_oracle.m"
          }
#line 48 "declarative_oracle.m"
          break;
#line 48 "declarative_oracle.m"
        case (MR_Integer) 2:
#line 48 "declarative_oracle.m"
          {
#line 48 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));

#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
            switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
              case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 0:
#line 4221 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 1:
#line 4227 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                }
#line 48 "declarative_oracle.m"
                break;
#line 48 "declarative_oracle.m"
              case (MR_Integer) 1:
#line 4237 "mdb.declarative_oracle.c"
                *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                break;
#line 48 "declarative_oracle.m"
              case (MR_Integer) 2:
#line 48 "declarative_oracle.m"
                {
#line 48 "declarative_oracle.m"
                  MR_Word mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));

#line 48 "declarative_oracle.m"
                  {
#line 48 "declarative_oracle.m"
                    mercury__io____Compare____output_stream_0_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_62_62, mdb__declarative_oracle__V_17_17);
#line 48 "declarative_oracle.m"
                    return;
                  }
#line 48 "declarative_oracle.m"
                }
#line 48 "declarative_oracle.m"
                break;
#line 48 "declarative_oracle.m"
              case (MR_Integer) 3:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
#line 48 "declarative_oracle.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 0:
#line 4268 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 1:
#line 4274 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                }
#line 48 "declarative_oracle.m"
                break;
#line 48 "declarative_oracle.m"
            }
#line 48 "declarative_oracle.m"
          }
#line 48 "declarative_oracle.m"
          break;
#line 48 "declarative_oracle.m"
        case (MR_Integer) 3:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)))) {
#line 48 "declarative_oracle.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
            case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
              {
#line 48 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));

#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                    switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                      case (MR_Integer) 0:
#line 4316 "mdb.declarative_oracle.c"
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                        break;
#line 48 "declarative_oracle.m"
                      case (MR_Integer) 1:
#line 4322 "mdb.declarative_oracle.c"
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                        break;
#line 48 "declarative_oracle.m"
                    }
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 1:
#line 4332 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 2:
#line 4338 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 3:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
#line 48 "declarative_oracle.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                      case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
                        {
#line 48 "declarative_oracle.m"
                          MR_Word mdb__declarative_oracle__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
#line 48 "declarative_oracle.m"
                          MR_Integer mdb__declarative_oracle__V_63_63 = (MR_Integer) mdb__declarative_oracle__V_60_60;
#line 48 "declarative_oracle.m"
                          MR_Integer mdb__declarative_oracle__V_64_64 = (MR_Integer) mdb__declarative_oracle__V_29_29;

#line 48 "declarative_oracle.m"
                          {
#line 48 "declarative_oracle.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_63_63, mdb__declarative_oracle__V_64_64);
#line 48 "declarative_oracle.m"
                            return;
                          }
#line 48 "declarative_oracle.m"
                        }
#line 48 "declarative_oracle.m"
                        break;
#line 48 "declarative_oracle.m"
                      case (MR_Integer) 1:
#line 4373 "mdb.declarative_oracle.c"
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                        break;
#line 48 "declarative_oracle.m"
                    }
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                }
#line 48 "declarative_oracle.m"
              }
#line 48 "declarative_oracle.m"
              break;
#line 48 "declarative_oracle.m"
            case (MR_Integer) 1:
#line 48 "declarative_oracle.m"
              {
#line 48 "declarative_oracle.m"
                MR_Box mdb__declarative_oracle__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1));

#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                    switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__3_3)) {
#line 48 "declarative_oracle.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                      case (MR_Integer) 0:
#line 4408 "mdb.declarative_oracle.c"
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                        break;
#line 48 "declarative_oracle.m"
                      case (MR_Integer) 1:
#line 4414 "mdb.declarative_oracle.c"
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 1;
#line 48 "declarative_oracle.m"
                        break;
#line 48 "declarative_oracle.m"
                    }
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 1:
#line 4424 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 2:
#line 4430 "mdb.declarative_oracle.c"
                    *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                  case (MR_Integer) 3:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)))) {
#line 48 "declarative_oracle.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
                      case (MR_Integer) 0:
#line 4443 "mdb.declarative_oracle.c"
                        *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 2;
#line 48 "declarative_oracle.m"
                        break;
#line 48 "declarative_oracle.m"
                      case (MR_Integer) 1:
#line 48 "declarative_oracle.m"
                        {
#line 48 "declarative_oracle.m"
                          MR_Box mdb__declarative_oracle__V_46_46 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1));

#line 48 "declarative_oracle.m"
                          {
#line 48 "declarative_oracle.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_oracle__TypeInfo_for_T_54, mdb__declarative_oracle__HeadVar__1_1, mdb__declarative_oracle__V_61_61, mdb__declarative_oracle__V_46_46);
#line 48 "declarative_oracle.m"
                            return;
                          }
#line 48 "declarative_oracle.m"
                        }
#line 48 "declarative_oracle.m"
                        break;
#line 48 "declarative_oracle.m"
                    }
#line 48 "declarative_oracle.m"
                    break;
#line 48 "declarative_oracle.m"
                }
#line 48 "declarative_oracle.m"
              }
#line 48 "declarative_oracle.m"
              break;
#line 48 "declarative_oracle.m"
          }
#line 48 "declarative_oracle.m"
          break;
#line 48 "declarative_oracle.m"
      }
#line 48 "declarative_oracle.m"
  }
#line 48 "declarative_oracle.m"
}

#line 48 "declarative_oracle.m"
MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_response_1_0(
#line 48 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_17,
#line 48 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 48 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2)
#line 48 "declarative_oracle.m"
{
#line 48 "declarative_oracle.m"
  {
#line 48 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 48 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastX_15 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
#line 48 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastY_16 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

#line 48 "declarative_oracle.m"
    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_15 == mdb__declarative_oracle__CastY_16);
#line 48 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 48 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = MR_TRUE;
#line 48 "declarative_oracle.m"
    else
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
      switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) {
#line 48 "declarative_oracle.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
        case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
          switch (MR_unmkbody(mdb__declarative_oracle__HeadVar__1_1)) {
#line 48 "declarative_oracle.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
            case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
              {
#line 48 "declarative_oracle.m"
                MR_Integer mdb__declarative_oracle__CastX_9 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
#line 48 "declarative_oracle.m"
                MR_Integer mdb__declarative_oracle__CastY_10 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

#line 48 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastY_10 == mdb__declarative_oracle__CastX_9);
#line 48 "declarative_oracle.m"
              }
#line 48 "declarative_oracle.m"
              break;
#line 48 "declarative_oracle.m"
            case (MR_Integer) 1:
#line 48 "declarative_oracle.m"
              {
#line 48 "declarative_oracle.m"
                MR_Integer mdb__declarative_oracle__CastX_13 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
#line 48 "declarative_oracle.m"
                MR_Integer mdb__declarative_oracle__CastY_14 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

#line 48 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastY_14 == mdb__declarative_oracle__CastX_13);
#line 48 "declarative_oracle.m"
              }
#line 48 "declarative_oracle.m"
              break;
#line 48 "declarative_oracle.m"
          }
#line 48 "declarative_oracle.m"
          break;
#line 48 "declarative_oracle.m"
        case (MR_Integer) 1:
#line 48 "declarative_oracle.m"
          {
#line 48 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
#line 48 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_4_4;

#line 48 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 48 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 48 "declarative_oracle.m"
              {
#line 48 "declarative_oracle.m"
                mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 4577 "mdb.declarative_oracle.c"
                {
#line 4579 "mdb.declarative_oracle.c"
                  return mdb__declarative_oracle__succeeded = mdb__declarative_debugger____Unify____decl_answer_1_0(mdb__declarative_oracle__TypeInfo_for_T_17, mdb__declarative_oracle__V_3_3, mdb__declarative_oracle__V_4_4);
                }
#line 48 "declarative_oracle.m"
              }
#line 48 "declarative_oracle.m"
          }
#line 48 "declarative_oracle.m"
          break;
#line 48 "declarative_oracle.m"
        case (MR_Integer) 2:
#line 48 "declarative_oracle.m"
          {
#line 48 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
#line 48 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_6_6;

#line 48 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 48 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 48 "declarative_oracle.m"
              {
#line 48 "declarative_oracle.m"
                mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 4605 "mdb.declarative_oracle.c"
                {
#line 4607 "mdb.declarative_oracle.c"
                  return mdb__declarative_oracle__succeeded = mercury__io____Unify____output_stream_0_0(mdb__declarative_oracle__V_5_5, mdb__declarative_oracle__V_6_6);
                }
#line 48 "declarative_oracle.m"
              }
#line 48 "declarative_oracle.m"
          }
#line 48 "declarative_oracle.m"
          break;
#line 48 "declarative_oracle.m"
        case (MR_Integer) 3:
#line 48 "declarative_oracle.m"
#line 48 "declarative_oracle.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)))) {
#line 48 "declarative_oracle.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 48 "declarative_oracle.m"
            case (MR_Integer) 0:
#line 48 "declarative_oracle.m"
              {
#line 48 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 48 "declarative_oracle.m"
                MR_Word mdb__declarative_oracle__V_8_8;

#line 48 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = ((((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 48 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 48 "declarative_oracle.m"
                  {
#line 48 "declarative_oracle.m"
                    mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 4640 "mdb.declarative_oracle.c"
                    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_7_7 == mdb__declarative_oracle__V_8_8);
#line 48 "declarative_oracle.m"
                  }
#line 48 "declarative_oracle.m"
              }
#line 48 "declarative_oracle.m"
              break;
#line 48 "declarative_oracle.m"
            case (MR_Integer) 1:
#line 48 "declarative_oracle.m"
              {
#line 48 "declarative_oracle.m"
                MR_Box mdb__declarative_oracle__V_11_11 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1));
#line 48 "declarative_oracle.m"
                MR_Box mdb__declarative_oracle__V_12_12;

#line 48 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = ((((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 48 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 48 "declarative_oracle.m"
                  {
#line 48 "declarative_oracle.m"
                    mdb__declarative_oracle__V_12_12 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1));
#line 4665 "mdb.declarative_oracle.c"
                    {
#line 4667 "mdb.declarative_oracle.c"
                      return mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_for_T_17, mdb__declarative_oracle__V_11_11, mdb__declarative_oracle__V_12_12);
                    }
#line 48 "declarative_oracle.m"
                  }
#line 48 "declarative_oracle.m"
              }
#line 48 "declarative_oracle.m"
              break;
#line 48 "declarative_oracle.m"
          }
#line 48 "declarative_oracle.m"
          break;
#line 48 "declarative_oracle.m"
      }
#line 48 "declarative_oracle.m"
    return mdb__declarative_oracle__succeeded;
#line 48 "declarative_oracle.m"
  }
#line 48 "declarative_oracle.m"
}

#line 462 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle____Compare____oracle_kb_0_0(
#line 462 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
#line 462 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 462 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__3_3)
#line 462 "declarative_oracle.m"
{
#line 462 "declarative_oracle.m"
  {
#line 462 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 462 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastX_12 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;
#line 462 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastY_13 = (MR_Integer) mdb__declarative_oracle__HeadVar__3_3;

#line 462 "declarative_oracle.m"
    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_12 == mdb__declarative_oracle__CastY_13);
#line 462 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 4713 "mdb.declarative_oracle.c"
      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
#line 462 "declarative_oracle.m"
    else
#line 462 "declarative_oracle.m"
      {
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_10_10;

#line 462 "declarative_oracle.m"
        {
#line 462 "declarative_oracle.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], &mdb__declarative_oracle__V_10_10, ((MR_Box) (mdb__declarative_oracle__V_4_4)), ((MR_Box) (mdb__declarative_oracle__V_7_7)));
        }
#line 4739 "mdb.declarative_oracle.c"
        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_10_10 == (MR_Integer) 0);
#line 462 "declarative_oracle.m"
        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
        if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
          *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_10_10;
#line 462 "declarative_oracle.m"
        else
#line 462 "declarative_oracle.m"
          {
#line 462 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_11_11;

#line 462 "declarative_oracle.m"
            {
#line 462 "declarative_oracle.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[1], &mdb__declarative_oracle__V_11_11, ((MR_Box) (mdb__declarative_oracle__V_5_5)), ((MR_Box) (mdb__declarative_oracle__V_8_8)));
            }
#line 4759 "mdb.declarative_oracle.c"
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_11_11 == (MR_Integer) 0);
#line 462 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 462 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
              *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_11_11;
#line 462 "declarative_oracle.m"
            else
#line 462 "declarative_oracle.m"
              {
#line 462 "declarative_oracle.m"
                {
#line 462 "declarative_oracle.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[2], mdb__declarative_oracle__HeadVar__1_1, ((MR_Box) (mdb__declarative_oracle__V_6_6)), ((MR_Box) (mdb__declarative_oracle__V_9_9)));
#line 462 "declarative_oracle.m"
                  return;
                }
#line 462 "declarative_oracle.m"
              }
#line 462 "declarative_oracle.m"
          }
#line 462 "declarative_oracle.m"
      }
#line 462 "declarative_oracle.m"
  }
#line 462 "declarative_oracle.m"
}

#line 462 "declarative_oracle.m"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____oracle_kb_0_0(
#line 462 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 462 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2)
#line 462 "declarative_oracle.m"
{
#line 462 "declarative_oracle.m"
  {
#line 462 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 462 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastX_9 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
#line 462 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastY_10 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

#line 462 "declarative_oracle.m"
    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_9 == mdb__declarative_oracle__CastY_10);
#line 462 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = MR_TRUE;
#line 462 "declarative_oracle.m"
    else
#line 462 "declarative_oracle.m"
      {
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__TypeInfo_12_12;
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__TypeInfo_13_13;
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 462 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));

#line 4834 "mdb.declarative_oracle.c"
        {
#line 4836 "mdb.declarative_oracle.c"
          mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_1[0], ((MR_Box) (mdb__declarative_oracle__V_3_3)), ((MR_Box) (mdb__declarative_oracle__V_6_6)));
        }
#line 462 "declarative_oracle.m"
        if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
          {
#line 4843 "mdb.declarative_oracle.c"
            mdb__declarative_oracle__TypeInfo_12_12 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[1];
#line 4845 "mdb.declarative_oracle.c"
            {
#line 4847 "mdb.declarative_oracle.c"
              mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_12, ((MR_Box) (mdb__declarative_oracle__V_4_4)), ((MR_Box) (mdb__declarative_oracle__V_7_7)));
            }
#line 462 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 462 "declarative_oracle.m"
              {
#line 4854 "mdb.declarative_oracle.c"
                mdb__declarative_oracle__TypeInfo_13_13 = (MR_Word) &mdb__declarative_oracle_scalar_common_1[2];
#line 4856 "mdb.declarative_oracle.c"
                {
#line 4858 "mdb.declarative_oracle.c"
                  return mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_13, ((MR_Box) (mdb__declarative_oracle__V_5_5)), ((MR_Box) (mdb__declarative_oracle__V_8_8)));
                }
#line 462 "declarative_oracle.m"
              }
#line 462 "declarative_oracle.m"
          }
#line 462 "declarative_oracle.m"
      }
#line 462 "declarative_oracle.m"
    return mdb__declarative_oracle__succeeded;
#line 462 "declarative_oracle.m"
  }
#line 462 "declarative_oracle.m"
}

#line 481 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle____Compare____known_exceptions_0_0(
#line 481 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__1_1,
#line 481 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 481 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__3_3)
#line 481 "declarative_oracle.m"
{
#line 481 "declarative_oracle.m"
  {
#line 481 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 481 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastX_12 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;
#line 481 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastY_13 = (MR_Integer) mdb__declarative_oracle__HeadVar__3_3;

#line 481 "declarative_oracle.m"
    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_12 == mdb__declarative_oracle__CastY_13);
#line 481 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 4898 "mdb.declarative_oracle.c"
      *mdb__declarative_oracle__HeadVar__1_1 = (MR_Integer) 0;
#line 481 "declarative_oracle.m"
    else
#line 481 "declarative_oracle.m"
      {
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 0)));
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 1)));
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__3_3, (MR_Integer) 2)));
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_10_10;

#line 481 "declarative_oracle.m"
        {
#line 481 "declarative_oracle.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], &mdb__declarative_oracle__V_10_10, ((MR_Box) (mdb__declarative_oracle__V_4_4)), ((MR_Box) (mdb__declarative_oracle__V_7_7)));
        }
#line 4924 "mdb.declarative_oracle.c"
        mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_10_10 == (MR_Integer) 0);
#line 481 "declarative_oracle.m"
        mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 481 "declarative_oracle.m"
        if (mdb__declarative_oracle__succeeded)
#line 481 "declarative_oracle.m"
          *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_10_10;
#line 481 "declarative_oracle.m"
        else
#line 481 "declarative_oracle.m"
          {
#line 481 "declarative_oracle.m"
            MR_Word mdb__declarative_oracle__V_11_11;

#line 481 "declarative_oracle.m"
            {
#line 481 "declarative_oracle.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], &mdb__declarative_oracle__V_11_11, ((MR_Box) (mdb__declarative_oracle__V_5_5)), ((MR_Box) (mdb__declarative_oracle__V_8_8)));
            }
#line 4944 "mdb.declarative_oracle.c"
            mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__V_11_11 == (MR_Integer) 0);
#line 481 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = !(mdb__declarative_oracle__succeeded);
#line 481 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 481 "declarative_oracle.m"
              *mdb__declarative_oracle__HeadVar__1_1 = mdb__declarative_oracle__V_11_11;
#line 481 "declarative_oracle.m"
            else
#line 481 "declarative_oracle.m"
              {
#line 481 "declarative_oracle.m"
                {
#line 481 "declarative_oracle.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], mdb__declarative_oracle__HeadVar__1_1, ((MR_Box) (mdb__declarative_oracle__V_6_6)), ((MR_Box) (mdb__declarative_oracle__V_9_9)));
#line 481 "declarative_oracle.m"
                  return;
                }
#line 481 "declarative_oracle.m"
              }
#line 481 "declarative_oracle.m"
          }
#line 481 "declarative_oracle.m"
      }
#line 481 "declarative_oracle.m"
  }
#line 481 "declarative_oracle.m"
}

#line 481 "declarative_oracle.m"
static MR_bool MR_CALL 
mdb__declarative_oracle____Unify____known_exceptions_0_0(
#line 481 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 481 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2)
#line 481 "declarative_oracle.m"
{
#line 481 "declarative_oracle.m"
  {
#line 481 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 481 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastX_9 = (MR_Integer) mdb__declarative_oracle__HeadVar__1_1;
#line 481 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__CastY_10 = (MR_Integer) mdb__declarative_oracle__HeadVar__2_2;

#line 481 "declarative_oracle.m"
    mdb__declarative_oracle__succeeded = (mdb__declarative_oracle__CastX_9 == mdb__declarative_oracle__CastY_10);
#line 481 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 481 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = MR_TRUE;
#line 481 "declarative_oracle.m"
    else
#line 481 "declarative_oracle.m"
      {
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__TypeInfo_12_12;
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__TypeInfo_13_13;
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 481 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));

#line 5019 "mdb.declarative_oracle.c"
        {
#line 5021 "mdb.declarative_oracle.c"
          mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_oracle_scalar_common_2[0], ((MR_Box) (mdb__declarative_oracle__V_3_3)), ((MR_Box) (mdb__declarative_oracle__V_6_6)));
        }
#line 481 "declarative_oracle.m"
        if (mdb__declarative_oracle__succeeded)
#line 481 "declarative_oracle.m"
          {
#line 5028 "mdb.declarative_oracle.c"
            mdb__declarative_oracle__TypeInfo_12_12 = (MR_Word) &mdb__declarative_oracle_scalar_common_2[0];
#line 5030 "mdb.declarative_oracle.c"
            {
#line 5032 "mdb.declarative_oracle.c"
              mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_12_12, ((MR_Box) (mdb__declarative_oracle__V_4_4)), ((MR_Box) (mdb__declarative_oracle__V_7_7)));
            }
#line 481 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 481 "declarative_oracle.m"
              {
#line 5039 "mdb.declarative_oracle.c"
                mdb__declarative_oracle__TypeInfo_13_13 = (MR_Word) &mdb__declarative_oracle_scalar_common_2[0];
#line 5041 "mdb.declarative_oracle.c"
                {
#line 5043 "mdb.declarative_oracle.c"
                  return mdb__declarative_oracle__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_oracle__TypeInfo_13_13, ((MR_Box) (mdb__declarative_oracle__V_5_5)), ((MR_Box) (mdb__declarative_oracle__V_8_8)));
                }
#line 481 "declarative_oracle.m"
              }
#line 481 "declarative_oracle.m"
          }
#line 481 "declarative_oracle.m"
      }
#line 481 "declarative_oracle.m"
    return mdb__declarative_oracle__succeeded;
#line 481 "declarative_oracle.m"
  }
#line 481 "declarative_oracle.m"
}

#line 699 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__remove_atom_from_ground_map_4_p_0(
#line 699 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__FinalAtom_5,
#line 699 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__ProcLayout_6,
#line 699 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Map_0_8,
#line 699 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Map_9)
#line 699 "declarative_oracle.m"
{
#line 703 "declarative_oracle.m"
  {
#line 703 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 703 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_10_10;
#line 703 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_12_12;
#line 703 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_13_13;
#line 703 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_5, (MR_Integer) 0)));
#line 703 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_5, (MR_Integer) 1)));
#line 705 "declarative_oracle.m"
    MR_Box mdb__declarative_oracle__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_14_14, (MR_Integer) 0)));

#line 705 "declarative_oracle.m"
    mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_14_14, (MR_Integer) 1)));
#line 705 "declarative_oracle.m"
    {
#line 705 "declarative_oracle.m"
      mdb__declarative_oracle__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 705 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 0) = ((MR_Box) (mdb__declarative_oracle__ProcLayout_6));
#line 705 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 1) = ((MR_Box) (mdb__declarative_oracle__V_13_13));
#line 705 "declarative_oracle.m"
    }
#line 704 "declarative_oracle.m"
    {
#line 704 "declarative_oracle.m"
      mdb__declarative_oracle__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 704 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_10_10, 0) = ((MR_Box) (mdb__declarative_oracle__V_12_12));
#line 704 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_10_10, 1) = ((MR_Box) (mdb__declarative_oracle__V_16_16));
#line 704 "declarative_oracle.m"
    }
#line 704 "declarative_oracle.m"
    {
#line 704 "declarative_oracle.m"
      mercury__map__delete_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__V_10_10)), mdb__declarative_oracle__STATE_VARIABLE_Map_0_8, mdb__declarative_oracle__STATE_VARIABLE_Map_9);
#line 704 "declarative_oracle.m"
      return;
    }
#line 703 "declarative_oracle.m"
  }
#line 699 "declarative_oracle.m"
}

#line 689 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__add_atom_to_ground_map_5_p_0(
#line 689 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Truth_6,
#line 689 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__FinalAtom_7,
#line 689 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__ProcLayout_8,
#line 689 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Map_0_10,
#line 689 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Map_11)
#line 689 "declarative_oracle.m"
{
#line 694 "declarative_oracle.m"
  {
#line 694 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 694 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_12_12;
#line 694 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_14_14;
#line 694 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_15_15;
#line 694 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_7, (MR_Integer) 0)));
#line 694 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__FinalAtom_7, (MR_Integer) 1)));
#line 696 "declarative_oracle.m"
    MR_Box mdb__declarative_oracle__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_16_16, (MR_Integer) 0)));

#line 696 "declarative_oracle.m"
    mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_16_16, (MR_Integer) 1)));
#line 696 "declarative_oracle.m"
    {
#line 696 "declarative_oracle.m"
      mdb__declarative_oracle__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 696 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_14_14, 0) = ((MR_Box) (mdb__declarative_oracle__ProcLayout_8));
#line 696 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_14_14, 1) = ((MR_Box) (mdb__declarative_oracle__V_15_15));
#line 696 "declarative_oracle.m"
    }
#line 695 "declarative_oracle.m"
    {
#line 695 "declarative_oracle.m"
      mdb__declarative_oracle__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 695 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 0) = ((MR_Box) (mdb__declarative_oracle__V_14_14));
#line 695 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_12_12, 1) = ((MR_Box) (mdb__declarative_oracle__V_18_18));
#line 695 "declarative_oracle.m"
    }
#line 695 "declarative_oracle.m"
    {
#line 695 "declarative_oracle.m"
      mercury__map__set_4_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, ((MR_Box) (mdb__declarative_oracle__V_12_12)), ((MR_Box) (mdb__declarative_oracle__Truth_6)), mdb__declarative_oracle__STATE_VARIABLE_Map_0_10, mdb__declarative_oracle__STATE_VARIABLE_Map_11);
#line 695 "declarative_oracle.m"
      return;
    }
#line 694 "declarative_oracle.m"
  }
#line 689 "declarative_oracle.m"
}

#line 515 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__set_kb_exceptions_map_3_p_0(
#line 515 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__M_4,
#line 515 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_5,
#line 515 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__3_3)
#line 515 "declarative_oracle.m"
{
#line 520 "declarative_oracle.m"
  {
#line 520 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 520 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 0)));
#line 520 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 1)));
#line 520 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 2)));

#line 520 "declarative_oracle.m"
    {
#line 520 "declarative_oracle.m"
      MR_Word base;
#line 520 "declarative_oracle.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 520 "declarative_oracle.m"
      *mdb__declarative_oracle__HeadVar__3_3 = base;
#line 520 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_6_6));
#line 520 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_7_7));
#line 520 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__M_4));
#line 520 "declarative_oracle.m"
    }
#line 520 "declarative_oracle.m"
  }
#line 515 "declarative_oracle.m"
}

#line 513 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__set_kb_complete_map_3_p_0(
#line 513 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__M_4,
#line 513 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_5,
#line 513 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__3_3)
#line 513 "declarative_oracle.m"
{
#line 519 "declarative_oracle.m"
  {
#line 519 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 519 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 0)));
#line 519 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 2)));
#line 519 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 1)));

#line 519 "declarative_oracle.m"
    {
#line 519 "declarative_oracle.m"
      MR_Word base;
#line 519 "declarative_oracle.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 519 "declarative_oracle.m"
      *mdb__declarative_oracle__HeadVar__3_3 = base;
#line 519 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_6_6));
#line 519 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__M_4));
#line 519 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_8_8));
#line 519 "declarative_oracle.m"
    }
#line 519 "declarative_oracle.m"
  }
#line 513 "declarative_oracle.m"
}

#line 511 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__set_kb_ground_map_3_p_0(
#line 511 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__M_4,
#line 511 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_5,
#line 511 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__3_3)
#line 511 "declarative_oracle.m"
{
#line 518 "declarative_oracle.m"
  {
#line 518 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 518 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 1)));
#line 518 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 2)));
#line 518 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_5, (MR_Integer) 0)));

#line 518 "declarative_oracle.m"
    {
#line 518 "declarative_oracle.m"
      MR_Word base;
#line 518 "declarative_oracle.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 518 "declarative_oracle.m"
      *mdb__declarative_oracle__HeadVar__3_3 = base;
#line 518 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__M_4));
#line 518 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_7_7));
#line 518 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_8_8));
#line 518 "declarative_oracle.m"
    }
#line 518 "declarative_oracle.m"
  }
#line 511 "declarative_oracle.m"
}

#line 504 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__get_kb_exceptions_map_2_p_0(
#line 504 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_3,
#line 504 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__2_2)
#line 504 "declarative_oracle.m"
{
#line 509 "declarative_oracle.m"
  {
#line 509 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 509 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 0)));
#line 509 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 1)));

#line 509 "declarative_oracle.m"
    *mdb__declarative_oracle__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 2)));
#line 509 "declarative_oracle.m"
  }
#line 504 "declarative_oracle.m"
}

#line 502 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__get_kb_complete_map_2_p_0(
#line 502 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_3,
#line 502 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__2_2)
#line 502 "declarative_oracle.m"
{
#line 508 "declarative_oracle.m"
  {
#line 508 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 508 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 0)));
#line 508 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_5_5;

#line 508 "declarative_oracle.m"
    *mdb__declarative_oracle__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 1)));
#line 508 "declarative_oracle.m"
    mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 2)));
#line 508 "declarative_oracle.m"
  }
#line 502 "declarative_oracle.m"
}

#line 500 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__get_kb_ground_map_2_p_0(
#line 500 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__KB_3,
#line 500 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__HeadVar__2_2)
#line 500 "declarative_oracle.m"
{
#line 507 "declarative_oracle.m"
  {
#line 507 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 507 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_4_4;
#line 507 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_5_5;

#line 507 "declarative_oracle.m"
    *mdb__declarative_oracle__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 0)));
#line 507 "declarative_oracle.m"
    mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 1)));
#line 507 "declarative_oracle.m"
    mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__KB_3, (MR_Integer) 2)));
#line 507 "declarative_oracle.m"
  }
#line 500 "declarative_oracle.m"
}

#line 432 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__format_trust_display_4_p_0(
#line 432 "declarative_oracle.m"
  MR_Integer mdb__declarative_oracle__Id_1,
#line 432 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 432 "declarative_oracle.m"
  MR_String mdb__declarative_oracle__S_3,
#line 432 "declarative_oracle.m"
  MR_String * mdb__declarative_oracle__HeadVar__4_4)
#line 432 "declarative_oracle.m"
{
#line 435 "declarative_oracle.m"
  {
#line 435 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;

#line 435 "declarative_oracle.m"
#line 435 "declarative_oracle.m"
    switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__2_2)) {
#line 435 "declarative_oracle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 435 "declarative_oracle.m"
      case (MR_Integer) 0:
#line 448 "declarative_oracle.m"
        {
#line 448 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__Display_57;
#line 448 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_58_58;

#line 449 "declarative_oracle.m"
          {
#line 449 "declarative_oracle.m"
            mdb__declarative_oracle__V_58_58 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Id_1);
          }
#line 449 "declarative_oracle.m"
          {
#line 449 "declarative_oracle.m"
            mdb__declarative_oracle__Display_57 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_58_58, (MR_String) ": the Mercury standard library\n");
          }
#line 448 "declarative_oracle.m"
          {
#line 448 "declarative_oracle.m"
            *mdb__declarative_oracle__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_3, mdb__declarative_oracle__Display_57);
          }
#line 448 "declarative_oracle.m"
        }
#line 435 "declarative_oracle.m"
        break;
#line 435 "declarative_oracle.m"
      case (MR_Integer) 1:
#line 435 "declarative_oracle.m"
        {
#line 435 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__ModuleName_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 435 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__Display_8;
#line 435 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__ModuleNameStr_9;
#line 435 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_10_10;
#line 435 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_11_11;
#line 435 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_13_13;

#line 436 "declarative_oracle.m"
          {
#line 436 "declarative_oracle.m"
            mdb__declarative_oracle__ModuleNameStr_9 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_6);
          }
#line 437 "declarative_oracle.m"
          {
#line 437 "declarative_oracle.m"
            mdb__declarative_oracle__V_10_10 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Id_1);
          }
#line 437 "declarative_oracle.m"
          {
#line 437 "declarative_oracle.m"
            mdb__declarative_oracle__V_13_13 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_9, (MR_String) "\n");
          }
#line 437 "declarative_oracle.m"
          {
#line 437 "declarative_oracle.m"
            mdb__declarative_oracle__V_11_11 = mercury__string__f_43_43_2_f_0((MR_String) ": module ", mdb__declarative_oracle__V_13_13);
          }
#line 437 "declarative_oracle.m"
          {
#line 437 "declarative_oracle.m"
            mdb__declarative_oracle__Display_8 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_10_10, mdb__declarative_oracle__V_11_11);
          }
#line 435 "declarative_oracle.m"
          {
#line 435 "declarative_oracle.m"
            *mdb__declarative_oracle__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_3, mdb__declarative_oracle__Display_8);
          }
#line 435 "declarative_oracle.m"
        }
#line 435 "declarative_oracle.m"
        break;
#line 435 "declarative_oracle.m"
      case (MR_Integer) 2:
#line 439 "declarative_oracle.m"
        {
#line 439 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__ModuleName_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 439 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__Name_17 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 439 "declarative_oracle.m"
          MR_Integer mdb__declarative_oracle__Arity_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
#line 439 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__Display_20;
#line 439 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__ModuleNameStr_21;
#line 439 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_22_22;
#line 439 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_23_23;
#line 439 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_25_25;
#line 439 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_26_26;
#line 439 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_28_28;
#line 439 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_29_29;
#line 439 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_31_31;
#line 439 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_32_32;

#line 440 "declarative_oracle.m"
          {
#line 440 "declarative_oracle.m"
            mdb__declarative_oracle__ModuleNameStr_21 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_16);
          }
#line 441 "declarative_oracle.m"
          {
#line 441 "declarative_oracle.m"
            mdb__declarative_oracle__V_22_22 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Id_1);
          }
#line 442 "declarative_oracle.m"
          {
#line 442 "declarative_oracle.m"
            mdb__declarative_oracle__V_32_32 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Arity_18);
          }
#line 442 "declarative_oracle.m"
          {
#line 442 "declarative_oracle.m"
            mdb__declarative_oracle__V_31_31 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_32_32, (MR_String) "\n");
          }
#line 442 "declarative_oracle.m"
          {
#line 442 "declarative_oracle.m"
            mdb__declarative_oracle__V_29_29 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__V_31_31);
          }
#line 442 "declarative_oracle.m"
          {
#line 442 "declarative_oracle.m"
            mdb__declarative_oracle__V_28_28 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_17, mdb__declarative_oracle__V_29_29);
          }
#line 442 "declarative_oracle.m"
          {
#line 442 "declarative_oracle.m"
            mdb__declarative_oracle__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__V_28_28);
          }
#line 441 "declarative_oracle.m"
          {
#line 441 "declarative_oracle.m"
            mdb__declarative_oracle__V_25_25 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_21, mdb__declarative_oracle__V_26_26);
          }
#line 441 "declarative_oracle.m"
          {
#line 441 "declarative_oracle.m"
            mdb__declarative_oracle__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) ": predicate ", mdb__declarative_oracle__V_25_25);
          }
#line 441 "declarative_oracle.m"
          {
#line 441 "declarative_oracle.m"
            mdb__declarative_oracle__Display_20 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_22_22, mdb__declarative_oracle__V_23_23);
          }
#line 439 "declarative_oracle.m"
          {
#line 439 "declarative_oracle.m"
            *mdb__declarative_oracle__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_3, mdb__declarative_oracle__Display_20);
          }
#line 439 "declarative_oracle.m"
        }
#line 435 "declarative_oracle.m"
        break;
#line 435 "declarative_oracle.m"
      case (MR_Integer) 3:
#line 444 "declarative_oracle.m"
        {
#line 444 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__ModuleName_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 0)));
#line 444 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__Name_36 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 1)));
#line 444 "declarative_oracle.m"
          MR_Integer mdb__declarative_oracle__Arity_37 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__2_2, (MR_Integer) 2)));
#line 444 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__Display_39;
#line 444 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__ModuleNameStr_40;
#line 444 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_41_41;
#line 444 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_42_42;
#line 444 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_44_44;
#line 444 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_45_45;
#line 444 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_47_47;
#line 444 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_48_48;
#line 444 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_50_50;
#line 444 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_51_51;
#line 444 "declarative_oracle.m"
          MR_Integer mdb__declarative_oracle__V_52_52;

#line 445 "declarative_oracle.m"
          {
#line 445 "declarative_oracle.m"
            mdb__declarative_oracle__ModuleNameStr_40 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_35);
          }
#line 446 "declarative_oracle.m"
          {
#line 446 "declarative_oracle.m"
            mdb__declarative_oracle__V_41_41 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Id_1);
          }
#line 447 "declarative_oracle.m"
          mdb__declarative_oracle__V_52_52 = (mdb__declarative_oracle__Arity_37 - (MR_Integer) 1);
#line 447 "declarative_oracle.m"
          {
#line 447 "declarative_oracle.m"
            mdb__declarative_oracle__V_51_51 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__V_52_52);
          }
#line 447 "declarative_oracle.m"
          {
#line 447 "declarative_oracle.m"
            mdb__declarative_oracle__V_50_50 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_51_51, (MR_String) "\n");
          }
#line 447 "declarative_oracle.m"
          {
#line 447 "declarative_oracle.m"
            mdb__declarative_oracle__V_48_48 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__V_50_50);
          }
#line 447 "declarative_oracle.m"
          {
#line 447 "declarative_oracle.m"
            mdb__declarative_oracle__V_47_47 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_36, mdb__declarative_oracle__V_48_48);
          }
#line 446 "declarative_oracle.m"
          {
#line 446 "declarative_oracle.m"
            mdb__declarative_oracle__V_45_45 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__V_47_47);
          }
#line 446 "declarative_oracle.m"
          {
#line 446 "declarative_oracle.m"
            mdb__declarative_oracle__V_44_44 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_40, mdb__declarative_oracle__V_45_45);
          }
#line 446 "declarative_oracle.m"
          {
#line 446 "declarative_oracle.m"
            mdb__declarative_oracle__V_42_42 = mercury__string__f_43_43_2_f_0((MR_String) ": function ", mdb__declarative_oracle__V_44_44);
          }
#line 446 "declarative_oracle.m"
          {
#line 446 "declarative_oracle.m"
            mdb__declarative_oracle__Display_39 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__V_41_41, mdb__declarative_oracle__V_42_42);
          }
#line 444 "declarative_oracle.m"
          {
#line 444 "declarative_oracle.m"
            *mdb__declarative_oracle__HeadVar__4_4 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_3, mdb__declarative_oracle__Display_39);
          }
#line 444 "declarative_oracle.m"
        }
#line 435 "declarative_oracle.m"
        break;
#line 435 "declarative_oracle.m"
    }
#line 435 "declarative_oracle.m"
  }
#line 432 "declarative_oracle.m"
}

#line 412 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__format_trust_command_3_p_0(
#line 412 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1,
#line 412 "declarative_oracle.m"
  MR_String mdb__declarative_oracle__S_2,
#line 412 "declarative_oracle.m"
  MR_String * mdb__declarative_oracle__HeadVar__3_3)
#line 412 "declarative_oracle.m"
{
#line 416 "declarative_oracle.m"
  {
#line 416 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;

#line 416 "declarative_oracle.m"
#line 416 "declarative_oracle.m"
    switch (MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) {
#line 416 "declarative_oracle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 416 "declarative_oracle.m"
      case (MR_Integer) 0:
#line 430 "declarative_oracle.m"
        {
#line 430 "declarative_oracle.m"
          {
#line 430 "declarative_oracle.m"
            *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_2, (MR_String) "trust std lib\n");
          }
#line 430 "declarative_oracle.m"
        }
#line 416 "declarative_oracle.m"
        break;
#line 416 "declarative_oracle.m"
      case (MR_Integer) 1:
#line 416 "declarative_oracle.m"
        {
#line 416 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__ModuleName_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
#line 416 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__ModuleNameStr_6;
#line 416 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_7_7;
#line 416 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_9_9;

#line 417 "declarative_oracle.m"
          {
#line 417 "declarative_oracle.m"
            mdb__declarative_oracle__ModuleNameStr_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_4);
          }
#line 416 "declarative_oracle.m"
          {
#line 416 "declarative_oracle.m"
            mdb__declarative_oracle__V_9_9 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_6, (MR_String) "\n");
          }
#line 416 "declarative_oracle.m"
          {
#line 416 "declarative_oracle.m"
            mdb__declarative_oracle__V_7_7 = mercury__string__f_43_43_2_f_0((MR_String) "trust ", mdb__declarative_oracle__V_9_9);
          }
#line 416 "declarative_oracle.m"
          {
#line 416 "declarative_oracle.m"
            *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_2, mdb__declarative_oracle__V_7_7);
          }
#line 416 "declarative_oracle.m"
        }
#line 416 "declarative_oracle.m"
        break;
#line 416 "declarative_oracle.m"
      case (MR_Integer) 2:
#line 419 "declarative_oracle.m"
        {
#line 419 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__ModuleName_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
#line 419 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 419 "declarative_oracle.m"
          MR_Integer mdb__declarative_oracle__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 419 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__Command_15;
#line 419 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__ArityStr_16;
#line 419 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__ModuleNameStr_17;
#line 419 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_19_19;
#line 419 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_20_20;
#line 419 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_22_22;
#line 419 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_23_23;
#line 419 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_25_25;

#line 420 "declarative_oracle.m"
          {
#line 420 "declarative_oracle.m"
            mdb__declarative_oracle__ArityStr_16 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__Arity_13);
          }
#line 421 "declarative_oracle.m"
          {
#line 421 "declarative_oracle.m"
            mdb__declarative_oracle__ModuleNameStr_17 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_11);
          }
#line 423 "declarative_oracle.m"
          {
#line 423 "declarative_oracle.m"
            mdb__declarative_oracle__V_25_25 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ArityStr_16, (MR_String) "\n");
          }
#line 423 "declarative_oracle.m"
          {
#line 423 "declarative_oracle.m"
            mdb__declarative_oracle__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__V_25_25);
          }
#line 422 "declarative_oracle.m"
          {
#line 422 "declarative_oracle.m"
            mdb__declarative_oracle__V_22_22 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_12, mdb__declarative_oracle__V_23_23);
          }
#line 422 "declarative_oracle.m"
          {
#line 422 "declarative_oracle.m"
            mdb__declarative_oracle__V_20_20 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__V_22_22);
          }
#line 422 "declarative_oracle.m"
          {
#line 422 "declarative_oracle.m"
            mdb__declarative_oracle__V_19_19 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_17, mdb__declarative_oracle__V_20_20);
          }
#line 422 "declarative_oracle.m"
          {
#line 422 "declarative_oracle.m"
            mdb__declarative_oracle__Command_15 = mercury__string__f_43_43_2_f_0((MR_String) "trust pred*", mdb__declarative_oracle__V_19_19);
          }
#line 419 "declarative_oracle.m"
          {
#line 419 "declarative_oracle.m"
            *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_2, mdb__declarative_oracle__Command_15);
          }
#line 419 "declarative_oracle.m"
        }
#line 416 "declarative_oracle.m"
        break;
#line 416 "declarative_oracle.m"
      case (MR_Integer) 3:
#line 425 "declarative_oracle.m"
        {
#line 425 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__ModuleName_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)));
#line 425 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__Name_28 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 1)));
#line 425 "declarative_oracle.m"
          MR_Integer mdb__declarative_oracle__Arity_29 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 2)));
#line 425 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__Command_31;
#line 425 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__ArityStr_32;
#line 425 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__ModuleNameStr_33;
#line 425 "declarative_oracle.m"
          MR_Integer mdb__declarative_oracle__V_34_34 = (mdb__declarative_oracle__Arity_29 - (MR_Integer) 1);
#line 425 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_37_37;
#line 425 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_38_38;
#line 425 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_40_40;
#line 425 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_41_41;
#line 425 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__V_43_43;

#line 426 "declarative_oracle.m"
          {
#line 426 "declarative_oracle.m"
            mdb__declarative_oracle__ArityStr_32 = mercury__string__int_to_string_1_f_0(mdb__declarative_oracle__V_34_34);
          }
#line 427 "declarative_oracle.m"
          {
#line 427 "declarative_oracle.m"
            mdb__declarative_oracle__ModuleNameStr_33 = mdbcomp__sym_name__sym_name_to_string_1_f_0(mdb__declarative_oracle__ModuleName_27);
          }
#line 429 "declarative_oracle.m"
          {
#line 429 "declarative_oracle.m"
            mdb__declarative_oracle__V_43_43 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ArityStr_32, (MR_String) "\n");
          }
#line 429 "declarative_oracle.m"
          {
#line 429 "declarative_oracle.m"
            mdb__declarative_oracle__V_41_41 = mercury__string__f_43_43_2_f_0((MR_String) "/", mdb__declarative_oracle__V_43_43);
          }
#line 428 "declarative_oracle.m"
          {
#line 428 "declarative_oracle.m"
            mdb__declarative_oracle__V_40_40 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__Name_28, mdb__declarative_oracle__V_41_41);
          }
#line 428 "declarative_oracle.m"
          {
#line 428 "declarative_oracle.m"
            mdb__declarative_oracle__V_38_38 = mercury__string__f_43_43_2_f_0((MR_String) ".", mdb__declarative_oracle__V_40_40);
          }
#line 428 "declarative_oracle.m"
          {
#line 428 "declarative_oracle.m"
            mdb__declarative_oracle__V_37_37 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__ModuleNameStr_33, mdb__declarative_oracle__V_38_38);
          }
#line 428 "declarative_oracle.m"
          {
#line 428 "declarative_oracle.m"
            mdb__declarative_oracle__Command_31 = mercury__string__f_43_43_2_f_0((MR_String) "trust func*", mdb__declarative_oracle__V_37_37);
          }
#line 425 "declarative_oracle.m"
          {
#line 425 "declarative_oracle.m"
            *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__f_43_43_2_f_0(mdb__declarative_oracle__S_2, mdb__declarative_oracle__Command_31);
          }
#line 425 "declarative_oracle.m"
        }
#line 416 "declarative_oracle.m"
        break;
#line 416 "declarative_oracle.m"
    }
#line 416 "declarative_oracle.m"
  }
#line 412 "declarative_oracle.m"
}

#line 212 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__query_oracle_user_6_p_0(
#line 212 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_77,
#line 212 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__UserQuestion_7,
#line 212 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__OracleResponse_8,
#line 212 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29,
#line 212 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_30)
#line 212 "declarative_oracle.m"
{
#line 215 "declarative_oracle.m"
  {
#line 215 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 215 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__User0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 2)));
#line 215 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__UserResponse_12;
#line 215 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__User_13;
#line 215 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43;
#line 216 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 0)));
#line 216 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 1)));
#line 216 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 3)));
#line 216 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 4)));
#line 257 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_72_72;
#line 257 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_73_73;
#line 257 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_75_75;
#line 257 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_76_76;
#line 257 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_74_74;

#line 217 "declarative_oracle.m"
    {
#line 217 "declarative_oracle.m"
      mdb__declarative_user__query_user_6_p_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__UserQuestion_7, &mdb__declarative_oracle__UserResponse_12, mdb__declarative_oracle__User0_11, &mdb__declarative_oracle__User_13);
    }
#line 227 "declarative_oracle.m"
#line 227 "declarative_oracle.m"
    switch (MR_tag((MR_Word) mdb__declarative_oracle__UserResponse_12)) {
#line 227 "declarative_oracle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 227 "declarative_oracle.m"
      case (MR_Integer) 0:
#line 227 "declarative_oracle.m"
#line 227 "declarative_oracle.m"
        switch (MR_unmkbody(mdb__declarative_oracle__UserResponse_12)) {
#line 227 "declarative_oracle.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 227 "declarative_oracle.m"
          case (MR_Integer) 0:
#line 254 "declarative_oracle.m"
            {
#line 255 "declarative_oracle.m"
              *mdb__declarative_oracle__OracleResponse_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 254 "declarative_oracle.m"
              mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29;
#line 254 "declarative_oracle.m"
            }
#line 227 "declarative_oracle.m"
            break;
#line 227 "declarative_oracle.m"
          case (MR_Integer) 1:
#line 251 "declarative_oracle.m"
            {
#line 252 "declarative_oracle.m"
              *mdb__declarative_oracle__OracleResponse_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 251 "declarative_oracle.m"
              mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29;
#line 251 "declarative_oracle.m"
            }
#line 227 "declarative_oracle.m"
            break;
#line 227 "declarative_oracle.m"
        }
#line 227 "declarative_oracle.m"
        break;
#line 227 "declarative_oracle.m"
      case (MR_Integer) 1:
#line 219 "declarative_oracle.m"
        {
#line 219 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Question_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 0)));
#line 219 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Answer_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 1)));
#line 219 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Current0_16;
#line 219 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Revised0_17;
#line 219 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Revised_18;
#line 219 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Current_19;
#line 219 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_62_62;
#line 219 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_63_63;
#line 219 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_64_64;
#line 221 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_53_53;
#line 221 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_54_54;
#line 221 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_55_55;
#line 225 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_60_60;
#line 225 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_61_61;

#line 220 "declarative_oracle.m"
          {
#line 220 "declarative_oracle.m"
            MR_Word base;
#line 220 "declarative_oracle.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 220 "declarative_oracle.m"
            *mdb__declarative_oracle__OracleResponse_8 = base;
#line 220 "declarative_oracle.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_oracle__Answer_15));
#line 220 "declarative_oracle.m"
          }
#line 221 "declarative_oracle.m"
          mdb__declarative_oracle__Current0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 0)));
#line 221 "declarative_oracle.m"
          mdb__declarative_oracle__Revised0_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 1)));
#line 221 "declarative_oracle.m"
          mdb__declarative_oracle__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 2)));
#line 221 "declarative_oracle.m"
          mdb__declarative_oracle__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 3)));
#line 221 "declarative_oracle.m"
          mdb__declarative_oracle__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 4)));
#line 223 "declarative_oracle.m"
          {
#line 223 "declarative_oracle.m"
            mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(mdb__declarative_oracle__Question_14, mdb__declarative_oracle__Revised0_17, &mdb__declarative_oracle__Revised_18);
          }
#line 224 "declarative_oracle.m"
          {
#line 224 "declarative_oracle.m"
            mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(mdb__declarative_oracle__Question_14, mdb__declarative_oracle__Answer_15, mdb__declarative_oracle__Current0_16, &mdb__declarative_oracle__Current_19);
          }
#line 225 "declarative_oracle.m"
          mdb__declarative_oracle__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 0)));
#line 225 "declarative_oracle.m"
          mdb__declarative_oracle__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 1)));
#line 225 "declarative_oracle.m"
          mdb__declarative_oracle__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 2)));
#line 225 "declarative_oracle.m"
          mdb__declarative_oracle__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 3)));
#line 225 "declarative_oracle.m"
          mdb__declarative_oracle__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, (MR_Integer) 4)));
#line 226 "declarative_oracle.m"
          {
#line 226 "declarative_oracle.m"
            mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 226 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 0) = ((MR_Box) (mdb__declarative_oracle__Current_19));
#line 226 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 1) = ((MR_Box) (mdb__declarative_oracle__Revised_18));
#line 226 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 2) = ((MR_Box) (mdb__declarative_oracle__V_62_62));
#line 226 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 3) = ((MR_Box) (mdb__declarative_oracle__V_63_63));
#line 226 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, 4) = ((MR_Box) (mdb__declarative_oracle__V_64_64));
#line 226 "declarative_oracle.m"
          }
#line 219 "declarative_oracle.m"
        }
#line 227 "declarative_oracle.m"
        break;
#line 227 "declarative_oracle.m"
      case (MR_Integer) 2:
#line 228 "declarative_oracle.m"
        {
#line 228 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Atom_20;
#line 228 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__V_38_38;
#line 228 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_40_40;
#line 228 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__V_41_41;
#line 228 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Question_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 0)));
#line 230 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_70_70;

#line 229 "declarative_oracle.m"
          {
#line 229 "declarative_oracle.m"
            mdb__declarative_oracle__Atom_20 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_45);
          }
#line 230 "declarative_oracle.m"
          mdb__declarative_oracle__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_20, (MR_Integer) 0)));
#line 230 "declarative_oracle.m"
          mdb__declarative_oracle__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_20, (MR_Integer) 1)));
#line 230 "declarative_oracle.m"
          {
#line 230 "declarative_oracle.m"
            mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(mdb__declarative_oracle__V_38_38, mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, &mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43);
          }
#line 232 "declarative_oracle.m"
          {
#line 232 "declarative_oracle.m"
            mdb__declarative_oracle__V_41_41 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_45);
          }
#line 232 "declarative_oracle.m"
          {
#line 232 "declarative_oracle.m"
            mdb__declarative_oracle__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 232 "declarative_oracle.m"
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_40_40, 0) = mdb__declarative_oracle__V_41_41;
#line 232 "declarative_oracle.m"
          }
#line 231 "declarative_oracle.m"
          {
#line 231 "declarative_oracle.m"
            MR_Word base;
#line 231 "declarative_oracle.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 231 "declarative_oracle.m"
            *mdb__declarative_oracle__OracleResponse_8 = base;
#line 231 "declarative_oracle.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_40_40));
#line 231 "declarative_oracle.m"
          }
#line 228 "declarative_oracle.m"
        }
#line 227 "declarative_oracle.m"
        break;
#line 227 "declarative_oracle.m"
      case (MR_Integer) 3:
#line 227 "declarative_oracle.m"
#line 227 "declarative_oracle.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 0)))) {
#line 227 "declarative_oracle.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 227 "declarative_oracle.m"
          case (MR_Integer) 0:
#line 234 "declarative_oracle.m"
            {
#line 234 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__ProcLabel_21;
#line 234 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Module_22;
#line 234 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__V_34_34;
#line 234 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_36_36;
#line 234 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__V_37_37;
#line 234 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Question_46 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 1)));
#line 234 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Atom_47;
#line 236 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_71_71;
#line 237 "declarative_oracle.m"
              MR_String mdb__declarative_oracle__V_23_23;
#line 237 "declarative_oracle.m"
              MR_Integer mdb__declarative_oracle__V_24_24;
#line 237 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_25_25;

#line 235 "declarative_oracle.m"
              {
#line 235 "declarative_oracle.m"
                mdb__declarative_oracle__Atom_47 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_46);
              }
#line 236 "declarative_oracle.m"
              mdb__declarative_oracle__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_47, (MR_Integer) 0)));
#line 236 "declarative_oracle.m"
              mdb__declarative_oracle__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_47, (MR_Integer) 1)));
#line 236 "declarative_oracle.m"
              {
#line 236 "declarative_oracle.m"
                mdb__declarative_oracle__ProcLabel_21 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_oracle__V_34_34);
              }
#line 237 "declarative_oracle.m"
              {
#line 237 "declarative_oracle.m"
                mdb__declarative_execution__get_pred_attributes_5_p_0(mdb__declarative_oracle__ProcLabel_21, &mdb__declarative_oracle__Module_22, &mdb__declarative_oracle__V_23_23, &mdb__declarative_oracle__V_24_24, &mdb__declarative_oracle__V_25_25);
              }
#line 238 "declarative_oracle.m"
              {
#line 238 "declarative_oracle.m"
                mdb__declarative_oracle__add_trusted_module_3_p_0(mdb__declarative_oracle__Module_22, mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29, &mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43);
              }
#line 240 "declarative_oracle.m"
              {
#line 240 "declarative_oracle.m"
                mdb__declarative_oracle__V_37_37 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_77, mdb__declarative_oracle__Question_46);
              }
#line 240 "declarative_oracle.m"
              {
#line 240 "declarative_oracle.m"
                mdb__declarative_oracle__V_36_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 240 "declarative_oracle.m"
                MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_36_36, 0) = mdb__declarative_oracle__V_37_37;
#line 240 "declarative_oracle.m"
              }
#line 239 "declarative_oracle.m"
              {
#line 239 "declarative_oracle.m"
                MR_Word base;
#line 239 "declarative_oracle.m"
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 239 "declarative_oracle.m"
                *mdb__declarative_oracle__OracleResponse_8 = base;
#line 239 "declarative_oracle.m"
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_36_36));
#line 239 "declarative_oracle.m"
              }
#line 234 "declarative_oracle.m"
            }
#line 227 "declarative_oracle.m"
            break;
#line 227 "declarative_oracle.m"
          case (MR_Integer) 1:
#line 242 "declarative_oracle.m"
            {
#line 242 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__OutStream_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 1)));

#line 243 "declarative_oracle.m"
              {
#line 243 "declarative_oracle.m"
                MR_Word base;
#line 243 "declarative_oracle.m"
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 243 "declarative_oracle.m"
                *mdb__declarative_oracle__OracleResponse_8 = base;
#line 243 "declarative_oracle.m"
                MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_oracle__OutStream_26));
#line 243 "declarative_oracle.m"
              }
#line 242 "declarative_oracle.m"
              mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29;
#line 242 "declarative_oracle.m"
            }
#line 227 "declarative_oracle.m"
            break;
#line 227 "declarative_oracle.m"
          case (MR_Integer) 2:
#line 245 "declarative_oracle.m"
            {
#line 245 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Mode_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 1)));

#line 246 "declarative_oracle.m"
              {
#line 246 "declarative_oracle.m"
                MR_Word base;
#line 246 "declarative_oracle.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 246 "declarative_oracle.m"
                *mdb__declarative_oracle__OracleResponse_8 = base;
#line 246 "declarative_oracle.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 246 "declarative_oracle.m"
                MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_oracle__Mode_27));
#line 246 "declarative_oracle.m"
              }
#line 245 "declarative_oracle.m"
              mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29;
#line 245 "declarative_oracle.m"
            }
#line 227 "declarative_oracle.m"
            break;
#line 227 "declarative_oracle.m"
          case (MR_Integer) 3:
#line 248 "declarative_oracle.m"
            {
#line 248 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__Node_28 = (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__UserResponse_12, (MR_Integer) 1));

#line 249 "declarative_oracle.m"
              {
#line 249 "declarative_oracle.m"
                MR_Word base;
#line 249 "declarative_oracle.m"
                base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 249 "declarative_oracle.m"
                *mdb__declarative_oracle__OracleResponse_8 = base;
#line 249 "declarative_oracle.m"
                MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 249 "declarative_oracle.m"
                MR_hl_field(MR_mktag(3), base, 1) = mdb__declarative_oracle__Node_28;
#line 249 "declarative_oracle.m"
              }
#line 248 "declarative_oracle.m"
              mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_29;
#line 248 "declarative_oracle.m"
            }
#line 227 "declarative_oracle.m"
            break;
#line 227 "declarative_oracle.m"
        }
#line 227 "declarative_oracle.m"
        break;
#line 227 "declarative_oracle.m"
    }
#line 257 "declarative_oracle.m"
    mdb__declarative_oracle__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 0)));
#line 257 "declarative_oracle.m"
    mdb__declarative_oracle__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 1)));
#line 257 "declarative_oracle.m"
    mdb__declarative_oracle__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 2)));
#line 257 "declarative_oracle.m"
    mdb__declarative_oracle__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 3)));
#line 257 "declarative_oracle.m"
    mdb__declarative_oracle__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_43_43, (MR_Integer) 4)));
#line 257 "declarative_oracle.m"
    {
#line 257 "declarative_oracle.m"
      MR_Word base;
#line 257 "declarative_oracle.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 257 "declarative_oracle.m"
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_30 = base;
#line 257 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_72_72));
#line 257 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_73_73));
#line 257 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__User_13));
#line 257 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_75_75));
#line 257 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_76_76));
#line 257 "declarative_oracle.m"
    }
#line 215 "declarative_oracle.m"
  }
#line 212 "declarative_oracle.m"
}

#line 167 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__reset_oracle_knowledge_base_2_p_0(
#line 167 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5,
#line 167 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_6)
#line 167 "declarative_oracle.m"
{
#line 730 "declarative_oracle.m"
  {
#line 730 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__TypeCtorInfo_6_28 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__TypeCtorInfo_7_29;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__EmptyKB_4;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_8_8;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_11_11;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_12_12;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_13_13;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_16_16;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_17_17;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_18_18;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__G_24;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__C_25;
#line 730 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__X_26;
#line 732 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_10_10;

#line 496 "declarative_oracle.m"
    {
#line 496 "declarative_oracle.m"
      mercury__map__init_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_oracle__TypeCtorInfo_6_28, &mdb__declarative_oracle__G_24);
    }
#line 6424 "mdb.declarative_oracle.c"
    mdb__declarative_oracle__TypeCtorInfo_7_29 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0;
#line 497 "declarative_oracle.m"
    {
#line 497 "declarative_oracle.m"
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_29, mdb__declarative_oracle__TypeCtorInfo_6_28, &mdb__declarative_oracle__C_25);
    }
#line 498 "declarative_oracle.m"
    {
#line 498 "declarative_oracle.m"
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_29, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, &mdb__declarative_oracle__X_26);
    }
#line 495 "declarative_oracle.m"
    {
#line 495 "declarative_oracle.m"
      mdb__declarative_oracle__EmptyKB_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 495 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__EmptyKB_4, 0) = ((MR_Box) (mdb__declarative_oracle__G_24));
#line 495 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__EmptyKB_4, 1) = ((MR_Box) (mdb__declarative_oracle__C_25));
#line 495 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__EmptyKB_4, 2) = ((MR_Box) (mdb__declarative_oracle__X_26));
#line 495 "declarative_oracle.m"
    }
#line 732 "declarative_oracle.m"
    mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 0)));
#line 732 "declarative_oracle.m"
    mdb__declarative_oracle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 1)));
#line 732 "declarative_oracle.m"
    mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 2)));
#line 732 "declarative_oracle.m"
    mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 3)));
#line 732 "declarative_oracle.m"
    mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_5, (MR_Integer) 4)));
#line 732 "declarative_oracle.m"
    mdb__declarative_oracle__V_16_16 = mdb__declarative_oracle__V_11_11;
#line 732 "declarative_oracle.m"
    mdb__declarative_oracle__V_17_17 = mdb__declarative_oracle__V_12_12;
#line 732 "declarative_oracle.m"
    mdb__declarative_oracle__V_18_18 = mdb__declarative_oracle__V_13_13;
#line 733 "declarative_oracle.m"
    {
#line 733 "declarative_oracle.m"
      MR_Word base;
#line 733 "declarative_oracle.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 733 "declarative_oracle.m"
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_6 = base;
#line 733 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__EmptyKB_4));
#line 733 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_8_8));
#line 733 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_16_16));
#line 733 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_17_17));
#line 733 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_18_18));
#line 733 "declarative_oracle.m"
    }
#line 730 "declarative_oracle.m"
  }
#line 167 "declarative_oracle.m"
}

#line 162 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__set_oracle_testing_flag_3_p_0(
#line 162 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Testing_4,
#line 162 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8,
#line 162 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_9)
#line 162 "declarative_oracle.m"
{
#line 723 "declarative_oracle.m"
  {
#line 723 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 723 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__User0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 2)));
#line 723 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__User_7;
#line 724 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 0)));
#line 724 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 1)));
#line 724 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 3)));
#line 724 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 4)));
#line 726 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_15_15;
#line 726 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_16_16;
#line 726 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_18_18;
#line 726 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_19_19;
#line 726 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_17_17;

#line 725 "declarative_oracle.m"
    {
#line 725 "declarative_oracle.m"
      mdb__declarative_user__set_user_testing_flag_3_p_0(mdb__declarative_oracle__Testing_4, mdb__declarative_oracle__User0_6, &mdb__declarative_oracle__User_7);
    }
#line 726 "declarative_oracle.m"
    mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 0)));
#line 726 "declarative_oracle.m"
    mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 1)));
#line 726 "declarative_oracle.m"
    mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 2)));
#line 726 "declarative_oracle.m"
    mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 3)));
#line 726 "declarative_oracle.m"
    mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 4)));
#line 726 "declarative_oracle.m"
    {
#line 726 "declarative_oracle.m"
      MR_Word base;
#line 726 "declarative_oracle.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 726 "declarative_oracle.m"
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_9 = base;
#line 726 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_15_15));
#line 726 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_16_16));
#line 726 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__User_7));
#line 726 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_18_18));
#line 726 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_19_19));
#line 726 "declarative_oracle.m"
    }
#line 723 "declarative_oracle.m"
  }
#line 162 "declarative_oracle.m"
}

#line 158 "declarative_oracle.m"
MR_Word MR_CALL 
mdb__declarative_oracle__get_user_input_stream_1_f_0(
#line 158 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Oracle_3)
#line 158 "declarative_oracle.m"
{
#line 720 "declarative_oracle.m"
  {
#line 720 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 720 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__HeadVar__2_2;
#line 720 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 2)));
#line 721 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 0)));
#line 721 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 1)));
#line 721 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 3)));
#line 721 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 4)));

#line 721 "declarative_oracle.m"
    {
#line 721 "declarative_oracle.m"
      return mdb__declarative_oracle__HeadVar__2_2 = mdb__declarative_user__get_user_input_stream_1_f_0(mdb__declarative_oracle__V_4_4);
    }
#line 720 "declarative_oracle.m"
    return mdb__declarative_oracle__HeadVar__2_2;
#line 720 "declarative_oracle.m"
  }
#line 158 "declarative_oracle.m"
}

#line 154 "declarative_oracle.m"
MR_Word MR_CALL 
mdb__declarative_oracle__get_user_output_stream_1_f_0(
#line 154 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Oracle_3)
#line 154 "declarative_oracle.m"
{
#line 717 "declarative_oracle.m"
  {
#line 717 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 717 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__HeadVar__2_2;
#line 717 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 2)));
#line 718 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 0)));
#line 718 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 1)));
#line 718 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 3)));
#line 718 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 4)));

#line 718 "declarative_oracle.m"
    {
#line 718 "declarative_oracle.m"
      return mdb__declarative_oracle__HeadVar__2_2 = mdb__declarative_user__get_user_output_stream_1_f_0(mdb__declarative_oracle__V_4_4);
    }
#line 717 "declarative_oracle.m"
    return mdb__declarative_oracle__HeadVar__2_2;
#line 717 "declarative_oracle.m"
  }
#line 154 "declarative_oracle.m"
}

#line 149 "declarative_oracle.m"
MR_bool MR_CALL 
mdb__declarative_oracle__answer_known_3_p_0(
#line 149 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_16,
#line 149 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Oracle_4,
#line 149 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Question_5,
#line 149 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__Answer_6)
#line 149 "declarative_oracle.m"
{
#line 524 "declarative_oracle.m"
  {
#line 524 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 524 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Atom_7;
#line 526 "declarative_oracle.m"
    MR_Box mdb__declarative_oracle__V_8_8;
#line 526 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Trusted_19;
#line 526 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__ProcLabel_20;
#line 526 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_11_11;
#line 539 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_43_43;
#line 539 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_44_44;
#line 539 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_45_45;
#line 539 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_46_46;

#line 525 "declarative_oracle.m"
    {
#line 525 "declarative_oracle.m"
      mdb__declarative_oracle__Atom_7 = mdb__declarative_debugger__get_decl_question_atom_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_16, mdb__declarative_oracle__Question_5);
    }
#line 526 "declarative_oracle.m"
    mdb__declarative_oracle__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_7, (MR_Integer) 0)));
#line 526 "declarative_oracle.m"
    mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Atom_7, (MR_Integer) 1)));
#line 539 "declarative_oracle.m"
    mdb__declarative_oracle__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 0)));
#line 539 "declarative_oracle.m"
    mdb__declarative_oracle__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 1)));
#line 539 "declarative_oracle.m"
    mdb__declarative_oracle__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 2)));
#line 539 "declarative_oracle.m"
    mdb__declarative_oracle__Trusted_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 3)));
#line 539 "declarative_oracle.m"
    mdb__declarative_oracle__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 4)));
#line 540 "declarative_oracle.m"
    {
#line 540 "declarative_oracle.m"
      mdb__declarative_oracle__ProcLabel_20 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_oracle__V_8_8);
    }
#line 560 "declarative_oracle.m"
    if (((MR_tag((MR_Word) mdb__declarative_oracle__ProcLabel_20)) == (MR_mktag((MR_Integer) 0))))
#line 542 "declarative_oracle.m"
      {
#line 542 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__Module_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 0)));
#line 542 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__PredOrFunc_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 1)));
#line 542 "declarative_oracle.m"
        MR_String mdb__declarative_oracle__Name_24 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 3)));
#line 542 "declarative_oracle.m"
        MR_Integer mdb__declarative_oracle__Arity_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 4)));
#line 542 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 2)));
#line 542 "declarative_oracle.m"
        MR_Integer mdb__declarative_oracle__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_20, (MR_Integer) 5)));

#line 551 "declarative_oracle.m"
#line 551 "declarative_oracle.m"
        switch (mdb__declarative_oracle__PredOrFunc_22) {
#line 551 "declarative_oracle.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 551 "declarative_oracle.m"
          case (MR_Integer) 1:
#line 557 "declarative_oracle.m"
            {
#line 557 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_39_39;
#line 558 "declarative_oracle.m"
              MR_Integer mdb__declarative_oracle__V_32_32;
#line 558 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__conv0_V_32_32;

#line 558 "declarative_oracle.m"
              {
#line 558 "declarative_oracle.m"
                mdb__declarative_oracle__V_39_39 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 558 "declarative_oracle.m"
                MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_39_39, 0) = ((MR_Box) (mdb__declarative_oracle__Module_21));
#line 558 "declarative_oracle.m"
                MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_39_39, 1) = ((MR_Box) (mdb__declarative_oracle__Name_24));
#line 558 "declarative_oracle.m"
                MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_39_39, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_25));
#line 558 "declarative_oracle.m"
              }
#line 558 "declarative_oracle.m"
              {
#line 558 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (mdb__declarative_oracle__V_39_39)), &mdb__declarative_oracle__conv0_V_32_32);
              }
#line 558 "declarative_oracle.m"
              if (mdb__declarative_oracle__succeeded)
#line 558 "declarative_oracle.m"
                {
#line 558 "declarative_oracle.m"
                  mdb__declarative_oracle__V_32_32 = ((MR_Integer) mdb__declarative_oracle__conv0_V_32_32);
#line 558 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = MR_TRUE;
#line 558 "declarative_oracle.m"
                }
#line 557 "declarative_oracle.m"
            }
#line 551 "declarative_oracle.m"
            break;
#line 551 "declarative_oracle.m"
          case (MR_Integer) 0:
#line 554 "declarative_oracle.m"
            {
#line 554 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_40_40;
#line 555 "declarative_oracle.m"
              MR_Integer mdb__declarative_oracle__V_31_31;
#line 555 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__conv1_V_31_31;

#line 555 "declarative_oracle.m"
              {
#line 555 "declarative_oracle.m"
                mdb__declarative_oracle__V_40_40 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 555 "declarative_oracle.m"
                MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_40_40, 0) = ((MR_Box) (mdb__declarative_oracle__Module_21));
#line 555 "declarative_oracle.m"
                MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_40_40, 1) = ((MR_Box) (mdb__declarative_oracle__Name_24));
#line 555 "declarative_oracle.m"
                MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_40_40, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_25));
#line 555 "declarative_oracle.m"
              }
#line 555 "declarative_oracle.m"
              {
#line 555 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (mdb__declarative_oracle__V_40_40)), &mdb__declarative_oracle__conv1_V_31_31);
              }
#line 555 "declarative_oracle.m"
              if (mdb__declarative_oracle__succeeded)
#line 555 "declarative_oracle.m"
                {
#line 555 "declarative_oracle.m"
                  mdb__declarative_oracle__V_31_31 = ((MR_Integer) mdb__declarative_oracle__conv1_V_31_31);
#line 555 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = MR_TRUE;
#line 555 "declarative_oracle.m"
                }
#line 554 "declarative_oracle.m"
            }
#line 551 "declarative_oracle.m"
            break;
#line 551 "declarative_oracle.m"
        }
#line 551 "declarative_oracle.m"
        if (!(mdb__declarative_oracle__succeeded))
#line 551 "declarative_oracle.m"
          {
#line 552 "declarative_oracle.m"
            {
#line 552 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_41_41;
#line 552 "declarative_oracle.m"
              MR_Integer mdb__declarative_oracle__V_30_30;
#line 552 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__conv2_V_30_30;

#line 552 "declarative_oracle.m"
              {
#line 552 "declarative_oracle.m"
                mdb__declarative_oracle__V_41_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 552 "declarative_oracle.m"
                MR_hl_field(MR_mktag(1), mdb__declarative_oracle__V_41_41, 0) = ((MR_Box) (mdb__declarative_oracle__Module_21));
#line 552 "declarative_oracle.m"
              }
#line 552 "declarative_oracle.m"
              {
#line 552 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (mdb__declarative_oracle__V_41_41)), &mdb__declarative_oracle__conv2_V_30_30);
              }
#line 552 "declarative_oracle.m"
              if (mdb__declarative_oracle__succeeded)
#line 552 "declarative_oracle.m"
                {
#line 552 "declarative_oracle.m"
                  mdb__declarative_oracle__V_30_30 = ((MR_Integer) mdb__declarative_oracle__conv2_V_30_30);
#line 552 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = MR_TRUE;
#line 552 "declarative_oracle.m"
                }
#line 552 "declarative_oracle.m"
            }
#line 551 "declarative_oracle.m"
            if (!(mdb__declarative_oracle__succeeded))
#line 544 "declarative_oracle.m"
              {
#line 544 "declarative_oracle.m"
                MR_String mdb__declarative_oracle__ModuleNameStr_29;
#line 544 "declarative_oracle.m"
                MR_Integer mdb__declarative_oracle__V_27_27;
#line 544 "declarative_oracle.m"
                MR_Box mdb__declarative_oracle__conv3_V_27_27;

#line 544 "declarative_oracle.m"
                {
#line 544 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__Trusted_19, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdb__declarative_oracle__conv3_V_27_27);
                }
#line 544 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 544 "declarative_oracle.m"
                  {
#line 544 "declarative_oracle.m"
                    mdb__declarative_oracle__V_27_27 = ((MR_Integer) mdb__declarative_oracle__conv3_V_27_27);
#line 544 "declarative_oracle.m"
                    mdb__declarative_oracle__succeeded = MR_TRUE;
#line 544 "declarative_oracle.m"
                  }
#line 544 "declarative_oracle.m"
                if (mdb__declarative_oracle__succeeded)
#line 544 "declarative_oracle.m"
                  {
#line 547 "declarative_oracle.m"
                    if (((MR_tag((MR_Word) mdb__declarative_oracle__Module_21)) == (MR_mktag((MR_Integer) 1))))
#line 546 "declarative_oracle.m"
                      {
#line 546 "declarative_oracle.m"
                        MR_Word mdb__declarative_oracle__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Module_21, (MR_Integer) 0)));

#line 546 "declarative_oracle.m"
                        mdb__declarative_oracle__ModuleNameStr_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Module_21, (MR_Integer) 1)));
#line 546 "declarative_oracle.m"
                      }
#line 547 "declarative_oracle.m"
                    else
#line 548 "declarative_oracle.m"
                      mdb__declarative_oracle__ModuleNameStr_29 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Module_21, (MR_Integer) 0)));
#line 550 "declarative_oracle.m"
                    {
#line 550 "declarative_oracle.m"
                      mdb__declarative_oracle__succeeded = mercury__library__mercury_std_library_module_1_p_0(mdb__declarative_oracle__ModuleNameStr_29);
                    }
#line 544 "declarative_oracle.m"
                  }
#line 544 "declarative_oracle.m"
              }
#line 551 "declarative_oracle.m"
          }
#line 542 "declarative_oracle.m"
      }
#line 560 "declarative_oracle.m"
    else
#line 561 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = MR_TRUE;
#line 532 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 531 "declarative_oracle.m"
      {
#line 531 "declarative_oracle.m"
        MR_Box mdb__declarative_oracle__V_9_9;

#line 531 "declarative_oracle.m"
        {
#line 531 "declarative_oracle.m"
          mdb__declarative_oracle__V_9_9 = mdb__declarative_debugger__get_decl_question_node_1_f_0(mdb__declarative_oracle__TypeInfo_for_T_16, mdb__declarative_oracle__Question_5);
        }
#line 531 "declarative_oracle.m"
        {
#line 531 "declarative_oracle.m"
          MR_Word base;
#line 531 "declarative_oracle.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 531 "declarative_oracle.m"
          *mdb__declarative_oracle__Answer_6 = base;
#line 531 "declarative_oracle.m"
          MR_hl_field(MR_mktag(2), base, 0) = mdb__declarative_oracle__V_9_9;
#line 531 "declarative_oracle.m"
        }
#line 531 "declarative_oracle.m"
        mdb__declarative_oracle__succeeded = MR_TRUE;
#line 531 "declarative_oracle.m"
      }
#line 532 "declarative_oracle.m"
    else
#line 533 "declarative_oracle.m"
      {
#line 533 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 0)));
#line 533 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 1)));
#line 533 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 2)));
#line 533 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 3)));
#line 533 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_4, (MR_Integer) 4)));

#line 533 "declarative_oracle.m"
        {
#line 533 "declarative_oracle.m"
          return mdb__declarative_oracle__succeeded = mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_113_117_101_114_121_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(mdb__declarative_oracle__V_10_10, mdb__declarative_oracle__Question_5, mdb__declarative_oracle__Answer_6);
        }
#line 533 "declarative_oracle.m"
      }
#line 524 "declarative_oracle.m"
    return mdb__declarative_oracle__succeeded;
#line 524 "declarative_oracle.m"
  }
#line 149 "declarative_oracle.m"
}

#line 143 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__set_browser_state_3_p_0(
#line 143 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Browser_4,
#line 143 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7,
#line 143 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_8)
#line 143 "declarative_oracle.m"
{
#line 713 "declarative_oracle.m"
  {
#line 713 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 713 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__User_6;
#line 713 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 2)));
#line 714 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 0)));
#line 714 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 1)));
#line 714 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 3)));
#line 714 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 4)));
#line 715 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_15_15;
#line 715 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_16_16;
#line 715 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_18_18;
#line 715 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_19_19;
#line 715 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_17_17;

#line 714 "declarative_oracle.m"
    {
#line 714 "declarative_oracle.m"
      mdb__declarative_user__set_browser_state_3_p_0(mdb__declarative_oracle__Browser_4, mdb__declarative_oracle__V_9_9, &mdb__declarative_oracle__User_6);
    }
#line 715 "declarative_oracle.m"
    mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 0)));
#line 715 "declarative_oracle.m"
    mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 1)));
#line 715 "declarative_oracle.m"
    mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 2)));
#line 715 "declarative_oracle.m"
    mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 3)));
#line 715 "declarative_oracle.m"
    mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 4)));
#line 715 "declarative_oracle.m"
    {
#line 715 "declarative_oracle.m"
      MR_Word base;
#line 715 "declarative_oracle.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 715 "declarative_oracle.m"
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_8 = base;
#line 715 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_15_15));
#line 715 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_16_16));
#line 715 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__User_6));
#line 715 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_18_18));
#line 715 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_19_19));
#line 715 "declarative_oracle.m"
    }
#line 713 "declarative_oracle.m"
  }
#line 143 "declarative_oracle.m"
}

#line 138 "declarative_oracle.m"
MR_Word MR_CALL 
mdb__declarative_oracle__get_browser_state_1_f_0(
#line 138 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Oracle_3)
#line 138 "declarative_oracle.m"
{
#line 710 "declarative_oracle.m"
  {
#line 710 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 710 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__HeadVar__2_2;
#line 710 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 2)));
#line 711 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 0)));
#line 711 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 1)));
#line 711 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 3)));
#line 711 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_3, (MR_Integer) 4)));

#line 711 "declarative_oracle.m"
    {
#line 711 "declarative_oracle.m"
      return mdb__declarative_oracle__HeadVar__2_2 = mdb__declarative_user__get_browser_state_1_f_0(mdb__declarative_oracle__V_4_4);
    }
#line 710 "declarative_oracle.m"
    return mdb__declarative_oracle__HeadVar__2_2;
#line 710 "declarative_oracle.m"
  }
#line 138 "declarative_oracle.m"
}

#line 133 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__update_revised_knowledge_base_3_p_0(
#line 133 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Oracle1_4,
#line 133 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Oracle2_5,
#line 133 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__Oracle3_6)
#line 133 "declarative_oracle.m"
{
#line 285 "declarative_oracle.m"
  {
#line 285 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 285 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 0)));
#line 286 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 1)));
#line 286 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 2)));
#line 286 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 3)));
#line 286 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle2_5, (MR_Integer) 4)));
#line 286 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 0)));
#line 286 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 2)));
#line 286 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 3)));
#line 286 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 4)));
#line 286 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_4, (MR_Integer) 1)));

#line 286 "declarative_oracle.m"
    {
#line 286 "declarative_oracle.m"
      MR_Word base;
#line 286 "declarative_oracle.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 286 "declarative_oracle.m"
      *mdb__declarative_oracle__Oracle3_6 = base;
#line 286 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_12_12));
#line 286 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_7_7));
#line 286 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_14_14));
#line 286 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_15_15));
#line 286 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_16_16));
#line 286 "declarative_oracle.m"
    }
#line 285 "declarative_oracle.m"
  }
#line 133 "declarative_oracle.m"
}

#line 125 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__revise_oracle_3_p_0(
#line 125 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_33,
#line 125 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Question_4,
#line 125 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11,
#line 125 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_12)
#line 125 "declarative_oracle.m"
{
#line 273 "declarative_oracle.m"
  {
#line 273 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 273 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Current0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
#line 274 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
#line 274 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
#line 274 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
#line 274 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
#line 281 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Answer_7;

#line 567 "declarative_oracle.m"
#line 567 "declarative_oracle.m"
    switch (MR_tag((MR_Word) mdb__declarative_oracle__Question_4)) {
#line 567 "declarative_oracle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 567 "declarative_oracle.m"
      case (MR_Integer) 0:
#line 567 "declarative_oracle.m"
        {
#line 567 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__Node_37 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
#line 567 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Atom_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
#line 567 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Map_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 0)));
#line 567 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Truth_41;
#line 568 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
#line 507 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 1)));
#line 507 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 2)));
#line 570 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__conv2_Truth_41;

#line 570 "declarative_oracle.m"
          {
#line 570 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__Map_40, ((MR_Box) (mdb__declarative_oracle__Atom_39)), &mdb__declarative_oracle__conv2_Truth_41);
          }
#line 570 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 570 "declarative_oracle.m"
            {
#line 570 "declarative_oracle.m"
              mdb__declarative_oracle__Truth_41 = ((MR_Word) mdb__declarative_oracle__conv2_Truth_41);
#line 570 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 570 "declarative_oracle.m"
            }
#line 567 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 567 "declarative_oracle.m"
            {
#line 571 "declarative_oracle.m"
              {
#line 571 "declarative_oracle.m"
                mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 571 "declarative_oracle.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_37;
#line 571 "declarative_oracle.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_41));
#line 571 "declarative_oracle.m"
              }
#line 571 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 567 "declarative_oracle.m"
            }
#line 567 "declarative_oracle.m"
        }
#line 567 "declarative_oracle.m"
        break;
#line 567 "declarative_oracle.m"
      case (MR_Integer) 1:
#line 573 "declarative_oracle.m"
        {
#line 573 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__Node_45 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
#line 573 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Call_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
#line 573 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__CMap_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 1)));
#line 573 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Truth_49;
#line 574 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle___Solns_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
#line 508 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 0)));
#line 508 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 2)));
#line 576 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__conv0_Truth_49;

#line 576 "declarative_oracle.m"
          {
#line 576 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__CMap_48, ((MR_Box) (mdb__declarative_oracle__Call_46)), &mdb__declarative_oracle__conv0_Truth_49);
          }
#line 576 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 576 "declarative_oracle.m"
            {
#line 576 "declarative_oracle.m"
              mdb__declarative_oracle__Truth_49 = ((MR_Word) mdb__declarative_oracle__conv0_Truth_49);
#line 576 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 576 "declarative_oracle.m"
            }
#line 573 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 573 "declarative_oracle.m"
            {
#line 577 "declarative_oracle.m"
              {
#line 577 "declarative_oracle.m"
                mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "declarative_oracle.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_45;
#line 577 "declarative_oracle.m"
                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_49));
#line 577 "declarative_oracle.m"
              }
#line 577 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 573 "declarative_oracle.m"
            }
#line 573 "declarative_oracle.m"
        }
#line 567 "declarative_oracle.m"
        break;
#line 567 "declarative_oracle.m"
      case (MR_Integer) 2:
#line 579 "declarative_oracle.m"
        {
#line 579 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__Node_53 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 0));
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Call_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 1)));
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Exception_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_4, (MR_Integer) 2)));
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__XMap_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 2)));
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__X_57;
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Possible_58;
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Impossible_59;
#line 579 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__Inadmissible_60;
#line 509 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 0)));
#line 509 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current0_6, (MR_Integer) 1)));
#line 582 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__conv1_X_57;
#line 584 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__TypeCtorInfo_41_70;

#line 582 "declarative_oracle.m"
          {
#line 582 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__XMap_56, ((MR_Box) (mdb__declarative_oracle__Call_54)), &mdb__declarative_oracle__conv1_X_57);
          }
#line 582 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 582 "declarative_oracle.m"
            {
#line 582 "declarative_oracle.m"
              mdb__declarative_oracle__X_57 = ((MR_Word) mdb__declarative_oracle__conv1_X_57);
#line 582 "declarative_oracle.m"
              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 582 "declarative_oracle.m"
            }
#line 579 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 579 "declarative_oracle.m"
            {
#line 583 "declarative_oracle.m"
              mdb__declarative_oracle__Possible_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_57, (MR_Integer) 0)));
#line 583 "declarative_oracle.m"
              mdb__declarative_oracle__Impossible_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_57, (MR_Integer) 1)));
#line 583 "declarative_oracle.m"
              mdb__declarative_oracle__Inadmissible_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_57, (MR_Integer) 2)));
#line 7344 "mdb.declarative_oracle.c"
              mdb__declarative_oracle__TypeCtorInfo_41_70 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
#line 584 "declarative_oracle.m"
              {
#line 584 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0(mdb__declarative_oracle__TypeCtorInfo_41_70, ((MR_Box) (mdb__declarative_oracle__Exception_55)), mdb__declarative_oracle__Possible_58);
              }
#line 586 "declarative_oracle.m"
              if (mdb__declarative_oracle__succeeded)
#line 585 "declarative_oracle.m"
                {
#line 585 "declarative_oracle.m"
                  {
#line 585 "declarative_oracle.m"
                    mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "declarative_oracle.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_53;
#line 585 "declarative_oracle.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) ((MR_Integer) 0));
#line 585 "declarative_oracle.m"
                  }
#line 585 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = MR_TRUE;
#line 585 "declarative_oracle.m"
                }
#line 586 "declarative_oracle.m"
              else
#line 588 "declarative_oracle.m"
                {
#line 586 "declarative_oracle.m"
                  {
#line 586 "declarative_oracle.m"
                    mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_55)), mdb__declarative_oracle__Impossible_59);
                  }
#line 588 "declarative_oracle.m"
                  if (mdb__declarative_oracle__succeeded)
#line 587 "declarative_oracle.m"
                    {
#line 587 "declarative_oracle.m"
                      {
#line 587 "declarative_oracle.m"
                        mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_53;
#line 587 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) ((MR_Integer) 1));
#line 587 "declarative_oracle.m"
                      }
#line 587 "declarative_oracle.m"
                      mdb__declarative_oracle__succeeded = MR_TRUE;
#line 587 "declarative_oracle.m"
                    }
#line 588 "declarative_oracle.m"
                  else
#line 589 "declarative_oracle.m"
                    {
#line 589 "declarative_oracle.m"
                      MR_Word mdb__declarative_oracle__V_63_63;

#line 589 "declarative_oracle.m"
                      {
#line 589 "declarative_oracle.m"
                        mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_55)), mdb__declarative_oracle__Inadmissible_60);
                      }
#line 589 "declarative_oracle.m"
                      if (mdb__declarative_oracle__succeeded)
#line 589 "declarative_oracle.m"
                        {
#line 590 "declarative_oracle.m"
                          mdb__declarative_oracle__V_63_63 = (MR_Integer) 2;
#line 590 "declarative_oracle.m"
                          {
#line 590 "declarative_oracle.m"
                            mdb__declarative_oracle__Answer_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "declarative_oracle.m"
                            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 0) = mdb__declarative_oracle__Node_53;
#line 590 "declarative_oracle.m"
                            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_7, 1) = ((MR_Box) (mdb__declarative_oracle__V_63_63));
#line 590 "declarative_oracle.m"
                          }
#line 590 "declarative_oracle.m"
                          mdb__declarative_oracle__succeeded = MR_TRUE;
#line 589 "declarative_oracle.m"
                        }
#line 589 "declarative_oracle.m"
                    }
#line 588 "declarative_oracle.m"
                }
#line 579 "declarative_oracle.m"
            }
#line 579 "declarative_oracle.m"
        }
#line 567 "declarative_oracle.m"
        break;
#line 567 "declarative_oracle.m"
    }
#line 281 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 276 "declarative_oracle.m"
      {
#line 276 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__Current_8;
#line 276 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__Revised0_9;
#line 276 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__Revised_10;
#line 276 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_25_25;
#line 276 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_26_26;
#line 276 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_27_27;
#line 277 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_19_19;
#line 277 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_20_20;
#line 277 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_21_21;
#line 277 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_22_22;
#line 279 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_23_23;
#line 279 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_24_24;

#line 276 "declarative_oracle.m"
        {
#line 276 "declarative_oracle.m"
          mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_116_114_97_99_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_3_p_0(mdb__declarative_oracle__Question_4, mdb__declarative_oracle__Current0_6, &mdb__declarative_oracle__Current_8);
        }
#line 277 "declarative_oracle.m"
        mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
#line 277 "declarative_oracle.m"
        mdb__declarative_oracle__Revised0_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
#line 277 "declarative_oracle.m"
        mdb__declarative_oracle__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
#line 277 "declarative_oracle.m"
        mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
#line 277 "declarative_oracle.m"
        mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
#line 278 "declarative_oracle.m"
        {
#line 278 "declarative_oracle.m"
          mdb__declarative_oracle__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_115_115_101_114_116_95_111_114_97_99_108_101_95_107_98_95_95_91_49_93_95_48_4_p_0(mdb__declarative_oracle__Question_4, mdb__declarative_oracle__Answer_7, mdb__declarative_oracle__Revised0_9, &mdb__declarative_oracle__Revised_10);
        }
#line 279 "declarative_oracle.m"
        mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 0)));
#line 279 "declarative_oracle.m"
        mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 1)));
#line 279 "declarative_oracle.m"
        mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 2)));
#line 279 "declarative_oracle.m"
        mdb__declarative_oracle__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 3)));
#line 279 "declarative_oracle.m"
        mdb__declarative_oracle__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11, (MR_Integer) 4)));
#line 280 "declarative_oracle.m"
        {
#line 280 "declarative_oracle.m"
          MR_Word base;
#line 280 "declarative_oracle.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 280 "declarative_oracle.m"
          *mdb__declarative_oracle__STATE_VARIABLE_Oracle_12 = base;
#line 280 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Current_8));
#line 280 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Revised_10));
#line 280 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_25_25));
#line 280 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__V_26_26));
#line 280 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_27_27));
#line 280 "declarative_oracle.m"
        }
#line 276 "declarative_oracle.m"
      }
#line 281 "declarative_oracle.m"
    else
#line 281 "declarative_oracle.m"
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_12 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_11;
#line 273 "declarative_oracle.m"
  }
#line 125 "declarative_oracle.m"
}

#line 265 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1(
#line 265 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__closure_arg,
#line 265 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 265 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 265 "declarative_oracle.m"
  MR_Box * mdb__declarative_oracle__wrapper_arg_3)
#line 265 "declarative_oracle.m"
{
#line 265 "declarative_oracle.m"
  {
#line 265 "declarative_oracle.m"
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
#line 265 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__conv0_STATE_VARIABLE_Oracle_12;

#line 265 "declarative_oracle.m"
    {
#line 265 "declarative_oracle.m"
      mdb__declarative_oracle__revise_oracle_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), &mdb__declarative_oracle__conv0_STATE_VARIABLE_Oracle_12);
    }
#line 265 "declarative_oracle.m"
    *mdb__declarative_oracle__wrapper_arg_3 = ((MR_Box) (mdb__declarative_oracle__conv0_STATE_VARIABLE_Oracle_12));
#line 265 "declarative_oracle.m"
  }
#line 265 "declarative_oracle.m"
}

#line 118 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__oracle_confirm_bug_7_p_0(
#line 118 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_30,
#line 118 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Bug_8,
#line 118 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Evidence_9,
#line 118 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__Confirmation_10,
#line 118 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Oracle0_11,
#line 118 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__Oracle_12)
#line 118 "declarative_oracle.m"
{
#line 259 "declarative_oracle.m"
  {
#line 259 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 259 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__User0_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 2)));
#line 259 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__User_15;
#line 259 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Oracle1_16;
#line 260 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 0)));
#line 260 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 1)));
#line 260 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 3)));
#line 260 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 4)));
#line 262 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_25_25;
#line 262 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_26_26;
#line 262 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_28_28;
#line 262 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_29_29;
#line 262 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_27_27;

#line 261 "declarative_oracle.m"
    {
#line 261 "declarative_oracle.m"
      mdb__declarative_user__user_confirm_bug_6_p_0(mdb__declarative_oracle__Bug_8, mdb__declarative_oracle__Confirmation_10, mdb__declarative_oracle__User0_14, &mdb__declarative_oracle__User_15);
    }
#line 262 "declarative_oracle.m"
    mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 0)));
#line 262 "declarative_oracle.m"
    mdb__declarative_oracle__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 1)));
#line 262 "declarative_oracle.m"
    mdb__declarative_oracle__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 2)));
#line 262 "declarative_oracle.m"
    mdb__declarative_oracle__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 3)));
#line 262 "declarative_oracle.m"
    mdb__declarative_oracle__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle0_11, (MR_Integer) 4)));
#line 262 "declarative_oracle.m"
    {
#line 262 "declarative_oracle.m"
      mdb__declarative_oracle__Oracle1_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 262 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 0) = ((MR_Box) (mdb__declarative_oracle__V_25_25));
#line 262 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 1) = ((MR_Box) (mdb__declarative_oracle__V_26_26));
#line 262 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 2) = ((MR_Box) (mdb__declarative_oracle__User_15));
#line 262 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 3) = ((MR_Box) (mdb__declarative_oracle__V_28_28));
#line 262 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle1_16, 4) = ((MR_Box) (mdb__declarative_oracle__V_29_29));
#line 262 "declarative_oracle.m"
    }
#line 266 "declarative_oracle.m"
#line 266 "declarative_oracle.m"
    switch (*mdb__declarative_oracle__Confirmation_10) {
#line 266 "declarative_oracle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 266 "declarative_oracle.m"
      case (MR_Integer) 2:
#line 266 "declarative_oracle.m"
      case (MR_Integer) 0:
#line 270 "declarative_oracle.m"
        *mdb__declarative_oracle__Oracle_12 = mdb__declarative_oracle__Oracle1_16;
#line 266 "declarative_oracle.m"
        break;
#line 266 "declarative_oracle.m"
      case (MR_Integer) 1:
#line 264 "declarative_oracle.m"
        {
#line 264 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__TypeInfo_35_35;
#line 264 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_20_20;
#line 265 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__conv1_Oracle_12;

#line 265 "declarative_oracle.m"
          {
#line 265 "declarative_oracle.m"
            mdb__declarative_oracle__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 265 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_20_20, 0) = ((MR_Box) (&mdb__declarative_oracle_scalar_common_3[1]));
#line 265 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_20_20, 1) = ((MR_Box) (mdb__declarative_oracle__oracle_confirm_bug_7_p_0_1));
#line 265 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 265 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_20_20, 3) = ((MR_Box) (mdb__declarative_oracle__TypeInfo_for_T_30));
#line 265 "declarative_oracle.m"
          }
#line 7677 "mdb.declarative_oracle.c"
          {
#line 7679 "mdb.declarative_oracle.c"
            mdb__declarative_oracle__TypeInfo_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7681 "mdb.declarative_oracle.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__TypeInfo_35_35, 0) = ((MR_Box) (&mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_question_1));
#line 7683 "mdb.declarative_oracle.c"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__TypeInfo_35_35, 1) = ((MR_Box) (mdb__declarative_oracle__TypeInfo_for_T_30));
#line 7685 "mdb.declarative_oracle.c"
          }
#line 265 "declarative_oracle.m"
          {
#line 265 "declarative_oracle.m"
            mercury__list__foldl_4_p_0(mdb__declarative_oracle__TypeInfo_35_35, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0, (MR_Word) mdb__declarative_oracle__V_20_20, (MR_Word) mdb__declarative_oracle__Evidence_9, ((MR_Box) (mdb__declarative_oracle__Oracle1_16)), &mdb__declarative_oracle__conv1_Oracle_12);
          }
#line 265 "declarative_oracle.m"
          *mdb__declarative_oracle__Oracle_12 = ((MR_Word) mdb__declarative_oracle__conv1_Oracle_12);
#line 264 "declarative_oracle.m"
        }
#line 266 "declarative_oracle.m"
        break;
#line 266 "declarative_oracle.m"
    }
#line 259 "declarative_oracle.m"
  }
#line 118 "declarative_oracle.m"
}

#line 111 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__query_oracle_7_p_0(
#line 111 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_26,
#line 111 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Question_8,
#line 111 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__Response_9,
#line 111 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__FromUser_10,
#line 111 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15,
#line 111 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_16)
#line 111 "declarative_oracle.m"
{
#line 193 "declarative_oracle.m"
  {
#line 193 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 193 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Answer_13;

#line 190 "declarative_oracle.m"
    {
#line 190 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = mdb__declarative_oracle__answer_known_3_p_0(mdb__declarative_oracle__TypeInfo_for_T_26, mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, mdb__declarative_oracle__Question_8, &mdb__declarative_oracle__Answer_13);
    }
#line 193 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 191 "declarative_oracle.m"
      {
#line 191 "declarative_oracle.m"
        {
#line 191 "declarative_oracle.m"
          MR_Word base;
#line 191 "declarative_oracle.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 191 "declarative_oracle.m"
          *mdb__declarative_oracle__Response_9 = base;
#line 191 "declarative_oracle.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_oracle__Answer_13));
#line 191 "declarative_oracle.m"
        }
#line 192 "declarative_oracle.m"
        *mdb__declarative_oracle__FromUser_10 = (MR_Integer) 0;
#line 191 "declarative_oracle.m"
        *mdb__declarative_oracle__STATE_VARIABLE_Oracle_16 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15;
#line 191 "declarative_oracle.m"
      }
#line 193 "declarative_oracle.m"
    else
#line 194 "declarative_oracle.m"
      {
#line 194 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__UserQuestion_14;
#line 194 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 1)));
#line 194 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 0)));
#line 194 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 2)));
#line 194 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 3)));
#line 194 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, (MR_Integer) 4)));
#line 208 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__DeclTruth_32;
#line 204 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__Answer_30;
#line 205 "declarative_oracle.m"
        MR_Box mdb__declarative_oracle__V_31_31;

#line 567 "declarative_oracle.m"
#line 567 "declarative_oracle.m"
        switch (MR_tag((MR_Word) mdb__declarative_oracle__Question_8)) {
#line 567 "declarative_oracle.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 567 "declarative_oracle.m"
          case (MR_Integer) 0:
#line 567 "declarative_oracle.m"
            {
#line 567 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__Node_36 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_8, (MR_Integer) 0));
#line 567 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Atom_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_8, (MR_Integer) 2)));
#line 567 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Map_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 0)));
#line 567 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Truth_40;
#line 568 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Question_8, (MR_Integer) 1)));
#line 507 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 1)));
#line 507 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 2)));
#line 570 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__conv2_Truth_40;

#line 570 "declarative_oracle.m"
              {
#line 570 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__Map_39, ((MR_Box) (mdb__declarative_oracle__Atom_38)), &mdb__declarative_oracle__conv2_Truth_40);
              }
#line 570 "declarative_oracle.m"
              if (mdb__declarative_oracle__succeeded)
#line 570 "declarative_oracle.m"
                {
#line 570 "declarative_oracle.m"
                  mdb__declarative_oracle__Truth_40 = ((MR_Word) mdb__declarative_oracle__conv2_Truth_40);
#line 570 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = MR_TRUE;
#line 570 "declarative_oracle.m"
                }
#line 567 "declarative_oracle.m"
              if (mdb__declarative_oracle__succeeded)
#line 567 "declarative_oracle.m"
                {
#line 571 "declarative_oracle.m"
                  {
#line 571 "declarative_oracle.m"
                    mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 571 "declarative_oracle.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_36;
#line 571 "declarative_oracle.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_40));
#line 571 "declarative_oracle.m"
                  }
#line 571 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = MR_TRUE;
#line 567 "declarative_oracle.m"
                }
#line 567 "declarative_oracle.m"
            }
#line 567 "declarative_oracle.m"
            break;
#line 567 "declarative_oracle.m"
          case (MR_Integer) 1:
#line 573 "declarative_oracle.m"
            {
#line 573 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__Node_44 = (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_8, (MR_Integer) 0));
#line 573 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Call_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_8, (MR_Integer) 1)));
#line 573 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__CMap_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 1)));
#line 573 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Truth_48;
#line 574 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle___Solns_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__Question_8, (MR_Integer) 2)));
#line 508 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 0)));
#line 508 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 2)));
#line 576 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__conv0_Truth_48;

#line 576 "declarative_oracle.m"
              {
#line 576 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0, mdb__declarative_oracle__CMap_47, ((MR_Box) (mdb__declarative_oracle__Call_45)), &mdb__declarative_oracle__conv0_Truth_48);
              }
#line 576 "declarative_oracle.m"
              if (mdb__declarative_oracle__succeeded)
#line 576 "declarative_oracle.m"
                {
#line 576 "declarative_oracle.m"
                  mdb__declarative_oracle__Truth_48 = ((MR_Word) mdb__declarative_oracle__conv0_Truth_48);
#line 576 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = MR_TRUE;
#line 576 "declarative_oracle.m"
                }
#line 573 "declarative_oracle.m"
              if (mdb__declarative_oracle__succeeded)
#line 573 "declarative_oracle.m"
                {
#line 577 "declarative_oracle.m"
                  {
#line 577 "declarative_oracle.m"
                    mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 577 "declarative_oracle.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_44;
#line 577 "declarative_oracle.m"
                    MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) (mdb__declarative_oracle__Truth_48));
#line 577 "declarative_oracle.m"
                  }
#line 577 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = MR_TRUE;
#line 573 "declarative_oracle.m"
                }
#line 573 "declarative_oracle.m"
            }
#line 567 "declarative_oracle.m"
            break;
#line 567 "declarative_oracle.m"
          case (MR_Integer) 2:
#line 579 "declarative_oracle.m"
            {
#line 579 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__Node_52 = (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_8, (MR_Integer) 0));
#line 579 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Call_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_8, (MR_Integer) 1)));
#line 579 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Exception_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_oracle__Question_8, (MR_Integer) 2)));
#line 579 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__XMap_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 2)));
#line 579 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__X_56;
#line 579 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Possible_57;
#line 579 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Impossible_58;
#line 579 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__Inadmissible_59;
#line 509 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 0)));
#line 509 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__V_19_19, (MR_Integer) 1)));
#line 582 "declarative_oracle.m"
              MR_Box mdb__declarative_oracle__conv1_X_56;
#line 584 "declarative_oracle.m"
              MR_Word mdb__declarative_oracle__TypeCtorInfo_41_69;

#line 582 "declarative_oracle.m"
              {
#line 582 "declarative_oracle.m"
                mdb__declarative_oracle__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, mdb__declarative_oracle__XMap_55, ((MR_Box) (mdb__declarative_oracle__Call_53)), &mdb__declarative_oracle__conv1_X_56);
              }
#line 582 "declarative_oracle.m"
              if (mdb__declarative_oracle__succeeded)
#line 582 "declarative_oracle.m"
                {
#line 582 "declarative_oracle.m"
                  mdb__declarative_oracle__X_56 = ((MR_Word) mdb__declarative_oracle__conv1_X_56);
#line 582 "declarative_oracle.m"
                  mdb__declarative_oracle__succeeded = MR_TRUE;
#line 582 "declarative_oracle.m"
                }
#line 579 "declarative_oracle.m"
              if (mdb__declarative_oracle__succeeded)
#line 579 "declarative_oracle.m"
                {
#line 583 "declarative_oracle.m"
                  mdb__declarative_oracle__Possible_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_56, (MR_Integer) 0)));
#line 583 "declarative_oracle.m"
                  mdb__declarative_oracle__Impossible_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_56, (MR_Integer) 1)));
#line 583 "declarative_oracle.m"
                  mdb__declarative_oracle__Inadmissible_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__X_56, (MR_Integer) 2)));
#line 7954 "mdb.declarative_oracle.c"
                  mdb__declarative_oracle__TypeCtorInfo_41_69 = (MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0;
#line 584 "declarative_oracle.m"
                  {
#line 584 "declarative_oracle.m"
                    mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0(mdb__declarative_oracle__TypeCtorInfo_41_69, ((MR_Box) (mdb__declarative_oracle__Exception_54)), mdb__declarative_oracle__Possible_57);
                  }
#line 586 "declarative_oracle.m"
                  if (mdb__declarative_oracle__succeeded)
#line 585 "declarative_oracle.m"
                    {
#line 585 "declarative_oracle.m"
                      {
#line 585 "declarative_oracle.m"
                        mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 585 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_52;
#line 585 "declarative_oracle.m"
                        MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) ((MR_Integer) 0));
#line 585 "declarative_oracle.m"
                      }
#line 585 "declarative_oracle.m"
                      mdb__declarative_oracle__succeeded = MR_TRUE;
#line 585 "declarative_oracle.m"
                    }
#line 586 "declarative_oracle.m"
                  else
#line 588 "declarative_oracle.m"
                    {
#line 586 "declarative_oracle.m"
                      {
#line 586 "declarative_oracle.m"
                        mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_54)), mdb__declarative_oracle__Impossible_58);
                      }
#line 588 "declarative_oracle.m"
                      if (mdb__declarative_oracle__succeeded)
#line 587 "declarative_oracle.m"
                        {
#line 587 "declarative_oracle.m"
                          {
#line 587 "declarative_oracle.m"
                            mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 587 "declarative_oracle.m"
                            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_52;
#line 587 "declarative_oracle.m"
                            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) ((MR_Integer) 1));
#line 587 "declarative_oracle.m"
                          }
#line 587 "declarative_oracle.m"
                          mdb__declarative_oracle__succeeded = MR_TRUE;
#line 587 "declarative_oracle.m"
                        }
#line 588 "declarative_oracle.m"
                      else
#line 589 "declarative_oracle.m"
                        {
#line 589 "declarative_oracle.m"
                          MR_Word mdb__declarative_oracle__V_62_62;

#line 589 "declarative_oracle.m"
                          {
#line 589 "declarative_oracle.m"
                            mdb__declarative_oracle__succeeded = mercury__set__member_2_p_0((MR_Word) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0, ((MR_Box) (mdb__declarative_oracle__Exception_54)), mdb__declarative_oracle__Inadmissible_59);
                          }
#line 589 "declarative_oracle.m"
                          if (mdb__declarative_oracle__succeeded)
#line 589 "declarative_oracle.m"
                            {
#line 590 "declarative_oracle.m"
                              mdb__declarative_oracle__V_62_62 = (MR_Integer) 2;
#line 590 "declarative_oracle.m"
                              {
#line 590 "declarative_oracle.m"
                                mdb__declarative_oracle__Answer_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 590 "declarative_oracle.m"
                                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 0) = mdb__declarative_oracle__Node_52;
#line 590 "declarative_oracle.m"
                                MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, 1) = ((MR_Box) (mdb__declarative_oracle__V_62_62));
#line 590 "declarative_oracle.m"
                              }
#line 590 "declarative_oracle.m"
                              mdb__declarative_oracle__succeeded = MR_TRUE;
#line 589 "declarative_oracle.m"
                            }
#line 589 "declarative_oracle.m"
                        }
#line 588 "declarative_oracle.m"
                    }
#line 579 "declarative_oracle.m"
                }
#line 579 "declarative_oracle.m"
            }
#line 567 "declarative_oracle.m"
            break;
#line 567 "declarative_oracle.m"
        }
#line 204 "declarative_oracle.m"
        if (mdb__declarative_oracle__succeeded)
#line 204 "declarative_oracle.m"
          {
#line 205 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = ((MR_tag((MR_Word) mdb__declarative_oracle__Answer_30)) == (MR_mktag((MR_Integer) 0)));
#line 205 "declarative_oracle.m"
            if (mdb__declarative_oracle__succeeded)
#line 205 "declarative_oracle.m"
              {
#line 205 "declarative_oracle.m"
                mdb__declarative_oracle__V_31_31 = (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, (MR_Integer) 0));
#line 205 "declarative_oracle.m"
                mdb__declarative_oracle__DeclTruth_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Answer_30, (MR_Integer) 1)));
#line 205 "declarative_oracle.m"
              }
#line 204 "declarative_oracle.m"
          }
#line 208 "declarative_oracle.m"
        if (mdb__declarative_oracle__succeeded)
#line 207 "declarative_oracle.m"
          {
#line 207 "declarative_oracle.m"
            mdb__declarative_oracle__UserQuestion_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 207 "declarative_oracle.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_oracle__UserQuestion_14, 0) = ((MR_Box) (mdb__declarative_oracle__Question_8));
#line 207 "declarative_oracle.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_oracle__UserQuestion_14, 1) = ((MR_Box) (mdb__declarative_oracle__DeclTruth_32));
#line 207 "declarative_oracle.m"
          }
#line 208 "declarative_oracle.m"
        else
#line 209 "declarative_oracle.m"
          {
#line 209 "declarative_oracle.m"
            mdb__declarative_oracle__UserQuestion_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
#line 209 "declarative_oracle.m"
            MR_hl_field(MR_mktag(0), mdb__declarative_oracle__UserQuestion_14, 0) = ((MR_Box) (mdb__declarative_oracle__Question_8));
#line 209 "declarative_oracle.m"
          }
#line 195 "declarative_oracle.m"
        {
#line 195 "declarative_oracle.m"
          mdb__declarative_oracle__query_oracle_user_6_p_0(mdb__declarative_oracle__TypeInfo_for_T_26, mdb__declarative_oracle__UserQuestion_14, mdb__declarative_oracle__Response_9, mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_15, mdb__declarative_oracle__STATE_VARIABLE_Oracle_16);
        }
#line 196 "declarative_oracle.m"
        *mdb__declarative_oracle__FromUser_10 = (MR_Integer) 1;
#line 194 "declarative_oracle.m"
      }
#line 193 "declarative_oracle.m"
  }
#line 111 "declarative_oracle.m"
}

#line 401 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_2(
#line 401 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__closure_arg,
#line 401 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 401 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 401 "declarative_oracle.m"
  MR_Box * mdb__declarative_oracle__wrapper_arg_3)
#line 401 "declarative_oracle.m"
{
#line 401 "declarative_oracle.m"
  {
#line 401 "declarative_oracle.m"
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
#line 401 "declarative_oracle.m"
    MR_String mdb__declarative_oracle__conv2_HeadVar__3_3;

#line 401 "declarative_oracle.m"
    {
#line 401 "declarative_oracle.m"
      mdb__declarative_oracle__format_trust_command_3_p_0(((MR_Word) mdb__declarative_oracle__wrapper_arg_1), ((MR_String) mdb__declarative_oracle__wrapper_arg_2), &mdb__declarative_oracle__conv2_HeadVar__3_3);
    }
#line 401 "declarative_oracle.m"
    *mdb__declarative_oracle__wrapper_arg_3 = ((MR_Box) (mdb__declarative_oracle__conv2_HeadVar__3_3));
#line 401 "declarative_oracle.m"
  }
#line 401 "declarative_oracle.m"
}

#line 404 "declarative_oracle.m"
static void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0_1(
#line 404 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__closure_arg,
#line 404 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_1,
#line 404 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_2,
#line 404 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__wrapper_arg_3,
#line 404 "declarative_oracle.m"
  MR_Box * mdb__declarative_oracle__wrapper_arg_4)
#line 404 "declarative_oracle.m"
{
#line 404 "declarative_oracle.m"
  {
#line 404 "declarative_oracle.m"
    MR_Box mdb__declarative_oracle__closure = mdb__declarative_oracle__closure_arg;
#line 404 "declarative_oracle.m"
    MR_String mdb__declarative_oracle__conv0_HeadVar__4_4;

#line 404 "declarative_oracle.m"
    {
#line 404 "declarative_oracle.m"
      mdb__declarative_oracle__format_trust_display_4_p_0(((MR_Integer) mdb__declarative_oracle__wrapper_arg_1), ((MR_Word) mdb__declarative_oracle__wrapper_arg_2), ((MR_String) mdb__declarative_oracle__wrapper_arg_3), &mdb__declarative_oracle__conv0_HeadVar__4_4);
    }
#line 404 "declarative_oracle.m"
    *mdb__declarative_oracle__wrapper_arg_4 = ((MR_Box) (mdb__declarative_oracle__conv0_HeadVar__4_4));
#line 404 "declarative_oracle.m"
  }
#line 404 "declarative_oracle.m"
}

#line 101 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__get_trusted_list_3_p_0(
#line 101 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Oracle_1,
#line 101 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__2_2,
#line 101 "declarative_oracle.m"
  MR_String * mdb__declarative_oracle__HeadVar__3_3)
#line 101 "declarative_oracle.m"
{
#line 399 "declarative_oracle.m"
  {
#line 399 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 399 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 3)));
#line 400 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 4)));
#line 400 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 2)));
#line 400 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 1)));
#line 400 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Oracle_1, (MR_Integer) 0)));

#line 399 "declarative_oracle.m"
#line 399 "declarative_oracle.m"
    switch (mdb__declarative_oracle__HeadVar__2_2) {
#line 399 "declarative_oracle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 399 "declarative_oracle.m"
      case (MR_Integer) 0:
#line 402 "declarative_oracle.m"
        {
#line 402 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__TypeCtorInfo_32_32 = (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0;
#line 402 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 402 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__IdToObjectMap_12;
#line 402 "declarative_oracle.m"
          MR_String mdb__declarative_oracle__DisplayStr0_13;
#line 404 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__conv1_DisplayStr0_13;

#line 403 "declarative_oracle.m"
          {
#line 403 "declarative_oracle.m"
            mdb__declarative_oracle__IdToObjectMap_12 = mercury__bimap__reverse_map_1_f_0(mdb__declarative_oracle__TypeCtorInfo_32_32, mdb__declarative_oracle__TypeCtorInfo_33_33, mdb__declarative_oracle__V_40_40);
          }
#line 404 "declarative_oracle.m"
          {
#line 404 "declarative_oracle.m"
            mercury__map__foldl_4_p_0(mdb__declarative_oracle__TypeCtorInfo_33_33, mdb__declarative_oracle__TypeCtorInfo_32_32, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[4], mdb__declarative_oracle__IdToObjectMap_12, ((MR_Box) ((MR_String) "")), &mdb__declarative_oracle__conv1_DisplayStr0_13);
          }
#line 404 "declarative_oracle.m"
          mdb__declarative_oracle__DisplayStr0_13 = ((MR_String) mdb__declarative_oracle__conv1_DisplayStr0_13);
#line 405 "declarative_oracle.m"
          mdb__declarative_oracle__succeeded = (strcmp(mdb__declarative_oracle__DisplayStr0_13, (MR_String) "") == 0);
#line 408 "declarative_oracle.m"
          if (mdb__declarative_oracle__succeeded)
#line 406 "declarative_oracle.m"
            *mdb__declarative_oracle__HeadVar__3_3 = (MR_String) "There are no trusted modules, predicates or functions.\n";
#line 408 "declarative_oracle.m"
          else
#line 409 "declarative_oracle.m"
            {
#line 409 "declarative_oracle.m"
              {
#line 409 "declarative_oracle.m"
                *mdb__declarative_oracle__HeadVar__3_3 = mercury__string__f_43_43_2_f_0((MR_String) "Trusted Objects:\n", mdb__declarative_oracle__DisplayStr0_13);
              }
#line 409 "declarative_oracle.m"
            }
#line 402 "declarative_oracle.m"
        }
#line 399 "declarative_oracle.m"
        break;
#line 399 "declarative_oracle.m"
      case (MR_Integer) 1:
#line 399 "declarative_oracle.m"
        {
#line 399 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__TypeCtorInfo_26_26 = (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0;
#line 399 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__TrustedObjects_6;
#line 401 "declarative_oracle.m"
          MR_Box mdb__declarative_oracle__conv3_HeadVar__3_3;

#line 400 "declarative_oracle.m"
          {
#line 400 "declarative_oracle.m"
            mdb__declarative_oracle__TrustedObjects_6 = mercury__bimap__ordinates_1_f_0(mdb__declarative_oracle__TypeCtorInfo_26_26, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_oracle__V_40_40);
          }
#line 401 "declarative_oracle.m"
          {
#line 401 "declarative_oracle.m"
            mercury__list__foldl_4_p_0(mdb__declarative_oracle__TypeCtorInfo_26_26, (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, (MR_Word) &mdb__declarative_oracle_scalar_common_1[5], mdb__declarative_oracle__TrustedObjects_6, ((MR_Box) ((MR_String) "")), &mdb__declarative_oracle__conv3_HeadVar__3_3);
          }
#line 401 "declarative_oracle.m"
          *mdb__declarative_oracle__HeadVar__3_3 = ((MR_String) mdb__declarative_oracle__conv3_HeadVar__3_3);
#line 399 "declarative_oracle.m"
        }
#line 399 "declarative_oracle.m"
        break;
#line 399 "declarative_oracle.m"
    }
#line 399 "declarative_oracle.m"
  }
#line 101 "declarative_oracle.m"
}

#line 92 "declarative_oracle.m"
MR_bool MR_CALL 
mdb__declarative_oracle__remove_trusted_3_p_0(
#line 92 "declarative_oracle.m"
  MR_Integer mdb__declarative_oracle__Id_4,
#line 92 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8,
#line 92 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_9)
#line 92 "declarative_oracle.m"
{
#line 394 "declarative_oracle.m"
  {
#line 394 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 394 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__TypeCtorInfo_26_26 = (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0;
#line 394 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 394 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Trusted_7;
#line 394 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 3)));
#line 394 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_11_11;
#line 395 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 0)));
#line 395 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 1)));
#line 395 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 2)));
#line 395 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 4)));
#line 395 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_6_6;
#line 395 "declarative_oracle.m"
    MR_Box mdb__declarative_oracle__conv0_V_6_6;
#line 396 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_17_17;
#line 396 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_18_18;
#line 396 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_19_19;
#line 396 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_20_20;
#line 397 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_21_21;
#line 397 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_22_22;
#line 397 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_23_23;
#line 397 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_25_25;
#line 397 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_24_24;

#line 395 "declarative_oracle.m"
    {
#line 395 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = mercury__bimap__search_3_p_1(mdb__declarative_oracle__TypeCtorInfo_26_26, mdb__declarative_oracle__TypeCtorInfo_27_27, mdb__declarative_oracle__V_10_10, &mdb__declarative_oracle__conv0_V_6_6, ((MR_Box) (mdb__declarative_oracle__Id_4)));
    }
#line 395 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 395 "declarative_oracle.m"
      {
#line 395 "declarative_oracle.m"
        mdb__declarative_oracle__V_6_6 = ((MR_Word) mdb__declarative_oracle__conv0_V_6_6);
#line 395 "declarative_oracle.m"
        mdb__declarative_oracle__succeeded = MR_TRUE;
#line 395 "declarative_oracle.m"
      }
#line 394 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 394 "declarative_oracle.m"
      {
#line 396 "declarative_oracle.m"
        mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 0)));
#line 396 "declarative_oracle.m"
        mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 1)));
#line 396 "declarative_oracle.m"
        mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 2)));
#line 396 "declarative_oracle.m"
        mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 3)));
#line 396 "declarative_oracle.m"
        mdb__declarative_oracle__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 4)));
#line 396 "declarative_oracle.m"
        {
#line 396 "declarative_oracle.m"
          mercury__bimap__delete_value_3_p_0(mdb__declarative_oracle__TypeCtorInfo_27_27, mdb__declarative_oracle__TypeCtorInfo_26_26, ((MR_Box) (mdb__declarative_oracle__Id_4)), mdb__declarative_oracle__V_11_11, &mdb__declarative_oracle__Trusted_7);
        }
#line 397 "declarative_oracle.m"
        mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 0)));
#line 397 "declarative_oracle.m"
        mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 1)));
#line 397 "declarative_oracle.m"
        mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 2)));
#line 397 "declarative_oracle.m"
        mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 3)));
#line 397 "declarative_oracle.m"
        mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_8, (MR_Integer) 4)));
#line 397 "declarative_oracle.m"
        {
#line 397 "declarative_oracle.m"
          MR_Word base;
#line 397 "declarative_oracle.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 397 "declarative_oracle.m"
          *mdb__declarative_oracle__STATE_VARIABLE_Oracle_9 = base;
#line 397 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_21_21));
#line 397 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_22_22));
#line 397 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_23_23));
#line 397 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Trusted_7));
#line 397 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__V_25_25));
#line 397 "declarative_oracle.m"
        }
#line 397 "declarative_oracle.m"
        mdb__declarative_oracle__succeeded = MR_TRUE;
#line 394 "declarative_oracle.m"
      }
#line 394 "declarative_oracle.m"
    return mdb__declarative_oracle__succeeded;
#line 394 "declarative_oracle.m"
  }
#line 92 "declarative_oracle.m"
}

#line 86 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__trust_standard_library_2_p_0(
#line 86 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7,
#line 86 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_8)
#line 86 "declarative_oracle.m"
{
#line 382 "declarative_oracle.m"
  {
#line 382 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 382 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__Id_4;
#line 382 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Counter_5;
#line 382 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 4)));
#line 383 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 0)));
#line 383 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 1)));
#line 383 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 2)));
#line 383 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 3)));
#line 390 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Trusted_6;
#line 385 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_11_11;
#line 385 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_18_18;
#line 385 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_19_19;
#line 385 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_20_20;
#line 385 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_21_21;

#line 383 "declarative_oracle.m"
    {
#line 383 "declarative_oracle.m"
      mercury__counter__allocate_3_p_0(&mdb__declarative_oracle__Id_4, mdb__declarative_oracle__V_9_9, &mdb__declarative_oracle__Counter_5);
    }
#line 385 "declarative_oracle.m"
    mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 0)));
#line 385 "declarative_oracle.m"
    mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 1)));
#line 385 "declarative_oracle.m"
    mdb__declarative_oracle__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 2)));
#line 385 "declarative_oracle.m"
    mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 3)));
#line 385 "declarative_oracle.m"
    mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 4)));
#line 385 "declarative_oracle.m"
    {
#line 385 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) (mdb__declarative_oracle__Id_4)), mdb__declarative_oracle__V_11_11, &mdb__declarative_oracle__Trusted_6);
    }
#line 390 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 388 "declarative_oracle.m"
      {
#line 388 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 0)));
#line 388 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 1)));
#line 388 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 2)));
#line 388 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 3)));
#line 388 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7, (MR_Integer) 4)));

#line 389 "declarative_oracle.m"
        {
#line 389 "declarative_oracle.m"
          MR_Word base;
#line 389 "declarative_oracle.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 389 "declarative_oracle.m"
          *mdb__declarative_oracle__STATE_VARIABLE_Oracle_8 = base;
#line 389 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_22_22));
#line 389 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_23_23));
#line 389 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_24_24));
#line 389 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Trusted_6));
#line 389 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Counter_5));
#line 389 "declarative_oracle.m"
        }
#line 388 "declarative_oracle.m"
      }
#line 390 "declarative_oracle.m"
    else
#line 390 "declarative_oracle.m"
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_8 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_7;
#line 382 "declarative_oracle.m"
  }
#line 86 "declarative_oracle.m"
}

#line 81 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__add_trusted_pred_or_func_3_p_0(
#line 81 "declarative_oracle.m"
  MR_Box mdb__declarative_oracle__ProcLayout_4,
#line 81 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19,
#line 81 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_20)
#line 81 "declarative_oracle.m"
{
#line 355 "declarative_oracle.m"
  {
#line 355 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 355 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__Id_6;
#line 355 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Counter_7;
#line 355 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__ProcLabel_8;
#line 355 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__ModuleName_9;
#line 355 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__PredOrFunc_10;
#line 355 "declarative_oracle.m"
    MR_String mdb__declarative_oracle__Name_12;
#line 355 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__Arity_13;
#line 355 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19, (MR_Integer) 4)));
#line 356 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19, (MR_Integer) 0)));
#line 356 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19, (MR_Integer) 1)));
#line 356 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19, (MR_Integer) 2)));
#line 356 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19, (MR_Integer) 3)));
#line 378 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Trusted_18;
#line 378 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_56_56;
#line 378 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_57_57;
#line 378 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_58_58;
#line 370 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_55_55;
#line 372 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_54_54;

#line 356 "declarative_oracle.m"
    {
#line 356 "declarative_oracle.m"
      mercury__counter__allocate_3_p_0(&mdb__declarative_oracle__Id_6, mdb__declarative_oracle__V_21_21, &mdb__declarative_oracle__Counter_7);
    }
#line 357 "declarative_oracle.m"
    {
#line 357 "declarative_oracle.m"
      mdb__declarative_oracle__ProcLabel_8 = mdbcomp__rtti_access__get_proc_label_from_layout_1_f_0(mdb__declarative_oracle__ProcLayout_4);
    }
#line 361 "declarative_oracle.m"
    if (((MR_tag((MR_Word) mdb__declarative_oracle__ProcLabel_8)) == (MR_mktag((MR_Integer) 0))))
#line 359 "declarative_oracle.m"
      {
#line 359 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_11_11;
#line 359 "declarative_oracle.m"
        MR_Integer mdb__declarative_oracle__V_14_14;

#line 359 "declarative_oracle.m"
        mdb__declarative_oracle__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 0)));
#line 359 "declarative_oracle.m"
        mdb__declarative_oracle__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 1)));
#line 359 "declarative_oracle.m"
        mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 2)));
#line 359 "declarative_oracle.m"
        mdb__declarative_oracle__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 3)));
#line 359 "declarative_oracle.m"
        mdb__declarative_oracle__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 4)));
#line 359 "declarative_oracle.m"
        mdb__declarative_oracle__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 5)));
#line 359 "declarative_oracle.m"
      }
#line 361 "declarative_oracle.m"
    else
#line 362 "declarative_oracle.m"
      {
#line 362 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_15_15;
#line 362 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_16_16;
#line 362 "declarative_oracle.m"
        MR_Integer mdb__declarative_oracle__V_17_17;

#line 362 "declarative_oracle.m"
        mdb__declarative_oracle__ModuleName_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 0)));
#line 362 "declarative_oracle.m"
        mdb__declarative_oracle__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 1)));
#line 362 "declarative_oracle.m"
        mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 2)));
#line 362 "declarative_oracle.m"
        mdb__declarative_oracle__Name_12 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 3)));
#line 362 "declarative_oracle.m"
        mdb__declarative_oracle__Arity_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 4)));
#line 362 "declarative_oracle.m"
        mdb__declarative_oracle__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_oracle__ProcLabel_8, (MR_Integer) 5)));
#line 363 "declarative_oracle.m"
        mdb__declarative_oracle__PredOrFunc_10 = (MR_Integer) 0;
#line 362 "declarative_oracle.m"
      }
#line 372 "declarative_oracle.m"
    mdb__declarative_oracle__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19, (MR_Integer) 0)));
#line 372 "declarative_oracle.m"
    mdb__declarative_oracle__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19, (MR_Integer) 1)));
#line 372 "declarative_oracle.m"
    mdb__declarative_oracle__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19, (MR_Integer) 2)));
#line 372 "declarative_oracle.m"
    mdb__declarative_oracle__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19, (MR_Integer) 3)));
#line 372 "declarative_oracle.m"
    mdb__declarative_oracle__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19, (MR_Integer) 4)));
#line 370 "declarative_oracle.m"
#line 370 "declarative_oracle.m"
    switch (mdb__declarative_oracle__PredOrFunc_10) {
#line 370 "declarative_oracle.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 370 "declarative_oracle.m"
      case (MR_Integer) 1:
#line 371 "declarative_oracle.m"
        {
#line 371 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_22_22;

#line 372 "declarative_oracle.m"
          {
#line 372 "declarative_oracle.m"
            mdb__declarative_oracle__V_22_22 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 372 "declarative_oracle.m"
            MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_22_22, 0) = ((MR_Box) (mdb__declarative_oracle__ModuleName_9));
#line 372 "declarative_oracle.m"
            MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_22_22, 1) = ((MR_Box) (mdb__declarative_oracle__Name_12));
#line 372 "declarative_oracle.m"
            MR_hl_field(MR_mktag(3), mdb__declarative_oracle__V_22_22, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_13));
#line 372 "declarative_oracle.m"
          }
#line 372 "declarative_oracle.m"
          {
#line 372 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_oracle__V_22_22)), ((MR_Box) (mdb__declarative_oracle__Id_6)), mdb__declarative_oracle__V_55_55, &mdb__declarative_oracle__Trusted_18);
          }
#line 371 "declarative_oracle.m"
        }
#line 370 "declarative_oracle.m"
        break;
#line 370 "declarative_oracle.m"
      case (MR_Integer) 0:
#line 367 "declarative_oracle.m"
        {
#line 367 "declarative_oracle.m"
          MR_Word mdb__declarative_oracle__V_24_24;

#line 368 "declarative_oracle.m"
          {
#line 368 "declarative_oracle.m"
            mdb__declarative_oracle__V_24_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 368 "declarative_oracle.m"
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_24_24, 0) = ((MR_Box) (mdb__declarative_oracle__ModuleName_9));
#line 368 "declarative_oracle.m"
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_24_24, 1) = ((MR_Box) (mdb__declarative_oracle__Name_12));
#line 368 "declarative_oracle.m"
            MR_hl_field(MR_mktag(2), mdb__declarative_oracle__V_24_24, 2) = ((MR_Box) (mdb__declarative_oracle__Arity_13));
#line 368 "declarative_oracle.m"
          }
#line 368 "declarative_oracle.m"
          {
#line 368 "declarative_oracle.m"
            mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_oracle__V_24_24)), ((MR_Box) (mdb__declarative_oracle__Id_6)), mdb__declarative_oracle__V_55_55, &mdb__declarative_oracle__Trusted_18);
          }
#line 367 "declarative_oracle.m"
        }
#line 370 "declarative_oracle.m"
        break;
#line 370 "declarative_oracle.m"
    }
#line 378 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 376 "declarative_oracle.m"
      {
#line 376 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_40_40 = mdb__declarative_oracle__V_58_58;
#line 376 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_41_41 = mdb__declarative_oracle__V_57_57;
#line 376 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_42_42 = mdb__declarative_oracle__V_56_56;

#line 377 "declarative_oracle.m"
        {
#line 377 "declarative_oracle.m"
          MR_Word base;
#line 377 "declarative_oracle.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 377 "declarative_oracle.m"
          *mdb__declarative_oracle__STATE_VARIABLE_Oracle_20 = base;
#line 377 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_40_40));
#line 377 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_41_41));
#line 377 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_42_42));
#line 377 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Trusted_18));
#line 377 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Counter_7));
#line 377 "declarative_oracle.m"
        }
#line 376 "declarative_oracle.m"
      }
#line 378 "declarative_oracle.m"
    else
#line 378 "declarative_oracle.m"
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_20 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_19;
#line 355 "declarative_oracle.m"
  }
#line 81 "declarative_oracle.m"
}

#line 75 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__add_trusted_module_3_p_0(
#line 75 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__ModuleName_4,
#line 75 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9,
#line 75 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__STATE_VARIABLE_Oracle_10)
#line 75 "declarative_oracle.m"
{
#line 343 "declarative_oracle.m"
  {
#line 343 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 343 "declarative_oracle.m"
    MR_Integer mdb__declarative_oracle__Id_6;
#line 343 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Counter_7;
#line 343 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));
#line 344 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
#line 344 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
#line 344 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
#line 344 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
#line 351 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Trusted_8;
#line 346 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_12_12;
#line 346 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_13_13;
#line 346 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_20_20;
#line 346 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_21_21;
#line 346 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_22_22;
#line 346 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_23_23;

#line 344 "declarative_oracle.m"
    {
#line 344 "declarative_oracle.m"
      mercury__counter__allocate_3_p_0(&mdb__declarative_oracle__Id_6, mdb__declarative_oracle__V_11_11, &mdb__declarative_oracle__Counter_7);
    }
#line 346 "declarative_oracle.m"
    mdb__declarative_oracle__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
#line 346 "declarative_oracle.m"
    mdb__declarative_oracle__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
#line 346 "declarative_oracle.m"
    mdb__declarative_oracle__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
#line 346 "declarative_oracle.m"
    mdb__declarative_oracle__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
#line 346 "declarative_oracle.m"
    mdb__declarative_oracle__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));
#line 346 "declarative_oracle.m"
    {
#line 346 "declarative_oracle.m"
      mdb__declarative_oracle__V_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 346 "declarative_oracle.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_oracle__V_12_12, 0) = ((MR_Box) (mdb__declarative_oracle__ModuleName_4));
#line 346 "declarative_oracle.m"
    }
#line 346 "declarative_oracle.m"
    {
#line 346 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = mercury__bimap__insert_4_p_0((MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0, (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_oracle__V_12_12)), ((MR_Box) (mdb__declarative_oracle__Id_6)), mdb__declarative_oracle__V_13_13, &mdb__declarative_oracle__Trusted_8);
    }
#line 351 "declarative_oracle.m"
    if (mdb__declarative_oracle__succeeded)
#line 349 "declarative_oracle.m"
      {
#line 349 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 0)));
#line 349 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 1)));
#line 349 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 2)));
#line 349 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 3)));
#line 349 "declarative_oracle.m"
        MR_Word mdb__declarative_oracle__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9, (MR_Integer) 4)));

#line 350 "declarative_oracle.m"
        {
#line 350 "declarative_oracle.m"
          MR_Word base;
#line 350 "declarative_oracle.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 350 "declarative_oracle.m"
          *mdb__declarative_oracle__STATE_VARIABLE_Oracle_10 = base;
#line 350 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__V_24_24));
#line 350 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__V_25_25));
#line 350 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__V_26_26));
#line 350 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Trusted_8));
#line 350 "declarative_oracle.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Counter_7));
#line 350 "declarative_oracle.m"
        }
#line 349 "declarative_oracle.m"
      }
#line 351 "declarative_oracle.m"
    else
#line 351 "declarative_oracle.m"
      *mdb__declarative_oracle__STATE_VARIABLE_Oracle_10 = mdb__declarative_oracle__STATE_VARIABLE_Oracle_0_9;
#line 343 "declarative_oracle.m"
  }
#line 75 "declarative_oracle.m"
}

#line 69 "declarative_oracle.m"
void MR_CALL 
mdb__declarative_oracle__oracle_state_init_5_p_0(
#line 69 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__InStr_6,
#line 69 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__OutStr_7,
#line 69 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__Browser_8,
#line 69 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HelpSystem_9,
#line 69 "declarative_oracle.m"
  MR_Word * mdb__declarative_oracle__Oracle_10)
#line 69 "declarative_oracle.m"
{
#line 314 "declarative_oracle.m"
  {
#line 314 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__TypeCtorInfo_20_20;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__TypeCtorInfo_21_21;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__TypeCtorInfo_6_26 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__TypeCtorInfo_7_27;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__TypeCtorInfo_6_33;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__TypeCtorInfo_7_34;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Current_11;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Old_12;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__User_13;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Trusted_14;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__Counter_15;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__V_18_18;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__G_22;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__C_23;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__X_24;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__G_29;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__C_30;
#line 314 "declarative_oracle.m"
    MR_Word mdb__declarative_oracle__X_31;

#line 496 "declarative_oracle.m"
    {
#line 496 "declarative_oracle.m"
      mercury__map__init_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_oracle__TypeCtorInfo_6_26, &mdb__declarative_oracle__G_22);
    }
#line 8926 "mdb.declarative_oracle.c"
    mdb__declarative_oracle__TypeCtorInfo_7_27 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0;
#line 497 "declarative_oracle.m"
    {
#line 497 "declarative_oracle.m"
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_27, mdb__declarative_oracle__TypeCtorInfo_6_26, &mdb__declarative_oracle__C_23);
    }
#line 498 "declarative_oracle.m"
    {
#line 498 "declarative_oracle.m"
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_27, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, &mdb__declarative_oracle__X_24);
    }
#line 495 "declarative_oracle.m"
    {
#line 495 "declarative_oracle.m"
      mdb__declarative_oracle__Current_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 495 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current_11, 0) = ((MR_Box) (mdb__declarative_oracle__G_22));
#line 495 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current_11, 1) = ((MR_Box) (mdb__declarative_oracle__C_23));
#line 495 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Current_11, 2) = ((MR_Box) (mdb__declarative_oracle__X_24));
#line 495 "declarative_oracle.m"
    }
#line 8950 "mdb.declarative_oracle.c"
    mdb__declarative_oracle__TypeCtorInfo_6_33 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_decl_truth_0;
#line 496 "declarative_oracle.m"
    {
#line 496 "declarative_oracle.m"
      mercury__map__init_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_final_decl_atom_0, mdb__declarative_oracle__TypeCtorInfo_6_33, &mdb__declarative_oracle__G_29);
    }
#line 8957 "mdb.declarative_oracle.c"
    mdb__declarative_oracle__TypeCtorInfo_7_34 = (MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_init_decl_atom_0;
#line 497 "declarative_oracle.m"
    {
#line 497 "declarative_oracle.m"
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_34, mdb__declarative_oracle__TypeCtorInfo_6_33, &mdb__declarative_oracle__C_30);
    }
#line 498 "declarative_oracle.m"
    {
#line 498 "declarative_oracle.m"
      mercury__map__init_1_p_0(mdb__declarative_oracle__TypeCtorInfo_7_34, (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0, &mdb__declarative_oracle__X_31);
    }
#line 495 "declarative_oracle.m"
    {
#line 495 "declarative_oracle.m"
      mdb__declarative_oracle__Old_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 495 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Old_12, 0) = ((MR_Box) (mdb__declarative_oracle__G_29));
#line 495 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Old_12, 1) = ((MR_Box) (mdb__declarative_oracle__C_30));
#line 495 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_oracle__Old_12, 2) = ((MR_Box) (mdb__declarative_oracle__X_31));
#line 495 "declarative_oracle.m"
    }
#line 317 "declarative_oracle.m"
    {
#line 317 "declarative_oracle.m"
      mdb__declarative_user__user_state_init_5_p_0(mdb__declarative_oracle__InStr_6, mdb__declarative_oracle__OutStr_7, mdb__declarative_oracle__Browser_8, mdb__declarative_oracle__HelpSystem_9, &mdb__declarative_oracle__User_13);
    }
#line 8986 "mdb.declarative_oracle.c"
    mdb__declarative_oracle__TypeCtorInfo_20_20 = (MR_Word) &mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0;
#line 8988 "mdb.declarative_oracle.c"
    mdb__declarative_oracle__TypeCtorInfo_21_21 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 319 "declarative_oracle.m"
    {
#line 319 "declarative_oracle.m"
      mdb__declarative_oracle__V_18_18 = mercury__bimap__init_0_f_0(mdb__declarative_oracle__TypeCtorInfo_20_20, mdb__declarative_oracle__TypeCtorInfo_21_21);
    }
#line 319 "declarative_oracle.m"
    {
#line 319 "declarative_oracle.m"
      mercury__bimap__set_4_p_0(mdb__declarative_oracle__TypeCtorInfo_20_20, mdb__declarative_oracle__TypeCtorInfo_21_21, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), ((MR_Box) ((MR_Integer) 0)), mdb__declarative_oracle__V_18_18, &mdb__declarative_oracle__Trusted_14);
    }
#line 320 "declarative_oracle.m"
    {
#line 320 "declarative_oracle.m"
      mercury__counter__init_2_p_0((MR_Integer) 1, &mdb__declarative_oracle__Counter_15);
    }
#line 321 "declarative_oracle.m"
    {
#line 321 "declarative_oracle.m"
      MR_Word base;
#line 321 "declarative_oracle.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 321 "declarative_oracle.m"
      *mdb__declarative_oracle__Oracle_10 = base;
#line 321 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_oracle__Current_11));
#line 321 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_oracle__Old_12));
#line 321 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_oracle__User_13));
#line 321 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_oracle__Trusted_14));
#line 321 "declarative_oracle.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_oracle__Counter_15));
#line 321 "declarative_oracle.m"
    }
#line 314 "declarative_oracle.m"
  }
#line 69 "declarative_oracle.m"
}

#line 60 "declarative_oracle.m"
MR_bool MR_CALL 
mdb__declarative_oracle__oracle_response_undoable_1_p_0(
#line 60 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__TypeInfo_for_T_4,
#line 60 "declarative_oracle.m"
  MR_Word mdb__declarative_oracle__HeadVar__1_1)
#line 60 "declarative_oracle.m"
{
#line 737 "declarative_oracle.m"
  {
#line 737 "declarative_oracle.m"
    MR_bool mdb__declarative_oracle__succeeded;

#line 737 "declarative_oracle.m"
    if (((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 737 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = MR_TRUE;
#line 737 "declarative_oracle.m"
    else
#line 737 "declarative_oracle.m"
    if (((((MR_tag((MR_Word) mdb__declarative_oracle__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_oracle__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 738 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = MR_TRUE;
#line 737 "declarative_oracle.m"
    else
#line 737 "declarative_oracle.m"
      mdb__declarative_oracle__succeeded = MR_FALSE;
#line 737 "declarative_oracle.m"
    return mdb__declarative_oracle__succeeded;
#line 737 "declarative_oracle.m"
  }
#line 60 "declarative_oracle.m"
}

void mercury__mdb__declarative_oracle__init(void)
{
}

void mercury__mdb__declarative_oracle__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_known_exceptions_0);
	MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_kb_0);
	MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_response_1);
	MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0);
	MR_register_type_ctor_info(&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_trusted_object_0);
}

void mercury__mdb__declarative_oracle__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.declarative_oracle. */
