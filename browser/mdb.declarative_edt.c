/*
** Automatically generated from `declarative_edt.m'
** by the Mercury compiler,
** version rotd-2015-03-16
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


/* :- module mdb.declarative_edt. */
/* :- implementation. */

/*
INIT mercury__mdb__declarative_edt__init
ENDINIT
*/

#include "mdb.declarative_edt.mih"


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
#include "mdb.declarative_debugger.mih"
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




#line 93 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1;

#line 96 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1;

#line 99 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0;

#line 102 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2;

#line 105 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_builtin__type_ctor_info_int_0;

#line 108 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2;

#line 111 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_0;

#line 114 "mdb.declarative_edt.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0;

#line 117 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_1[4];

#line 120 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_1;

#line 123 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_2[5];

#line 126 "mdb.declarative_edt.c"
static const MR_DuArgLocn mdb__declarative_edt__mdb__declarative_edt__field_locns_find_origin_response_0_2[5];

#line 129 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_2;

#line 132 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_3;

#line 135 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_4;

#line 138 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_0[3];

#line 141 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_1[1];

#line 144 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_2[1];

#line 147 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_find_origin_response_0[3];

#line 150 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_find_origin_response_0[5];

#line 153 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_find_origin_response_0[5];

#line 156 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_0[1];

#line 159 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_0;

#line 162 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_1;

#line 165 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_2[1];

#line 168 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_2;

#line 171 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_0[1];

#line 174 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_1[1];

#line 177 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_2[1];

#line 180 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_maybe_found_descendant_0[3];

#line 183 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_maybe_found_descendant_0[3];

#line 186 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_maybe_found_descendant_0[3];

#line 189 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0;

#line 192 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1;

#line 195 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2;

#line 198 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3;

#line 201 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_primitive_op_type_0[4];

#line 204 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_primitive_op_type_0[4];

#line 207 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_primitive_op_type_0[4];

#line 210 "mdb.declarative_edt.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

#line 213 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_edt__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_mdb__declarative_edt__pti_suspect_1__pseudo_1;

#line 216 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_edt__bimap__pti_bimap_2__pseudo_1__pseudo_1;

#line 219 "mdb.declarative_edt.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1mdb__declarative_edt__type_ctor_info_weighting_heuristic_0;

#line 222 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_search_space_1_0[7];

#line 225 "mdb.declarative_edt.c"
static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__field_names_search_space_1_0[7];

#line 228 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_search_space_1_0;

#line 231 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_search_space_1_0[1];

#line 234 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_search_space_1[1];

#line 237 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_search_space_1[1];

#line 240 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_search_space_1[1];

#line 243 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0;

#line 246 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1;

#line 249 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_subterm_mode_0[2];

#line 252 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_subterm_mode_0[2];

#line 255 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_mode_0[2];

#line 258 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_0[3];

#line 261 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_0;

#line 264 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_1[2];

#line 267 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_1;

#line 270 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_2[3];

#line 273 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_2;

#line 276 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_3;

#line 279 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_4;

#line 282 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_0[2];

#line 285 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_1[1];

#line 288 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_2[1];

#line 291 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_3[1];

#line 294 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_subterm_origin_1[4];

#line 297 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_subterm_origin_1[5];

#line 300 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_origin_1[5];

#line 303 "mdb.declarative_edt.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0;

#line 306 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_1_0[6];

#line 309 "mdb.declarative_edt.c"
static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__field_names_suspect_1_0[6];

#line 312 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_1_0;

#line 315 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_1_0[1];

#line 318 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_1[1];

#line 321 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_1[1];

#line 324 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_1[1];

#line 327 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_0;

#line 330 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_status_0_1[1];

#line 333 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_1;

#line 336 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_2;

#line 339 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_3;

#line 342 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_4;

#line 345 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_5;

#line 348 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_6;

#line 351 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_7;

#line 354 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_0[7];

#line 357 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_1[1];

#line 360 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_status_0[2];

#line 363 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_status_0[8];

#line 366 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_status_0[8];

#line 369 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0;

#line 372 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1;

#line 375 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_weighting_heuristic_0[2];

#line 378 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_weighting_heuristic_0[2];

#line 381 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_weighting_heuristic_0[2];

#line 384 "mdb.declarative_edt.c"
static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__type_class_id_var_names_mercury_edt_2[2];

#line 387 "mdb.declarative_edt.c"
static const MR_TypeClassMethod mdb__declarative_edt__mdb__declarative_edt__type_class_id_method_ids_mercury_edt_2[15];

#line 390 "mdb.declarative_edt.c"
static const MR_TypeClassId mdb__declarative_edt__mdb__declarative_edt__type_class_id_mercury_edt_2;

#line 393 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____find_origin_response_0_0_10001(
#line 396 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 398 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2);

#line 401 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____find_origin_response_0_0_10001(
#line 404 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 406 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 408 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3);

#line 411 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____maybe_found_descendant_0_0_10001(
#line 414 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 416 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2);

#line 419 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____maybe_found_descendant_0_0_10001(
#line 422 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 424 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 426 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3);

#line 429 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____primitive_op_type_0_0_10001(
#line 432 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 434 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2);

#line 437 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____primitive_op_type_0_0_10001(
#line 440 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 442 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 444 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3);

#line 447 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____search_space_1_0_10001(
#line 450 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 452 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 454 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3);

#line 457 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____search_space_1_0_10001(
#line 460 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 462 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
#line 464 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3,
#line 466 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_4);

#line 469 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_mode_0_0_10001(
#line 472 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 474 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2);

#line 477 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____subterm_mode_0_0_10001(
#line 480 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 482 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 484 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3);

#line 487 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_origin_1_0_10001(
#line 490 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 492 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 494 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3);

#line 497 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____subterm_origin_1_0_10001(
#line 500 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 502 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
#line 504 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3,
#line 506 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_4);

#line 509 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_1_0_10001(
#line 512 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 514 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 516 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3);

#line 519 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0_10001(
#line 522 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 524 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
#line 526 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3,
#line 528 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_4);

#line 531 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_id_0_0_10001(
#line 534 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 536 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2);

#line 539 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____suspect_id_0_0_10001(
#line 542 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 544 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 546 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3);

#line 549 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0_10001(
#line 552 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 554 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2);

#line 557 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____suspect_status_0_0_10001(
#line 560 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 562 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 564 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3);

#line 567 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____weighting_heuristic_0_0_10001(
#line 570 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 572 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2);

#line 575 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____weighting_heuristic_0_0_10001(
#line 578 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 580 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 582 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3);

#line 1582 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(
#line 1582 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65,
#line 1582 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_1,
#line 1582 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3,
#line 1582 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__ParentId_4,
#line 1582 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_5,
#line 1582 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__Depth_6,
#line 1582 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7,
#line 1582 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_8,
#line 1582 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_Counter_0_9,
#line 1582 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_Counter_10,
#line 1582 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__11_11);

#line 1888 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1888__1_3_p_0(
#line 1888 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
#line 1888 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
#line 1888 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_41);

#line 1881 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1881__1_3_p_0(
#line 1881 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
#line 1881 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
#line 1881 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_37);

#line 1529 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1529__1_2_p_0(
#line 1529 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 1529 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__2_46);

#line 1380 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1380__1_2_p_0(
#line 1380 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__Ancestor_7,
#line 1380 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__2_28);

#line 1302 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1302__1_4_p_0(
#line 1302 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
#line 1302 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_74,
#line 1302 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_75,
#line 1302 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__HeadVar__4_76);

#line 1297 "declarative_edt.m"
static MR_Box MR_CALL 
mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1297__1_2_f_0(
#line 1297 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
#line 1297 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_30);

#line 1295 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1295__1_4_p_0(
#line 1295 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
#line 1295 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_12,
#line 1295 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_58,
#line 1295 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__4_59);

#line 2025 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2025__1_3_p_0(
#line 2025 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46,
#line 2025 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15,
#line 2025 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_57);

#line 918 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__918__1_3_p_0(
#line 918 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81,
#line 918 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42,
#line 918 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_98);

#line 904 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__904__1_6_p_0(
#line 904 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81,
#line 904 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_27,
#line 904 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_28,
#line 904 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__4_84,
#line 904 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__5_85,
#line 904 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__6_86);

#line 615 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt____Compare____suspect_status_0_0(
#line 615 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3);

#line 615 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0(
#line 615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2);

#line 586 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0(
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
#line 586 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3);

#line 586 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_1_0(
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_17,
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2);

#line 1991 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__get_path_5_p_0(
#line 1991 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_20,
#line 1991 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_6,
#line 1991 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__BottomId_7,
#line 1991 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__TopId_8,
#line 1991 "declarative_edt.m"
  MR_Word mdb__declarative_edt__PathSoFar_9,
#line 1991 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Path_10);

#line 1933 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__get_children_list_7_p_0(
#line 1933 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_26,
#line 1933 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_1,
#line 1933 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_2,
#line 1933 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3,
#line 1933 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__4_4,
#line 1933 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__5_5,
#line 1933 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__6_6,
#line 1933 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__7_7);

#line 1888 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_2(
#line 1888 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1888 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1);

#line 1881 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_1(
#line 1881 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1881 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1);

#line 1875 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0(
#line 1875 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
#line 1875 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_7,
#line 1875 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_8,
#line 1875 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SuspectList_9,
#line 1875 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
#line 1875 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26,
#line 1875 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__MaybeFound_11);

#line 1841 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__least_skipped_5_p_0(
#line 1841 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_21,
#line 1841 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_6,
#line 1841 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId1_7,
#line 1841 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Suspect1_8,
#line 1841 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId2_9,
#line 1841 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__LeastSkipped_10);

#line 1763 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__find_node_in_list_4_p_0(
#line 1763 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_12,
#line 1763 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_5,
#line 1763 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 1763 "declarative_edt.m"
  MR_Box mdb__declarative_edt__NodeToMatch_8,
#line 1763 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__Pos_9);

#line 1690 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__insert_new_topmost_node_5_p_0(
#line 1690 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154,
#line 1690 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_6,
#line 1690 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_7,
#line 1690 "declarative_edt.m"
  MR_Box mdb__declarative_edt__NewTopMostEDTNode_8,
#line 1690 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32,
#line 1690 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33);

#line 1615 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(
#line 1615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34,
#line 1615 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_6,
#line 1615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_7,
#line 1615 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_8,
#line 1615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16,
#line 1615 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);

#line 1564 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0_1(
#line 1564 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1564 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1564 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1564 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3);

#line 1547 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0(
#line 1547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88,
#line 1547 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_9,
#line 1547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_10,
#line 1547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__EDTChildren_11,
#line 1547 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_12,
#line 1547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_13,
#line 1547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24,
#line 1547 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25,
#line 1547 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Children_15);

#line 1529 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__get_siblings_3_p_0_1(
#line 1529 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1529 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1);

#line 1517 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__get_siblings_3_p_0(
#line 1517 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_45,
#line 1517 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_4,
#line 1517 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 1517 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Siblings_6);

#line 1498 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0_1(
#line 1498 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1498 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1498 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1498 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3);

#line 1488 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0(
#line 1488 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_47,
#line 1488 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_7,
#line 1488 "declarative_edt.m"
  MR_Word mdb__declarative_edt__StopStatusSet_8,
#line 1488 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_9,
#line 1488 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__Lowest_10,
#line 1488 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16,
#line 1488 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);

#line 1469 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0_1(
#line 1469 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1469 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1469 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_2);

#line 1456 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(
#line 1456 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63,
#line 1456 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_5,
#line 1456 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_6,
#line 1456 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_7,
#line 1456 "declarative_edt.m"
  MR_String * mdb__declarative_edt__Message_8);

#line 1391 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(
#line 1391 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_64,
#line 1391 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_1,
#line 1391 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 1391 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3,
#line 1391 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Parents_4,
#line 1391 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5,
#line 1391 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_6);

#line 1380 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0_1(
#line 1380 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1380 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1);

#line 1373 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(
#line 1373 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27,
#line 1373 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_6,
#line 1373 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__Ancestor_7,
#line 1373 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SuspectIds_8,
#line 1373 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17,
#line 1373 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18);

#line 1356 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__add_original_weight_7_p_0(
#line 1356 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15,
#line 1356 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Weighting_8,
#line 1356 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_9,
#line 1356 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_10,
#line 1356 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__Prev_11,
#line 1356 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__HeadVar__5_5,
#line 1356 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__PrevExcess_13,
#line 1356 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__HeadVar__7_7);

#line 1331 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__add_weight_to_ancestors_4_p_0(
#line 1331 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_42,
#line 1331 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 1331 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__Weight_6,
#line 1331 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12,
#line 1331 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13);

#line 1302 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_4(
#line 1302 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1302 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1302 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1302 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3);

#line 1299 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_3(
#line 1299 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1299 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1299 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1299 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
#line 1299 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_4,
#line 1299 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_5);

#line 1297 "declarative_edt.m"
static MR_Box MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_2(
#line 1297 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1297 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1);

#line 1295 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_1(
#line 1295 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1295 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1295 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_2);

#line 1273 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0(
#line 1273 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
#line 1273 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_8,
#line 1273 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_9,
#line 1273 "declarative_edt.m"
  MR_Word mdb__declarative_edt__MaybeChildren_10,
#line 1273 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_11,
#line 1273 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_12,
#line 1273 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__Weight_13,
#line 1273 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__ExcessWeight_14);

#line 1252 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__should_check_search_space_consistency_0_p_0(void);

#line 1224 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0_1(
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1224 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_4,
#line 1224 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_5);

#line 1214 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0(
#line 1214 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_39,
#line 1214 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_7,
#line 1214 "declarative_edt.m"
  MR_Word mdb__declarative_edt__StopStatusSet_8,
#line 1214 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_9,
#line 1214 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__StopSuspects_10,
#line 1214 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14,
#line 1214 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15);

#line 1224 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_5_p_0_1(
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1224 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_4,
#line 1224 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_5);

#line 1205 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_5_p_0(
#line 1205 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_14,
#line 1205 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_6,
#line 1205 "declarative_edt.m"
  MR_Word mdb__declarative_edt__StopStatusSet_7,
#line 1205 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_8,
#line 1205 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
#line 1205 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);

#line 1192 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0_1(
#line 1192 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1192 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1192 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1192 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
#line 1192 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_4,
#line 1192 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_5);

#line 1179 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0(
#line 1179 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_49,
#line 1179 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_8,
#line 1179 "declarative_edt.m"
  MR_Word mdb__declarative_edt__StopStatusSet_9,
#line 1179 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_10,
#line 1179 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_StopSuspects_0_15,
#line 1179 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_StopSuspects_16,
#line 1179 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17,
#line 1179 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18);

#line 1169 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_5_p_0(
#line 1169 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_14,
#line 1169 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_6,
#line 1169 "declarative_edt.m"
  MR_Word mdb__declarative_edt__StopStatusSet_7,
#line 1169 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_8,
#line 1169 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
#line 1169 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);

#line 1141 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__set_suspect_4_p_0(
#line 1141 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_26,
#line 1141 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 1141 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Suspect_6,
#line 1141 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10,
#line 1141 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11);

#line 1129 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__lookup_suspect_3_p_0(
#line 1129 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_18,
#line 1129 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_4,
#line 1129 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 1129 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Suspect_6);

#line 1112 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__find_edt_node_in_suspect_list_4_p_0(
#line 1112 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
#line 1112 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 1112 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_7,
#line 1112 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_8,
#line 1112 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__FoundId_9);

#line 1072 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_p_0(
#line 1072 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42,
#line 1072 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_8,
#line 1072 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_9,
#line 1072 "declarative_edt.m"
  MR_Word mdb__declarative_edt__OutputArgPos_10,
#line 1072 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TermPath_11,
#line 1072 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_TriedProcs_0_36,
#line 1072 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_TriedProcs_37,
#line 1072 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__MaybeInitialVersionArgPos_13);

#line 1023 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__resolve_origin_10_p_0(
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50,
#line 1023 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_11,
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_12,
#line 1023 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_13,
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__ArgPos_14,
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TermPath_15,
#line 1023 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_16,
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Output_17,
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34,
#line 1023 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35,
#line 1023 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Response_19);

#line 928 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__suspect_is_leaf_2_p_0(
#line 928 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_19,
#line 928 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 928 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4);

#line 840 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0_1(
#line 840 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 840 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 840 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 840 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3);

#line 831 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0(
#line 831 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_87,
#line 831 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_5,
#line 831 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_6,
#line 831 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
#line 831 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);

#line 813 "declarative_edt.m"
static MR_Word MR_CALL 
mdb__declarative_edt__new_parent_status_1_f_0(
#line 813 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1);

#line 797 "declarative_edt.m"
static MR_Word MR_CALL 
mdb__declarative_edt__new_child_status_1_f_0(
#line 797 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1);

#line 768 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__excluded_complement_2_p_0(
#line 768 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 768 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__2_2);

#line 2025 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__update_weighting_heuristic_4_p_0_1(
#line 2025 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 2025 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1);

#line 918 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_2(
#line 918 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 918 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1);

#line 904 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_1(
#line 904 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 904 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 904 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 904 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3);

#line 1825 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__choose_skipped_suspect_2_p_0_1(
#line 1825 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1825 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1825 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1825 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_3,
#line 1825 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_4);


static /* final */ const MR_Box mdb__declarative_edt_scalar_common_1[18][2];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_2[1][1];

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_3[1][2];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_4[4][9];

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_5[2][3];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_6[2][6];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_7[2][11];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_8[2][7];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_9[1][5];

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_10[1][8];




static /* final */ const MR_Box mdb__declarative_edt_scalar_common_1[18][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_edt_scalar_common_1[0]))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[4])))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[5])))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "topmost_det")),
    ((MR_Box) ((MR_String) "search space empty"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "incorporate_explicit_supertree")),
    ((MR_Box) ((MR_String) "no parent"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "revise_root")),
    ((MR_Box) ((MR_String) "no root"))
  },
  /* row 10 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "resolve_origin")),
    ((MR_Box) ((MR_String) "output origin for input subterm not in siblings"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "lookup_suspect")),
    ((MR_Box) ((MR_String) "couldn\'t find suspect"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "get_siblings")),
    ((MR_Box) ((MR_String) "parent\'s children unexplored"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "get_siblings")),
    ((MR_Box) ((MR_String) "parent has no children"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "insert_new_topmost_node")),
    ((MR_Box) ((MR_String) "invalid position"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "insert_new_topmost_node")),
    ((MR_Box) ((MR_String) "couldn\'t find event number"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "insert_new_topmost_node")),
    ((MR_Box) ((MR_String) "couldn\'t get new topmost node\'s children"))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_3[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_4[4][9] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2))
  },
  /* row 2 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1))
  },
  /* row 3 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_5[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 6)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_oracle__mdb__declarative_oracle__type_ctor_info_oracle_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2))
  },
};

static /* final */ const MR_Integer mdb__declarative_edt_scalar_common_5[2][3] = {
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

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_6[2][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_7[2][11] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_3[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__list__pti_list_1__plain_builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_5[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_8[2][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_9[1][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mdb__declarative_edt_scalar_common_10[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mdb__declarative_edt_scalar_common_5[1])),
    ((MR_Box) (MR_Word) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_typeclass_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};



#include "mdb.declarative_edt.mh"
#include "mdb.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"



#line 1766 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1774 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1782 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_mdb__declarative_edt__type_ctor_info_suspect_status_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0
  }
};

#line 1790 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_search_space_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1798 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__list__pti_list_1__plain_builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1806 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 1814 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_0 = {
  (MR_String) "not_found",
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

#line 1829 "mdb.declarative_edt.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 1837 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_1[4] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_mode_0
};

#line 1845 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_1 = {
  (MR_String) "origin",
  (MR_Integer) 4,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_1,
  NULL,
  NULL,
  NULL
};

#line 1860 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_2[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0,
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

#line 1869 "mdb.declarative_edt.c"
static const MR_DuArgLocn mdb__declarative_edt__mdb__declarative_edt__field_locns_find_origin_response_0_2[5] = {
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
    (MR_Integer) 2
  },
  {
    (MR_Integer) 3,
    (MR_Integer) 2,
    (MR_Integer) 1
  }
};

#line 1898 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_2 = {
  (MR_String) "primitive_op",
  (MR_Integer) 5,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_edt__mdb__declarative_edt__field_types_find_origin_response_0_2,
  NULL,
  mdb__declarative_edt__mdb__declarative_edt__field_locns_find_origin_response_0_2,
  NULL
};

#line 1913 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_3 = {
  (MR_String) "require_explicit_subtree",
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

#line 1928 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_4 = {
  (MR_String) "require_explicit_supertree",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1943 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_0[3] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_4
};

#line 1950 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_1
};

#line 1955 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_2[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_2
};

#line 1960 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_find_origin_response_0[3] = {
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_find_origin_response_0_2
  }
};

#line 1979 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_find_origin_response_0[5] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_1,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_2,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_find_origin_response_0_4
};

#line 1988 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_find_origin_response_0[5] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4
};

#line 1997 "mdb.declarative_edt.c"
const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_find_origin_response_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____find_origin_response_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____find_origin_response_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "find_origin_response",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_find_origin_response_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_find_origin_response_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_find_origin_response_0
};

#line 2014 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2019 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_0 = {
  (MR_String) "found",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_0,
  NULL,
  NULL,
  NULL
};

#line 2034 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_1 = {
  (MR_String) "not_found",
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

#line 2049 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2054 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_2 = {
  (MR_String) "require_explicit_subtree",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_edt__mdb__declarative_edt__field_types_maybe_found_descendant_0_2,
  NULL,
  NULL,
  NULL
};

#line 2069 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_0[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_1
};

#line 2074 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_0
};

#line 2079 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_2[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_2
};

#line 2084 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_maybe_found_descendant_0[3] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_maybe_found_descendant_0_2
  }
};

#line 2103 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_maybe_found_descendant_0[3] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_1,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_maybe_found_descendant_0_2
};

#line 2110 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_maybe_found_descendant_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

#line 2117 "mdb.declarative_edt.c"
const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_maybe_found_descendant_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____maybe_found_descendant_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____maybe_found_descendant_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "maybe_found_descendant",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_maybe_found_descendant_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_maybe_found_descendant_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_maybe_found_descendant_0
};

#line 2134 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0 = {
  (MR_String) "primop_foreign_proc",
  (MR_Integer) 0
};

#line 2140 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1 = {
  (MR_String) "primop_builtin_call",
  (MR_Integer) 1
};

#line 2146 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2 = {
  (MR_String) "primop_untraced_call",
  (MR_Integer) 2
};

#line 2152 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3 = {
  (MR_String) "primop_unification",
  (MR_Integer) 3
};

#line 2158 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_primitive_op_type_0[4] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3
};

#line 2166 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_primitive_op_type_0[4] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_1,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_3,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_primitive_op_type_0_2
};

#line 2174 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_primitive_op_type_0[4] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 2
};

#line 2182 "mdb.declarative_edt.c"
const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_edt____Unify____primitive_op_type_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____primitive_op_type_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "primitive_op_type",
  {     mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_primitive_op_type_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_primitive_op_type_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_primitive_op_type_0
};

#line 2199 "mdb.declarative_edt.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

#line 2207 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_edt__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_mdb__declarative_edt__pti_suspect_1__pseudo_1 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
    (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__pti_suspect_1__pseudo_1
  }
};

#line 2216 "mdb.declarative_edt.c"
static const MR_FA_PseudoTypeInfo_Struct2 mdb__declarative_edt__bimap__pti_bimap_2__pseudo_1__pseudo_1 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 2225 "mdb.declarative_edt.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1mdb__declarative_edt__type_ctor_info_weighting_heuristic_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
  }
};

#line 2233 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_search_space_1_0[7] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mercury__counter__counter__type_ctor_info_counter_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__tree234__pti_tree234_2__plain_builtin__type_ctor_info_int_0__pseudo_mdb__declarative_edt__pti_suspect_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__bimap__pti_bimap_2__pseudo_1__pseudo_1,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__maybe__ti_maybe_1mdb__declarative_edt__type_ctor_info_weighting_heuristic_0
};

#line 2244 "mdb.declarative_edt.c"
static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__field_names_search_space_1_0[7] = {
  (MR_String) "root",
  (MR_String) "topmost",
  (MR_String) "suspect_id_counter",
  (MR_String) "skip_counter",
  (MR_String) "store",
  (MR_String) "implicit_to_explicit_roots",
  (MR_String) "maybe_weighting_heuristic"
};

#line 2255 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_search_space_1_0 = {
  (MR_String) "search_space",
  (MR_Integer) 7,
  (MR_Integer) 48,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_edt__mdb__declarative_edt__field_types_search_space_1_0,
  mdb__declarative_edt__mdb__declarative_edt__field_names_search_space_1_0,
  NULL,
  NULL
};

#line 2270 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_search_space_1_0[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_search_space_1_0
};

#line 2275 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_search_space_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_search_space_1_0
  }
};

#line 2284 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_search_space_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_search_space_1_0
};

#line 2289 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_search_space_1[1] = {
  (MR_Integer) 0
};

#line 2294 "mdb.declarative_edt.c"
const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____search_space_1_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____search_space_1_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "search_space",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_search_space_1 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_search_space_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_search_space_1
};

#line 2311 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0 = {
  (MR_String) "subterm_in",
  (MR_Integer) 0
};

#line 2317 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1 = {
  (MR_String) "subterm_out",
  (MR_Integer) 1
};

#line 2323 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_subterm_mode_0[2] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1
};

#line 2329 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_subterm_mode_0[2] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_subterm_mode_0_1
};

#line 2335 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_mode_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2341 "mdb.declarative_edt.c"
const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_mode_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_edt____Unify____subterm_mode_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____subterm_mode_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "subterm_mode",
  {     mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_subterm_mode_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_subterm_mode_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_mode_0
};

#line 2358 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_0[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2365 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_0 = {
  (MR_String) "origin_output",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_0,
  NULL,
  NULL,
  NULL
};

#line 2380 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__program_representation__mdbcomp__program_representation__type_ctor_info_arg_pos_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0
};

#line 2386 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_1 = {
  (MR_String) "origin_input",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_1,
  NULL,
  NULL,
  NULL
};

#line 2401 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_2[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0
};

#line 2408 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_2 = {
  (MR_String) "origin_primitive_op",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_edt__mdb__declarative_edt__field_types_subterm_origin_1_2,
  NULL,
  NULL,
  NULL
};

#line 2423 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_3 = {
  (MR_String) "origin_not_found",
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

#line 2438 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_4 = {
  (MR_String) "origin_require_explicit_subtree",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2453 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_0[2] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_4
};

#line 2459 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_0
};

#line 2464 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_2[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_1
};

#line 2469 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_3[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_2
};

#line 2474 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_subterm_origin_1[4] = {
  {
    (MR_Integer) 2,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_2
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_subterm_origin_1_3
  }
};

#line 2498 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_subterm_origin_1[5] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_1,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_2,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_subterm_origin_1_4
};

#line 2507 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_origin_1[5] = {
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4
};

#line 2516 "mdb.declarative_edt.c"
const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____subterm_origin_1_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____subterm_origin_1_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "subterm_origin",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_subterm_origin_1 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_subterm_origin_1 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_subterm_origin_1
};

#line 2533 "mdb.declarative_edt.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_edt__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_edt__list__ti_list_1builtin__type_ctor_info_int_0
  }
};

#line 2541 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_1_0[6] = {
  (MR_PseudoTypeInfo) &mdb__declarative_edt__maybe__ti_maybe_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_edt__maybe__ti_maybe_1list__ti_list_1builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2551 "mdb.declarative_edt.c"
static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__field_names_suspect_1_0[6] = {
  (MR_String) "parent",
  (MR_String) "edt_node",
  (MR_String) "status",
  (MR_String) "depth",
  (MR_String) "children",
  (MR_String) "weight"
};

#line 2561 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_1_0 = {
  (MR_String) "suspect",
  (MR_Integer) 6,
  (MR_Integer) 2,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_1_0,
  mdb__declarative_edt__mdb__declarative_edt__field_names_suspect_1_0,
  NULL,
  NULL
};

#line 2576 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_1_0[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_1_0
};

#line 2581 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_1_0
  }
};

#line 2590 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_1_0
};

#line 2595 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_1[1] = {
  (MR_Integer) 0
};

#line 2600 "mdb.declarative_edt.c"
const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____suspect_1_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____suspect_1_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "suspect",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_1 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_1
};

#line 2617 "mdb.declarative_edt.c"
const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_edt____Unify____suspect_id_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____suspect_id_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "suspect_id",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2634 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_0 = {
  (MR_String) "suspect_ignored",
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

#line 2649 "mdb.declarative_edt.c"
static const MR_PseudoTypeInfo mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_status_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2654 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_1 = {
  (MR_String) "suspect_skipped",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_edt__mdb__declarative_edt__field_types_suspect_status_0_1,
  NULL,
  NULL,
  NULL
};

#line 2669 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_2 = {
  (MR_String) "suspect_correct",
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

#line 2684 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_3 = {
  (MR_String) "suspect_erroneous",
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

#line 2699 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_4 = {
  (MR_String) "suspect_inadmissible",
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

#line 2714 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_5 = {
  (MR_String) "suspect_pruned",
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

#line 2729 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_6 = {
  (MR_String) "suspect_in_erroneous_subtree_complement",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2744 "mdb.declarative_edt.c"
static const MR_DuFunctorDesc mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_7 = {
  (MR_String) "suspect_unknown",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 2759 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_0[7] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_2,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_4,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_5,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_6,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_7
};

#line 2770 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_1[1] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_1
};

#line 2775 "mdb.declarative_edt.c"
static const MR_DuPtagLayout mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_status_0[2] = {
  {
    (MR_Integer) 7,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_edt__mdb__declarative_edt__du_stag_ordered_suspect_status_0_1
  }
};

#line 2789 "mdb.declarative_edt.c"
static const MR_DuFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_status_0[8] = {
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_2,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_3,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_6,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_4,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_5,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_1,
  &mdb__declarative_edt__mdb__declarative_edt__du_functor_desc_suspect_status_0_7
};

#line 2801 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_status_0[8] = {
  (MR_Integer) 2,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 7
};

#line 2813 "mdb.declarative_edt.c"
const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_edt____Unify____suspect_status_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____suspect_status_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "suspect_status",
  {     mdb__declarative_edt__mdb__declarative_edt__du_name_ordered_suspect_status_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__du_ptag_ordered_suspect_status_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_suspect_status_0
};

#line 2830 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0 = {
  (MR_String) "number_of_events",
  (MR_Integer) 0
};

#line 2836 "mdb.declarative_edt.c"
static const MR_EnumFunctorDesc mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1 = {
  (MR_String) "suspicion",
  (MR_Integer) 1
};

#line 2842 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_weighting_heuristic_0[2] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1
};

#line 2848 "mdb.declarative_edt.c"
static const MR_EnumFunctorDescPtr mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_weighting_heuristic_0[2] = {
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_0,
  &mdb__declarative_edt__mdb__declarative_edt__enum_functor_desc_weighting_heuristic_0_1
};

#line 2854 "mdb.declarative_edt.c"
static const MR_Integer mdb__declarative_edt__mdb__declarative_edt__functor_number_map_weighting_heuristic_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2860 "mdb.declarative_edt.c"
const MR_TypeCtorInfo_Struct mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_edt____Unify____weighting_heuristic_0_0_10001)),
  ((MR_Box) (mdb__declarative_edt____Compare____weighting_heuristic_0_0_10001)),
  (MR_String) "mdb.declarative_edt",
  (MR_String) "weighting_heuristic",
  {     mdb__declarative_edt__mdb__declarative_edt__enum_name_ordered_weighting_heuristic_0 },
  {     mdb__declarative_edt__mdb__declarative_edt__enum_value_ordered_weighting_heuristic_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_edt__mdb__declarative_edt__functor_number_map_weighting_heuristic_0
};

#line 2877 "mdb.declarative_edt.c"
static const MR_ConstString mdb__declarative_edt__mdb__declarative_edt__type_class_id_var_names_mercury_edt_2[2] = {
  (MR_String) "S",
  (MR_String) "T"
};

#line 2883 "mdb.declarative_edt.c"
static const MR_TypeClassMethod mdb__declarative_edt__mdb__declarative_edt__type_class_id_method_ids_mercury_edt_2[15] = {
  {
    (MR_String) "edt_question",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_get_e_bug",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_get_i_bug",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_children",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_parent",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_dependency",
    (MR_Integer) 6,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_subterm_mode",
    (MR_Integer) 5,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_is_implicit_root",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_same_nodes",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_topmost_node",
    (MR_Integer) 2,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_number_of_events",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_subtree_suspicion",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_context",
    (MR_Integer) 4,
    mercury__private_builtin__MR_PREDICATE
  },
  {
    (MR_String) "edt_proc_label",
    (MR_Integer) 3,
    mercury__private_builtin__MR_FUNCTION
  },
  {
    (MR_String) "edt_arg_pos_to_user_arg_num",
    (MR_Integer) 4,
    mercury__private_builtin__MR_FUNCTION
  }
};

#line 2962 "mdb.declarative_edt.c"
static const MR_TypeClassId mdb__declarative_edt__mdb__declarative_edt__type_class_id_mercury_edt_2 = {
  (MR_String) "mdb.declarative_edt",
  (MR_String) "mercury_edt",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 15,
  mdb__declarative_edt__mdb__declarative_edt__type_class_id_var_names_mercury_edt_2,
  mdb__declarative_edt__mdb__declarative_edt__type_class_id_method_ids_mercury_edt_2
};

#line 2973 "mdb.declarative_edt.c"
const MR_TypeClassDeclStruct mdb__declarative_edt__mdb__declarative_edt__type_class_decl_mercury_edt_2 = {
  &mdb__declarative_edt__mdb__declarative_edt__type_class_id_mercury_edt_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 2981 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____find_origin_response_0_0_10001(
#line 2984 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 2986 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2)
#line 2988 "mdb.declarative_edt.c"
{
#line 2990 "mdb.declarative_edt.c"
  {
#line 2992 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;

#line 2995 "mdb.declarative_edt.c"
    {
#line 2997 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____find_origin_response_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
#line 3000 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 3002 "mdb.declarative_edt.c"
  }
#line 3004 "mdb.declarative_edt.c"
}

#line 3007 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____find_origin_response_0_0_10001(
#line 3010 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 3012 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 3014 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3)
#line 3016 "mdb.declarative_edt.c"
{
#line 3018 "mdb.declarative_edt.c"
  {
#line 3020 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

#line 3023 "mdb.declarative_edt.c"
    {
#line 3025 "mdb.declarative_edt.c"
      mdb__declarative_edt____Compare____find_origin_response_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
#line 3028 "mdb.declarative_edt.c"
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
#line 3030 "mdb.declarative_edt.c"
  }
#line 3032 "mdb.declarative_edt.c"
}

#line 3035 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____maybe_found_descendant_0_0_10001(
#line 3038 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3040 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2)
#line 3042 "mdb.declarative_edt.c"
{
#line 3044 "mdb.declarative_edt.c"
  {
#line 3046 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;

#line 3049 "mdb.declarative_edt.c"
    {
#line 3051 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____maybe_found_descendant_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
#line 3054 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 3056 "mdb.declarative_edt.c"
  }
#line 3058 "mdb.declarative_edt.c"
}

#line 3061 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____maybe_found_descendant_0_0_10001(
#line 3064 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 3066 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 3068 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3)
#line 3070 "mdb.declarative_edt.c"
{
#line 3072 "mdb.declarative_edt.c"
  {
#line 3074 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

#line 3077 "mdb.declarative_edt.c"
    {
#line 3079 "mdb.declarative_edt.c"
      mdb__declarative_edt____Compare____maybe_found_descendant_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
#line 3082 "mdb.declarative_edt.c"
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
#line 3084 "mdb.declarative_edt.c"
  }
#line 3086 "mdb.declarative_edt.c"
}

#line 3089 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____primitive_op_type_0_0_10001(
#line 3092 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3094 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2)
#line 3096 "mdb.declarative_edt.c"
{
#line 3098 "mdb.declarative_edt.c"
  {
#line 3100 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;

#line 3103 "mdb.declarative_edt.c"
    {
#line 3105 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____primitive_op_type_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
#line 3108 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 3110 "mdb.declarative_edt.c"
  }
#line 3112 "mdb.declarative_edt.c"
}

#line 3115 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____primitive_op_type_0_0_10001(
#line 3118 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 3120 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 3122 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3)
#line 3124 "mdb.declarative_edt.c"
{
#line 3126 "mdb.declarative_edt.c"
  {
#line 3128 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

#line 3131 "mdb.declarative_edt.c"
    {
#line 3133 "mdb.declarative_edt.c"
      mdb__declarative_edt____Compare____primitive_op_type_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
#line 3136 "mdb.declarative_edt.c"
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
#line 3138 "mdb.declarative_edt.c"
  }
#line 3140 "mdb.declarative_edt.c"
}

#line 3143 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____search_space_1_0_10001(
#line 3146 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3148 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 3150 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3)
#line 3152 "mdb.declarative_edt.c"
{
#line 3154 "mdb.declarative_edt.c"
  {
#line 3156 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;

#line 3159 "mdb.declarative_edt.c"
    {
#line 3161 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____search_space_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
#line 3164 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 3166 "mdb.declarative_edt.c"
  }
#line 3168 "mdb.declarative_edt.c"
}

#line 3171 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____search_space_1_0_10001(
#line 3174 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3176 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
#line 3178 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3,
#line 3180 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_4)
#line 3182 "mdb.declarative_edt.c"
{
#line 3184 "mdb.declarative_edt.c"
  {
#line 3186 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

#line 3189 "mdb.declarative_edt.c"
    {
#line 3191 "mdb.declarative_edt.c"
      mdb__declarative_edt____Compare____search_space_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), &mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_3), ((MR_Word) mdb__declarative_edt__wrapper_arg_4));
    }
#line 3194 "mdb.declarative_edt.c"
    *mdb__declarative_edt__wrapper_arg_2 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
#line 3196 "mdb.declarative_edt.c"
  }
#line 3198 "mdb.declarative_edt.c"
}

#line 3201 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_mode_0_0_10001(
#line 3204 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3206 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2)
#line 3208 "mdb.declarative_edt.c"
{
#line 3210 "mdb.declarative_edt.c"
  {
#line 3212 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;

#line 3215 "mdb.declarative_edt.c"
    {
#line 3217 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____subterm_mode_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
#line 3220 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 3222 "mdb.declarative_edt.c"
  }
#line 3224 "mdb.declarative_edt.c"
}

#line 3227 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____subterm_mode_0_0_10001(
#line 3230 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 3232 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 3234 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3)
#line 3236 "mdb.declarative_edt.c"
{
#line 3238 "mdb.declarative_edt.c"
  {
#line 3240 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

#line 3243 "mdb.declarative_edt.c"
    {
#line 3245 "mdb.declarative_edt.c"
      mdb__declarative_edt____Compare____subterm_mode_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
#line 3248 "mdb.declarative_edt.c"
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
#line 3250 "mdb.declarative_edt.c"
  }
#line 3252 "mdb.declarative_edt.c"
}

#line 3255 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_origin_1_0_10001(
#line 3258 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3260 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 3262 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3)
#line 3264 "mdb.declarative_edt.c"
{
#line 3266 "mdb.declarative_edt.c"
  {
#line 3268 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;

#line 3271 "mdb.declarative_edt.c"
    {
#line 3273 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____subterm_origin_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
#line 3276 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 3278 "mdb.declarative_edt.c"
  }
#line 3280 "mdb.declarative_edt.c"
}

#line 3283 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____subterm_origin_1_0_10001(
#line 3286 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3288 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
#line 3290 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3,
#line 3292 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_4)
#line 3294 "mdb.declarative_edt.c"
{
#line 3296 "mdb.declarative_edt.c"
  {
#line 3298 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

#line 3301 "mdb.declarative_edt.c"
    {
#line 3303 "mdb.declarative_edt.c"
      mdb__declarative_edt____Compare____subterm_origin_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), &mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_3), ((MR_Word) mdb__declarative_edt__wrapper_arg_4));
    }
#line 3306 "mdb.declarative_edt.c"
    *mdb__declarative_edt__wrapper_arg_2 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
#line 3308 "mdb.declarative_edt.c"
  }
#line 3310 "mdb.declarative_edt.c"
}

#line 3313 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_1_0_10001(
#line 3316 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3318 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 3320 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3)
#line 3322 "mdb.declarative_edt.c"
{
#line 3324 "mdb.declarative_edt.c"
  {
#line 3326 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;

#line 3329 "mdb.declarative_edt.c"
    {
#line 3331 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____suspect_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
#line 3334 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 3336 "mdb.declarative_edt.c"
  }
#line 3338 "mdb.declarative_edt.c"
}

#line 3341 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0_10001(
#line 3344 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3346 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_2,
#line 3348 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3,
#line 3350 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_4)
#line 3352 "mdb.declarative_edt.c"
{
#line 3354 "mdb.declarative_edt.c"
  {
#line 3356 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

#line 3359 "mdb.declarative_edt.c"
    {
#line 3361 "mdb.declarative_edt.c"
      mdb__declarative_edt____Compare____suspect_1_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), &mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_3), ((MR_Word) mdb__declarative_edt__wrapper_arg_4));
    }
#line 3364 "mdb.declarative_edt.c"
    *mdb__declarative_edt__wrapper_arg_2 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
#line 3366 "mdb.declarative_edt.c"
  }
#line 3368 "mdb.declarative_edt.c"
}

#line 3371 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_id_0_0_10001(
#line 3374 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3376 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2)
#line 3378 "mdb.declarative_edt.c"
{
#line 3380 "mdb.declarative_edt.c"
  {
#line 3382 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;

#line 3385 "mdb.declarative_edt.c"
    {
#line 3387 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____suspect_id_0_0(((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Integer) mdb__declarative_edt__wrapper_arg_2));
    }
#line 3390 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 3392 "mdb.declarative_edt.c"
  }
#line 3394 "mdb.declarative_edt.c"
}

#line 3397 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____suspect_id_0_0_10001(
#line 3400 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 3402 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 3404 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3)
#line 3406 "mdb.declarative_edt.c"
{
#line 3408 "mdb.declarative_edt.c"
  {
#line 3410 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

#line 3413 "mdb.declarative_edt.c"
    {
#line 3415 "mdb.declarative_edt.c"
      mdb__declarative_edt____Compare____suspect_id_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_edt__wrapper_arg_2), ((MR_Integer) mdb__declarative_edt__wrapper_arg_3));
    }
#line 3418 "mdb.declarative_edt.c"
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
#line 3420 "mdb.declarative_edt.c"
  }
#line 3422 "mdb.declarative_edt.c"
}

#line 3425 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0_10001(
#line 3428 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3430 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2)
#line 3432 "mdb.declarative_edt.c"
{
#line 3434 "mdb.declarative_edt.c"
  {
#line 3436 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;

#line 3439 "mdb.declarative_edt.c"
    {
#line 3441 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____suspect_status_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
#line 3444 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 3446 "mdb.declarative_edt.c"
  }
#line 3448 "mdb.declarative_edt.c"
}

#line 3451 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____suspect_status_0_0_10001(
#line 3454 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 3456 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 3458 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3)
#line 3460 "mdb.declarative_edt.c"
{
#line 3462 "mdb.declarative_edt.c"
  {
#line 3464 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

#line 3467 "mdb.declarative_edt.c"
    {
#line 3469 "mdb.declarative_edt.c"
      mdb__declarative_edt____Compare____suspect_status_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
#line 3472 "mdb.declarative_edt.c"
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
#line 3474 "mdb.declarative_edt.c"
  }
#line 3476 "mdb.declarative_edt.c"
}

#line 3479 "mdb.declarative_edt.c"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____weighting_heuristic_0_0_10001(
#line 3482 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 3484 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2)
#line 3486 "mdb.declarative_edt.c"
{
#line 3488 "mdb.declarative_edt.c"
  {
#line 3490 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;

#line 3493 "mdb.declarative_edt.c"
    {
#line 3495 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____weighting_heuristic_0_0(((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2));
    }
#line 3498 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 3500 "mdb.declarative_edt.c"
  }
#line 3502 "mdb.declarative_edt.c"
}

#line 3505 "mdb.declarative_edt.c"
static void MR_CALL 
mdb__declarative_edt____Compare____weighting_heuristic_0_0_10001(
#line 3508 "mdb.declarative_edt.c"
  MR_Box * mdb__declarative_edt__wrapper_arg_1,
#line 3510 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 3512 "mdb.declarative_edt.c"
  MR_Box mdb__declarative_edt__wrapper_arg_3)
#line 3514 "mdb.declarative_edt.c"
{
#line 3516 "mdb.declarative_edt.c"
  {
#line 3518 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__conv0_HeadVar__1_1;

#line 3521 "mdb.declarative_edt.c"
    {
#line 3523 "mdb.declarative_edt.c"
      mdb__declarative_edt____Compare____weighting_heuristic_0_0(&mdb__declarative_edt__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Word) mdb__declarative_edt__wrapper_arg_3));
    }
#line 3526 "mdb.declarative_edt.c"
    *mdb__declarative_edt__wrapper_arg_1 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__1_1));
#line 3528 "mdb.declarative_edt.c"
  }
#line 3530 "mdb.declarative_edt.c"
}

#line 1582 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(
#line 1582 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65,
#line 1582 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_1,
#line 1582 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3,
#line 1582 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__ParentId_4,
#line 1582 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_5,
#line 1582 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__Depth_6,
#line 1582 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7,
#line 1582 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_8,
#line 1582 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_Counter_0_9,
#line 1582 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_Counter_10,
#line 1582 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__11_11)
#line 1582 "declarative_edt.m"
{
#line 1587 "declarative_edt.m"
  {
#line 1587 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;

#line 1587 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1587 "declarative_edt.m"
      {
#line 1587 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1587 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_Counter_10 = mdb__declarative_edt__STATE_VARIABLE_Counter_0_9;
#line 1587 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_8 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7;
#line 1587 "declarative_edt.m"
      }
#line 1587 "declarative_edt.m"
    else
#line 1589 "declarative_edt.m"
      {
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_68_68;
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_70_70;
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_71_71;
#line 1589 "declarative_edt.m"
        MR_Box mdb__declarative_edt__EDTChild_25 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0));
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__EDTChildren_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
#line 1589 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__NextId_33;
#line 1589 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__Weight_34;
#line 1589 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__ExcessWeight_35;
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__SuspectStore_36;
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__OtherChildren_37;
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_Counter_42_42;
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_44_44;
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_45_45;
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_46_46;
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48;
#line 1589 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49;
#line 1593 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_52_52;
#line 1593 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_53_53;
#line 1593 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_54_54;
#line 1593 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_55_55;
#line 1593 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_56_56;
#line 1593 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_57_57;
#line 1596 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_58_58;
#line 1596 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_59_59;
#line 1596 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_60_60;
#line 1596 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_61_61;
#line 1596 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_63_63;
#line 1596 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_64_64;
#line 1596 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_62_62;

#line 1590 "declarative_edt.m"
        {
#line 1590 "declarative_edt.m"
          mercury__counter__allocate_3_p_0(&mdb__declarative_edt__NextId_33, mdb__declarative_edt__STATE_VARIABLE_Counter_0_9, &mdb__declarative_edt__STATE_VARIABLE_Counter_42_42);
        }
#line 1591 "declarative_edt.m"
        {
#line 1591 "declarative_edt.m"
          mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65, mdb__declarative_edt__Store_1, mdb__declarative_edt__EDTChild_25, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_edt__Status_5, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, &mdb__declarative_edt__Weight_34, &mdb__declarative_edt__ExcessWeight_35);
        }
#line 1594 "declarative_edt.m"
        {
#line 1594 "declarative_edt.m"
          mdb__declarative_edt__V_46_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1594 "declarative_edt.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_46_46, 0) = ((MR_Box) (mdb__declarative_edt__ParentId_4));
#line 1594 "declarative_edt.m"
        }
#line 1594 "declarative_edt.m"
        {
#line 1594 "declarative_edt.m"
          mdb__declarative_edt__V_44_44 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1594 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_44_44, 0) = ((MR_Box) (mdb__declarative_edt__V_46_46));
#line 1594 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_44_44, 1) = mdb__declarative_edt__EDTChild_25;
#line 1594 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_44_44, 2) = ((MR_Box) (mdb__declarative_edt__Status_5));
#line 1594 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_44_44, 3) = ((MR_Box) (mdb__declarative_edt__Depth_6));
#line 1594 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_44_44, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1594 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_44_44, 5) = ((MR_Box) (mdb__declarative_edt__Weight_34));
#line 1594 "declarative_edt.m"
        }
#line 1593 "declarative_edt.m"
        mdb__declarative_edt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 0)));
#line 1593 "declarative_edt.m"
        mdb__declarative_edt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 1)));
#line 1593 "declarative_edt.m"
        mdb__declarative_edt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 2)));
#line 1593 "declarative_edt.m"
        mdb__declarative_edt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 3)));
#line 1593 "declarative_edt.m"
        mdb__declarative_edt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 4)));
#line 1593 "declarative_edt.m"
        mdb__declarative_edt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 5)));
#line 1593 "declarative_edt.m"
        mdb__declarative_edt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 6)));
#line 3690 "mdb.declarative_edt.c"
        {
#line 3692 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_68_68);
        }
#line 3695 "mdb.declarative_edt.c"
        {
#line 3697 "mdb.declarative_edt.c"
          mdb__declarative_edt__TypeInfo_70_70 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3699 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_70_70, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 3701 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_70_70, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_68_68));
#line 3703 "mdb.declarative_edt.c"
        }
#line 1593 "declarative_edt.m"
        {
#line 1593 "declarative_edt.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_100_101_116_95_105_110_115_101_114_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_70_70, mdb__declarative_edt__NextId_33, ((MR_Box) (mdb__declarative_edt__V_44_44)), mdb__declarative_edt__V_45_45, &mdb__declarative_edt__SuspectStore_36);
        }
#line 1596 "declarative_edt.m"
        mdb__declarative_edt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 0)));
#line 1596 "declarative_edt.m"
        mdb__declarative_edt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 1)));
#line 1596 "declarative_edt.m"
        mdb__declarative_edt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 2)));
#line 1596 "declarative_edt.m"
        mdb__declarative_edt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 3)));
#line 1596 "declarative_edt.m"
        mdb__declarative_edt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 4)));
#line 1596 "declarative_edt.m"
        mdb__declarative_edt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 5)));
#line 1596 "declarative_edt.m"
        mdb__declarative_edt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_7, (MR_Integer) 6)));
#line 1596 "declarative_edt.m"
        {
#line 1596 "declarative_edt.m"
          mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1596 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 0) = ((MR_Box) (mdb__declarative_edt__V_58_58));
#line 1596 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 1) = ((MR_Box) (mdb__declarative_edt__V_59_59));
#line 1596 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 2) = ((MR_Box) (mdb__declarative_edt__V_60_60));
#line 1596 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 3) = ((MR_Box) (mdb__declarative_edt__V_61_61));
#line 1596 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 4) = ((MR_Box) (mdb__declarative_edt__SuspectStore_36));
#line 1596 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 5) = ((MR_Box) (mdb__declarative_edt__V_63_63));
#line 1596 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, 6) = ((MR_Box) (mdb__declarative_edt__V_64_64));
#line 1596 "declarative_edt.m"
        }
#line 3744 "mdb.declarative_edt.c"
        {
#line 3746 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_71_71);
        }
#line 1597 "declarative_edt.m"
        {
#line 1597 "declarative_edt.m"
          mdb__declarative_edt__add_weight_to_ancestors_4_p_0(mdb__declarative_edt__TypeInfo_71_71, mdb__declarative_edt__NextId_33, mdb__declarative_edt__ExcessWeight_35, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_48_48, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49);
        }
#line 1598 "declarative_edt.m"
        {
#line 1598 "declarative_edt.m"
          mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_65, mdb__declarative_edt__Store_1, mdb__declarative_edt__EDTChildren_26, mdb__declarative_edt__ParentId_4, mdb__declarative_edt__Status_5, mdb__declarative_edt__Depth_6, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_8, mdb__declarative_edt__STATE_VARIABLE_Counter_42_42, mdb__declarative_edt__STATE_VARIABLE_Counter_10, &mdb__declarative_edt__OtherChildren_37);
        }
#line 1600 "declarative_edt.m"
        {
#line 1600 "declarative_edt.m"
          MR_Word base;
#line 1600 "declarative_edt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1600 "declarative_edt.m"
          *mdb__declarative_edt__HeadVar__11_11 = base;
#line 1600 "declarative_edt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__NextId_33));
#line 1600 "declarative_edt.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_edt__OtherChildren_37));
#line 1600 "declarative_edt.m"
        }
#line 1589 "declarative_edt.m"
      }
#line 1587 "declarative_edt.m"
  }
#line 1582 "declarative_edt.m"
}

#line 1888 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1888__1_3_p_0(
#line 1888 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
#line 1888 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
#line 1888 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_41)
#line 1888 "declarative_edt.m"
{
#line 1888 "declarative_edt.m"
  {
#line 1888 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1888 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_43_43;
#line 1888 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_46_46;
#line 1888 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_52;
#line 1788 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_53_53;
#line 1788 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_54_54;
#line 1788 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_55_55;
#line 1788 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_56_56;
#line 1788 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_57_57;

#line 3812 "mdb.declarative_edt.c"
    {
#line 3814 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_43_43);
    }
#line 1787 "declarative_edt.m"
    {
#line 1787 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_43_43, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25, mdb__declarative_edt__HeadVar__3_41, &mdb__declarative_edt__Suspect_52);
    }
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 0)));
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__V_54_54 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 1));
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 2)));
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 3)));
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 4)));
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_52, (MR_Integer) 5)));
#line 784 "declarative_edt.m"
    if ((mdb__declarative_edt__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 786 "declarative_edt.m"
      {
#line 695 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 786 "declarative_edt.m"
      }
#line 784 "declarative_edt.m"
    else
#line 784 "declarative_edt.m"
    if ((mdb__declarative_edt__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 787 "declarative_edt.m"
      {
#line 695 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 787 "declarative_edt.m"
      }
#line 784 "declarative_edt.m"
    else
#line 784 "declarative_edt.m"
    if ((mdb__declarative_edt__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 784 "declarative_edt.m"
      {
#line 695 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 784 "declarative_edt.m"
      }
#line 784 "declarative_edt.m"
    else
#line 784 "declarative_edt.m"
    if ((mdb__declarative_edt__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 790 "declarative_edt.m"
      {
#line 695 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 790 "declarative_edt.m"
      }
#line 784 "declarative_edt.m"
    else
#line 784 "declarative_edt.m"
    if ((mdb__declarative_edt__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 788 "declarative_edt.m"
      {
#line 695 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 788 "declarative_edt.m"
      }
#line 784 "declarative_edt.m"
    else
#line 784 "declarative_edt.m"
    if ((mdb__declarative_edt__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 789 "declarative_edt.m"
      {
#line 695 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 789 "declarative_edt.m"
      }
#line 784 "declarative_edt.m"
    else
#line 784 "declarative_edt.m"
    if ((mdb__declarative_edt__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 791 "declarative_edt.m"
      {
#line 695 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 791 "declarative_edt.m"
      }
#line 784 "declarative_edt.m"
    else
#line 785 "declarative_edt.m"
      {
#line 695 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 785 "declarative_edt.m"
      }
#line 1888 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1888 "declarative_edt.m"
  }
#line 1888 "declarative_edt.m"
}

#line 1881 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1881__1_3_p_0(
#line 1881 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
#line 1881 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
#line 1881 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_37)
#line 1881 "declarative_edt.m"
{
#line 1881 "declarative_edt.m"
  {
#line 1881 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_39_39;
#line 1881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_46;
#line 1881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_47_47;
#line 703 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_48_48;
#line 703 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_49_49;
#line 703 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_50_50;
#line 703 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_51_51;
#line 703 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_52_52;

#line 3949 "mdb.declarative_edt.c"
    {
#line 3951 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_39_39);
    }
#line 702 "declarative_edt.m"
    {
#line 702 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_39_39, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25, mdb__declarative_edt__HeadVar__3_37, &mdb__declarative_edt__Suspect_46);
    }
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 0)));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_49_49 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 1));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 2)));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 3)));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 4)));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_46, (MR_Integer) 5)));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_47_47 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1881 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1881 "declarative_edt.m"
  }
#line 1881 "declarative_edt.m"
}

#line 1529 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1529__1_2_p_0(
#line 1529 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 1529 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__2_46)
#line 1529 "declarative_edt.m"
{
#line 1529 "declarative_edt.m"
  {
#line 1529 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__SuspectId_5 == mdb__declarative_edt__HeadVar__2_46);

#line 1529 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1529 "declarative_edt.m"
  }
#line 1529 "declarative_edt.m"
}

#line 1380 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1380__1_2_p_0(
#line 1380 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__Ancestor_7,
#line 1380 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__2_28)
#line 1380 "declarative_edt.m"
{
#line 1380 "declarative_edt.m"
  {
#line 1380 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__Ancestor_7 == mdb__declarative_edt__HeadVar__2_28);

#line 1380 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1380 "declarative_edt.m"
  }
#line 1380 "declarative_edt.m"
}

#line 1302 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1302__1_4_p_0(
#line 1302 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
#line 1302 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_74,
#line 1302 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_75,
#line 1302 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__HeadVar__4_76)
#line 1302 "declarative_edt.m"
{
#line 1302 "declarative_edt.m"
  {
#line 1302 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1302 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_88_88;
#line 4041 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__TypeInfo_78_78;
#line 1365 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_89_89;
#line 1365 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_90_90;
#line 1365 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_91_91;
#line 1365 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_92_92;
#line 1365 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_93_93;

#line 4054 "mdb.declarative_edt.c"
    {
#line 4056 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_78_78);
    }
#line 1365 "declarative_edt.m"
    mdb__declarative_edt__V_89_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 0)));
#line 1365 "declarative_edt.m"
    mdb__declarative_edt__V_90_90 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 1));
#line 1365 "declarative_edt.m"
    mdb__declarative_edt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 2)));
#line 1365 "declarative_edt.m"
    mdb__declarative_edt__V_92_92 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 3)));
#line 1365 "declarative_edt.m"
    mdb__declarative_edt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 4)));
#line 1365 "declarative_edt.m"
    mdb__declarative_edt__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_74, (MR_Integer) 5)));
#line 1365 "declarative_edt.m"
    *mdb__declarative_edt__HeadVar__4_76 = (mdb__declarative_edt__HeadVar__3_75 + mdb__declarative_edt__V_88_88);
#line 1302 "declarative_edt.m"
  }
#line 1302 "declarative_edt.m"
}

#line 1297 "declarative_edt.m"
static MR_Box MR_CALL 
mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1297__1_2_f_0(
#line 1297 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
#line 1297 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_30)
#line 1297 "declarative_edt.m"
{
#line 1297 "declarative_edt.m"
  {
#line 1297 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1297 "declarative_edt.m"
    MR_Box mdb__declarative_edt__HeadVar__3_31 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_30, (MR_Integer) 1));
#line 1297 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_30, (MR_Integer) 0)));
#line 1297 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_30, (MR_Integer) 2)));
#line 1297 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_30, (MR_Integer) 3)));
#line 1297 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_30, (MR_Integer) 4)));
#line 1297 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_30, (MR_Integer) 5)));

#line 1297 "declarative_edt.m"
    return mdb__declarative_edt__HeadVar__3_31;
#line 1297 "declarative_edt.m"
  }
#line 1297 "declarative_edt.m"
}

#line 1295 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1295__1_4_p_0(
#line 1295 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
#line 1295 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_12,
#line 1295 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_58,
#line 1295 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__4_59)
#line 1295 "declarative_edt.m"
{
#line 1295 "declarative_edt.m"
  {
#line 1295 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1295 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_61_61;

#line 4131 "mdb.declarative_edt.c"
    {
#line 4133 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_61_61);
    }
#line 1295 "declarative_edt.m"
    {
#line 1295 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_61_61, mdb__declarative_edt__SearchSpace_12, mdb__declarative_edt__HeadVar__3_58, mdb__declarative_edt__HeadVar__4_59);
#line 1295 "declarative_edt.m"
      return;
    }
#line 1295 "declarative_edt.m"
  }
#line 1295 "declarative_edt.m"
}

#line 2025 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2025__1_3_p_0(
#line 2025 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46,
#line 2025 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15,
#line 2025 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_57)
#line 2025 "declarative_edt.m"
{
#line 2025 "declarative_edt.m"
  {
#line 2025 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 2025 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_59_59;
#line 2025 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_63;
#line 2025 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_78_78;
#line 932 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_77_77;
#line 932 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_79_79;
#line 932 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_80_80;
#line 932 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_81_81;
#line 932 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_82_82;

#line 4180 "mdb.declarative_edt.c"
    {
#line 4182 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_59_59);
    }
#line 931 "declarative_edt.m"
    {
#line 931 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_59_59, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, mdb__declarative_edt__HeadVar__3_57, &mdb__declarative_edt__Suspect_63);
    }
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 0)));
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_81_81 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 1));
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 2)));
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 3)));
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 4)));
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_63, (MR_Integer) 5)));
#line 933 "declarative_edt.m"
    if ((mdb__declarative_edt__V_78_78 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "declarative_edt.m"
      mdb__declarative_edt__succeeded = MR_TRUE;
#line 933 "declarative_edt.m"
    else
#line 933 "declarative_edt.m"
      {
#line 933 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_78_78, (MR_Integer) 0)));

#line 933 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_65_65 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "declarative_edt.m"
      }
#line 2025 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 2025 "declarative_edt.m"
  }
#line 2025 "declarative_edt.m"
}

#line 918 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__918__1_3_p_0(
#line 918 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81,
#line 918 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42,
#line 918 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_98)
#line 918 "declarative_edt.m"
{
#line 918 "declarative_edt.m"
  {
#line 918 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 918 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_100_100;

#line 4242 "mdb.declarative_edt.c"
    {
#line 4244 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_100_100);
    }
#line 918 "declarative_edt.m"
    {
#line 918 "declarative_edt.m"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__suspect_is_leaf_2_p_0(mdb__declarative_edt__TypeInfo_100_100, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, mdb__declarative_edt__HeadVar__3_98);
    }
#line 918 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 918 "declarative_edt.m"
  }
#line 918 "declarative_edt.m"
}

#line 904 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__IntroducedFrom__pred__revise_root__904__1_6_p_0(
#line 904 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81,
#line 904 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_27,
#line 904 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_28,
#line 904 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__4_84,
#line 904 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__5_85,
#line 904 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__6_86)
#line 904 "declarative_edt.m"
{
#line 904 "declarative_edt.m"
  {
#line 904 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 904 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_88_88;

#line 4283 "mdb.declarative_edt.c"
    {
#line 4285 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_88_88);
    }
#line 904 "declarative_edt.m"
    {
#line 904 "declarative_edt.m"
      mdb__declarative_edt__force_propagate_status_downwards_5_p_0(mdb__declarative_edt__TypeInfo_88_88, mdb__declarative_edt__HeadVar__2_27, mdb__declarative_edt__HeadVar__3_28, mdb__declarative_edt__HeadVar__4_84, mdb__declarative_edt__HeadVar__5_85, mdb__declarative_edt__HeadVar__6_86);
#line 904 "declarative_edt.m"
      return;
    }
#line 904 "declarative_edt.m"
  }
#line 904 "declarative_edt.m"
}

#line 550 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt____Compare____weighting_heuristic_0_0(
#line 550 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 550 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 550 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3)
#line 550 "declarative_edt.m"
{
#line 550 "declarative_edt.m"
  {
#line 550 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 550 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
#line 550 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

#line 550 "declarative_edt.m"
    {
#line 550 "declarative_edt.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Cast_HeadVar1_4, mdb__declarative_edt__Cast_HeadVar2_5);
#line 550 "declarative_edt.m"
      return;
    }
#line 550 "declarative_edt.m"
  }
#line 550 "declarative_edt.m"
}

#line 550 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt____Unify____weighting_heuristic_0_0(
#line 550 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_1,
#line 550 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2)
#line 550 "declarative_edt.m"
{
#line 4341 "mdb.declarative_edt.c"
  {
#line 4343 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__HeadVar__2_1 == mdb__declarative_edt__HeadVar__2_2);

#line 4346 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 4348 "mdb.declarative_edt.c"
  }
#line 550 "declarative_edt.m"
}

#line 615 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt____Compare____suspect_status_0_0(
#line 615 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3)
#line 615 "declarative_edt.m"
{
#line 615 "declarative_edt.m"
  {
#line 615 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 615 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_20 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
#line 615 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_21 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

#line 615 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_20 == mdb__declarative_edt__CastY_21);
#line 615 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 4377 "mdb.declarative_edt.c"
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 4425 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 4473 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 4521 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 4569 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 4617 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
      else
#line 4665 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
      else
#line 615 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 615 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 615 "declarative_edt.m"
      else
#line 4713 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
      {
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

#line 615 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 4724 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
        else
#line 615 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 4730 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
        else
#line 615 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4736 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 615 "declarative_edt.m"
        else
#line 615 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 4742 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
        else
#line 615 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 4748 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
        else
#line 615 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 4754 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
        else
#line 615 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 4760 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 615 "declarative_edt.m"
        else
#line 615 "declarative_edt.m"
          {
#line 615 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));

#line 615 "declarative_edt.m"
            {
#line 615 "declarative_edt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__V_23_23, mdb__declarative_edt__V_7_7);
#line 615 "declarative_edt.m"
              return;
            }
#line 615 "declarative_edt.m"
          }
#line 615 "declarative_edt.m"
      }
#line 615 "declarative_edt.m"
  }
#line 615 "declarative_edt.m"
}

#line 615 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_status_0_0(
#line 615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2)
#line 615 "declarative_edt.m"
{
#line 615 "declarative_edt.m"
  {
#line 615 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 615 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_19 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 615 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_20 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 615 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_19 == mdb__declarative_edt__CastY_20);
#line 615 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 615 "declarative_edt.m"
      mdb__declarative_edt__succeeded = MR_TRUE;
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 615 "declarative_edt.m"
      {
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_7 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_8 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 615 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_8 == mdb__declarative_edt__CastX_7);
#line 615 "declarative_edt.m"
      }
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 615 "declarative_edt.m"
      {
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_9 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_10 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 615 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_10 == mdb__declarative_edt__CastX_9);
#line 615 "declarative_edt.m"
      }
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 615 "declarative_edt.m"
      {
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_3 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_4 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 615 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_4 == mdb__declarative_edt__CastX_3);
#line 615 "declarative_edt.m"
      }
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 615 "declarative_edt.m"
      {
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_15 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_16 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 615 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_16 == mdb__declarative_edt__CastX_15);
#line 615 "declarative_edt.m"
      }
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 615 "declarative_edt.m"
      {
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_11 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_12 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 615 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_12 == mdb__declarative_edt__CastX_11);
#line 615 "declarative_edt.m"
      }
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 615 "declarative_edt.m"
      {
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_13 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_14 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 615 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_14 == mdb__declarative_edt__CastX_13);
#line 615 "declarative_edt.m"
      }
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 615 "declarative_edt.m"
      {
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_17 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_18 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 615 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_18 == mdb__declarative_edt__CastX_17);
#line 615 "declarative_edt.m"
      }
#line 615 "declarative_edt.m"
    else
#line 615 "declarative_edt.m"
      {
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
#line 615 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_6_6;

#line 615 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 615 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 615 "declarative_edt.m"
          {
#line 615 "declarative_edt.m"
            mdb__declarative_edt__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 4931 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_5_5 == mdb__declarative_edt__V_6_6);
#line 615 "declarative_edt.m"
          }
#line 615 "declarative_edt.m"
      }
#line 615 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 615 "declarative_edt.m"
  }
#line 615 "declarative_edt.m"
}

#line 631 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt____Compare____suspect_id_0_0(
#line 631 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 631 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__2_2,
#line 631 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__3_3)
#line 631 "declarative_edt.m"
{
#line 631 "declarative_edt.m"
  {
#line 631 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 631 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Cast_HeadVar1_4 = mdb__declarative_edt__HeadVar__2_2;
#line 631 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Cast_HeadVar2_5 = mdb__declarative_edt__HeadVar__3_3;

#line 631 "declarative_edt.m"
    {
#line 631 "declarative_edt.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Cast_HeadVar1_4, mdb__declarative_edt__Cast_HeadVar2_5);
#line 631 "declarative_edt.m"
      return;
    }
#line 631 "declarative_edt.m"
  }
#line 631 "declarative_edt.m"
}

#line 631 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_id_0_0(
#line 631 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__1_1,
#line 631 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__HeadVar__2_2)
#line 631 "declarative_edt.m"
{
#line 631 "declarative_edt.m"
  {
#line 631 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 631 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Cast_HeadVar1_3 = mdb__declarative_edt__HeadVar__1_1;
#line 631 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Cast_HeadVar2_4 = mdb__declarative_edt__HeadVar__2_2;

#line 631 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Cast_HeadVar1_3 == mdb__declarative_edt__Cast_HeadVar2_4);
#line 631 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 631 "declarative_edt.m"
  }
#line 631 "declarative_edt.m"
}

#line 586 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt____Compare____suspect_1_0(
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
#line 586 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3)
#line 586 "declarative_edt.m"
{
#line 586 "declarative_edt.m"
  {
#line 586 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 586 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_21 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
#line 586 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_22 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

#line 586 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_21 == mdb__declarative_edt__CastY_22);
#line 586 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 5029 "mdb.declarative_edt.c"
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 586 "declarative_edt.m"
    else
#line 586 "declarative_edt.m"
      {
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 586 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_5_5 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1));
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 586 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 4)));
#line 586 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 5)));
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
#line 586 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_11_11 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1));
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
#line 586 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 3)));
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 4)));
#line 586 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 5)));
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_16_16;

#line 586 "declarative_edt.m"
        {
#line 586 "declarative_edt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[1], &mdb__declarative_edt__V_16_16, ((MR_Box) (mdb__declarative_edt__V_4_4)), ((MR_Box) (mdb__declarative_edt__V_10_10)));
        }
#line 5067 "mdb.declarative_edt.c"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_16_16 == (MR_Integer) 0);
#line 586 "declarative_edt.m"
        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 586 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 586 "declarative_edt.m"
          *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_16_16;
#line 586 "declarative_edt.m"
        else
#line 586 "declarative_edt.m"
          {
#line 586 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_17_17;

#line 586 "declarative_edt.m"
            {
#line 586 "declarative_edt.m"
              mercury__builtin__compare_3_p_0(mdb__declarative_edt__TypeInfo_for_T_23, &mdb__declarative_edt__V_17_17, mdb__declarative_edt__V_5_5, mdb__declarative_edt__V_11_11);
            }
#line 5087 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_17_17 == (MR_Integer) 0);
#line 586 "declarative_edt.m"
            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 586 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 586 "declarative_edt.m"
              *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_17_17;
#line 586 "declarative_edt.m"
            else
#line 586 "declarative_edt.m"
              {
#line 586 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_18_18;

#line 586 "declarative_edt.m"
                {
#line 586 "declarative_edt.m"
                  mdb__declarative_edt____Compare____suspect_status_0_0(&mdb__declarative_edt__V_18_18, mdb__declarative_edt__V_6_6, mdb__declarative_edt__V_12_12);
                }
#line 5107 "mdb.declarative_edt.c"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_18_18 == (MR_Integer) 0);
#line 586 "declarative_edt.m"
                mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 586 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 586 "declarative_edt.m"
                  *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_18_18;
#line 586 "declarative_edt.m"
                else
#line 586 "declarative_edt.m"
                  {
#line 586 "declarative_edt.m"
                    MR_Word mdb__declarative_edt__V_19_19;

#line 586 "declarative_edt.m"
                    {
#line 586 "declarative_edt.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__V_19_19, mdb__declarative_edt__V_7_7, mdb__declarative_edt__V_13_13);
                    }
#line 5127 "mdb.declarative_edt.c"
                    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_19_19 == (MR_Integer) 0);
#line 586 "declarative_edt.m"
                    mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 586 "declarative_edt.m"
                    if (mdb__declarative_edt__succeeded)
#line 586 "declarative_edt.m"
                      *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_19_19;
#line 586 "declarative_edt.m"
                    else
#line 586 "declarative_edt.m"
                      {
#line 586 "declarative_edt.m"
                        MR_Word mdb__declarative_edt__V_20_20;

#line 586 "declarative_edt.m"
                        {
#line 586 "declarative_edt.m"
                          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[3], &mdb__declarative_edt__V_20_20, ((MR_Box) (mdb__declarative_edt__V_8_8)), ((MR_Box) (mdb__declarative_edt__V_14_14)));
                        }
#line 5147 "mdb.declarative_edt.c"
                        mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_20_20 == (MR_Integer) 0);
#line 586 "declarative_edt.m"
                        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 586 "declarative_edt.m"
                        if (mdb__declarative_edt__succeeded)
#line 586 "declarative_edt.m"
                          *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_20_20;
#line 586 "declarative_edt.m"
                        else
#line 586 "declarative_edt.m"
                          {
#line 586 "declarative_edt.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__V_9_9, mdb__declarative_edt__V_15_15);
#line 586 "declarative_edt.m"
                            return;
                          }
#line 586 "declarative_edt.m"
                      }
#line 586 "declarative_edt.m"
                  }
#line 586 "declarative_edt.m"
              }
#line 586 "declarative_edt.m"
          }
#line 586 "declarative_edt.m"
      }
#line 586 "declarative_edt.m"
  }
#line 586 "declarative_edt.m"
}

#line 586 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt____Unify____suspect_1_0(
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_17,
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 586 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2)
#line 586 "declarative_edt.m"
{
#line 586 "declarative_edt.m"
  {
#line 586 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 586 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_15 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 586 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_16 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 586 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_15 == mdb__declarative_edt__CastY_16);
#line 586 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 586 "declarative_edt.m"
      mdb__declarative_edt__succeeded = MR_TRUE;
#line 586 "declarative_edt.m"
    else
#line 586 "declarative_edt.m"
      {
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_19_19;
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
#line 586 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1));
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
#line 586 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 3)));
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 4)));
#line 586 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 5)));
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 586 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_10_10 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1));
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 586 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
#line 586 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 4)));
#line 586 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 5)));

#line 5236 "mdb.declarative_edt.c"
        {
#line 5238 "mdb.declarative_edt.c"
          mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[1], ((MR_Box) (mdb__declarative_edt__V_3_3)), ((MR_Box) (mdb__declarative_edt__V_9_9)));
        }
#line 586 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 586 "declarative_edt.m"
          {
#line 5245 "mdb.declarative_edt.c"
            {
#line 5247 "mdb.declarative_edt.c"
              mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_for_T_17, mdb__declarative_edt__V_4_4, mdb__declarative_edt__V_10_10);
            }
#line 586 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 586 "declarative_edt.m"
              {
#line 5254 "mdb.declarative_edt.c"
                {
#line 5256 "mdb.declarative_edt.c"
                  mdb__declarative_edt__succeeded = mdb__declarative_edt____Unify____suspect_status_0_0(mdb__declarative_edt__V_5_5, mdb__declarative_edt__V_11_11);
                }
#line 586 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 586 "declarative_edt.m"
                  {
#line 5263 "mdb.declarative_edt.c"
                    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_6_6 == mdb__declarative_edt__V_12_12);
#line 586 "declarative_edt.m"
                    if (mdb__declarative_edt__succeeded)
#line 586 "declarative_edt.m"
                      {
#line 5269 "mdb.declarative_edt.c"
                        mdb__declarative_edt__TypeInfo_19_19 = (MR_Word) &mdb__declarative_edt_scalar_common_1[3];
#line 5271 "mdb.declarative_edt.c"
                        {
#line 5273 "mdb.declarative_edt.c"
                          mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_19_19, ((MR_Box) (mdb__declarative_edt__V_7_7)), ((MR_Box) (mdb__declarative_edt__V_13_13)));
                        }
#line 586 "declarative_edt.m"
                        if (mdb__declarative_edt__succeeded)
#line 5278 "mdb.declarative_edt.c"
                          mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_8_8 == mdb__declarative_edt__V_14_14);
#line 586 "declarative_edt.m"
                      }
#line 586 "declarative_edt.m"
                  }
#line 586 "declarative_edt.m"
              }
#line 586 "declarative_edt.m"
          }
#line 586 "declarative_edt.m"
      }
#line 586 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 586 "declarative_edt.m"
  }
#line 586 "declarative_edt.m"
}

#line 195 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt____Compare____subterm_origin_1_0(
#line 195 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_91,
#line 195 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 195 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 195 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3)
#line 195 "declarative_edt.m"
{
#line 195 "declarative_edt.m"
  {
#line 195 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 195 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_89 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
#line 195 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_90 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

#line 195 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_89 == mdb__declarative_edt__CastY_90);
#line 195 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 5323 "mdb.declarative_edt.c"
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 195 "declarative_edt.m"
    else
#line 195 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 195 "declarative_edt.m"
      else
#line 195 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 195 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "declarative_edt.m"
      else
#line 195 "declarative_edt.m"
      if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5343 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "declarative_edt.m"
      else
#line 195 "declarative_edt.m"
      if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5349 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "declarative_edt.m"
      else
#line 5353 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "declarative_edt.m"
    else
#line 195 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 195 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "declarative_edt.m"
      else
#line 195 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 195 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 195 "declarative_edt.m"
      else
#line 195 "declarative_edt.m"
      if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5373 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "declarative_edt.m"
      else
#line 195 "declarative_edt.m"
      if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5379 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "declarative_edt.m"
      else
#line 5383 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "declarative_edt.m"
    else
#line 195 "declarative_edt.m"
    if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 195 "declarative_edt.m"
      {
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

#line 195 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5398 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "declarative_edt.m"
        else
#line 195 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5404 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "declarative_edt.m"
        else
#line 195 "declarative_edt.m"
        if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 195 "declarative_edt.m"
          {
#line 195 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
#line 195 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
#line 195 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_38_38;

#line 195 "declarative_edt.m"
            {
#line 195 "declarative_edt.m"
              mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_edt__V_38_38, mdb__declarative_edt__V_100_100, mdb__declarative_edt__V_36_36);
            }
#line 5424 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_38_38 == (MR_Integer) 0);
#line 195 "declarative_edt.m"
            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 195 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
              *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_38_38;
#line 195 "declarative_edt.m"
            else
#line 195 "declarative_edt.m"
              {
#line 195 "declarative_edt.m"
                {
#line 195 "declarative_edt.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[0], mdb__declarative_edt__HeadVar__1_1, ((MR_Box) (mdb__declarative_edt__V_99_99)), ((MR_Box) (mdb__declarative_edt__V_37_37)));
#line 195 "declarative_edt.m"
                  return;
                }
#line 195 "declarative_edt.m"
              }
#line 195 "declarative_edt.m"
          }
#line 195 "declarative_edt.m"
        else
#line 195 "declarative_edt.m"
        if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5451 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "declarative_edt.m"
        else
#line 5455 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "declarative_edt.m"
      }
#line 195 "declarative_edt.m"
    else
#line 195 "declarative_edt.m"
    if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 195 "declarative_edt.m"
      {
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 195 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_103_103 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0));

#line 195 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5474 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "declarative_edt.m"
        else
#line 195 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5480 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "declarative_edt.m"
        else
#line 195 "declarative_edt.m"
        if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5486 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "declarative_edt.m"
        else
#line 195 "declarative_edt.m"
        if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 195 "declarative_edt.m"
          {
#line 195 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0));
#line 195 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
#line 195 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
#line 195 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_10_10;

#line 195 "declarative_edt.m"
            {
#line 195 "declarative_edt.m"
              mercury__builtin__compare_3_p_0(mdb__declarative_edt__TypeInfo_for_T_91, &mdb__declarative_edt__V_10_10, mdb__declarative_edt__V_103_103, mdb__declarative_edt__V_7_7);
            }
#line 5508 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_10_10 == (MR_Integer) 0);
#line 195 "declarative_edt.m"
            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 195 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
              *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_10_10;
#line 195 "declarative_edt.m"
            else
#line 195 "declarative_edt.m"
              {
#line 195 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_11_11;

#line 195 "declarative_edt.m"
                {
#line 195 "declarative_edt.m"
                  mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_edt__V_11_11, mdb__declarative_edt__V_102_102, mdb__declarative_edt__V_8_8);
                }
#line 5528 "mdb.declarative_edt.c"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_11_11 == (MR_Integer) 0);
#line 195 "declarative_edt.m"
                mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 195 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
                  *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_11_11;
#line 195 "declarative_edt.m"
                else
#line 195 "declarative_edt.m"
                  {
#line 195 "declarative_edt.m"
                    {
#line 195 "declarative_edt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[0], mdb__declarative_edt__HeadVar__1_1, ((MR_Box) (mdb__declarative_edt__V_101_101)), ((MR_Box) (mdb__declarative_edt__V_9_9)));
#line 195 "declarative_edt.m"
                      return;
                    }
#line 195 "declarative_edt.m"
                  }
#line 195 "declarative_edt.m"
              }
#line 195 "declarative_edt.m"
          }
#line 195 "declarative_edt.m"
        else
#line 5555 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "declarative_edt.m"
      }
#line 195 "declarative_edt.m"
    else
#line 195 "declarative_edt.m"
      {
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 195 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_105_105 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 195 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_106_106 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

#line 195 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5572 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "declarative_edt.m"
        else
#line 195 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 5578 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 195 "declarative_edt.m"
        else
#line 195 "declarative_edt.m"
        if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5584 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "declarative_edt.m"
        else
#line 195 "declarative_edt.m"
        if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5590 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 195 "declarative_edt.m"
        else
#line 195 "declarative_edt.m"
          {
#line 195 "declarative_edt.m"
            MR_String mdb__declarative_edt__V_62_62 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
#line 195 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
#line 195 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
#line 195 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_65_65;

#line 195 "declarative_edt.m"
            {
#line 195 "declarative_edt.m"
              mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_edt__V_65_65, mdb__declarative_edt__V_106_106, mdb__declarative_edt__V_62_62);
            }
#line 5610 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_65_65 == (MR_Integer) 0);
#line 195 "declarative_edt.m"
            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 195 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
              *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_65_65;
#line 195 "declarative_edt.m"
            else
#line 195 "declarative_edt.m"
              {
#line 195 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_66_66;

#line 195 "declarative_edt.m"
                {
#line 195 "declarative_edt.m"
                  mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__V_66_66, mdb__declarative_edt__V_105_105, mdb__declarative_edt__V_63_63);
                }
#line 5630 "mdb.declarative_edt.c"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_66_66 == (MR_Integer) 0);
#line 195 "declarative_edt.m"
                mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 195 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
                  *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_66_66;
#line 195 "declarative_edt.m"
                else
#line 195 "declarative_edt.m"
                  {
#line 195 "declarative_edt.m"
                    MR_Integer mdb__declarative_edt__V_107_107 = (MR_Integer) mdb__declarative_edt__V_104_104;
#line 195 "declarative_edt.m"
                    MR_Integer mdb__declarative_edt__V_108_108 = (MR_Integer) mdb__declarative_edt__V_64_64;

#line 195 "declarative_edt.m"
                    {
#line 195 "declarative_edt.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__V_107_107, mdb__declarative_edt__V_108_108);
#line 195 "declarative_edt.m"
                      return;
                    }
#line 195 "declarative_edt.m"
                  }
#line 195 "declarative_edt.m"
              }
#line 195 "declarative_edt.m"
          }
#line 195 "declarative_edt.m"
      }
#line 195 "declarative_edt.m"
  }
#line 195 "declarative_edt.m"
}

#line 195 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_origin_1_0(
#line 195 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_25,
#line 195 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 195 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2)
#line 195 "declarative_edt.m"
{
#line 195 "declarative_edt.m"
  {
#line 195 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 195 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_23 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 195 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_24 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 195 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_23 == mdb__declarative_edt__CastY_24);
#line 195 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
      mdb__declarative_edt__succeeded = MR_TRUE;
#line 195 "declarative_edt.m"
    else
#line 195 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 195 "declarative_edt.m"
      {
#line 195 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_19 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 195 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_20 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 195 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_20 == mdb__declarative_edt__CastX_19);
#line 195 "declarative_edt.m"
      }
#line 195 "declarative_edt.m"
    else
#line 195 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 195 "declarative_edt.m"
      {
#line 195 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_21 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 195 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_22 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 195 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_22 == mdb__declarative_edt__CastX_21);
#line 195 "declarative_edt.m"
      }
#line 195 "declarative_edt.m"
    else
#line 195 "declarative_edt.m"
    if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 195 "declarative_edt.m"
      {
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_27_27;
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_11_11;
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_12_12;

#line 195 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 195 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
          {
#line 195 "declarative_edt.m"
            mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 195 "declarative_edt.m"
            mdb__declarative_edt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 5750 "mdb.declarative_edt.c"
            {
#line 5752 "mdb.declarative_edt.c"
              mdb__declarative_edt__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_edt__V_9_9, mdb__declarative_edt__V_11_11);
            }
#line 195 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
              {
#line 5759 "mdb.declarative_edt.c"
                mdb__declarative_edt__TypeInfo_27_27 = (MR_Word) &mdb__declarative_edt_scalar_common_1[0];
#line 5761 "mdb.declarative_edt.c"
                {
#line 5763 "mdb.declarative_edt.c"
                  return mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_27_27, ((MR_Box) (mdb__declarative_edt__V_10_10)), ((MR_Box) (mdb__declarative_edt__V_12_12)));
                }
#line 195 "declarative_edt.m"
              }
#line 195 "declarative_edt.m"
          }
#line 195 "declarative_edt.m"
      }
#line 195 "declarative_edt.m"
    else
#line 195 "declarative_edt.m"
    if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 195 "declarative_edt.m"
      {
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_29_29;
#line 195 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_3_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0));
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
#line 195 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_6_6;
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_7_7;
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_8_8;

#line 195 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 195 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
          {
#line 195 "declarative_edt.m"
            mdb__declarative_edt__V_6_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0));
#line 195 "declarative_edt.m"
            mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 195 "declarative_edt.m"
            mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 5805 "mdb.declarative_edt.c"
            {
#line 5807 "mdb.declarative_edt.c"
              mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_for_T_25, mdb__declarative_edt__V_3_3, mdb__declarative_edt__V_6_6);
            }
#line 195 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
              {
#line 5814 "mdb.declarative_edt.c"
                {
#line 5816 "mdb.declarative_edt.c"
                  mdb__declarative_edt__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_edt__V_4_4, mdb__declarative_edt__V_7_7);
                }
#line 195 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
                  {
#line 5823 "mdb.declarative_edt.c"
                    mdb__declarative_edt__TypeInfo_29_29 = (MR_Word) &mdb__declarative_edt_scalar_common_1[0];
#line 5825 "mdb.declarative_edt.c"
                    {
#line 5827 "mdb.declarative_edt.c"
                      return mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_29_29, ((MR_Box) (mdb__declarative_edt__V_5_5)), ((MR_Box) (mdb__declarative_edt__V_8_8)));
                    }
#line 195 "declarative_edt.m"
                  }
#line 195 "declarative_edt.m"
              }
#line 195 "declarative_edt.m"
          }
#line 195 "declarative_edt.m"
      }
#line 195 "declarative_edt.m"
    else
#line 195 "declarative_edt.m"
      {
#line 195 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_13_13 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
#line 195 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
#line 195 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_16_16;
#line 195 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_17_17;
#line 195 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_18_18;

#line 195 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
#line 195 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
          {
#line 195 "declarative_edt.m"
            mdb__declarative_edt__V_16_16 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 195 "declarative_edt.m"
            mdb__declarative_edt__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 195 "declarative_edt.m"
            mdb__declarative_edt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 5867 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (strcmp(mdb__declarative_edt__V_13_13, mdb__declarative_edt__V_16_16) == 0);
#line 195 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 195 "declarative_edt.m"
              {
#line 5873 "mdb.declarative_edt.c"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_14_14 == mdb__declarative_edt__V_17_17);
#line 195 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 5877 "mdb.declarative_edt.c"
                  mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_15_15 == mdb__declarative_edt__V_18_18);
#line 195 "declarative_edt.m"
              }
#line 195 "declarative_edt.m"
          }
#line 195 "declarative_edt.m"
      }
#line 195 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 195 "declarative_edt.m"
  }
#line 195 "declarative_edt.m"
}

#line 191 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt____Compare____subterm_mode_0_0(
#line 191 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 191 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 191 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3)
#line 191 "declarative_edt.m"
{
#line 191 "declarative_edt.m"
  {
#line 191 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 191 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
#line 191 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

#line 191 "declarative_edt.m"
    {
#line 191 "declarative_edt.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Cast_HeadVar1_4, mdb__declarative_edt__Cast_HeadVar2_5);
#line 191 "declarative_edt.m"
      return;
    }
#line 191 "declarative_edt.m"
  }
#line 191 "declarative_edt.m"
}

#line 191 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt____Unify____subterm_mode_0_0(
#line 191 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_1,
#line 191 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2)
#line 191 "declarative_edt.m"
{
#line 5933 "mdb.declarative_edt.c"
  {
#line 5935 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__HeadVar__2_1 == mdb__declarative_edt__HeadVar__2_2);

#line 5938 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 5940 "mdb.declarative_edt.c"
  }
#line 191 "declarative_edt.m"
}

#line 633 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt____Compare____search_space_1_0(
#line 633 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_26,
#line 633 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 633 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 633 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3)
#line 633 "declarative_edt.m"
{
#line 633 "declarative_edt.m"
  {
#line 633 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 633 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_24 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
#line 633 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_25 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

#line 633 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_24 == mdb__declarative_edt__CastY_25);
#line 633 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 5971 "mdb.declarative_edt.c"
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 633 "declarative_edt.m"
    else
#line 633 "declarative_edt.m"
      {
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 4)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 5)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 6)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 3)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 4)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 5)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 6)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_18_18;

#line 633 "declarative_edt.m"
        {
#line 633 "declarative_edt.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[1], &mdb__declarative_edt__V_18_18, ((MR_Box) (mdb__declarative_edt__V_4_4)), ((MR_Box) (mdb__declarative_edt__V_11_11)));
        }
#line 6013 "mdb.declarative_edt.c"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_18_18 == (MR_Integer) 0);
#line 633 "declarative_edt.m"
        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 633 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
          *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_18_18;
#line 633 "declarative_edt.m"
        else
#line 633 "declarative_edt.m"
          {
#line 633 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_19_19;

#line 633 "declarative_edt.m"
            {
#line 633 "declarative_edt.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[1], &mdb__declarative_edt__V_19_19, ((MR_Box) (mdb__declarative_edt__V_5_5)), ((MR_Box) (mdb__declarative_edt__V_12_12)));
            }
#line 6033 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_19_19 == (MR_Integer) 0);
#line 633 "declarative_edt.m"
            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 633 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
              *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_19_19;
#line 633 "declarative_edt.m"
            else
#line 633 "declarative_edt.m"
              {
#line 633 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_20_20;

#line 633 "declarative_edt.m"
                {
#line 633 "declarative_edt.m"
                  mercury__counter____Compare____counter_0_0(&mdb__declarative_edt__V_20_20, mdb__declarative_edt__V_6_6, mdb__declarative_edt__V_13_13);
                }
#line 6053 "mdb.declarative_edt.c"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_20_20 == (MR_Integer) 0);
#line 633 "declarative_edt.m"
                mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 633 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
                  *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_20_20;
#line 633 "declarative_edt.m"
                else
#line 633 "declarative_edt.m"
                  {
#line 633 "declarative_edt.m"
                    MR_Word mdb__declarative_edt__V_21_21;

#line 633 "declarative_edt.m"
                    {
#line 633 "declarative_edt.m"
                      mercury__counter____Compare____counter_0_0(&mdb__declarative_edt__V_21_21, mdb__declarative_edt__V_7_7, mdb__declarative_edt__V_14_14);
                    }
#line 6073 "mdb.declarative_edt.c"
                    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_21_21 == (MR_Integer) 0);
#line 633 "declarative_edt.m"
                    mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 633 "declarative_edt.m"
                    if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
                      *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_21_21;
#line 633 "declarative_edt.m"
                    else
#line 633 "declarative_edt.m"
                      {
#line 633 "declarative_edt.m"
                        MR_Word mdb__declarative_edt__V_22_22;
#line 633 "declarative_edt.m"
                        MR_Word mdb__declarative_edt__TypeInfo_33_33;

#line 6090 "mdb.declarative_edt.c"
                        {
#line 6092 "mdb.declarative_edt.c"
                          mdb__declarative_edt__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6094 "mdb.declarative_edt.c"
                          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_33_33, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 6096 "mdb.declarative_edt.c"
                          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_33_33, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_26));
#line 6098 "mdb.declarative_edt.c"
                        }
#line 633 "declarative_edt.m"
                        {
#line 633 "declarative_edt.m"
                          mercury__tree234____Compare____tree234_2_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_33_33, &mdb__declarative_edt__V_22_22, mdb__declarative_edt__V_8_8, mdb__declarative_edt__V_15_15);
                        }
#line 6105 "mdb.declarative_edt.c"
                        mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_22_22 == (MR_Integer) 0);
#line 633 "declarative_edt.m"
                        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 633 "declarative_edt.m"
                        if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
                          *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_22_22;
#line 633 "declarative_edt.m"
                        else
#line 633 "declarative_edt.m"
                          {
#line 633 "declarative_edt.m"
                            MR_Word mdb__declarative_edt__V_23_23;

#line 633 "declarative_edt.m"
                            {
#line 633 "declarative_edt.m"
                              mercury__bimap____Compare____bimap_2_0(mdb__declarative_edt__TypeInfo_for_T_26, mdb__declarative_edt__TypeInfo_for_T_26, &mdb__declarative_edt__V_23_23, mdb__declarative_edt__V_9_9, mdb__declarative_edt__V_16_16);
                            }
#line 6125 "mdb.declarative_edt.c"
                            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_23_23 == (MR_Integer) 0);
#line 633 "declarative_edt.m"
                            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 633 "declarative_edt.m"
                            if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
                              *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_23_23;
#line 633 "declarative_edt.m"
                            else
#line 633 "declarative_edt.m"
                              {
#line 633 "declarative_edt.m"
                                {
#line 633 "declarative_edt.m"
                                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[2], mdb__declarative_edt__HeadVar__1_1, ((MR_Box) (mdb__declarative_edt__V_10_10)), ((MR_Box) (mdb__declarative_edt__V_17_17)));
#line 633 "declarative_edt.m"
                                  return;
                                }
#line 633 "declarative_edt.m"
                              }
#line 633 "declarative_edt.m"
                          }
#line 633 "declarative_edt.m"
                      }
#line 633 "declarative_edt.m"
                  }
#line 633 "declarative_edt.m"
              }
#line 633 "declarative_edt.m"
          }
#line 633 "declarative_edt.m"
      }
#line 633 "declarative_edt.m"
  }
#line 633 "declarative_edt.m"
}

#line 633 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt____Unify____search_space_1_0(
#line 633 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_19,
#line 633 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 633 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2)
#line 633 "declarative_edt.m"
{
#line 633 "declarative_edt.m"
  {
#line 633 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 633 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_17 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 633 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_18 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 633 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_17 == mdb__declarative_edt__CastY_18);
#line 633 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
      mdb__declarative_edt__succeeded = MR_TRUE;
#line 633 "declarative_edt.m"
    else
#line 633 "declarative_edt.m"
      {
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_21_21;
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeCtorInfo_24_24;
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeCtorInfo_25_25;
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_26_26;
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_31_31;
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 3)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 4)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 5)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 6)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 4)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 5)));
#line 633 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 6)));

#line 6232 "mdb.declarative_edt.c"
        {
#line 6234 "mdb.declarative_edt.c"
          mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[1], ((MR_Box) (mdb__declarative_edt__V_3_3)), ((MR_Box) (mdb__declarative_edt__V_10_10)));
        }
#line 633 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
          {
#line 6241 "mdb.declarative_edt.c"
            mdb__declarative_edt__TypeInfo_21_21 = (MR_Word) &mdb__declarative_edt_scalar_common_1[1];
#line 6243 "mdb.declarative_edt.c"
            {
#line 6245 "mdb.declarative_edt.c"
              mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_21_21, ((MR_Box) (mdb__declarative_edt__V_4_4)), ((MR_Box) (mdb__declarative_edt__V_11_11)));
            }
#line 633 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
              {
#line 6252 "mdb.declarative_edt.c"
                {
#line 6254 "mdb.declarative_edt.c"
                  mdb__declarative_edt__succeeded = mercury__counter____Unify____counter_0_0(mdb__declarative_edt__V_5_5, mdb__declarative_edt__V_12_12);
                }
#line 633 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
                  {
#line 6261 "mdb.declarative_edt.c"
                    {
#line 6263 "mdb.declarative_edt.c"
                      mdb__declarative_edt__succeeded = mercury__counter____Unify____counter_0_0(mdb__declarative_edt__V_6_6, mdb__declarative_edt__V_13_13);
                    }
#line 633 "declarative_edt.m"
                    if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
                      {
#line 6270 "mdb.declarative_edt.c"
                        mdb__declarative_edt__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 6272 "mdb.declarative_edt.c"
                        mdb__declarative_edt__TypeCtorInfo_25_25 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1;
#line 6274 "mdb.declarative_edt.c"
                        {
#line 6276 "mdb.declarative_edt.c"
                          mdb__declarative_edt__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6278 "mdb.declarative_edt.c"
                          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_26_26, 0) = ((MR_Box) (mdb__declarative_edt__TypeCtorInfo_25_25));
#line 6280 "mdb.declarative_edt.c"
                          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_26_26, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_19));
#line 6282 "mdb.declarative_edt.c"
                        }
#line 6284 "mdb.declarative_edt.c"
                        {
#line 6286 "mdb.declarative_edt.c"
                          mdb__declarative_edt__succeeded = mercury__tree234____Unify____tree234_2_0(mdb__declarative_edt__TypeCtorInfo_24_24, mdb__declarative_edt__TypeInfo_26_26, mdb__declarative_edt__V_7_7, mdb__declarative_edt__V_14_14);
                        }
#line 633 "declarative_edt.m"
                        if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
                          {
#line 6293 "mdb.declarative_edt.c"
                            {
#line 6295 "mdb.declarative_edt.c"
                              mdb__declarative_edt__succeeded = mercury__bimap____Unify____bimap_2_0(mdb__declarative_edt__TypeInfo_for_T_19, mdb__declarative_edt__TypeInfo_for_T_19, mdb__declarative_edt__V_8_8, mdb__declarative_edt__V_15_15);
                            }
#line 633 "declarative_edt.m"
                            if (mdb__declarative_edt__succeeded)
#line 633 "declarative_edt.m"
                              {
#line 6302 "mdb.declarative_edt.c"
                                mdb__declarative_edt__TypeInfo_31_31 = (MR_Word) &mdb__declarative_edt_scalar_common_1[2];
#line 6304 "mdb.declarative_edt.c"
                                {
#line 6306 "mdb.declarative_edt.c"
                                  return mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_31_31, ((MR_Box) (mdb__declarative_edt__V_9_9)), ((MR_Box) (mdb__declarative_edt__V_16_16)));
                                }
#line 633 "declarative_edt.m"
                              }
#line 633 "declarative_edt.m"
                          }
#line 633 "declarative_edt.m"
                      }
#line 633 "declarative_edt.m"
                  }
#line 633 "declarative_edt.m"
              }
#line 633 "declarative_edt.m"
          }
#line 633 "declarative_edt.m"
      }
#line 633 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 633 "declarative_edt.m"
  }
#line 633 "declarative_edt.m"
}

#line 220 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt____Compare____primitive_op_type_0_0(
#line 220 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 220 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 220 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3)
#line 220 "declarative_edt.m"
{
#line 220 "declarative_edt.m"
  {
#line 220 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 220 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
#line 220 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

#line 220 "declarative_edt.m"
    {
#line 220 "declarative_edt.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__Cast_HeadVar1_4, mdb__declarative_edt__Cast_HeadVar2_5);
#line 220 "declarative_edt.m"
      return;
    }
#line 220 "declarative_edt.m"
  }
#line 220 "declarative_edt.m"
}

#line 220 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt____Unify____primitive_op_type_0_0(
#line 220 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_1,
#line 220 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2)
#line 220 "declarative_edt.m"
{
#line 6371 "mdb.declarative_edt.c"
  {
#line 6373 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__HeadVar__2_1 == mdb__declarative_edt__HeadVar__2_2);

#line 6376 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 6378 "mdb.declarative_edt.c"
  }
#line 220 "declarative_edt.m"
}

#line 494 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt____Compare____maybe_found_descendant_0_0(
#line 494 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 494 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 494 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3)
#line 494 "declarative_edt.m"
{
#line 494 "declarative_edt.m"
  {
#line 494 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 494 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_16 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
#line 494 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_17 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

#line 494 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_16 == mdb__declarative_edt__CastY_17);
#line 494 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 6407 "mdb.declarative_edt.c"
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 494 "declarative_edt.m"
    else
#line 494 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 494 "declarative_edt.m"
      else
#line 494 "declarative_edt.m"
      if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6421 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 494 "declarative_edt.m"
      else
#line 6425 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 494 "declarative_edt.m"
    else
#line 494 "declarative_edt.m"
    if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 494 "declarative_edt.m"
      {
#line 494 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

#line 494 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6438 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 494 "declarative_edt.m"
        else
#line 494 "declarative_edt.m"
        if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 494 "declarative_edt.m"
          {
#line 494 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));

#line 494 "declarative_edt.m"
            {
#line 494 "declarative_edt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__V_20_20, mdb__declarative_edt__V_5_5);
#line 494 "declarative_edt.m"
              return;
            }
#line 494 "declarative_edt.m"
          }
#line 494 "declarative_edt.m"
        else
#line 6460 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 494 "declarative_edt.m"
      }
#line 494 "declarative_edt.m"
    else
#line 494 "declarative_edt.m"
      {
#line 494 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

#line 494 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6473 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 494 "declarative_edt.m"
        else
#line 494 "declarative_edt.m"
        if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6479 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 494 "declarative_edt.m"
        else
#line 494 "declarative_edt.m"
          {
#line 494 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));

#line 494 "declarative_edt.m"
            {
#line 494 "declarative_edt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__V_21_21, mdb__declarative_edt__V_15_15);
#line 494 "declarative_edt.m"
              return;
            }
#line 494 "declarative_edt.m"
          }
#line 494 "declarative_edt.m"
      }
#line 494 "declarative_edt.m"
  }
#line 494 "declarative_edt.m"
}

#line 494 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt____Unify____maybe_found_descendant_0_0(
#line 494 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 494 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2)
#line 494 "declarative_edt.m"
{
#line 494 "declarative_edt.m"
  {
#line 494 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 494 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_9 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 494 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_10 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 494 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_9 == mdb__declarative_edt__CastY_10);
#line 494 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 494 "declarative_edt.m"
      mdb__declarative_edt__succeeded = MR_TRUE;
#line 494 "declarative_edt.m"
    else
#line 494 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "declarative_edt.m"
      {
#line 494 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_5 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 494 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_6 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 494 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_6 == mdb__declarative_edt__CastX_5);
#line 494 "declarative_edt.m"
      }
#line 494 "declarative_edt.m"
    else
#line 494 "declarative_edt.m"
    if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 494 "declarative_edt.m"
      {
#line 494 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
#line 494 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_4_4;

#line 494 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 494 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 494 "declarative_edt.m"
          {
#line 494 "declarative_edt.m"
            mdb__declarative_edt__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 6562 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_3_3 == mdb__declarative_edt__V_4_4);
#line 494 "declarative_edt.m"
          }
#line 494 "declarative_edt.m"
      }
#line 494 "declarative_edt.m"
    else
#line 494 "declarative_edt.m"
      {
#line 494 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
#line 494 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_8_8;

#line 494 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 494 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 494 "declarative_edt.m"
          {
#line 494 "declarative_edt.m"
            mdb__declarative_edt__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 6585 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_7_7 == mdb__declarative_edt__V_8_8);
#line 494 "declarative_edt.m"
          }
#line 494 "declarative_edt.m"
      }
#line 494 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 494 "declarative_edt.m"
  }
#line 494 "declarative_edt.m"
}

#line 375 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt____Compare____find_origin_response_0_0(
#line 375 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__1_1,
#line 375 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 375 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3)
#line 375 "declarative_edt.m"
{
#line 375 "declarative_edt.m"
  {
#line 375 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 375 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_101 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;
#line 375 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_102 = (MR_Integer) mdb__declarative_edt__HeadVar__3_3;

#line 375 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_101 == mdb__declarative_edt__CastY_102);
#line 375 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 6622 "mdb.declarative_edt.c"
      *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 375 "declarative_edt.m"
    else
#line 375 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 375 "declarative_edt.m"
      else
#line 375 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 375 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 375 "declarative_edt.m"
      else
#line 375 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 375 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 375 "declarative_edt.m"
      else
#line 375 "declarative_edt.m"
      if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6648 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 375 "declarative_edt.m"
      else
#line 6652 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 375 "declarative_edt.m"
    else
#line 375 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 375 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 375 "declarative_edt.m"
      else
#line 375 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 375 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 375 "declarative_edt.m"
      else
#line 375 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 375 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 375 "declarative_edt.m"
      else
#line 375 "declarative_edt.m"
      if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6678 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 375 "declarative_edt.m"
      else
#line 6682 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 375 "declarative_edt.m"
    else
#line 375 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 375 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 375 "declarative_edt.m"
      else
#line 375 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 375 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 375 "declarative_edt.m"
      else
#line 375 "declarative_edt.m"
      if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 375 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 0;
#line 375 "declarative_edt.m"
      else
#line 375 "declarative_edt.m"
      if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6708 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 375 "declarative_edt.m"
      else
#line 6712 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 375 "declarative_edt.m"
    else
#line 375 "declarative_edt.m"
    if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 375 "declarative_edt.m"
      {
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_115_115 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

#line 375 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6731 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 375 "declarative_edt.m"
        else
#line 375 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6737 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 375 "declarative_edt.m"
        else
#line 375 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6743 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 375 "declarative_edt.m"
        else
#line 375 "declarative_edt.m"
        if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 375 "declarative_edt.m"
          {
#line 375 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
#line 375 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
#line 375 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
#line 375 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 3)));
#line 375 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_25_25;

#line 375 "declarative_edt.m"
            {
#line 375 "declarative_edt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__V_25_25, mdb__declarative_edt__V_115_115, mdb__declarative_edt__V_21_21);
            }
#line 6767 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_25_25 == (MR_Integer) 0);
#line 375 "declarative_edt.m"
            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 375 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
              *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_25_25;
#line 375 "declarative_edt.m"
            else
#line 375 "declarative_edt.m"
              {
#line 375 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_26_26;

#line 375 "declarative_edt.m"
                {
#line 375 "declarative_edt.m"
                  mdbcomp__program_representation____Compare____arg_pos_0_0(&mdb__declarative_edt__V_26_26, mdb__declarative_edt__V_114_114, mdb__declarative_edt__V_22_22);
                }
#line 6787 "mdb.declarative_edt.c"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_26_26 == (MR_Integer) 0);
#line 375 "declarative_edt.m"
                mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 375 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
                  *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_26_26;
#line 375 "declarative_edt.m"
                else
#line 375 "declarative_edt.m"
                  {
#line 375 "declarative_edt.m"
                    MR_Word mdb__declarative_edt__V_27_27;

#line 375 "declarative_edt.m"
                    {
#line 375 "declarative_edt.m"
                      mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_edt_scalar_common_1[0], &mdb__declarative_edt__V_27_27, ((MR_Box) (mdb__declarative_edt__V_113_113)), ((MR_Box) (mdb__declarative_edt__V_23_23)));
                    }
#line 6807 "mdb.declarative_edt.c"
                    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_27_27 == (MR_Integer) 0);
#line 375 "declarative_edt.m"
                    mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 375 "declarative_edt.m"
                    if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
                      *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_27_27;
#line 375 "declarative_edt.m"
                    else
#line 375 "declarative_edt.m"
                      {
#line 375 "declarative_edt.m"
                        MR_Integer mdb__declarative_edt__V_121_121 = (MR_Integer) mdb__declarative_edt__V_112_112;
#line 375 "declarative_edt.m"
                        MR_Integer mdb__declarative_edt__V_122_122 = (MR_Integer) mdb__declarative_edt__V_24_24;

#line 375 "declarative_edt.m"
                        {
#line 375 "declarative_edt.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__V_121_121, mdb__declarative_edt__V_122_122);
#line 375 "declarative_edt.m"
                          return;
                        }
#line 375 "declarative_edt.m"
                      }
#line 375 "declarative_edt.m"
                  }
#line 375 "declarative_edt.m"
              }
#line 375 "declarative_edt.m"
          }
#line 375 "declarative_edt.m"
        else
#line 6841 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 375 "declarative_edt.m"
      }
#line 375 "declarative_edt.m"
    else
#line 375 "declarative_edt.m"
      {
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_116_116 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_117_117 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_118_118 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 375 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_119_119 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_120_120 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));

#line 375 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 6862 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 375 "declarative_edt.m"
        else
#line 375 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 6868 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 375 "declarative_edt.m"
        else
#line 375 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 6874 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 1;
#line 375 "declarative_edt.m"
        else
#line 375 "declarative_edt.m"
        if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6880 "mdb.declarative_edt.c"
          *mdb__declarative_edt__HeadVar__1_1 = (MR_Integer) 2;
#line 375 "declarative_edt.m"
        else
#line 375 "declarative_edt.m"
          {
#line 375 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
#line 375 "declarative_edt.m"
            MR_String mdb__declarative_edt__V_65_65 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
#line 375 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 2)));
#line 375 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_67_67 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 375 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_68_68 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 375 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_69_69;

#line 375 "declarative_edt.m"
            {
#line 375 "declarative_edt.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__V_69_69, mdb__declarative_edt__V_120_120, mdb__declarative_edt__V_64_64);
            }
#line 6904 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_69_69 == (MR_Integer) 0);
#line 375 "declarative_edt.m"
            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 375 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
              *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_69_69;
#line 375 "declarative_edt.m"
            else
#line 375 "declarative_edt.m"
              {
#line 375 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_70_70;

#line 375 "declarative_edt.m"
                {
#line 375 "declarative_edt.m"
                  mercury__private_builtin__builtin_compare_string_3_p_0(&mdb__declarative_edt__V_70_70, mdb__declarative_edt__V_119_119, mdb__declarative_edt__V_65_65);
                }
#line 6924 "mdb.declarative_edt.c"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_70_70 == (MR_Integer) 0);
#line 375 "declarative_edt.m"
                mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 375 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
                  *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_70_70;
#line 375 "declarative_edt.m"
                else
#line 375 "declarative_edt.m"
                  {
#line 375 "declarative_edt.m"
                    MR_Word mdb__declarative_edt__V_71_71;

#line 375 "declarative_edt.m"
                    {
#line 375 "declarative_edt.m"
                      mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__V_71_71, mdb__declarative_edt__V_118_118, mdb__declarative_edt__V_66_66);
                    }
#line 6944 "mdb.declarative_edt.c"
                    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_71_71 == (MR_Integer) 0);
#line 375 "declarative_edt.m"
                    mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 375 "declarative_edt.m"
                    if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
                      *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_71_71;
#line 375 "declarative_edt.m"
                    else
#line 375 "declarative_edt.m"
                      {
#line 375 "declarative_edt.m"
                        MR_Word mdb__declarative_edt__V_72_72;
#line 375 "declarative_edt.m"
                        MR_Integer mdb__declarative_edt__V_123_123 = (MR_Integer) mdb__declarative_edt__V_117_117;
#line 375 "declarative_edt.m"
                        MR_Integer mdb__declarative_edt__V_124_124 = (MR_Integer) mdb__declarative_edt__V_67_67;

#line 375 "declarative_edt.m"
                        {
#line 375 "declarative_edt.m"
                          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_edt__V_72_72, mdb__declarative_edt__V_123_123, mdb__declarative_edt__V_124_124);
                        }
#line 6968 "mdb.declarative_edt.c"
                        mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_72_72 == (MR_Integer) 0);
#line 375 "declarative_edt.m"
                        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 375 "declarative_edt.m"
                        if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
                          *mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__V_72_72;
#line 375 "declarative_edt.m"
                        else
#line 375 "declarative_edt.m"
                          {
#line 375 "declarative_edt.m"
                            MR_Integer mdb__declarative_edt__V_125_125 = (MR_Integer) mdb__declarative_edt__V_116_116;
#line 375 "declarative_edt.m"
                            MR_Integer mdb__declarative_edt__V_126_126 = (MR_Integer) mdb__declarative_edt__V_68_68;

#line 375 "declarative_edt.m"
                            {
#line 375 "declarative_edt.m"
                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__V_125_125, mdb__declarative_edt__V_126_126);
#line 375 "declarative_edt.m"
                              return;
                            }
#line 375 "declarative_edt.m"
                          }
#line 375 "declarative_edt.m"
                      }
#line 375 "declarative_edt.m"
                  }
#line 375 "declarative_edt.m"
              }
#line 375 "declarative_edt.m"
          }
#line 375 "declarative_edt.m"
      }
#line 375 "declarative_edt.m"
  }
#line 375 "declarative_edt.m"
}

#line 375 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt____Unify____find_origin_response_0_0(
#line 375 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 375 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2)
#line 375 "declarative_edt.m"
{
#line 375 "declarative_edt.m"
  {
#line 375 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 375 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastX_27 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 375 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__CastY_28 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 375 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastX_27 == mdb__declarative_edt__CastY_28);
#line 375 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
      mdb__declarative_edt__succeeded = MR_TRUE;
#line 375 "declarative_edt.m"
    else
#line 375 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 375 "declarative_edt.m"
      {
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_3 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_4 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 375 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_4 == mdb__declarative_edt__CastX_3);
#line 375 "declarative_edt.m"
      }
#line 375 "declarative_edt.m"
    else
#line 375 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 375 "declarative_edt.m"
      {
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_23 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_24 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 375 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_24 == mdb__declarative_edt__CastX_23);
#line 375 "declarative_edt.m"
      }
#line 375 "declarative_edt.m"
    else
#line 375 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 375 "declarative_edt.m"
      {
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastX_25 = (MR_Integer) mdb__declarative_edt__HeadVar__1_1;
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__CastY_26 = (MR_Integer) mdb__declarative_edt__HeadVar__2_2;

#line 375 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__CastY_26 == mdb__declarative_edt__CastX_25);
#line 375 "declarative_edt.m"
      }
#line 375 "declarative_edt.m"
    else
#line 375 "declarative_edt.m"
    if (((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 375 "declarative_edt.m"
      {
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_30_30;
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 3)));
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_9_9;
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_10_10;
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_11_11;
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_12_12;

#line 375 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 375 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
          {
#line 375 "declarative_edt.m"
            mdb__declarative_edt__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 375 "declarative_edt.m"
            mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 375 "declarative_edt.m"
            mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 375 "declarative_edt.m"
            mdb__declarative_edt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)));
#line 7117 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_5_5 == mdb__declarative_edt__V_9_9);
#line 375 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
              {
#line 7123 "mdb.declarative_edt.c"
                {
#line 7125 "mdb.declarative_edt.c"
                  mdb__declarative_edt__succeeded = mdbcomp__program_representation____Unify____arg_pos_0_0(mdb__declarative_edt__V_6_6, mdb__declarative_edt__V_10_10);
                }
#line 375 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
                  {
#line 7132 "mdb.declarative_edt.c"
                    mdb__declarative_edt__TypeInfo_30_30 = (MR_Word) &mdb__declarative_edt_scalar_common_1[0];
#line 7134 "mdb.declarative_edt.c"
                    {
#line 7136 "mdb.declarative_edt.c"
                      mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_30_30, ((MR_Box) (mdb__declarative_edt__V_7_7)), ((MR_Box) (mdb__declarative_edt__V_11_11)));
                    }
#line 375 "declarative_edt.m"
                    if (mdb__declarative_edt__succeeded)
#line 7141 "mdb.declarative_edt.c"
                      mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_8_8 == mdb__declarative_edt__V_12_12);
#line 375 "declarative_edt.m"
                  }
#line 375 "declarative_edt.m"
              }
#line 375 "declarative_edt.m"
          }
#line 375 "declarative_edt.m"
      }
#line 375 "declarative_edt.m"
    else
#line 375 "declarative_edt.m"
      {
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
#line 375 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_14_14 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 2)));
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_16_16 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_17_17 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_18_18;
#line 375 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_19_19;
#line 375 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_20_20;
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_21_21;
#line 375 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_22_22;

#line 375 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 375 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
          {
#line 375 "declarative_edt.m"
            mdb__declarative_edt__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 375 "declarative_edt.m"
            mdb__declarative_edt__V_19_19 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 375 "declarative_edt.m"
            mdb__declarative_edt__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 2)));
#line 375 "declarative_edt.m"
            mdb__declarative_edt__V_21_21 = ((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)))) & (MR_Integer) 3);
#line 375 "declarative_edt.m"
            mdb__declarative_edt__V_22_22 = ((((((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 3)))) >> (MR_Integer) 2)) & (MR_Integer) 1);
#line 7192 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_13_13 == mdb__declarative_edt__V_18_18);
#line 375 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
              {
#line 7198 "mdb.declarative_edt.c"
                mdb__declarative_edt__succeeded = (strcmp(mdb__declarative_edt__V_14_14, mdb__declarative_edt__V_19_19) == 0);
#line 375 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
                  {
#line 7204 "mdb.declarative_edt.c"
                    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_15_15 == mdb__declarative_edt__V_20_20);
#line 375 "declarative_edt.m"
                    if (mdb__declarative_edt__succeeded)
#line 375 "declarative_edt.m"
                      {
#line 7210 "mdb.declarative_edt.c"
                        mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_16_16 == mdb__declarative_edt__V_21_21);
#line 375 "declarative_edt.m"
                        if (mdb__declarative_edt__succeeded)
#line 7214 "mdb.declarative_edt.c"
                          mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_17_17 == mdb__declarative_edt__V_22_22);
#line 375 "declarative_edt.m"
                      }
#line 375 "declarative_edt.m"
                  }
#line 375 "declarative_edt.m"
              }
#line 375 "declarative_edt.m"
          }
#line 375 "declarative_edt.m"
      }
#line 375 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 375 "declarative_edt.m"
  }
#line 375 "declarative_edt.m"
}

#line 1991 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__get_path_5_p_0(
#line 1991 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_20,
#line 1991 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_6,
#line 1991 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__BottomId_7,
#line 1991 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__TopId_8,
#line 1991 "declarative_edt.m"
  MR_Word mdb__declarative_edt__PathSoFar_9,
#line 1991 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Path_10)
#line 1991 "declarative_edt.m"
{
#line 1997 "declarative_edt.m"
  while (MR_TRUE)
#line 1997 "declarative_edt.m"
    {
#line 1997 "declarative_edt.m"
      /* tailcall optimized into a loop */
#line 1997 "declarative_edt.m"
      {
#line 1997 "declarative_edt.m"
        MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__BottomId_7 == mdb__declarative_edt__TopId_8);

#line 1997 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1996 "declarative_edt.m"
          {
#line 1996 "declarative_edt.m"
            {
#line 1996 "declarative_edt.m"
              MR_Word base;
#line 1996 "declarative_edt.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1996 "declarative_edt.m"
              *mdb__declarative_edt__Path_10 = base;
#line 1996 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__TopId_8));
#line 1996 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_edt__PathSoFar_9));
#line 1996 "declarative_edt.m"
            }
#line 1996 "declarative_edt.m"
            mdb__declarative_edt__succeeded = MR_TRUE;
#line 1996 "declarative_edt.m"
          }
#line 1997 "declarative_edt.m"
        else
#line 1998 "declarative_edt.m"
          {
#line 1998 "declarative_edt.m"
            MR_Word mdb__declarative_edt__Bottom_11;
#line 1998 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__ParentId_12;
#line 1998 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_13_13;
#line 1998 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_14_14;
#line 1999 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_15_15;
#line 1999 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_16_16;
#line 1999 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_17_17;
#line 1999 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_18_18;
#line 1999 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_19_19;

#line 1998 "declarative_edt.m"
            {
#line 1998 "declarative_edt.m"
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_20, mdb__declarative_edt__SearchSpace_6, mdb__declarative_edt__BottomId_7, &mdb__declarative_edt__Bottom_11);
            }
#line 1999 "declarative_edt.m"
            mdb__declarative_edt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 0)));
#line 1999 "declarative_edt.m"
            mdb__declarative_edt__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 1));
#line 1999 "declarative_edt.m"
            mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 2)));
#line 1999 "declarative_edt.m"
            mdb__declarative_edt__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 3)));
#line 1999 "declarative_edt.m"
            mdb__declarative_edt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 4)));
#line 1999 "declarative_edt.m"
            mdb__declarative_edt__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Bottom_11, (MR_Integer) 5)));
#line 1999 "declarative_edt.m"
            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 1999 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1999 "declarative_edt.m"
              {
#line 1999 "declarative_edt.m"
                mdb__declarative_edt__ParentId_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_13_13, (MR_Integer) 0)));
#line 2000 "declarative_edt.m"
                {
#line 2000 "declarative_edt.m"
                  mdb__declarative_edt__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 2000 "declarative_edt.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_14_14, 0) = ((MR_Box) (mdb__declarative_edt__BottomId_7));
#line 2000 "declarative_edt.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_14_14, 1) = ((MR_Box) (mdb__declarative_edt__PathSoFar_9));
#line 2000 "declarative_edt.m"
                }
#line 2000 "declarative_edt.m"
                {
#line 2000 "declarative_edt.m"
                  /* direct tailcall eliminated */
#line 2000 "declarative_edt.m"
                  {
#line 2000 "declarative_edt.m"
                    MR_Integer mdb__declarative_edt__BottomId__tmp_copy_7 = mdb__declarative_edt__ParentId_12;
#line 2000 "declarative_edt.m"
                    MR_Word mdb__declarative_edt__PathSoFar__tmp_copy_9 = mdb__declarative_edt__V_14_14;

#line 2000 "declarative_edt.m"
                    mdb__declarative_edt__PathSoFar_9 = mdb__declarative_edt__PathSoFar__tmp_copy_9;
#line 2000 "declarative_edt.m"
                    mdb__declarative_edt__BottomId_7 = mdb__declarative_edt__BottomId__tmp_copy_7;
#line 2000 "declarative_edt.m"
                  }
#line 2000 "declarative_edt.m"
                  continue;
#line 2000 "declarative_edt.m"
                }
#line 1999 "declarative_edt.m"
              }
#line 1998 "declarative_edt.m"
          }
#line 1997 "declarative_edt.m"
        return mdb__declarative_edt__succeeded;
#line 1997 "declarative_edt.m"
      }
#line 1997 "declarative_edt.m"
      break;
#line 1997 "declarative_edt.m"
    }
#line 1991 "declarative_edt.m"
}

#line 1933 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__get_children_list_7_p_0(
#line 1933 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_26,
#line 1933 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_1,
#line 1933 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_2,
#line 1933 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3,
#line 1933 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__4_4,
#line 1933 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__5_5,
#line 1933 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__6_6,
#line 1933 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__7_7)
#line 1933 "declarative_edt.m"
{
#line 1937 "declarative_edt.m"
  {
#line 1937 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;

#line 1937 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1937 "declarative_edt.m"
      {
#line 1937 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__5_5 = mdb__declarative_edt__HeadVar__4_4;
#line 1937 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1937 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1937 "declarative_edt.m"
      }
#line 1937 "declarative_edt.m"
    else
#line 1939 "declarative_edt.m"
      {
#line 1939 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__SuspectId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
#line 1939 "declarative_edt.m"
        MR_Word mdb__declarative_edt__SuspectIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
#line 1939 "declarative_edt.m"
        MR_Word mdb__declarative_edt__ExplicitRequired0_18;
#line 1939 "declarative_edt.m"
        MR_Word mdb__declarative_edt__ChildrenList0_19;
#line 1939 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23;
#line 1945 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Children_20;
#line 1945 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_24_24;

#line 1940 "declarative_edt.m"
        {
#line 1940 "declarative_edt.m"
          mdb__declarative_edt__get_children_list_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_26, mdb__declarative_edt__Store_1, mdb__declarative_edt__Oracle_2, mdb__declarative_edt__SuspectIds_14, mdb__declarative_edt__HeadVar__4_4, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, &mdb__declarative_edt__ExplicitRequired0_18, &mdb__declarative_edt__ChildrenList0_19);
        }
#line 1942 "declarative_edt.m"
        {
#line 1942 "declarative_edt.m"
          mdb__declarative_edt__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_26, mdb__declarative_edt__Store_1, mdb__declarative_edt__Oracle_2, mdb__declarative_edt__SuspectId_13, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_24_24, &mdb__declarative_edt__Children_20);
        }
#line 1945 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1943 "declarative_edt.m"
          {
#line 1943 "declarative_edt.m"
            *mdb__declarative_edt__HeadVar__5_5 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_24_24;
#line 1943 "declarative_edt.m"
            {
#line 1943 "declarative_edt.m"
              mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__Children_20, mdb__declarative_edt__ChildrenList0_19, mdb__declarative_edt__HeadVar__7_7);
            }
#line 1944 "declarative_edt.m"
            *mdb__declarative_edt__HeadVar__6_6 = mdb__declarative_edt__ExplicitRequired0_18;
#line 1943 "declarative_edt.m"
          }
#line 1945 "declarative_edt.m"
        else
#line 1946 "declarative_edt.m"
          {
#line 1946 "declarative_edt.m"
            *mdb__declarative_edt__HeadVar__7_7 = mdb__declarative_edt__ChildrenList0_19;
#line 1947 "declarative_edt.m"
            {
#line 1947 "declarative_edt.m"
              MR_Word base;
#line 1947 "declarative_edt.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1947 "declarative_edt.m"
              *mdb__declarative_edt__HeadVar__6_6 = base;
#line 1947 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_13));
#line 1947 "declarative_edt.m"
            }
#line 1946 "declarative_edt.m"
            *mdb__declarative_edt__HeadVar__5_5 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23;
#line 1946 "declarative_edt.m"
          }
#line 1939 "declarative_edt.m"
      }
#line 1937 "declarative_edt.m"
  }
#line 1933 "declarative_edt.m"
}

#line 1888 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_2(
#line 1888 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1888 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1)
#line 1888 "declarative_edt.m"
{
#line 1888 "declarative_edt.m"
  {
#line 1888 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1888 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

#line 1888 "declarative_edt.m"
    {
#line 1888 "declarative_edt.m"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1888__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
#line 1888 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1888 "declarative_edt.m"
  }
#line 1888 "declarative_edt.m"
}

#line 1881 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0_1(
#line 1881 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1881 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1)
#line 1881 "declarative_edt.m"
{
#line 1881 "declarative_edt.m"
  {
#line 1881 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1881 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

#line 1881 "declarative_edt.m"
    {
#line 1881 "declarative_edt.m"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__first_unknown_descendant_list__1881__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
#line 1881 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1881 "declarative_edt.m"
  }
#line 1881 "declarative_edt.m"
}

#line 1875 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__first_unknown_descendant_list_6_p_0(
#line 1875 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36,
#line 1875 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_7,
#line 1875 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_8,
#line 1875 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SuspectList_9,
#line 1875 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25,
#line 1875 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26,
#line 1875 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__MaybeFound_11)
#line 1875 "declarative_edt.m"
{
#line 1880 "declarative_edt.m"
  {
#line 1880 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1880 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeCtorInfo_40_40;
#line 1880 "declarative_edt.m"
    MR_Word mdb__declarative_edt__UnknownList_12;
#line 1880 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Others_13;
#line 1880 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_27_27;

#line 1881 "declarative_edt.m"
    {
#line 1881 "declarative_edt.m"
      mdb__declarative_edt__V_27_27 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1881 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_27_27, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[0]));
#line 1881 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_27_27, 1) = ((MR_Box) (mdb__declarative_edt__first_unknown_descendant_list_6_p_0_1));
#line 1881 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_27_27, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1881 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_27_27, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36));
#line 1881 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_27_27, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25));
#line 1881 "declarative_edt.m"
    }
#line 7592 "mdb.declarative_edt.c"
    mdb__declarative_edt__TypeCtorInfo_40_40 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1881 "declarative_edt.m"
    {
#line 1881 "declarative_edt.m"
      mercury__list__filter_4_p_0(mdb__declarative_edt__TypeCtorInfo_40_40, mdb__declarative_edt__V_27_27, mdb__declarative_edt__SuspectList_9, &mdb__declarative_edt__UnknownList_12, &mdb__declarative_edt__Others_13);
    }
#line 1886 "declarative_edt.m"
    if ((mdb__declarative_edt__UnknownList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1887 "declarative_edt.m"
      {
#line 1887 "declarative_edt.m"
        MR_Word mdb__declarative_edt__InBuggySubtree_16;
#line 1887 "declarative_edt.m"
        MR_Word mdb__declarative_edt__ExplicitRequired_17;
#line 1887 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Children_18;
#line 1887 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_28_28;
#line 1887 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29;

#line 1888 "declarative_edt.m"
        {
#line 1888 "declarative_edt.m"
          mdb__declarative_edt__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1888 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[0]));
#line 1888 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 1) = ((MR_Box) (mdb__declarative_edt__first_unknown_descendant_list_6_p_0_2));
#line 1888 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1888 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36));
#line 1888 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25));
#line 1888 "declarative_edt.m"
        }
#line 1888 "declarative_edt.m"
        {
#line 1888 "declarative_edt.m"
          mercury__list__filter_3_p_0(mdb__declarative_edt__TypeCtorInfo_40_40, mdb__declarative_edt__V_28_28, mdb__declarative_edt__Others_13, &mdb__declarative_edt__InBuggySubtree_16);
        }
#line 1890 "declarative_edt.m"
        {
#line 1890 "declarative_edt.m"
          mdb__declarative_edt__get_children_list_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36, mdb__declarative_edt__Store_7, mdb__declarative_edt__Oracle_8, mdb__declarative_edt__InBuggySubtree_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, &mdb__declarative_edt__ExplicitRequired_17, &mdb__declarative_edt__Children_18);
        }
#line 1901 "declarative_edt.m"
        if ((mdb__declarative_edt__Children_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1893 "declarative_edt.m"
          {
#line 1897 "declarative_edt.m"
            if ((mdb__declarative_edt__ExplicitRequired_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1896 "declarative_edt.m"
              *mdb__declarative_edt__MaybeFound_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1897 "declarative_edt.m"
            else
#line 1898 "declarative_edt.m"
              {
#line 1898 "declarative_edt.m"
                MR_Integer mdb__declarative_edt__RequireExplicitId_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__ExplicitRequired_17, (MR_Integer) 0)));

#line 1899 "declarative_edt.m"
                {
#line 1899 "declarative_edt.m"
                  MR_Word base;
#line 1899 "declarative_edt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1899 "declarative_edt.m"
                  *mdb__declarative_edt__MaybeFound_11 = base;
#line 1899 "declarative_edt.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_edt__RequireExplicitId_19));
#line 1899 "declarative_edt.m"
                }
#line 1898 "declarative_edt.m"
              }
#line 1893 "declarative_edt.m"
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29;
#line 1893 "declarative_edt.m"
          }
#line 1901 "declarative_edt.m"
        else
#line 1902 "declarative_edt.m"
          {
#line 1902 "declarative_edt.m"
            MR_Word mdb__declarative_edt__MaybeFound0_22;

#line 1903 "declarative_edt.m"
            {
#line 1903 "declarative_edt.m"
              mdb__declarative_edt__first_unknown_descendant_list_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_36, mdb__declarative_edt__Store_7, mdb__declarative_edt__Oracle_8, mdb__declarative_edt__Children_18, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26, &mdb__declarative_edt__MaybeFound0_22);
            }
#line 1914 "declarative_edt.m"
            if ((mdb__declarative_edt__MaybeFound0_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1910 "declarative_edt.m"
              if ((mdb__declarative_edt__ExplicitRequired_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1909 "declarative_edt.m"
                *mdb__declarative_edt__MaybeFound_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1910 "declarative_edt.m"
              else
#line 1911 "declarative_edt.m"
                {
#line 1911 "declarative_edt.m"
                  MR_Integer mdb__declarative_edt__RequireExplicitId_31 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__ExplicitRequired_17, (MR_Integer) 0)));

#line 1912 "declarative_edt.m"
                  {
#line 1912 "declarative_edt.m"
                    MR_Word base;
#line 1912 "declarative_edt.m"
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1912 "declarative_edt.m"
                    *mdb__declarative_edt__MaybeFound_11 = base;
#line 1912 "declarative_edt.m"
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_edt__RequireExplicitId_31));
#line 1912 "declarative_edt.m"
                  }
#line 1911 "declarative_edt.m"
                }
#line 1914 "declarative_edt.m"
            else
#line 1914 "declarative_edt.m"
            if (((MR_tag((MR_Word) mdb__declarative_edt__MaybeFound0_22)) == (MR_mktag((MR_Integer) 1))))
#line 1916 "declarative_edt.m"
              *mdb__declarative_edt__MaybeFound_11 = mdb__declarative_edt__MaybeFound0_22;
#line 1914 "declarative_edt.m"
            else
#line 1919 "declarative_edt.m"
              *mdb__declarative_edt__MaybeFound_11 = mdb__declarative_edt__MaybeFound0_22;
#line 1902 "declarative_edt.m"
          }
#line 1887 "declarative_edt.m"
      }
#line 1886 "declarative_edt.m"
    else
#line 1884 "declarative_edt.m"
      {
#line 1884 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__Unknown_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__UnknownList_12, (MR_Integer) 0)));
#line 1884 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__UnknownList_12, (MR_Integer) 1)));

#line 1885 "declarative_edt.m"
        {
#line 1885 "declarative_edt.m"
          MR_Word base;
#line 1885 "declarative_edt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1885 "declarative_edt.m"
          *mdb__declarative_edt__MaybeFound_11 = base;
#line 1885 "declarative_edt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__Unknown_14));
#line 1885 "declarative_edt.m"
        }
#line 1884 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_25;
#line 1884 "declarative_edt.m"
      }
#line 1880 "declarative_edt.m"
  }
#line 1875 "declarative_edt.m"
}

#line 1841 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__least_skipped_5_p_0(
#line 1841 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_21,
#line 1841 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_6,
#line 1841 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId1_7,
#line 1841 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Suspect1_8,
#line 1841 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId2_9,
#line 1841 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__LeastSkipped_10)
#line 1841 "declarative_edt.m"
{
#line 1844 "declarative_edt.m"
  {
#line 1844 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1844 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Status1_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 2)));
#line 1844 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Status2_12;
#line 1844 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_25;
#line 1845 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 0)));
#line 1845 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_17_17 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 1));
#line 1845 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 3)));
#line 1845 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 4)));
#line 1845 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect1_8, (MR_Integer) 5)));
#line 1788 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_26_26;
#line 1788 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_27_27;
#line 1788 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_28_28;
#line 1788 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_29_29;
#line 1788 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_30_30;
#line 1853 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__N_13;
#line 1853 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__M_14;

#line 1787 "declarative_edt.m"
    {
#line 1787 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_21, mdb__declarative_edt__SearchSpace_6, mdb__declarative_edt__SuspectId2_9, &mdb__declarative_edt__Suspect_25);
    }
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 0)));
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__V_27_27 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 1));
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__Status2_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 2)));
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 3)));
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 4)));
#line 1788 "declarative_edt.m"
    mdb__declarative_edt__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_25, (MR_Integer) 5)));
#line 1847 "declarative_edt.m"
    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Status1_11)) == (MR_mktag((MR_Integer) 1)));
#line 1847 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1847 "declarative_edt.m"
      {
#line 1847 "declarative_edt.m"
        mdb__declarative_edt__N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Status1_11, (MR_Integer) 0)));
#line 1847 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Status2_12)) == (MR_mktag((MR_Integer) 1)));
#line 1847 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1847 "declarative_edt.m"
          mdb__declarative_edt__M_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Status2_12, (MR_Integer) 0)));
#line 1847 "declarative_edt.m"
      }
#line 1853 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1850 "declarative_edt.m"
      {
#line 1848 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__N_13 > mdb__declarative_edt__M_14);
#line 1850 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1849 "declarative_edt.m"
          *mdb__declarative_edt__LeastSkipped_10 = mdb__declarative_edt__SuspectId2_9;
#line 1850 "declarative_edt.m"
        else
#line 1851 "declarative_edt.m"
          *mdb__declarative_edt__LeastSkipped_10 = mdb__declarative_edt__SuspectId1_7;
#line 1850 "declarative_edt.m"
      }
#line 1853 "declarative_edt.m"
    else
#line 1855 "declarative_edt.m"
      {
#line 1853 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_15_15;

#line 1853 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Status1_11)) == (MR_mktag((MR_Integer) 1)));
#line 1853 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1853 "declarative_edt.m"
          {
#line 1853 "declarative_edt.m"
            mdb__declarative_edt__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Status1_11, (MR_Integer) 0)));
#line 1854 "declarative_edt.m"
            *mdb__declarative_edt__LeastSkipped_10 = mdb__declarative_edt__SuspectId1_7;
#line 1853 "declarative_edt.m"
          }
#line 1853 "declarative_edt.m"
        else
#line 1856 "declarative_edt.m"
          *mdb__declarative_edt__LeastSkipped_10 = mdb__declarative_edt__SuspectId2_9;
#line 1855 "declarative_edt.m"
      }
#line 1844 "declarative_edt.m"
  }
#line 1841 "declarative_edt.m"
}

#line 1763 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__find_node_in_list_4_p_0(
#line 1763 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_12,
#line 1763 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_5,
#line 1763 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 1763 "declarative_edt.m"
  MR_Box mdb__declarative_edt__NodeToMatch_8,
#line 1763 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__Pos_9)
#line 1763 "declarative_edt.m"
{
#line 1766 "declarative_edt.m"
  {
#line 1766 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 1766 "declarative_edt.m"
    MR_Box mdb__declarative_edt__Node_6;
#line 1766 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Nodes_7;
#line 7910 "mdb.declarative_edt.c"
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

#line 1766 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1766 "declarative_edt.m"
      {
#line 1766 "declarative_edt.m"
        mdb__declarative_edt__Node_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0));
#line 1766 "declarative_edt.m"
        mdb__declarative_edt__Nodes_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 7921 "mdb.declarative_edt.c"
        mdb__declarative_edt__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_12, (MR_Integer) 0)), (MR_Integer) 13)));
#line 7923 "mdb.declarative_edt.c"
        {
#line 7925 "mdb.declarative_edt.c"
          mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_12), mdb__declarative_edt__Store_5, mdb__declarative_edt__Node_6, mdb__declarative_edt__NodeToMatch_8);
        }
#line 1769 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1768 "declarative_edt.m"
          {
#line 1768 "declarative_edt.m"
            *mdb__declarative_edt__Pos_9 = (MR_Integer) 1;
#line 1768 "declarative_edt.m"
            mdb__declarative_edt__succeeded = MR_TRUE;
#line 1768 "declarative_edt.m"
          }
#line 1769 "declarative_edt.m"
        else
#line 1770 "declarative_edt.m"
          {
#line 1770 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__TailPos_10;
#line 1770 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_11_11;

#line 1770 "declarative_edt.m"
            {
#line 1770 "declarative_edt.m"
              mdb__declarative_edt__succeeded = mdb__declarative_edt__find_node_in_list_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_12, mdb__declarative_edt__Store_5, mdb__declarative_edt__Nodes_7, mdb__declarative_edt__NodeToMatch_8, &mdb__declarative_edt__TailPos_10);
            }
#line 1770 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1770 "declarative_edt.m"
              {
#line 1771 "declarative_edt.m"
                mdb__declarative_edt__V_11_11 = (MR_Integer) 1;
#line 1771 "declarative_edt.m"
                *mdb__declarative_edt__Pos_9 = (mdb__declarative_edt__TailPos_10 + mdb__declarative_edt__V_11_11);
#line 1771 "declarative_edt.m"
                mdb__declarative_edt__succeeded = MR_TRUE;
#line 1770 "declarative_edt.m"
              }
#line 1770 "declarative_edt.m"
          }
#line 1766 "declarative_edt.m"
      }
#line 1766 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1766 "declarative_edt.m"
  }
#line 1763 "declarative_edt.m"
}

#line 1690 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__insert_new_topmost_node_5_p_0(
#line 1690 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154,
#line 1690 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_6,
#line 1690 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_7,
#line 1690 "declarative_edt.m"
  MR_Box mdb__declarative_edt__NewTopMostEDTNode_8,
#line 1690 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32,
#line 1690 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33)
#line 1690 "declarative_edt.m"
{
#line 1758 "declarative_edt.m"
  {
#line 1758 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1758 "declarative_edt.m"
    MR_Word mdb__declarative_edt__EDTChildren_10;

#line 1694 "declarative_edt.m"
    {
#line 1694 "declarative_edt.m"
      mdb__declarative_edt__succeeded = mdb__declarative_edt__edt_children_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, mdb__declarative_edt__Store_6, mdb__declarative_edt__NewTopMostEDTNode_8, &mdb__declarative_edt__EDTChildren_10);
    }
#line 1758 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1695 "declarative_edt.m"
      {
#line 1695 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_156_156;
#line 1695 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_157_157;
#line 1695 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__OldTopMostId_11;
#line 1695 "declarative_edt.m"
        MR_Word mdb__declarative_edt__OldTopMost_12;
#line 1754 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__Pos_13;
#line 1754 "declarative_edt.m"
        MR_Word mdb__declarative_edt__LeftChildren_14;
#line 1754 "declarative_edt.m"
        MR_Word mdb__declarative_edt__RightChildren_16;
#line 1701 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_158_158;
#line 1701 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_34_34;
#line 1701 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_35_35;
#line 1701 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_36_36;
#line 1701 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_37_37;
#line 1701 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_75_75;
#line 1701 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_76_76;
#line 1701 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_77_77;
#line 1701 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_78_78;
#line 1701 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_79_79;
#line 1703 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_15_15;

#line 8045 "mdb.declarative_edt.c"
        {
#line 8047 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_156_156);
        }
#line 1695 "declarative_edt.m"
        {
#line 1695 "declarative_edt.m"
          mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_156_156, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, &mdb__declarative_edt__OldTopMostId_11);
        }
#line 8055 "mdb.declarative_edt.c"
        {
#line 8057 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_157_157);
        }
#line 1696 "declarative_edt.m"
        {
#line 1696 "declarative_edt.m"
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_157_157, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, mdb__declarative_edt__OldTopMostId_11, &mdb__declarative_edt__OldTopMost_12);
        }
#line 1701 "declarative_edt.m"
        mdb__declarative_edt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 0)));
#line 1701 "declarative_edt.m"
        mdb__declarative_edt__V_34_34 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 1));
#line 1701 "declarative_edt.m"
        mdb__declarative_edt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 2)));
#line 1701 "declarative_edt.m"
        mdb__declarative_edt__V_77_77 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 3)));
#line 1701 "declarative_edt.m"
        mdb__declarative_edt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 4)));
#line 1701 "declarative_edt.m"
        mdb__declarative_edt__V_79_79 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 5)));
#line 1701 "declarative_edt.m"
        {
#line 1701 "declarative_edt.m"
          mdb__declarative_edt__succeeded = mdb__declarative_edt__find_node_in_list_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, mdb__declarative_edt__Store_6, mdb__declarative_edt__EDTChildren_10, mdb__declarative_edt__V_34_34, &mdb__declarative_edt__Pos_13);
        }
#line 1701 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1701 "declarative_edt.m"
          {
#line 1702 "declarative_edt.m"
            mdb__declarative_edt__V_37_37 = (MR_Integer) 1;
#line 1702 "declarative_edt.m"
            mdb__declarative_edt__V_35_35 = (mdb__declarative_edt__Pos_13 - mdb__declarative_edt__V_37_37);
#line 8090 "mdb.declarative_edt.c"
            {
#line 8092 "mdb.declarative_edt.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_158_158);
            }
#line 1702 "declarative_edt.m"
            {
#line 1702 "declarative_edt.m"
              mdb__declarative_edt__succeeded = mercury__list__split_list_4_p_0(mdb__declarative_edt__TypeInfo_158_158, mdb__declarative_edt__V_35_35, mdb__declarative_edt__EDTChildren_10, &mdb__declarative_edt__LeftChildren_14, &mdb__declarative_edt__V_36_36);
            }
#line 1701 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1701 "declarative_edt.m"
              {
#line 1703 "declarative_edt.m"
                mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_36_36)) == (MR_mktag((MR_Integer) 1)));
#line 1703 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 1703 "declarative_edt.m"
                  {
#line 1703 "declarative_edt.m"
                    mdb__declarative_edt__V_15_15 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_36_36, (MR_Integer) 0));
#line 1703 "declarative_edt.m"
                    mdb__declarative_edt__RightChildren_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_36_36, (MR_Integer) 1)));
#line 1703 "declarative_edt.m"
                  }
#line 1701 "declarative_edt.m"
              }
#line 1701 "declarative_edt.m"
          }
#line 1754 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1706 "declarative_edt.m"
          {
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_160_160;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_162_162;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_163_163;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_168_168;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_170_170;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__NewTopMostStatus_17;
#line 1706 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__NewTopMostDepth_18;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__NewTopMost_19;
#line 1706 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__NewTopMostId_22;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__SiblingStatus_23;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__ChildrenIds_24;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__NewTopMostChildrenIds_27;
#line 1706 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__Weight_28;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__NewTopMostWithCorrectWeight_31;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 2)));
#line 1706 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_39_39;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_Counter_44_44;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_Counter_45_45;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SuspectStore_47_47;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SuspectStore_48_48;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_50_50;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_58_58;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SuspectStore_59_59;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SuspectStore_61_61;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_62_62;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SuspectStore_63_63;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_64_64;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_122_122;
#line 1706 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_123_123;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_124_124;
#line 1706 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_125_125;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_140_140;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_142_142;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_143_143;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_145_145;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_146_146;
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 0)));
#line 1706 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_81_81 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 1));
#line 1706 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 3)));
#line 1706 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 4)));
#line 1706 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 5)));
#line 1707 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_85_85;
#line 1707 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_86_86;
#line 1707 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_87_87;
#line 1707 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_88_88;
#line 1707 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_89_89;
#line 1713 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_90_90;
#line 1713 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_91_91;
#line 1713 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_92_92;
#line 1713 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_93_93;
#line 1713 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_94_94;
#line 1713 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_95_95;
#line 1715 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_96_96;
#line 1715 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_97_97;
#line 1715 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_99_99;
#line 1715 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_101_101;
#line 1715 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_102_102;
#line 1715 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_98_98;
#line 1718 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_109_109;
#line 1718 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_110_110;
#line 1718 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_111_111;
#line 1718 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_112_112;
#line 1718 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_114_114;
#line 1718 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_115_115;
#line 1718 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_113_113;
#line 1731 "declarative_edt.m"
            MR_Word mdb__declarative_edt__LeftChildrenIds_25;
#line 1731 "declarative_edt.m"
            MR_Word mdb__declarative_edt__RightChildrenIds_26;
#line 1726 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_52_52;
#line 1736 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_29_29;
#line 1740 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_116_116;
#line 1740 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_117_117;
#line 1740 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_118_118;
#line 1740 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_119_119;
#line 1740 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_120_120;
#line 1740 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_121_121;
#line 1741 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_126_126;
#line 1741 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_127_127;
#line 1747 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_135_135;
#line 1747 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_136_136;
#line 1747 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_137_137;
#line 1747 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_138_138;
#line 1747 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_139_139;
#line 1747 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_134_134;
#line 1749 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_141_141;
#line 1749 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_144_144;

#line 1706 "declarative_edt.m"
            {
#line 1706 "declarative_edt.m"
              mdb__declarative_edt__NewTopMostStatus_17 = mdb__declarative_edt__new_parent_status_1_f_0(mdb__declarative_edt__V_38_38);
            }
#line 1707 "declarative_edt.m"
            mdb__declarative_edt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 0)));
#line 1707 "declarative_edt.m"
            mdb__declarative_edt__V_86_86 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 1));
#line 1707 "declarative_edt.m"
            mdb__declarative_edt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 2)));
#line 1707 "declarative_edt.m"
            mdb__declarative_edt__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 3)));
#line 1707 "declarative_edt.m"
            mdb__declarative_edt__V_88_88 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 4)));
#line 1707 "declarative_edt.m"
            mdb__declarative_edt__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 5)));
#line 1707 "declarative_edt.m"
            mdb__declarative_edt__NewTopMostDepth_18 = (mdb__declarative_edt__V_39_39 - (MR_Integer) 1);
#line 1710 "declarative_edt.m"
            {
#line 1710 "declarative_edt.m"
              mdb__declarative_edt__NewTopMost_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1710 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1710 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 1) = mdb__declarative_edt__NewTopMostEDTNode_8;
#line 1710 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 2) = ((MR_Box) (mdb__declarative_edt__NewTopMostStatus_17));
#line 1710 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 3) = ((MR_Box) (mdb__declarative_edt__NewTopMostDepth_18));
#line 1710 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1710 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, 5) = ((MR_Box) ((MR_Integer) 0));
#line 1710 "declarative_edt.m"
            }
#line 1713 "declarative_edt.m"
            mdb__declarative_edt__V_90_90 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 0)));
#line 1713 "declarative_edt.m"
            mdb__declarative_edt__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 1)));
#line 1713 "declarative_edt.m"
            mdb__declarative_edt__STATE_VARIABLE_Counter_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 2)));
#line 1713 "declarative_edt.m"
            mdb__declarative_edt__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 3)));
#line 1713 "declarative_edt.m"
            mdb__declarative_edt__V_93_93 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 4)));
#line 1713 "declarative_edt.m"
            mdb__declarative_edt__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 5)));
#line 1713 "declarative_edt.m"
            mdb__declarative_edt__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 6)));
#line 1714 "declarative_edt.m"
            {
#line 1714 "declarative_edt.m"
              mercury__counter__allocate_3_p_0(&mdb__declarative_edt__NewTopMostId_22, mdb__declarative_edt__STATE_VARIABLE_Counter_44_44, &mdb__declarative_edt__STATE_VARIABLE_Counter_45_45);
            }
#line 1715 "declarative_edt.m"
            mdb__declarative_edt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 0)));
#line 1715 "declarative_edt.m"
            mdb__declarative_edt__V_97_97 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 1)));
#line 1715 "declarative_edt.m"
            mdb__declarative_edt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 2)));
#line 1715 "declarative_edt.m"
            mdb__declarative_edt__V_99_99 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 3)));
#line 1715 "declarative_edt.m"
            mdb__declarative_edt__STATE_VARIABLE_SuspectStore_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 4)));
#line 1715 "declarative_edt.m"
            mdb__declarative_edt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 5)));
#line 1715 "declarative_edt.m"
            mdb__declarative_edt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_32, (MR_Integer) 6)));
#line 1715 "declarative_edt.m"
            {
#line 1715 "declarative_edt.m"
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1715 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 0) = ((MR_Box) (mdb__declarative_edt__V_96_96));
#line 1715 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 1) = ((MR_Box) (mdb__declarative_edt__V_97_97));
#line 1715 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 2) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_Counter_45_45));
#line 1715 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 3) = ((MR_Box) (mdb__declarative_edt__V_99_99));
#line 1715 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SuspectStore_47_47));
#line 1715 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 5) = ((MR_Box) (mdb__declarative_edt__V_101_101));
#line 1715 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, 6) = ((MR_Box) (mdb__declarative_edt__V_102_102));
#line 1715 "declarative_edt.m"
            }
#line 8393 "mdb.declarative_edt.c"
            {
#line 8395 "mdb.declarative_edt.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_160_160);
            }
#line 8398 "mdb.declarative_edt.c"
            {
#line 8400 "mdb.declarative_edt.c"
              mdb__declarative_edt__TypeInfo_162_162 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8402 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_162_162, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 8404 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_162_162, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_160_160));
#line 8406 "mdb.declarative_edt.c"
            }
#line 1717 "declarative_edt.m"
            {
#line 1717 "declarative_edt.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_162_162, mdb__declarative_edt__NewTopMostId_22, ((MR_Box) (mdb__declarative_edt__NewTopMost_19)), mdb__declarative_edt__STATE_VARIABLE_SuspectStore_47_47, &mdb__declarative_edt__STATE_VARIABLE_SuspectStore_48_48);
            }
#line 1718 "declarative_edt.m"
            mdb__declarative_edt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 0)));
#line 1718 "declarative_edt.m"
            mdb__declarative_edt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 1)));
#line 1718 "declarative_edt.m"
            mdb__declarative_edt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 2)));
#line 1718 "declarative_edt.m"
            mdb__declarative_edt__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 3)));
#line 1718 "declarative_edt.m"
            mdb__declarative_edt__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 4)));
#line 1718 "declarative_edt.m"
            mdb__declarative_edt__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 5)));
#line 1718 "declarative_edt.m"
            mdb__declarative_edt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_46_46, (MR_Integer) 6)));
#line 1718 "declarative_edt.m"
            {
#line 1718 "declarative_edt.m"
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1718 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 0) = ((MR_Box) (mdb__declarative_edt__V_109_109));
#line 1718 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 1) = ((MR_Box) (mdb__declarative_edt__V_110_110));
#line 1718 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 2) = ((MR_Box) (mdb__declarative_edt__V_111_111));
#line 1718 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 3) = ((MR_Box) (mdb__declarative_edt__V_112_112));
#line 1718 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SuspectStore_48_48));
#line 1718 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 5) = ((MR_Box) (mdb__declarative_edt__V_114_114));
#line 1718 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, 6) = ((MR_Box) (mdb__declarative_edt__V_115_115));
#line 1718 "declarative_edt.m"
            }
#line 1720 "declarative_edt.m"
            {
#line 1720 "declarative_edt.m"
              mdb__declarative_edt__SiblingStatus_23 = mdb__declarative_edt__new_child_status_1_f_0(mdb__declarative_edt__NewTopMostStatus_17);
            }
#line 8452 "mdb.declarative_edt.c"
            {
#line 8454 "mdb.declarative_edt.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_163_163);
            }
#line 1721 "declarative_edt.m"
            {
#line 1721 "declarative_edt.m"
              mdb__declarative_edt__V_50_50 = mercury__list__append_2_f_0(mdb__declarative_edt__TypeInfo_163_163, mdb__declarative_edt__LeftChildren_14, mdb__declarative_edt__RightChildren_16);
            }
#line 1721 "declarative_edt.m"
            {
#line 1721 "declarative_edt.m"
              mdb__declarative_edt__add_children_8_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, mdb__declarative_edt__Store_6, mdb__declarative_edt__Oracle_7, mdb__declarative_edt__V_50_50, mdb__declarative_edt__NewTopMostId_22, mdb__declarative_edt__SiblingStatus_23, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_49_49, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, &mdb__declarative_edt__ChildrenIds_24);
            }
#line 1726 "declarative_edt.m"
            mdb__declarative_edt__V_52_52 = (mdb__declarative_edt__Pos_13 - (MR_Integer) 1);
#line 1726 "declarative_edt.m"
            {
#line 1726 "declarative_edt.m"
              mdb__declarative_edt__succeeded = mercury__list__split_list_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__V_52_52, mdb__declarative_edt__ChildrenIds_24, &mdb__declarative_edt__LeftChildrenIds_25, &mdb__declarative_edt__RightChildrenIds_26);
            }
#line 1731 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1729 "declarative_edt.m"
              {
#line 1729 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_54_54;

#line 1729 "declarative_edt.m"
                {
#line 1729 "declarative_edt.m"
                  mdb__declarative_edt__V_54_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1729 "declarative_edt.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_54_54, 0) = ((MR_Box) (mdb__declarative_edt__OldTopMostId_11));
#line 1729 "declarative_edt.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_54_54, 1) = ((MR_Box) (mdb__declarative_edt__RightChildrenIds_26));
#line 1729 "declarative_edt.m"
                }
#line 1729 "declarative_edt.m"
                {
#line 1729 "declarative_edt.m"
                  mercury__list__append_3_p_1((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__LeftChildrenIds_25, mdb__declarative_edt__V_54_54, &mdb__declarative_edt__NewTopMostChildrenIds_27);
                }
#line 1729 "declarative_edt.m"
              }
#line 1731 "declarative_edt.m"
            else
#line 1732 "declarative_edt.m"
              {
#line 1732 "declarative_edt.m"
                {
#line 1732 "declarative_edt.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[15])));
#line 1732 "declarative_edt.m"
                  return;
                }
#line 1732 "declarative_edt.m"
              }
#line 1737 "declarative_edt.m"
            {
#line 1737 "declarative_edt.m"
              mdb__declarative_edt__V_58_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1737 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_58_58, 0) = ((MR_Box) (mdb__declarative_edt__NewTopMostChildrenIds_27));
#line 1737 "declarative_edt.m"
            }
#line 1736 "declarative_edt.m"
            {
#line 1736 "declarative_edt.m"
              mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, mdb__declarative_edt__Store_6, mdb__declarative_edt__NewTopMostEDTNode_8, mdb__declarative_edt__V_58_58, mdb__declarative_edt__NewTopMostStatus_17, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, &mdb__declarative_edt__Weight_28, &mdb__declarative_edt__V_29_29);
            }
#line 1740 "declarative_edt.m"
            mdb__declarative_edt__V_116_116 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 0)));
#line 1740 "declarative_edt.m"
            mdb__declarative_edt__V_117_117 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 1)));
#line 1740 "declarative_edt.m"
            mdb__declarative_edt__V_118_118 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 2)));
#line 1740 "declarative_edt.m"
            mdb__declarative_edt__V_119_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 3)));
#line 1740 "declarative_edt.m"
            mdb__declarative_edt__STATE_VARIABLE_SuspectStore_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 4)));
#line 1740 "declarative_edt.m"
            mdb__declarative_edt__V_120_120 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 5)));
#line 1740 "declarative_edt.m"
            mdb__declarative_edt__V_121_121 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 6)));
#line 1741 "declarative_edt.m"
            mdb__declarative_edt__V_122_122 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 0)));
#line 1741 "declarative_edt.m"
            mdb__declarative_edt__V_123_123 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 1));
#line 1741 "declarative_edt.m"
            mdb__declarative_edt__V_124_124 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 2)));
#line 1741 "declarative_edt.m"
            mdb__declarative_edt__V_125_125 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 3)));
#line 1741 "declarative_edt.m"
            mdb__declarative_edt__V_126_126 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 4)));
#line 1741 "declarative_edt.m"
            mdb__declarative_edt__V_127_127 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMost_19, (MR_Integer) 5)));
#line 1743 "declarative_edt.m"
            {
#line 1743 "declarative_edt.m"
              mdb__declarative_edt__NewTopMostWithCorrectWeight_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1743 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 0) = ((MR_Box) (mdb__declarative_edt__V_122_122));
#line 1743 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 1) = mdb__declarative_edt__V_123_123;
#line 1743 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 2) = ((MR_Box) (mdb__declarative_edt__V_124_124));
#line 1743 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 3) = ((MR_Box) (mdb__declarative_edt__V_125_125));
#line 1743 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 4) = ((MR_Box) (mdb__declarative_edt__V_58_58));
#line 1743 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__NewTopMostWithCorrectWeight_31, 5) = ((MR_Box) (mdb__declarative_edt__Weight_28));
#line 1743 "declarative_edt.m"
            }
#line 8568 "mdb.declarative_edt.c"
            {
#line 8570 "mdb.declarative_edt.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_168_168);
            }
#line 8573 "mdb.declarative_edt.c"
            {
#line 8575 "mdb.declarative_edt.c"
              mdb__declarative_edt__TypeInfo_170_170 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 8577 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_170_170, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 8579 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_170_170, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_168_168));
#line 8581 "mdb.declarative_edt.c"
            }
#line 1745 "declarative_edt.m"
            {
#line 1745 "declarative_edt.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_170_170, mdb__declarative_edt__NewTopMostId_22, ((MR_Box) (mdb__declarative_edt__NewTopMostWithCorrectWeight_31)), mdb__declarative_edt__STATE_VARIABLE_SuspectStore_59_59, &mdb__declarative_edt__STATE_VARIABLE_SuspectStore_61_61);
            }
#line 1748 "declarative_edt.m"
            {
#line 1748 "declarative_edt.m"
              mdb__declarative_edt__V_64_64 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1748 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_64_64, 0) = ((MR_Box) (mdb__declarative_edt__NewTopMostId_22));
#line 1748 "declarative_edt.m"
            }
#line 1747 "declarative_edt.m"
            mdb__declarative_edt__V_134_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 0)));
#line 1747 "declarative_edt.m"
            mdb__declarative_edt__V_135_135 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 1));
#line 1747 "declarative_edt.m"
            mdb__declarative_edt__V_136_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 2)));
#line 1747 "declarative_edt.m"
            mdb__declarative_edt__V_137_137 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 3)));
#line 1747 "declarative_edt.m"
            mdb__declarative_edt__V_138_138 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 4)));
#line 1747 "declarative_edt.m"
            mdb__declarative_edt__V_139_139 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OldTopMost_12, (MR_Integer) 5)));
#line 1747 "declarative_edt.m"
            {
#line 1747 "declarative_edt.m"
              mdb__declarative_edt__V_62_62 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1747 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_62_62, 0) = ((MR_Box) (mdb__declarative_edt__V_64_64));
#line 1747 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_62_62, 1) = mdb__declarative_edt__V_135_135;
#line 1747 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_62_62, 2) = ((MR_Box) (mdb__declarative_edt__V_136_136));
#line 1747 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_62_62, 3) = ((MR_Box) (mdb__declarative_edt__V_137_137));
#line 1747 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_62_62, 4) = ((MR_Box) (mdb__declarative_edt__V_138_138));
#line 1747 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_62_62, 5) = ((MR_Box) (mdb__declarative_edt__V_139_139));
#line 1747 "declarative_edt.m"
            }
#line 1747 "declarative_edt.m"
            {
#line 1747 "declarative_edt.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_170_170, mdb__declarative_edt__OldTopMostId_11, ((MR_Box) (mdb__declarative_edt__V_62_62)), mdb__declarative_edt__STATE_VARIABLE_SuspectStore_61_61, &mdb__declarative_edt__STATE_VARIABLE_SuspectStore_63_63);
            }
#line 1749 "declarative_edt.m"
            mdb__declarative_edt__V_140_140 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 0)));
#line 1749 "declarative_edt.m"
            mdb__declarative_edt__V_141_141 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 1)));
#line 1749 "declarative_edt.m"
            mdb__declarative_edt__V_142_142 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 2)));
#line 1749 "declarative_edt.m"
            mdb__declarative_edt__V_143_143 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 3)));
#line 1749 "declarative_edt.m"
            mdb__declarative_edt__V_144_144 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 4)));
#line 1749 "declarative_edt.m"
            mdb__declarative_edt__V_145_145 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 5)));
#line 1749 "declarative_edt.m"
            mdb__declarative_edt__V_146_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_51_51, (MR_Integer) 6)));
#line 1751 "declarative_edt.m"
            {
#line 1751 "declarative_edt.m"
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1751 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 0) = ((MR_Box) (mdb__declarative_edt__V_140_140));
#line 1751 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 1) = ((MR_Box) (mdb__declarative_edt__V_64_64));
#line 1751 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 2) = ((MR_Box) (mdb__declarative_edt__V_142_142));
#line 1751 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 3) = ((MR_Box) (mdb__declarative_edt__V_143_143));
#line 1751 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SuspectStore_63_63));
#line 1751 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 5) = ((MR_Box) (mdb__declarative_edt__V_145_145));
#line 1751 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, 6) = ((MR_Box) (mdb__declarative_edt__V_146_146));
#line 1751 "declarative_edt.m"
            }
#line 1752 "declarative_edt.m"
            {
#line 1752 "declarative_edt.m"
              mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_154, mdb__declarative_edt__Store_6, mdb__declarative_edt__Oracle_7, mdb__declarative_edt__NewTopMostId_22, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_66_66, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33);
#line 1752 "declarative_edt.m"
              return;
            }
#line 1706 "declarative_edt.m"
          }
#line 1754 "declarative_edt.m"
        else
#line 1755 "declarative_edt.m"
          {
#line 1755 "declarative_edt.m"
            {
#line 1755 "declarative_edt.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[16])));
#line 1755 "declarative_edt.m"
              return;
            }
#line 1755 "declarative_edt.m"
          }
#line 1695 "declarative_edt.m"
      }
#line 1758 "declarative_edt.m"
    else
#line 1759 "declarative_edt.m"
      {
#line 1759 "declarative_edt.m"
        {
#line 1759 "declarative_edt.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[17])));
#line 1759 "declarative_edt.m"
          return;
        }
#line 1759 "declarative_edt.m"
      }
#line 1758 "declarative_edt.m"
  }
#line 1690 "declarative_edt.m"
}

#line 1615 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(
#line 1615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34,
#line 1615 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_6,
#line 1615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_7,
#line 1615 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_8,
#line 1615 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16,
#line 1615 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17)
#line 1615 "declarative_edt.m"
{
#line 1619 "declarative_edt.m"
  {
#line 1619 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1619 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_36_36;
#line 1619 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_10;
#line 1643 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_25_25;
#line 1621 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_18_18;
#line 1621 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_24_24;
#line 1621 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_26_26;
#line 1621 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_27_27;
#line 1621 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_28_28;

#line 8745 "mdb.declarative_edt.c"
    {
#line 8747 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_36_36);
    }
#line 1620 "declarative_edt.m"
    {
#line 1620 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_36_36, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__SuspectId_8, &mdb__declarative_edt__Suspect_10);
    }
#line 1621 "declarative_edt.m"
    mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 0)));
#line 1621 "declarative_edt.m"
    mdb__declarative_edt__V_25_25 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 1));
#line 1621 "declarative_edt.m"
    mdb__declarative_edt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 2)));
#line 1621 "declarative_edt.m"
    mdb__declarative_edt__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 3)));
#line 1621 "declarative_edt.m"
    mdb__declarative_edt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 4)));
#line 1621 "declarative_edt.m"
    mdb__declarative_edt__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 5)));
#line 1621 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_18_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1643 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1622 "declarative_edt.m"
      {
#line 1622 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Question_11;
#line 8775 "mdb.declarative_edt.c"
        void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 0)), (MR_Integer) 5)));
#line 8777 "mdb.declarative_edt.c"
        MR_Box mdb__declarative_edt__conv1_Question_11;
#line 1640 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Answer_12;
#line 1623 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_37_37;

#line 8784 "mdb.declarative_edt.c"
        {
#line 8786 "mdb.declarative_edt.c"
          mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34), mdb__declarative_edt__Store_6, mdb__declarative_edt__V_25_25, &mdb__declarative_edt__conv1_Question_11);
        }
#line 8789 "mdb.declarative_edt.c"
        mdb__declarative_edt__Question_11 = ((MR_Word) mdb__declarative_edt__conv1_Question_11);
#line 8791 "mdb.declarative_edt.c"
        {
#line 8793 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_37_37);
        }
#line 1623 "declarative_edt.m"
        {
#line 1623 "declarative_edt.m"
          mdb__declarative_edt__succeeded = mdb__declarative_oracle__answer_known_3_p_0(mdb__declarative_edt__TypeInfo_37_37, mdb__declarative_edt__Oracle_7, mdb__declarative_edt__Question_11, &mdb__declarative_edt__Answer_12);
        }
#line 1640 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1627 "declarative_edt.m"
          if (((MR_tag((MR_Word) mdb__declarative_edt__Answer_12)) == (MR_mktag((MR_Integer) 2))))
#line 1626 "declarative_edt.m"
            {
#line 1626 "declarative_edt.m"
              mdb__declarative_edt__ignore_suspect_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, mdb__declarative_edt__Store_6, mdb__declarative_edt__SuspectId_8, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);
#line 1626 "declarative_edt.m"
              return;
            }
#line 1627 "declarative_edt.m"
          else
#line 1628 "declarative_edt.m"
            {
#line 1628 "declarative_edt.m"
              MR_Word mdb__declarative_edt__Truth_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Answer_12, (MR_Integer) 1)));
#line 1628 "declarative_edt.m"
              MR_Box mdb__declarative_edt__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Answer_12, (MR_Integer) 0));

#line 1632 "declarative_edt.m"
              if ((mdb__declarative_edt__Truth_15 == (MR_Integer) 0))
#line 1633 "declarative_edt.m"
                {
#line 1633 "declarative_edt.m"
                  MR_Word mdb__declarative_edt__TypeInfo_39_39;

#line 8828 "mdb.declarative_edt.c"
                  {
#line 8830 "mdb.declarative_edt.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_39_39);
                  }
#line 870 "declarative_edt.m"
                  {
#line 870 "declarative_edt.m"
                    mdb__declarative_edt__assert_suspect_is_valid_4_p_0(mdb__declarative_edt__TypeInfo_39_39, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), mdb__declarative_edt__SuspectId_8, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);
#line 870 "declarative_edt.m"
                    return;
                  }
#line 1633 "declarative_edt.m"
                }
#line 1632 "declarative_edt.m"
              else
#line 1632 "declarative_edt.m"
              if ((mdb__declarative_edt__Truth_15 == (MR_Integer) 1))
#line 1630 "declarative_edt.m"
                {
#line 1630 "declarative_edt.m"
                  MR_Word mdb__declarative_edt__TypeInfo_38_38;

#line 8851 "mdb.declarative_edt.c"
                  {
#line 8853 "mdb.declarative_edt.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_38_38);
                  }
#line 1631 "declarative_edt.m"
                  {
#line 1631 "declarative_edt.m"
                    mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(mdb__declarative_edt__TypeInfo_38_38, mdb__declarative_edt__SuspectId_8, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);
#line 1631 "declarative_edt.m"
                    return;
                  }
#line 1630 "declarative_edt.m"
                }
#line 1632 "declarative_edt.m"
              else
#line 1636 "declarative_edt.m"
                {
#line 1636 "declarative_edt.m"
                  MR_Word mdb__declarative_edt__TypeInfo_40_40;

#line 8872 "mdb.declarative_edt.c"
                  {
#line 8874 "mdb.declarative_edt.c"
                    mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_40_40);
                  }
#line 867 "declarative_edt.m"
                  {
#line 867 "declarative_edt.m"
                    mdb__declarative_edt__assert_suspect_is_valid_4_p_0(mdb__declarative_edt__TypeInfo_40_40, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), mdb__declarative_edt__SuspectId_8, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17);
#line 867 "declarative_edt.m"
                    return;
                  }
#line 1636 "declarative_edt.m"
                }
#line 1628 "declarative_edt.m"
            }
#line 1640 "declarative_edt.m"
        else
#line 1640 "declarative_edt.m"
          *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16;
#line 1622 "declarative_edt.m"
      }
#line 1643 "declarative_edt.m"
    else
#line 1643 "declarative_edt.m"
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16;
#line 1619 "declarative_edt.m"
  }
#line 1615 "declarative_edt.m"
}

#line 1564 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0_1(
#line 1564 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1564 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1564 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1564 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3)
#line 1564 "declarative_edt.m"
{
#line 1564 "declarative_edt.m"
  {
#line 1564 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 1564 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_17;

#line 1564 "declarative_edt.m"
    {
#line 1564 "declarative_edt.m"
      mdb__declarative_edt__adjust_suspect_status_from_oracle_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4)), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_17);
    }
#line 1564 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_17));
#line 1564 "declarative_edt.m"
  }
#line 1564 "declarative_edt.m"
}

#line 1547 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__add_children_8_p_0(
#line 1547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88,
#line 1547 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_9,
#line 1547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_10,
#line 1547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__EDTChildren_11,
#line 1547 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_12,
#line 1547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_13,
#line 1547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24,
#line 1547 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25,
#line 1547 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Children_15)
#line 1547 "declarative_edt.m"
{
#line 1552 "declarative_edt.m"
  {
#line 1552 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_90_90;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_91_91;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_92_92;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_97_97;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_99_99;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Counter0_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 2)));
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect0_17;
#line 1552 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Depth_18;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Counter_19;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_20;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__SuspectWithChildren_21;
#line 1552 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_26_26;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_30_30;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31_31;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_32_32;
#line 1552 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33_33;
#line 1553 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 0)));
#line 1553 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 1)));
#line 1553 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 3)));
#line 1553 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 4)));
#line 1553 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 5)));
#line 1553 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, (MR_Integer) 6)));
#line 1555 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_49_49;
#line 1555 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_50_50;
#line 1555 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_51_51;
#line 1555 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_52_52;
#line 1555 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_53_53;
#line 1561 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_54_54;
#line 1561 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_55_55;
#line 1561 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_57_57;
#line 1561 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_58_58;
#line 1561 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_59_59;
#line 1561 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_60_60;
#line 1561 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_56_56;
#line 1562 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_61_61;
#line 1562 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_62_62;
#line 1562 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_63_63;
#line 1562 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_64_64;
#line 1562 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_66_66;
#line 1562 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_65_65;
#line 1564 "declarative_edt.m"
    MR_Box mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_33_33;
#line 1578 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_68_68;
#line 1571 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_34_34;
#line 1571 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_67_67;
#line 1571 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_69_69;
#line 1571 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_70_70;
#line 1571 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_71_71;

#line 9061 "mdb.declarative_edt.c"
    {
#line 9063 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_90_90);
    }
#line 1554 "declarative_edt.m"
    {
#line 1554 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_90_90, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, mdb__declarative_edt__SuspectId_12, &mdb__declarative_edt__Suspect0_17);
    }
#line 1555 "declarative_edt.m"
    mdb__declarative_edt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 0)));
#line 1555 "declarative_edt.m"
    mdb__declarative_edt__V_50_50 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 1));
#line 1555 "declarative_edt.m"
    mdb__declarative_edt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 2)));
#line 1555 "declarative_edt.m"
    mdb__declarative_edt__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 3)));
#line 1555 "declarative_edt.m"
    mdb__declarative_edt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 4)));
#line 1555 "declarative_edt.m"
    mdb__declarative_edt__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect0_17, (MR_Integer) 5)));
#line 1555 "declarative_edt.m"
    mdb__declarative_edt__Depth_18 = (mdb__declarative_edt__V_26_26 + (MR_Integer) 1);
#line 1556 "declarative_edt.m"
    {
#line 1556 "declarative_edt.m"
      mdb__declarative_edt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_97_100_100_95_99_104_105_108_100_114_101_110_95_50_95_95_91_51_93_95_48_11_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, mdb__declarative_edt__Store_9, mdb__declarative_edt__EDTChildren_11, mdb__declarative_edt__SuspectId_12, mdb__declarative_edt__Status_13, mdb__declarative_edt__Depth_18, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_24, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, mdb__declarative_edt__Counter0_16, &mdb__declarative_edt__Counter_19, mdb__declarative_edt__Children_15);
    }
#line 9090 "mdb.declarative_edt.c"
    {
#line 9092 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_91_91);
    }
#line 1560 "declarative_edt.m"
    {
#line 1560 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_91_91, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, mdb__declarative_edt__SuspectId_12, &mdb__declarative_edt__Suspect_20);
    }
#line 1561 "declarative_edt.m"
    mdb__declarative_edt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 0)));
#line 1561 "declarative_edt.m"
    mdb__declarative_edt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 1)));
#line 1561 "declarative_edt.m"
    mdb__declarative_edt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 2)));
#line 1561 "declarative_edt.m"
    mdb__declarative_edt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 3)));
#line 1561 "declarative_edt.m"
    mdb__declarative_edt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 4)));
#line 1561 "declarative_edt.m"
    mdb__declarative_edt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 5)));
#line 1561 "declarative_edt.m"
    mdb__declarative_edt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, (MR_Integer) 6)));
#line 1561 "declarative_edt.m"
    {
#line 1561 "declarative_edt.m"
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1561 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 0) = ((MR_Box) (mdb__declarative_edt__V_54_54));
#line 1561 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 1) = ((MR_Box) (mdb__declarative_edt__V_55_55));
#line 1561 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 2) = ((MR_Box) (mdb__declarative_edt__Counter_19));
#line 1561 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 3) = ((MR_Box) (mdb__declarative_edt__V_57_57));
#line 1561 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 4) = ((MR_Box) (mdb__declarative_edt__V_58_58));
#line 1561 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 5) = ((MR_Box) (mdb__declarative_edt__V_59_59));
#line 1561 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, 6) = ((MR_Box) (mdb__declarative_edt__V_60_60));
#line 1561 "declarative_edt.m"
    }
#line 1562 "declarative_edt.m"
    {
#line 1562 "declarative_edt.m"
      mdb__declarative_edt__V_30_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1562 "declarative_edt.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_30_30, 0) = ((MR_Box) (*mdb__declarative_edt__Children_15));
#line 1562 "declarative_edt.m"
    }
#line 1562 "declarative_edt.m"
    mdb__declarative_edt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 0)));
#line 1562 "declarative_edt.m"
    mdb__declarative_edt__V_62_62 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 1));
#line 1562 "declarative_edt.m"
    mdb__declarative_edt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 2)));
#line 1562 "declarative_edt.m"
    mdb__declarative_edt__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 3)));
#line 1562 "declarative_edt.m"
    mdb__declarative_edt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 4)));
#line 1562 "declarative_edt.m"
    mdb__declarative_edt__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 5)));
#line 1562 "declarative_edt.m"
    {
#line 1562 "declarative_edt.m"
      mdb__declarative_edt__SuspectWithChildren_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1562 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 0) = ((MR_Box) (mdb__declarative_edt__V_61_61));
#line 1562 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 1) = mdb__declarative_edt__V_62_62;
#line 1562 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 2) = ((MR_Box) (mdb__declarative_edt__V_63_63));
#line 1562 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 3) = ((MR_Box) (mdb__declarative_edt__V_64_64));
#line 1562 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 4) = ((MR_Box) (mdb__declarative_edt__V_30_30));
#line 1562 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, 5) = ((MR_Box) (mdb__declarative_edt__V_66_66));
#line 1562 "declarative_edt.m"
    }
#line 9172 "mdb.declarative_edt.c"
    {
#line 9174 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_92_92);
    }
#line 1563 "declarative_edt.m"
    {
#line 1563 "declarative_edt.m"
      mdb__declarative_edt__set_suspect_4_p_0(mdb__declarative_edt__TypeInfo_92_92, mdb__declarative_edt__SuspectId_12, mdb__declarative_edt__SuspectWithChildren_21, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31_31);
    }
#line 1564 "declarative_edt.m"
    {
#line 1564 "declarative_edt.m"
      mdb__declarative_edt__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1564 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_4[3]));
#line 1564 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 1) = ((MR_Box) (mdb__declarative_edt__add_children_8_p_0_1));
#line 1564 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1564 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88));
#line 1564 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 4) = mdb__declarative_edt__Store_9;
#line 1564 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 5) = ((MR_Box) (mdb__declarative_edt__Oracle_10));
#line 1564 "declarative_edt.m"
    }
#line 9200 "mdb.declarative_edt.c"
    {
#line 9202 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_97_97);
    }
#line 9205 "mdb.declarative_edt.c"
    {
#line 9207 "mdb.declarative_edt.c"
      mdb__declarative_edt__TypeInfo_99_99 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9209 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_99_99, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
#line 9211 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_99_99, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_97_97));
#line 9213 "mdb.declarative_edt.c"
    }
#line 1564 "declarative_edt.m"
    {
#line 1564 "declarative_edt.m"
      mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_99_99, (MR_Word) mdb__declarative_edt__V_32_32, *mdb__declarative_edt__Children_15, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31_31)), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_33_33);
    }
#line 1564 "declarative_edt.m"
    mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33_33 = ((MR_Word) mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_33_33);
#line 1571 "declarative_edt.m"
    mdb__declarative_edt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 0)));
#line 1571 "declarative_edt.m"
    mdb__declarative_edt__V_68_68 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 1));
#line 1571 "declarative_edt.m"
    mdb__declarative_edt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 2)));
#line 1571 "declarative_edt.m"
    mdb__declarative_edt__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 3)));
#line 1571 "declarative_edt.m"
    mdb__declarative_edt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 4)));
#line 1571 "declarative_edt.m"
    mdb__declarative_edt__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 5)));
#line 1571 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_34_34 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1578 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1573 "declarative_edt.m"
      {
#line 1573 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_100_100;
#line 1573 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_101_101;
#line 1573 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__Weight_22;
#line 1573 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_38_38;
#line 1573 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39;
#line 1573 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_40_40;
#line 1573 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_42_42;
#line 1572 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_23_23;
#line 1574 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_77_77;
#line 1574 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_78_78;
#line 1574 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_79_79;
#line 1574 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_80_80;
#line 1574 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_81_81;
#line 1574 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_82_82;
#line 1576 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_83_83;
#line 1576 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_84_84;
#line 1576 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_85_85;
#line 1576 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_86_86;
#line 1576 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_87_87;

#line 1572 "declarative_edt.m"
        {
#line 1572 "declarative_edt.m"
          mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, mdb__declarative_edt__Store_9, mdb__declarative_edt__V_68_68, mdb__declarative_edt__V_30_30, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33_33, &mdb__declarative_edt__Weight_22, &mdb__declarative_edt__V_23_23);
        }
#line 1574 "declarative_edt.m"
        mdb__declarative_edt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 0)));
#line 1574 "declarative_edt.m"
        mdb__declarative_edt__V_78_78 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 1));
#line 1574 "declarative_edt.m"
        mdb__declarative_edt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 2)));
#line 1574 "declarative_edt.m"
        mdb__declarative_edt__V_80_80 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 3)));
#line 1574 "declarative_edt.m"
        mdb__declarative_edt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 4)));
#line 1574 "declarative_edt.m"
        mdb__declarative_edt__V_82_82 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SuspectWithChildren_21, (MR_Integer) 5)));
#line 1574 "declarative_edt.m"
        {
#line 1574 "declarative_edt.m"
          mdb__declarative_edt__V_38_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1574 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_38_38, 0) = ((MR_Box) (mdb__declarative_edt__V_77_77));
#line 1574 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_38_38, 1) = mdb__declarative_edt__V_78_78;
#line 1574 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_38_38, 2) = ((MR_Box) (mdb__declarative_edt__V_79_79));
#line 1574 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_38_38, 3) = ((MR_Box) (mdb__declarative_edt__V_80_80));
#line 1574 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_38_38, 4) = ((MR_Box) (mdb__declarative_edt__V_81_81));
#line 1574 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_38_38, 5) = ((MR_Box) (mdb__declarative_edt__Weight_22));
#line 1574 "declarative_edt.m"
        }
#line 9314 "mdb.declarative_edt.c"
        {
#line 9316 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_100_100);
        }
#line 1574 "declarative_edt.m"
        {
#line 1574 "declarative_edt.m"
          mdb__declarative_edt__set_suspect_4_p_0(mdb__declarative_edt__TypeInfo_100_100, mdb__declarative_edt__SuspectId_12, mdb__declarative_edt__V_38_38, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33_33, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39);
        }
#line 1576 "declarative_edt.m"
        mdb__declarative_edt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 0)));
#line 1576 "declarative_edt.m"
        mdb__declarative_edt__V_84_84 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 1));
#line 1576 "declarative_edt.m"
        mdb__declarative_edt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 2)));
#line 1576 "declarative_edt.m"
        mdb__declarative_edt__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 3)));
#line 1576 "declarative_edt.m"
        mdb__declarative_edt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 4)));
#line 1576 "declarative_edt.m"
        mdb__declarative_edt__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_20, (MR_Integer) 5)));
#line 1576 "declarative_edt.m"
        mdb__declarative_edt__V_40_40 = (mdb__declarative_edt__Weight_22 - mdb__declarative_edt__V_42_42);
#line 9338 "mdb.declarative_edt.c"
        {
#line 9340 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_88, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_101_101);
        }
#line 1576 "declarative_edt.m"
        {
#line 1576 "declarative_edt.m"
          mdb__declarative_edt__add_weight_to_ancestors_4_p_0(mdb__declarative_edt__TypeInfo_101_101, mdb__declarative_edt__SuspectId_12, mdb__declarative_edt__V_40_40, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25);
#line 1576 "declarative_edt.m"
          return;
        }
#line 1573 "declarative_edt.m"
      }
#line 1578 "declarative_edt.m"
    else
#line 1578 "declarative_edt.m"
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_33_33;
#line 1552 "declarative_edt.m"
  }
#line 1547 "declarative_edt.m"
}

#line 1529 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__get_siblings_3_p_0_1(
#line 1529 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1529 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1)
#line 1529 "declarative_edt.m"
{
#line 1529 "declarative_edt.m"
  {
#line 1529 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1529 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

#line 1529 "declarative_edt.m"
    {
#line 1529 "declarative_edt.m"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__get_siblings__1529__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
#line 1529 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1529 "declarative_edt.m"
  }
#line 1529 "declarative_edt.m"
}

#line 1517 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__get_siblings_3_p_0(
#line 1517 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_45,
#line 1517 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_4,
#line 1517 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 1517 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Siblings_6)
#line 1517 "declarative_edt.m"
{
#line 1520 "declarative_edt.m"
  {
#line 1520 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1520 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_7;
#line 1520 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_56_56;
#line 1523 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_51_51;
#line 1523 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_52_52;
#line 1523 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_53_53;
#line 1523 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_54_54;
#line 1523 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_55_55;

#line 1521 "declarative_edt.m"
    {
#line 1521 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_45, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_7);
    }
#line 1523 "declarative_edt.m"
    mdb__declarative_edt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 0)));
#line 1523 "declarative_edt.m"
    mdb__declarative_edt__V_55_55 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 1));
#line 1523 "declarative_edt.m"
    mdb__declarative_edt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 2)));
#line 1523 "declarative_edt.m"
    mdb__declarative_edt__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 3)));
#line 1523 "declarative_edt.m"
    mdb__declarative_edt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 4)));
#line 1523 "declarative_edt.m"
    mdb__declarative_edt__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 5)));
#line 1539 "declarative_edt.m"
    if ((mdb__declarative_edt__V_56_56 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1541 "declarative_edt.m"
      *mdb__declarative_edt__Siblings_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1539 "declarative_edt.m"
    else
#line 1523 "declarative_edt.m"
      {
#line 1523 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__ParentId_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_56_56, (MR_Integer) 0)));
#line 1523 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Parent_9;
#line 1523 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_58_58;
#line 1526 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_57_57;
#line 1526 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_59_59;
#line 1526 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_60_60;
#line 1526 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_61_61;
#line 1526 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_62_62;

#line 1524 "declarative_edt.m"
        {
#line 1524 "declarative_edt.m"
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_45, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__ParentId_8, &mdb__declarative_edt__Parent_9);
        }
#line 1526 "declarative_edt.m"
        mdb__declarative_edt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 0)));
#line 1526 "declarative_edt.m"
        mdb__declarative_edt__V_61_61 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 1));
#line 1526 "declarative_edt.m"
        mdb__declarative_edt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 2)));
#line 1526 "declarative_edt.m"
        mdb__declarative_edt__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 3)));
#line 1526 "declarative_edt.m"
        mdb__declarative_edt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 4)));
#line 1526 "declarative_edt.m"
        mdb__declarative_edt__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_9, (MR_Integer) 5)));
#line 1534 "declarative_edt.m"
        if ((mdb__declarative_edt__V_58_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1535 "declarative_edt.m"
          {
#line 1536 "declarative_edt.m"
            {
#line 1536 "declarative_edt.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[13])));
#line 1536 "declarative_edt.m"
              return;
            }
#line 1535 "declarative_edt.m"
          }
#line 1534 "declarative_edt.m"
        else
#line 1526 "declarative_edt.m"
          {
#line 1526 "declarative_edt.m"
            MR_Word mdb__declarative_edt__Children_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_58_58, (MR_Integer) 0)));

#line 1530 "declarative_edt.m"
            if ((mdb__declarative_edt__Children_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1531 "declarative_edt.m"
              {
#line 1532 "declarative_edt.m"
                {
#line 1532 "declarative_edt.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[14])));
#line 1532 "declarative_edt.m"
                  return;
                }
#line 1531 "declarative_edt.m"
              }
#line 1530 "declarative_edt.m"
            else
#line 1528 "declarative_edt.m"
              {
#line 1528 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_24_24;
#line 1529 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_13_13;

#line 1529 "declarative_edt.m"
                {
#line 1529 "declarative_edt.m"
                  mdb__declarative_edt__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1529 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_9[0]));
#line 1529 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 1) = ((MR_Box) (mdb__declarative_edt__get_siblings_3_p_0_1));
#line 1529 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1529 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 3) = ((MR_Box) (mdb__declarative_edt__SuspectId_5));
#line 1529 "declarative_edt.m"
                }
#line 1529 "declarative_edt.m"
                {
#line 1529 "declarative_edt.m"
                  mercury__list__filter_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__V_24_24, mdb__declarative_edt__Children_10, &mdb__declarative_edt__V_13_13, mdb__declarative_edt__Siblings_6);
                }
#line 1528 "declarative_edt.m"
              }
#line 1526 "declarative_edt.m"
          }
#line 1523 "declarative_edt.m"
      }
#line 1520 "declarative_edt.m"
  }
#line 1517 "declarative_edt.m"
}

#line 1498 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0_1(
#line 1498 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1498 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1498 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1498 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3)
#line 1498 "declarative_edt.m"
{
#line 1498 "declarative_edt.m"
  {
#line 1498 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 1498 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12;

#line 1498 "declarative_edt.m"
    {
#line 1498 "declarative_edt.m"
      mdb__declarative_edt__propagate_status_downwards_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12);
    }
#line 1498 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12));
#line 1498 "declarative_edt.m"
  }
#line 1498 "declarative_edt.m"
}

#line 1488 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__propagate_status_upwards_6_p_0(
#line 1488 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_47,
#line 1488 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_7,
#line 1488 "declarative_edt.m"
  MR_Word mdb__declarative_edt__StopStatusSet_8,
#line 1488 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_9,
#line 1488 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__Lowest_10,
#line 1488 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16,
#line 1488 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17)
#line 1488 "declarative_edt.m"
{
#line 1493 "declarative_edt.m"
  {
#line 1493 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1493 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_12;
#line 1493 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_60_60;
#line 1496 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_55_55;
#line 1496 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_56_56;
#line 1496 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_57_57;
#line 1496 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_58_58;
#line 1496 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_59_59;

#line 1494 "declarative_edt.m"
    {
#line 1494 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_47, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__SuspectId_9, &mdb__declarative_edt__Suspect_12);
    }
#line 1496 "declarative_edt.m"
    mdb__declarative_edt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 0)));
#line 1496 "declarative_edt.m"
    mdb__declarative_edt__V_59_59 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 1));
#line 1496 "declarative_edt.m"
    mdb__declarative_edt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 2)));
#line 1496 "declarative_edt.m"
    mdb__declarative_edt__V_57_57 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 3)));
#line 1496 "declarative_edt.m"
    mdb__declarative_edt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 4)));
#line 1496 "declarative_edt.m"
    mdb__declarative_edt__V_55_55 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 5)));
#line 1509 "declarative_edt.m"
    if ((mdb__declarative_edt__V_60_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1510 "declarative_edt.m"
      {
#line 1511 "declarative_edt.m"
        *mdb__declarative_edt__Lowest_10 = mdb__declarative_edt__SuspectId_9;
#line 1510 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16;
#line 1510 "declarative_edt.m"
      }
#line 1509 "declarative_edt.m"
    else
#line 1496 "declarative_edt.m"
      {
#line 1496 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_53_53;
#line 1496 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__ParentId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_60_60, (MR_Integer) 0)));
#line 1496 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Siblings_14;
#line 1496 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Parent_15;
#line 1496 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_20_20;
#line 1496 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21;
#line 1498 "declarative_edt.m"
        MR_Box mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_21_21;
#line 1501 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_22_22;
#line 1501 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_31_31;
#line 1501 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_32_32;
#line 1501 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_33_33;
#line 1501 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_34_34;
#line 1501 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_35_35;

#line 1497 "declarative_edt.m"
        {
#line 1497 "declarative_edt.m"
          mdb__declarative_edt__get_siblings_3_p_0(mdb__declarative_edt__TypeInfo_for_T_47, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16, mdb__declarative_edt__SuspectId_9, &mdb__declarative_edt__Siblings_14);
        }
#line 1498 "declarative_edt.m"
        {
#line 1498 "declarative_edt.m"
          mdb__declarative_edt__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1498 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_4[2]));
#line 1498 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 1) = ((MR_Box) (mdb__declarative_edt__propagate_status_upwards_6_p_0_1));
#line 1498 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1498 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_47));
#line 1498 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 4) = ((MR_Box) (mdb__declarative_edt__Status_7));
#line 1498 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 5) = ((MR_Box) (mdb__declarative_edt__StopStatusSet_8));
#line 1498 "declarative_edt.m"
        }
#line 9703 "mdb.declarative_edt.c"
        {
#line 9705 "mdb.declarative_edt.c"
          mdb__declarative_edt__TypeInfo_53_53 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9707 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_53_53, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
#line 9709 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_53_53, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_47));
#line 9711 "mdb.declarative_edt.c"
        }
#line 1498 "declarative_edt.m"
        {
#line 1498 "declarative_edt.m"
          mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_53_53, mdb__declarative_edt__V_20_20, mdb__declarative_edt__Siblings_14, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_16)), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_21_21);
        }
#line 1498 "declarative_edt.m"
        mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21 = ((MR_Word) mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_21_21);
#line 1500 "declarative_edt.m"
        {
#line 1500 "declarative_edt.m"
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_47, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21, mdb__declarative_edt__ParentId_13, &mdb__declarative_edt__Parent_15);
        }
#line 1501 "declarative_edt.m"
        mdb__declarative_edt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 0)));
#line 1501 "declarative_edt.m"
        mdb__declarative_edt__V_32_32 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 1));
#line 1501 "declarative_edt.m"
        mdb__declarative_edt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 2)));
#line 1501 "declarative_edt.m"
        mdb__declarative_edt__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 3)));
#line 1501 "declarative_edt.m"
        mdb__declarative_edt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 4)));
#line 1501 "declarative_edt.m"
        mdb__declarative_edt__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 5)));
#line 1501 "declarative_edt.m"
        {
#line 1501 "declarative_edt.m"
          mdb__declarative_edt__succeeded = mercury__list__member_2_p_0((MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0, ((MR_Box) (mdb__declarative_edt__V_22_22)), mdb__declarative_edt__StopStatusSet_8);
        }
#line 1501 "declarative_edt.m"
        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 1506 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1503 "declarative_edt.m"
          {
#line 1503 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_29_84;
#line 1503 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23;
#line 1503 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_24_24;
#line 1503 "declarative_edt.m"
            MR_Word mdb__declarative_edt__Store0_66;
#line 1503 "declarative_edt.m"
            MR_Word mdb__declarative_edt__Store_67;
#line 1504 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_36_36;
#line 1504 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_37_37;
#line 1504 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_39_39;
#line 1504 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_40_40;
#line 1504 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_41_41;
#line 1504 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_38_38;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_69_69;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_70_70;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_71_71;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_72_72;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_73_73;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_74_74;
#line 1146 "declarative_edt.m"
            MR_Word mdb__declarative_edt__conv2_Store_67;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_75_75;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_76_76;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_77_77;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_78_78;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_80_80;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_81_81;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_79_79;

#line 1502 "declarative_edt.m"
            {
#line 1502 "declarative_edt.m"
              mdb__declarative_edt__propagate_status_upwards_6_p_0(mdb__declarative_edt__TypeInfo_for_T_47, mdb__declarative_edt__Status_7, mdb__declarative_edt__StopStatusSet_8, mdb__declarative_edt__ParentId_13, mdb__declarative_edt__Lowest_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23);
            }
#line 1504 "declarative_edt.m"
            mdb__declarative_edt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 0)));
#line 1504 "declarative_edt.m"
            mdb__declarative_edt__V_37_37 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 1));
#line 1504 "declarative_edt.m"
            mdb__declarative_edt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 2)));
#line 1504 "declarative_edt.m"
            mdb__declarative_edt__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 3)));
#line 1504 "declarative_edt.m"
            mdb__declarative_edt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 4)));
#line 1504 "declarative_edt.m"
            mdb__declarative_edt__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_15, (MR_Integer) 5)));
#line 1504 "declarative_edt.m"
            {
#line 1504 "declarative_edt.m"
              mdb__declarative_edt__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1504 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 0) = ((MR_Box) (mdb__declarative_edt__V_36_36));
#line 1504 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 1) = mdb__declarative_edt__V_37_37;
#line 1504 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 2) = ((MR_Box) (mdb__declarative_edt__Status_7));
#line 1504 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 3) = ((MR_Box) (mdb__declarative_edt__V_39_39));
#line 1504 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 4) = ((MR_Box) (mdb__declarative_edt__V_40_40));
#line 1504 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 5) = ((MR_Box) (mdb__declarative_edt__V_41_41));
#line 1504 "declarative_edt.m"
            }
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 0)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 1)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 2)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 3)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__Store0_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 4)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 5)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 6)));
#line 9848 "mdb.declarative_edt.c"
            {
#line 9850 "mdb.declarative_edt.c"
              mdb__declarative_edt__TypeInfo_29_84 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 9852 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_84, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 9854 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_84, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_47));
#line 9856 "mdb.declarative_edt.c"
            }
#line 1146 "declarative_edt.m"
            {
#line 1146 "declarative_edt.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_84, mdb__declarative_edt__ParentId_13, ((MR_Box) (mdb__declarative_edt__V_24_24)), (MR_Word) mdb__declarative_edt__Store0_66, &mdb__declarative_edt__conv2_Store_67);
            }
#line 1146 "declarative_edt.m"
            mdb__declarative_edt__Store_67 = (MR_Word) mdb__declarative_edt__conv2_Store_67;
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 0)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 1)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 2)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 3)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 4)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 5)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_23_23, (MR_Integer) 6)));
#line 1147 "declarative_edt.m"
            {
#line 1147 "declarative_edt.m"
              MR_Word base;
#line 1147 "declarative_edt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "declarative_edt.m"
              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17 = base;
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__V_75_75));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__V_76_76));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__V_77_77));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__V_78_78));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__Store_67));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__V_80_80));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__V_81_81));
#line 1147 "declarative_edt.m"
            }
#line 1503 "declarative_edt.m"
          }
#line 1506 "declarative_edt.m"
        else
#line 1507 "declarative_edt.m"
          {
#line 1507 "declarative_edt.m"
            *mdb__declarative_edt__Lowest_10 = mdb__declarative_edt__ParentId_13;
#line 1507 "declarative_edt.m"
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21;
#line 1507 "declarative_edt.m"
          }
#line 1496 "declarative_edt.m"
      }
#line 1493 "declarative_edt.m"
  }
#line 1488 "declarative_edt.m"
}

#line 1469 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0_1(
#line 1469 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1469 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1469 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_2)
#line 1469 "declarative_edt.m"
{
#line 1469 "declarative_edt.m"
  {
#line 1469 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1469 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 1469 "declarative_edt.m"
    MR_String mdb__declarative_edt__conv0_Message_8;

#line 1469 "declarative_edt.m"
    {
#line 1469 "declarative_edt.m"
      mdb__declarative_edt__succeeded = mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4)), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), &mdb__declarative_edt__conv0_Message_8);
    }
#line 1469 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1469 "declarative_edt.m"
      {
#line 1469 "declarative_edt.m"
        *mdb__declarative_edt__wrapper_arg_2 = ((MR_Box) (mdb__declarative_edt__conv0_Message_8));
#line 1469 "declarative_edt.m"
        mdb__declarative_edt__succeeded = MR_TRUE;
#line 1469 "declarative_edt.m"
      }
#line 1469 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1469 "declarative_edt.m"
  }
#line 1469 "declarative_edt.m"
}

#line 1456 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(
#line 1456 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63,
#line 1456 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_5,
#line 1456 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_6,
#line 1456 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_7,
#line 1456 "declarative_edt.m"
  MR_String * mdb__declarative_edt__Message_8)
#line 1456 "declarative_edt.m"
{
#line 1459 "declarative_edt.m"
  {
#line 1459 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1459 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_65_65;
#line 1459 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_9;
#line 1459 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Weight_10;
#line 1459 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_15_15;
#line 1459 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_34_34;
#line 1459 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_36_36;
#line 1461 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_33_33;
#line 1461 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_35_35;
#line 1461 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_37_37;
#line 1461 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_11_11;
#line 1472 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_50_50;
#line 1472 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_52_52;
#line 1464 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_18_18;
#line 1464 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_73_73;
#line 1464 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_48_48;
#line 1464 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_49_49;
#line 1464 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_51_51;

#line 10018 "mdb.declarative_edt.c"
    {
#line 10020 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_65_65);
    }
#line 1460 "declarative_edt.m"
    {
#line 1460 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_65_65, mdb__declarative_edt__SearchSpace_6, mdb__declarative_edt__SuspectId_7, &mdb__declarative_edt__Suspect_9);
    }
#line 1461 "declarative_edt.m"
    mdb__declarative_edt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 0)));
#line 1461 "declarative_edt.m"
    mdb__declarative_edt__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 1));
#line 1461 "declarative_edt.m"
    mdb__declarative_edt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 2)));
#line 1461 "declarative_edt.m"
    mdb__declarative_edt__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 3)));
#line 1461 "declarative_edt.m"
    mdb__declarative_edt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 4)));
#line 1461 "declarative_edt.m"
    mdb__declarative_edt__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 5)));
#line 1461 "declarative_edt.m"
    {
#line 1461 "declarative_edt.m"
      mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63, mdb__declarative_edt__Store_5, mdb__declarative_edt__V_15_15, mdb__declarative_edt__V_36_36, mdb__declarative_edt__V_34_34, mdb__declarative_edt__SearchSpace_6, &mdb__declarative_edt__Weight_10, &mdb__declarative_edt__V_11_11);
    }
#line 1464 "declarative_edt.m"
    mdb__declarative_edt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 0)));
#line 1464 "declarative_edt.m"
    mdb__declarative_edt__V_49_49 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 1));
#line 1464 "declarative_edt.m"
    mdb__declarative_edt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 2)));
#line 1464 "declarative_edt.m"
    mdb__declarative_edt__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 3)));
#line 1464 "declarative_edt.m"
    mdb__declarative_edt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 4)));
#line 1464 "declarative_edt.m"
    mdb__declarative_edt__V_73_73 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 5)));
#line 1464 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__Weight_10 == mdb__declarative_edt__V_73_73);
#line 1464 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1464 "declarative_edt.m"
      {
#line 1465 "declarative_edt.m"
        mdb__declarative_edt__V_18_18 = (MR_Integer) 0;
#line 1465 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__Weight_10 >= mdb__declarative_edt__V_18_18);
#line 1464 "declarative_edt.m"
      }
#line 1472 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1467 "declarative_edt.m"
      {
#line 1467 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeCtorInfo_68_68;
#line 1467 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeCtorInfo_69_69;
#line 1467 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Children_12;
#line 1467 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Messages_13;
#line 1467 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_21_21;
#line 1467 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_22_22;
#line 1471 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_14_14;

#line 1467 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_52_52)) == (MR_mktag((MR_Integer) 1)));
#line 1467 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1467 "declarative_edt.m"
          {
#line 1467 "declarative_edt.m"
            mdb__declarative_edt__Children_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_52_52, (MR_Integer) 0)));
#line 1468 "declarative_edt.m"
            mdb__declarative_edt__V_21_21 = (MR_Integer) 1;
#line 784 "declarative_edt.m"
            if ((mdb__declarative_edt__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 786 "declarative_edt.m"
              {
#line 1468 "declarative_edt.m"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_21_21 == (MR_Integer) 0);
#line 786 "declarative_edt.m"
              }
#line 784 "declarative_edt.m"
            else
#line 784 "declarative_edt.m"
            if ((mdb__declarative_edt__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 787 "declarative_edt.m"
              {
#line 1468 "declarative_edt.m"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_21_21 == (MR_Integer) 1);
#line 787 "declarative_edt.m"
              }
#line 784 "declarative_edt.m"
            else
#line 784 "declarative_edt.m"
            if ((mdb__declarative_edt__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 784 "declarative_edt.m"
              {
#line 1468 "declarative_edt.m"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_21_21 == (MR_Integer) 1);
#line 784 "declarative_edt.m"
              }
#line 784 "declarative_edt.m"
            else
#line 784 "declarative_edt.m"
            if ((mdb__declarative_edt__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 790 "declarative_edt.m"
              {
#line 1468 "declarative_edt.m"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_21_21 == (MR_Integer) 0);
#line 790 "declarative_edt.m"
              }
#line 784 "declarative_edt.m"
            else
#line 784 "declarative_edt.m"
            if ((mdb__declarative_edt__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 788 "declarative_edt.m"
              {
#line 1468 "declarative_edt.m"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_21_21 == (MR_Integer) 0);
#line 788 "declarative_edt.m"
              }
#line 784 "declarative_edt.m"
            else
#line 784 "declarative_edt.m"
            if ((mdb__declarative_edt__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 789 "declarative_edt.m"
              {
#line 1468 "declarative_edt.m"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_21_21 == (MR_Integer) 0);
#line 789 "declarative_edt.m"
              }
#line 784 "declarative_edt.m"
            else
#line 784 "declarative_edt.m"
            if ((mdb__declarative_edt__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 791 "declarative_edt.m"
              {
#line 1468 "declarative_edt.m"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_21_21 == (MR_Integer) 1);
#line 791 "declarative_edt.m"
              }
#line 784 "declarative_edt.m"
            else
#line 785 "declarative_edt.m"
              {
#line 1468 "declarative_edt.m"
                mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_21_21 == (MR_Integer) 1);
#line 785 "declarative_edt.m"
              }
#line 1467 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1467 "declarative_edt.m"
              {
#line 10178 "mdb.declarative_edt.c"
                mdb__declarative_edt__TypeCtorInfo_68_68 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 10180 "mdb.declarative_edt.c"
                mdb__declarative_edt__TypeCtorInfo_69_69 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
#line 1469 "declarative_edt.m"
                {
#line 1469 "declarative_edt.m"
                  mdb__declarative_edt__V_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1469 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_22_22, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_10[0]));
#line 1469 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_22_22, 1) = ((MR_Box) (mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0_1));
#line 1469 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_22_22, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1469 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_22_22, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63));
#line 1469 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_22_22, 4) = mdb__declarative_edt__Store_5;
#line 1469 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_22_22, 5) = ((MR_Box) (mdb__declarative_edt__SearchSpace_6));
#line 1469 "declarative_edt.m"
                }
#line 1469 "declarative_edt.m"
                {
#line 1469 "declarative_edt.m"
                  mercury__list__filter_map_3_p_0(mdb__declarative_edt__TypeCtorInfo_68_68, mdb__declarative_edt__TypeCtorInfo_69_69, mdb__declarative_edt__V_22_22, mdb__declarative_edt__Children_12, &mdb__declarative_edt__Messages_13);
                }
#line 1471 "declarative_edt.m"
                mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Messages_13)) == (MR_mktag((MR_Integer) 1)));
#line 1471 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 1471 "declarative_edt.m"
                  {
#line 1471 "declarative_edt.m"
                    *mdb__declarative_edt__Message_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Messages_13, (MR_Integer) 0)));
#line 1471 "declarative_edt.m"
                    mdb__declarative_edt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Messages_13, (MR_Integer) 1)));
#line 1471 "declarative_edt.m"
                  }
#line 1467 "declarative_edt.m"
              }
#line 1467 "declarative_edt.m"
          }
#line 1467 "declarative_edt.m"
      }
#line 1472 "declarative_edt.m"
    else
#line 1473 "declarative_edt.m"
      {
#line 1473 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_70_70;
#line 1473 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_72_72;
#line 1473 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_24_24;
#line 1473 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_25_25;
#line 1473 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_26_26;
#line 1473 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_28_28;
#line 1473 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_29_29;
#line 1473 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_30_30;
#line 1473 "declarative_edt.m"
        MR_String mdb__declarative_edt__V_32_32;

#line 1474 "declarative_edt.m"
        {
#line 1474 "declarative_edt.m"
          mdb__declarative_edt__V_25_25 = mercury__string__int_to_string_1_f_0(mdb__declarative_edt__SuspectId_7);
        }
#line 10251 "mdb.declarative_edt.c"
        {
#line 10253 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_63, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_70_70);
        }
#line 10256 "mdb.declarative_edt.c"
        {
#line 10258 "mdb.declarative_edt.c"
          mdb__declarative_edt__TypeInfo_72_72 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10260 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_72_72, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 10262 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_72_72, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_70_70));
#line 10264 "mdb.declarative_edt.c"
        }
#line 1475 "declarative_edt.m"
        {
#line 1475 "declarative_edt.m"
          mdb__declarative_edt__V_29_29 = mercury__string__string_1_f_0(mdb__declarative_edt__TypeInfo_72_72, ((MR_Box) (mdb__declarative_edt__Suspect_9)));
        }
#line 1475 "declarative_edt.m"
        {
#line 1475 "declarative_edt.m"
          mdb__declarative_edt__V_32_32 = mercury__string__int_to_string_1_f_0(mdb__declarative_edt__Weight_10);
        }
#line 1475 "declarative_edt.m"
        {
#line 1475 "declarative_edt.m"
          mdb__declarative_edt__V_30_30 = mercury__string__f_43_43_2_f_0((MR_String) " Calculated weight = ", mdb__declarative_edt__V_32_32);
        }
#line 1475 "declarative_edt.m"
        {
#line 1475 "declarative_edt.m"
          mdb__declarative_edt__V_28_28 = mercury__string__f_43_43_2_f_0(mdb__declarative_edt__V_29_29, mdb__declarative_edt__V_30_30);
        }
#line 1474 "declarative_edt.m"
        {
#line 1474 "declarative_edt.m"
          mdb__declarative_edt__V_26_26 = mercury__string__f_43_43_2_f_0((MR_String) ", Suspect = ", mdb__declarative_edt__V_28_28);
        }
#line 1474 "declarative_edt.m"
        {
#line 1474 "declarative_edt.m"
          mdb__declarative_edt__V_24_24 = mercury__string__f_43_43_2_f_0(mdb__declarative_edt__V_25_25, mdb__declarative_edt__V_26_26);
        }
#line 1473 "declarative_edt.m"
        {
#line 1473 "declarative_edt.m"
          *mdb__declarative_edt__Message_8 = mercury__string__f_43_43_2_f_0((MR_String) "Weights not consistent for suspect id ", mdb__declarative_edt__V_24_24);
        }
#line 1473 "declarative_edt.m"
        mdb__declarative_edt__succeeded = MR_TRUE;
#line 1473 "declarative_edt.m"
      }
#line 1459 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1459 "declarative_edt.m"
  }
#line 1456 "declarative_edt.m"
}

#line 1391 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(
#line 1391 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_64,
#line 1391 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_1,
#line 1391 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__2_2,
#line 1391 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3,
#line 1391 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Parents_4,
#line 1391 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5,
#line 1391 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_6)
#line 1391 "declarative_edt.m"
{
#line 1395 "declarative_edt.m"
  while (MR_TRUE)
#line 1395 "declarative_edt.m"
    {
#line 1395 "declarative_edt.m"
      /* tailcall optimized into a loop */
#line 1395 "declarative_edt.m"
      {
#line 1395 "declarative_edt.m"
        MR_bool mdb__declarative_edt__succeeded;

#line 1395 "declarative_edt.m"
        if ((mdb__declarative_edt__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1395 "declarative_edt.m"
          {
#line 1395 "declarative_edt.m"
            *mdb__declarative_edt__Parents_4 = mdb__declarative_edt__HeadVar__3_3;
#line 1395 "declarative_edt.m"
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_6 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5;
#line 1395 "declarative_edt.m"
          }
#line 1395 "declarative_edt.m"
        else
#line 1397 "declarative_edt.m"
          {
#line 1397 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_66_66;
#line 1397 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_67_67;
#line 1397 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__SuspectId_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 0)));
#line 1397 "declarative_edt.m"
            MR_Word mdb__declarative_edt__SuspectIds_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__2_2, (MR_Integer) 1)));
#line 1397 "declarative_edt.m"
            MR_Word mdb__declarative_edt__Suspect_18;
#line 1397 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__Weight_19;
#line 1397 "declarative_edt.m"
            MR_Word mdb__declarative_edt__NewPrevParents_22;
#line 1397 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_25_25;
#line 1397 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_28_28;
#line 1397 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29;
#line 1397 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_34_34;
#line 1397 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_36_36;
#line 1397 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_73_73;
#line 1399 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_33_33;
#line 1399 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_35_35;
#line 1399 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_37_37;
#line 1399 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_20_20;
#line 1401 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_48_48;
#line 1401 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_49_49;
#line 1401 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_50_50;
#line 1401 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_51_51;
#line 1401 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_52_52;
#line 1401 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_53_53;
#line 1404 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_68_68;
#line 1404 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_69_69;
#line 1404 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_70_70;
#line 1404 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_71_71;
#line 1404 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_72_72;

#line 10413 "mdb.declarative_edt.c"
            {
#line 10415 "mdb.declarative_edt.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_64, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_66_66);
            }
#line 1398 "declarative_edt.m"
            {
#line 1398 "declarative_edt.m"
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_66_66, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5, mdb__declarative_edt__SuspectId_13, &mdb__declarative_edt__Suspect_18);
            }
#line 1399 "declarative_edt.m"
            mdb__declarative_edt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 0)));
#line 1399 "declarative_edt.m"
            mdb__declarative_edt__V_25_25 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 1));
#line 1399 "declarative_edt.m"
            mdb__declarative_edt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 2)));
#line 1399 "declarative_edt.m"
            mdb__declarative_edt__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 3)));
#line 1399 "declarative_edt.m"
            mdb__declarative_edt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 4)));
#line 1399 "declarative_edt.m"
            mdb__declarative_edt__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 5)));
#line 1399 "declarative_edt.m"
            {
#line 1399 "declarative_edt.m"
              mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_64, mdb__declarative_edt__Store_1, mdb__declarative_edt__V_25_25, mdb__declarative_edt__V_36_36, mdb__declarative_edt__V_34_34, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5, &mdb__declarative_edt__Weight_19, &mdb__declarative_edt__V_20_20);
            }
#line 1401 "declarative_edt.m"
            mdb__declarative_edt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 0)));
#line 1401 "declarative_edt.m"
            mdb__declarative_edt__V_49_49 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 1));
#line 1401 "declarative_edt.m"
            mdb__declarative_edt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 2)));
#line 1401 "declarative_edt.m"
            mdb__declarative_edt__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 3)));
#line 1401 "declarative_edt.m"
            mdb__declarative_edt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 4)));
#line 1401 "declarative_edt.m"
            mdb__declarative_edt__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 5)));
#line 1401 "declarative_edt.m"
            {
#line 1401 "declarative_edt.m"
              mdb__declarative_edt__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1401 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 0) = ((MR_Box) (mdb__declarative_edt__V_48_48));
#line 1401 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 1) = mdb__declarative_edt__V_49_49;
#line 1401 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 2) = ((MR_Box) (mdb__declarative_edt__V_50_50));
#line 1401 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 3) = ((MR_Box) (mdb__declarative_edt__V_51_51));
#line 1401 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 4) = ((MR_Box) (mdb__declarative_edt__V_52_52));
#line 1401 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 5) = ((MR_Box) (mdb__declarative_edt__Weight_19));
#line 1401 "declarative_edt.m"
            }
#line 10470 "mdb.declarative_edt.c"
            {
#line 10472 "mdb.declarative_edt.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_64, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_67_67);
            }
#line 1401 "declarative_edt.m"
            {
#line 1401 "declarative_edt.m"
              mdb__declarative_edt__set_suspect_4_p_0(mdb__declarative_edt__TypeInfo_67_67, mdb__declarative_edt__SuspectId_13, mdb__declarative_edt__V_28_28, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29);
            }
#line 1404 "declarative_edt.m"
            mdb__declarative_edt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 0)));
#line 1404 "declarative_edt.m"
            mdb__declarative_edt__V_72_72 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 1));
#line 1404 "declarative_edt.m"
            mdb__declarative_edt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 2)));
#line 1404 "declarative_edt.m"
            mdb__declarative_edt__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 3)));
#line 1404 "declarative_edt.m"
            mdb__declarative_edt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 4)));
#line 1404 "declarative_edt.m"
            mdb__declarative_edt__V_68_68 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 5)));
#line 1406 "declarative_edt.m"
            if ((mdb__declarative_edt__V_73_73 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1408 "declarative_edt.m"
              mdb__declarative_edt__NewPrevParents_22 = mdb__declarative_edt__HeadVar__3_3;
#line 1406 "declarative_edt.m"
            else
#line 1404 "declarative_edt.m"
              {
#line 1404 "declarative_edt.m"
                MR_Integer mdb__declarative_edt__ParentId_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_73_73, (MR_Integer) 0)));

#line 1405 "declarative_edt.m"
                {
#line 1405 "declarative_edt.m"
                  mdb__declarative_edt__NewPrevParents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1405 "declarative_edt.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__NewPrevParents_22, 0) = ((MR_Box) (mdb__declarative_edt__ParentId_21));
#line 1405 "declarative_edt.m"
                  MR_hl_field(MR_mktag(1), mdb__declarative_edt__NewPrevParents_22, 1) = ((MR_Box) (mdb__declarative_edt__HeadVar__3_3));
#line 1405 "declarative_edt.m"
                }
#line 1404 "declarative_edt.m"
              }
#line 1410 "declarative_edt.m"
            /* direct tailcall eliminated */
#line 1410 "declarative_edt.m"
            {
#line 1410 "declarative_edt.m"
              MR_Word mdb__declarative_edt__HeadVar__2__tmp_copy_2 = mdb__declarative_edt__SuspectIds_14;
#line 1410 "declarative_edt.m"
              MR_Word mdb__declarative_edt__HeadVar__3__tmp_copy_3 = mdb__declarative_edt__NewPrevParents_22;
#line 1410 "declarative_edt.m"
              MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_5 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_29_29;

#line 1410 "declarative_edt.m"
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_5 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_5;
#line 1410 "declarative_edt.m"
              mdb__declarative_edt__HeadVar__3_3 = mdb__declarative_edt__HeadVar__3__tmp_copy_3;
#line 1410 "declarative_edt.m"
              mdb__declarative_edt__HeadVar__2_2 = mdb__declarative_edt__HeadVar__2__tmp_copy_2;
#line 1410 "declarative_edt.m"
            }
#line 1410 "declarative_edt.m"
            continue;
#line 1397 "declarative_edt.m"
          }
#line 1395 "declarative_edt.m"
      }
#line 1395 "declarative_edt.m"
      break;
#line 1395 "declarative_edt.m"
    }
#line 1391 "declarative_edt.m"
}

#line 1380 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0_1(
#line 1380 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1380 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1)
#line 1380 "declarative_edt.m"
{
#line 1380 "declarative_edt.m"
  {
#line 1380 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1380 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

#line 1380 "declarative_edt.m"
    {
#line 1380 "declarative_edt.m"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__recalc_weights_upto_ancestor__1380__1_2_p_0(((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
#line 1380 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1380 "declarative_edt.m"
  }
#line 1380 "declarative_edt.m"
}

#line 1373 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(
#line 1373 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27,
#line 1373 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_6,
#line 1373 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__Ancestor_7,
#line 1373 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SuspectIds_8,
#line 1373 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17,
#line 1373 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18)
#line 1373 "declarative_edt.m"
{
#line 1377 "declarative_edt.m"
  while (MR_TRUE)
#line 1377 "declarative_edt.m"
    {
#line 1377 "declarative_edt.m"
      /* tailcall optimized into a loop */
#line 1377 "declarative_edt.m"
      {
#line 1377 "declarative_edt.m"
        MR_bool mdb__declarative_edt__succeeded;
#line 1377 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeCtorInfo_30_30;
#line 1377 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Parents_10;
#line 1377 "declarative_edt.m"
        MR_Word mdb__declarative_edt__FilteredParents_12;
#line 1377 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20;
#line 1377 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_21_21;
#line 1380 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_11_11;

#line 1378 "declarative_edt.m"
        {
#line 1378 "declarative_edt.m"
          mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27, mdb__declarative_edt__Store_6, mdb__declarative_edt__SuspectIds_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_edt__Parents_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20);
        }
#line 1380 "declarative_edt.m"
        {
#line 1380 "declarative_edt.m"
          mdb__declarative_edt__V_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1380 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_21_21, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_9[0]));
#line 1380 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_21_21, 1) = ((MR_Box) (mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0_1));
#line 1380 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_21_21, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1380 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_21_21, 3) = ((MR_Box) (mdb__declarative_edt__Ancestor_7));
#line 1380 "declarative_edt.m"
        }
#line 10634 "mdb.declarative_edt.c"
        mdb__declarative_edt__TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1380 "declarative_edt.m"
        {
#line 1380 "declarative_edt.m"
          mercury__list__filter_4_p_0(mdb__declarative_edt__TypeCtorInfo_30_30, mdb__declarative_edt__V_21_21, mdb__declarative_edt__Parents_10, &mdb__declarative_edt__V_11_11, &mdb__declarative_edt__FilteredParents_12);
        }
#line 1386 "declarative_edt.m"
        if ((mdb__declarative_edt__FilteredParents_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1387 "declarative_edt.m"
          {
#line 1387 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_22_22;
#line 1388 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_16_16;

#line 1388 "declarative_edt.m"
            {
#line 1388 "declarative_edt.m"
              mdb__declarative_edt__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1388 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_22_22, 0) = ((MR_Box) (mdb__declarative_edt__Ancestor_7));
#line 1388 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_22_22, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1388 "declarative_edt.m"
            }
#line 1388 "declarative_edt.m"
            {
#line 1388 "declarative_edt.m"
              mdb__declarative_edt__recalc_weights_and_get_parents_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_27, mdb__declarative_edt__Store_6, mdb__declarative_edt__V_22_22, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_edt__V_16_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18);
            }
#line 1387 "declarative_edt.m"
          }
#line 1386 "declarative_edt.m"
        else
#line 1382 "declarative_edt.m"
          {
#line 1382 "declarative_edt.m"
            MR_Word mdb__declarative_edt__SortedParents_15;

#line 1383 "declarative_edt.m"
            {
#line 1383 "declarative_edt.m"
              mercury__list__sort_and_remove_dups_2_p_0(mdb__declarative_edt__TypeCtorInfo_30_30, mdb__declarative_edt__FilteredParents_12, &mdb__declarative_edt__SortedParents_15);
            }
#line 1384 "declarative_edt.m"
            /* direct tailcall eliminated */
#line 1384 "declarative_edt.m"
            {
#line 1384 "declarative_edt.m"
              MR_Word mdb__declarative_edt__SuspectIds__tmp_copy_8 = mdb__declarative_edt__SortedParents_15;
#line 1384 "declarative_edt.m"
              MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_17 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20;

#line 1384 "declarative_edt.m"
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_17;
#line 1384 "declarative_edt.m"
              mdb__declarative_edt__SuspectIds_8 = mdb__declarative_edt__SuspectIds__tmp_copy_8;
#line 1384 "declarative_edt.m"
            }
#line 1384 "declarative_edt.m"
            continue;
#line 1382 "declarative_edt.m"
          }
#line 1377 "declarative_edt.m"
      }
#line 1377 "declarative_edt.m"
      break;
#line 1377 "declarative_edt.m"
    }
#line 1373 "declarative_edt.m"
}

#line 1356 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__add_original_weight_7_p_0(
#line 1356 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15,
#line 1356 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Weighting_8,
#line 1356 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_9,
#line 1356 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_10,
#line 1356 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__Prev_11,
#line 1356 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__HeadVar__5_5,
#line 1356 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__PrevExcess_13,
#line 1356 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__HeadVar__7_7)
#line 1356 "declarative_edt.m"
{
#line 1360 "declarative_edt.m"
  {
#line 1360 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1360 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Weight_12;
#line 1360 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Excess_14;

#line 2035 "declarative_edt.m"
    if ((mdb__declarative_edt__Weighting_8 == (MR_Integer) 0))
#line 10739 "mdb.declarative_edt.c"
      {
#line 10741 "mdb.declarative_edt.c"
        void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15, (MR_Integer) 0)), (MR_Integer) 15)));
#line 10743 "mdb.declarative_edt.c"
        MR_Box mdb__declarative_edt__conv2_Weight_12;
#line 10745 "mdb.declarative_edt.c"
        MR_Box mdb__declarative_edt__conv1_Excess_14;

#line 10748 "mdb.declarative_edt.c"
        {
#line 10750 "mdb.declarative_edt.c"
          mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15), mdb__declarative_edt__Store_9, mdb__declarative_edt__Node_10, &mdb__declarative_edt__conv2_Weight_12, &mdb__declarative_edt__conv1_Excess_14);
        }
#line 10753 "mdb.declarative_edt.c"
        mdb__declarative_edt__Weight_12 = ((MR_Integer) mdb__declarative_edt__conv2_Weight_12);
#line 10755 "mdb.declarative_edt.c"
        mdb__declarative_edt__Excess_14 = ((MR_Integer) mdb__declarative_edt__conv1_Excess_14);
#line 10757 "mdb.declarative_edt.c"
      }
#line 2035 "declarative_edt.m"
    else
#line 10761 "mdb.declarative_edt.c"
      {
#line 10763 "mdb.declarative_edt.c"
        void MR_CALL (* mdb__declarative_edt__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15, (MR_Integer) 0)), (MR_Integer) 16)));
#line 10765 "mdb.declarative_edt.c"
        MR_Box mdb__declarative_edt__conv5_Weight_12;
#line 10767 "mdb.declarative_edt.c"
        MR_Box mdb__declarative_edt__conv4_Excess_14;

#line 10770 "mdb.declarative_edt.c"
        {
#line 10772 "mdb.declarative_edt.c"
          mdb__declarative_edt__func_3(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_15), mdb__declarative_edt__Store_9, mdb__declarative_edt__Node_10, &mdb__declarative_edt__conv5_Weight_12, &mdb__declarative_edt__conv4_Excess_14);
        }
#line 10775 "mdb.declarative_edt.c"
        mdb__declarative_edt__Weight_12 = ((MR_Integer) mdb__declarative_edt__conv5_Weight_12);
#line 10777 "mdb.declarative_edt.c"
        mdb__declarative_edt__Excess_14 = ((MR_Integer) mdb__declarative_edt__conv4_Excess_14);
#line 10779 "mdb.declarative_edt.c"
      }
#line 1359 "declarative_edt.m"
    *mdb__declarative_edt__HeadVar__5_5 = (mdb__declarative_edt__Prev_11 + mdb__declarative_edt__Weight_12);
#line 1360 "declarative_edt.m"
    *mdb__declarative_edt__HeadVar__7_7 = (mdb__declarative_edt__PrevExcess_13 + mdb__declarative_edt__Excess_14);
#line 1360 "declarative_edt.m"
  }
#line 1356 "declarative_edt.m"
}

#line 1331 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__add_weight_to_ancestors_4_p_0(
#line 1331 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_42,
#line 1331 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 1331 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__Weight_6,
#line 1331 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12,
#line 1331 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13)
#line 1331 "declarative_edt.m"
{
#line 1352 "declarative_edt.m"
  while (MR_TRUE)
#line 1352 "declarative_edt.m"
    {
#line 1352 "declarative_edt.m"
      /* tailcall optimized into a loop */
#line 1352 "declarative_edt.m"
      {
#line 1352 "declarative_edt.m"
        MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__Weight_6 == (MR_Integer) 0);
#line 1352 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__ParentId_9;
#line 1338 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Suspect_8;
#line 1338 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_14_14;
#line 1340 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_21_21;
#line 1340 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_22_22;
#line 1340 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_23_23;
#line 1340 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_24_24;
#line 1340 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_25_25;

#line 1338 "declarative_edt.m"
        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 1338 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1338 "declarative_edt.m"
          {
#line 1339 "declarative_edt.m"
            {
#line 1339 "declarative_edt.m"
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_42, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_8);
            }
#line 1340 "declarative_edt.m"
            mdb__declarative_edt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
#line 1340 "declarative_edt.m"
            mdb__declarative_edt__V_21_21 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
#line 1340 "declarative_edt.m"
            mdb__declarative_edt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
#line 1340 "declarative_edt.m"
            mdb__declarative_edt__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
#line 1340 "declarative_edt.m"
            mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
#line 1340 "declarative_edt.m"
            mdb__declarative_edt__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
#line 1340 "declarative_edt.m"
            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_14_14)) == (MR_mktag((MR_Integer) 1)));
#line 1340 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1340 "declarative_edt.m"
              mdb__declarative_edt__ParentId_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_14_14, (MR_Integer) 0)));
#line 1338 "declarative_edt.m"
          }
#line 1352 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1342 "declarative_edt.m"
          {
#line 1342 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_29_66;
#line 1342 "declarative_edt.m"
            MR_Word mdb__declarative_edt__Parent_10;
#line 1342 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_15_15;
#line 1342 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;
#line 1342 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_17_17;
#line 1342 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_18_18;
#line 1342 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_19_19;
#line 1342 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_26_26;
#line 1342 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_27_27;
#line 1342 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_28_28;
#line 1342 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_29_29;
#line 1342 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_30_30;
#line 1342 "declarative_edt.m"
            MR_Word mdb__declarative_edt__Store0_48;
#line 1342 "declarative_edt.m"
            MR_Word mdb__declarative_edt__Store_49;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_51_51;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_52_52;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_53_53;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_54_54;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_55_55;
#line 1145 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_56_56;
#line 1146 "declarative_edt.m"
            MR_Word mdb__declarative_edt__conv0_Store_49;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_57_57;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_58_58;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_59_59;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_60_60;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_62_62;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_63_63;
#line 1147 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_61_61;
#line 1345 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_37_37;
#line 1345 "declarative_edt.m"
            MR_Box mdb__declarative_edt__V_38_38;
#line 1345 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_39_39;
#line 1345 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_40_40;
#line 1345 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_41_41;

#line 1342 "declarative_edt.m"
            {
#line 1342 "declarative_edt.m"
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_42, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, mdb__declarative_edt__ParentId_9, &mdb__declarative_edt__Parent_10);
            }
#line 1343 "declarative_edt.m"
            mdb__declarative_edt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 0)));
#line 1343 "declarative_edt.m"
            mdb__declarative_edt__V_27_27 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 1));
#line 1343 "declarative_edt.m"
            mdb__declarative_edt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 2)));
#line 1343 "declarative_edt.m"
            mdb__declarative_edt__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 3)));
#line 1343 "declarative_edt.m"
            mdb__declarative_edt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 4)));
#line 1343 "declarative_edt.m"
            mdb__declarative_edt__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 5)));
#line 1343 "declarative_edt.m"
            mdb__declarative_edt__V_17_17 = (mdb__declarative_edt__V_18_18 + mdb__declarative_edt__Weight_6);
#line 1343 "declarative_edt.m"
            {
#line 1343 "declarative_edt.m"
              mdb__declarative_edt__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_15_15, 0) = ((MR_Box) (mdb__declarative_edt__V_26_26));
#line 1343 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_15_15, 1) = mdb__declarative_edt__V_27_27;
#line 1343 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_15_15, 2) = ((MR_Box) (mdb__declarative_edt__V_28_28));
#line 1343 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_15_15, 3) = ((MR_Box) (mdb__declarative_edt__V_29_29));
#line 1343 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_15_15, 4) = ((MR_Box) (mdb__declarative_edt__V_30_30));
#line 1343 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_15_15, 5) = ((MR_Box) (mdb__declarative_edt__V_17_17));
#line 1343 "declarative_edt.m"
            }
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 0)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 1)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 2)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 3)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__Store0_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 4)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 5)));
#line 1145 "declarative_edt.m"
            mdb__declarative_edt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 6)));
#line 10985 "mdb.declarative_edt.c"
            {
#line 10987 "mdb.declarative_edt.c"
              mdb__declarative_edt__TypeInfo_29_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 10989 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_66, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 10991 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_66, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_42));
#line 10993 "mdb.declarative_edt.c"
            }
#line 1146 "declarative_edt.m"
            {
#line 1146 "declarative_edt.m"
              mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_66, mdb__declarative_edt__ParentId_9, ((MR_Box) (mdb__declarative_edt__V_15_15)), (MR_Word) mdb__declarative_edt__Store0_48, &mdb__declarative_edt__conv0_Store_49);
            }
#line 1146 "declarative_edt.m"
            mdb__declarative_edt__Store_49 = (MR_Word) mdb__declarative_edt__conv0_Store_49;
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 0)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 1)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 2)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 3)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 4)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 5)));
#line 1147 "declarative_edt.m"
            mdb__declarative_edt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, (MR_Integer) 6)));
#line 1147 "declarative_edt.m"
            {
#line 1147 "declarative_edt.m"
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 0) = ((MR_Box) (mdb__declarative_edt__V_57_57));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 1) = ((MR_Box) (mdb__declarative_edt__V_58_58));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 2) = ((MR_Box) (mdb__declarative_edt__V_59_59));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 3) = ((MR_Box) (mdb__declarative_edt__V_60_60));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 4) = ((MR_Box) (mdb__declarative_edt__Store_49));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 5) = ((MR_Box) (mdb__declarative_edt__V_62_62));
#line 1147 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16, 6) = ((MR_Box) (mdb__declarative_edt__V_63_63));
#line 1147 "declarative_edt.m"
            }
#line 1345 "declarative_edt.m"
            mdb__declarative_edt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 0)));
#line 1345 "declarative_edt.m"
            mdb__declarative_edt__V_38_38 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 1));
#line 1345 "declarative_edt.m"
            mdb__declarative_edt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 2)));
#line 1345 "declarative_edt.m"
            mdb__declarative_edt__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 3)));
#line 1345 "declarative_edt.m"
            mdb__declarative_edt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 4)));
#line 1345 "declarative_edt.m"
            mdb__declarative_edt__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_10, (MR_Integer) 5)));
#line 11048 "mdb.declarative_edt.c"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1350 "declarative_edt.m"
              {
#line 1350 "declarative_edt.m"
                /* direct tailcall eliminated */
#line 1350 "declarative_edt.m"
                {
#line 1350 "declarative_edt.m"
                  MR_Integer mdb__declarative_edt__SuspectId__tmp_copy_5 = mdb__declarative_edt__ParentId_9;
#line 1350 "declarative_edt.m"
                  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12;
#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__SuspectId__tmp_copy_5;
#line 1350 "declarative_edt.m"
                }
#line 1350 "declarative_edt.m"
                continue;
#line 1350 "declarative_edt.m"
              }
#line 11071 "mdb.declarative_edt.c"
            else
#line 11073 "mdb.declarative_edt.c"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 1347 "declarative_edt.m"
              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;
#line 11077 "mdb.declarative_edt.c"
            else
#line 11079 "mdb.declarative_edt.c"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1350 "declarative_edt.m"
              {
#line 1350 "declarative_edt.m"
                /* direct tailcall eliminated */
#line 1350 "declarative_edt.m"
                {
#line 1350 "declarative_edt.m"
                  MR_Integer mdb__declarative_edt__SuspectId__tmp_copy_5 = mdb__declarative_edt__ParentId_9;
#line 1350 "declarative_edt.m"
                  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12;
#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__SuspectId__tmp_copy_5;
#line 1350 "declarative_edt.m"
                }
#line 1350 "declarative_edt.m"
                continue;
#line 1350 "declarative_edt.m"
              }
#line 11102 "mdb.declarative_edt.c"
            else
#line 11104 "mdb.declarative_edt.c"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 1347 "declarative_edt.m"
              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;
#line 11108 "mdb.declarative_edt.c"
            else
#line 11110 "mdb.declarative_edt.c"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1350 "declarative_edt.m"
              {
#line 1350 "declarative_edt.m"
                /* direct tailcall eliminated */
#line 1350 "declarative_edt.m"
                {
#line 1350 "declarative_edt.m"
                  MR_Integer mdb__declarative_edt__SuspectId__tmp_copy_5 = mdb__declarative_edt__ParentId_9;
#line 1350 "declarative_edt.m"
                  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12;
#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__SuspectId__tmp_copy_5;
#line 1350 "declarative_edt.m"
                }
#line 1350 "declarative_edt.m"
                continue;
#line 1350 "declarative_edt.m"
              }
#line 11133 "mdb.declarative_edt.c"
            else
#line 11135 "mdb.declarative_edt.c"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 1350 "declarative_edt.m"
              {
#line 1350 "declarative_edt.m"
                /* direct tailcall eliminated */
#line 1350 "declarative_edt.m"
                {
#line 1350 "declarative_edt.m"
                  MR_Integer mdb__declarative_edt__SuspectId__tmp_copy_5 = mdb__declarative_edt__ParentId_9;
#line 1350 "declarative_edt.m"
                  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12;
#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__SuspectId__tmp_copy_5;
#line 1350 "declarative_edt.m"
                }
#line 1350 "declarative_edt.m"
                continue;
#line 1350 "declarative_edt.m"
              }
#line 11158 "mdb.declarative_edt.c"
            else
#line 11160 "mdb.declarative_edt.c"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 1350 "declarative_edt.m"
              {
#line 1350 "declarative_edt.m"
                /* direct tailcall eliminated */
#line 1350 "declarative_edt.m"
                {
#line 1350 "declarative_edt.m"
                  MR_Integer mdb__declarative_edt__SuspectId__tmp_copy_5 = mdb__declarative_edt__ParentId_9;
#line 1350 "declarative_edt.m"
                  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12;
#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__SuspectId__tmp_copy_5;
#line 1350 "declarative_edt.m"
                }
#line 1350 "declarative_edt.m"
                continue;
#line 1350 "declarative_edt.m"
              }
#line 11183 "mdb.declarative_edt.c"
            else
#line 1350 "declarative_edt.m"
              {
#line 1350 "declarative_edt.m"
                /* direct tailcall eliminated */
#line 1350 "declarative_edt.m"
                {
#line 1350 "declarative_edt.m"
                  MR_Integer mdb__declarative_edt__SuspectId__tmp_copy_5 = mdb__declarative_edt__ParentId_9;
#line 1350 "declarative_edt.m"
                  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16_16;

#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0__tmp_copy_12;
#line 1350 "declarative_edt.m"
                  mdb__declarative_edt__SuspectId_5 = mdb__declarative_edt__SuspectId__tmp_copy_5;
#line 1350 "declarative_edt.m"
                }
#line 1350 "declarative_edt.m"
                continue;
#line 1350 "declarative_edt.m"
              }
#line 1342 "declarative_edt.m"
          }
#line 1352 "declarative_edt.m"
        else
#line 1352 "declarative_edt.m"
          *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12;
#line 1352 "declarative_edt.m"
      }
#line 1352 "declarative_edt.m"
      break;
#line 1352 "declarative_edt.m"
    }
#line 1331 "declarative_edt.m"
}

#line 1302 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_4(
#line 1302 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1302 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1302 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1302 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3)
#line 1302 "declarative_edt.m"
{
#line 1302 "declarative_edt.m"
  {
#line 1302 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 1302 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__conv12_HeadVar__4_76;

#line 1302 "declarative_edt.m"
    {
#line 1302 "declarative_edt.m"
      mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1302__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_edt__wrapper_arg_1), ((MR_Integer) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv12_HeadVar__4_76);
    }
#line 1302 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv12_HeadVar__4_76));
#line 1302 "declarative_edt.m"
  }
#line 1302 "declarative_edt.m"
}

#line 1299 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_3(
#line 1299 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1299 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1299 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1299 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
#line 1299 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_4,
#line 1299 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_5)
#line 1299 "declarative_edt.m"
{
#line 1299 "declarative_edt.m"
  {
#line 1299 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 1299 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__conv9_HeadVar__5_5;
#line 1299 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__conv8_HeadVar__7_7;

#line 1299 "declarative_edt.m"
    {
#line 1299 "declarative_edt.m"
      mdb__declarative_edt__add_original_weight_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5)), mdb__declarative_edt__wrapper_arg_1, ((MR_Integer) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv9_HeadVar__5_5, ((MR_Integer) mdb__declarative_edt__wrapper_arg_4), &mdb__declarative_edt__conv8_HeadVar__7_7);
    }
#line 1299 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv9_HeadVar__5_5));
#line 1299 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_5 = ((MR_Box) (mdb__declarative_edt__conv8_HeadVar__7_7));
#line 1299 "declarative_edt.m"
  }
#line 1299 "declarative_edt.m"
}

#line 1297 "declarative_edt.m"
static MR_Box MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_2(
#line 1297 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1297 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1)
#line 1297 "declarative_edt.m"
{
#line 1297 "declarative_edt.m"
  {
#line 1297 "declarative_edt.m"
    MR_Box mdb__declarative_edt__wrapper_arg_2;
#line 1297 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

#line 1297 "declarative_edt.m"
    {
#line 1297 "declarative_edt.m"
      mdb__declarative_edt__wrapper_arg_2 = mdb__declarative_edt__IntroducedFrom__func__calc_suspect_weight__1297__1_2_f_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) mdb__declarative_edt__wrapper_arg_1));
    }
#line 1297 "declarative_edt.m"
    return mdb__declarative_edt__wrapper_arg_2;
#line 1297 "declarative_edt.m"
  }
#line 1297 "declarative_edt.m"
}

#line 1295 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0_1(
#line 1295 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1295 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1295 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_2)
#line 1295 "declarative_edt.m"
{
#line 1295 "declarative_edt.m"
  {
#line 1295 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 1295 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv6_HeadVar__4_59;

#line 1295 "declarative_edt.m"
    {
#line 1295 "declarative_edt.m"
      mdb__declarative_edt__IntroducedFrom__pred__calc_suspect_weight__1295__1_4_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), &mdb__declarative_edt__conv6_HeadVar__4_59);
    }
#line 1295 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_2 = ((MR_Box) (mdb__declarative_edt__conv6_HeadVar__4_59));
#line 1295 "declarative_edt.m"
  }
#line 1295 "declarative_edt.m"
}

#line 1273 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__calc_suspect_weight_7_p_0(
#line 1273 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57,
#line 1273 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_8,
#line 1273 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_9,
#line 1273 "declarative_edt.m"
  MR_Word mdb__declarative_edt__MaybeChildren_10,
#line 1273 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_11,
#line 1273 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_12,
#line 1273 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__Weight_13,
#line 1273 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__ExcessWeight_14)
#line 1273 "declarative_edt.m"
{
#line 1280 "declarative_edt.m"
  {
#line 1280 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1280 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 6)));
#line 1280 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 5)));
#line 1280 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 4)));
#line 1280 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 3)));
#line 1280 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 2)));
#line 1280 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 1)));
#line 1280 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_12, (MR_Integer) 0)));

#line 1280 "declarative_edt.m"
    if ((mdb__declarative_edt__V_79_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1322 "declarative_edt.m"
      {
#line 1323 "declarative_edt.m"
        *mdb__declarative_edt__Weight_13 = (MR_Integer) 0;
#line 1324 "declarative_edt.m"
        *mdb__declarative_edt__ExcessWeight_14 = (MR_Integer) 0;
#line 1322 "declarative_edt.m"
      }
#line 1280 "declarative_edt.m"
    else
#line 1280 "declarative_edt.m"
      {
#line 1280 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Weighting_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_79_79, (MR_Integer) 0)));

#line 1283 "declarative_edt.m"
        if ((mdb__declarative_edt__Status_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1282 "declarative_edt.m"
          mdb__declarative_edt__succeeded = MR_TRUE;
#line 1283 "declarative_edt.m"
        else
#line 1283 "declarative_edt.m"
        if ((mdb__declarative_edt__Status_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 1283 "declarative_edt.m"
          mdb__declarative_edt__succeeded = MR_TRUE;
#line 1283 "declarative_edt.m"
        else
#line 1283 "declarative_edt.m"
          mdb__declarative_edt__succeeded = MR_FALSE;
#line 1288 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1286 "declarative_edt.m"
          {
#line 1286 "declarative_edt.m"
            *mdb__declarative_edt__Weight_13 = (MR_Integer) 0;
#line 1287 "declarative_edt.m"
            *mdb__declarative_edt__ExcessWeight_14 = (MR_Integer) 0;
#line 1286 "declarative_edt.m"
          }
#line 1288 "declarative_edt.m"
        else
#line 1289 "declarative_edt.m"
          {
#line 1289 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__OriginalWeight_16;

#line 2035 "declarative_edt.m"
            if ((mdb__declarative_edt__Weighting_15 == (MR_Integer) 0))
#line 11441 "mdb.declarative_edt.c"
              {
#line 11443 "mdb.declarative_edt.c"
                void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 0)), (MR_Integer) 15)));
#line 11445 "mdb.declarative_edt.c"
                MR_Box mdb__declarative_edt__conv2_OriginalWeight_16;
#line 11447 "mdb.declarative_edt.c"
                MR_Box mdb__declarative_edt__conv1_ExcessWeight_14;

#line 11450 "mdb.declarative_edt.c"
                {
#line 11452 "mdb.declarative_edt.c"
                  mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57), mdb__declarative_edt__Store_8, mdb__declarative_edt__Node_9, &mdb__declarative_edt__conv2_OriginalWeight_16, &mdb__declarative_edt__conv1_ExcessWeight_14);
                }
#line 11455 "mdb.declarative_edt.c"
                mdb__declarative_edt__OriginalWeight_16 = ((MR_Integer) mdb__declarative_edt__conv2_OriginalWeight_16);
#line 11457 "mdb.declarative_edt.c"
                *mdb__declarative_edt__ExcessWeight_14 = ((MR_Integer) mdb__declarative_edt__conv1_ExcessWeight_14);
#line 11459 "mdb.declarative_edt.c"
              }
#line 2035 "declarative_edt.m"
            else
#line 11463 "mdb.declarative_edt.c"
              {
#line 11465 "mdb.declarative_edt.c"
                void MR_CALL (* mdb__declarative_edt__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 0)), (MR_Integer) 16)));
#line 11467 "mdb.declarative_edt.c"
                MR_Box mdb__declarative_edt__conv5_OriginalWeight_16;
#line 11469 "mdb.declarative_edt.c"
                MR_Box mdb__declarative_edt__conv4_ExcessWeight_14;

#line 11472 "mdb.declarative_edt.c"
                {
#line 11474 "mdb.declarative_edt.c"
                  mdb__declarative_edt__func_3(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57), mdb__declarative_edt__Store_8, mdb__declarative_edt__Node_9, &mdb__declarative_edt__conv5_OriginalWeight_16, &mdb__declarative_edt__conv4_ExcessWeight_14);
                }
#line 11477 "mdb.declarative_edt.c"
                mdb__declarative_edt__OriginalWeight_16 = ((MR_Integer) mdb__declarative_edt__conv5_OriginalWeight_16);
#line 11479 "mdb.declarative_edt.c"
                *mdb__declarative_edt__ExcessWeight_14 = ((MR_Integer) mdb__declarative_edt__conv4_ExcessWeight_14);
#line 11481 "mdb.declarative_edt.c"
              }
#line 1293 "declarative_edt.m"
            if ((mdb__declarative_edt__MaybeChildren_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1291 "declarative_edt.m"
              *mdb__declarative_edt__Weight_13 = mdb__declarative_edt__OriginalWeight_16;
#line 1293 "declarative_edt.m"
            else
#line 1294 "declarative_edt.m"
              {
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__TypeCtorInfo_62_62;
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__TypeInfo_64_64;
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__TypeInfo_66_66;
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__TypeInfo_67_67;
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__TypeInfo_73_73;
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__Children_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__MaybeChildren_10, (MR_Integer) 0)));
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__ChildrenSuspects_18;
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__ChildrenNodes_19;
#line 1294 "declarative_edt.m"
                MR_Integer mdb__declarative_edt__ChildrenOriginalWeight_22;
#line 1294 "declarative_edt.m"
                MR_Integer mdb__declarative_edt__ChildrenExcess_23;
#line 1294 "declarative_edt.m"
                MR_Integer mdb__declarative_edt__ChildrenWeight_24;
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_28_28;
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_29_29;
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_32_32;
#line 1294 "declarative_edt.m"
                MR_Word mdb__declarative_edt__V_35_35;
#line 1295 "declarative_edt.m"
                MR_Word mdb__declarative_edt__conv7_ChildrenSuspects_18;
#line 1299 "declarative_edt.m"
                MR_Box mdb__declarative_edt__conv11_ChildrenOriginalWeight_22;
#line 1299 "declarative_edt.m"
                MR_Box mdb__declarative_edt__conv10_ChildrenExcess_23;
#line 1302 "declarative_edt.m"
                MR_Box mdb__declarative_edt__conv13_ChildrenWeight_24;

#line 1295 "declarative_edt.m"
                {
#line 1295 "declarative_edt.m"
                  mdb__declarative_edt__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1295 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[0]));
#line 1295 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_1));
#line 1295 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1295 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57));
#line 1295 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 4) = ((MR_Box) (mdb__declarative_edt__SearchSpace_12));
#line 1295 "declarative_edt.m"
                }
#line 11546 "mdb.declarative_edt.c"
                mdb__declarative_edt__TypeCtorInfo_62_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 11548 "mdb.declarative_edt.c"
                {
#line 11550 "mdb.declarative_edt.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_64_64);
                }
#line 11553 "mdb.declarative_edt.c"
                {
#line 11555 "mdb.declarative_edt.c"
                  mdb__declarative_edt__TypeInfo_66_66 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11557 "mdb.declarative_edt.c"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_66_66, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 11559 "mdb.declarative_edt.c"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_66_66, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_64_64));
#line 11561 "mdb.declarative_edt.c"
                }
#line 1295 "declarative_edt.m"
                {
#line 1295 "declarative_edt.m"
                  mercury__list__map_3_p_0(mdb__declarative_edt__TypeCtorInfo_62_62, mdb__declarative_edt__TypeInfo_66_66, (MR_Word) mdb__declarative_edt__V_28_28, mdb__declarative_edt__Children_17, &mdb__declarative_edt__conv7_ChildrenSuspects_18);
                }
#line 1295 "declarative_edt.m"
                mdb__declarative_edt__ChildrenSuspects_18 = (MR_Word) mdb__declarative_edt__conv7_ChildrenSuspects_18;
#line 11570 "mdb.declarative_edt.c"
                {
#line 11572 "mdb.declarative_edt.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_67_67);
                }
#line 1297 "declarative_edt.m"
                {
#line 1297 "declarative_edt.m"
                  mdb__declarative_edt__V_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1297 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_29_29, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[1]));
#line 1297 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_29_29, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_2));
#line 1297 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_29_29, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1297 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_29_29, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57));
#line 1297 "declarative_edt.m"
                }
#line 1297 "declarative_edt.m"
                {
#line 1297 "declarative_edt.m"
                  mdb__declarative_edt__ChildrenNodes_19 = mercury__list__map_2_f_0(mdb__declarative_edt__TypeInfo_66_66, mdb__declarative_edt__TypeInfo_67_67, mdb__declarative_edt__V_29_29, mdb__declarative_edt__ChildrenSuspects_18);
                }
#line 1299 "declarative_edt.m"
                {
#line 1299 "declarative_edt.m"
                  mdb__declarative_edt__V_32_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1299 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[1]));
#line 1299 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_3));
#line 1299 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1299 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57));
#line 1299 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 4) = ((MR_Box) (mdb__declarative_edt__Weighting_15));
#line 1299 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_32_32, 5) = mdb__declarative_edt__Store_8;
#line 1299 "declarative_edt.m"
                }
#line 11612 "mdb.declarative_edt.c"
                {
#line 11614 "mdb.declarative_edt.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_73_73);
                }
#line 1299 "declarative_edt.m"
                {
#line 1299 "declarative_edt.m"
                  mercury__list__foldl2_6_p_0(mdb__declarative_edt__TypeInfo_73_73, mdb__declarative_edt__TypeCtorInfo_62_62, mdb__declarative_edt__TypeCtorInfo_62_62, mdb__declarative_edt__V_32_32, mdb__declarative_edt__ChildrenNodes_19, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_edt__conv11_ChildrenOriginalWeight_22, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_edt__conv10_ChildrenExcess_23);
                }
#line 1299 "declarative_edt.m"
                mdb__declarative_edt__ChildrenOriginalWeight_22 = ((MR_Integer) mdb__declarative_edt__conv11_ChildrenOriginalWeight_22);
#line 1299 "declarative_edt.m"
                mdb__declarative_edt__ChildrenExcess_23 = ((MR_Integer) mdb__declarative_edt__conv10_ChildrenExcess_23);
#line 1302 "declarative_edt.m"
                {
#line 1302 "declarative_edt.m"
                  mdb__declarative_edt__V_35_35 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
#line 1302 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_35_35, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_8[1]));
#line 1302 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_35_35, 1) = ((MR_Box) (mdb__declarative_edt__calc_suspect_weight_7_p_0_4));
#line 1302 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_35_35, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1302 "declarative_edt.m"
                  MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_35_35, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_57));
#line 1302 "declarative_edt.m"
                }
#line 1302 "declarative_edt.m"
                {
#line 1302 "declarative_edt.m"
                  mercury__list__foldl_4_p_0(mdb__declarative_edt__TypeInfo_66_66, mdb__declarative_edt__TypeCtorInfo_62_62, mdb__declarative_edt__V_35_35, mdb__declarative_edt__ChildrenSuspects_18, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_edt__conv13_ChildrenWeight_24);
                }
#line 1302 "declarative_edt.m"
                mdb__declarative_edt__ChildrenWeight_24 = ((MR_Integer) mdb__declarative_edt__conv13_ChildrenWeight_24);
#line 1307 "declarative_edt.m"
                if ((mdb__declarative_edt__Status_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1305 "declarative_edt.m"
                  *mdb__declarative_edt__Weight_13 = (mdb__declarative_edt__ChildrenWeight_24 + mdb__declarative_edt__ChildrenExcess_23);
#line 1307 "declarative_edt.m"
                else
#line 1315 "declarative_edt.m"
                  {
#line 1315 "declarative_edt.m"
                    MR_Integer mdb__declarative_edt__V_37_37;
#line 1315 "declarative_edt.m"
                    MR_Integer mdb__declarative_edt__V_38_38 = (mdb__declarative_edt__OriginalWeight_16 - mdb__declarative_edt__ChildrenOriginalWeight_22);

#line 1317 "declarative_edt.m"
                    mdb__declarative_edt__V_37_37 = (mdb__declarative_edt__V_38_38 + mdb__declarative_edt__ChildrenWeight_24);
#line 1317 "declarative_edt.m"
                    *mdb__declarative_edt__Weight_13 = (mdb__declarative_edt__V_37_37 + mdb__declarative_edt__ChildrenExcess_23);
#line 1315 "declarative_edt.m"
                  }
#line 1294 "declarative_edt.m"
              }
#line 1289 "declarative_edt.m"
          }
#line 1280 "declarative_edt.m"
      }
#line 1280 "declarative_edt.m"
  }
#line 1273 "declarative_edt.m"
}

#line 1252 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__should_check_search_space_consistency_0_p_0(void)
#line 1252 "declarative_edt.m"
{
#line 1254 "declarative_edt.m"
  {
#line 1254 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;

#line 1257 "declarative_edt.m"
{
#define MR_PROC_LABEL mdb__declarative_edt__should_check_search_space_consistency_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1257 "declarative_edt.m"

    #ifdef MR_DD_CHECK_SEARCH_SPACE
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif

#line 11702 "mdb.declarative_edt.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1257 "declarative_edt.m"
	}
mdb__declarative_edt__succeeded  = SUCCESS_INDICATOR;
}
#line 1254 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1254 "declarative_edt.m"
  }
#line 1252 "declarative_edt.m"
}

#line 1224 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0_1(
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1224 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_4,
#line 1224 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_5)
#line 1224 "declarative_edt.m"
{
#line 1224 "declarative_edt.m"
  {
#line 1224 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 1224 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16;
#line 1224 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18;

#line 1224 "declarative_edt.m"
    {
#line 1224 "declarative_edt.m"
      mdb__declarative_edt__propagate_status_downwards_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16, ((MR_Word) mdb__declarative_edt__wrapper_arg_4), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18);
    }
#line 1224 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16));
#line 1224 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_5 = ((MR_Box) (mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18));
#line 1224 "declarative_edt.m"
  }
#line 1224 "declarative_edt.m"
}

#line 1214 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_6_p_0(
#line 1214 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_39,
#line 1214 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_7,
#line 1214 "declarative_edt.m"
  MR_Word mdb__declarative_edt__StopStatusSet_8,
#line 1214 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_9,
#line 1214 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__StopSuspects_10,
#line 1214 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14,
#line 1214 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15)
#line 1214 "declarative_edt.m"
{
#line 1219 "declarative_edt.m"
  {
#line 1219 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_29_78;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_12;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_16_16;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_50_50;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store0_60;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store_61;
#line 1221 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_23_23;
#line 1221 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_24_24;
#line 1221 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_26_26;
#line 1221 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_27_27;
#line 1221 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_28_28;
#line 1221 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_25_25;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_63_63;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_64_64;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_65_65;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_66_66;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_67_67;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_68_68;
#line 1146 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv0_Store_61;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_69_69;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_70_70;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_71_71;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_72_72;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_74_74;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_75_75;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_73_73;
#line 1223 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_49_49;
#line 1223 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_51_51;
#line 1223 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_52_52;
#line 1223 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_53_53;
#line 1223 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_54_54;

#line 1220 "declarative_edt.m"
    {
#line 1220 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_39, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, mdb__declarative_edt__SuspectId_9, &mdb__declarative_edt__Suspect_12);
    }
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 0)));
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_24_24 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 1));
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 2)));
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 3)));
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 4)));
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 5)));
#line 1221 "declarative_edt.m"
    {
#line 1221 "declarative_edt.m"
      mdb__declarative_edt__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 0) = ((MR_Box) (mdb__declarative_edt__V_23_23));
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 1) = mdb__declarative_edt__V_24_24;
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 2) = ((MR_Box) (mdb__declarative_edt__Status_7));
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 3) = ((MR_Box) (mdb__declarative_edt__V_26_26));
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 4) = ((MR_Box) (mdb__declarative_edt__V_27_27));
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 5) = ((MR_Box) (mdb__declarative_edt__V_28_28));
#line 1221 "declarative_edt.m"
    }
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 0)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 1)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 2)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 3)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__Store0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 4)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 5)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 6)));
#line 11895 "mdb.declarative_edt.c"
    {
#line 11897 "mdb.declarative_edt.c"
      mdb__declarative_edt__TypeInfo_29_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11899 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_78, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 11901 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_78, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_39));
#line 11903 "mdb.declarative_edt.c"
    }
#line 1146 "declarative_edt.m"
    {
#line 1146 "declarative_edt.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_78, mdb__declarative_edt__SuspectId_9, ((MR_Box) (mdb__declarative_edt__V_16_16)), (MR_Word) mdb__declarative_edt__Store0_60, &mdb__declarative_edt__conv0_Store_61);
    }
#line 1146 "declarative_edt.m"
    mdb__declarative_edt__Store_61 = (MR_Word) mdb__declarative_edt__conv0_Store_61;
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 0)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 1)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 2)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 3)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 4)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 5)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_14, (MR_Integer) 6)));
#line 1147 "declarative_edt.m"
    {
#line 1147 "declarative_edt.m"
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 0) = ((MR_Box) (mdb__declarative_edt__V_69_69));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 1) = ((MR_Box) (mdb__declarative_edt__V_70_70));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 2) = ((MR_Box) (mdb__declarative_edt__V_71_71));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 3) = ((MR_Box) (mdb__declarative_edt__V_72_72));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 4) = ((MR_Box) (mdb__declarative_edt__Store_61));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 5) = ((MR_Box) (mdb__declarative_edt__V_74_74));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 6) = ((MR_Box) (mdb__declarative_edt__V_75_75));
#line 1147 "declarative_edt.m"
    }
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 0)));
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_53_53 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 1));
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 2)));
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_51_51 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 3)));
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 4)));
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_49_49 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 5)));
#line 1226 "declarative_edt.m"
    if ((mdb__declarative_edt__V_50_50 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1227 "declarative_edt.m"
      {
#line 1228 "declarative_edt.m"
        *mdb__declarative_edt__StopSuspects_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1227 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17;
#line 1227 "declarative_edt.m"
      }
#line 1226 "declarative_edt.m"
    else
#line 1223 "declarative_edt.m"
      {
#line 1223 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_48_48;
#line 1223 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Children_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_50_50, (MR_Integer) 0)));
#line 1223 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_20_20;
#line 1224 "declarative_edt.m"
        MR_Box mdb__declarative_edt__conv4_StopSuspects_10;
#line 1224 "declarative_edt.m"
        MR_Box mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_15;

#line 1224 "declarative_edt.m"
        {
#line 1224 "declarative_edt.m"
          mdb__declarative_edt__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[0]));
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 1) = ((MR_Box) (mdb__declarative_edt__force_propagate_status_downwards_6_p_0_1));
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_39));
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 4) = ((MR_Box) (mdb__declarative_edt__Status_7));
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 5) = ((MR_Box) (mdb__declarative_edt__StopStatusSet_8));
#line 1224 "declarative_edt.m"
        }
#line 12001 "mdb.declarative_edt.c"
        {
#line 12003 "mdb.declarative_edt.c"
          mdb__declarative_edt__TypeInfo_48_48 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12005 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_48_48, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
#line 12007 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_48_48, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_39));
#line 12009 "mdb.declarative_edt.c"
        }
#line 1224 "declarative_edt.m"
        {
#line 1224 "declarative_edt.m"
          mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_edt_scalar_common_1[0], mdb__declarative_edt__TypeInfo_48_48, mdb__declarative_edt__V_20_20, mdb__declarative_edt__Children_13, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdb__declarative_edt__conv4_StopSuspects_10, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17)), &mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_15);
        }
#line 1224 "declarative_edt.m"
        *mdb__declarative_edt__StopSuspects_10 = ((MR_Word) mdb__declarative_edt__conv4_StopSuspects_10);
#line 1224 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15 = ((MR_Word) mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_15);
#line 1223 "declarative_edt.m"
      }
#line 1219 "declarative_edt.m"
  }
#line 1214 "declarative_edt.m"
}

#line 1224 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_5_p_0_1(
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1224 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
#line 1224 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_4,
#line 1224 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_5)
#line 1224 "declarative_edt.m"
{
#line 1224 "declarative_edt.m"
  {
#line 1224 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 1224 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16;
#line 1224 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18;

#line 1224 "declarative_edt.m"
    {
#line 1224 "declarative_edt.m"
      mdb__declarative_edt__propagate_status_downwards_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16, ((MR_Word) mdb__declarative_edt__wrapper_arg_4), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18);
    }
#line 1224 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16));
#line 1224 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_5 = ((MR_Box) (mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18));
#line 1224 "declarative_edt.m"
  }
#line 1224 "declarative_edt.m"
}

#line 1205 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__force_propagate_status_downwards_5_p_0(
#line 1205 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_14,
#line 1205 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_6,
#line 1205 "declarative_edt.m"
  MR_Word mdb__declarative_edt__StopStatusSet_7,
#line 1205 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_8,
#line 1205 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
#line 1205 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12)
#line 1205 "declarative_edt.m"
{
#line 1219 "declarative_edt.m"
  {
#line 1219 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_29_85;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_22;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_24_24;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_57_57;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store0_67;
#line 1219 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store_68;
#line 1221 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_31_31;
#line 1221 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_32_32;
#line 1221 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_34_34;
#line 1221 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_35_35;
#line 1221 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_36_36;
#line 1221 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_33_33;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_70_70;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_71_71;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_72_72;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_73_73;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_74_74;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_75_75;
#line 1146 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv0_Store_68;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_76_76;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_77_77;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_78_78;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_79_79;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_81_81;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_82_82;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_80_80;
#line 1223 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_56_56;
#line 1223 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_58_58;
#line 1223 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_59_59;
#line 1223 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_60_60;
#line 1223 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_61_61;

#line 1220 "declarative_edt.m"
    {
#line 1220 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_14, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, mdb__declarative_edt__SuspectId_8, &mdb__declarative_edt__Suspect_22);
    }
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 0)));
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_32_32 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 1));
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 2)));
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 3)));
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 4)));
#line 1221 "declarative_edt.m"
    mdb__declarative_edt__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 5)));
#line 1221 "declarative_edt.m"
    {
#line 1221 "declarative_edt.m"
      mdb__declarative_edt__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 0) = ((MR_Box) (mdb__declarative_edt__V_31_31));
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 1) = mdb__declarative_edt__V_32_32;
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 2) = ((MR_Box) (mdb__declarative_edt__Status_6));
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 3) = ((MR_Box) (mdb__declarative_edt__V_34_34));
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 4) = ((MR_Box) (mdb__declarative_edt__V_35_35));
#line 1221 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 5) = ((MR_Box) (mdb__declarative_edt__V_36_36));
#line 1221 "declarative_edt.m"
    }
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__Store0_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6)));
#line 12202 "mdb.declarative_edt.c"
    {
#line 12204 "mdb.declarative_edt.c"
      mdb__declarative_edt__TypeInfo_29_85 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12206 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_85, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 12208 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_85, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_14));
#line 12210 "mdb.declarative_edt.c"
    }
#line 1146 "declarative_edt.m"
    {
#line 1146 "declarative_edt.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_85, mdb__declarative_edt__SuspectId_8, ((MR_Box) (mdb__declarative_edt__V_24_24)), (MR_Word) mdb__declarative_edt__Store0_67, &mdb__declarative_edt__conv0_Store_68);
    }
#line 1146 "declarative_edt.m"
    mdb__declarative_edt__Store_68 = (MR_Word) mdb__declarative_edt__conv0_Store_68;
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6)));
#line 1147 "declarative_edt.m"
    {
#line 1147 "declarative_edt.m"
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 0) = ((MR_Box) (mdb__declarative_edt__V_76_76));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 1) = ((MR_Box) (mdb__declarative_edt__V_77_77));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 2) = ((MR_Box) (mdb__declarative_edt__V_78_78));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 3) = ((MR_Box) (mdb__declarative_edt__V_79_79));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 4) = ((MR_Box) (mdb__declarative_edt__Store_68));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 5) = ((MR_Box) (mdb__declarative_edt__V_81_81));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25, 6) = ((MR_Box) (mdb__declarative_edt__V_82_82));
#line 1147 "declarative_edt.m"
    }
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 0)));
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_60_60 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 1));
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 2)));
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 3)));
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 4)));
#line 1223 "declarative_edt.m"
    mdb__declarative_edt__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_22, (MR_Integer) 5)));
#line 1226 "declarative_edt.m"
    if ((mdb__declarative_edt__V_57_57 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1227 "declarative_edt.m"
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25;
#line 1226 "declarative_edt.m"
    else
#line 1223 "declarative_edt.m"
      {
#line 1223 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_48_55;
#line 1223 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Children_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_57_57, (MR_Integer) 0)));
#line 1223 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_28_28;
#line 1224 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_86_86;
#line 1224 "declarative_edt.m"
        MR_Box mdb__declarative_edt__conv4_V_86_86;
#line 1224 "declarative_edt.m"
        MR_Box mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_12;

#line 1224 "declarative_edt.m"
        {
#line 1224 "declarative_edt.m"
          mdb__declarative_edt__V_28_28 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[0]));
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 1) = ((MR_Box) (mdb__declarative_edt__force_propagate_status_downwards_5_p_0_1));
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_14));
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 4) = ((MR_Box) (mdb__declarative_edt__Status_6));
#line 1224 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_28_28, 5) = ((MR_Box) (mdb__declarative_edt__StopStatusSet_7));
#line 1224 "declarative_edt.m"
        }
#line 12304 "mdb.declarative_edt.c"
        {
#line 12306 "mdb.declarative_edt.c"
          mdb__declarative_edt__TypeInfo_48_55 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12308 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_48_55, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
#line 12310 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_48_55, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_14));
#line 12312 "mdb.declarative_edt.c"
        }
#line 1224 "declarative_edt.m"
        {
#line 1224 "declarative_edt.m"
          mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_edt_scalar_common_1[0], mdb__declarative_edt__TypeInfo_48_55, mdb__declarative_edt__V_28_28, mdb__declarative_edt__Children_23, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))), &mdb__declarative_edt__conv4_V_86_86, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_25)), &mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_12);
        }
#line 1224 "declarative_edt.m"
        mdb__declarative_edt__V_86_86 = ((MR_Word) mdb__declarative_edt__conv4_V_86_86);
#line 1224 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12 = ((MR_Word) mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_12);
#line 1223 "declarative_edt.m"
      }
#line 1219 "declarative_edt.m"
  }
#line 1205 "declarative_edt.m"
}

#line 1192 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0_1(
#line 1192 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1192 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1192 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1192 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3,
#line 1192 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_4,
#line 1192 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_5)
#line 1192 "declarative_edt.m"
{
#line 1192 "declarative_edt.m"
  {
#line 1192 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 1192 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16;
#line 1192 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18;

#line 1192 "declarative_edt.m"
    {
#line 1192 "declarative_edt.m"
      mdb__declarative_edt__propagate_status_downwards_7_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16, ((MR_Word) mdb__declarative_edt__wrapper_arg_4), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18);
    }
#line 1192 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv2_STATE_VARIABLE_StopSuspects_16));
#line 1192 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_5 = ((MR_Box) (mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_18));
#line 1192 "declarative_edt.m"
  }
#line 1192 "declarative_edt.m"
}

#line 1179 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_7_p_0(
#line 1179 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_49,
#line 1179 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_8,
#line 1179 "declarative_edt.m"
  MR_Word mdb__declarative_edt__StopStatusSet_9,
#line 1179 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_10,
#line 1179 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_StopSuspects_0_15,
#line 1179 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_StopSuspects_16,
#line 1179 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17,
#line 1179 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18)
#line 1179 "declarative_edt.m"
{
#line 1185 "declarative_edt.m"
  {
#line 1185 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1185 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_13;
#line 1187 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_19_19;
#line 1187 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_28_28;
#line 1187 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_29_29;
#line 1187 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_30_30;
#line 1187 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_31_31;
#line 1187 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_32_32;

#line 1186 "declarative_edt.m"
    {
#line 1186 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_49, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, mdb__declarative_edt__SuspectId_10, &mdb__declarative_edt__Suspect_13);
    }
#line 1187 "declarative_edt.m"
    mdb__declarative_edt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 0)));
#line 1187 "declarative_edt.m"
    mdb__declarative_edt__V_29_29 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 1));
#line 1187 "declarative_edt.m"
    mdb__declarative_edt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 2)));
#line 1187 "declarative_edt.m"
    mdb__declarative_edt__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 3)));
#line 1187 "declarative_edt.m"
    mdb__declarative_edt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 4)));
#line 1187 "declarative_edt.m"
    mdb__declarative_edt__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 5)));
#line 1187 "declarative_edt.m"
    {
#line 1187 "declarative_edt.m"
      mdb__declarative_edt__succeeded = mercury__list__member_2_p_0((MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0, ((MR_Box) (mdb__declarative_edt__V_19_19)), mdb__declarative_edt__StopStatusSet_9);
    }
#line 1187 "declarative_edt.m"
    mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 1197 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1189 "declarative_edt.m"
      {
#line 1189 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_29_90;
#line 1189 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_20_20;
#line 1189 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21;
#line 1189 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_62_62;
#line 1189 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Store0_72;
#line 1189 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Store_73;
#line 1188 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 0)));
#line 1188 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_34_34 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 1));
#line 1188 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 3)));
#line 1188 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 4)));
#line 1188 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 5)));
#line 1188 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 2)));
#line 1145 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_75_75;
#line 1145 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_76_76;
#line 1145 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_77_77;
#line 1145 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_78_78;
#line 1145 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_79_79;
#line 1145 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_80_80;
#line 1146 "declarative_edt.m"
        MR_Word mdb__declarative_edt__conv0_Store_73;
#line 1147 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_81_81;
#line 1147 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_82_82;
#line 1147 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_83_83;
#line 1147 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_84_84;
#line 1147 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_86_86;
#line 1147 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_87_87;
#line 1147 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_85_85;
#line 1191 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_61_61;
#line 1191 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_63_63;
#line 1191 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_64_64;
#line 1191 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_65_65;
#line 1191 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_66_66;

#line 1188 "declarative_edt.m"
        {
#line 1188 "declarative_edt.m"
          mdb__declarative_edt__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1188 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 0) = ((MR_Box) (mdb__declarative_edt__V_33_33));
#line 1188 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 1) = mdb__declarative_edt__V_34_34;
#line 1188 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 2) = ((MR_Box) (mdb__declarative_edt__Status_8));
#line 1188 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 3) = ((MR_Box) (mdb__declarative_edt__V_36_36));
#line 1188 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 4) = ((MR_Box) (mdb__declarative_edt__V_37_37));
#line 1188 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_20_20, 5) = ((MR_Box) (mdb__declarative_edt__V_38_38));
#line 1188 "declarative_edt.m"
        }
#line 1145 "declarative_edt.m"
        mdb__declarative_edt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 0)));
#line 1145 "declarative_edt.m"
        mdb__declarative_edt__V_76_76 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 1)));
#line 1145 "declarative_edt.m"
        mdb__declarative_edt__V_77_77 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 2)));
#line 1145 "declarative_edt.m"
        mdb__declarative_edt__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 3)));
#line 1145 "declarative_edt.m"
        mdb__declarative_edt__Store0_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 4)));
#line 1145 "declarative_edt.m"
        mdb__declarative_edt__V_79_79 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 5)));
#line 1145 "declarative_edt.m"
        mdb__declarative_edt__V_80_80 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 6)));
#line 12533 "mdb.declarative_edt.c"
        {
#line 12535 "mdb.declarative_edt.c"
          mdb__declarative_edt__TypeInfo_29_90 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12537 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_90, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 12539 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_90, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_49));
#line 12541 "mdb.declarative_edt.c"
        }
#line 1146 "declarative_edt.m"
        {
#line 1146 "declarative_edt.m"
          mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_90, mdb__declarative_edt__SuspectId_10, ((MR_Box) (mdb__declarative_edt__V_20_20)), (MR_Word) mdb__declarative_edt__Store0_72, &mdb__declarative_edt__conv0_Store_73);
        }
#line 1146 "declarative_edt.m"
        mdb__declarative_edt__Store_73 = (MR_Word) mdb__declarative_edt__conv0_Store_73;
#line 1147 "declarative_edt.m"
        mdb__declarative_edt__V_81_81 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 0)));
#line 1147 "declarative_edt.m"
        mdb__declarative_edt__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 1)));
#line 1147 "declarative_edt.m"
        mdb__declarative_edt__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 2)));
#line 1147 "declarative_edt.m"
        mdb__declarative_edt__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 3)));
#line 1147 "declarative_edt.m"
        mdb__declarative_edt__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 4)));
#line 1147 "declarative_edt.m"
        mdb__declarative_edt__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 5)));
#line 1147 "declarative_edt.m"
        mdb__declarative_edt__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17, (MR_Integer) 6)));
#line 1147 "declarative_edt.m"
        {
#line 1147 "declarative_edt.m"
          mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21, 0) = ((MR_Box) (mdb__declarative_edt__V_81_81));
#line 1147 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21, 1) = ((MR_Box) (mdb__declarative_edt__V_82_82));
#line 1147 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21, 2) = ((MR_Box) (mdb__declarative_edt__V_83_83));
#line 1147 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21, 3) = ((MR_Box) (mdb__declarative_edt__V_84_84));
#line 1147 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21, 4) = ((MR_Box) (mdb__declarative_edt__Store_73));
#line 1147 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21, 5) = ((MR_Box) (mdb__declarative_edt__V_86_86));
#line 1147 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21, 6) = ((MR_Box) (mdb__declarative_edt__V_87_87));
#line 1147 "declarative_edt.m"
        }
#line 1191 "declarative_edt.m"
        mdb__declarative_edt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 0)));
#line 1191 "declarative_edt.m"
        mdb__declarative_edt__V_65_65 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 1));
#line 1191 "declarative_edt.m"
        mdb__declarative_edt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 2)));
#line 1191 "declarative_edt.m"
        mdb__declarative_edt__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 3)));
#line 1191 "declarative_edt.m"
        mdb__declarative_edt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 4)));
#line 1191 "declarative_edt.m"
        mdb__declarative_edt__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 5)));
#line 1194 "declarative_edt.m"
        if ((mdb__declarative_edt__V_62_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1195 "declarative_edt.m"
          {
#line 1195 "declarative_edt.m"
            *mdb__declarative_edt__STATE_VARIABLE_StopSuspects_16 = mdb__declarative_edt__STATE_VARIABLE_StopSuspects_0_15;
#line 1195 "declarative_edt.m"
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21;
#line 1195 "declarative_edt.m"
          }
#line 1194 "declarative_edt.m"
        else
#line 1191 "declarative_edt.m"
          {
#line 1191 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_59_59;
#line 1191 "declarative_edt.m"
            MR_Word mdb__declarative_edt__Children_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_62_62, (MR_Integer) 0)));
#line 1191 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_24_24;
#line 1192 "declarative_edt.m"
            MR_Box mdb__declarative_edt__conv4_STATE_VARIABLE_StopSuspects_16;
#line 1192 "declarative_edt.m"
            MR_Box mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_18;

#line 1192 "declarative_edt.m"
            {
#line 1192 "declarative_edt.m"
              mdb__declarative_edt__V_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1192 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_7[0]));
#line 1192 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 1) = ((MR_Box) (mdb__declarative_edt__propagate_status_downwards_7_p_0_1));
#line 1192 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1192 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_49));
#line 1192 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 4) = ((MR_Box) (mdb__declarative_edt__Status_8));
#line 1192 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_24_24, 5) = ((MR_Box) (mdb__declarative_edt__StopStatusSet_9));
#line 1192 "declarative_edt.m"
            }
#line 12639 "mdb.declarative_edt.c"
            {
#line 12641 "mdb.declarative_edt.c"
              mdb__declarative_edt__TypeInfo_59_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12643 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_59_59, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
#line 12645 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_59_59, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_49));
#line 12647 "mdb.declarative_edt.c"
            }
#line 1192 "declarative_edt.m"
            {
#line 1192 "declarative_edt.m"
              mercury__list__foldl2_6_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, (MR_Word) &mdb__declarative_edt_scalar_common_1[0], mdb__declarative_edt__TypeInfo_59_59, mdb__declarative_edt__V_24_24, mdb__declarative_edt__Children_14, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_StopSuspects_0_15)), &mdb__declarative_edt__conv4_STATE_VARIABLE_StopSuspects_16, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_21_21)), &mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_18);
            }
#line 1192 "declarative_edt.m"
            *mdb__declarative_edt__STATE_VARIABLE_StopSuspects_16 = ((MR_Word) mdb__declarative_edt__conv4_STATE_VARIABLE_StopSuspects_16);
#line 1192 "declarative_edt.m"
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18 = ((MR_Word) mdb__declarative_edt__conv3_STATE_VARIABLE_SearchSpace_18);
#line 1191 "declarative_edt.m"
          }
#line 1189 "declarative_edt.m"
      }
#line 1197 "declarative_edt.m"
    else
#line 1198 "declarative_edt.m"
      {
#line 1198 "declarative_edt.m"
        {
#line 1198 "declarative_edt.m"
          mercury__list__cons_3_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, ((MR_Box) (mdb__declarative_edt__SuspectId_10)), mdb__declarative_edt__STATE_VARIABLE_StopSuspects_0_15, mdb__declarative_edt__STATE_VARIABLE_StopSuspects_16);
        }
#line 1198 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_18 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_17;
#line 1198 "declarative_edt.m"
      }
#line 1185 "declarative_edt.m"
  }
#line 1179 "declarative_edt.m"
}

#line 1169 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__propagate_status_downwards_5_p_0(
#line 1169 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_14,
#line 1169 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_6,
#line 1169 "declarative_edt.m"
  MR_Word mdb__declarative_edt__StopStatusSet_7,
#line 1169 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_8,
#line 1169 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
#line 1169 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12)
#line 1169 "declarative_edt.m"
{
#line 1163 "declarative_edt.m"
  {
#line 1163 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1164 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_10_10;

#line 1164 "declarative_edt.m"
    {
#line 1164 "declarative_edt.m"
      mdb__declarative_edt__propagate_status_downwards_7_p_0(mdb__declarative_edt__TypeInfo_for_T_14, mdb__declarative_edt__Status_6, mdb__declarative_edt__StopStatusSet_7, mdb__declarative_edt__SuspectId_8, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdb__declarative_edt__V_10_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);
    }
#line 1163 "declarative_edt.m"
  }
#line 1169 "declarative_edt.m"
}

#line 1141 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__set_suspect_4_p_0(
#line 1141 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_26,
#line 1141 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 1141 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Suspect_6,
#line 1141 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10,
#line 1141 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11)
#line 1141 "declarative_edt.m"
{
#line 1144 "declarative_edt.m"
  {
#line 1144 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1144 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_29_29;
#line 1144 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 4)));
#line 1144 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store_9;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 0)));
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 1)));
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 2)));
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 3)));
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 5)));
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 6)));
#line 1146 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv0_Store_9;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_19_19;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_20_20;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_21_21;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_22_22;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_24_24;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_25_25;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_23_23;

#line 12768 "mdb.declarative_edt.c"
    {
#line 12770 "mdb.declarative_edt.c"
      mdb__declarative_edt__TypeInfo_29_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12772 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_29, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 12774 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_29, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_26));
#line 12776 "mdb.declarative_edt.c"
    }
#line 1146 "declarative_edt.m"
    {
#line 1146 "declarative_edt.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_29, mdb__declarative_edt__SuspectId_5, ((MR_Box) (mdb__declarative_edt__Suspect_6)), (MR_Word) mdb__declarative_edt__Store0_8, &mdb__declarative_edt__conv0_Store_9);
    }
#line 1146 "declarative_edt.m"
    mdb__declarative_edt__Store_9 = (MR_Word) mdb__declarative_edt__conv0_Store_9;
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 0)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 1)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 2)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 3)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 4)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 5)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 6)));
#line 1147 "declarative_edt.m"
    {
#line 1147 "declarative_edt.m"
      MR_Word base;
#line 1147 "declarative_edt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "declarative_edt.m"
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11 = base;
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__V_19_19));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__V_20_20));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__V_21_21));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__V_22_22));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__Store_9));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__V_24_24));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__V_25_25));
#line 1147 "declarative_edt.m"
    }
#line 1144 "declarative_edt.m"
  }
#line 1141 "declarative_edt.m"
}

#line 1129 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__lookup_suspect_3_p_0(
#line 1129 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_18,
#line 1129 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_4,
#line 1129 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 1129 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Suspect_6)
#line 1129 "declarative_edt.m"
{
#line 1135 "declarative_edt.m"
  {
#line 1135 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1135 "declarative_edt.m"
    MR_Word mdb__declarative_edt__FoundSuspect_7;
#line 1133 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_21_21;
#line 1133 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 4)));
#line 1133 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 0)));
#line 1133 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 1)));
#line 1133 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 2)));
#line 1133 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 3)));
#line 1133 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 5)));
#line 1133 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_4, (MR_Integer) 6)));
#line 1133 "declarative_edt.m"
    MR_Box mdb__declarative_edt__conv0_FoundSuspect_7;

#line 12866 "mdb.declarative_edt.c"
    {
#line 12868 "mdb.declarative_edt.c"
      mdb__declarative_edt__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12870 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_21_21, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 12872 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_21_21, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_18));
#line 12874 "mdb.declarative_edt.c"
    }
#line 1133 "declarative_edt.m"
    {
#line 1133 "declarative_edt.m"
      mdb__declarative_edt__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mdb__declarative_edt__TypeInfo_21_21, (MR_Word) mdb__declarative_edt__V_8_8, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__conv0_FoundSuspect_7);
    }
#line 1133 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1133 "declarative_edt.m"
      {
#line 1133 "declarative_edt.m"
        mdb__declarative_edt__FoundSuspect_7 = ((MR_Word) mdb__declarative_edt__conv0_FoundSuspect_7);
#line 1133 "declarative_edt.m"
        mdb__declarative_edt__succeeded = MR_TRUE;
#line 1133 "declarative_edt.m"
      }
#line 1135 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1134 "declarative_edt.m"
      *mdb__declarative_edt__Suspect_6 = mdb__declarative_edt__FoundSuspect_7;
#line 1135 "declarative_edt.m"
    else
#line 1136 "declarative_edt.m"
      {
#line 1136 "declarative_edt.m"
        {
#line 1136 "declarative_edt.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[12])));
#line 1136 "declarative_edt.m"
          return;
        }
#line 1136 "declarative_edt.m"
      }
#line 1135 "declarative_edt.m"
  }
#line 1129 "declarative_edt.m"
}

#line 1112 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__find_edt_node_in_suspect_list_4_p_0(
#line 1112 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
#line 1112 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 1112 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_7,
#line 1112 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_8,
#line 1112 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__FoundId_9)
#line 1112 "declarative_edt.m"
{
#line 1116 "declarative_edt.m"
  while (MR_TRUE)
#line 1116 "declarative_edt.m"
    {
#line 1116 "declarative_edt.m"
      /* tailcall optimized into a loop */
#line 1116 "declarative_edt.m"
      {
#line 1116 "declarative_edt.m"
        MR_bool mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 1116 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__SuspectId_5;
#line 1116 "declarative_edt.m"
        MR_Word mdb__declarative_edt__SuspectIds_6;
#line 1118 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeCtorInfo_25_25;
#line 1118 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_26_26;
#line 1118 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Suspect_10;
#line 1118 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_11_11;
#line 1118 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_27_27;
#line 1118 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_12_12;
#line 1118 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_13_13;
#line 1118 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_14_14;
#line 1118 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_15_15;
#line 1118 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_16_16;
#line 1118 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_17_17;
#line 1118 "declarative_edt.m"
        MR_Box mdb__declarative_edt__conv0_Suspect_10;
#line 1119 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_18_18;
#line 1119 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_19_19;
#line 1119 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_20_20;
#line 1119 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_21_21;
#line 1119 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_22_22;

#line 1115 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1115 "declarative_edt.m"
          {
#line 1115 "declarative_edt.m"
            mdb__declarative_edt__SuspectId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 0)));
#line 1115 "declarative_edt.m"
            mdb__declarative_edt__SuspectIds_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__1_1, (MR_Integer) 1)));
#line 1118 "declarative_edt.m"
            mdb__declarative_edt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 0)));
#line 1118 "declarative_edt.m"
            mdb__declarative_edt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 1)));
#line 1118 "declarative_edt.m"
            mdb__declarative_edt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 2)));
#line 1118 "declarative_edt.m"
            mdb__declarative_edt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 3)));
#line 1118 "declarative_edt.m"
            mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 4)));
#line 1118 "declarative_edt.m"
            mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 5)));
#line 1118 "declarative_edt.m"
            mdb__declarative_edt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_8, (MR_Integer) 6)));
#line 12999 "mdb.declarative_edt.c"
            mdb__declarative_edt__TypeCtorInfo_25_25 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1;
#line 13001 "mdb.declarative_edt.c"
            {
#line 13003 "mdb.declarative_edt.c"
              mdb__declarative_edt__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13005 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_26_26, 0) = ((MR_Box) (mdb__declarative_edt__TypeCtorInfo_25_25));
#line 13007 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_26_26, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_23));
#line 13009 "mdb.declarative_edt.c"
            }
#line 1118 "declarative_edt.m"
            {
#line 1118 "declarative_edt.m"
              mdb__declarative_edt__succeeded = mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_115_101_97_114_99_104_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_3_p_0(mdb__declarative_edt__TypeInfo_26_26, (MR_Word) mdb__declarative_edt__V_11_11, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__conv0_Suspect_10);
            }
#line 1118 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1118 "declarative_edt.m"
              {
#line 1118 "declarative_edt.m"
                mdb__declarative_edt__Suspect_10 = ((MR_Word) mdb__declarative_edt__conv0_Suspect_10);
#line 1118 "declarative_edt.m"
                mdb__declarative_edt__succeeded = MR_TRUE;
#line 1118 "declarative_edt.m"
              }
#line 1118 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1118 "declarative_edt.m"
              {
#line 1119 "declarative_edt.m"
                mdb__declarative_edt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 0)));
#line 1119 "declarative_edt.m"
                mdb__declarative_edt__V_27_27 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 1));
#line 1119 "declarative_edt.m"
                mdb__declarative_edt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 2)));
#line 1119 "declarative_edt.m"
                mdb__declarative_edt__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 3)));
#line 1119 "declarative_edt.m"
                mdb__declarative_edt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 4)));
#line 1119 "declarative_edt.m"
                mdb__declarative_edt__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_10, (MR_Integer) 5)));
#line 1119 "declarative_edt.m"
                {
#line 1119 "declarative_edt.m"
                  mdb__declarative_edt__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_edt__TypeInfo_for_T_23, mdb__declarative_edt__Node_7, mdb__declarative_edt__V_27_27);
                }
#line 1118 "declarative_edt.m"
              }
#line 1122 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1121 "declarative_edt.m"
              {
#line 1121 "declarative_edt.m"
                *mdb__declarative_edt__FoundId_9 = mdb__declarative_edt__SuspectId_5;
#line 1121 "declarative_edt.m"
                mdb__declarative_edt__succeeded = MR_TRUE;
#line 1121 "declarative_edt.m"
              }
#line 1122 "declarative_edt.m"
            else
#line 1123 "declarative_edt.m"
              {
#line 1123 "declarative_edt.m"
                /* direct tailcall eliminated */
#line 1123 "declarative_edt.m"
                {
#line 1123 "declarative_edt.m"
                  MR_Word mdb__declarative_edt__HeadVar__1__tmp_copy_1 = mdb__declarative_edt__SuspectIds_6;

#line 1123 "declarative_edt.m"
                  mdb__declarative_edt__HeadVar__1_1 = mdb__declarative_edt__HeadVar__1__tmp_copy_1;
#line 1123 "declarative_edt.m"
                }
#line 1123 "declarative_edt.m"
                continue;
#line 1123 "declarative_edt.m"
              }
#line 1115 "declarative_edt.m"
          }
#line 1116 "declarative_edt.m"
        return mdb__declarative_edt__succeeded;
#line 1116 "declarative_edt.m"
      }
#line 1116 "declarative_edt.m"
      break;
#line 1116 "declarative_edt.m"
    }
#line 1112 "declarative_edt.m"
}

#line 1072 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_p_0(
#line 1072 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42,
#line 1072 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_8,
#line 1072 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_9,
#line 1072 "declarative_edt.m"
  MR_Word mdb__declarative_edt__OutputArgPos_10,
#line 1072 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TermPath_11,
#line 1072 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_TriedProcs_0_36,
#line 1072 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_TriedProcs_37,
#line 1072 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__MaybeInitialVersionArgPos_13)
#line 1072 "declarative_edt.m"
{
#line 1077 "declarative_edt.m"
  {
#line 1077 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1077 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Question_14;
#line 13118 "mdb.declarative_edt.c"
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13120 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_Question_14;
#line 1105 "declarative_edt.m"
    MR_Word mdb__declarative_edt__FinalAtom_18;
#line 1105 "declarative_edt.m"
    MR_Box mdb__declarative_edt__ProcLayout_20;
#line 1105 "declarative_edt.m"
    MR_Word mdb__declarative_edt__FinalArgs_21;
#line 1080 "declarative_edt.m"
    MR_Word mdb__declarative_edt__FinalDeclAtom_17;
#line 1080 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_15_15;
#line 1080 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_16_16;
#line 1081 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_19_19;
#line 1083 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeCtorInfo_43_43;
#line 1083 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeCtorInfo_44_44;
#line 1083 "declarative_edt.m"
    MR_Box mdb__declarative_edt__conv2_V_22_22;

#line 13143 "mdb.declarative_edt.c"
    {
#line 13145 "mdb.declarative_edt.c"
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42), mdb__declarative_edt__Store_8, mdb__declarative_edt__Node_9, &mdb__declarative_edt__conv1_Question_14);
    }
#line 13148 "mdb.declarative_edt.c"
    mdb__declarative_edt__Question_14 = ((MR_Word) mdb__declarative_edt__conv1_Question_14);
#line 1080 "declarative_edt.m"
    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__Question_14)) == (MR_mktag((MR_Integer) 0)));
#line 1080 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1080 "declarative_edt.m"
      {
#line 1080 "declarative_edt.m"
        mdb__declarative_edt__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Question_14, (MR_Integer) 0));
#line 1080 "declarative_edt.m"
        mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Question_14, (MR_Integer) 1)));
#line 1080 "declarative_edt.m"
        mdb__declarative_edt__FinalDeclAtom_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Question_14, (MR_Integer) 2)));
#line 1081 "declarative_edt.m"
        mdb__declarative_edt__FinalAtom_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__FinalDeclAtom_17, (MR_Integer) 0)));
#line 1081 "declarative_edt.m"
        mdb__declarative_edt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__FinalDeclAtom_17, (MR_Integer) 1)));
#line 1082 "declarative_edt.m"
        mdb__declarative_edt__ProcLayout_20 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__FinalAtom_18, (MR_Integer) 0)));
#line 1082 "declarative_edt.m"
        mdb__declarative_edt__FinalArgs_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__FinalAtom_18, (MR_Integer) 1)));
#line 13170 "mdb.declarative_edt.c"
        mdb__declarative_edt__TypeCtorInfo_43_43 = (MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0;
#line 13172 "mdb.declarative_edt.c"
        mdb__declarative_edt__TypeCtorInfo_44_44 = (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0;
#line 1083 "declarative_edt.m"
        {
#line 1083 "declarative_edt.m"
          mdb__declarative_edt__succeeded = mercury__map__search_3_p_0(mdb__declarative_edt__TypeCtorInfo_43_43, mdb__declarative_edt__TypeCtorInfo_44_44, mdb__declarative_edt__STATE_VARIABLE_TriedProcs_0_36, ((MR_Box) (mdb__declarative_edt__ProcLayout_20)), &mdb__declarative_edt__conv2_V_22_22);
        }
#line 1083 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1083 "declarative_edt.m"
          mdb__declarative_edt__succeeded = MR_TRUE;
#line 1083 "declarative_edt.m"
        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 1080 "declarative_edt.m"
      }
#line 1105 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1085 "declarative_edt.m"
      {
#line 1102 "declarative_edt.m"
        MR_Word mdb__declarative_edt__InitialVersionArgPos_30;
#line 1087 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__OutputArgNum_23;
#line 1087 "declarative_edt.m"
        MR_Word mdb__declarative_edt__OutputArg_24;
#line 1087 "declarative_edt.m"
        MR_Word mdb__declarative_edt__OutputTermRep_27;
#line 1087 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__InitialVersionArgNum_28;
#line 1087 "declarative_edt.m"
        MR_Word mdb__declarative_edt__OutputSubtermRep_29;
#line 1087 "declarative_edt.m"
        MR_Word mdb__declarative_edt__InitialVersionArg_31;
#line 1087 "declarative_edt.m"
        MR_Word mdb__declarative_edt__InitialVersionTermRep_34;
#line 1087 "declarative_edt.m"
        MR_Word mdb__declarative_edt__InitialVersionSubtermRep_35;
#line 1087 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_40_40;
#line 1087 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_41_41;
#line 1089 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_25_25;
#line 1089 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_26_26;
#line 1096 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_32_32;
#line 1096 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_33_33;

#line 1085 "declarative_edt.m"
        mercury__private_builtin__dummy_var = (MR_Integer) 0;
#line 1085 "declarative_edt.m"
        {
#line 1085 "declarative_edt.m"
          mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0, (MR_Word) &mercury__unit__unit__type_ctor_info_unit_0, ((MR_Box) (mdb__declarative_edt__ProcLayout_20)), ((MR_Box) ((MR_Integer) 0)), mdb__declarative_edt__STATE_VARIABLE_TriedProcs_0_36, mdb__declarative_edt__STATE_VARIABLE_TriedProcs_37);
        }
#line 1087 "declarative_edt.m"
        {
#line 1087 "declarative_edt.m"
          mdb__declarative_execution__absolute_arg_num_3_p_0(mdb__declarative_edt__OutputArgPos_10, mdb__declarative_edt__FinalAtom_18, &mdb__declarative_edt__OutputArgNum_23);
        }
#line 1088 "declarative_edt.m"
        {
#line 1088 "declarative_edt.m"
          mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_edt__OutputArgPos_10, mdb__declarative_edt__FinalArgs_21, &mdb__declarative_edt__OutputArg_24);
        }
#line 1089 "declarative_edt.m"
        mdb__declarative_edt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OutputArg_24, (MR_Integer) 0)));
#line 1089 "declarative_edt.m"
        mdb__declarative_edt__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OutputArg_24, (MR_Integer) 1)));
#line 1089 "declarative_edt.m"
        mdb__declarative_edt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__OutputArg_24, (MR_Integer) 2)));
#line 1089 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_40_40)) == (MR_mktag((MR_Integer) 1)));
#line 1089 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1089 "declarative_edt.m"
          {
#line 1089 "declarative_edt.m"
            mdb__declarative_edt__OutputTermRep_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_40_40, (MR_Integer) 0)));
#line 1090 "declarative_edt.m"
            {
#line 1090 "declarative_edt.m"
              mdb__declarative_edt__succeeded = mdbcomp__rtti_access__find_initial_version_arg_num_3_p_0(mdb__declarative_edt__ProcLayout_20, mdb__declarative_edt__OutputArgNum_23, &mdb__declarative_edt__InitialVersionArgNum_28);
            }
#line 1087 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1087 "declarative_edt.m"
              {
#line 1092 "declarative_edt.m"
                {
#line 1092 "declarative_edt.m"
                  mdb__declarative_edt__succeeded = mdb__term_rep__deref_path_3_p_0(mdb__declarative_edt__OutputTermRep_27, mdb__declarative_edt__TermPath_11, &mdb__declarative_edt__OutputSubtermRep_29);
                }
#line 1087 "declarative_edt.m"
                if (mdb__declarative_edt__succeeded)
#line 1087 "declarative_edt.m"
                  {
#line 1093 "declarative_edt.m"
                    {
#line 1093 "declarative_edt.m"
                      mdb__declarative_edt__InitialVersionArgPos_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1093 "declarative_edt.m"
                      MR_hl_field(MR_mktag(1), mdb__declarative_edt__InitialVersionArgPos_30, 0) = ((MR_Box) (mdb__declarative_edt__InitialVersionArgNum_28));
#line 1093 "declarative_edt.m"
                    }
#line 1094 "declarative_edt.m"
                    {
#line 1094 "declarative_edt.m"
                      mdb__declarative_execution__select_arg_at_pos_3_p_0(mdb__declarative_edt__InitialVersionArgPos_30, mdb__declarative_edt__FinalArgs_21, &mdb__declarative_edt__InitialVersionArg_31);
                    }
#line 1096 "declarative_edt.m"
                    mdb__declarative_edt__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__InitialVersionArg_31, (MR_Integer) 0)));
#line 1096 "declarative_edt.m"
                    mdb__declarative_edt__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__InitialVersionArg_31, (MR_Integer) 1)));
#line 1096 "declarative_edt.m"
                    mdb__declarative_edt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__InitialVersionArg_31, (MR_Integer) 2)));
#line 1096 "declarative_edt.m"
                    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_41_41)) == (MR_mktag((MR_Integer) 1)));
#line 1096 "declarative_edt.m"
                    if (mdb__declarative_edt__succeeded)
#line 1096 "declarative_edt.m"
                      {
#line 1096 "declarative_edt.m"
                        mdb__declarative_edt__InitialVersionTermRep_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_41_41, (MR_Integer) 0)));
#line 1097 "declarative_edt.m"
                        {
#line 1097 "declarative_edt.m"
                          mdb__declarative_edt__succeeded = mdb__term_rep__deref_path_3_p_0(mdb__declarative_edt__InitialVersionTermRep_34, mdb__declarative_edt__TermPath_11, &mdb__declarative_edt__InitialVersionSubtermRep_35);
                        }
#line 1087 "declarative_edt.m"
                        if (mdb__declarative_edt__succeeded)
#line 1099 "declarative_edt.m"
                          {
#line 1099 "declarative_edt.m"
                            mdb__declarative_edt__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_edt__InitialVersionSubtermRep_35, mdb__declarative_edt__OutputSubtermRep_29);
                          }
#line 1096 "declarative_edt.m"
                      }
#line 1087 "declarative_edt.m"
                  }
#line 1087 "declarative_edt.m"
              }
#line 1089 "declarative_edt.m"
          }
#line 1102 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1101 "declarative_edt.m"
          {
#line 1101 "declarative_edt.m"
            MR_Word base;
#line 1101 "declarative_edt.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1101 "declarative_edt.m"
            *mdb__declarative_edt__MaybeInitialVersionArgPos_13 = base;
#line 1101 "declarative_edt.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__InitialVersionArgPos_30));
#line 1101 "declarative_edt.m"
          }
#line 1102 "declarative_edt.m"
        else
#line 1103 "declarative_edt.m"
          *mdb__declarative_edt__MaybeInitialVersionArgPos_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1085 "declarative_edt.m"
      }
#line 1105 "declarative_edt.m"
    else
#line 1106 "declarative_edt.m"
      {
#line 1106 "declarative_edt.m"
        *mdb__declarative_edt__MaybeInitialVersionArgPos_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1106 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_TriedProcs_37 = mdb__declarative_edt__STATE_VARIABLE_TriedProcs_0_36;
#line 1106 "declarative_edt.m"
      }
#line 1077 "declarative_edt.m"
  }
#line 1072 "declarative_edt.m"
}

#line 1023 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__resolve_origin_10_p_0(
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50,
#line 1023 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_11,
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_12,
#line 1023 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_13,
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__ArgPos_14,
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TermPath_15,
#line 1023 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_16,
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Output_17,
#line 1023 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34,
#line 1023 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35,
#line 1023 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Response_19)
#line 1023 "declarative_edt.m"
{
#line 1029 "declarative_edt.m"
  {
#line 1029 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1029 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Origin_21;
#line 13386 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__V_20_20;
#line 13388 "mdb.declarative_edt.c"
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 0)), (MR_Integer) 10)));
#line 13390 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv2_V_20_20;
#line 13392 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_Origin_21;

#line 13395 "mdb.declarative_edt.c"
    {
#line 13397 "mdb.declarative_edt.c"
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50), mdb__declarative_edt__Store_11, mdb__declarative_edt__Node_13, ((MR_Box) (mdb__declarative_edt__ArgPos_14)), ((MR_Box) (mdb__declarative_edt__TermPath_15)), &mdb__declarative_edt__conv2_V_20_20, &mdb__declarative_edt__conv1_Origin_21);
    }
#line 13400 "mdb.declarative_edt.c"
    mdb__declarative_edt__V_20_20 = ((MR_Word) mdb__declarative_edt__conv2_V_20_20);
#line 13402 "mdb.declarative_edt.c"
    mdb__declarative_edt__Origin_21 = ((MR_Word) mdb__declarative_edt__conv1_Origin_21);
#line 1035 "declarative_edt.m"
    if ((mdb__declarative_edt__Origin_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1036 "declarative_edt.m"
      {
#line 1037 "declarative_edt.m"
        *mdb__declarative_edt__Response_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1036 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34;
#line 1036 "declarative_edt.m"
      }
#line 1035 "declarative_edt.m"
    else
#line 1035 "declarative_edt.m"
    if ((mdb__declarative_edt__Origin_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 1068 "declarative_edt.m"
      {
#line 1069 "declarative_edt.m"
        *mdb__declarative_edt__Response_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1068 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34;
#line 1068 "declarative_edt.m"
      }
#line 1035 "declarative_edt.m"
    else
#line 1035 "declarative_edt.m"
    if (((MR_tag((MR_Word) mdb__declarative_edt__Origin_21)) == (MR_mktag((MR_Integer) 2))))
#line 1039 "declarative_edt.m"
      {
#line 1039 "declarative_edt.m"
        MR_Word mdb__declarative_edt__InputArgPos_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__Origin_21, (MR_Integer) 0)));
#line 1039 "declarative_edt.m"
        MR_Word mdb__declarative_edt__InputTermPath_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_edt__Origin_21, (MR_Integer) 1)));

#line 1040 "declarative_edt.m"
        {
#line 1040 "declarative_edt.m"
          MR_Word base;
#line 1040 "declarative_edt.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1040 "declarative_edt.m"
          *mdb__declarative_edt__Response_19 = base;
#line 1040 "declarative_edt.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_16));
#line 1040 "declarative_edt.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_edt__InputArgPos_25));
#line 1040 "declarative_edt.m"
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_edt__InputTermPath_26));
#line 1040 "declarative_edt.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1040 "declarative_edt.m"
        }
#line 1039 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34;
#line 1039 "declarative_edt.m"
      }
#line 1035 "declarative_edt.m"
    else
#line 1035 "declarative_edt.m"
    if (((MR_tag((MR_Word) mdb__declarative_edt__Origin_21)) == (MR_mktag((MR_Integer) 1))))
#line 1042 "declarative_edt.m"
      {
#line 1042 "declarative_edt.m"
        MR_Box mdb__declarative_edt__OriginNode_27 = (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Origin_21, (MR_Integer) 0));
#line 1042 "declarative_edt.m"
        MR_Word mdb__declarative_edt__OutputArgPos_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Origin_21, (MR_Integer) 1)));
#line 1042 "declarative_edt.m"
        MR_Word mdb__declarative_edt__OutputTermPath_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__Origin_21, (MR_Integer) 2)));
#line 1042 "declarative_edt.m"
        MR_Box mdb__declarative_edt__ExplicitOrigin_31;
#line 1048 "declarative_edt.m"
        MR_Box mdb__declarative_edt__ExplicitNode_30;
#line 1044 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_52_52;
#line 1044 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_53_53;
#line 1044 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 5)));
#line 1044 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 0)));
#line 1044 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 1)));
#line 1044 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 2)));
#line 1044 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 3)));
#line 1044 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 4)));
#line 1044 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, (MR_Integer) 6)));
#line 1064 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Children_32;
#line 1064 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_37_37;

#line 13498 "mdb.declarative_edt.c"
        {
#line 13500 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_52_52);
        }
#line 13503 "mdb.declarative_edt.c"
        {
#line 13505 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_53_53);
        }
#line 1044 "declarative_edt.m"
        {
#line 1044 "declarative_edt.m"
          mdb__declarative_edt__succeeded = mercury__bimap__search_3_p_0(mdb__declarative_edt__TypeInfo_52_52, mdb__declarative_edt__TypeInfo_53_53, mdb__declarative_edt__V_36_36, mdb__declarative_edt__OriginNode_27, &mdb__declarative_edt__ExplicitNode_30);
        }
#line 1048 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1047 "declarative_edt.m"
          mdb__declarative_edt__ExplicitOrigin_31 = mdb__declarative_edt__ExplicitNode_30;
#line 1048 "declarative_edt.m"
        else
#line 1049 "declarative_edt.m"
          mdb__declarative_edt__ExplicitOrigin_31 = mdb__declarative_edt__OriginNode_27;
#line 1052 "declarative_edt.m"
        {
#line 1052 "declarative_edt.m"
          mdb__declarative_edt__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, mdb__declarative_edt__Store_11, mdb__declarative_edt__Oracle_12, mdb__declarative_edt__SuspectId_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_37_37, &mdb__declarative_edt__Children_32);
        }
#line 1064 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1060 "declarative_edt.m"
          {
#line 1060 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__OriginId_33;
#line 1055 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_55_55;

#line 1060 "declarative_edt.m"
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_37_37;
#line 13537 "mdb.declarative_edt.c"
            {
#line 13539 "mdb.declarative_edt.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_55_55);
            }
#line 1055 "declarative_edt.m"
            {
#line 1055 "declarative_edt.m"
              mdb__declarative_edt__succeeded = mdb__declarative_edt__find_edt_node_in_suspect_list_4_p_0(mdb__declarative_edt__TypeInfo_55_55, mdb__declarative_edt__Children_32, mdb__declarative_edt__ExplicitOrigin_31, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_37_37, &mdb__declarative_edt__OriginId_33);
            }
#line 1060 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1058 "declarative_edt.m"
              {
#line 1058 "declarative_edt.m"
                {
#line 1058 "declarative_edt.m"
                  MR_Word base;
#line 1058 "declarative_edt.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1058 "declarative_edt.m"
                  *mdb__declarative_edt__Response_19 = base;
#line 1058 "declarative_edt.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__OriginId_33));
#line 1058 "declarative_edt.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_edt__OutputArgPos_28));
#line 1058 "declarative_edt.m"
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_edt__OutputTermPath_29));
#line 1058 "declarative_edt.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 1));
#line 1058 "declarative_edt.m"
                }
#line 1058 "declarative_edt.m"
              }
#line 1060 "declarative_edt.m"
            else
#line 1061 "declarative_edt.m"
              {
#line 1061 "declarative_edt.m"
                {
#line 1061 "declarative_edt.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[11])));
#line 1061 "declarative_edt.m"
                  return;
                }
#line 1061 "declarative_edt.m"
              }
#line 1060 "declarative_edt.m"
          }
#line 1064 "declarative_edt.m"
        else
#line 1065 "declarative_edt.m"
          {
#line 1065 "declarative_edt.m"
            *mdb__declarative_edt__Response_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 1065 "declarative_edt.m"
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34;
#line 1065 "declarative_edt.m"
          }
#line 1042 "declarative_edt.m"
      }
#line 1035 "declarative_edt.m"
    else
#line 1032 "declarative_edt.m"
      {
#line 1032 "declarative_edt.m"
        MR_String mdb__declarative_edt__FileName_22 = ((MR_String) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__Origin_21, (MR_Integer) 0)));
#line 1032 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__LineNo_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__Origin_21, (MR_Integer) 1)));
#line 1032 "declarative_edt.m"
        MR_Word mdb__declarative_edt__PrimOpType_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_edt__Origin_21, (MR_Integer) 2)));

#line 1033 "declarative_edt.m"
        {
#line 1033 "declarative_edt.m"
          MR_Word base;
#line 1033 "declarative_edt.m"
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1033 "declarative_edt.m"
          *mdb__declarative_edt__Response_19 = base;
#line 1033 "declarative_edt.m"
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_16));
#line 1033 "declarative_edt.m"
          MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mdb__declarative_edt__FileName_22));
#line 1033 "declarative_edt.m"
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mdb__declarative_edt__LineNo_23));
#line 1033 "declarative_edt.m"
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) ((mdb__declarative_edt__PrimOpType_24 | ((mdb__declarative_edt__Output_17 << (MR_Integer) 2)))));
#line 1033 "declarative_edt.m"
        }
#line 1032 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_34;
#line 1032 "declarative_edt.m"
      }
#line 1029 "declarative_edt.m"
  }
#line 1023 "declarative_edt.m"
}

#line 928 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__suspect_is_leaf_2_p_0(
#line 928 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_19,
#line 928 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 928 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4)
#line 928 "declarative_edt.m"
{
#line 930 "declarative_edt.m"
  {
#line 930 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 930 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_5;
#line 930 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_21_21;
#line 932 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_20_20;
#line 932 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_22_22;
#line 932 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_23_23;
#line 932 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_24_24;
#line 932 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_25_25;

#line 931 "declarative_edt.m"
    {
#line 931 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_19, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_24_24 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
#line 932 "declarative_edt.m"
    mdb__declarative_edt__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
#line 933 "declarative_edt.m"
    if ((mdb__declarative_edt__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 932 "declarative_edt.m"
      mdb__declarative_edt__succeeded = MR_TRUE;
#line 933 "declarative_edt.m"
    else
#line 933 "declarative_edt.m"
      {
#line 933 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_21_21, (MR_Integer) 0)));

#line 933 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_7_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 933 "declarative_edt.m"
      }
#line 930 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 930 "declarative_edt.m"
  }
#line 928 "declarative_edt.m"
}

#line 840 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0_1(
#line 840 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 840 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 840 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 840 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3)
#line 840 "declarative_edt.m"
{
#line 840 "declarative_edt.m"
  {
#line 840 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 840 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12;

#line 840 "declarative_edt.m"
    {
#line 840 "declarative_edt.m"
      mdb__declarative_edt__propagate_status_downwards_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12);
    }
#line 840 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv0_STATE_VARIABLE_SearchSpace_12));
#line 840 "declarative_edt.m"
  }
#line 840 "declarative_edt.m"
}

#line 831 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__assert_suspect_is_valid_4_p_0(
#line 831 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_87,
#line 831 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Status_5,
#line 831 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_6,
#line 831 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
#line 831 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12)
#line 831 "declarative_edt.m"
{
#line 834 "declarative_edt.m"
  {
#line 834 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 834 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_8;
#line 834 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_13_13;
#line 834 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14_14;
#line 834 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20;
#line 834 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_27_27;
#line 834 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28;
#line 834 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_41_41;
#line 834 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_42_42;
#line 834 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_44_44;
#line 834 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_45_45;
#line 834 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_95_95;
#line 834 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_96_96;
#line 836 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_43_43;
#line 836 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_46_46;
#line 839 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_97_97;
#line 839 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_98_98;
#line 839 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_99_99;
#line 839 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_100_100;
#line 852 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_30_30;
#line 852 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_94_94;
#line 852 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_68_68;
#line 852 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_69_69;
#line 852 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_70_70;
#line 852 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_71_71;
#line 852 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_72_72;

#line 835 "declarative_edt.m"
    {
#line 835 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_87, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, mdb__declarative_edt__SuspectId_6, &mdb__declarative_edt__Suspect_8);
    }
#line 836 "declarative_edt.m"
    mdb__declarative_edt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
#line 836 "declarative_edt.m"
    mdb__declarative_edt__V_42_42 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
#line 836 "declarative_edt.m"
    mdb__declarative_edt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
#line 836 "declarative_edt.m"
    mdb__declarative_edt__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
#line 836 "declarative_edt.m"
    mdb__declarative_edt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
#line 836 "declarative_edt.m"
    mdb__declarative_edt__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
#line 836 "declarative_edt.m"
    {
#line 836 "declarative_edt.m"
      mdb__declarative_edt__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 836 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 0) = ((MR_Box) (mdb__declarative_edt__V_41_41));
#line 836 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 1) = mdb__declarative_edt__V_42_42;
#line 836 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 2) = ((MR_Box) (mdb__declarative_edt__Status_5));
#line 836 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 3) = ((MR_Box) (mdb__declarative_edt__V_44_44));
#line 836 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 4) = ((MR_Box) (mdb__declarative_edt__V_45_45));
#line 836 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 5) = ((MR_Box) ((MR_Integer) 0));
#line 836 "declarative_edt.m"
    }
#line 836 "declarative_edt.m"
    {
#line 836 "declarative_edt.m"
      mdb__declarative_edt__set_suspect_4_p_0(mdb__declarative_edt__TypeInfo_for_T_87, mdb__declarative_edt__SuspectId_6, mdb__declarative_edt__V_13_13, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14_14);
    }
#line 839 "declarative_edt.m"
    mdb__declarative_edt__V_100_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
#line 839 "declarative_edt.m"
    mdb__declarative_edt__V_99_99 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
#line 839 "declarative_edt.m"
    mdb__declarative_edt__V_98_98 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
#line 839 "declarative_edt.m"
    mdb__declarative_edt__V_97_97 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
#line 839 "declarative_edt.m"
    mdb__declarative_edt__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
#line 839 "declarative_edt.m"
    mdb__declarative_edt__V_95_95 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
#line 842 "declarative_edt.m"
    if ((mdb__declarative_edt__V_96_96 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 843 "declarative_edt.m"
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14_14;
#line 842 "declarative_edt.m"
    else
#line 839 "declarative_edt.m"
      {
#line 839 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_93_93;
#line 839 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Children_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_96_96, (MR_Integer) 0)));
#line 839 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_19_19;
#line 840 "declarative_edt.m"
        MR_Box mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_20_20;

#line 840 "declarative_edt.m"
        {
#line 840 "declarative_edt.m"
          mdb__declarative_edt__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 840 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_19_19, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_4[2]));
#line 840 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_19_19, 1) = ((MR_Box) (mdb__declarative_edt__assert_suspect_is_valid_4_p_0_1));
#line 840 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 840 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_19_19, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_87));
#line 840 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_19_19, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4))));
#line 840 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_19_19, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[5])));
#line 840 "declarative_edt.m"
        }
#line 13894 "mdb.declarative_edt.c"
        {
#line 13896 "mdb.declarative_edt.c"
          mdb__declarative_edt__TypeInfo_93_93 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 13898 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_93_93, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
#line 13900 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_93_93, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_87));
#line 13902 "mdb.declarative_edt.c"
        }
#line 840 "declarative_edt.m"
        {
#line 840 "declarative_edt.m"
          mercury__list__foldl_4_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_93_93, mdb__declarative_edt__V_19_19, mdb__declarative_edt__Children_9, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14_14)), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_20_20);
        }
#line 840 "declarative_edt.m"
        mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20 = ((MR_Word) mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_20_20);
#line 839 "declarative_edt.m"
      }
#line 847 "declarative_edt.m"
    mdb__declarative_edt__V_27_27 = ((MR_Integer) 0 - mdb__declarative_edt__V_95_95);
#line 847 "declarative_edt.m"
    {
#line 847 "declarative_edt.m"
      mdb__declarative_edt__add_weight_to_ancestors_4_p_0(mdb__declarative_edt__TypeInfo_for_T_87, mdb__declarative_edt__SuspectId_6, mdb__declarative_edt__V_27_27, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28);
    }
#line 852 "declarative_edt.m"
    mdb__declarative_edt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
#line 852 "declarative_edt.m"
    mdb__declarative_edt__V_69_69 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
#line 852 "declarative_edt.m"
    mdb__declarative_edt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
#line 852 "declarative_edt.m"
    mdb__declarative_edt__V_70_70 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
#line 852 "declarative_edt.m"
    mdb__declarative_edt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
#line 852 "declarative_edt.m"
    mdb__declarative_edt__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
#line 852 "declarative_edt.m"
    {
#line 852 "declarative_edt.m"
      mdb__declarative_edt__excluded_complement_2_p_0(mdb__declarative_edt__V_30_30, &mdb__declarative_edt__V_94_94);
    }
#line 852 "declarative_edt.m"
    mdb__declarative_edt__succeeded = ((MR_Integer) 1 == mdb__declarative_edt__V_94_94);
#line 862 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 854 "declarative_edt.m"
      {
#line 854 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__Lowest_10;
#line 854 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34;
#line 854 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_101_101;
#line 854 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_102_102;
#line 854 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_103_103;
#line 854 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_104_104;
#line 854 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_105_105;
#line 854 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_106_106;
#line 858 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_107_107;

#line 853 "declarative_edt.m"
        {
#line 853 "declarative_edt.m"
          mdb__declarative_edt__propagate_status_upwards_6_p_0(mdb__declarative_edt__TypeInfo_for_T_87, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[10]), mdb__declarative_edt__SuspectId_6, &mdb__declarative_edt__Lowest_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34);
        }
#line 858 "declarative_edt.m"
        mdb__declarative_edt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 0)));
#line 858 "declarative_edt.m"
        mdb__declarative_edt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 1)));
#line 858 "declarative_edt.m"
        mdb__declarative_edt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 2)));
#line 858 "declarative_edt.m"
        mdb__declarative_edt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 3)));
#line 858 "declarative_edt.m"
        mdb__declarative_edt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 4)));
#line 858 "declarative_edt.m"
        mdb__declarative_edt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 5)));
#line 858 "declarative_edt.m"
        mdb__declarative_edt__V_101_101 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, (MR_Integer) 6)));
#line 857 "declarative_edt.m"
        {
#line 857 "declarative_edt.m"
          mdb__declarative_edt__succeeded = mdb__declarative_edt__suspect_erroneous_2_p_0(mdb__declarative_edt__TypeInfo_for_T_87, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_34_34, mdb__declarative_edt__Lowest_10);
        }
#line 859 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 858 "declarative_edt.m"
          {
#line 858 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_38_38;

#line 858 "declarative_edt.m"
            {
#line 858 "declarative_edt.m"
              mdb__declarative_edt__V_38_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 858 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_38_38, 0) = ((MR_Box) (mdb__declarative_edt__Lowest_10));
#line 858 "declarative_edt.m"
            }
#line 858 "declarative_edt.m"
            {
#line 858 "declarative_edt.m"
              MR_Word base;
#line 858 "declarative_edt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 858 "declarative_edt.m"
              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12 = base;
#line 858 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__V_38_38));
#line 858 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__V_106_106));
#line 858 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__V_105_105));
#line 858 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__V_104_104));
#line 858 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__V_103_103));
#line 858 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__V_102_102));
#line 858 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__V_101_101));
#line 858 "declarative_edt.m"
            }
#line 858 "declarative_edt.m"
          }
#line 859 "declarative_edt.m"
        else
#line 860 "declarative_edt.m"
          {
#line 860 "declarative_edt.m"
            {
#line 860 "declarative_edt.m"
              MR_Word base;
#line 860 "declarative_edt.m"
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 860 "declarative_edt.m"
              *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12 = base;
#line 860 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 860 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__V_106_106));
#line 860 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__V_105_105));
#line 860 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__V_104_104));
#line 860 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__V_103_103));
#line 860 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__V_102_102));
#line 860 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__V_101_101));
#line 860 "declarative_edt.m"
            }
#line 860 "declarative_edt.m"
          }
#line 854 "declarative_edt.m"
      }
#line 862 "declarative_edt.m"
    else
#line 862 "declarative_edt.m"
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_28_28;
#line 834 "declarative_edt.m"
  }
#line 831 "declarative_edt.m"
}

#line 813 "declarative_edt.m"
static MR_Word MR_CALL 
mdb__declarative_edt__new_parent_status_1_f_0(
#line 813 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1)
#line 813 "declarative_edt.m"
{
#line 815 "declarative_edt.m"
  {
#line 815 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 815 "declarative_edt.m"
    MR_Word mdb__declarative_edt__HeadVar__2_2;

#line 815 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 817 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 815 "declarative_edt.m"
    else
#line 815 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 818 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 815 "declarative_edt.m"
    else
#line 815 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 815 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 815 "declarative_edt.m"
    else
#line 815 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 822 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 815 "declarative_edt.m"
    else
#line 815 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 819 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 815 "declarative_edt.m"
    else
#line 815 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 820 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 815 "declarative_edt.m"
    else
#line 815 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 823 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 815 "declarative_edt.m"
    else
#line 816 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 815 "declarative_edt.m"
    return mdb__declarative_edt__HeadVar__2_2;
#line 815 "declarative_edt.m"
  }
#line 813 "declarative_edt.m"
}

#line 797 "declarative_edt.m"
static MR_Word MR_CALL 
mdb__declarative_edt__new_child_status_1_f_0(
#line 797 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1)
#line 797 "declarative_edt.m"
{
#line 799 "declarative_edt.m"
  {
#line 799 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 799 "declarative_edt.m"
    MR_Word mdb__declarative_edt__HeadVar__2_2;

#line 799 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 801 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 799 "declarative_edt.m"
    else
#line 799 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 802 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 799 "declarative_edt.m"
    else
#line 799 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 799 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 799 "declarative_edt.m"
    else
#line 799 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 806 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 799 "declarative_edt.m"
    else
#line 799 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 803 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 799 "declarative_edt.m"
    else
#line 799 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 804 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 799 "declarative_edt.m"
    else
#line 799 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 807 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 799 "declarative_edt.m"
    else
#line 800 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 799 "declarative_edt.m"
    return mdb__declarative_edt__HeadVar__2_2;
#line 799 "declarative_edt.m"
  }
#line 797 "declarative_edt.m"
}

#line 768 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__excluded_complement_2_p_0(
#line 768 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1,
#line 768 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__2_2)
#line 768 "declarative_edt.m"
{
#line 770 "declarative_edt.m"
  {
#line 770 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;

#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 772 "declarative_edt.m"
      *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 773 "declarative_edt.m"
      *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 1;
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "declarative_edt.m"
      *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 776 "declarative_edt.m"
      *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 1;
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 774 "declarative_edt.m"
      *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 775 "declarative_edt.m"
      *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 777 "declarative_edt.m"
      *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
#line 770 "declarative_edt.m"
    else
#line 771 "declarative_edt.m"
      *mdb__declarative_edt__HeadVar__2_2 = (MR_Integer) 0;
#line 770 "declarative_edt.m"
  }
#line 768 "declarative_edt.m"
}

#line 564 "declarative_edt.m"
MR_Word MR_CALL 
mdb__declarative_edt__get_current_maybe_weighting_1_f_0(
#line 564 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_10,
#line 564 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3)
#line 564 "declarative_edt.m"
{
#line 2040 "declarative_edt.m"
  {
#line 2040 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 2040 "declarative_edt.m"
    MR_Word mdb__declarative_edt__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 6)));
#line 2040 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 0)));
#line 2040 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 1)));
#line 2040 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 2)));
#line 2040 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 3)));
#line 2040 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 4)));
#line 2040 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 5)));

#line 2040 "declarative_edt.m"
    return mdb__declarative_edt__HeadVar__2_2;
#line 2040 "declarative_edt.m"
  }
#line 564 "declarative_edt.m"
}

#line 2025 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__update_weighting_heuristic_4_p_0_1(
#line 2025 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 2025 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1)
#line 2025 "declarative_edt.m"
{
#line 2025 "declarative_edt.m"
  {
#line 2025 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 2025 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

#line 2025 "declarative_edt.m"
    {
#line 2025 "declarative_edt.m"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__update_weighting_heuristic__2025__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
#line 2025 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 2025 "declarative_edt.m"
  }
#line 2025 "declarative_edt.m"
}

#line 558 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__update_weighting_heuristic_4_p_0(
#line 558 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46,
#line 558 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_5,
#line 558 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Weighting_6,
#line 558 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13,
#line 558 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14)
#line 558 "declarative_edt.m"
{
#line 2011 "declarative_edt.m"
  {
#line 2011 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 2011 "declarative_edt.m"
    MR_Word mdb__declarative_edt__MaybePrevWeighting_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 6)));
#line 2012 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 0)));
#line 2012 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 1)));
#line 2012 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 2)));
#line 2012 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 3)));
#line 2012 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 4)));
#line 2012 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 5)));
#line 2014 "declarative_edt.m"
    MR_Word mdb__declarative_edt__PrevWeighting_9;

#line 2014 "declarative_edt.m"
    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__MaybePrevWeighting_8)) == (MR_mktag((MR_Integer) 1)));
#line 2014 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 2014 "declarative_edt.m"
      {
#line 2014 "declarative_edt.m"
        mdb__declarative_edt__PrevWeighting_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__MaybePrevWeighting_8, (MR_Integer) 0)));
#line 2015 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__PrevWeighting_9 == mdb__declarative_edt__Weighting_6);
#line 2014 "declarative_edt.m"
      }
#line 2018 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 2018 "declarative_edt.m"
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13;
#line 2018 "declarative_edt.m"
    else
#line 2019 "declarative_edt.m"
      {
#line 2019 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15;
#line 2019 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_16_16;
#line 2019 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_27_27;
#line 2019 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_28_28;
#line 2019 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_29_29;
#line 2019 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_30_30;
#line 2019 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_31_31;
#line 2019 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_32_32;
#line 2019 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_33_33;
#line 2020 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_49_49;
#line 2020 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_51_51;
#line 2020 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_17_17;
#line 2020 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_34_34;
#line 2020 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_35_35;
#line 2020 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_36_36;
#line 2020 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_37_37;
#line 2020 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_38_38;
#line 2020 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_39_39;

#line 2019 "declarative_edt.m"
        {
#line 2019 "declarative_edt.m"
          mdb__declarative_edt__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 2019 "declarative_edt.m"
          MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_16_16, 0) = ((MR_Box) (mdb__declarative_edt__Weighting_6));
#line 2019 "declarative_edt.m"
        }
#line 2019 "declarative_edt.m"
        mdb__declarative_edt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 0)));
#line 2019 "declarative_edt.m"
        mdb__declarative_edt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 1)));
#line 2019 "declarative_edt.m"
        mdb__declarative_edt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 2)));
#line 2019 "declarative_edt.m"
        mdb__declarative_edt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 3)));
#line 2019 "declarative_edt.m"
        mdb__declarative_edt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 4)));
#line 2019 "declarative_edt.m"
        mdb__declarative_edt__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 5)));
#line 2019 "declarative_edt.m"
        mdb__declarative_edt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, (MR_Integer) 6)));
#line 2019 "declarative_edt.m"
        {
#line 2019 "declarative_edt.m"
          mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 2019 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 0) = ((MR_Box) (mdb__declarative_edt__V_27_27));
#line 2019 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 1) = ((MR_Box) (mdb__declarative_edt__V_28_28));
#line 2019 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 2) = ((MR_Box) (mdb__declarative_edt__V_29_29));
#line 2019 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 3) = ((MR_Box) (mdb__declarative_edt__V_30_30));
#line 2019 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 4) = ((MR_Box) (mdb__declarative_edt__V_31_31));
#line 2019 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 5) = ((MR_Box) (mdb__declarative_edt__V_32_32));
#line 2019 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, 6) = ((MR_Box) (mdb__declarative_edt__V_16_16));
#line 2019 "declarative_edt.m"
        }
#line 2020 "declarative_edt.m"
        mdb__declarative_edt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 0)));
#line 2020 "declarative_edt.m"
        mdb__declarative_edt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1)));
#line 2020 "declarative_edt.m"
        mdb__declarative_edt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2)));
#line 2020 "declarative_edt.m"
        mdb__declarative_edt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3)));
#line 2020 "declarative_edt.m"
        mdb__declarative_edt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4)));
#line 2020 "declarative_edt.m"
        mdb__declarative_edt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5)));
#line 2020 "declarative_edt.m"
        mdb__declarative_edt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6)));
#line 14473 "mdb.declarative_edt.c"
        {
#line 14475 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_49_49);
        }
#line 14478 "mdb.declarative_edt.c"
        {
#line 14480 "mdb.declarative_edt.c"
          mdb__declarative_edt__TypeInfo_51_51 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14482 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_51_51, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 14484 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_51_51, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_49_49));
#line 14486 "mdb.declarative_edt.c"
        }
#line 2020 "declarative_edt.m"
        {
#line 2020 "declarative_edt.m"
          mdb__declarative_edt__succeeded = mercury__map__is_empty_1_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_51_51, (MR_Word) mdb__declarative_edt__V_17_17);
        }
#line 2022 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 2022 "declarative_edt.m"
          *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15;
#line 2022 "declarative_edt.m"
        else
#line 2024 "declarative_edt.m"
          {
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeCtorInfo_52_52 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_54_54;
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_56_56;
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__TypeInfo_60_60;
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__AllSuspects_10;
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__Leaves_11;
#line 2024 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__TopId_12;
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4)));
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_19_19;
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 0)));
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1)));
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2)));
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3)));
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_44_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5)));
#line 2024 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6)));

#line 14532 "mdb.declarative_edt.c"
            {
#line 14534 "mdb.declarative_edt.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_54_54);
            }
#line 14537 "mdb.declarative_edt.c"
            {
#line 14539 "mdb.declarative_edt.c"
              mdb__declarative_edt__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 14541 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_56_56, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 14543 "mdb.declarative_edt.c"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_56_56, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_54_54));
#line 14545 "mdb.declarative_edt.c"
            }
#line 2024 "declarative_edt.m"
            {
#line 2024 "declarative_edt.m"
              mercury__map__keys_2_p_0(mdb__declarative_edt__TypeCtorInfo_52_52, mdb__declarative_edt__TypeInfo_56_56, (MR_Word) mdb__declarative_edt__V_18_18, &mdb__declarative_edt__AllSuspects_10);
            }
#line 2025 "declarative_edt.m"
            {
#line 2025 "declarative_edt.m"
              mdb__declarative_edt__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 2025 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_19_19, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[0]));
#line 2025 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_19_19, 1) = ((MR_Box) (mdb__declarative_edt__update_weighting_heuristic_4_p_0_1));
#line 2025 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_19_19, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 2025 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_19_19, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46));
#line 2025 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_19_19, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15));
#line 2025 "declarative_edt.m"
            }
#line 2025 "declarative_edt.m"
            {
#line 2025 "declarative_edt.m"
              mercury__list__filter_3_p_0(mdb__declarative_edt__TypeCtorInfo_52_52, mdb__declarative_edt__V_19_19, mdb__declarative_edt__AllSuspects_10, &mdb__declarative_edt__Leaves_11);
            }
#line 14573 "mdb.declarative_edt.c"
            {
#line 14575 "mdb.declarative_edt.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_60_60);
            }
#line 2027 "declarative_edt.m"
            {
#line 2027 "declarative_edt.m"
              mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_60_60, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, &mdb__declarative_edt__TopId_12);
            }
#line 2028 "declarative_edt.m"
            {
#line 2028 "declarative_edt.m"
              mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_46, mdb__declarative_edt__Store_5, mdb__declarative_edt__TopId_12, mdb__declarative_edt__Leaves_11, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14);
#line 2028 "declarative_edt.m"
              return;
            }
#line 2024 "declarative_edt.m"
          }
#line 2019 "declarative_edt.m"
      }
#line 2011 "declarative_edt.m"
  }
#line 558 "declarative_edt.m"
}

#line 547 "declarative_edt.m"
MR_Word MR_CALL 
mdb__declarative_edt__get_proc_label_for_suspect_3_f_0(
#line 547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_9,
#line 547 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_5,
#line 547 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_6,
#line 547 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_7)
#line 547 "declarative_edt.m"
{
#line 2008 "declarative_edt.m"
  {
#line 2008 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 2008 "declarative_edt.m"
    MR_Word mdb__declarative_edt__HeadVar__4_4;
#line 2008 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_11_11;
#line 2008 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_8_8;
#line 2008 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_15;
#line 1776 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_16_16;
#line 1776 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_17_17;
#line 1776 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_18_18;
#line 1776 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_19_19;
#line 1776 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_20_20;
#line 14634 "mdb.declarative_edt.c"
    MR_Box MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box);
#line 14636 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

#line 14639 "mdb.declarative_edt.c"
    {
#line 14641 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_9, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_11_11);
    }
#line 1775 "declarative_edt.m"
    {
#line 1775 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_11_11, mdb__declarative_edt__SearchSpace_6, mdb__declarative_edt__SuspectId_7, &mdb__declarative_edt__Suspect_15);
    }
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 0)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 1));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 2)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 3)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 4)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_15, (MR_Integer) 5)));
#line 14661 "mdb.declarative_edt.c"
    mdb__declarative_edt__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_9, (MR_Integer) 0)), (MR_Integer) 18)));
#line 14663 "mdb.declarative_edt.c"
    {
#line 14665 "mdb.declarative_edt.c"
      mdb__declarative_edt__conv1_HeadVar__4_4 = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_9), mdb__declarative_edt__Store_5, mdb__declarative_edt__V_8_8);
    }
#line 14668 "mdb.declarative_edt.c"
    mdb__declarative_edt__HeadVar__4_4 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__4_4);
#line 2008 "declarative_edt.m"
    return mdb__declarative_edt__HeadVar__4_4;
#line 2008 "declarative_edt.m"
  }
#line 547 "declarative_edt.m"
}

#line 542 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0(
#line 542 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7,
#line 542 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_4,
#line 542 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_5,
#line 542 "declarative_edt.m"
  MR_String mdb__declarative_edt__Context_6)
#line 542 "declarative_edt.m"
{
#line 1234 "declarative_edt.m"
  {
#line 1234 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;

#line 1257 "declarative_edt.m"
{
#define MR_PROC_LABEL mdb__declarative_edt__maybe_check_search_space_consistency_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 1257 "declarative_edt.m"

    #ifdef MR_DD_CHECK_SEARCH_SPACE
        SUCCESS_INDICATOR = MR_TRUE;
    #else
        SUCCESS_INDICATOR = MR_FALSE;
    #endif

#line 14710 "mdb.declarative_edt.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 1257 "declarative_edt.m"
	}
mdb__declarative_edt__succeeded  = SUCCESS_INDICATOR;
}
#line 1234 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1248 "declarative_edt.m"
      {
#line 1248 "declarative_edt.m"
        MR_String mdb__declarative_edt__Message_12;
#line 1243 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 6)));
#line 1243 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 0)));
#line 1243 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 1)));
#line 1243 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 2)));
#line 1243 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 3)));
#line 1243 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 4)));
#line 1243 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 5)));
#line 1243 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_11_11;
#line 1449 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__RootId_29;
#line 1447 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__PolyConst2_31;
#line 1447 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_37_37;
#line 14747 "mdb.declarative_edt.c"
        MR_Word mdb__declarative_edt__TypeInfo_11_32;
#line 670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_38_38;
#line 670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_39_39;
#line 670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_40_40;
#line 670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_41_41;
#line 670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_42_42;
#line 670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_43_43;

#line 1243 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_13_13)) == (MR_mktag((MR_Integer) 1)));
#line 1243 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1243 "declarative_edt.m"
          {
#line 1243 "declarative_edt.m"
            mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_13_13, (MR_Integer) 0)));
#line 14770 "mdb.declarative_edt.c"
            mdb__declarative_edt__PolyConst2_31 = (MR_Integer) 2;
#line 14772 "mdb.declarative_edt.c"
            {
#line 14774 "mdb.declarative_edt.c"
              mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7, mdb__declarative_edt__PolyConst2_31, &mdb__declarative_edt__TypeInfo_11_32);
            }
#line 670 "declarative_edt.m"
            mdb__declarative_edt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 0)));
#line 670 "declarative_edt.m"
            mdb__declarative_edt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 1)));
#line 670 "declarative_edt.m"
            mdb__declarative_edt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 2)));
#line 670 "declarative_edt.m"
            mdb__declarative_edt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 3)));
#line 670 "declarative_edt.m"
            mdb__declarative_edt__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 4)));
#line 670 "declarative_edt.m"
            mdb__declarative_edt__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 5)));
#line 670 "declarative_edt.m"
            mdb__declarative_edt__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_5, (MR_Integer) 6)));
#line 670 "declarative_edt.m"
            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_37_37)) == (MR_mktag((MR_Integer) 1)));
#line 670 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 670 "declarative_edt.m"
              {
#line 670 "declarative_edt.m"
                mdb__declarative_edt__RootId_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_37_37, (MR_Integer) 0)));
#line 1448 "declarative_edt.m"
                {
#line 1448 "declarative_edt.m"
                  mdb__declarative_edt__succeeded = mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7, mdb__declarative_edt__Store_4, mdb__declarative_edt__SearchSpace_5, mdb__declarative_edt__RootId_29, &mdb__declarative_edt__Message_12);
                }
#line 670 "declarative_edt.m"
              }
#line 670 "declarative_edt.m"
            else
#line 1450 "declarative_edt.m"
              {
#line 1450 "declarative_edt.m"
                MR_Word mdb__declarative_edt__TypeInfo_13_34;
#line 1450 "declarative_edt.m"
                MR_Integer mdb__declarative_edt__TopMostId_30;

#line 14815 "mdb.declarative_edt.c"
                {
#line 14817 "mdb.declarative_edt.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_13_34);
                }
#line 1450 "declarative_edt.m"
                {
#line 1450 "declarative_edt.m"
                  mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_13_34, mdb__declarative_edt__SearchSpace_5, &mdb__declarative_edt__TopMostId_30);
                }
#line 1451 "declarative_edt.m"
                {
#line 1451 "declarative_edt.m"
                  mdb__declarative_edt__succeeded = mdb__declarative_edt__find_inconsistency_in_weights_2_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7, mdb__declarative_edt__Store_4, mdb__declarative_edt__SearchSpace_5, mdb__declarative_edt__TopMostId_30, &mdb__declarative_edt__Message_12);
                }
#line 1450 "declarative_edt.m"
              }
#line 1243 "declarative_edt.m"
          }
#line 1248 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1246 "declarative_edt.m"
          {
#line 1246 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_14_14;
#line 1246 "declarative_edt.m"
            MR_String mdb__declarative_edt__V_16_16;
#line 1246 "declarative_edt.m"
            MR_String mdb__declarative_edt__V_17_17;

#line 1247 "declarative_edt.m"
            {
#line 1247 "declarative_edt.m"
              mdb__declarative_edt__V_17_17 = mercury__string__f_43_43_2_f_0((MR_String) "\n Context = ", mdb__declarative_edt__Context_6);
            }
#line 1247 "declarative_edt.m"
            {
#line 1247 "declarative_edt.m"
              mdb__declarative_edt__V_16_16 = mercury__string__f_43_43_2_f_0(mdb__declarative_edt__Message_12, mdb__declarative_edt__V_17_17);
            }
#line 1246 "declarative_edt.m"
            {
#line 1246 "declarative_edt.m"
              mdb__declarative_edt__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1246 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_14_14, 0) = ((MR_Box) ((MR_String) "check_search_space_consistency"));
#line 1246 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_14_14, 1) = ((MR_Box) (mdb__declarative_edt__V_16_16));
#line 1246 "declarative_edt.m"
            }
#line 1246 "declarative_edt.m"
            {
#line 1246 "declarative_edt.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_edt__V_14_14)));
#line 1246 "declarative_edt.m"
              return;
            }
#line 1246 "declarative_edt.m"
          }
#line 1248 "declarative_edt.m"
        else
#line 1249 "declarative_edt.m"
          {
#line 1249 "declarative_edt.m"
          }
#line 1248 "declarative_edt.m"
      }
#line 1234 "declarative_edt.m"
    else
#line 1235 "declarative_edt.m"
      {
#line 1235 "declarative_edt.m"
      }
#line 1234 "declarative_edt.m"
  }
#line 542 "declarative_edt.m"
}

#line 918 "declarative_edt.m"
static MR_bool MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_2(
#line 918 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 918 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1)
#line 918 "declarative_edt.m"
{
#line 918 "declarative_edt.m"
  {
#line 918 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 918 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;

#line 918 "declarative_edt.m"
    {
#line 918 "declarative_edt.m"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__IntroducedFrom__pred__revise_root__918__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1));
    }
#line 918 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 918 "declarative_edt.m"
  }
#line 918 "declarative_edt.m"
}

#line 904 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__revise_root_3_p_0_1(
#line 904 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 904 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 904 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 904 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_3)
#line 904 "declarative_edt.m"
{
#line 904 "declarative_edt.m"
  {
#line 904 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 904 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv0_HeadVar__6_86;

#line 904 "declarative_edt.m"
    {
#line 904 "declarative_edt.m"
      mdb__declarative_edt__IntroducedFrom__pred__revise_root__904__1_6_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 5))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), &mdb__declarative_edt__conv0_HeadVar__6_86);
    }
#line 904 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_3 = ((MR_Box) (mdb__declarative_edt__conv0_HeadVar__6_86));
#line 904 "declarative_edt.m"
  }
#line 904 "declarative_edt.m"
}

#line 535 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__revise_root_3_p_0(
#line 535 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81,
#line 535 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_4,
#line 535 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
#line 535 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12)
#line 535 "declarative_edt.m"
{
#line 900 "declarative_edt.m"
  {
#line 900 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 900 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_108_108 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0)));
#line 900 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_102_102 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6)));
#line 900 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_103_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5)));
#line 900 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_104_104 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4)));
#line 900 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_105_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3)));
#line 900 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_106_106 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2)));
#line 900 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1)));

#line 900 "declarative_edt.m"
    if ((mdb__declarative_edt__V_108_108 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 921 "declarative_edt.m"
      {
#line 922 "declarative_edt.m"
        {
#line 922 "declarative_edt.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[9])));
#line 922 "declarative_edt.m"
          return;
        }
#line 921 "declarative_edt.m"
      }
#line 900 "declarative_edt.m"
    else
#line 900 "declarative_edt.m"
      {
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_83_83;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeCtorInfo_89_89;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_90_90;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_92_92;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_93_93;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_95_95;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_97_97;
#line 900 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__RootId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_108_108, (MR_Integer) 0)));
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__StopSuspects_7;
#line 900 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__Lowest_8;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__AllSuspects_9;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Leaves_10;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_25_25;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_46_46;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_47_47;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_109_109;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_110_110;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_111_111;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_112_112;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_113_113;
#line 900 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_114_114;
#line 904 "declarative_edt.m"
        MR_Box mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_26_26;
#line 911 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_115_115;
#line 910 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_94_94;
#line 917 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_69_69;
#line 917 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_70_70;
#line 917 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_71_71;
#line 917 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_72_72;
#line 917 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_73_73;
#line 917 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_74_74;

#line 15071 "mdb.declarative_edt.c"
        {
#line 15073 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_83_83);
        }
#line 901 "declarative_edt.m"
        {
#line 901 "declarative_edt.m"
          mdb__declarative_edt__force_propagate_status_downwards_6_p_0(mdb__declarative_edt__TypeInfo_83_83, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[5]), mdb__declarative_edt__RootId_6, &mdb__declarative_edt__StopSuspects_7, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20);
        }
#line 904 "declarative_edt.m"
        {
#line 904 "declarative_edt.m"
          mdb__declarative_edt__V_25_25 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 904 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_25_25, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_4[1]));
#line 904 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_25_25, 1) = ((MR_Box) (mdb__declarative_edt__revise_root_3_p_0_1));
#line 904 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_25_25, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 904 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_25_25, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81));
#line 904 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_25_25, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 904 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_25_25, 5) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[5])));
#line 904 "declarative_edt.m"
        }
#line 15099 "mdb.declarative_edt.c"
        mdb__declarative_edt__TypeCtorInfo_89_89 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 15101 "mdb.declarative_edt.c"
        {
#line 15103 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_90_90);
        }
#line 15106 "mdb.declarative_edt.c"
        {
#line 15108 "mdb.declarative_edt.c"
          mdb__declarative_edt__TypeInfo_92_92 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15110 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_92_92, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1));
#line 15112 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_92_92, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_90_90));
#line 15114 "mdb.declarative_edt.c"
        }
#line 904 "declarative_edt.m"
        {
#line 904 "declarative_edt.m"
          mercury__list__foldl_4_p_0(mdb__declarative_edt__TypeCtorInfo_89_89, mdb__declarative_edt__TypeInfo_92_92, (MR_Word) mdb__declarative_edt__V_25_25, mdb__declarative_edt__StopSuspects_7, ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_20_20)), &mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_26_26);
        }
#line 904 "declarative_edt.m"
        mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26 = ((MR_Word) mdb__declarative_edt__conv1_STATE_VARIABLE_SearchSpace_26_26);
#line 15123 "mdb.declarative_edt.c"
        {
#line 15125 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_93_93);
        }
#line 907 "declarative_edt.m"
        {
#line 907 "declarative_edt.m"
          mdb__declarative_edt__propagate_status_upwards_6_p_0(mdb__declarative_edt__TypeInfo_93_93, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)), (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[6]), mdb__declarative_edt__RootId_6, &mdb__declarative_edt__Lowest_8, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35);
        }
#line 911 "declarative_edt.m"
        mdb__declarative_edt__V_115_115 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 0)));
#line 911 "declarative_edt.m"
        mdb__declarative_edt__V_114_114 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 1)));
#line 911 "declarative_edt.m"
        mdb__declarative_edt__V_113_113 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 2)));
#line 911 "declarative_edt.m"
        mdb__declarative_edt__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 3)));
#line 911 "declarative_edt.m"
        mdb__declarative_edt__V_111_111 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 4)));
#line 911 "declarative_edt.m"
        mdb__declarative_edt__V_110_110 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 5)));
#line 911 "declarative_edt.m"
        mdb__declarative_edt__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, (MR_Integer) 6)));
#line 15147 "mdb.declarative_edt.c"
        {
#line 15149 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_94_94);
        }
#line 910 "declarative_edt.m"
        {
#line 910 "declarative_edt.m"
          mdb__declarative_edt__succeeded = mdb__declarative_edt__suspect_erroneous_2_p_0(mdb__declarative_edt__TypeInfo_94_94, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_35_35, mdb__declarative_edt__Lowest_8);
        }
#line 912 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 911 "declarative_edt.m"
          {
#line 911 "declarative_edt.m"
            MR_Word mdb__declarative_edt__V_43_43;

#line 911 "declarative_edt.m"
            {
#line 911 "declarative_edt.m"
              mdb__declarative_edt__V_43_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 911 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_43_43, 0) = ((MR_Box) (mdb__declarative_edt__Lowest_8));
#line 911 "declarative_edt.m"
            }
#line 911 "declarative_edt.m"
            {
#line 911 "declarative_edt.m"
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 911 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 0) = ((MR_Box) (mdb__declarative_edt__V_43_43));
#line 911 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 1) = ((MR_Box) (mdb__declarative_edt__V_114_114));
#line 911 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 2) = ((MR_Box) (mdb__declarative_edt__V_113_113));
#line 911 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 3) = ((MR_Box) (mdb__declarative_edt__V_112_112));
#line 911 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 4) = ((MR_Box) (mdb__declarative_edt__V_111_111));
#line 911 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 5) = ((MR_Box) (mdb__declarative_edt__V_110_110));
#line 911 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 6) = ((MR_Box) (mdb__declarative_edt__V_109_109));
#line 911 "declarative_edt.m"
            }
#line 911 "declarative_edt.m"
          }
#line 912 "declarative_edt.m"
        else
#line 913 "declarative_edt.m"
          {
#line 913 "declarative_edt.m"
            {
#line 913 "declarative_edt.m"
              mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 913 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 913 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 1) = ((MR_Box) (mdb__declarative_edt__V_114_114));
#line 913 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 2) = ((MR_Box) (mdb__declarative_edt__V_113_113));
#line 913 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 3) = ((MR_Box) (mdb__declarative_edt__V_112_112));
#line 913 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 4) = ((MR_Box) (mdb__declarative_edt__V_111_111));
#line 913 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 5) = ((MR_Box) (mdb__declarative_edt__V_110_110));
#line 913 "declarative_edt.m"
              MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, 6) = ((MR_Box) (mdb__declarative_edt__V_109_109));
#line 913 "declarative_edt.m"
            }
#line 913 "declarative_edt.m"
          }
#line 917 "declarative_edt.m"
        mdb__declarative_edt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 0)));
#line 917 "declarative_edt.m"
        mdb__declarative_edt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 1)));
#line 917 "declarative_edt.m"
        mdb__declarative_edt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 2)));
#line 917 "declarative_edt.m"
        mdb__declarative_edt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 3)));
#line 917 "declarative_edt.m"
        mdb__declarative_edt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 4)));
#line 917 "declarative_edt.m"
        mdb__declarative_edt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 5)));
#line 917 "declarative_edt.m"
        mdb__declarative_edt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, (MR_Integer) 6)));
#line 15234 "mdb.declarative_edt.c"
        {
#line 15236 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_95_95);
        }
#line 15239 "mdb.declarative_edt.c"
        {
#line 15241 "mdb.declarative_edt.c"
          mdb__declarative_edt__TypeInfo_97_97 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15243 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_97_97, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 15245 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_97_97, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_95_95));
#line 15247 "mdb.declarative_edt.c"
        }
#line 917 "declarative_edt.m"
        {
#line 917 "declarative_edt.m"
          mercury__map__keys_2_p_0(mdb__declarative_edt__TypeCtorInfo_89_89, mdb__declarative_edt__TypeInfo_97_97, (MR_Word) mdb__declarative_edt__V_46_46, &mdb__declarative_edt__AllSuspects_9);
        }
#line 918 "declarative_edt.m"
        {
#line 918 "declarative_edt.m"
          mdb__declarative_edt__V_47_47 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 918 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_47_47, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_6[0]));
#line 918 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_47_47, 1) = ((MR_Box) (mdb__declarative_edt__revise_root_3_p_0_2));
#line 918 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_47_47, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 918 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_47_47, 3) = ((MR_Box) (mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81));
#line 918 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_47_47, 4) = ((MR_Box) (mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42));
#line 918 "declarative_edt.m"
        }
#line 918 "declarative_edt.m"
        {
#line 918 "declarative_edt.m"
          mercury__list__filter_3_p_0(mdb__declarative_edt__TypeCtorInfo_89_89, mdb__declarative_edt__V_47_47, mdb__declarative_edt__AllSuspects_9, &mdb__declarative_edt__Leaves_10);
        }
#line 919 "declarative_edt.m"
        {
#line 919 "declarative_edt.m"
          mdb__declarative_edt__recalc_weights_upto_ancestor_5_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_81, mdb__declarative_edt__Store_4, mdb__declarative_edt__Lowest_8, mdb__declarative_edt__Leaves_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_42_42, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);
#line 919 "declarative_edt.m"
          return;
        }
#line 900 "declarative_edt.m"
      }
#line 900 "declarative_edt.m"
  }
#line 535 "declarative_edt.m"
}

#line 529 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__give_up_subterm_tracking_3_p_0(
#line 529 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_8,
#line 529 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_4,
#line 529 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 529 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3)
#line 529 "declarative_edt.m"
{
#line 825 "declarative_edt.m"
  {
#line 825 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__HeadVar__3_3 == (MR_Integer) 0);
#line 825 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Status_6;
#line 825 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_7_7;
#line 825 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_13;
#line 1788 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_14_14;
#line 1788 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_15_15;
#line 1788 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_16_16;
#line 1788 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_17_17;
#line 1788 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_18_18;

#line 825 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 825 "declarative_edt.m"
      {
#line 1787 "declarative_edt.m"
        {
#line 1787 "declarative_edt.m"
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_8, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_13);
        }
#line 1788 "declarative_edt.m"
        mdb__declarative_edt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 0)));
#line 1788 "declarative_edt.m"
        mdb__declarative_edt__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 1));
#line 1788 "declarative_edt.m"
        mdb__declarative_edt__Status_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 2)));
#line 1788 "declarative_edt.m"
        mdb__declarative_edt__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 3)));
#line 1788 "declarative_edt.m"
        mdb__declarative_edt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 4)));
#line 1788 "declarative_edt.m"
        mdb__declarative_edt__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_13, (MR_Integer) 5)));
#line 827 "declarative_edt.m"
        mdb__declarative_edt__V_7_7 = (MR_Integer) 1;
#line 770 "declarative_edt.m"
        if ((mdb__declarative_edt__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 772 "declarative_edt.m"
          {
#line 827 "declarative_edt.m"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_7_7 == (MR_Integer) 0);
#line 772 "declarative_edt.m"
          }
#line 770 "declarative_edt.m"
        else
#line 770 "declarative_edt.m"
        if ((mdb__declarative_edt__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 773 "declarative_edt.m"
          {
#line 827 "declarative_edt.m"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_7_7 == (MR_Integer) 1);
#line 773 "declarative_edt.m"
          }
#line 770 "declarative_edt.m"
        else
#line 770 "declarative_edt.m"
        if ((mdb__declarative_edt__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "declarative_edt.m"
          {
#line 827 "declarative_edt.m"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_7_7 == (MR_Integer) 0);
#line 770 "declarative_edt.m"
          }
#line 770 "declarative_edt.m"
        else
#line 770 "declarative_edt.m"
        if ((mdb__declarative_edt__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 776 "declarative_edt.m"
          {
#line 827 "declarative_edt.m"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_7_7 == (MR_Integer) 1);
#line 776 "declarative_edt.m"
          }
#line 770 "declarative_edt.m"
        else
#line 770 "declarative_edt.m"
        if ((mdb__declarative_edt__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 774 "declarative_edt.m"
          {
#line 827 "declarative_edt.m"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_7_7 == (MR_Integer) 0);
#line 774 "declarative_edt.m"
          }
#line 770 "declarative_edt.m"
        else
#line 770 "declarative_edt.m"
        if ((mdb__declarative_edt__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 775 "declarative_edt.m"
          {
#line 827 "declarative_edt.m"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_7_7 == (MR_Integer) 0);
#line 775 "declarative_edt.m"
          }
#line 770 "declarative_edt.m"
        else
#line 770 "declarative_edt.m"
        if ((mdb__declarative_edt__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 777 "declarative_edt.m"
          {
#line 827 "declarative_edt.m"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_7_7 == (MR_Integer) 0);
#line 777 "declarative_edt.m"
          }
#line 770 "declarative_edt.m"
        else
#line 771 "declarative_edt.m"
          {
#line 827 "declarative_edt.m"
            mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_7_7 == (MR_Integer) 0);
#line 771 "declarative_edt.m"
          }
#line 825 "declarative_edt.m"
      }
#line 825 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 825 "declarative_edt.m"
  }
#line 529 "declarative_edt.m"
}

#line 523 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__suspect_inadmissible_2_p_0(
#line 523 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
#line 523 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 523 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4)
#line 523 "declarative_edt.m"
{
#line 697 "declarative_edt.m"
  {
#line 697 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 697 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_5;
#line 697 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_6_6;
#line 699 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_7_7;
#line 699 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_8_8;
#line 699 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_9_9;
#line 699 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_10_10;
#line 699 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_11_11;

#line 698 "declarative_edt.m"
    {
#line 698 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
#line 699 "declarative_edt.m"
    mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
#line 699 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
#line 699 "declarative_edt.m"
    mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
#line 699 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
#line 699 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
#line 699 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
#line 699 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3))));
#line 697 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 697 "declarative_edt.m"
  }
#line 523 "declarative_edt.m"
}

#line 518 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__suspect_correct_or_inadmissible_2_p_0(
#line 518 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
#line 518 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 518 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4)
#line 518 "declarative_edt.m"
{
#line 681 "declarative_edt.m"
  {
#line 681 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 681 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_5;
#line 681 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Status_6;
#line 683 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_7_7;
#line 683 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_8_8;
#line 683 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_9_9;
#line 683 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_10_10;
#line 683 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_11_11;

#line 682 "declarative_edt.m"
    {
#line 682 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
#line 683 "declarative_edt.m"
    mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
#line 683 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
#line 683 "declarative_edt.m"
    mdb__declarative_edt__Status_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
#line 683 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
#line 683 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
#line 683 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
#line 685 "declarative_edt.m"
    if ((mdb__declarative_edt__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 684 "declarative_edt.m"
      mdb__declarative_edt__succeeded = MR_TRUE;
#line 685 "declarative_edt.m"
    else
#line 685 "declarative_edt.m"
    if ((mdb__declarative_edt__Status_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 685 "declarative_edt.m"
      mdb__declarative_edt__succeeded = MR_TRUE;
#line 685 "declarative_edt.m"
    else
#line 685 "declarative_edt.m"
      mdb__declarative_edt__succeeded = MR_FALSE;
#line 681 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 681 "declarative_edt.m"
  }
#line 518 "declarative_edt.m"
}

#line 513 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__get_path_4_p_0(
#line 513 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_10,
#line 513 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_5,
#line 513 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__BottomId_6,
#line 513 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__TopId_7,
#line 513 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Path_8)
#line 513 "declarative_edt.m"
{
#line 1981 "declarative_edt.m"
  {
#line 1981 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;

#line 1982 "declarative_edt.m"
    {
#line 1982 "declarative_edt.m"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__get_path_5_p_0(mdb__declarative_edt__TypeInfo_for_T_10, mdb__declarative_edt__SearchSpace_5, mdb__declarative_edt__BottomId_6, mdb__declarative_edt__TopId_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_edt__Path_8);
    }
#line 1981 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1981 "declarative_edt.m"
  }
#line 513 "declarative_edt.m"
}

#line 1825 "declarative_edt.m"
static void MR_CALL 
mdb__declarative_edt__choose_skipped_suspect_2_p_0_1(
#line 1825 "declarative_edt.m"
  MR_Box mdb__declarative_edt__closure_arg,
#line 1825 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_1,
#line 1825 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_2,
#line 1825 "declarative_edt.m"
  MR_Box mdb__declarative_edt__wrapper_arg_3,
#line 1825 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__wrapper_arg_4)
#line 1825 "declarative_edt.m"
{
#line 1825 "declarative_edt.m"
  {
#line 1825 "declarative_edt.m"
    MR_Box mdb__declarative_edt__closure = mdb__declarative_edt__closure_arg;
#line 1825 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__conv0_LeastSkipped_10;

#line 1825 "declarative_edt.m"
    {
#line 1825 "declarative_edt.m"
      mdb__declarative_edt__least_skipped_5_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__closure, (MR_Integer) 4))), ((MR_Integer) mdb__declarative_edt__wrapper_arg_1), ((MR_Word) mdb__declarative_edt__wrapper_arg_2), ((MR_Integer) mdb__declarative_edt__wrapper_arg_3), &mdb__declarative_edt__conv0_LeastSkipped_10);
    }
#line 1825 "declarative_edt.m"
    *mdb__declarative_edt__wrapper_arg_4 = ((MR_Box) (mdb__declarative_edt__conv0_LeastSkipped_10));
#line 1825 "declarative_edt.m"
  }
#line 1825 "declarative_edt.m"
}

#line 504 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__choose_skipped_suspect_2_p_0(
#line 504 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
#line 504 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 504 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__Skipped_4)
#line 504 "declarative_edt.m"
{
#line 1821 "declarative_edt.m"
  {
#line 1821 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1821 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeCtorInfo_28_28;
#line 1821 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeCtorInfo_29_29;
#line 1821 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_30_30;
#line 1821 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__TopMostId_5;
#line 1821 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 1)));
#line 1821 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_8_8;
#line 1821 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 4)));
#line 1822 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 0)));
#line 1822 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 2)));
#line 1822 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 3)));
#line 1822 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 5)));
#line 1822 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 6)));
#line 1825 "declarative_edt.m"
    MR_Box mdb__declarative_edt__conv1_Skipped_4;
#line 1830 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_31_31;
#line 1830 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_35;
#line 1788 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_36_36;
#line 1788 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_37_37;
#line 1788 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_38_38;
#line 1788 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_39_39;
#line 1788 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_40_40;
#line 1830 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_44_44;

#line 1822 "declarative_edt.m"
    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 1822 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1822 "declarative_edt.m"
      {
#line 1822 "declarative_edt.m"
        mdb__declarative_edt__TopMostId_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_7_7, (MR_Integer) 0)));
#line 15687 "mdb.declarative_edt.c"
        mdb__declarative_edt__TypeCtorInfo_28_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 15689 "mdb.declarative_edt.c"
        mdb__declarative_edt__TypeCtorInfo_29_29 = (MR_Word) &mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1;
#line 1825 "declarative_edt.m"
        {
#line 1825 "declarative_edt.m"
          mdb__declarative_edt__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
#line 1825 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_8_8, 0) = ((MR_Box) (&mdb__declarative_edt_scalar_common_4[0]));
#line 1825 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_8_8, 1) = ((MR_Box) (mdb__declarative_edt__choose_skipped_suspect_2_p_0_1));
#line 1825 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_8_8, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1825 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_8_8, 3) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_23));
#line 1825 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_8_8, 4) = ((MR_Box) (mdb__declarative_edt__SearchSpace_3));
#line 1825 "declarative_edt.m"
        }
#line 15707 "mdb.declarative_edt.c"
        {
#line 15709 "mdb.declarative_edt.c"
          mdb__declarative_edt__TypeInfo_30_30 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 15711 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_30_30, 0) = ((MR_Box) (mdb__declarative_edt__TypeCtorInfo_29_29));
#line 15713 "mdb.declarative_edt.c"
          MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_30_30, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_23));
#line 15715 "mdb.declarative_edt.c"
        }
#line 1825 "declarative_edt.m"
        {
#line 1825 "declarative_edt.m"
          mercury__map__foldl_4_p_0(mdb__declarative_edt__TypeCtorInfo_28_28, mdb__declarative_edt__TypeInfo_30_30, mdb__declarative_edt__TypeCtorInfo_28_28, mdb__declarative_edt__V_8_8, mdb__declarative_edt__V_14_14, ((MR_Box) (mdb__declarative_edt__TopMostId_5)), &mdb__declarative_edt__conv1_Skipped_4);
        }
#line 1825 "declarative_edt.m"
        *mdb__declarative_edt__Skipped_4 = ((MR_Integer) mdb__declarative_edt__conv1_Skipped_4);
#line 1828 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__TopMostId_5 == *mdb__declarative_edt__Skipped_4);
#line 1829 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1829 "declarative_edt.m"
          {
#line 1787 "declarative_edt.m"
            {
#line 1787 "declarative_edt.m"
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_23, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__TopMostId_5, &mdb__declarative_edt__Suspect_35);
            }
#line 1788 "declarative_edt.m"
            mdb__declarative_edt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 0)));
#line 1788 "declarative_edt.m"
            mdb__declarative_edt__V_37_37 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 1));
#line 1788 "declarative_edt.m"
            mdb__declarative_edt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 2)));
#line 1788 "declarative_edt.m"
            mdb__declarative_edt__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 3)));
#line 1788 "declarative_edt.m"
            mdb__declarative_edt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 4)));
#line 1788 "declarative_edt.m"
            mdb__declarative_edt__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_35, (MR_Integer) 5)));
#line 1830 "declarative_edt.m"
            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_31_31)) == (MR_mktag((MR_Integer) 1)));
#line 1830 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1830 "declarative_edt.m"
              mdb__declarative_edt__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_31_31, (MR_Integer) 0)));
#line 1829 "declarative_edt.m"
            mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 1829 "declarative_edt.m"
          }
#line 1829 "declarative_edt.m"
        mdb__declarative_edt__succeeded = !(mdb__declarative_edt__succeeded);
#line 1822 "declarative_edt.m"
      }
#line 1821 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1821 "declarative_edt.m"
  }
#line 504 "declarative_edt.m"
}

#line 490 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__first_unknown_descendant_6_p_0(
#line 490 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_17,
#line 490 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_7,
#line 490 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_8,
#line 490 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_9,
#line 490 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12,
#line 490 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13,
#line 490 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__MaybeFound_11)
#line 490 "declarative_edt.m"
{
#line 1859 "declarative_edt.m"
  {
#line 1859 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1859 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_14_14;

#line 1860 "declarative_edt.m"
    {
#line 1860 "declarative_edt.m"
      mdb__declarative_edt__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1860 "declarative_edt.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_14_14, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_9));
#line 1860 "declarative_edt.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_14_14, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1860 "declarative_edt.m"
    }
#line 1860 "declarative_edt.m"
    {
#line 1860 "declarative_edt.m"
      mdb__declarative_edt__first_unknown_descendant_list_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_17, mdb__declarative_edt__Store_7, mdb__declarative_edt__Oracle_8, mdb__declarative_edt__V_14_14, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_12, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13, mdb__declarative_edt__MaybeFound_11);
#line 1860 "declarative_edt.m"
      return;
    }
#line 1859 "declarative_edt.m"
  }
#line 490 "declarative_edt.m"
}

#line 479 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__suspect_ignored_2_p_0(
#line 479 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
#line 479 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 479 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4)
#line 479 "declarative_edt.m"
{
#line 713 "declarative_edt.m"
  {
#line 713 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 713 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_5;
#line 713 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_6_6;
#line 715 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_7_7;
#line 715 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_8_8;
#line 715 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_9_9;
#line 715 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_10_10;
#line 715 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_11_11;

#line 714 "declarative_edt.m"
    {
#line 714 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
#line 715 "declarative_edt.m"
    mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
#line 715 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
#line 715 "declarative_edt.m"
    mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
#line 715 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
#line 715 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
#line 715 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
#line 715 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 713 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 713 "declarative_edt.m"
  }
#line 479 "declarative_edt.m"
}

#line 475 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__suspect_skipped_2_p_0(
#line 475 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_13,
#line 475 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 475 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4)
#line 475 "declarative_edt.m"
{
#line 709 "declarative_edt.m"
  {
#line 709 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 709 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_5;
#line 709 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_7_7;
#line 711 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_8_8;
#line 711 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_9_9;
#line 711 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_10_10;
#line 711 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_11_11;
#line 711 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_12_12;
#line 711 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_6_6;

#line 710 "declarative_edt.m"
    {
#line 710 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_13, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
#line 711 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
#line 711 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
#line 711 "declarative_edt.m"
    mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
#line 711 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
#line 711 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
#line 711 "declarative_edt.m"
    mdb__declarative_edt__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
#line 711 "declarative_edt.m"
    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_7_7)) == (MR_mktag((MR_Integer) 1)));
#line 711 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 711 "declarative_edt.m"
      mdb__declarative_edt__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_7_7, (MR_Integer) 0)));
#line 709 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 709 "declarative_edt.m"
  }
#line 475 "declarative_edt.m"
}

#line 471 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__suspect_erroneous_2_p_0(
#line 471 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
#line 471 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 471 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4)
#line 471 "declarative_edt.m"
{
#line 705 "declarative_edt.m"
  {
#line 705 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 705 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_5;
#line 705 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_6_6;
#line 707 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_7_7;
#line 707 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_8_8;
#line 707 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_9_9;
#line 707 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_10_10;
#line 707 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_11_11;

#line 706 "declarative_edt.m"
    {
#line 706 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
#line 707 "declarative_edt.m"
    mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
#line 707 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
#line 707 "declarative_edt.m"
    mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
#line 707 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
#line 707 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
#line 707 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
#line 707 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 705 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 705 "declarative_edt.m"
  }
#line 471 "declarative_edt.m"
}

#line 467 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__suspect_unknown_2_p_0(
#line 467 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
#line 467 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 467 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4)
#line 467 "declarative_edt.m"
{
#line 701 "declarative_edt.m"
  {
#line 701 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 701 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_5;
#line 701 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_6_6;
#line 703 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_7_7;
#line 703 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_8_8;
#line 703 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_9_9;
#line 703 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_10_10;
#line 703 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_11_11;

#line 702 "declarative_edt.m"
    {
#line 702 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
#line 703 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 701 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 701 "declarative_edt.m"
  }
#line 467 "declarative_edt.m"
}

#line 462 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__suspect_in_excluded_complement_2_p_0(
#line 462 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_13,
#line 462 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 462 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4)
#line 462 "declarative_edt.m"
{
#line 761 "declarative_edt.m"
  {
#line 761 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 761 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_5;
#line 761 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_6_6;
#line 763 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_8_8;
#line 763 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_9_9;
#line 763 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_10_10;
#line 763 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_11_11;
#line 763 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_12_12;

#line 762 "declarative_edt.m"
    {
#line 762 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_13, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
#line 763 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
#line 763 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
#line 763 "declarative_edt.m"
    mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
#line 763 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
#line 763 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
#line 763 "declarative_edt.m"
    mdb__declarative_edt__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 772 "declarative_edt.m"
      {
#line 763 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 772 "declarative_edt.m"
      }
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 773 "declarative_edt.m"
      {
#line 763 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 773 "declarative_edt.m"
      }
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 770 "declarative_edt.m"
      {
#line 763 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 770 "declarative_edt.m"
      }
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 776 "declarative_edt.m"
      {
#line 763 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 776 "declarative_edt.m"
      }
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 774 "declarative_edt.m"
      {
#line 763 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 774 "declarative_edt.m"
      }
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 775 "declarative_edt.m"
      {
#line 763 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 775 "declarative_edt.m"
      }
#line 770 "declarative_edt.m"
    else
#line 770 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 777 "declarative_edt.m"
      {
#line 763 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 777 "declarative_edt.m"
      }
#line 770 "declarative_edt.m"
    else
#line 771 "declarative_edt.m"
      {
#line 763 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 771 "declarative_edt.m"
      }
#line 761 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 761 "declarative_edt.m"
  }
#line 462 "declarative_edt.m"
}

#line 456 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__suspect_in_excluded_subtree_2_p_0(
#line 456 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_13,
#line 456 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 456 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4)
#line 456 "declarative_edt.m"
{
#line 717 "declarative_edt.m"
  {
#line 717 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 717 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_5;
#line 717 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_6_6;
#line 719 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_8_8;
#line 719 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_9_9;
#line 719 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_10_10;
#line 719 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_11_11;
#line 719 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_12_12;

#line 718 "declarative_edt.m"
    {
#line 718 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_13, mdb__declarative_edt__SearchSpace_3, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_5);
    }
#line 719 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 0)));
#line 719 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 1));
#line 719 "declarative_edt.m"
    mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 2)));
#line 719 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 3)));
#line 719 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 4)));
#line 719 "declarative_edt.m"
    mdb__declarative_edt__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_5, (MR_Integer) 5)));
#line 737 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 739 "declarative_edt.m"
      {
#line 719 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 739 "declarative_edt.m"
      }
#line 737 "declarative_edt.m"
    else
#line 737 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 740 "declarative_edt.m"
      {
#line 719 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 740 "declarative_edt.m"
      }
#line 737 "declarative_edt.m"
    else
#line 737 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 737 "declarative_edt.m"
      {
#line 719 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 737 "declarative_edt.m"
      }
#line 737 "declarative_edt.m"
    else
#line 737 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 743 "declarative_edt.m"
      {
#line 719 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 743 "declarative_edt.m"
      }
#line 737 "declarative_edt.m"
    else
#line 737 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 741 "declarative_edt.m"
      {
#line 719 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 741 "declarative_edt.m"
      }
#line 737 "declarative_edt.m"
    else
#line 737 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 742 "declarative_edt.m"
      {
#line 719 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 1);
#line 742 "declarative_edt.m"
      }
#line 737 "declarative_edt.m"
    else
#line 737 "declarative_edt.m"
    if ((mdb__declarative_edt__V_6_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 744 "declarative_edt.m"
      {
#line 719 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 744 "declarative_edt.m"
      }
#line 737 "declarative_edt.m"
    else
#line 738 "declarative_edt.m"
      {
#line 719 "declarative_edt.m"
        mdb__declarative_edt__succeeded = ((MR_Integer) 1 == (MR_Integer) 0);
#line 738 "declarative_edt.m"
      }
#line 717 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 717 "declarative_edt.m"
  }
#line 456 "declarative_edt.m"
}

#line 450 "declarative_edt.m"
MR_Integer MR_CALL 
mdb__declarative_edt__get_weight_2_f_0(
#line 450 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_13,
#line 450 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_4,
#line 450 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5)
#line 450 "declarative_edt.m"
{
#line 1778 "declarative_edt.m"
  {
#line 1778 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1778 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Weight_6;
#line 1778 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_7;
#line 1780 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_8_8;
#line 1780 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_9_9;
#line 1780 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_10_10;
#line 1780 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_11_11;
#line 1780 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_12_12;

#line 1779 "declarative_edt.m"
    {
#line 1779 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_13, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_7);
    }
#line 1780 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 0)));
#line 1780 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 1));
#line 1780 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 2)));
#line 1780 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 3)));
#line 1780 "declarative_edt.m"
    mdb__declarative_edt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 4)));
#line 1780 "declarative_edt.m"
    mdb__declarative_edt__Weight_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 5)));
#line 1778 "declarative_edt.m"
    return mdb__declarative_edt__Weight_6;
#line 1778 "declarative_edt.m"
  }
#line 450 "declarative_edt.m"
}

#line 446 "declarative_edt.m"
MR_Box MR_CALL 
mdb__declarative_edt__get_edt_node_2_f_0(
#line 446 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_13,
#line 446 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_4,
#line 446 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5)
#line 446 "declarative_edt.m"
{
#line 1774 "declarative_edt.m"
  {
#line 1774 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1774 "declarative_edt.m"
    MR_Box mdb__declarative_edt__Node_6;
#line 1774 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_7;
#line 1776 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_8_8;
#line 1776 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_9_9;
#line 1776 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_10_10;
#line 1776 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_11_11;
#line 1776 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_12_12;

#line 1775 "declarative_edt.m"
    {
#line 1775 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_13, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_7);
    }
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 0)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__Node_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 1));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 2)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 3)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 4)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_7, (MR_Integer) 5)));
#line 1774 "declarative_edt.m"
    return mdb__declarative_edt__Node_6;
#line 1774 "declarative_edt.m"
  }
#line 446 "declarative_edt.m"
}

#line 441 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__extend_search_space_upwards_4_p_0(
#line 441 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14,
#line 441 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_5,
#line 441 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_6,
#line 441 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10,
#line 441 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11)
#line 441 "declarative_edt.m"
{
#line 1682 "declarative_edt.m"
  {
#line 1682 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1682 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_16_16;
#line 1682 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_17_17;
#line 1682 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__OldTopMostId_8;
#line 1682 "declarative_edt.m"
    MR_Box mdb__declarative_edt__NewTopMost_9;
#line 1682 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_12_12;
#line 1682 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_21;
#line 1776 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_22_22;
#line 1776 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_23_23;
#line 1776 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_24_24;
#line 1776 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_25_25;
#line 1776 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_26_26;
#line 16455 "mdb.declarative_edt.c"
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 16458 "mdb.declarative_edt.c"
    {
#line 16460 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_16_16);
    }
#line 1683 "declarative_edt.m"
    {
#line 1683 "declarative_edt.m"
      mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_16_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, &mdb__declarative_edt__OldTopMostId_8);
    }
#line 16468 "mdb.declarative_edt.c"
    {
#line 16470 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_17_17);
    }
#line 1775 "declarative_edt.m"
    {
#line 1775 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_17_17, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, mdb__declarative_edt__OldTopMostId_8, &mdb__declarative_edt__Suspect_21);
    }
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 0)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_12_12 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 1));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 2)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 3)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 4)));
#line 1776 "declarative_edt.m"
    mdb__declarative_edt__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 5)));
#line 16490 "mdb.declarative_edt.c"
    mdb__declarative_edt__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14, (MR_Integer) 0)), (MR_Integer) 9)));
#line 16492 "mdb.declarative_edt.c"
    {
#line 16494 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14), mdb__declarative_edt__Store_5, mdb__declarative_edt__V_12_12, &mdb__declarative_edt__NewTopMost_9);
    }
#line 1682 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1682 "declarative_edt.m"
      {
#line 1685 "declarative_edt.m"
        {
#line 1685 "declarative_edt.m"
          mdb__declarative_edt__insert_new_topmost_node_5_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_14, mdb__declarative_edt__Store_5, mdb__declarative_edt__Oracle_6, mdb__declarative_edt__NewTopMost_9, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11);
        }
#line 1685 "declarative_edt.m"
        mdb__declarative_edt__succeeded = MR_TRUE;
#line 1682 "declarative_edt.m"
      }
#line 1682 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1682 "declarative_edt.m"
  }
#line 441 "declarative_edt.m"
}

#line 433 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__incorporate_explicit_supertree_5_p_0(
#line 433 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35,
#line 433 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_6,
#line 433 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_7,
#line 433 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_8,
#line 433 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13,
#line 433 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14)
#line 433 "declarative_edt.m"
{
#line 1667 "declarative_edt.m"
  {
#line 1667 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1667 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_37_37;
#line 1667 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__OldTopMostId_10;
#line 1678 "declarative_edt.m"
    MR_Box mdb__declarative_edt__Parent_11;
#line 16544 "mdb.declarative_edt.c"
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);

#line 16547 "mdb.declarative_edt.c"
    {
#line 16549 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_37_37);
    }
#line 1668 "declarative_edt.m"
    {
#line 1668 "declarative_edt.m"
      mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_37_37, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, &mdb__declarative_edt__OldTopMostId_10);
    }
#line 16557 "mdb.declarative_edt.c"
    mdb__declarative_edt__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, (MR_Integer) 0)), (MR_Integer) 9)));
#line 16559 "mdb.declarative_edt.c"
    {
#line 16561 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35), mdb__declarative_edt__Store_6, mdb__declarative_edt__Node_8, &mdb__declarative_edt__Parent_11);
    }
#line 1678 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1670 "declarative_edt.m"
      {
#line 1670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_38_38;
#line 1670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_39_39;
#line 1670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_40_40;
#line 1670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__ImplicitToExplicit_12;
#line 1670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15;
#line 1670 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_16_16;
#line 1670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_17_17;
#line 1670 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Suspect_45;
#line 1776 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_46_46;
#line 1776 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_47_47;
#line 1776 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_48_48;
#line 1776 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_49_49;
#line 1776 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_50_50;
#line 1675 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_22_22;
#line 1675 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_23_23;
#line 1675 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_24_24;
#line 1675 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_25_25;
#line 1675 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_26_26;
#line 1675 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_27_27;
#line 1677 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_28_28;
#line 1677 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_29_29;
#line 1677 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_30_30;
#line 1677 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_31_31;
#line 1677 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_32_32;
#line 1677 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_34_34;
#line 1677 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_33_33;

#line 1670 "declarative_edt.m"
        {
#line 1670 "declarative_edt.m"
          mdb__declarative_edt__insert_new_topmost_node_5_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, mdb__declarative_edt__Store_6, mdb__declarative_edt__Oracle_7, mdb__declarative_edt__Parent_11, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_13, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15);
        }
#line 16626 "mdb.declarative_edt.c"
        {
#line 16628 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_38_38);
        }
#line 1775 "declarative_edt.m"
        {
#line 1775 "declarative_edt.m"
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_38_38, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, mdb__declarative_edt__OldTopMostId_10, &mdb__declarative_edt__Suspect_45);
        }
#line 1776 "declarative_edt.m"
        mdb__declarative_edt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 0)));
#line 1776 "declarative_edt.m"
        mdb__declarative_edt__V_16_16 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 1));
#line 1776 "declarative_edt.m"
        mdb__declarative_edt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 2)));
#line 1776 "declarative_edt.m"
        mdb__declarative_edt__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 3)));
#line 1776 "declarative_edt.m"
        mdb__declarative_edt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 4)));
#line 1776 "declarative_edt.m"
        mdb__declarative_edt__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_45, (MR_Integer) 5)));
#line 1675 "declarative_edt.m"
        mdb__declarative_edt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 0)));
#line 1675 "declarative_edt.m"
        mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1)));
#line 1675 "declarative_edt.m"
        mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2)));
#line 1675 "declarative_edt.m"
        mdb__declarative_edt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3)));
#line 1675 "declarative_edt.m"
        mdb__declarative_edt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4)));
#line 1675 "declarative_edt.m"
        mdb__declarative_edt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5)));
#line 1675 "declarative_edt.m"
        mdb__declarative_edt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6)));
#line 16662 "mdb.declarative_edt.c"
        {
#line 16664 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_39_39);
        }
#line 16667 "mdb.declarative_edt.c"
        {
#line 16669 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_35, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_40_40);
        }
#line 1675 "declarative_edt.m"
        {
#line 1675 "declarative_edt.m"
          mercury__bimap__set_4_p_0(mdb__declarative_edt__TypeInfo_39_39, mdb__declarative_edt__TypeInfo_40_40, mdb__declarative_edt__Node_8, mdb__declarative_edt__V_16_16, mdb__declarative_edt__V_17_17, &mdb__declarative_edt__ImplicitToExplicit_12);
        }
#line 1677 "declarative_edt.m"
        mdb__declarative_edt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 0)));
#line 1677 "declarative_edt.m"
        mdb__declarative_edt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1)));
#line 1677 "declarative_edt.m"
        mdb__declarative_edt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2)));
#line 1677 "declarative_edt.m"
        mdb__declarative_edt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3)));
#line 1677 "declarative_edt.m"
        mdb__declarative_edt__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4)));
#line 1677 "declarative_edt.m"
        mdb__declarative_edt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5)));
#line 1677 "declarative_edt.m"
        mdb__declarative_edt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6)));
#line 1677 "declarative_edt.m"
        {
#line 1677 "declarative_edt.m"
          MR_Word base;
#line 1677 "declarative_edt.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1677 "declarative_edt.m"
          *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_14 = base;
#line 1677 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__V_28_28));
#line 1677 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__V_29_29));
#line 1677 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__V_30_30));
#line 1677 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__V_31_31));
#line 1677 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__V_32_32));
#line 1677 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__ImplicitToExplicit_12));
#line 1677 "declarative_edt.m"
          MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__V_34_34));
#line 1677 "declarative_edt.m"
        }
#line 1670 "declarative_edt.m"
      }
#line 1678 "declarative_edt.m"
    else
#line 1679 "declarative_edt.m"
      {
#line 1679 "declarative_edt.m"
        {
#line 1679 "declarative_edt.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[8])));
#line 1679 "declarative_edt.m"
          return;
        }
#line 1679 "declarative_edt.m"
      }
#line 1667 "declarative_edt.m"
  }
#line 433 "declarative_edt.m"
}

#line 424 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__incorporate_explicit_subtree_4_p_0(
#line 424 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_41,
#line 424 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 424 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_6,
#line 424 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10,
#line 424 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11)
#line 424 "declarative_edt.m"
{
#line 1660 "declarative_edt.m"
  {
#line 1660 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1660 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_29_65;
#line 1660 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_8;
#line 1660 "declarative_edt.m"
    MR_Word mdb__declarative_edt__ImplicitToExplicit_9;
#line 1660 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_12_12;
#line 1660 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13;
#line 1660 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_14_14;
#line 1660 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store0_47;
#line 1660 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store_48;
#line 1660 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_61_61;
#line 1662 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_17_17;
#line 1662 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_19_19;
#line 1662 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_20_20;
#line 1662 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_21_21;
#line 1662 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_22_22;
#line 1662 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_18_18;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_50_50;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_51_51;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_52_52;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_53_53;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_54_54;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_55_55;
#line 1146 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv0_Store_48;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_56_56;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_57_57;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_58_58;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_59_59;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_62_62;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_60_60;
#line 1663 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_23_23;
#line 1663 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_24_24;
#line 1663 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_25_25;
#line 1663 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_26_26;
#line 1663 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_27_27;
#line 1665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_34_34;
#line 1665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_35_35;
#line 1665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_36_36;
#line 1665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_37_37;
#line 1665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_38_38;
#line 1665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_40_40;
#line 1665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_39_39;

#line 1661 "declarative_edt.m"
    {
#line 1661 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_41, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_8);
    }
#line 1662 "declarative_edt.m"
    mdb__declarative_edt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
#line 1662 "declarative_edt.m"
    mdb__declarative_edt__V_18_18 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
#line 1662 "declarative_edt.m"
    mdb__declarative_edt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
#line 1662 "declarative_edt.m"
    mdb__declarative_edt__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
#line 1662 "declarative_edt.m"
    mdb__declarative_edt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
#line 1662 "declarative_edt.m"
    mdb__declarative_edt__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
#line 1662 "declarative_edt.m"
    {
#line 1662 "declarative_edt.m"
      mdb__declarative_edt__V_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1662 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_12_12, 0) = ((MR_Box) (mdb__declarative_edt__V_17_17));
#line 1662 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_12_12, 1) = mdb__declarative_edt__Node_6;
#line 1662 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_12_12, 2) = ((MR_Box) (mdb__declarative_edt__V_19_19));
#line 1662 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_12_12, 3) = ((MR_Box) (mdb__declarative_edt__V_20_20));
#line 1662 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_12_12, 4) = ((MR_Box) (mdb__declarative_edt__V_21_21));
#line 1662 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_12_12, 5) = ((MR_Box) (mdb__declarative_edt__V_22_22));
#line 1662 "declarative_edt.m"
    }
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 0)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 1)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 2)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 3)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__Store0_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 4)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 5)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 6)));
#line 16884 "mdb.declarative_edt.c"
    {
#line 16886 "mdb.declarative_edt.c"
      mdb__declarative_edt__TypeInfo_29_65 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 16888 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_65, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 16890 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_65, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_41));
#line 16892 "mdb.declarative_edt.c"
    }
#line 1146 "declarative_edt.m"
    {
#line 1146 "declarative_edt.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_65, mdb__declarative_edt__SuspectId_5, ((MR_Box) (mdb__declarative_edt__V_12_12)), (MR_Word) mdb__declarative_edt__Store0_47, &mdb__declarative_edt__conv0_Store_48);
    }
#line 1146 "declarative_edt.m"
    mdb__declarative_edt__Store_48 = (MR_Word) mdb__declarative_edt__conv0_Store_48;
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 0)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 1)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 2)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 3)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 4)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 5)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_10, (MR_Integer) 6)));
#line 1147 "declarative_edt.m"
    {
#line 1147 "declarative_edt.m"
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 0) = ((MR_Box) (mdb__declarative_edt__V_56_56));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 1) = ((MR_Box) (mdb__declarative_edt__V_57_57));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 2) = ((MR_Box) (mdb__declarative_edt__V_58_58));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 3) = ((MR_Box) (mdb__declarative_edt__V_59_59));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 4) = ((MR_Box) (mdb__declarative_edt__Store_48));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 5) = ((MR_Box) (mdb__declarative_edt__V_61_61));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, 6) = ((MR_Box) (mdb__declarative_edt__V_62_62));
#line 1147 "declarative_edt.m"
    }
#line 1663 "declarative_edt.m"
    mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
#line 1663 "declarative_edt.m"
    mdb__declarative_edt__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
#line 1663 "declarative_edt.m"
    mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
#line 1663 "declarative_edt.m"
    mdb__declarative_edt__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
#line 1663 "declarative_edt.m"
    mdb__declarative_edt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
#line 1663 "declarative_edt.m"
    mdb__declarative_edt__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
#line 1663 "declarative_edt.m"
    {
#line 1663 "declarative_edt.m"
      mercury__bimap__set_4_p_0(mdb__declarative_edt__TypeInfo_for_T_41, mdb__declarative_edt__TypeInfo_for_T_41, mdb__declarative_edt__V_14_14, mdb__declarative_edt__Node_6, mdb__declarative_edt__V_61_61, &mdb__declarative_edt__ImplicitToExplicit_9);
    }
#line 1665 "declarative_edt.m"
    mdb__declarative_edt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 0)));
#line 1665 "declarative_edt.m"
    mdb__declarative_edt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 1)));
#line 1665 "declarative_edt.m"
    mdb__declarative_edt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 2)));
#line 1665 "declarative_edt.m"
    mdb__declarative_edt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 3)));
#line 1665 "declarative_edt.m"
    mdb__declarative_edt__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 4)));
#line 1665 "declarative_edt.m"
    mdb__declarative_edt__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 5)));
#line 1665 "declarative_edt.m"
    mdb__declarative_edt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_13_13, (MR_Integer) 6)));
#line 1665 "declarative_edt.m"
    {
#line 1665 "declarative_edt.m"
      MR_Word base;
#line 1665 "declarative_edt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1665 "declarative_edt.m"
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11 = base;
#line 1665 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__V_34_34));
#line 1665 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__V_35_35));
#line 1665 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__V_36_36));
#line 1665 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__V_37_37));
#line 1665 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__V_38_38));
#line 1665 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__ImplicitToExplicit_9));
#line 1665 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__V_40_40));
#line 1665 "declarative_edt.m"
    }
#line 1660 "declarative_edt.m"
  }
#line 424 "declarative_edt.m"
}

#line 417 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__travel_up_4_p_0(
#line 417 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_20_20,
#line 417 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_5,
#line 417 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__StartId_6,
#line 417 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__Distance_7,
#line 417 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__FinishId_8)
#line 417 "declarative_edt.m"
{
#line 946 "declarative_edt.m"
  while (MR_TRUE)
#line 946 "declarative_edt.m"
    {
#line 946 "declarative_edt.m"
      /* tailcall optimized into a loop */
#line 946 "declarative_edt.m"
      {
#line 946 "declarative_edt.m"
        MR_bool mdb__declarative_edt__succeeded = (mdb__declarative_edt__Distance_7 > (MR_Integer) 0);
#line 946 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__ParentId_10;
#line 941 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Suspect_9;
#line 941 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_12_12;
#line 943 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_15_15;
#line 943 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_16_16;
#line 943 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_17_17;
#line 943 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_18_18;
#line 943 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_19_19;

#line 941 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 941 "declarative_edt.m"
          {
#line 942 "declarative_edt.m"
            {
#line 942 "declarative_edt.m"
              mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_20_20, mdb__declarative_edt__SearchSpace_5, mdb__declarative_edt__StartId_6, &mdb__declarative_edt__Suspect_9);
            }
#line 943 "declarative_edt.m"
            mdb__declarative_edt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 0)));
#line 943 "declarative_edt.m"
            mdb__declarative_edt__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 1));
#line 943 "declarative_edt.m"
            mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 2)));
#line 943 "declarative_edt.m"
            mdb__declarative_edt__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 3)));
#line 943 "declarative_edt.m"
            mdb__declarative_edt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 4)));
#line 943 "declarative_edt.m"
            mdb__declarative_edt__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_9, (MR_Integer) 5)));
#line 943 "declarative_edt.m"
            mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_12_12)) == (MR_mktag((MR_Integer) 1)));
#line 943 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 943 "declarative_edt.m"
              mdb__declarative_edt__ParentId_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_12_12, (MR_Integer) 0)));
#line 941 "declarative_edt.m"
          }
#line 946 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 945 "declarative_edt.m"
          {
#line 945 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__V_13_13 = (mdb__declarative_edt__Distance_7 - (MR_Integer) 1);

#line 945 "declarative_edt.m"
            /* direct tailcall eliminated */
#line 945 "declarative_edt.m"
            {
#line 945 "declarative_edt.m"
              MR_Integer mdb__declarative_edt__StartId__tmp_copy_6 = mdb__declarative_edt__ParentId_10;
#line 945 "declarative_edt.m"
              MR_Integer mdb__declarative_edt__Distance__tmp_copy_7 = mdb__declarative_edt__V_13_13;

#line 945 "declarative_edt.m"
              mdb__declarative_edt__Distance_7 = mdb__declarative_edt__Distance__tmp_copy_7;
#line 945 "declarative_edt.m"
              mdb__declarative_edt__StartId_6 = mdb__declarative_edt__StartId__tmp_copy_6;
#line 945 "declarative_edt.m"
            }
#line 945 "declarative_edt.m"
            continue;
#line 945 "declarative_edt.m"
          }
#line 946 "declarative_edt.m"
        else
#line 947 "declarative_edt.m"
          *mdb__declarative_edt__FinishId_8 = mdb__declarative_edt__StartId_6;
#line 946 "declarative_edt.m"
      }
#line 946 "declarative_edt.m"
      break;
#line 946 "declarative_edt.m"
    }
#line 417 "declarative_edt.m"
}

#line 411 "declarative_edt.m"
MR_Integer MR_CALL 
mdb__declarative_edt__suspect_depth_2_f_0(
#line 411 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
#line 411 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_4,
#line 411 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5)
#line 411 "declarative_edt.m"
{
#line 936 "declarative_edt.m"
  {
#line 936 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 936 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__HeadVar__3_3;
#line 936 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_6;
#line 936 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_7_7;
#line 936 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_8_8;
#line 936 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_9_9;
#line 936 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_10_10;
#line 936 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_11_11;

#line 937 "declarative_edt.m"
    {
#line 937 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_12, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Suspect_6);
    }
#line 936 "declarative_edt.m"
    mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 0)));
#line 936 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 1));
#line 936 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 2)));
#line 936 "declarative_edt.m"
    mdb__declarative_edt__HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 3)));
#line 936 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 4)));
#line 936 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 5)));
#line 936 "declarative_edt.m"
    return mdb__declarative_edt__HeadVar__3_3;
#line 936 "declarative_edt.m"
  }
#line 411 "declarative_edt.m"
}

#line 369 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__find_subterm_origin_11_p_0(
#line 369 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55,
#line 369 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_12,
#line 369 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_13,
#line 369 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_14,
#line 369 "declarative_edt.m"
  MR_Word mdb__declarative_edt__ArgPos_15,
#line 369 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TermPath_16,
#line 369 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HowTrack_17,
#line 369 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_0_28,
#line 369 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_29,
#line 369 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30,
#line 369 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31,
#line 369 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Response_20)
#line 369 "declarative_edt.m"
{
#line 973 "declarative_edt.m"
  {
#line 973 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 973 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_21;
#line 973 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Mode_22;
#line 973 "declarative_edt.m"
    MR_Box mdb__declarative_edt__Node_23;

#line 974 "declarative_edt.m"
    {
#line 974 "declarative_edt.m"
      mdb__declarative_edt__lookup_subterm_node_8_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__SuspectId_14, mdb__declarative_edt__ArgPos_15, mdb__declarative_edt__TermPath_16, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, &mdb__declarative_edt__Suspect_21, &mdb__declarative_edt__Mode_22, &mdb__declarative_edt__Node_23);
    }
#line 992 "declarative_edt.m"
    if ((mdb__declarative_edt__Mode_22 == (MR_Integer) 0))
#line 977 "declarative_edt.m"
      {
#line 977 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 0)));
#line 979 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 5)));
#line 979 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 4)));
#line 979 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 3)));
#line 979 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 2)));
#line 979 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_62_62 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_21, (MR_Integer) 1));

#line 982 "declarative_edt.m"
        if ((mdb__declarative_edt__V_63_63 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 988 "declarative_edt.m"
          {
#line 988 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39;

#line 984 "declarative_edt.m"
            {
#line 984 "declarative_edt.m"
              mdb__declarative_edt__succeeded = mdb__declarative_edt__extend_search_space_upwards_4_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Oracle_13, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39);
            }
#line 988 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 985 "declarative_edt.m"
              {
#line 985 "declarative_edt.m"
                MR_Word mdb__declarative_edt__TypeInfo_57_57;
#line 985 "declarative_edt.m"
                MR_Integer mdb__declarative_edt__NewRootId_25;

#line 17242 "mdb.declarative_edt.c"
                {
#line 17244 "mdb.declarative_edt.c"
                  mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_57_57);
                }
#line 985 "declarative_edt.m"
                {
#line 985 "declarative_edt.m"
                  mdb__declarative_edt__topmost_det_2_p_0(mdb__declarative_edt__TypeInfo_57_57, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39, &mdb__declarative_edt__NewRootId_25);
                }
#line 986 "declarative_edt.m"
                {
#line 986 "declarative_edt.m"
                  mdb__declarative_edt__resolve_origin_10_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Oracle_13, mdb__declarative_edt__Node_23, mdb__declarative_edt__ArgPos_15, mdb__declarative_edt__TermPath_16, mdb__declarative_edt__NewRootId_25, (MR_Integer) 0, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_39_39, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31, mdb__declarative_edt__Response_20);
                }
#line 985 "declarative_edt.m"
              }
#line 988 "declarative_edt.m"
            else
#line 989 "declarative_edt.m"
              {
#line 989 "declarative_edt.m"
                *mdb__declarative_edt__Response_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 989 "declarative_edt.m"
                *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30;
#line 989 "declarative_edt.m"
              }
#line 988 "declarative_edt.m"
          }
#line 982 "declarative_edt.m"
        else
#line 979 "declarative_edt.m"
          {
#line 979 "declarative_edt.m"
            MR_Integer mdb__declarative_edt__ParentId_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_63_63, (MR_Integer) 0)));

#line 980 "declarative_edt.m"
            {
#line 980 "declarative_edt.m"
              mdb__declarative_edt__resolve_origin_10_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Oracle_13, mdb__declarative_edt__Node_23, mdb__declarative_edt__ArgPos_15, mdb__declarative_edt__TermPath_16, mdb__declarative_edt__ParentId_24, (MR_Integer) 0, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31, mdb__declarative_edt__Response_20);
            }
#line 979 "declarative_edt.m"
          }
#line 977 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_29 = mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_0_28;
#line 977 "declarative_edt.m"
      }
#line 992 "declarative_edt.m"
    else
#line 993 "declarative_edt.m"
    if ((mdb__declarative_edt__HowTrack_17 == (MR_Integer) 0))
#line 995 "declarative_edt.m"
      {
#line 996 "declarative_edt.m"
        {
#line 996 "declarative_edt.m"
          mdb__declarative_edt__resolve_origin_10_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Oracle_13, mdb__declarative_edt__Node_23, mdb__declarative_edt__ArgPos_15, mdb__declarative_edt__TermPath_16, mdb__declarative_edt__SuspectId_14, (MR_Integer) 1, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31, mdb__declarative_edt__Response_20);
        }
#line 995 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_29 = mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_0_28;
#line 995 "declarative_edt.m"
      }
#line 993 "declarative_edt.m"
    else
#line 999 "declarative_edt.m"
      {
#line 999 "declarative_edt.m"
        MR_Word mdb__declarative_edt__MaybeInputArgPos_26;

#line 1000 "declarative_edt.m"
        {
#line 1000 "declarative_edt.m"
          mdb__declarative_edt__subterm_is_in_input_with_same_prefix_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Node_23, mdb__declarative_edt__ArgPos_15, mdb__declarative_edt__TermPath_16, mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_0_28, mdb__declarative_edt__STATE_VARIABLE_TriedShortcutProcs_29, &mdb__declarative_edt__MaybeInputArgPos_26);
        }
#line 1005 "declarative_edt.m"
        if ((mdb__declarative_edt__MaybeInputArgPos_26 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1006 "declarative_edt.m"
          {
#line 1007 "declarative_edt.m"
            {
#line 1007 "declarative_edt.m"
              mdb__declarative_edt__resolve_origin_10_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_55, mdb__declarative_edt__Store_12, mdb__declarative_edt__Oracle_13, mdb__declarative_edt__Node_23, mdb__declarative_edt__ArgPos_15, mdb__declarative_edt__TermPath_16, mdb__declarative_edt__SuspectId_14, (MR_Integer) 1, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31, mdb__declarative_edt__Response_20);
#line 1007 "declarative_edt.m"
              return;
            }
#line 1006 "declarative_edt.m"
          }
#line 1005 "declarative_edt.m"
        else
#line 1003 "declarative_edt.m"
          {
#line 1003 "declarative_edt.m"
            MR_Word mdb__declarative_edt__InputArgPos_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__MaybeInputArgPos_26, (MR_Integer) 0)));

#line 1004 "declarative_edt.m"
            {
#line 1004 "declarative_edt.m"
              MR_Word base;
#line 1004 "declarative_edt.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1004 "declarative_edt.m"
              *mdb__declarative_edt__Response_20 = base;
#line 1004 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_14));
#line 1004 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_edt__InputArgPos_27));
#line 1004 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mdb__declarative_edt__TermPath_16));
#line 1004 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1004 "declarative_edt.m"
            }
#line 1003 "declarative_edt.m"
            *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_31 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_30;
#line 1003 "declarative_edt.m"
          }
#line 999 "declarative_edt.m"
      }
#line 973 "declarative_edt.m"
  }
#line 369 "declarative_edt.m"
}

#line 342 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__lookup_subterm_node_8_p_0(
#line 342 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_31,
#line 342 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_9,
#line 342 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_10,
#line 342 "declarative_edt.m"
  MR_Word mdb__declarative_edt__ArgPos_11,
#line 342 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TermPath_12,
#line 342 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_13,
#line 342 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Suspect_14,
#line 342 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Mode_15,
#line 342 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__Node_16)
#line 342 "declarative_edt.m"
{
#line 951 "declarative_edt.m"
  {
#line 951 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 951 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_33_33;
#line 951 "declarative_edt.m"
    MR_Box mdb__declarative_edt__ExplicitNode_17;
#line 954 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_20_20;
#line 954 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_21_21;
#line 954 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_22_22;
#line 954 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_23_23;
#line 954 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_24_24;
#line 17406 "mdb.declarative_edt.c"
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
#line 17408 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_Mode_15;
#line 968 "declarative_edt.m"
    MR_Box mdb__declarative_edt__ImplicitNode_19;
#line 963 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_34_34;
#line 963 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_35_35;
#line 963 "declarative_edt.m"
    MR_Word mdb__declarative_edt__ImplicitToExplicit_18;
#line 964 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_25_25;
#line 964 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_26_26;
#line 964 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_27_27;
#line 964 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_28_28;
#line 964 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_29_29;
#line 964 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_30_30;

#line 17431 "mdb.declarative_edt.c"
    {
#line 17433 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_31, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_33_33);
    }
#line 952 "declarative_edt.m"
    {
#line 952 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_33_33, mdb__declarative_edt__SearchSpace_13, mdb__declarative_edt__SuspectId_10, mdb__declarative_edt__Suspect_14);
    }
#line 954 "declarative_edt.m"
    mdb__declarative_edt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_edt__Suspect_14, (MR_Integer) 0)));
#line 954 "declarative_edt.m"
    mdb__declarative_edt__ExplicitNode_17 = (MR_hl_field(MR_mktag(0), *mdb__declarative_edt__Suspect_14, (MR_Integer) 1));
#line 954 "declarative_edt.m"
    mdb__declarative_edt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_edt__Suspect_14, (MR_Integer) 2)));
#line 954 "declarative_edt.m"
    mdb__declarative_edt__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mdb__declarative_edt__Suspect_14, (MR_Integer) 3)));
#line 954 "declarative_edt.m"
    mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), *mdb__declarative_edt__Suspect_14, (MR_Integer) 4)));
#line 954 "declarative_edt.m"
    mdb__declarative_edt__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(0), *mdb__declarative_edt__Suspect_14, (MR_Integer) 5)));
#line 17453 "mdb.declarative_edt.c"
    mdb__declarative_edt__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_31, (MR_Integer) 0)), (MR_Integer) 11)));
#line 17455 "mdb.declarative_edt.c"
    {
#line 17457 "mdb.declarative_edt.c"
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_31), mdb__declarative_edt__Store_9, mdb__declarative_edt__ExplicitNode_17, ((MR_Box) (mdb__declarative_edt__ArgPos_11)), ((MR_Box) (mdb__declarative_edt__TermPath_12)), &mdb__declarative_edt__conv1_Mode_15);
    }
#line 17460 "mdb.declarative_edt.c"
    *mdb__declarative_edt__Mode_15 = ((MR_Word) mdb__declarative_edt__conv1_Mode_15);
#line 963 "declarative_edt.m"
    mdb__declarative_edt__succeeded = (*mdb__declarative_edt__Mode_15 == (MR_Integer) 0);
#line 963 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 963 "declarative_edt.m"
      {
#line 964 "declarative_edt.m"
        mdb__declarative_edt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_13, (MR_Integer) 0)));
#line 964 "declarative_edt.m"
        mdb__declarative_edt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_13, (MR_Integer) 1)));
#line 964 "declarative_edt.m"
        mdb__declarative_edt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_13, (MR_Integer) 2)));
#line 964 "declarative_edt.m"
        mdb__declarative_edt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_13, (MR_Integer) 3)));
#line 964 "declarative_edt.m"
        mdb__declarative_edt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_13, (MR_Integer) 4)));
#line 964 "declarative_edt.m"
        mdb__declarative_edt__ImplicitToExplicit_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_13, (MR_Integer) 5)));
#line 964 "declarative_edt.m"
        mdb__declarative_edt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_13, (MR_Integer) 6)));
#line 17482 "mdb.declarative_edt.c"
        {
#line 17484 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_31, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_34_34);
        }
#line 17487 "mdb.declarative_edt.c"
        {
#line 17489 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_31, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_35_35);
        }
#line 965 "declarative_edt.m"
        {
#line 965 "declarative_edt.m"
          mdb__declarative_edt__succeeded = mercury__bimap__search_3_p_1(mdb__declarative_edt__TypeInfo_34_34, mdb__declarative_edt__TypeInfo_35_35, mdb__declarative_edt__ImplicitToExplicit_18, &mdb__declarative_edt__ImplicitNode_19, mdb__declarative_edt__ExplicitNode_17);
        }
#line 963 "declarative_edt.m"
      }
#line 968 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 967 "declarative_edt.m"
      *mdb__declarative_edt__Node_16 = mdb__declarative_edt__ImplicitNode_19;
#line 968 "declarative_edt.m"
    else
#line 969 "declarative_edt.m"
      *mdb__declarative_edt__Node_16 = mdb__declarative_edt__ExplicitNode_17;
#line 951 "declarative_edt.m"
  }
#line 342 "declarative_edt.m"
}

#line 333 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__skip_suspect_3_p_0(
#line 333 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_35,
#line 333 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4,
#line 333 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9,
#line 333 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_10)
#line 333 "declarative_edt.m"
{
#line 891 "declarative_edt.m"
  {
#line 891 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 891 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_29_59;
#line 891 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_6;
#line 891 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__N_7;
#line 891 "declarative_edt.m"
    MR_Word mdb__declarative_edt__SkipCounter_8;
#line 891 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_11_11;
#line 891 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12;
#line 891 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_13_13;
#line 891 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_15_15;
#line 891 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store0_41;
#line 891 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store_42;
#line 893 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_16_16;
#line 893 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_17_17;
#line 893 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_18_18;
#line 893 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_19_19;
#line 893 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_20_20;
#line 893 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_21_21;
#line 894 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_22_22;
#line 894 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_23_23;
#line 894 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_24_24;
#line 894 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_27_27;
#line 894 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_28_28;
#line 894 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_25_25;
#line 895 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_29_29;
#line 895 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_30_30;
#line 895 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_32_32;
#line 895 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_33_33;
#line 895 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_34_34;
#line 895 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_31_31;
#line 1146 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv0_Store_42;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_50_50;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_51_51;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_52_52;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_53_53;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_55_55;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_56_56;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_54_54;

#line 892 "declarative_edt.m"
    {
#line 892 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_35, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_6);
    }
#line 893 "declarative_edt.m"
    mdb__declarative_edt__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 0)));
#line 893 "declarative_edt.m"
    mdb__declarative_edt__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 1)));
#line 893 "declarative_edt.m"
    mdb__declarative_edt__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 2)));
#line 893 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 3)));
#line 893 "declarative_edt.m"
    mdb__declarative_edt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 4)));
#line 893 "declarative_edt.m"
    mdb__declarative_edt__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 5)));
#line 893 "declarative_edt.m"
    mdb__declarative_edt__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 6)));
#line 893 "declarative_edt.m"
    {
#line 893 "declarative_edt.m"
      mercury__counter__allocate_3_p_0(&mdb__declarative_edt__N_7, mdb__declarative_edt__V_11_11, &mdb__declarative_edt__SkipCounter_8);
    }
#line 894 "declarative_edt.m"
    mdb__declarative_edt__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 0)));
#line 894 "declarative_edt.m"
    mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 1)));
#line 894 "declarative_edt.m"
    mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 2)));
#line 894 "declarative_edt.m"
    mdb__declarative_edt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 3)));
#line 894 "declarative_edt.m"
    mdb__declarative_edt__Store0_41 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 4)));
#line 894 "declarative_edt.m"
    mdb__declarative_edt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 5)));
#line 894 "declarative_edt.m"
    mdb__declarative_edt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_9, (MR_Integer) 6)));
#line 894 "declarative_edt.m"
    {
#line 894 "declarative_edt.m"
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 894 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 0) = ((MR_Box) (mdb__declarative_edt__V_22_22));
#line 894 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 1) = ((MR_Box) (mdb__declarative_edt__V_23_23));
#line 894 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 2) = ((MR_Box) (mdb__declarative_edt__V_24_24));
#line 894 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 3) = ((MR_Box) (mdb__declarative_edt__SkipCounter_8));
#line 894 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 4) = ((MR_Box) (mdb__declarative_edt__Store0_41));
#line 894 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 5) = ((MR_Box) (mdb__declarative_edt__V_27_27));
#line 894 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, 6) = ((MR_Box) (mdb__declarative_edt__V_28_28));
#line 894 "declarative_edt.m"
    }
#line 895 "declarative_edt.m"
    {
#line 895 "declarative_edt.m"
      mdb__declarative_edt__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 895 "declarative_edt.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_15_15, 0) = ((MR_Box) (mdb__declarative_edt__N_7));
#line 895 "declarative_edt.m"
    }
#line 895 "declarative_edt.m"
    mdb__declarative_edt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 0)));
#line 895 "declarative_edt.m"
    mdb__declarative_edt__V_30_30 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 1));
#line 895 "declarative_edt.m"
    mdb__declarative_edt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 2)));
#line 895 "declarative_edt.m"
    mdb__declarative_edt__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 3)));
#line 895 "declarative_edt.m"
    mdb__declarative_edt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 4)));
#line 895 "declarative_edt.m"
    mdb__declarative_edt__V_34_34 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 5)));
#line 895 "declarative_edt.m"
    {
#line 895 "declarative_edt.m"
      mdb__declarative_edt__V_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 895 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 0) = ((MR_Box) (mdb__declarative_edt__V_29_29));
#line 895 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 1) = mdb__declarative_edt__V_30_30;
#line 895 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 2) = ((MR_Box) (mdb__declarative_edt__V_15_15));
#line 895 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 3) = ((MR_Box) (mdb__declarative_edt__V_32_32));
#line 895 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 4) = ((MR_Box) (mdb__declarative_edt__V_33_33));
#line 895 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_13_13, 5) = ((MR_Box) (mdb__declarative_edt__V_34_34));
#line 895 "declarative_edt.m"
    }
#line 17698 "mdb.declarative_edt.c"
    {
#line 17700 "mdb.declarative_edt.c"
      mdb__declarative_edt__TypeInfo_29_59 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17702 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_59, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 17704 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_59, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_35));
#line 17706 "mdb.declarative_edt.c"
    }
#line 1146 "declarative_edt.m"
    {
#line 1146 "declarative_edt.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_59, mdb__declarative_edt__SuspectId_4, ((MR_Box) (mdb__declarative_edt__V_13_13)), (MR_Word) mdb__declarative_edt__Store0_41, &mdb__declarative_edt__conv0_Store_42);
    }
#line 1146 "declarative_edt.m"
    mdb__declarative_edt__Store_42 = (MR_Word) mdb__declarative_edt__conv0_Store_42;
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 0)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 1)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 2)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 3)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 4)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 5)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12_12, (MR_Integer) 6)));
#line 1147 "declarative_edt.m"
    {
#line 1147 "declarative_edt.m"
      MR_Word base;
#line 1147 "declarative_edt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "declarative_edt.m"
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_10 = base;
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__V_50_50));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__V_51_51));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__V_52_52));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__V_53_53));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__Store_42));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__V_55_55));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__V_56_56));
#line 1147 "declarative_edt.m"
    }
#line 891 "declarative_edt.m"
  }
#line 333 "declarative_edt.m"
}

#line 328 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__ignore_suspect_4_p_0(
#line 328 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50,
#line 328 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_5,
#line 328 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_6,
#line 328 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11,
#line 328 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12)
#line 328 "declarative_edt.m"
{
#line 881 "declarative_edt.m"
  {
#line 881 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_52_52;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_53_53;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_54_54;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_29_78;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_8;
#line 881 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Weight_9;
#line 881 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_13_13;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_16_16;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17;
#line 881 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_20_20;
#line 881 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_22_22;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_26_26;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_33_33;
#line 881 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_34_34;
#line 881 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_36_36;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_37_37;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store0_60;
#line 881 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store_61;
#line 883 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_23_23;
#line 883 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_24_24;
#line 883 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_25_25;
#line 883 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_27_27;
#line 883 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_10_10;
#line 885 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_35_35;
#line 885 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_38_38;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_63_63;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_64_64;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_65_65;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_66_66;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_67_67;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_68_68;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_69_69;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_70_70;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_71_71;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_72_72;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_74_74;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_75_75;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_73_73;
#line 888 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_45_45;
#line 888 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_46_46;
#line 888 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_47_47;
#line 888 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_48_48;
#line 888 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_49_49;

#line 17864 "mdb.declarative_edt.c"
    {
#line 17866 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_52_52);
    }
#line 882 "declarative_edt.m"
    {
#line 882 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_52_52, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, mdb__declarative_edt__SuspectId_6, &mdb__declarative_edt__Suspect_8);
    }
#line 883 "declarative_edt.m"
    mdb__declarative_edt__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
#line 883 "declarative_edt.m"
    mdb__declarative_edt__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
#line 883 "declarative_edt.m"
    mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
#line 883 "declarative_edt.m"
    mdb__declarative_edt__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
#line 883 "declarative_edt.m"
    mdb__declarative_edt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
#line 883 "declarative_edt.m"
    mdb__declarative_edt__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
#line 883 "declarative_edt.m"
    {
#line 883 "declarative_edt.m"
      mdb__declarative_edt__calc_suspect_weight_7_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, mdb__declarative_edt__Store_5, mdb__declarative_edt__V_13_13, mdb__declarative_edt__V_26_26, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, &mdb__declarative_edt__Weight_9, &mdb__declarative_edt__V_10_10);
    }
#line 885 "declarative_edt.m"
    mdb__declarative_edt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
#line 885 "declarative_edt.m"
    mdb__declarative_edt__V_34_34 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
#line 885 "declarative_edt.m"
    mdb__declarative_edt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
#line 885 "declarative_edt.m"
    mdb__declarative_edt__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
#line 885 "declarative_edt.m"
    mdb__declarative_edt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
#line 885 "declarative_edt.m"
    mdb__declarative_edt__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
#line 885 "declarative_edt.m"
    {
#line 885 "declarative_edt.m"
      mdb__declarative_edt__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 885 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 0) = ((MR_Box) (mdb__declarative_edt__V_33_33));
#line 885 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 1) = mdb__declarative_edt__V_34_34;
#line 885 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 885 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 3) = ((MR_Box) (mdb__declarative_edt__V_36_36));
#line 885 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 4) = ((MR_Box) (mdb__declarative_edt__V_37_37));
#line 885 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_16_16, 5) = ((MR_Box) (mdb__declarative_edt__Weight_9));
#line 885 "declarative_edt.m"
    }
#line 17921 "mdb.declarative_edt.c"
    {
#line 17923 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_53_53);
    }
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__Store0_60 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6)));
#line 17940 "mdb.declarative_edt.c"
    {
#line 17942 "mdb.declarative_edt.c"
      mdb__declarative_edt__TypeInfo_29_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 17944 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_78, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 17946 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_78, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_53_53));
#line 17948 "mdb.declarative_edt.c"
    }
#line 1146 "declarative_edt.m"
    {
#line 1146 "declarative_edt.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_78, mdb__declarative_edt__SuspectId_6, ((MR_Box) (mdb__declarative_edt__V_16_16)), mdb__declarative_edt__Store0_60, &mdb__declarative_edt__Store_61);
    }
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_69_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 0)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 1)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 2)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_72_72 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 3)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 4)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 5)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_11, (MR_Integer) 6)));
#line 1147 "declarative_edt.m"
    {
#line 1147 "declarative_edt.m"
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 0) = ((MR_Box) (mdb__declarative_edt__V_69_69));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 1) = ((MR_Box) (mdb__declarative_edt__V_70_70));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 2) = ((MR_Box) (mdb__declarative_edt__V_71_71));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 3) = ((MR_Box) (mdb__declarative_edt__V_72_72));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 4) = ((MR_Box) (mdb__declarative_edt__Store_61));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 5) = ((MR_Box) (mdb__declarative_edt__V_74_74));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, 6) = ((MR_Box) (mdb__declarative_edt__V_75_75));
#line 1147 "declarative_edt.m"
    }
#line 888 "declarative_edt.m"
    mdb__declarative_edt__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 0)));
#line 888 "declarative_edt.m"
    mdb__declarative_edt__V_46_46 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 1));
#line 888 "declarative_edt.m"
    mdb__declarative_edt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 2)));
#line 888 "declarative_edt.m"
    mdb__declarative_edt__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 3)));
#line 888 "declarative_edt.m"
    mdb__declarative_edt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 4)));
#line 888 "declarative_edt.m"
    mdb__declarative_edt__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_8, (MR_Integer) 5)));
#line 888 "declarative_edt.m"
    mdb__declarative_edt__V_20_20 = (mdb__declarative_edt__Weight_9 - mdb__declarative_edt__V_22_22);
#line 18003 "mdb.declarative_edt.c"
    {
#line 18005 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_50, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_54_54);
    }
#line 888 "declarative_edt.m"
    {
#line 888 "declarative_edt.m"
      mdb__declarative_edt__add_weight_to_ancestors_4_p_0(mdb__declarative_edt__TypeInfo_54_54, mdb__declarative_edt__SuspectId_6, mdb__declarative_edt__V_20_20, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_17_17, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_12);
#line 888 "declarative_edt.m"
      return;
    }
#line 881 "declarative_edt.m"
  }
#line 328 "declarative_edt.m"
}

#line 323 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__assert_suspect_is_inadmissible_3_p_0(
#line 323 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_10,
#line 323 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4,
#line 323 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_6,
#line 323 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_7)
#line 323 "declarative_edt.m"
{
#line 866 "declarative_edt.m"
  {
#line 866 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;

#line 867 "declarative_edt.m"
    {
#line 867 "declarative_edt.m"
      mdb__declarative_edt__assert_suspect_is_valid_4_p_0(mdb__declarative_edt__TypeInfo_for_T_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)), mdb__declarative_edt__SuspectId_4, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_6, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_7);
#line 867 "declarative_edt.m"
      return;
    }
#line 866 "declarative_edt.m"
  }
#line 323 "declarative_edt.m"
}

#line 318 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__assert_suspect_is_erroneous_3_p_0(
#line 318 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_37,
#line 318 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4,
#line 318 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8,
#line 318 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_9)
#line 318 "declarative_edt.m"
{
#line 872 "declarative_edt.m"
  {
#line 872 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 872 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_29_61;
#line 872 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_6;
#line 872 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_10_10;
#line 872 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11;
#line 872 "declarative_edt.m"
    MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15;
#line 872 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_23_23;
#line 872 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store0_43;
#line 872 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Store_44;
#line 874 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_24_24;
#line 874 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_25_25;
#line 874 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_27_27;
#line 874 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_28_28;
#line 874 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_29_29;
#line 874 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_26_26;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_46_46;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_47_47;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_48_48;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_49_49;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_50_50;
#line 1145 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_51_51;
#line 1146 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv0_Store_44;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_52_52;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_53_53;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_54_54;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_55_55;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_57_57;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_58_58;
#line 1147 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_56_56;
#line 876 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_7_7;
#line 879 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_31_31;
#line 879 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_32_32;
#line 879 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_33_33;
#line 879 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_34_34;
#line 879 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_35_35;
#line 879 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_36_36;
#line 879 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_30_30;

#line 873 "declarative_edt.m"
    {
#line 873 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_37, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__Suspect_6);
    }
#line 874 "declarative_edt.m"
    mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 0)));
#line 874 "declarative_edt.m"
    mdb__declarative_edt__V_25_25 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 1));
#line 874 "declarative_edt.m"
    mdb__declarative_edt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 2)));
#line 874 "declarative_edt.m"
    mdb__declarative_edt__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 3)));
#line 874 "declarative_edt.m"
    mdb__declarative_edt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 4)));
#line 874 "declarative_edt.m"
    mdb__declarative_edt__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_6, (MR_Integer) 5)));
#line 874 "declarative_edt.m"
    {
#line 874 "declarative_edt.m"
      mdb__declarative_edt__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 874 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_10_10, 0) = ((MR_Box) (mdb__declarative_edt__V_24_24));
#line 874 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_10_10, 1) = mdb__declarative_edt__V_25_25;
#line 874 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_10_10, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2))));
#line 874 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_10_10, 3) = ((MR_Box) (mdb__declarative_edt__V_27_27));
#line 874 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_10_10, 4) = ((MR_Box) (mdb__declarative_edt__V_28_28));
#line 874 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_10_10, 5) = ((MR_Box) (mdb__declarative_edt__V_29_29));
#line 874 "declarative_edt.m"
    }
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 0)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 1)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 2)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 3)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__Store0_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 4)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 5)));
#line 1145 "declarative_edt.m"
    mdb__declarative_edt__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 6)));
#line 18189 "mdb.declarative_edt.c"
    {
#line 18191 "mdb.declarative_edt.c"
      mdb__declarative_edt__TypeInfo_29_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18193 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_61, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 18195 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_29_61, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_37));
#line 18197 "mdb.declarative_edt.c"
    }
#line 1146 "declarative_edt.m"
    {
#line 1146 "declarative_edt.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_29_61, mdb__declarative_edt__SuspectId_4, ((MR_Box) (mdb__declarative_edt__V_10_10)), (MR_Word) mdb__declarative_edt__Store0_43, &mdb__declarative_edt__conv0_Store_44);
    }
#line 1146 "declarative_edt.m"
    mdb__declarative_edt__Store_44 = (MR_Word) mdb__declarative_edt__conv0_Store_44;
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 0)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 1)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 2)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 3)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 4)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 5)));
#line 1147 "declarative_edt.m"
    mdb__declarative_edt__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_8, (MR_Integer) 6)));
#line 1147 "declarative_edt.m"
    {
#line 1147 "declarative_edt.m"
      mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 0) = ((MR_Box) (mdb__declarative_edt__V_52_52));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 1) = ((MR_Box) (mdb__declarative_edt__V_53_53));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 2) = ((MR_Box) (mdb__declarative_edt__V_54_54));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 3) = ((MR_Box) (mdb__declarative_edt__V_55_55));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 4) = ((MR_Box) (mdb__declarative_edt__Store_44));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 5) = ((MR_Box) (mdb__declarative_edt__V_57_57));
#line 1147 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, 6) = ((MR_Box) (mdb__declarative_edt__V_58_58));
#line 1147 "declarative_edt.m"
    }
#line 876 "declarative_edt.m"
    {
#line 876 "declarative_edt.m"
      mdb__declarative_edt__propagate_status_upwards_6_p_0(mdb__declarative_edt__TypeInfo_for_T_37, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)), (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_1[6]), mdb__declarative_edt__SuspectId_4, &mdb__declarative_edt__V_7_7, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_11_11, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15);
    }
#line 879 "declarative_edt.m"
    {
#line 879 "declarative_edt.m"
      mdb__declarative_edt__V_23_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 879 "declarative_edt.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_23_23, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_4));
#line 879 "declarative_edt.m"
    }
#line 879 "declarative_edt.m"
    mdb__declarative_edt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 0)));
#line 879 "declarative_edt.m"
    mdb__declarative_edt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 1)));
#line 879 "declarative_edt.m"
    mdb__declarative_edt__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 2)));
#line 879 "declarative_edt.m"
    mdb__declarative_edt__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 3)));
#line 879 "declarative_edt.m"
    mdb__declarative_edt__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 4)));
#line 879 "declarative_edt.m"
    mdb__declarative_edt__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 5)));
#line 879 "declarative_edt.m"
    mdb__declarative_edt__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__STATE_VARIABLE_SearchSpace_15_15, (MR_Integer) 6)));
#line 879 "declarative_edt.m"
    {
#line 879 "declarative_edt.m"
      MR_Word base;
#line 879 "declarative_edt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 879 "declarative_edt.m"
      *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_9 = base;
#line 879 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_edt__V_23_23));
#line 879 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_edt__V_31_31));
#line 879 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__V_32_32));
#line 879 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__V_33_33));
#line 879 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__V_34_34));
#line 879 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__V_35_35));
#line 879 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__V_36_36));
#line 879 "declarative_edt.m"
    }
#line 872 "declarative_edt.m"
  }
#line 318 "declarative_edt.m"
}

#line 312 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__assert_suspect_is_correct_3_p_0(
#line 312 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_10,
#line 312 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_4,
#line 312 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_6,
#line 312 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_7)
#line 312 "declarative_edt.m"
{
#line 869 "declarative_edt.m"
  {
#line 869 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;

#line 870 "declarative_edt.m"
    {
#line 870 "declarative_edt.m"
      mdb__declarative_edt__assert_suspect_is_valid_4_p_0(mdb__declarative_edt__TypeInfo_for_T_10, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)), mdb__declarative_edt__SuspectId_4, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_6, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_7);
#line 870 "declarative_edt.m"
      return;
    }
#line 869 "declarative_edt.m"
  }
#line 312 "declarative_edt.m"
}

#line 307 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__parent_3_p_0(
#line 307 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_14,
#line 307 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_4,
#line 307 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_5,
#line 307 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__ParentId_6)
#line 307 "declarative_edt.m"
{
#line 1790 "declarative_edt.m"
  {
#line 1790 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1790 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Parent_7;
#line 1790 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_8_8;
#line 1792 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_9_9;
#line 1792 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_10_10;
#line 1792 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_11_11;
#line 1792 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_12_12;
#line 1792 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_13_13;

#line 1791 "declarative_edt.m"
    {
#line 1791 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_for_T_14, mdb__declarative_edt__SearchSpace_4, mdb__declarative_edt__SuspectId_5, &mdb__declarative_edt__Parent_7);
    }
#line 1792 "declarative_edt.m"
    mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 0)));
#line 1792 "declarative_edt.m"
    mdb__declarative_edt__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 1));
#line 1792 "declarative_edt.m"
    mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 2)));
#line 1792 "declarative_edt.m"
    mdb__declarative_edt__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 3)));
#line 1792 "declarative_edt.m"
    mdb__declarative_edt__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 4)));
#line 1792 "declarative_edt.m"
    mdb__declarative_edt__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Parent_7, (MR_Integer) 5)));
#line 1792 "declarative_edt.m"
    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_8_8)) == (MR_mktag((MR_Integer) 1)));
#line 1792 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 1792 "declarative_edt.m"
      *mdb__declarative_edt__ParentId_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_8_8, (MR_Integer) 0)));
#line 1790 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1790 "declarative_edt.m"
  }
#line 307 "declarative_edt.m"
}

#line 298 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__children_6_p_0(
#line 298 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42,
#line 298 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_7,
#line 298 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_8,
#line 298 "declarative_edt.m"
  MR_Integer mdb__declarative_edt__SuspectId_9,
#line 298 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_15,
#line 298 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16,
#line 298 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__Children_11)
#line 298 "declarative_edt.m"
{
#line 1794 "declarative_edt.m"
  {
#line 1794 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1794 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_44_44;
#line 1794 "declarative_edt.m"
    MR_Word mdb__declarative_edt__Suspect_12;
#line 1794 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_46_46;
#line 1794 "declarative_edt.m"
    MR_Box mdb__declarative_edt__V_49_49;
#line 1797 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_45_45;
#line 1797 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__V_47_47;
#line 1797 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_48_48;
#line 1797 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_50_50;

#line 18428 "mdb.declarative_edt.c"
    {
#line 18430 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_44_44);
    }
#line 1795 "declarative_edt.m"
    {
#line 1795 "declarative_edt.m"
      mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_44_44, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_15, mdb__declarative_edt__SuspectId_9, &mdb__declarative_edt__Suspect_12);
    }
#line 1797 "declarative_edt.m"
    mdb__declarative_edt__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 0)));
#line 1797 "declarative_edt.m"
    mdb__declarative_edt__V_49_49 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 1));
#line 1797 "declarative_edt.m"
    mdb__declarative_edt__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 2)));
#line 1797 "declarative_edt.m"
    mdb__declarative_edt__V_47_47 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 3)));
#line 1797 "declarative_edt.m"
    mdb__declarative_edt__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 4)));
#line 1797 "declarative_edt.m"
    mdb__declarative_edt__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 5)));
#line 1798 "declarative_edt.m"
    if ((mdb__declarative_edt__V_46_46 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1799 "declarative_edt.m"
      {
#line 1799 "declarative_edt.m"
        MR_Word mdb__declarative_edt__EDTChildren_13;
#line 1799 "declarative_edt.m"
        MR_Word mdb__declarative_edt__NewStatus_14;
#line 1799 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_19_19;
#line 18460 "mdb.declarative_edt.c"
        MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42, (MR_Integer) 0)), (MR_Integer) 8)));
#line 18462 "mdb.declarative_edt.c"
        MR_Box mdb__declarative_edt__conv1_EDTChildren_13;
#line 1801 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_37_37;
#line 1801 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_38_38;
#line 1801 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_39_39;
#line 1801 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_40_40;
#line 1801 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_41_41;

#line 18475 "mdb.declarative_edt.c"
        {
#line 18477 "mdb.declarative_edt.c"
          mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42), mdb__declarative_edt__Store_7, mdb__declarative_edt__V_49_49, &mdb__declarative_edt__conv1_EDTChildren_13);
        }
#line 18480 "mdb.declarative_edt.c"
        if (mdb__declarative_edt__succeeded)
#line 18482 "mdb.declarative_edt.c"
          {
#line 18484 "mdb.declarative_edt.c"
            mdb__declarative_edt__EDTChildren_13 = ((MR_Word) mdb__declarative_edt__conv1_EDTChildren_13);
#line 18486 "mdb.declarative_edt.c"
            mdb__declarative_edt__succeeded = MR_TRUE;
#line 18488 "mdb.declarative_edt.c"
          }
#line 1799 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1799 "declarative_edt.m"
          {
#line 1801 "declarative_edt.m"
            mdb__declarative_edt__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 0)));
#line 1801 "declarative_edt.m"
            mdb__declarative_edt__V_38_38 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 1));
#line 1801 "declarative_edt.m"
            mdb__declarative_edt__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 2)));
#line 1801 "declarative_edt.m"
            mdb__declarative_edt__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 3)));
#line 1801 "declarative_edt.m"
            mdb__declarative_edt__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 4)));
#line 1801 "declarative_edt.m"
            mdb__declarative_edt__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_12, (MR_Integer) 5)));
#line 799 "declarative_edt.m"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 801 "declarative_edt.m"
              mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 799 "declarative_edt.m"
            else
#line 799 "declarative_edt.m"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 802 "declarative_edt.m"
              mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 799 "declarative_edt.m"
            else
#line 799 "declarative_edt.m"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 799 "declarative_edt.m"
              mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 799 "declarative_edt.m"
            else
#line 799 "declarative_edt.m"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 806 "declarative_edt.m"
              mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 799 "declarative_edt.m"
            else
#line 799 "declarative_edt.m"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 803 "declarative_edt.m"
              mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 799 "declarative_edt.m"
            else
#line 799 "declarative_edt.m"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 804 "declarative_edt.m"
              mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 799 "declarative_edt.m"
            else
#line 799 "declarative_edt.m"
            if ((mdb__declarative_edt__V_19_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 807 "declarative_edt.m"
              mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 799 "declarative_edt.m"
            else
#line 800 "declarative_edt.m"
              mdb__declarative_edt__NewStatus_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 1802 "declarative_edt.m"
            {
#line 1802 "declarative_edt.m"
              mdb__declarative_edt__add_children_8_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_42, mdb__declarative_edt__Store_7, mdb__declarative_edt__Oracle_8, mdb__declarative_edt__EDTChildren_13, mdb__declarative_edt__SuspectId_9, mdb__declarative_edt__NewStatus_14, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_15, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16, mdb__declarative_edt__Children_11);
            }
#line 1802 "declarative_edt.m"
            mdb__declarative_edt__succeeded = MR_TRUE;
#line 1799 "declarative_edt.m"
          }
#line 1799 "declarative_edt.m"
      }
#line 1798 "declarative_edt.m"
    else
#line 1797 "declarative_edt.m"
      {
#line 1797 "declarative_edt.m"
        *mdb__declarative_edt__Children_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_46_46, (MR_Integer) 0)));
#line 1797 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_16 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_15;
#line 1797 "declarative_edt.m"
        mdb__declarative_edt__succeeded = MR_TRUE;
#line 1797 "declarative_edt.m"
      }
#line 1794 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1794 "declarative_edt.m"
  }
#line 298 "declarative_edt.m"
}

#line 288 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__non_ignored_descendants_6_p_0(
#line 288 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34,
#line 288 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_1,
#line 288 "declarative_edt.m"
  MR_Word mdb__declarative_edt__Oracle_2,
#line 288 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3,
#line 288 "declarative_edt.m"
  MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_4,
#line 288 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__STATE_VARIABLE_SearchSpace_5,
#line 288 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__6_6)
#line 288 "declarative_edt.m"
{
#line 1806 "declarative_edt.m"
  {
#line 1806 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;

#line 1806 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1806 "declarative_edt.m"
      {
#line 1806 "declarative_edt.m"
        *mdb__declarative_edt__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1806 "declarative_edt.m"
        *mdb__declarative_edt__STATE_VARIABLE_SearchSpace_5 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_4;
#line 1806 "declarative_edt.m"
        mdb__declarative_edt__succeeded = MR_TRUE;
#line 1806 "declarative_edt.m"
      }
#line 1806 "declarative_edt.m"
    else
#line 1808 "declarative_edt.m"
      {
#line 1808 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeInfo_36_36;
#line 1808 "declarative_edt.m"
        MR_Word mdb__declarative_edt__TypeCtorInfo_37_37;
#line 1808 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__SuspectId_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 0)));
#line 1808 "declarative_edt.m"
        MR_Word mdb__declarative_edt__SuspectIds_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__HeadVar__3_3, (MR_Integer) 1)));
#line 1808 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Suspect_18;
#line 1808 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Descendants1_20;
#line 1808 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Descendants2_21;
#line 1808 "declarative_edt.m"
        MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26;
#line 1810 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_24_24;
#line 1810 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_29_29;
#line 1810 "declarative_edt.m"
        MR_Box mdb__declarative_edt__V_30_30;
#line 1810 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_31_31;
#line 1810 "declarative_edt.m"
        MR_Word mdb__declarative_edt__V_32_32;
#line 1810 "declarative_edt.m"
        MR_Integer mdb__declarative_edt__V_33_33;

#line 18649 "mdb.declarative_edt.c"
        {
#line 18651 "mdb.declarative_edt.c"
          mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_36_36);
        }
#line 1809 "declarative_edt.m"
        {
#line 1809 "declarative_edt.m"
          mdb__declarative_edt__lookup_suspect_3_p_0(mdb__declarative_edt__TypeInfo_36_36, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_4, mdb__declarative_edt__SuspectId_14, &mdb__declarative_edt__Suspect_18);
        }
#line 1810 "declarative_edt.m"
        mdb__declarative_edt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 0)));
#line 1810 "declarative_edt.m"
        mdb__declarative_edt__V_30_30 = (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 1));
#line 1810 "declarative_edt.m"
        mdb__declarative_edt__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 2)));
#line 1810 "declarative_edt.m"
        mdb__declarative_edt__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 3)));
#line 1810 "declarative_edt.m"
        mdb__declarative_edt__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 4)));
#line 1810 "declarative_edt.m"
        mdb__declarative_edt__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__Suspect_18, (MR_Integer) 5)));
#line 1810 "declarative_edt.m"
        mdb__declarative_edt__succeeded = (mdb__declarative_edt__V_24_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1814 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1811 "declarative_edt.m"
          {
#line 1811 "declarative_edt.m"
            MR_Word mdb__declarative_edt__Children_19;
#line 1811 "declarative_edt.m"
            MR_Word mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25_25;

#line 1811 "declarative_edt.m"
            {
#line 1811 "declarative_edt.m"
              mdb__declarative_edt__succeeded = mdb__declarative_edt__children_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, mdb__declarative_edt__Store_1, mdb__declarative_edt__Oracle_2, mdb__declarative_edt__SuspectId_14, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_4, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25_25, &mdb__declarative_edt__Children_19);
            }
#line 1811 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1812 "declarative_edt.m"
              {
#line 1812 "declarative_edt.m"
                mdb__declarative_edt__succeeded = mdb__declarative_edt__non_ignored_descendants_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, mdb__declarative_edt__Store_1, mdb__declarative_edt__Oracle_2, mdb__declarative_edt__Children_19, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_25_25, &mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26, &mdb__declarative_edt__Descendants1_20);
              }
#line 1811 "declarative_edt.m"
          }
#line 1814 "declarative_edt.m"
        else
#line 1815 "declarative_edt.m"
          {
#line 1815 "declarative_edt.m"
            {
#line 1815 "declarative_edt.m"
              mdb__declarative_edt__Descendants1_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1815 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__Descendants1_20, 0) = ((MR_Box) (mdb__declarative_edt__SuspectId_14));
#line 1815 "declarative_edt.m"
              MR_hl_field(MR_mktag(1), mdb__declarative_edt__Descendants1_20, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1815 "declarative_edt.m"
            }
#line 1815 "declarative_edt.m"
            mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26 = mdb__declarative_edt__STATE_VARIABLE_SearchSpace_0_4;
#line 1815 "declarative_edt.m"
            mdb__declarative_edt__succeeded = MR_TRUE;
#line 1815 "declarative_edt.m"
          }
#line 1808 "declarative_edt.m"
        if (mdb__declarative_edt__succeeded)
#line 1808 "declarative_edt.m"
          {
#line 1817 "declarative_edt.m"
            {
#line 1817 "declarative_edt.m"
              mdb__declarative_edt__succeeded = mdb__declarative_edt__non_ignored_descendants_6_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_34, mdb__declarative_edt__Store_1, mdb__declarative_edt__Oracle_2, mdb__declarative_edt__SuspectIds_15, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_26_26, mdb__declarative_edt__STATE_VARIABLE_SearchSpace_5, &mdb__declarative_edt__Descendants2_21);
            }
#line 1808 "declarative_edt.m"
            if (mdb__declarative_edt__succeeded)
#line 1808 "declarative_edt.m"
              {
#line 18729 "mdb.declarative_edt.c"
                mdb__declarative_edt__TypeCtorInfo_37_37 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0;
#line 1819 "declarative_edt.m"
                {
#line 1819 "declarative_edt.m"
                  mercury__list__append_3_p_1(mdb__declarative_edt__TypeCtorInfo_37_37, mdb__declarative_edt__Descendants1_20, mdb__declarative_edt__Descendants2_21, mdb__declarative_edt__HeadVar__6_6);
                }
#line 1819 "declarative_edt.m"
                mdb__declarative_edt__succeeded = MR_TRUE;
#line 1808 "declarative_edt.m"
              }
#line 1808 "declarative_edt.m"
          }
#line 1808 "declarative_edt.m"
      }
#line 1806 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 1806 "declarative_edt.m"
  }
#line 288 "declarative_edt.m"
}

#line 278 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__topmost_det_2_p_0(
#line 278 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_23,
#line 278 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 278 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__TopMostId_4)
#line 278 "declarative_edt.m"
{
#line 676 "declarative_edt.m"
  {
#line 676 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 676 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 1)));
#line 674 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 6)));
#line 674 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 5)));
#line 674 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_27_27 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 4)));
#line 674 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_28_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 3)));
#line 674 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 2)));
#line 674 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 0)));

#line 676 "declarative_edt.m"
    if ((mdb__declarative_edt__V_30_30 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 677 "declarative_edt.m"
      {
#line 678 "declarative_edt.m"
        {
#line 678 "declarative_edt.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_edt_scalar_common_1[7])));
#line 678 "declarative_edt.m"
          return;
        }
#line 677 "declarative_edt.m"
      }
#line 676 "declarative_edt.m"
    else
#line 674 "declarative_edt.m"
      *mdb__declarative_edt__TopMostId_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_30_30, (MR_Integer) 0)));
#line 676 "declarative_edt.m"
  }
#line 278 "declarative_edt.m"
}

#line 273 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__root_2_p_0(
#line 273 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_12,
#line 273 "declarative_edt.m"
  MR_Word mdb__declarative_edt__SearchSpace_3,
#line 273 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__RootId_4)
#line 273 "declarative_edt.m"
{
#line 669 "declarative_edt.m"
  {
#line 669 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 669 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 0)));
#line 670 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 1)));
#line 670 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 2)));
#line 670 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 3)));
#line 670 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 4)));
#line 670 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 5)));
#line 670 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_edt__SearchSpace_3, (MR_Integer) 6)));

#line 670 "declarative_edt.m"
    mdb__declarative_edt__succeeded = ((MR_tag((MR_Word) mdb__declarative_edt__V_5_5)) == (MR_mktag((MR_Integer) 1)));
#line 670 "declarative_edt.m"
    if (mdb__declarative_edt__succeeded)
#line 670 "declarative_edt.m"
      *mdb__declarative_edt__RootId_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__V_5_5, (MR_Integer) 0)));
#line 669 "declarative_edt.m"
    return mdb__declarative_edt__succeeded;
#line 669 "declarative_edt.m"
  }
#line 273 "declarative_edt.m"
}

#line 262 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__initialise_search_space_4_p_0(
#line 262 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_28,
#line 262 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Store_5,
#line 262 "declarative_edt.m"
  MR_Word mdb__declarative_edt__MaybeWeighting_6,
#line 262 "declarative_edt.m"
  MR_Box mdb__declarative_edt__Node_7,
#line 262 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__SearchSpace_8)
#line 262 "declarative_edt.m"
{
#line 1647 "declarative_edt.m"
  {
#line 1647 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 1647 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_31_31;
#line 1647 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_33_33;
#line 1647 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_34_34;
#line 1647 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_35_35;
#line 1647 "declarative_edt.m"
    MR_Integer mdb__declarative_edt__Weight_10;
#line 1647 "declarative_edt.m"
    MR_Word mdb__declarative_edt__SuspectStore_12;
#line 1647 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_14_14;
#line 1647 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_15_15;
#line 1647 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_23_23;
#line 1647 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_25_25;
#line 1647 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_27_27;
#line 1656 "declarative_edt.m"
    MR_Word mdb__declarative_edt__conv6_V_15_15;

#line 1651 "declarative_edt.m"
    if ((mdb__declarative_edt__MaybeWeighting_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1653 "declarative_edt.m"
      mdb__declarative_edt__Weight_10 = (MR_Integer) 0;
#line 1651 "declarative_edt.m"
    else
#line 1649 "declarative_edt.m"
      {
#line 1649 "declarative_edt.m"
        MR_Word mdb__declarative_edt__Weighting_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_edt__MaybeWeighting_6, (MR_Integer) 0)));

#line 2035 "declarative_edt.m"
        if ((mdb__declarative_edt__Weighting_9 == (MR_Integer) 0))
#line 18903 "mdb.declarative_edt.c"
          {
#line 18905 "mdb.declarative_edt.c"
            MR_Integer mdb__declarative_edt__V_11_11;
#line 18907 "mdb.declarative_edt.c"
            void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_28, (MR_Integer) 0)), (MR_Integer) 15)));
#line 18909 "mdb.declarative_edt.c"
            MR_Box mdb__declarative_edt__conv2_Weight_10;
#line 18911 "mdb.declarative_edt.c"
            MR_Box mdb__declarative_edt__conv1_V_11_11;

#line 18914 "mdb.declarative_edt.c"
            {
#line 18916 "mdb.declarative_edt.c"
              mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_28), mdb__declarative_edt__Store_5, mdb__declarative_edt__Node_7, &mdb__declarative_edt__conv2_Weight_10, &mdb__declarative_edt__conv1_V_11_11);
            }
#line 18919 "mdb.declarative_edt.c"
            mdb__declarative_edt__Weight_10 = ((MR_Integer) mdb__declarative_edt__conv2_Weight_10);
#line 18921 "mdb.declarative_edt.c"
            mdb__declarative_edt__V_11_11 = ((MR_Integer) mdb__declarative_edt__conv1_V_11_11);
#line 18923 "mdb.declarative_edt.c"
          }
#line 2035 "declarative_edt.m"
        else
#line 18927 "mdb.declarative_edt.c"
          {
#line 18929 "mdb.declarative_edt.c"
            MR_Integer mdb__declarative_edt__V_44_44;
#line 18931 "mdb.declarative_edt.c"
            void MR_CALL (* mdb__declarative_edt__func_3)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_28, (MR_Integer) 0)), (MR_Integer) 16)));
#line 18933 "mdb.declarative_edt.c"
            MR_Box mdb__declarative_edt__conv5_Weight_10;
#line 18935 "mdb.declarative_edt.c"
            MR_Box mdb__declarative_edt__conv4_V_44_44;

#line 18938 "mdb.declarative_edt.c"
            {
#line 18940 "mdb.declarative_edt.c"
              mdb__declarative_edt__func_3(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_28), mdb__declarative_edt__Store_5, mdb__declarative_edt__Node_7, &mdb__declarative_edt__conv5_Weight_10, &mdb__declarative_edt__conv4_V_44_44);
            }
#line 18943 "mdb.declarative_edt.c"
            mdb__declarative_edt__Weight_10 = ((MR_Integer) mdb__declarative_edt__conv5_Weight_10);
#line 18945 "mdb.declarative_edt.c"
            mdb__declarative_edt__V_44_44 = ((MR_Integer) mdb__declarative_edt__conv4_V_44_44);
#line 18947 "mdb.declarative_edt.c"
          }
#line 1649 "declarative_edt.m"
      }
#line 1655 "declarative_edt.m"
    {
#line 1655 "declarative_edt.m"
      mdb__declarative_edt__V_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
#line 1655 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_14_14, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1655 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_14_14, 1) = mdb__declarative_edt__Node_7;
#line 1655 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_14_14, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6))));
#line 1655 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_14_14, 3) = ((MR_Box) ((MR_Integer) 0));
#line 1655 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_14_14, 4) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1655 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__V_14_14, 5) = ((MR_Box) (mdb__declarative_edt__Weight_10));
#line 1655 "declarative_edt.m"
    }
#line 18969 "mdb.declarative_edt.c"
    {
#line 18971 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_28, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_31_31);
    }
#line 18974 "mdb.declarative_edt.c"
    {
#line 18976 "mdb.declarative_edt.c"
      mdb__declarative_edt__TypeInfo_33_33 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 18978 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_33_33, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 18980 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_33_33, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_31_31));
#line 18982 "mdb.declarative_edt.c"
    }
#line 1656 "declarative_edt.m"
    {
#line 1656 "declarative_edt.m"
      mdb__declarative_edt__conv6_V_15_15 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_33_33);
    }
#line 1656 "declarative_edt.m"
    mdb__declarative_edt__V_15_15 = (MR_Word) mdb__declarative_edt__conv6_V_15_15;
#line 1655 "declarative_edt.m"
    {
#line 1655 "declarative_edt.m"
      mercury__map__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_115_101_116_95_95_91_75_32_61_32_105_110_116_93_95_48_95_49_4_p_0(mdb__declarative_edt__TypeInfo_33_33, (MR_Integer) 0, ((MR_Box) (mdb__declarative_edt__V_14_14)), mdb__declarative_edt__V_15_15, &mdb__declarative_edt__SuspectStore_12);
    }
#line 1657 "declarative_edt.m"
    {
#line 1657 "declarative_edt.m"
      mdb__declarative_edt__V_23_23 = mercury__counter__init_1_f_0((MR_Integer) 1);
    }
#line 1658 "declarative_edt.m"
    {
#line 1658 "declarative_edt.m"
      mdb__declarative_edt__V_25_25 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 19006 "mdb.declarative_edt.c"
    {
#line 19008 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_28, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_34_34);
    }
#line 19011 "mdb.declarative_edt.c"
    {
#line 19013 "mdb.declarative_edt.c"
      mercury__private_builtin__type_info_from_typeclass_info_3_p_0(mdb__declarative_edt__TypeClassInfo_for_mercury_edt_28, (MR_Integer) 2, &mdb__declarative_edt__TypeInfo_35_35);
    }
#line 1658 "declarative_edt.m"
    {
#line 1658 "declarative_edt.m"
      mdb__declarative_edt__V_27_27 = mercury__bimap__init_0_f_0(mdb__declarative_edt__TypeInfo_34_34, mdb__declarative_edt__TypeInfo_35_35);
    }
#line 1657 "declarative_edt.m"
    {
#line 1657 "declarative_edt.m"
      MR_Word base;
#line 1657 "declarative_edt.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 1657 "declarative_edt.m"
      *mdb__declarative_edt__SearchSpace_8 = base;
#line 1657 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1657 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_edt_scalar_common_2[0])));
#line 1657 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mdb__declarative_edt__V_23_23));
#line 1657 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 3) = ((MR_Box) (mdb__declarative_edt__V_25_25));
#line 1657 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 4) = ((MR_Box) (mdb__declarative_edt__SuspectStore_12));
#line 1657 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 5) = ((MR_Box) (mdb__declarative_edt__V_27_27));
#line 1657 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), base, 6) = ((MR_Box) (mdb__declarative_edt__MaybeWeighting_6));
#line 1657 "declarative_edt.m"
    }
#line 1647 "declarative_edt.m"
  }
#line 262 "declarative_edt.m"
}

#line 257 "declarative_edt.m"
MR_Word MR_CALL 
mdb__declarative_edt__empty_search_space_0_f_0(
#line 257 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeInfo_for_T_11)
#line 257 "declarative_edt.m"
{
#line 665 "declarative_edt.m"
  {
#line 665 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__HeadVar__1_1;
#line 665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__TypeInfo_14_14;
#line 665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_4_4;
#line 665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_6_6;
#line 665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_8_8;
#line 665 "declarative_edt.m"
    MR_Word mdb__declarative_edt__V_9_9;

#line 666 "declarative_edt.m"
    {
#line 666 "declarative_edt.m"
      mdb__declarative_edt__V_4_4 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 666 "declarative_edt.m"
    {
#line 666 "declarative_edt.m"
      mdb__declarative_edt__V_6_6 = mercury__counter__init_1_f_0((MR_Integer) 0);
    }
#line 19084 "mdb.declarative_edt.c"
    {
#line 19086 "mdb.declarative_edt.c"
      mdb__declarative_edt__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 19088 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_14_14, 0) = ((MR_Box) (&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1));
#line 19090 "mdb.declarative_edt.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeInfo_14_14, 1) = ((MR_Box) (mdb__declarative_edt__TypeInfo_for_T_11));
#line 19092 "mdb.declarative_edt.c"
    }
#line 667 "declarative_edt.m"
    {
#line 667 "declarative_edt.m"
      mdb__declarative_edt__V_8_8 = mercury__map__init_0_f_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_int_0, mdb__declarative_edt__TypeInfo_14_14);
    }
#line 667 "declarative_edt.m"
    {
#line 667 "declarative_edt.m"
      mdb__declarative_edt__V_9_9 = mercury__bimap__init_0_f_0(mdb__declarative_edt__TypeInfo_for_T_11, mdb__declarative_edt__TypeInfo_for_T_11);
    }
#line 666 "declarative_edt.m"
    {
#line 666 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__1_1 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL);
#line 666 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 0) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 2) = ((MR_Box) (mdb__declarative_edt__V_4_4));
#line 666 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 3) = ((MR_Box) (mdb__declarative_edt__V_6_6));
#line 666 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 4) = ((MR_Box) (mdb__declarative_edt__V_8_8));
#line 666 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 5) = ((MR_Box) (mdb__declarative_edt__V_9_9));
#line 666 "declarative_edt.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_edt__HeadVar__1_1, 6) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 666 "declarative_edt.m"
    }
#line 665 "declarative_edt.m"
    return mdb__declarative_edt__HeadVar__1_1;
#line 665 "declarative_edt.m"
  }
#line 257 "declarative_edt.m"
}

#line 226 "declarative_edt.m"
MR_String MR_CALL 
mdb__declarative_edt__primitive_op_type_to_string_1_f_0(
#line 226 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__1_1)
#line 226 "declarative_edt.m"
{
#line 2003 "declarative_edt.m"
  {
#line 2003 "declarative_edt.m"
    MR_bool mdb__declarative_edt__succeeded;
#line 2003 "declarative_edt.m"
    MR_String mdb__declarative_edt__HeadVar__2_2;

#line 2003 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == (MR_Integer) 1))
#line 2004 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_String) "builtin operation";
#line 2003 "declarative_edt.m"
    else
#line 2003 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == (MR_Integer) 0))
#line 2003 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_String) "foreign procedure call";
#line 2003 "declarative_edt.m"
    else
#line 2003 "declarative_edt.m"
    if ((mdb__declarative_edt__HeadVar__1_1 == (MR_Integer) 3))
#line 2006 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_String) "unification";
#line 2003 "declarative_edt.m"
    else
#line 2005 "declarative_edt.m"
      mdb__declarative_edt__HeadVar__2_2 = (MR_String) "untraced call";
#line 2003 "declarative_edt.m"
    return mdb__declarative_edt__HeadVar__2_2;
#line 2003 "declarative_edt.m"
  }
#line 226 "declarative_edt.m"
}

#line 188 "declarative_edt.m"
MR_Integer MR_CALL 
mdb__declarative_edt__edt_arg_pos_to_user_arg_num_3_f_0(
#line 188 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5,
#line 188 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 188 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 188 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3)
#line 188 "declarative_edt.m"
{
#line 19185 "mdb.declarative_edt.c"
  {
#line 19187 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19189 "mdb.declarative_edt.c"
    MR_Integer mdb__declarative_edt__HeadVar__4_4;
#line 19191 "mdb.declarative_edt.c"
    MR_Box MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 19)));
#line 19193 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

#line 19196 "mdb.declarative_edt.c"
    {
#line 19198 "mdb.declarative_edt.c"
      mdb__declarative_edt__conv1_HeadVar__4_4 = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, ((MR_Box) (mdb__declarative_edt__HeadVar__3_3)));
    }
#line 19201 "mdb.declarative_edt.c"
    mdb__declarative_edt__HeadVar__4_4 = ((MR_Integer) mdb__declarative_edt__conv1_HeadVar__4_4);
#line 19203 "mdb.declarative_edt.c"
    return mdb__declarative_edt__HeadVar__4_4;
#line 19205 "mdb.declarative_edt.c"
  }
#line 188 "declarative_edt.m"
}

#line 183 "declarative_edt.m"
MR_Word MR_CALL 
mdb__declarative_edt__edt_proc_label_2_f_0(
#line 183 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
#line 183 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 183 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2)
#line 183 "declarative_edt.m"
{
#line 19221 "mdb.declarative_edt.c"
  {
#line 19223 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19225 "mdb.declarative_edt.c"
    MR_Word mdb__declarative_edt__HeadVar__3_3;
#line 19227 "mdb.declarative_edt.c"
    MR_Box MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 18)));
#line 19229 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__3_3;

#line 19232 "mdb.declarative_edt.c"
    {
#line 19234 "mdb.declarative_edt.c"
      mdb__declarative_edt__conv1_HeadVar__3_3 = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2);
    }
#line 19237 "mdb.declarative_edt.c"
    mdb__declarative_edt__HeadVar__3_3 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__3_3);
#line 19239 "mdb.declarative_edt.c"
    return mdb__declarative_edt__HeadVar__3_3;
#line 19241 "mdb.declarative_edt.c"
  }
#line 183 "declarative_edt.m"
}

#line 178 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__edt_context_4_p_0(
#line 178 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5,
#line 178 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 178 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 178 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__3_3,
#line 178 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__4_4)
#line 178 "declarative_edt.m"
{
#line 19261 "mdb.declarative_edt.c"
  {
#line 19263 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19265 "mdb.declarative_edt.c"
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 17)));
#line 19267 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv2_HeadVar__3_3;
#line 19269 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

#line 19272 "mdb.declarative_edt.c"
    {
#line 19274 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv2_HeadVar__3_3, &mdb__declarative_edt__conv1_HeadVar__4_4);
    }
#line 19277 "mdb.declarative_edt.c"
    if (mdb__declarative_edt__succeeded)
#line 19279 "mdb.declarative_edt.c"
      {
#line 19281 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__3_3 = ((MR_Word) mdb__declarative_edt__conv2_HeadVar__3_3);
#line 19283 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__4_4 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__4_4);
#line 19285 "mdb.declarative_edt.c"
        mdb__declarative_edt__succeeded = MR_TRUE;
#line 19287 "mdb.declarative_edt.c"
      }
#line 19289 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 19291 "mdb.declarative_edt.c"
  }
#line 178 "declarative_edt.m"
}

#line 171 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__edt_subtree_suspicion_4_p_0(
#line 171 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5,
#line 171 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 171 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 171 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__HeadVar__3_3,
#line 171 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__HeadVar__4_4)
#line 171 "declarative_edt.m"
{
#line 19311 "mdb.declarative_edt.c"
  {
#line 19313 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19315 "mdb.declarative_edt.c"
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 16)));
#line 19317 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv2_HeadVar__3_3;
#line 19319 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

#line 19322 "mdb.declarative_edt.c"
    {
#line 19324 "mdb.declarative_edt.c"
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv2_HeadVar__3_3, &mdb__declarative_edt__conv1_HeadVar__4_4);
    }
#line 19327 "mdb.declarative_edt.c"
    *mdb__declarative_edt__HeadVar__3_3 = ((MR_Integer) mdb__declarative_edt__conv2_HeadVar__3_3);
#line 19329 "mdb.declarative_edt.c"
    *mdb__declarative_edt__HeadVar__4_4 = ((MR_Integer) mdb__declarative_edt__conv1_HeadVar__4_4);
#line 19331 "mdb.declarative_edt.c"
  }
#line 171 "declarative_edt.m"
}

#line 164 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__edt_number_of_events_4_p_0(
#line 164 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5,
#line 164 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 164 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 164 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__HeadVar__3_3,
#line 164 "declarative_edt.m"
  MR_Integer * mdb__declarative_edt__HeadVar__4_4)
#line 164 "declarative_edt.m"
{
#line 19351 "mdb.declarative_edt.c"
  {
#line 19353 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19355 "mdb.declarative_edt.c"
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 15)));
#line 19357 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv2_HeadVar__3_3;
#line 19359 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

#line 19362 "mdb.declarative_edt.c"
    {
#line 19364 "mdb.declarative_edt.c"
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv2_HeadVar__3_3, &mdb__declarative_edt__conv1_HeadVar__4_4);
    }
#line 19367 "mdb.declarative_edt.c"
    *mdb__declarative_edt__HeadVar__3_3 = ((MR_Integer) mdb__declarative_edt__conv2_HeadVar__3_3);
#line 19369 "mdb.declarative_edt.c"
    *mdb__declarative_edt__HeadVar__4_4 = ((MR_Integer) mdb__declarative_edt__conv1_HeadVar__4_4);
#line 19371 "mdb.declarative_edt.c"
  }
#line 164 "declarative_edt.m"
}

#line 155 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__edt_topmost_node_2_p_0(
#line 155 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3,
#line 155 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 155 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2)
#line 155 "declarative_edt.m"
{
#line 19387 "mdb.declarative_edt.c"
  {
#line 19389 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19391 "mdb.declarative_edt.c"
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3, (MR_Integer) 0)), (MR_Integer) 14)));

#line 19394 "mdb.declarative_edt.c"
    {
#line 19396 "mdb.declarative_edt.c"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2);
    }
#line 19399 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 19401 "mdb.declarative_edt.c"
  }
#line 155 "declarative_edt.m"
}

#line 150 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__edt_same_nodes_3_p_0(
#line 150 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
#line 150 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 150 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 150 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__3_3)
#line 150 "declarative_edt.m"
{
#line 19419 "mdb.declarative_edt.c"
  {
#line 19421 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19423 "mdb.declarative_edt.c"
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 13)));

#line 19426 "mdb.declarative_edt.c"
    {
#line 19428 "mdb.declarative_edt.c"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, mdb__declarative_edt__HeadVar__3_3);
    }
#line 19431 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 19433 "mdb.declarative_edt.c"
  }
#line 150 "declarative_edt.m"
}

#line 145 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__edt_is_implicit_root_2_p_0(
#line 145 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3,
#line 145 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 145 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2)
#line 145 "declarative_edt.m"
{
#line 19449 "mdb.declarative_edt.c"
  {
#line 19451 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19453 "mdb.declarative_edt.c"
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3, (MR_Integer) 0)), (MR_Integer) 12)));

#line 19456 "mdb.declarative_edt.c"
    {
#line 19458 "mdb.declarative_edt.c"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_3), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2);
    }
#line 19461 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 19463 "mdb.declarative_edt.c"
  }
#line 145 "declarative_edt.m"
}

#line 139 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__edt_subterm_mode_5_p_0(
#line 139 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_6,
#line 139 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 139 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 139 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3,
#line 139 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__4_4,
#line 139 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__5_5)
#line 139 "declarative_edt.m"
{
#line 19485 "mdb.declarative_edt.c"
  {
#line 19487 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19489 "mdb.declarative_edt.c"
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_6, (MR_Integer) 0)), (MR_Integer) 11)));
#line 19491 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__5_5;

#line 19494 "mdb.declarative_edt.c"
    {
#line 19496 "mdb.declarative_edt.c"
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_6), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, ((MR_Box) (mdb__declarative_edt__HeadVar__3_3)), ((MR_Box) (mdb__declarative_edt__HeadVar__4_4)), &mdb__declarative_edt__conv1_HeadVar__5_5);
    }
#line 19499 "mdb.declarative_edt.c"
    *mdb__declarative_edt__HeadVar__5_5 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__5_5);
#line 19501 "mdb.declarative_edt.c"
  }
#line 139 "declarative_edt.m"
}

#line 134 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__edt_dependency_6_p_0(
#line 134 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7,
#line 134 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 134 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 134 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__3_3,
#line 134 "declarative_edt.m"
  MR_Word mdb__declarative_edt__HeadVar__4_4,
#line 134 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__5_5,
#line 134 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__6_6)
#line 134 "declarative_edt.m"
{
#line 19525 "mdb.declarative_edt.c"
  {
#line 19527 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19529 "mdb.declarative_edt.c"
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7, (MR_Integer) 0)), (MR_Integer) 10)));
#line 19531 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv2_HeadVar__5_5;
#line 19533 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__6_6;

#line 19536 "mdb.declarative_edt.c"
    {
#line 19538 "mdb.declarative_edt.c"
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_7), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, ((MR_Box) (mdb__declarative_edt__HeadVar__3_3)), ((MR_Box) (mdb__declarative_edt__HeadVar__4_4)), &mdb__declarative_edt__conv2_HeadVar__5_5, &mdb__declarative_edt__conv1_HeadVar__6_6);
    }
#line 19541 "mdb.declarative_edt.c"
    *mdb__declarative_edt__HeadVar__5_5 = ((MR_Word) mdb__declarative_edt__conv2_HeadVar__5_5);
#line 19543 "mdb.declarative_edt.c"
    *mdb__declarative_edt__HeadVar__6_6 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__6_6);
#line 19545 "mdb.declarative_edt.c"
  }
#line 134 "declarative_edt.m"
}

#line 129 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__edt_parent_3_p_0(
#line 129 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
#line 129 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 129 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 129 "declarative_edt.m"
  MR_Box * mdb__declarative_edt__HeadVar__3_3)
#line 129 "declarative_edt.m"
{
#line 19563 "mdb.declarative_edt.c"
  {
#line 19565 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19567 "mdb.declarative_edt.c"
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 9)));

#line 19570 "mdb.declarative_edt.c"
    {
#line 19572 "mdb.declarative_edt.c"
      return mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, mdb__declarative_edt__HeadVar__3_3);
    }
#line 19575 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 19577 "mdb.declarative_edt.c"
  }
#line 129 "declarative_edt.m"
}

#line 119 "declarative_edt.m"
MR_bool MR_CALL 
mdb__declarative_edt__edt_children_3_p_0(
#line 119 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
#line 119 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 119 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 119 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__3_3)
#line 119 "declarative_edt.m"
{
#line 19595 "mdb.declarative_edt.c"
  {
#line 19597 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19599 "mdb.declarative_edt.c"
    MR_bool MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 8)));
#line 19601 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__3_3;

#line 19604 "mdb.declarative_edt.c"
    {
#line 19606 "mdb.declarative_edt.c"
      mdb__declarative_edt__succeeded = mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv1_HeadVar__3_3);
    }
#line 19609 "mdb.declarative_edt.c"
    if (mdb__declarative_edt__succeeded)
#line 19611 "mdb.declarative_edt.c"
      {
#line 19613 "mdb.declarative_edt.c"
        *mdb__declarative_edt__HeadVar__3_3 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__3_3);
#line 19615 "mdb.declarative_edt.c"
        mdb__declarative_edt__succeeded = MR_TRUE;
#line 19617 "mdb.declarative_edt.c"
      }
#line 19619 "mdb.declarative_edt.c"
    return mdb__declarative_edt__succeeded;
#line 19621 "mdb.declarative_edt.c"
  }
#line 119 "declarative_edt.m"
}

#line 114 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__edt_get_i_bug_4_p_0(
#line 114 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5,
#line 114 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 114 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 114 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__3_3,
#line 114 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__4_4)
#line 114 "declarative_edt.m"
{
#line 19641 "mdb.declarative_edt.c"
  {
#line 19643 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19645 "mdb.declarative_edt.c"
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5, (MR_Integer) 0)), (MR_Integer) 7)));
#line 19647 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__4_4;

#line 19650 "mdb.declarative_edt.c"
    {
#line 19652 "mdb.declarative_edt.c"
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_5), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, mdb__declarative_edt__HeadVar__3_3, &mdb__declarative_edt__conv1_HeadVar__4_4);
    }
#line 19655 "mdb.declarative_edt.c"
    *mdb__declarative_edt__HeadVar__4_4 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__4_4);
#line 19657 "mdb.declarative_edt.c"
  }
#line 114 "declarative_edt.m"
}

#line 108 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__edt_get_e_bug_3_p_0(
#line 108 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
#line 108 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 108 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 108 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__3_3)
#line 108 "declarative_edt.m"
{
#line 19675 "mdb.declarative_edt.c"
  {
#line 19677 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19679 "mdb.declarative_edt.c"
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 6)));
#line 19681 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__3_3;

#line 19684 "mdb.declarative_edt.c"
    {
#line 19686 "mdb.declarative_edt.c"
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv1_HeadVar__3_3);
    }
#line 19689 "mdb.declarative_edt.c"
    *mdb__declarative_edt__HeadVar__3_3 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__3_3);
#line 19691 "mdb.declarative_edt.c"
  }
#line 108 "declarative_edt.m"
}

#line 103 "declarative_edt.m"
void MR_CALL 
mdb__declarative_edt__edt_question_3_p_0(
#line 103 "declarative_edt.m"
  MR_Word mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4,
#line 103 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__1_1,
#line 103 "declarative_edt.m"
  MR_Box mdb__declarative_edt__HeadVar__2_2,
#line 103 "declarative_edt.m"
  MR_Word * mdb__declarative_edt__HeadVar__3_3)
#line 103 "declarative_edt.m"
{
#line 19709 "mdb.declarative_edt.c"
  {
#line 19711 "mdb.declarative_edt.c"
    MR_bool mdb__declarative_edt__succeeded;
#line 19713 "mdb.declarative_edt.c"
    void MR_CALL (* mdb__declarative_edt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 19715 "mdb.declarative_edt.c"
    MR_Box mdb__declarative_edt__conv1_HeadVar__3_3;

#line 19718 "mdb.declarative_edt.c"
    {
#line 19720 "mdb.declarative_edt.c"
      mdb__declarative_edt__func_0(((MR_Box) mdb__declarative_edt__TypeClassInfo_for_mercury_edt_4), mdb__declarative_edt__HeadVar__1_1, mdb__declarative_edt__HeadVar__2_2, &mdb__declarative_edt__conv1_HeadVar__3_3);
    }
#line 19723 "mdb.declarative_edt.c"
    *mdb__declarative_edt__HeadVar__3_3 = ((MR_Word) mdb__declarative_edt__conv1_HeadVar__3_3);
#line 19725 "mdb.declarative_edt.c"
  }
#line 103 "declarative_edt.m"
}

void mercury__mdb__declarative_edt__init(void)
{
}

void mercury__mdb__declarative_edt__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_find_origin_response_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_maybe_found_descendant_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_primitive_op_type_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_search_space_1);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_mode_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_subterm_origin_1);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_1);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_id_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_suspect_status_0);
	MR_register_type_ctor_info(&mdb__declarative_edt__mdb__declarative_edt__type_ctor_info_weighting_heuristic_0);
}

void mercury__mdb__declarative_edt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.declarative_edt. */
