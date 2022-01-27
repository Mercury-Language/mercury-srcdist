/*
** Automatically generated from `declarative_execution.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module mdb.declarative_execution. */
/* :- implementation. */

/*
INIT mercury__mdb__declarative_execution__init
ENDINIT
*/

#include "mdb.declarative_execution.mih"
#include "mdb.declarative_execution.mh"


#include "mdb.mih"
#include "mdbcomp.mih"
#include "mdb.browser_info.mih"
#include "mdb.browser_term.mih"
#include "mdb.declarative_analyser.mih"
#include "mdb.declarative_debugger.mih"
#include "mdb.declarative_edt.mih"
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




#line 93 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0;

#line 96 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1;

#line 99 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2;

#line 102 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_goal_status_0[3];

#line 105 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_goal_status_0[3];

#line 108 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_goal_status_0[3];

#line 111 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0[1];

#line 114 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0;

#line 117 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0;

#line 120 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0[2];

#line 123 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0[2];

#line 126 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0;

#line 129 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0[1];

#line 132 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0[1];

#line 135 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0[1];

#line 138 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0[1];

#line 141 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0;

#line 144 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0[3];

#line 147 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0[3];

#line 150 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0;

#line 153 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0[1];

#line 156 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0[1];

#line 159 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0[1];

#line 162 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0[1];

#line 165 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0;

#line 168 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0;

#line 171 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_0[10];

#line 174 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_0[10];

#line 177 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0;

#line 180 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_1[8];

#line 183 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_1[8];

#line 186 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1;

#line 189 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2[5];

#line 192 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_2[5];

#line 195 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2;

#line 198 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3[6];

#line 201 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_3[6];

#line 204 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_3;

#line 207 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4[7];

#line 210 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_4[7];

#line 213 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_4;

#line 216 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5[2];

#line 219 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5[2];

#line 222 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_5;

#line 225 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6[2];

#line 228 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6[2];

#line 231 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_6;

#line 234 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7[3];

#line 237 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7[3];

#line 240 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_7;

#line 243 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8[3];

#line 246 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8[3];

#line 249 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_8;

#line 252 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9[3];

#line 255 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9[3];

#line 258 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_9;

#line 261 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10[3];

#line 264 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10[3];

#line 267 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_10;

#line 270 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11[3];

#line 273 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11[3];

#line 276 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_11;

#line 279 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12[3];

#line 282 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12[3];

#line 285 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_12;

#line 288 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13[3];

#line 291 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13[3];

#line 294 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_13;

#line 297 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0[1];

#line 300 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1[1];

#line 303 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2[1];

#line 306 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_3[11];

#line 309 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_node_1[4];

#line 312 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_node_1[14];

#line 315 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_1[14];

#line 318 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0[1];

#line 321 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0;

#line 324 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0[1];

#line 327 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0;

#line 330 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0[1];

#line 333 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0;

#line 336 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0;

#line 339 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0;

#line 342 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0[1];

#line 345 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0;

#line 348 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0;

#line 351 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1;

#line 354 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_which_headvars_0[2];

#line 357 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_which_headvars_0[2];

#line 360 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_which_headvars_0[2];

#line 363 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__type_class_id_var_names_annotated_trace_2[2];

#line 366 "mdb.declarative_execution.c"
static const MR_TypeClassMethod mdb__declarative_execution__mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2[1];

#line 369 "mdb.declarative_execution.c"
static const MR_TypeClassId mdb__declarative_execution__mdb__declarative_execution__type_class_id_annotated_trace_2;

#line 372 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0_10001(
#line 375 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 377 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 380 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0_10001(
#line 383 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 385 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 387 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 390 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0_10001(
#line 393 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 395 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 398 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0_10001(
#line 401 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 403 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 405 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 408 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001(
#line 411 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 413 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 416 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001(
#line 419 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 421 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 423 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 426 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0_10001(
#line 429 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 431 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 434 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0_10001(
#line 437 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 439 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 441 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 444 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001(
#line 447 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 449 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 452 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001(
#line 455 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 457 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 459 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 462 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0_10001(
#line 465 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 467 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 470 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0_10001(
#line 473 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 475 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 477 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 480 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001(
#line 483 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 485 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 488 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001(
#line 491 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 493 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 495 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 498 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0_10001(
#line 501 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 503 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 505 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 508 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0_10001(
#line 511 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 513 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_2,
#line 515 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3,
#line 517 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_4);

#line 520 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0_10001(
#line 523 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 525 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 528 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0_10001(
#line 531 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 533 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 535 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 538 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0_10001(
#line 541 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 543 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 546 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0_10001(
#line 549 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 551 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 553 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 556 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0_10001(
#line 559 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 561 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 564 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0_10001(
#line 567 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 569 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 571 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 574 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0_10001(
#line 577 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 579 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 582 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0_10001(
#line 585 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 587 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 589 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 592 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0_10001(
#line 595 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 597 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 600 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0_10001(
#line 603 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 605 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 607 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 610 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
#line 613 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__closure_arg,
#line 615 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 617 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 619 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_3);

#line 622 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
#line 625 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__closure_arg,
#line 627 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 629 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 631 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_3);

#line 862 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 862 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 862 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 862 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3);

#line 1371 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 1371 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1371 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1371 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3);

#line 1548 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(
#line 1548 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1548 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ArgNum_2,
#line 1548 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1548 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__UserArgNum_4);

#line 1525 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(
#line 1525 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1525 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SearchUserHeadVarNum_2,
#line 1525 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1525 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__ArgNum_4);

#line 1449 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__convert_node_2_p_0(
#line 1449 "declarative_execution.m"
  MR_Word mdb__declarative_execution__N1_1,
#line 1449 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__N2_2);

#line 1437 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_id_to_key_2_p_0(
#line 1437 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_1,
#line 1437 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Key_2);

#line 1423 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_map_4_p_0(
#line 1423 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_5,
#line 1423 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_6,
#line 1423 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3,
#line 1423 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Map_8);

#line 1338 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0(
#line 1338 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_5,
#line 1338 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_6,
#line 1338 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_7,
#line 1338 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__4_4);

#line 1326 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_value_5_p_0(
#line 1326 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_6,
#line 1326 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_7,
#line 1326 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Val_8,
#line 1326 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_9,
#line 1326 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__5_5);

#line 1313 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__init_trace_atom_args_0_f_0(void);

#line 1301 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__null_trace_node_id_1_p_0(
#line 1301 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Id_1);

#line 1292 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_fail_node_3_f_0(
#line 1292 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1292 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1292 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1283 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_succ_node_3_f_0(
#line 1283 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1283 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1283 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1275 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_node_2_f_0(
#line 1275 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1275 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1266 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_else_node_3_f_0(
#line 1266 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1266 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1266 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1257 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_then_node_3_f_0(
#line 1257 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1257 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1257 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1249 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_cond_node_2_f_0(
#line 1249 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1249 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1233 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_later_disj_node_4_f_0(
#line 1233 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_6,
#line 1233 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1233 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_8,
#line 1233 "declarative_execution.m"
  MR_Word mdb__declarative_execution__PrevDisj_9);

#line 1224 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_first_disj_node_2_f_0(
#line 1224 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1224 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1216 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_switch_node_2_f_0(
#line 1216 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1216 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1203 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__construct_excp_node_8_p_0(
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_9,
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_10,
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_11,
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exception_12,
#line 1203 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_13,
#line 1203 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_14,
#line 1203 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_15,
#line 1203 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Excp_16);

#line 1193 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_fail_node_6_f_0(
#line 1193 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_8,
#line 1193 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_9,
#line 1193 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Redo_10,
#line 1193 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_11,
#line 1193 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_12,
#line 1193 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_13);

#line 1184 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_redo_node_5_f_0(
#line 1184 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1184 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exit_8,
#line 1184 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Event_9,
#line 1184 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_10,
#line 1184 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_11);

#line 1172 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_exit_node_8_f_0(
#line 1172 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_10,
#line 1172 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_11,
#line 1172 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_12,
#line 1172 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_13,
#line 1172 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1172 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_15,
#line 1172 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
#line 1172 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_17);

#line 1166 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_no_maybe_label_0_f_0(void);

#line 1160 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_yes_maybe_label_1_f_0(
#line 1160 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_3);

#line 1137 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_call_node_9_f_0(
#line 1137 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_11,
#line 1137 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_12,
#line 1137 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SeqNo_13,
#line 1137 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1137 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
#line 1137 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
#line 1137 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_17,
#line 1137 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
#line 1137 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_19);

#line 1121 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__print_trace_node_4_p_0(
#line 1121 "declarative_execution.m"
  MR_Word mdb__declarative_execution__OutStr_5,
#line 1121 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_6);

#line 1105 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__find_prev_contour_store_2_f_0(
#line 1105 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1105 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_5);

#line 1092 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__step_left_in_contour_store_2_f_0(
#line 1092 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1092 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5);

#line 1079 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_first_disj_2_p_0(
#line 1079 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1079 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__2_2);

#line 1066 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_call_3_p_0(
#line 1066 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_1,
#line 1066 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1066 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Call_3);

#line 1051 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_seqno_3_p_0(
#line 1051 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_4,
#line 1051 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 1051 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__SeqNo_6);

#line 1026 "declarative_execution.m"
static MR_String MR_CALL 
mdb__declarative_execution__trace_node_path_1_f_0(
#line 1026 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_3);

#line 1007 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__trace_node_port_1_f_0(
#line 1007 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1);

#line 981 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__neg_node_set_status_2_f_0(
#line 981 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg0_4,
#line 981 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5);

#line 965 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__cond_node_set_status_2_f_0(
#line 965 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond0_4,
#line 965 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5);

#line 946 "declarative_execution.m"
static MR_Integer MR_CALL 
mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0(
#line 946 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3);

#line 928 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0(
#line 928 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 928 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IdealDepth_5);

#line 911 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_set_last_interface_2_f_0(
#line 911 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 911 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Last_5);

#line 898 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_get_last_interface_1_f_0(
#line 898 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3);

#line 881 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__search_trace_node_store_3_p_0(
#line 881 "declarative_execution.m"
  MR_Word mdb__declarative_execution___Store_1,
#line 881 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_2,
#line 881 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_3);

#line 767 "declarative_execution.m"
static MR_Box MR_CALL 
mdb__declarative_execution__step_over_redo_or_call_3_f_0(
#line 767 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24,
#line 767 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_5,
#line 767 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Call_6,
#line 767 "declarative_execution.m"
  MR_Box mdb__declarative_execution__MaybeRedo_7);

#line 680 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_1(
#line 680 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67,
#line 680 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 680 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 680 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__OnContour_6);

#line 584 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__cache_proc_defn_rep_2_p_0(
#line 584 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 584 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ProcDefnRep_2);

#line 545 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0(
#line 545 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 545 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__ProcDefnRep_2);

#line 506 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__call_node_bytecode_layout_2_p_0(
#line 506 "declarative_execution.m"
  MR_Box mdb__declarative_execution__CallLabelLayout_1,
#line 506 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__ProcLayout_2);

#line 1490 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0_1(
#line 1490 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1490 "declarative_execution.m"
  MR_Box mdb__declarative_execution__wrapper_arg_1);

#line 1490 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0_1(
#line 1490 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1490 "declarative_execution.m"
  MR_Box mdb__declarative_execution__wrapper_arg_1);


static /* final */ const MR_Box mdb__declarative_execution_scalar_common_1[34][2];

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_2[4][3];

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_3[1][4];

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_4[1][1];




static /* final */ const MR_Box mdb__declarative_execution_scalar_common_1[34][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_String) "call_node_maybe_proc_defn_rep")),
    ((MR_Box) ((MR_String) "cannot interpret proc bytecode"))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "unexpected CALL node"))
  },
  /* row 8 */
  {
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "failed COND node"))
  },
  /* row 9 */
  {
    ((MR_Box) ((MR_String) "step_left_in_contour")),
    ((MR_Box) ((MR_String) "unexpected NEGE node"))
  },
  /* row 10 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "unexpected CALL node"))
  },
  /* row 11 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "failed COND node"))
  },
  /* row 12 */
  {
    ((MR_Box) ((MR_String) "step_in_stratum")),
    ((MR_Box) ((MR_String) "unexpected NEGE node"))
  },
  /* row 13 */
  {
    ((MR_Box) ((MR_String) "det_trace_node_from_id")),
    ((MR_Box) ((MR_String) "NULL node id"))
  },
  /* row 14 */
  {
    ((MR_Box) ((MR_String) "call_node_from_id")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 15 */
  {
    ((MR_Box) ((MR_String) "maybe_redo_node_from_id")),
    ((MR_Box) ((MR_String) "not a REDO node or NULL"))
  },
  /* row 16 */
  {
    ((MR_Box) ((MR_String) "exit_node_from_id")),
    ((MR_Box) ((MR_String) "not an EXIT node"))
  },
  /* row 17 */
  {
    ((MR_Box) ((MR_String) "cond_node_from_id")),
    ((MR_Box) ((MR_String) "not a COND node"))
  },
  /* row 18 */
  {
    ((MR_Box) ((MR_String) "neg_node_from_id")),
    ((MR_Box) ((MR_String) "not a NEG node"))
  },
  /* row 19 */
  {
    ((MR_Box) ((MR_String) "first_disj_node_from_id")),
    ((MR_Box) ((MR_String) "not a first DISJ node"))
  },
  /* row 20 */
  {
    ((MR_Box) ((MR_String) "disj_node_from_id")),
    ((MR_Box) ((MR_String) "not a DISJ node"))
  },
  /* row 21 */
  {
    ((MR_Box) ((MR_String) "load_trace_node_map")),
    ((MR_Box) ((MR_String) "unexpected EOF"))
  },
  /* row 22 */
  {
    ((MR_Box) ((MR_String) "call_node_get_last_interface")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 23 */
  {
    ((MR_Box) ((MR_String) "call_node_set_last_interface")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 24 */
  {
    ((MR_Box) ((MR_String) "call_node_update_implicit_tree_info")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 25 */
  {
    ((MR_Box) ((MR_String) "get_implicit_tree_max_depth")),
    ((MR_Box) ((MR_String) "not at max depth"))
  },
  /* row 26 */
  {
    ((MR_Box) ((MR_String) "get_implicit_tree_max_depth")),
    ((MR_Box) ((MR_String) "not a CALL node"))
  },
  /* row 27 */
  {
    ((MR_Box) ((MR_String) "cond_node_set_status")),
    ((MR_Box) ((MR_String) "not a COND node"))
  },
  /* row 28 */
  {
    ((MR_Box) ((MR_String) "neg_node_set_status")),
    ((MR_Box) ((MR_String) "not a NEGE node"))
  },
  /* row 29 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached CALL node"))
  },
  /* row 30 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached COND node"))
  },
  /* row 31 */
  {
    ((MR_Box) ((MR_String) "find_prev_contour")),
    ((MR_Box) ((MR_String) "reached NEGE node"))
  },
  /* row 32 */
  {
    ((MR_Box) ((MR_String) "head_var_num_to_arg_num")),
    ((MR_Box) ((MR_String) "nonexistent head_var_num"))
  },
  /* row 33 */
  {
    ((MR_Box) ((MR_String) "arg_num_to_head_var_num")),
    ((MR_Box) ((MR_String) "nonexistent arg num"))
  },
};

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_2[4][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0)),
    ((MR_Box) (&mdb__declarative_execution_scalar_common_1[0]))
  },
  /* row 2 */
  {
    ((MR_Box) (&mdb__declarative_execution_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_execution__maybe_filter_headvars_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mdb__declarative_execution_scalar_common_3[0])),
    ((MR_Box) (mdb__declarative_execution__select_arg_at_pos_3_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_3[1][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0))
  },
};

static /* final */ const MR_Box mdb__declarative_execution_scalar_common_4[1][1] = {
  /* row 0 */
  {
    ((MR_Box) (((MR_Box) ((MR_Integer) 0))))
  },
};



#include "io.mh"
#include "mdb.mh"
#include "store.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.declarative_execution.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"

#line 900 "declarative_execution.m"
MR_Word 
MR_DD_call_node_get_last_interface(
#line 900 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 900 "declarative_execution.m"
{
#line 900 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_get_last_interface_1_f_0((MR_Word) mdb__declarative_execution__Call_3);
	return ret_value;
}

#line 914 "declarative_execution.m"
MR_Word 
MR_DD_call_node_set_last_interface(
#line 914 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 914 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Last_5)
#line 914 "declarative_execution.m"
{
#line 914 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_set_last_interface_2_f_0((MR_Word) mdb__declarative_execution__Call0_4, (MR_Word) mdb__declarative_execution__Last_5);
	return ret_value;
}

#line 931 "declarative_execution.m"
MR_Word 
MR_DD_call_node_update_implicit_tree_info(
#line 931 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 931 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IdealDepth_5)
#line 931 "declarative_execution.m"
{
#line 931 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0((MR_Word) mdb__declarative_execution__Call0_4, (MR_Integer) mdb__declarative_execution__IdealDepth_5);
	return ret_value;
}

#line 948 "declarative_execution.m"
MR_Integer 
MR_DD_get_implicit_tree_ideal_depth(
#line 948 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 948 "declarative_execution.m"
{
#line 948 "declarative_execution.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0((MR_Word) mdb__declarative_execution__Call_3);
	return ret_value;
}

#line 968 "declarative_execution.m"
MR_Word 
MR_DD_cond_node_set_status(
#line 968 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond0_4,
#line 968 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 968 "declarative_execution.m"
{
#line 968 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__cond_node_set_status_2_f_0((MR_Word) mdb__declarative_execution__Cond0_4, (MR_Word) mdb__declarative_execution__Status_5);
	return ret_value;
}

#line 984 "declarative_execution.m"
MR_Word 
MR_DD_neg_node_set_status(
#line 984 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg0_4,
#line 984 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 984 "declarative_execution.m"
{
#line 984 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__neg_node_set_status_2_f_0((MR_Word) mdb__declarative_execution__Neg0_4, (MR_Word) mdb__declarative_execution__Status_5);
	return ret_value;
}

#line 1008 "declarative_execution.m"
MR_Word 
MR_DD_trace_node_port(
#line 1008 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 1008 "declarative_execution.m"
{
#line 1008 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__trace_node_port_1_f_0((MR_Word) mdb__declarative_execution__HeadVar__1_1);
	return ret_value;
}

#line 1027 "declarative_execution.m"
MR_String 
MR_DD_trace_node_path(
#line 1027 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_3)
#line 1027 "declarative_execution.m"
{
#line 1027 "declarative_execution.m"
	MR_String ret_value;
	ret_value = (MR_String)mdb__declarative_execution__trace_node_path_1_f_0((MR_Word) mdb__declarative_execution__Node_3);
	return ret_value;
}

#line 1054 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_seqno(
#line 1054 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_4,
#line 1054 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 1054 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__SeqNo_6)
#line 1054 "declarative_execution.m"
{
#line 1054 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_seqno_3_p_0((MR_Word) mdb__declarative_execution__S_4, (MR_Word) mdb__declarative_execution__Node_5, (MR_Integer *) mdb__declarative_execution__SeqNo_6);
	return ret_value;
}

#line 1069 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_call(
#line 1069 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_1,
#line 1069 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1069 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Call_3)
#line 1069 "declarative_execution.m"
{
#line 1069 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_call_3_p_0((MR_Word) mdb__declarative_execution__S_1, (MR_Word) mdb__declarative_execution__HeadVar__2_2, (MR_Word *) mdb__declarative_execution__Call_3);
	return ret_value;
}

#line 1082 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_first_disj(
#line 1082 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1082 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__2_2)
#line 1082 "declarative_execution.m"
{
#line 1082 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_first_disj_2_p_0((MR_Word) mdb__declarative_execution__HeadVar__1_1, (MR_Word *) mdb__declarative_execution__HeadVar__2_2);
	return ret_value;
}

#line 1094 "declarative_execution.m"
MR_Word 
MR_DD_step_left_in_contour(
#line 1094 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1094 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 1094 "declarative_execution.m"
{
#line 1094 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__step_left_in_contour_store_2_f_0((MR_Word) mdb__declarative_execution__Store_4, (MR_Word) mdb__declarative_execution__Node_5);
	return ret_value;
}

#line 1107 "declarative_execution.m"
MR_Word 
MR_DD_find_prev_contour(
#line 1107 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1107 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_5)
#line 1107 "declarative_execution.m"
{
#line 1107 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__find_prev_contour_store_2_f_0((MR_Word) mdb__declarative_execution__Store_4, (MR_Word) mdb__declarative_execution__Id_5);
	return ret_value;
}

#line 1124 "declarative_execution.m"
void 
MR_DD_print_trace_node(
#line 1124 "declarative_execution.m"
  MR_Word mdb__declarative_execution__OutStr_5,
#line 1124 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_6)
#line 1124 "declarative_execution.m"
{
#line 1124 "declarative_execution.m"
	mdb__declarative_execution__print_trace_node_4_p_0((MR_Word) mdb__declarative_execution__OutStr_5, (MR_Word) mdb__declarative_execution__Node_6);
}

#line 1140 "declarative_execution.m"
MR_Word 
MR_DD_construct_call_node(
#line 1140 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_11,
#line 1140 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_12,
#line 1140 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SeqNo_13,
#line 1140 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1140 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
#line 1140 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
#line 1140 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_17,
#line 1140 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
#line 1140 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_19)
#line 1140 "declarative_execution.m"
{
#line 1140 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_17;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_17, mdb__declarative_execution__boxed_Label_17);
	ret_value = (MR_Word)mdb__declarative_execution__construct_call_node_9_f_0((MR_Word) mdb__declarative_execution__Preceding_11, (MR_Word) mdb__declarative_execution__AtomArgs_12, (MR_Integer) mdb__declarative_execution__SeqNo_13, (MR_Integer) mdb__declarative_execution__EventNo_14, (MR_Word) mdb__declarative_execution__AtMaxDepth_15, (MR_Word) mdb__declarative_execution__MaybeReturnLabel_16, mdb__declarative_execution__boxed_Label_17, (MR_Integer) mdb__declarative_execution__IoSeqNum_18, (MR_Integer) mdb__declarative_execution__Suspicion_19);
	return ret_value;
}

#line 1161 "declarative_execution.m"
MR_Word 
MR_DD_make_yes_maybe_label(
#line 1161 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_3)
#line 1161 "declarative_execution.m"
{
#line 1161 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_3, mdb__declarative_execution__boxed_Label_3);
	ret_value = (MR_Word)mdb__declarative_execution__make_yes_maybe_label_1_f_0(mdb__declarative_execution__boxed_Label_3);
	return ret_value;
}

#line 1167 "declarative_execution.m"
MR_Word 
MR_DD_make_no_maybe_label(void)
#line 1167 "declarative_execution.m"
{
#line 1167 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__make_no_maybe_label_0_f_0();
	return ret_value;
}

#line 1175 "declarative_execution.m"
MR_Word 
MR_DD_construct_exit_node(
#line 1175 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_10,
#line 1175 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_11,
#line 1175 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_12,
#line 1175 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_13,
#line 1175 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1175 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_15,
#line 1175 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
#line 1175 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_17)
#line 1175 "declarative_execution.m"
{
#line 1175 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_15;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_15, mdb__declarative_execution__boxed_Label_15);
	ret_value = (MR_Word)mdb__declarative_execution__construct_exit_node_8_f_0((MR_Word) mdb__declarative_execution__Preceding_10, (MR_Word) mdb__declarative_execution__Call_11, (MR_Word) mdb__declarative_execution__MaybeRedo_12, (MR_Word) mdb__declarative_execution__AtomArgs_13, (MR_Integer) mdb__declarative_execution__EventNo_14, mdb__declarative_execution__boxed_Label_15, (MR_Integer) mdb__declarative_execution__IoSeqNum_16, (MR_Integer) mdb__declarative_execution__Suspicion_17);
	return ret_value;
}

#line 1186 "declarative_execution.m"
MR_Word 
MR_DD_construct_redo_node(
#line 1186 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1186 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exit_8,
#line 1186 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Event_9,
#line 1186 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_10,
#line 1186 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_11)
#line 1186 "declarative_execution.m"
{
#line 1186 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_10;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_10, mdb__declarative_execution__boxed_Label_10);
	ret_value = (MR_Word)mdb__declarative_execution__construct_redo_node_5_f_0((MR_Word) mdb__declarative_execution__Preceding_7, (MR_Word) mdb__declarative_execution__Exit_8, (MR_Integer) mdb__declarative_execution__Event_9, mdb__declarative_execution__boxed_Label_10, (MR_Integer) mdb__declarative_execution__Suspicion_11);
	return ret_value;
}

#line 1196 "declarative_execution.m"
MR_Word 
MR_DD_construct_fail_node(
#line 1196 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_8,
#line 1196 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_9,
#line 1196 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Redo_10,
#line 1196 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_11,
#line 1196 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_12,
#line 1196 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_13)
#line 1196 "declarative_execution.m"
{
#line 1196 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_12;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_12, mdb__declarative_execution__boxed_Label_12);
	ret_value = (MR_Word)mdb__declarative_execution__construct_fail_node_6_f_0((MR_Word) mdb__declarative_execution__Preceding_8, (MR_Word) mdb__declarative_execution__Call_9, (MR_Word) mdb__declarative_execution__Redo_10, (MR_Integer) mdb__declarative_execution__EventNo_11, mdb__declarative_execution__boxed_Label_12, (MR_Integer) mdb__declarative_execution__Suspicion_13);
	return ret_value;
}

#line 1206 "declarative_execution.m"
void 
MR_DD_construct_excp_node(
#line 1206 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_9,
#line 1206 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_10,
#line 1206 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_11,
#line 1206 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exception_12,
#line 1206 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_13,
#line 1206 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_14,
#line 1206 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_15,
#line 1206 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Excp_16)
#line 1206 "declarative_execution.m"
{
#line 1206 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_14;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_14, mdb__declarative_execution__boxed_Label_14);
	mdb__declarative_execution__construct_excp_node_8_p_0((MR_Word) mdb__declarative_execution__Preceding_9, (MR_Word) mdb__declarative_execution__Call_10, (MR_Word) mdb__declarative_execution__MaybeRedo_11, (MR_Word) mdb__declarative_execution__Exception_12, (MR_Integer) mdb__declarative_execution__EventNo_13, mdb__declarative_execution__boxed_Label_14, (MR_Integer) mdb__declarative_execution__Suspicion_15, (MR_Word *) mdb__declarative_execution__Excp_16);
}

#line 1218 "declarative_execution.m"
MR_Word 
MR_DD_construct_switch_node(
#line 1218 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1218 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1218 "declarative_execution.m"
{
#line 1218 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_switch_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1226 "declarative_execution.m"
MR_Word 
MR_DD_construct_first_disj_node(
#line 1226 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1226 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1226 "declarative_execution.m"
{
#line 1226 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_first_disj_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1235 "declarative_execution.m"
MR_Word 
MR_DD_construct_later_disj_node(
#line 1235 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_6,
#line 1235 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1235 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_8,
#line 1235 "declarative_execution.m"
  MR_Word mdb__declarative_execution__PrevDisj_9)
#line 1235 "declarative_execution.m"
{
#line 1235 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_8;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_8, mdb__declarative_execution__boxed_Label_8);
	ret_value = (MR_Word)mdb__declarative_execution__construct_later_disj_node_4_f_0((MR_Word) mdb__declarative_execution__Store_6, (MR_Word) mdb__declarative_execution__Preceding_7, mdb__declarative_execution__boxed_Label_8, (MR_Word) mdb__declarative_execution__PrevDisj_9);
	return ret_value;
}

#line 1251 "declarative_execution.m"
MR_Word 
MR_DD_construct_cond_node(
#line 1251 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1251 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1251 "declarative_execution.m"
{
#line 1251 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_cond_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1259 "declarative_execution.m"
MR_Word 
MR_DD_construct_then_node(
#line 1259 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1259 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1259 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1259 "declarative_execution.m"
{
#line 1259 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_then_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Cond_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1268 "declarative_execution.m"
MR_Word 
MR_DD_construct_else_node(
#line 1268 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1268 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1268 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1268 "declarative_execution.m"
{
#line 1268 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_else_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Cond_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1277 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_node(
#line 1277 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1277 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1277 "declarative_execution.m"
{
#line 1277 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1285 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_succ_node(
#line 1285 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1285 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1285 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1285 "declarative_execution.m"
{
#line 1285 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_succ_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Neg_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1294 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_fail_node(
#line 1294 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1294 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1294 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1294 "declarative_execution.m"
{
#line 1294 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_fail_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Neg_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1315 "declarative_execution.m"
MR_Word 
MR_DD_init_trace_atom_args(void)
#line 1315 "declarative_execution.m"
{
#line 1315 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__init_trace_atom_args_0_f_0();
	return ret_value;
}

#line 1328 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_value(
#line 1328 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_6,
#line 1328 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_7,
#line 1328 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Val_8,
#line 1328 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_9,
#line 1328 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__5_5)
#line 1328 "declarative_execution.m"
{
#line 1328 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_value_5_p_0((MR_Integer) mdb__declarative_execution__HldsNum_6, (MR_Integer) mdb__declarative_execution__ProgVis_7, (MR_Word) mdb__declarative_execution__Val_8, (MR_Word) mdb__declarative_execution__Args_9, (MR_Word *) mdb__declarative_execution__HeadVar__5_5);
}

#line 1340 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_no_value(
#line 1340 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_5,
#line 1340 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_6,
#line 1340 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_7,
#line 1340 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__4_4)
#line 1340 "declarative_execution.m"
{
#line 1340 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0((MR_Integer) mdb__declarative_execution__HldsNum_5, (MR_Integer) mdb__declarative_execution__ProgVis_6, (MR_Word) mdb__declarative_execution__Args_7, (MR_Word *) mdb__declarative_execution__HeadVar__4_4);
}

#line 1411 "declarative_execution.m"
void 
MR_DD_save_trace(
#line 1411 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Stream_6,
#line 1411 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_7,
#line 1411 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_8)
#line 1411 "declarative_execution.m"
{
#line 1411 "declarative_execution.m"
	mdb__declarative_execution__save_trace_node_store_5_p_0((MR_Word) mdb__declarative_execution__Stream_6, (MR_Word) mdb__declarative_execution__Store_7, (MR_Word) mdb__declarative_execution__NodeId_8);
}


#line 1943 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_event_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____event_number_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____event_number_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "event_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1960 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0 = {
  (MR_String) "succeeded",
  (MR_Integer) 0
};

#line 1966 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1 = {
  (MR_String) "failed",
  (MR_Integer) 1
};

#line 1972 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2 = {
  (MR_String) "undecided",
  (MR_Integer) 2
};

#line 1978 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_goal_status_0[3] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2
};

#line 1985 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_goal_status_0[3] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2
};

#line 1992 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_goal_status_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 1999 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_execution____Unify____goal_status_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____goal_status_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "goal_status",
  {     mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_goal_status_0 },
  {     mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_goal_status_0 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_goal_status_0
};

#line 2016 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0[1] = {
  (MR_Integer) 0
};

#line 2021 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 = {
  (MR_String) "implicit_tree_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_String) "ideal_depth"
};

#line 2028 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "implicit_tree_info",
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 },
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0
};

#line 2045 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_sequence_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____sequence_number_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____sequence_number_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "sequence_number",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2062 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "suspicion_accumulator",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2079 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0
  }
};

#line 2087 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0
};

#line 2093 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0[2] = {
  (MR_String) "proc_layout",
  (MR_String) "atom_args"
};

#line 2099 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0 = {
  (MR_String) "atom",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0,
  NULL,
  NULL
};

#line 2114 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0
};

#line 2119 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0
  }
};

#line 2128 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0
};

#line 2133 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0[1] = {
  (MR_Integer) 0
};

#line 2138 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_atom_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_atom",
  {     mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0 },
  {     mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0
};

#line 2155 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0
  }
};

#line 2163 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0
};

#line 2170 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0[3] = {
  (MR_String) "prog_visible",
  (MR_String) "prog_vis_headvar_num",
  (MR_String) "arg_value"
};

#line 2177 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0 = {
  (MR_String) "arg_info",
  (MR_Integer) 3,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0,
  NULL,
  NULL
};

#line 2192 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0
};

#line 2197 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0
  }
};

#line 2206 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0
};

#line 2211 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0[1] = {
  (MR_Integer) 0
};

#line 2216 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_atom_arg",
  {     mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0 },
  {     mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0
};

#line 2233 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0
  }
};

#line 2241 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
  }
};

#line 2249 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_0[10] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2263 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_0[10] = {
  (MR_String) "call_preceding",
  (MR_String) "call_last_interface",
  (MR_String) "call_atom_args",
  (MR_String) "call_seq",
  (MR_String) "call_event",
  (MR_String) "call_at_max_depth",
  (MR_String) "call_return_label",
  (MR_String) "call_label",
  (MR_String) "call_io_seq_num",
  (MR_String) "call_suspicion"
};

#line 2277 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0 = {
  (MR_String) "node_call",
  (MR_Integer) 10,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_0,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_0,
  NULL,
  NULL
};

#line 2292 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_1[8] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2304 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_1[8] = {
  (MR_String) "exit_preceding",
  (MR_String) "exit_call",
  (MR_String) "exit_prev_redo",
  (MR_String) "exit_atom_args",
  (MR_String) "exit_event",
  (MR_String) "exit_label",
  (MR_String) "exit_io_seq_num",
  (MR_String) "exit_suspicion"
};

#line 2316 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1 = {
  (MR_String) "node_exit",
  (MR_Integer) 8,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_1,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_1,
  NULL,
  NULL
};

#line 2331 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2[5] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2340 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_2[5] = {
  (MR_String) "redo_preceding",
  (MR_String) "redo_exit",
  (MR_String) "redo_event",
  (MR_String) "redo_label",
  (MR_String) "redo_suspicion"
};

#line 2349 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2 = {
  (MR_String) "node_redo",
  (MR_Integer) 5,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_2,
  NULL,
  NULL
};

#line 2364 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3[6] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2374 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_3[6] = {
  (MR_String) "fail_preceding",
  (MR_String) "fail_call",
  (MR_String) "fail_redo",
  (MR_String) "fail_event",
  (MR_String) "fail_label",
  (MR_String) "fail_suspicion"
};

#line 2384 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_3 = {
  (MR_String) "node_fail",
  (MR_Integer) 6,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_3,
  NULL,
  NULL
};

#line 2399 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4[7] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2410 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_4[7] = {
  (MR_String) "excp_preceding",
  (MR_String) "excp_call",
  (MR_String) "excp_redo",
  (MR_String) "excp_value",
  (MR_String) "excp_event",
  (MR_String) "excp_label",
  (MR_String) "excp_suspicion"
};

#line 2421 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_4 = {
  (MR_String) "node_excp",
  (MR_Integer) 7,
  (MR_Integer) 7,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_4,
  NULL,
  NULL
};

#line 2436 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2442 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5[2] = {
  (MR_String) "switch_preceding",
  (MR_String) "switch_label"
};

#line 2448 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_5 = {
  (MR_String) "node_switch",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 5,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5,
  NULL,
  NULL
};

#line 2463 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2469 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6[2] = {
  (MR_String) "first_disj_preceding",
  (MR_String) "first_disj_label"
};

#line 2475 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_6 = {
  (MR_String) "node_first_disj",
  (MR_Integer) 2,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 6,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6,
  NULL,
  NULL
};

#line 2490 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2497 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7[3] = {
  (MR_String) "later_disj_preceding",
  (MR_String) "later_disj_label",
  (MR_String) "later_disj_first"
};

#line 2504 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_7 = {
  (MR_String) "node_later_disj",
  (MR_Integer) 3,
  (MR_Integer) 5,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 7,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7,
  NULL,
  NULL
};

#line 2519 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0
};

#line 2526 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8[3] = {
  (MR_String) "cond_preceding",
  (MR_String) "cond_label",
  (MR_String) "cond_status"
};

#line 2533 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_8 = {
  (MR_String) "node_cond",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 5,
  (MR_Integer) 8,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8,
  NULL,
  NULL
};

#line 2548 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2555 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9[3] = {
  (MR_String) "then_preceding",
  (MR_String) "then_cond",
  (MR_String) "then_label"
};

#line 2562 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_9 = {
  (MR_String) "node_then",
  (MR_Integer) 3,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 6,
  (MR_Integer) 9,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9,
  NULL,
  NULL
};

#line 2577 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2584 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10[3] = {
  (MR_String) "else_preceding",
  (MR_String) "else_cond",
  (MR_String) "else_label"
};

#line 2591 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_10 = {
  (MR_String) "node_else",
  (MR_Integer) 3,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 7,
  (MR_Integer) 10,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10,
  NULL,
  NULL
};

#line 2606 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0
};

#line 2613 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11[3] = {
  (MR_String) "neg_preceding",
  (MR_String) "neg_label",
  (MR_String) "neg_status"
};

#line 2620 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_11 = {
  (MR_String) "node_neg",
  (MR_Integer) 3,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 8,
  (MR_Integer) 11,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11,
  NULL,
  NULL
};

#line 2635 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2642 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12[3] = {
  (MR_String) "neg_succ_preceding",
  (MR_String) "neg_succ_enter",
  (MR_String) "neg_succ_label"
};

#line 2649 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_12 = {
  (MR_String) "node_neg_succ",
  (MR_Integer) 3,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 12,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12,
  NULL,
  NULL
};

#line 2664 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2671 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13[3] = {
  (MR_String) "neg_fail_preceding",
  (MR_String) "neg_fail_enter",
  (MR_String) "neg_fail_label"
};

#line 2678 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_13 = {
  (MR_String) "node_neg_fail",
  (MR_Integer) 3,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 13,
  mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13,
  mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13,
  NULL,
  NULL
};

#line 2693 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0
};

#line 2698 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1
};

#line 2703 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2
};

#line 2708 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_3[11] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_3,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_4,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_5,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_6,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_7,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_8,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_9,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_10,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_11,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_12,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_13
};

#line 2723 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_node_1[4] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2
  },
  {
    (MR_Integer) 11,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_3
  }
};

#line 2747 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_node_1[14] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_8,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_10,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_4,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_3,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_6,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_7,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_11,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_13,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_12,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_5,
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_9
};

#line 2765 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_1[14] = {
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 11,
  (MR_Integer) 5,
  (MR_Integer) 3,
  (MR_Integer) 12,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 1,
  (MR_Integer) 13,
  (MR_Integer) 2,
  (MR_Integer) 8,
  (MR_Integer) 10,
  (MR_Integer) 9
};

#line 2783 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_1_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_1_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node",
  {     mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_node_1 },
  {     mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_node_1 },
  (MR_Integer) 14,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_1
};

#line 2800 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0[1] = {
  (MR_Integer) 0
};

#line 2805 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0 = {
  (MR_String) "id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 2812 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_id_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_id_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_id",
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0 },
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0
};

#line 2829 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0[1] = {
  (MR_Integer) 0
};

#line 2834 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0 = {
  (MR_String) "key",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2841 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_key_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_key_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_key",
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0 },
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0
};

#line 2858 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0[1] = {
  (MR_Integer) 0
};

#line 2863 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0
  }
};

#line 2871 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0,
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0
  }
};

#line 2880 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0 = {
  (MR_String) "map",
  (MR_PseudoTypeInfo) &mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0,
  NULL
};

#line 2887 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_map_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_map_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_map",
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0 },
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0
};

#line 2904 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0[1] = {
  (MR_Integer) 0
};

#line 2909 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0 = {
  (MR_String) "store",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2916 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_store_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_store_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_store",
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0 },
  {     &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0
};

#line 2933 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0 = {
  (MR_String) "all_headvars",
  (MR_Integer) 0
};

#line 2939 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1 = {
  (MR_String) "only_user_headvars",
  (MR_Integer) 1
};

#line 2945 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_which_headvars_0[2] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1
};

#line 2951 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_which_headvars_0[2] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1
};

#line 2957 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_which_headvars_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2963 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_which_headvars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_execution____Unify____which_headvars_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____which_headvars_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "which_headvars",
  {     mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_which_headvars_0 },
  {     mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_which_headvars_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_which_headvars_0
};

#line 2980 "mdb.declarative_execution.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001))
};

#line 2990 "mdb.declarative_execution.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001))
};

#line 3000 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__type_class_id_var_names_annotated_trace_2[2] = {
  (MR_String) "S",
  (MR_String) "R"
};

#line 3006 "mdb.declarative_execution.c"
static const MR_TypeClassMethod mdb__declarative_execution__mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2[1] = {
  {
    (MR_String) "trace_node_from_id",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3015 "mdb.declarative_execution.c"
static const MR_TypeClassId mdb__declarative_execution__mdb__declarative_execution__type_class_id_annotated_trace_2 = {
  (MR_String) "mdb.declarative_execution",
  (MR_String) "annotated_trace",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mdb__declarative_execution__mdb__declarative_execution__type_class_id_var_names_annotated_trace_2,
  mdb__declarative_execution__mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2
};

#line 3026 "mdb.declarative_execution.c"
const MR_TypeClassDeclStruct mdb__declarative_execution__mdb__declarative_execution__type_class_decl_annotated_trace_2 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_class_id_annotated_trace_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3034 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0_10001(
#line 3037 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3039 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3041 "mdb.declarative_execution.c"
{
#line 3043 "mdb.declarative_execution.c"
  {
#line 3045 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3048 "mdb.declarative_execution.c"
    {
#line 3050 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____event_number_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3053 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3055 "mdb.declarative_execution.c"
  }
#line 3057 "mdb.declarative_execution.c"
}

#line 3060 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0_10001(
#line 3063 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3065 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3067 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3069 "mdb.declarative_execution.c"
{
#line 3071 "mdb.declarative_execution.c"
  {
#line 3073 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3076 "mdb.declarative_execution.c"
    {
#line 3078 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____event_number_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3081 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3083 "mdb.declarative_execution.c"
  }
#line 3085 "mdb.declarative_execution.c"
}

#line 3088 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0_10001(
#line 3091 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3093 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3095 "mdb.declarative_execution.c"
{
#line 3097 "mdb.declarative_execution.c"
  {
#line 3099 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3102 "mdb.declarative_execution.c"
    {
#line 3104 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____goal_status_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3107 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3109 "mdb.declarative_execution.c"
  }
#line 3111 "mdb.declarative_execution.c"
}

#line 3114 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0_10001(
#line 3117 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3119 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3121 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3123 "mdb.declarative_execution.c"
{
#line 3125 "mdb.declarative_execution.c"
  {
#line 3127 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3130 "mdb.declarative_execution.c"
    {
#line 3132 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____goal_status_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3135 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3137 "mdb.declarative_execution.c"
  }
#line 3139 "mdb.declarative_execution.c"
}

#line 3142 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001(
#line 3145 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3147 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3149 "mdb.declarative_execution.c"
{
#line 3151 "mdb.declarative_execution.c"
  {
#line 3153 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3156 "mdb.declarative_execution.c"
    {
#line 3158 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____implicit_tree_info_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3161 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3163 "mdb.declarative_execution.c"
  }
#line 3165 "mdb.declarative_execution.c"
}

#line 3168 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001(
#line 3171 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3173 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3175 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3177 "mdb.declarative_execution.c"
{
#line 3179 "mdb.declarative_execution.c"
  {
#line 3181 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3184 "mdb.declarative_execution.c"
    {
#line 3186 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____implicit_tree_info_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3189 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3191 "mdb.declarative_execution.c"
  }
#line 3193 "mdb.declarative_execution.c"
}

#line 3196 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0_10001(
#line 3199 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3201 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3203 "mdb.declarative_execution.c"
{
#line 3205 "mdb.declarative_execution.c"
  {
#line 3207 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3210 "mdb.declarative_execution.c"
    {
#line 3212 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____sequence_number_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3215 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3217 "mdb.declarative_execution.c"
  }
#line 3219 "mdb.declarative_execution.c"
}

#line 3222 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0_10001(
#line 3225 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3227 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3229 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3231 "mdb.declarative_execution.c"
{
#line 3233 "mdb.declarative_execution.c"
  {
#line 3235 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3238 "mdb.declarative_execution.c"
    {
#line 3240 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____sequence_number_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3243 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3245 "mdb.declarative_execution.c"
  }
#line 3247 "mdb.declarative_execution.c"
}

#line 3250 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001(
#line 3253 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3255 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3257 "mdb.declarative_execution.c"
{
#line 3259 "mdb.declarative_execution.c"
  {
#line 3261 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3264 "mdb.declarative_execution.c"
    {
#line 3266 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____suspicion_accumulator_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3269 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3271 "mdb.declarative_execution.c"
  }
#line 3273 "mdb.declarative_execution.c"
}

#line 3276 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001(
#line 3279 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3281 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3283 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3285 "mdb.declarative_execution.c"
{
#line 3287 "mdb.declarative_execution.c"
  {
#line 3289 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3292 "mdb.declarative_execution.c"
    {
#line 3294 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____suspicion_accumulator_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3297 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3299 "mdb.declarative_execution.c"
  }
#line 3301 "mdb.declarative_execution.c"
}

#line 3304 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0_10001(
#line 3307 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3309 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3311 "mdb.declarative_execution.c"
{
#line 3313 "mdb.declarative_execution.c"
  {
#line 3315 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3318 "mdb.declarative_execution.c"
    {
#line 3320 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3323 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3325 "mdb.declarative_execution.c"
  }
#line 3327 "mdb.declarative_execution.c"
}

#line 3330 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0_10001(
#line 3333 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3335 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3337 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3339 "mdb.declarative_execution.c"
{
#line 3341 "mdb.declarative_execution.c"
  {
#line 3343 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3346 "mdb.declarative_execution.c"
    {
#line 3348 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_atom_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3351 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3353 "mdb.declarative_execution.c"
  }
#line 3355 "mdb.declarative_execution.c"
}

#line 3358 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001(
#line 3361 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3363 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3365 "mdb.declarative_execution.c"
{
#line 3367 "mdb.declarative_execution.c"
  {
#line 3369 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3372 "mdb.declarative_execution.c"
    {
#line 3374 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_atom_arg_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3377 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3379 "mdb.declarative_execution.c"
  }
#line 3381 "mdb.declarative_execution.c"
}

#line 3384 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001(
#line 3387 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3389 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3391 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3393 "mdb.declarative_execution.c"
{
#line 3395 "mdb.declarative_execution.c"
  {
#line 3397 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3400 "mdb.declarative_execution.c"
    {
#line 3402 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_atom_arg_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3405 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3407 "mdb.declarative_execution.c"
  }
#line 3409 "mdb.declarative_execution.c"
}

#line 3412 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0_10001(
#line 3415 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3417 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3419 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3421 "mdb.declarative_execution.c"
{
#line 3423 "mdb.declarative_execution.c"
  {
#line 3425 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3428 "mdb.declarative_execution.c"
    {
#line 3430 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_1_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3433 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3435 "mdb.declarative_execution.c"
  }
#line 3437 "mdb.declarative_execution.c"
}

#line 3440 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0_10001(
#line 3443 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3445 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_2,
#line 3447 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3,
#line 3449 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_4)
#line 3451 "mdb.declarative_execution.c"
{
#line 3453 "mdb.declarative_execution.c"
  {
#line 3455 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3458 "mdb.declarative_execution.c"
    {
#line 3460 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_1_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), &mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_3), ((MR_Word) mdb__declarative_execution__wrapper_arg_4));
    }
#line 3463 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_2 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3465 "mdb.declarative_execution.c"
  }
#line 3467 "mdb.declarative_execution.c"
}

#line 3470 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0_10001(
#line 3473 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3475 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3477 "mdb.declarative_execution.c"
{
#line 3479 "mdb.declarative_execution.c"
  {
#line 3481 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3484 "mdb.declarative_execution.c"
    {
#line 3486 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_id_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3489 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3491 "mdb.declarative_execution.c"
  }
#line 3493 "mdb.declarative_execution.c"
}

#line 3496 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0_10001(
#line 3499 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3501 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3503 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3505 "mdb.declarative_execution.c"
{
#line 3507 "mdb.declarative_execution.c"
  {
#line 3509 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3512 "mdb.declarative_execution.c"
    {
#line 3514 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_id_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3517 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3519 "mdb.declarative_execution.c"
  }
#line 3521 "mdb.declarative_execution.c"
}

#line 3524 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0_10001(
#line 3527 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3529 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3531 "mdb.declarative_execution.c"
{
#line 3533 "mdb.declarative_execution.c"
  {
#line 3535 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3538 "mdb.declarative_execution.c"
    {
#line 3540 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_key_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3543 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3545 "mdb.declarative_execution.c"
  }
#line 3547 "mdb.declarative_execution.c"
}

#line 3550 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0_10001(
#line 3553 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3555 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3557 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3559 "mdb.declarative_execution.c"
{
#line 3561 "mdb.declarative_execution.c"
  {
#line 3563 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3566 "mdb.declarative_execution.c"
    {
#line 3568 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_key_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3571 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3573 "mdb.declarative_execution.c"
  }
#line 3575 "mdb.declarative_execution.c"
}

#line 3578 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0_10001(
#line 3581 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3583 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3585 "mdb.declarative_execution.c"
{
#line 3587 "mdb.declarative_execution.c"
  {
#line 3589 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3592 "mdb.declarative_execution.c"
    {
#line 3594 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_map_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3597 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3599 "mdb.declarative_execution.c"
  }
#line 3601 "mdb.declarative_execution.c"
}

#line 3604 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0_10001(
#line 3607 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3609 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3611 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3613 "mdb.declarative_execution.c"
{
#line 3615 "mdb.declarative_execution.c"
  {
#line 3617 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3620 "mdb.declarative_execution.c"
    {
#line 3622 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_map_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3625 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3627 "mdb.declarative_execution.c"
  }
#line 3629 "mdb.declarative_execution.c"
}

#line 3632 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0_10001(
#line 3635 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3637 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3639 "mdb.declarative_execution.c"
{
#line 3641 "mdb.declarative_execution.c"
  {
#line 3643 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3646 "mdb.declarative_execution.c"
    {
#line 3648 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_store_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3651 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3653 "mdb.declarative_execution.c"
  }
#line 3655 "mdb.declarative_execution.c"
}

#line 3658 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0_10001(
#line 3661 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3663 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3665 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3667 "mdb.declarative_execution.c"
{
#line 3669 "mdb.declarative_execution.c"
  {
#line 3671 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3674 "mdb.declarative_execution.c"
    {
#line 3676 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_store_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3679 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3681 "mdb.declarative_execution.c"
  }
#line 3683 "mdb.declarative_execution.c"
}

#line 3686 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0_10001(
#line 3689 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3691 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3693 "mdb.declarative_execution.c"
{
#line 3695 "mdb.declarative_execution.c"
  {
#line 3697 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3700 "mdb.declarative_execution.c"
    {
#line 3702 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____which_headvars_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3705 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3707 "mdb.declarative_execution.c"
  }
#line 3709 "mdb.declarative_execution.c"
}

#line 3712 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0_10001(
#line 3715 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3717 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3719 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3721 "mdb.declarative_execution.c"
{
#line 3723 "mdb.declarative_execution.c"
  {
#line 3725 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3728 "mdb.declarative_execution.c"
    {
#line 3730 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____which_headvars_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3733 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3735 "mdb.declarative_execution.c"
  }
#line 3737 "mdb.declarative_execution.c"
}

#line 3740 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
#line 3743 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__closure_arg,
#line 3745 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3747 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3749 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_3)
#line 3751 "mdb.declarative_execution.c"
{
#line 3753 "mdb.declarative_execution.c"
  {
#line 3755 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;
#line 3757 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__closure;
#line 3759 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__3_3;

#line 3762 "mdb.declarative_execution.c"
    mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;
#line 3764 "mdb.declarative_execution.c"
    {
#line 3766 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
#line 3769 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 3771 "mdb.declarative_execution.c"
      {
#line 3773 "mdb.declarative_execution.c"
        *mdb__declarative_execution__wrapper_arg_3 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__3_3));
#line 3775 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 3777 "mdb.declarative_execution.c"
      }
#line 3779 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3781 "mdb.declarative_execution.c"
  }
#line 3783 "mdb.declarative_execution.c"
}

#line 3786 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
#line 3789 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__closure_arg,
#line 3791 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3793 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3795 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_3)
#line 3797 "mdb.declarative_execution.c"
{
#line 3799 "mdb.declarative_execution.c"
  {
#line 3801 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;
#line 3803 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__closure;
#line 3805 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__3_3;

#line 3808 "mdb.declarative_execution.c"
    mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;
#line 3810 "mdb.declarative_execution.c"
    {
#line 3812 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
#line 3815 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 3817 "mdb.declarative_execution.c"
      {
#line 3819 "mdb.declarative_execution.c"
        *mdb__declarative_execution__wrapper_arg_3 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__3_3));
#line 3821 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 3823 "mdb.declarative_execution.c"
      }
#line 3825 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3827 "mdb.declarative_execution.c"
  }
#line 3829 "mdb.declarative_execution.c"
}

#line 862 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 862 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 862 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 862 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
#line 862 "declarative_execution.m"
{
#line 884 "declarative_execution.m"
  {
#line 884 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 887 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__HeadVar__2_2 ;
		{
#line 887 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);

#line 3863 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__HeadVar__3_3  = Node;
#line 887 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 884 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 884 "declarative_execution.m"
  }
#line 862 "declarative_execution.m"
}

#line 1371 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 1371 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1371 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1371 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
#line 1371 "declarative_execution.m"
{
#line 1386 "declarative_execution.m"
  {
#line 1386 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1386 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Map_6 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
#line 1387 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_HeadVar__3_3;

#line 1387 "declarative_execution.m"
    {
#line 1387 "declarative_execution.m"
      mdb__declarative_execution__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], mdb__declarative_execution__Map_6, ((MR_Box) (mdb__declarative_execution__HeadVar__2_2)), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
#line 1387 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1387 "declarative_execution.m"
      {
#line 1387 "declarative_execution.m"
        *mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv0_HeadVar__3_3);
#line 1387 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1387 "declarative_execution.m"
      }
#line 1386 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1386 "declarative_execution.m"
  }
#line 1371 "declarative_execution.m"
}

#line 435 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0(
#line 435 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 435 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 435 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 435 "declarative_execution.m"
{
#line 435 "declarative_execution.m"
  {
#line 435 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 435 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 435 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 435 "declarative_execution.m"
    {
#line 435 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 435 "declarative_execution.m"
      return;
    }
#line 435 "declarative_execution.m"
  }
#line 435 "declarative_execution.m"
}

#line 435 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0(
#line 435 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_1,
#line 435 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 435 "declarative_execution.m"
{
#line 3963 "mdb.declarative_execution.c"
  {
#line 3965 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__HeadVar__2_1 == mdb__declarative_execution__HeadVar__2_2);

#line 3968 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3970 "mdb.declarative_execution.c"
  }
#line 435 "declarative_execution.m"
}

#line 870 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0(
#line 870 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 870 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 870 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 870 "declarative_execution.m"
{
#line 870 "declarative_execution.m"
  {
#line 870 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 870 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 870 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 870 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 870 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 3999 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 870 "declarative_execution.m"
    else
#line 870 "declarative_execution.m"
      {
#line 870 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 870 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 870 "declarative_execution.m"
        {
#line 870 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 870 "declarative_execution.m"
          return;
        }
#line 870 "declarative_execution.m"
      }
#line 870 "declarative_execution.m"
  }
#line 870 "declarative_execution.m"
}

#line 870 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0(
#line 870 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 870 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 870 "declarative_execution.m"
{
#line 870 "declarative_execution.m"
  {
#line 870 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 870 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 870 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 870 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 870 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 870 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 870 "declarative_execution.m"
    else
#line 870 "declarative_execution.m"
      {
#line 870 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 870 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 4057 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
#line 870 "declarative_execution.m"
      }
#line 870 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 870 "declarative_execution.m"
  }
#line 870 "declarative_execution.m"
}

#line 1374 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0(
#line 1374 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 1374 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1374 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 1374 "declarative_execution.m"
{
#line 1374 "declarative_execution.m"
  {
#line 1374 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1374 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 1374 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 1374 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 1374 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4092 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 1374 "declarative_execution.m"
    else
#line 1374 "declarative_execution.m"
      {
#line 1374 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;
#line 1374 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;

#line 1374 "declarative_execution.m"
        {
#line 1374 "declarative_execution.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[1], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_4_4)), ((MR_Box) (mdb__declarative_execution__V_5_5)));
#line 1374 "declarative_execution.m"
          return;
        }
#line 1374 "declarative_execution.m"
      }
#line 1374 "declarative_execution.m"
  }
#line 1374 "declarative_execution.m"
}

#line 1374 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0(
#line 1374 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1374 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 1374 "declarative_execution.m"
{
#line 1374 "declarative_execution.m"
  {
#line 1374 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1374 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 1374 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 1374 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 1374 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1374 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 1374 "declarative_execution.m"
    else
#line 1374 "declarative_execution.m"
      {
#line 1374 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_3_3 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
#line 1374 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;

#line 4150 "mdb.declarative_execution.c"
        {
#line 4152 "mdb.declarative_execution.c"
          return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[1], ((MR_Box) (mdb__declarative_execution__V_3_3)), ((MR_Box) (mdb__declarative_execution__V_4_4)));
        }
#line 1374 "declarative_execution.m"
      }
#line 1374 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1374 "declarative_execution.m"
  }
#line 1374 "declarative_execution.m"
}

#line 1380 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0(
#line 1380 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 1380 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1380 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 1380 "declarative_execution.m"
{
#line 1380 "declarative_execution.m"
  {
#line 1380 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1380 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 1380 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 1380 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 1380 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4188 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 1380 "declarative_execution.m"
    else
#line 1380 "declarative_execution.m"
      {
#line 1380 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 1380 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 1380 "declarative_execution.m"
        {
#line 1380 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 1380 "declarative_execution.m"
          return;
        }
#line 1380 "declarative_execution.m"
      }
#line 1380 "declarative_execution.m"
  }
#line 1380 "declarative_execution.m"
}

#line 1380 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0(
#line 1380 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1380 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 1380 "declarative_execution.m"
{
#line 1380 "declarative_execution.m"
  {
#line 1380 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1380 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 1380 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 1380 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 1380 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1380 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 1380 "declarative_execution.m"
    else
#line 1380 "declarative_execution.m"
      {
#line 1380 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 1380 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 4246 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
#line 1380 "declarative_execution.m"
      }
#line 1380 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1380 "declarative_execution.m"
  }
#line 1380 "declarative_execution.m"
}

#line 878 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0(
#line 878 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 878 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 878 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 878 "declarative_execution.m"
{
#line 878 "declarative_execution.m"
  {
#line 878 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 878 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 878 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 878 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 878 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4281 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 878 "declarative_execution.m"
    else
#line 878 "declarative_execution.m"
      {
#line 878 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;
#line 878 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;

#line 878 "declarative_execution.m"
        {
#line 878 "declarative_execution.m"
          mercury__builtin____Compare____c_pointer_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 878 "declarative_execution.m"
          return;
        }
#line 878 "declarative_execution.m"
      }
#line 878 "declarative_execution.m"
  }
#line 878 "declarative_execution.m"
}

#line 878 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0(
#line 878 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 878 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 878 "declarative_execution.m"
{
#line 878 "declarative_execution.m"
  {
#line 878 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 878 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 878 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 878 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 878 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 878 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 878 "declarative_execution.m"
    else
#line 878 "declarative_execution.m"
      {
#line 878 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_3_3 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
#line 878 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;

#line 4339 "mdb.declarative_execution.c"
        {
#line 4341 "mdb.declarative_execution.c"
          return mdb__declarative_execution__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_4_4);
        }
#line 878 "declarative_execution.m"
      }
#line 878 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 878 "declarative_execution.m"
  }
#line 878 "declarative_execution.m"
}

#line 47 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0(
#line 47 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_1761,
#line 47 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 47 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 47 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 47 "declarative_execution.m"
{
#line 47 "declarative_execution.m"
  {
#line 47 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 47 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_1759 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 47 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_1760 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 47 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_1759 == mdb__declarative_execution__CastY_1760);
#line 47 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4379 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 47 "declarative_execution.m"
    else
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
      switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) {
#line 47 "declarative_execution.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
        case (MR_Integer) 0:
#line 47 "declarative_execution.m"
          {
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1796_1796 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 9)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1797_1797 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 8)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1798_1798 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_1799_1799 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_1800_1800 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1801_1801 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1802_1802 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_1803_1803 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1804_1804 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1805_1805 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
            switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
              case (MR_Integer) 0:
#line 47 "declarative_execution.m"
                {
#line 47 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
#line 47 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
#line 47 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 8)));
#line 47 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 9)));
#line 47 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_24_24;

#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_24_24, mdb__declarative_execution__V_1805_1805, mdb__declarative_execution__V_14_14);
                  }
#line 4450 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_24_24 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_24_24;
#line 47 "declarative_execution.m"
                  else
#line 47 "declarative_execution.m"
                    {
#line 47 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_25_25;

#line 47 "declarative_execution.m"
                      {
#line 47 "declarative_execution.m"
                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_25_25, mdb__declarative_execution__V_1804_1804, mdb__declarative_execution__V_15_15);
                      }
#line 4470 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_25_25 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_25_25;
#line 47 "declarative_execution.m"
                      else
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_26_26;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], &mdb__declarative_execution__V_26_26, ((MR_Box) (mdb__declarative_execution__V_1803_1803)), ((MR_Box) (mdb__declarative_execution__V_16_16)));
                          }
#line 4490 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_26_26 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_26_26;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_27_27;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_27_27, mdb__declarative_execution__V_1802_1802, mdb__declarative_execution__V_17_17);
                              }
#line 4510 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_27_27 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_27_27;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_28_28;

#line 47 "declarative_execution.m"
                                  {
#line 47 "declarative_execution.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_28_28, mdb__declarative_execution__V_1801_1801, mdb__declarative_execution__V_18_18);
                                  }
#line 4530 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_28_28 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_28_28;
#line 47 "declarative_execution.m"
                                  else
#line 47 "declarative_execution.m"
                                    {
#line 47 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_29_29;

#line 47 "declarative_execution.m"
                                      {
#line 47 "declarative_execution.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[1], &mdb__declarative_execution__V_29_29, ((MR_Box) (mdb__declarative_execution__V_1800_1800)), ((MR_Box) (mdb__declarative_execution__V_19_19)));
                                      }
#line 4550 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_29_29 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_29_29;
#line 47 "declarative_execution.m"
                                      else
#line 47 "declarative_execution.m"
                                        {
#line 47 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_30_30;

#line 47 "declarative_execution.m"
                                          {
#line 47 "declarative_execution.m"
                                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[5], &mdb__declarative_execution__V_30_30, ((MR_Box) (mdb__declarative_execution__V_1799_1799)), ((MR_Box) (mdb__declarative_execution__V_20_20)));
                                          }
#line 4570 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_30_30 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_30_30;
#line 47 "declarative_execution.m"
                                          else
#line 47 "declarative_execution.m"
                                            {
#line 47 "declarative_execution.m"
                                              MR_Word mdb__declarative_execution__V_31_31;

#line 47 "declarative_execution.m"
                                              {
#line 47 "declarative_execution.m"
                                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_31_31, mdb__declarative_execution__V_1798_1798, mdb__declarative_execution__V_21_21);
                                              }
#line 4590 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_31_31 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_31_31;
#line 47 "declarative_execution.m"
                                              else
#line 47 "declarative_execution.m"
                                                {
#line 47 "declarative_execution.m"
                                                  MR_Word mdb__declarative_execution__V_32_32;

#line 47 "declarative_execution.m"
                                                  {
#line 47 "declarative_execution.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_32_32, mdb__declarative_execution__V_1797_1797, mdb__declarative_execution__V_22_22);
                                                  }
#line 4610 "mdb.declarative_execution.c"
                                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_32_32 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                                  if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_32_32;
#line 47 "declarative_execution.m"
                                                  else
#line 47 "declarative_execution.m"
                                                    {
#line 47 "declarative_execution.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1796_1796, mdb__declarative_execution__V_23_23);
#line 47 "declarative_execution.m"
                                                      return;
                                                    }
#line 47 "declarative_execution.m"
                                                }
#line 47 "declarative_execution.m"
                                            }
#line 47 "declarative_execution.m"
                                        }
#line 47 "declarative_execution.m"
                                    }
#line 47 "declarative_execution.m"
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
              case (MR_Integer) 1:
#line 4649 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
              case (MR_Integer) 2:
#line 4655 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
              case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 4668 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 4674 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 4680 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 4686 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 4:
#line 4692 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 5:
#line 4698 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 6:
#line 4704 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 7:
#line 4710 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 8:
#line 4716 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 9:
#line 4722 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 10:
#line 4728 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
            }
#line 47 "declarative_execution.m"
          }
#line 47 "declarative_execution.m"
          break;
#line 47 "declarative_execution.m"
        case (MR_Integer) 1:
#line 47 "declarative_execution.m"
          {
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1819_1819 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1820_1820 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1821_1821 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1822_1822 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_1823_1823 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1824_1824 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1825_1825 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1826_1826 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
            switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
              case (MR_Integer) 0:
#line 4770 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
              case (MR_Integer) 1:
#line 47 "declarative_execution.m"
                {
#line 47 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_240_240 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
#line 47 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_241_241 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_242_242 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_245_245 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_246_246 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_247_247 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
#line 47 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_248_248;

#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_248_248, mdb__declarative_execution__V_1826_1826, mdb__declarative_execution__V_240_240);
                  }
#line 4802 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_248_248 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_248_248;
#line 47 "declarative_execution.m"
                  else
#line 47 "declarative_execution.m"
                    {
#line 47 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_249_249;

#line 47 "declarative_execution.m"
                      {
#line 47 "declarative_execution.m"
                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_249_249, mdb__declarative_execution__V_1825_1825, mdb__declarative_execution__V_241_241);
                      }
#line 4822 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_249_249 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_249_249;
#line 47 "declarative_execution.m"
                      else
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_250_250;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_250_250, mdb__declarative_execution__V_1824_1824, mdb__declarative_execution__V_242_242);
                          }
#line 4842 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_250_250 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_250_250;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_251_251;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], &mdb__declarative_execution__V_251_251, ((MR_Box) (mdb__declarative_execution__V_1823_1823)), ((MR_Box) (mdb__declarative_execution__V_243_243)));
                              }
#line 4862 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_251_251 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_251_251;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_252_252;

#line 47 "declarative_execution.m"
                                  {
#line 47 "declarative_execution.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_252_252, mdb__declarative_execution__V_1822_1822, mdb__declarative_execution__V_244_244);
                                  }
#line 4882 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_252_252 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_252_252;
#line 47 "declarative_execution.m"
                                  else
#line 47 "declarative_execution.m"
                                    {
#line 47 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_253_253;

#line 47 "declarative_execution.m"
                                      {
#line 47 "declarative_execution.m"
                                        mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_253_253, mdb__declarative_execution__V_1821_1821, mdb__declarative_execution__V_245_245);
                                      }
#line 4902 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_253_253 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_253_253;
#line 47 "declarative_execution.m"
                                      else
#line 47 "declarative_execution.m"
                                        {
#line 47 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_254_254;

#line 47 "declarative_execution.m"
                                          {
#line 47 "declarative_execution.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_254_254, mdb__declarative_execution__V_1820_1820, mdb__declarative_execution__V_246_246);
                                          }
#line 4922 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_254_254 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_254_254;
#line 47 "declarative_execution.m"
                                          else
#line 47 "declarative_execution.m"
                                            {
#line 47 "declarative_execution.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1819_1819, mdb__declarative_execution__V_247_247);
#line 47 "declarative_execution.m"
                                              return;
                                            }
#line 47 "declarative_execution.m"
                                        }
#line 47 "declarative_execution.m"
                                    }
#line 47 "declarative_execution.m"
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
              case (MR_Integer) 2:
#line 4957 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
              case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 4970 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 4976 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 4982 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 4988 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 4:
#line 4994 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 5:
#line 5000 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 6:
#line 5006 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 7:
#line 5012 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 8:
#line 5018 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 9:
#line 5024 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 10:
#line 5030 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
            }
#line 47 "declarative_execution.m"
          }
#line 47 "declarative_execution.m"
          break;
#line 47 "declarative_execution.m"
        case (MR_Integer) 2:
#line 47 "declarative_execution.m"
          {
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1847_1847 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1848_1848 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1849_1849 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1850_1850 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1851_1851 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
            switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
              case (MR_Integer) 0:
#line 5066 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
              case (MR_Integer) 1:
#line 5072 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
              case (MR_Integer) 2:
#line 47 "declarative_execution.m"
                {
#line 47 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_427_427 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
#line 47 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_428_428 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_429_429 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_430_430 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_431_431 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_432_432;

#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_432_432, mdb__declarative_execution__V_1851_1851, mdb__declarative_execution__V_427_427);
                  }
#line 5098 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_432_432 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_432_432;
#line 47 "declarative_execution.m"
                  else
#line 47 "declarative_execution.m"
                    {
#line 47 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_433_433;

#line 47 "declarative_execution.m"
                      {
#line 47 "declarative_execution.m"
                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_433_433, mdb__declarative_execution__V_1850_1850, mdb__declarative_execution__V_428_428);
                      }
#line 5118 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_433_433 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_433_433;
#line 47 "declarative_execution.m"
                      else
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_434_434;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_434_434, mdb__declarative_execution__V_1849_1849, mdb__declarative_execution__V_429_429);
                          }
#line 5138 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_434_434 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_434_434;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_435_435;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_435_435, mdb__declarative_execution__V_1848_1848, mdb__declarative_execution__V_430_430);
                              }
#line 5158 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_435_435 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_435_435;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1847_1847, mdb__declarative_execution__V_431_431);
#line 47 "declarative_execution.m"
                                  return;
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
              case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 5194 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 5200 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 5206 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 5212 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 4:
#line 5218 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 5:
#line 5224 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 6:
#line 5230 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 7:
#line 5236 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 8:
#line 5242 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 9:
#line 5248 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 10:
#line 5254 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
                break;
#line 47 "declarative_execution.m"
            }
#line 47 "declarative_execution.m"
          }
#line 47 "declarative_execution.m"
          break;
#line 47 "declarative_execution.m"
        case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
            case (MR_Integer) 0:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_1827_1827 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1828_1828 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_1829_1829 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1830_1830 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1831_1831 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1832_1832 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 5299 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 5305 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 5311 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_576_576 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_577_577 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_578_578 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
#line 47 "declarative_execution.m"
                          MR_Integer mdb__declarative_execution__V_579_579 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_580_580 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                          MR_Integer mdb__declarative_execution__V_581_581 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_582_582;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_582_582, mdb__declarative_execution__V_1832_1832, mdb__declarative_execution__V_576_576);
                          }
#line 5346 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_582_582 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_582_582;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_583_583;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_583_583, mdb__declarative_execution__V_1831_1831, mdb__declarative_execution__V_577_577);
                              }
#line 5366 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_583_583 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_583_583;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_584_584;

#line 47 "declarative_execution.m"
                                  {
#line 47 "declarative_execution.m"
                                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_584_584, mdb__declarative_execution__V_1830_1830, mdb__declarative_execution__V_578_578);
                                  }
#line 5386 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_584_584 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_584_584;
#line 47 "declarative_execution.m"
                                  else
#line 47 "declarative_execution.m"
                                    {
#line 47 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_585_585;

#line 47 "declarative_execution.m"
                                      {
#line 47 "declarative_execution.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_585_585, mdb__declarative_execution__V_1829_1829, mdb__declarative_execution__V_579_579);
                                      }
#line 5406 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_585_585 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_585_585;
#line 47 "declarative_execution.m"
                                      else
#line 47 "declarative_execution.m"
                                        {
#line 47 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_586_586;

#line 47 "declarative_execution.m"
                                          {
#line 47 "declarative_execution.m"
                                            mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_586_586, mdb__declarative_execution__V_1828_1828, mdb__declarative_execution__V_580_580);
                                          }
#line 5426 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_586_586 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_586_586;
#line 47 "declarative_execution.m"
                                          else
#line 47 "declarative_execution.m"
                                            {
#line 47 "declarative_execution.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1827_1827, mdb__declarative_execution__V_581_581);
#line 47 "declarative_execution.m"
                                              return;
                                            }
#line 47 "declarative_execution.m"
                                        }
#line 47 "declarative_execution.m"
                                    }
#line 47 "declarative_execution.m"
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 5457 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 5463 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 5469 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 5475 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 5481 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 5487 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 5493 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 5499 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 5505 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 5511 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 1:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_1812_1812 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1813_1813 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_1814_1814 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_1815_1815 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1816_1816 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1817_1817 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1818_1818 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 5551 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 5557 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 5563 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 5576 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_743_743 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_744_744 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_745_745 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_746_746 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                          MR_Integer mdb__declarative_execution__V_747_747 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_748_748 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                          MR_Integer mdb__declarative_execution__V_749_749 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_750_750;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_750_750, mdb__declarative_execution__V_1818_1818, mdb__declarative_execution__V_743_743);
                          }
#line 5606 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_750_750 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_750_750;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_751_751;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_751_751, mdb__declarative_execution__V_1817_1817, mdb__declarative_execution__V_744_744);
                              }
#line 5626 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_751_751 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_751_751;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_752_752;

#line 47 "declarative_execution.m"
                                  {
#line 47 "declarative_execution.m"
                                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_752_752, mdb__declarative_execution__V_1816_1816, mdb__declarative_execution__V_745_745);
                                  }
#line 5646 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_752_752 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_752_752;
#line 47 "declarative_execution.m"
                                  else
#line 47 "declarative_execution.m"
                                    {
#line 47 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_753_753;

#line 47 "declarative_execution.m"
                                      {
#line 47 "declarative_execution.m"
                                        mdb__term_rep____Compare____term_rep_0_0(&mdb__declarative_execution__V_753_753, mdb__declarative_execution__V_1815_1815, mdb__declarative_execution__V_746_746);
                                      }
#line 5666 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_753_753 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_753_753;
#line 47 "declarative_execution.m"
                                      else
#line 47 "declarative_execution.m"
                                        {
#line 47 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_754_754;

#line 47 "declarative_execution.m"
                                          {
#line 47 "declarative_execution.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_754_754, mdb__declarative_execution__V_1814_1814, mdb__declarative_execution__V_747_747);
                                          }
#line 5686 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_754_754 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_754_754;
#line 47 "declarative_execution.m"
                                          else
#line 47 "declarative_execution.m"
                                            {
#line 47 "declarative_execution.m"
                                              MR_Word mdb__declarative_execution__V_755_755;

#line 47 "declarative_execution.m"
                                              {
#line 47 "declarative_execution.m"
                                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_755_755, mdb__declarative_execution__V_1813_1813, mdb__declarative_execution__V_748_748);
                                              }
#line 5706 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_755_755 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_755_755;
#line 47 "declarative_execution.m"
                                              else
#line 47 "declarative_execution.m"
                                                {
#line 47 "declarative_execution.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1812_1812, mdb__declarative_execution__V_749_749);
#line 47 "declarative_execution.m"
                                                  return;
                                                }
#line 47 "declarative_execution.m"
                                            }
#line 47 "declarative_execution.m"
                                        }
#line 47 "declarative_execution.m"
                                    }
#line 47 "declarative_execution.m"
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 5739 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 5745 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 5751 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 5757 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 5763 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 5769 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 5775 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 5781 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 5787 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 2:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1852_1852 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1853_1853 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 5817 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 5823 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 5829 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 5842 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 5848 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_892_892 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_893_893 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_894_894;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_894_894, mdb__declarative_execution__V_1853_1853, mdb__declarative_execution__V_892_892);
                          }
#line 5868 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_894_894 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_894_894;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1852_1852, mdb__declarative_execution__V_893_893);
#line 47 "declarative_execution.m"
                              return;
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 5891 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 5897 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 5903 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 5909 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 5915 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 5921 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 5927 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 5933 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 3:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1833_1833 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1834_1834 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 5963 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 5969 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 5975 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 5988 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 5994 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6000 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_986_986 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_987_987 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_988_988;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_988_988, mdb__declarative_execution__V_1834_1834, mdb__declarative_execution__V_986_986);
                          }
#line 6020 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_988_988 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_988_988;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1833_1833, mdb__declarative_execution__V_987_987);
#line 47 "declarative_execution.m"
                              return;
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 6043 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 6049 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 6055 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 6061 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 6067 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6073 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6079 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 4:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1835_1835 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1836_1836 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1837_1837 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 6111 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 6117 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 6123 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 6136 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 6142 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6148 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 6154 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1088_1088 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1089_1089 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1090_1090 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1091_1091;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1091_1091, mdb__declarative_execution__V_1837_1837, mdb__declarative_execution__V_1088_1088);
                          }
#line 6176 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1091_1091 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1091_1091;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1092_1092;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1092_1092, mdb__declarative_execution__V_1836_1836, mdb__declarative_execution__V_1089_1089);
                              }
#line 6196 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1092_1092 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1092_1092;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1835_1835, mdb__declarative_execution__V_1090_1090);
#line 47 "declarative_execution.m"
                                  return;
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 6221 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 6227 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 6233 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 6239 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6245 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6251 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 5:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_1806_1806 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1807_1807 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1808_1808 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 6283 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 6289 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 6295 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 6308 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 6314 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6320 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 6326 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 6332 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1199_1199 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1200_1200 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1201_1201 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1202_1202;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1202_1202, mdb__declarative_execution__V_1808_1808, mdb__declarative_execution__V_1199_1199);
                          }
#line 6354 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1202_1202 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1202_1202;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1203_1203;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1203_1203, mdb__declarative_execution__V_1807_1807, mdb__declarative_execution__V_1200_1200);
                              }
#line 6374 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1203_1203 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1203_1203;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_1857_1857 = (MR_Integer) mdb__declarative_execution__V_1806_1806;
#line 47 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_1858_1858 = (MR_Integer) mdb__declarative_execution__V_1201_1201;

#line 47 "declarative_execution.m"
                                  {
#line 47 "declarative_execution.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1857_1857, mdb__declarative_execution__V_1858_1858);
#line 47 "declarative_execution.m"
                                    return;
                                  }
#line 47 "declarative_execution.m"
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 6408 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 6414 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 6420 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6426 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6432 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 6:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1854_1854 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1855_1855 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1856_1856 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 6464 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 6470 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 6476 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 6489 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 6495 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6501 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 6507 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 6513 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 6519 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1310_1310 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1311_1311 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1312_1312 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1313_1313;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1313_1313, mdb__declarative_execution__V_1856_1856, mdb__declarative_execution__V_1310_1310);
                          }
#line 6541 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1313_1313 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1313_1313;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1314_1314;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1314_1314, mdb__declarative_execution__V_1855_1855, mdb__declarative_execution__V_1311_1311);
                              }
#line 6561 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1314_1314 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1314_1314;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1854_1854, mdb__declarative_execution__V_1312_1312);
#line 47 "declarative_execution.m"
                                  return;
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 6586 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 6592 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6598 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6604 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 7:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1809_1809 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1810_1810 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1811_1811 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 6636 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 6642 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 6648 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 6661 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 6667 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6673 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 6679 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 6685 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 6691 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 6697 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1421_1421 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1422_1422 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1423_1423 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1424_1424;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1424_1424, mdb__declarative_execution__V_1811_1811, mdb__declarative_execution__V_1421_1421);
                          }
#line 6719 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1424_1424 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1424_1424;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1425_1425;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1425_1425, mdb__declarative_execution__V_1810_1810, mdb__declarative_execution__V_1422_1422);
                              }
#line 6739 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1425_1425 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1425_1425;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1809_1809, mdb__declarative_execution__V_1423_1423);
#line 47 "declarative_execution.m"
                                  return;
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 6764 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6770 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6776 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 8:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_1838_1838 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1839_1839 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1840_1840 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 6808 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 6814 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 6820 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 6833 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 6839 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6845 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 6851 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 6857 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 6863 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 6869 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 6875 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1532_1532 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1533_1533 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1534_1534 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1535_1535;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1535_1535, mdb__declarative_execution__V_1840_1840, mdb__declarative_execution__V_1532_1532);
                          }
#line 6897 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1535_1535 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1535_1535;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1536_1536;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1536_1536, mdb__declarative_execution__V_1839_1839, mdb__declarative_execution__V_1533_1533);
                              }
#line 6917 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1536_1536 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1536_1536;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_1859_1859 = (MR_Integer) mdb__declarative_execution__V_1838_1838;
#line 47 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_1860_1860 = (MR_Integer) mdb__declarative_execution__V_1534_1534;

#line 47 "declarative_execution.m"
                                  {
#line 47 "declarative_execution.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1859_1859, mdb__declarative_execution__V_1860_1860);
#line 47 "declarative_execution.m"
                                    return;
                                  }
#line 47 "declarative_execution.m"
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6951 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6957 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 9:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1844_1844 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1845_1845 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1846_1846 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 6989 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 6995 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 7001 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 7014 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 7020 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 7026 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 7032 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 7038 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 7044 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 7050 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 7056 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 7062 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1643_1643 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1644_1644 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1645_1645 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1646_1646;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1646_1646, mdb__declarative_execution__V_1846_1846, mdb__declarative_execution__V_1643_1643);
                          }
#line 7084 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1646_1646 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1646_1646;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1647_1647;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1647_1647, mdb__declarative_execution__V_1845_1845, mdb__declarative_execution__V_1644_1644);
                              }
#line 7104 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1647_1647 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1647_1647;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1844_1844, mdb__declarative_execution__V_1645_1645);
#line 47 "declarative_execution.m"
                                  return;
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 7129 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 10:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1841_1841 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1842_1842 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1843_1843 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 47 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 7161 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 7167 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 7173 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 7186 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 7192 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 7198 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 7204 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 7210 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 7216 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 7222 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 7228 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 7234 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 7240 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 47 "declarative_execution.m"
                        {
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1754_1754 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1755_1755 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1756_1756 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1757_1757;

#line 47 "declarative_execution.m"
                          {
#line 47 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1757_1757, mdb__declarative_execution__V_1843_1843, mdb__declarative_execution__V_1754_1754);
                          }
#line 7262 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1757_1757 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1757_1757;
#line 47 "declarative_execution.m"
                          else
#line 47 "declarative_execution.m"
                            {
#line 47 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1758_1758;

#line 47 "declarative_execution.m"
                              {
#line 47 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1758_1758, mdb__declarative_execution__V_1842_1842, mdb__declarative_execution__V_1755_1755);
                              }
#line 7282 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1758_1758 == (MR_Integer) 0);
#line 47 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 47 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1758_1758;
#line 47 "declarative_execution.m"
                              else
#line 47 "declarative_execution.m"
                                {
#line 47 "declarative_execution.m"
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1841_1841, mdb__declarative_execution__V_1756_1756);
#line 47 "declarative_execution.m"
                                  return;
                                }
#line 47 "declarative_execution.m"
                            }
#line 47 "declarative_execution.m"
                        }
#line 47 "declarative_execution.m"
                        break;
#line 47 "declarative_execution.m"
                    }
#line 47 "declarative_execution.m"
                    break;
#line 47 "declarative_execution.m"
                }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
          }
#line 47 "declarative_execution.m"
          break;
#line 47 "declarative_execution.m"
      }
#line 47 "declarative_execution.m"
  }
#line 47 "declarative_execution.m"
}

#line 47 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0(
#line 47 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_127,
#line 47 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 47 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 47 "declarative_execution.m"
{
#line 47 "declarative_execution.m"
  {
#line 47 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 47 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_125 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 47 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_126 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 47 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_125 == mdb__declarative_execution__CastY_126);
#line 47 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 47 "declarative_execution.m"
    else
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
      switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
#line 47 "declarative_execution.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
        case (MR_Integer) 0:
#line 47 "declarative_execution.m"
          {
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__TypeInfo_128_128;
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__TypeInfo_129_129;
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__TypeInfo_130_130;
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_13_13;
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_14_14;
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_15_15;
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_16_16;
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_17_17;
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_18_18;
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_19_19;
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_20_20;
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_21_21;
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_22_22;

#line 47 "declarative_execution.m"
            mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 47 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 8)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 9)));
#line 7436 "mdb.declarative_execution.c"
                {
#line 7438 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_13_13);
                }
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 7445 "mdb.declarative_execution.c"
                    {
#line 7447 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_14_14);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 7454 "mdb.declarative_execution.c"
                        mdb__declarative_execution__TypeInfo_128_128 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
#line 7456 "mdb.declarative_execution.c"
                        {
#line 7458 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_128_128, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_15_15)));
                        }
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                          {
#line 7465 "mdb.declarative_execution.c"
                            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_6_6 == mdb__declarative_execution__V_16_16);
#line 47 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                              {
#line 7471 "mdb.declarative_execution.c"
                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_7_7 == mdb__declarative_execution__V_17_17);
#line 47 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                  {
#line 7477 "mdb.declarative_execution.c"
                                    mdb__declarative_execution__TypeInfo_129_129 = (MR_Word) &mdb__declarative_execution_scalar_common_1[1];
#line 7479 "mdb.declarative_execution.c"
                                    {
#line 7481 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_129_129, ((MR_Box) (mdb__declarative_execution__V_8_8)), ((MR_Box) (mdb__declarative_execution__V_18_18)));
                                    }
#line 47 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                      {
#line 7488 "mdb.declarative_execution.c"
                                        mdb__declarative_execution__TypeInfo_130_130 = (MR_Word) &mdb__declarative_execution_scalar_common_1[5];
#line 7490 "mdb.declarative_execution.c"
                                        {
#line 7492 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_130_130, ((MR_Box) (mdb__declarative_execution__V_9_9)), ((MR_Box) (mdb__declarative_execution__V_19_19)));
                                        }
#line 47 "declarative_execution.m"
                                        if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                          {
#line 7499 "mdb.declarative_execution.c"
                                            {
#line 7501 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_10_10, mdb__declarative_execution__V_20_20);
                                            }
#line 47 "declarative_execution.m"
                                            if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                              {
#line 7508 "mdb.declarative_execution.c"
                                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_11_11 == mdb__declarative_execution__V_21_21);
#line 47 "declarative_execution.m"
                                                if (mdb__declarative_execution__succeeded)
#line 7512 "mdb.declarative_execution.c"
                                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_12_12 == mdb__declarative_execution__V_22_22);
#line 47 "declarative_execution.m"
                                              }
#line 47 "declarative_execution.m"
                                          }
#line 47 "declarative_execution.m"
                                      }
#line 47 "declarative_execution.m"
                                  }
#line 47 "declarative_execution.m"
                              }
#line 47 "declarative_execution.m"
                          }
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
          }
#line 47 "declarative_execution.m"
          break;
#line 47 "declarative_execution.m"
        case (MR_Integer) 1:
#line 47 "declarative_execution.m"
          {
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__TypeInfo_132_132;
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_23_23 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_25_25 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_31_31;
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_32_32;
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_33_33;
#line 47 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_34_34;
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_35_35;
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_36_36;
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_37_37;
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_38_38;

#line 47 "declarative_execution.m"
            mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 47 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_31_31 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_32_32 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_33_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_36_36 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 7597 "mdb.declarative_execution.c"
                {
#line 7599 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_23_23, mdb__declarative_execution__V_31_31);
                }
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 7606 "mdb.declarative_execution.c"
                    {
#line 7608 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_24_24, mdb__declarative_execution__V_32_32);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 7615 "mdb.declarative_execution.c"
                        {
#line 7617 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_25_25, mdb__declarative_execution__V_33_33);
                        }
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                          {
#line 7624 "mdb.declarative_execution.c"
                            mdb__declarative_execution__TypeInfo_132_132 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
#line 7626 "mdb.declarative_execution.c"
                            {
#line 7628 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_132_132, ((MR_Box) (mdb__declarative_execution__V_26_26)), ((MR_Box) (mdb__declarative_execution__V_34_34)));
                            }
#line 47 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                              {
#line 7635 "mdb.declarative_execution.c"
                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_27_27 == mdb__declarative_execution__V_35_35);
#line 47 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                  {
#line 7641 "mdb.declarative_execution.c"
                                    {
#line 7643 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_28_28, mdb__declarative_execution__V_36_36);
                                    }
#line 47 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                      {
#line 7650 "mdb.declarative_execution.c"
                                        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_29_29 == mdb__declarative_execution__V_37_37);
#line 47 "declarative_execution.m"
                                        if (mdb__declarative_execution__succeeded)
#line 7654 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_30_30 == mdb__declarative_execution__V_38_38);
#line 47 "declarative_execution.m"
                                      }
#line 47 "declarative_execution.m"
                                  }
#line 47 "declarative_execution.m"
                              }
#line 47 "declarative_execution.m"
                          }
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
          }
#line 47 "declarative_execution.m"
          break;
#line 47 "declarative_execution.m"
        case (MR_Integer) 2:
#line 47 "declarative_execution.m"
          {
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_39_39 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_40_40 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_44_44;
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_45_45;
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_46_46;
#line 47 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_47_47;
#line 47 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_48_48;

#line 47 "declarative_execution.m"
            mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 47 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_44_44 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_45_45 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_47_47 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                mdb__declarative_execution__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 7715 "mdb.declarative_execution.c"
                {
#line 7717 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_39_39, mdb__declarative_execution__V_44_44);
                }
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 7724 "mdb.declarative_execution.c"
                    {
#line 7726 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_40_40, mdb__declarative_execution__V_45_45);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 7733 "mdb.declarative_execution.c"
                        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_41_41 == mdb__declarative_execution__V_46_46);
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                          {
#line 7739 "mdb.declarative_execution.c"
                            {
#line 7741 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_42_42, mdb__declarative_execution__V_47_47);
                            }
#line 47 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 7746 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_43_43 == mdb__declarative_execution__V_48_48);
#line 47 "declarative_execution.m"
                          }
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
          }
#line 47 "declarative_execution.m"
          break;
#line 47 "declarative_execution.m"
        case (MR_Integer) 3:
#line 47 "declarative_execution.m"
#line 47 "declarative_execution.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) {
#line 47 "declarative_execution.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 47 "declarative_execution.m"
            case (MR_Integer) 0:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_50_50 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_51_51 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_53_53 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_55_55;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_56_56;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_57_57;
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_58_58;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_59_59;
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_60_60;

#line 47 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_55_55 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_56_56 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_57_57 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_59_59 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 7814 "mdb.declarative_execution.c"
                    {
#line 7816 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_49_49, mdb__declarative_execution__V_55_55);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 7823 "mdb.declarative_execution.c"
                        {
#line 7825 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_50_50, mdb__declarative_execution__V_56_56);
                        }
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                          {
#line 7832 "mdb.declarative_execution.c"
                            {
#line 7834 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_51_51, mdb__declarative_execution__V_57_57);
                            }
#line 47 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                              {
#line 7841 "mdb.declarative_execution.c"
                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_52_52 == mdb__declarative_execution__V_58_58);
#line 47 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                  {
#line 7847 "mdb.declarative_execution.c"
                                    {
#line 7849 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_53_53, mdb__declarative_execution__V_59_59);
                                    }
#line 47 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 7854 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_54_54 == mdb__declarative_execution__V_60_60);
#line 47 "declarative_execution.m"
                                  }
#line 47 "declarative_execution.m"
                              }
#line 47 "declarative_execution.m"
                          }
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 1:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_62_62 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_63_63 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
#line 47 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_66_66 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_68_68;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_69_69;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_70_70;
#line 47 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_71_71;
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_72_72;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_73_73;
#line 47 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_74_74;

#line 47 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_68_68 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_70_70 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_73_73 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 7923 "mdb.declarative_execution.c"
                    {
#line 7925 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_61_61, mdb__declarative_execution__V_68_68);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 7932 "mdb.declarative_execution.c"
                        {
#line 7934 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_62_62, mdb__declarative_execution__V_69_69);
                        }
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                          {
#line 7941 "mdb.declarative_execution.c"
                            {
#line 7943 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_63_63, mdb__declarative_execution__V_70_70);
                            }
#line 47 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                              {
#line 7950 "mdb.declarative_execution.c"
                                {
#line 7952 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_execution__V_64_64, mdb__declarative_execution__V_71_71);
                                }
#line 47 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                  {
#line 7959 "mdb.declarative_execution.c"
                                    mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_65_65 == mdb__declarative_execution__V_72_72);
#line 47 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                                      {
#line 7965 "mdb.declarative_execution.c"
                                        {
#line 7967 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_66_66, mdb__declarative_execution__V_73_73);
                                        }
#line 47 "declarative_execution.m"
                                        if (mdb__declarative_execution__succeeded)
#line 7972 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_67_67 == mdb__declarative_execution__V_74_74);
#line 47 "declarative_execution.m"
                                      }
#line 47 "declarative_execution.m"
                                  }
#line 47 "declarative_execution.m"
                              }
#line 47 "declarative_execution.m"
                          }
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 2:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_75_75 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_76_76 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_77_77;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_78_78;

#line 47 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_77_77 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_78_78 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 8013 "mdb.declarative_execution.c"
                    {
#line 8015 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_75_75, mdb__declarative_execution__V_77_77);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 8020 "mdb.declarative_execution.c"
                      {
#line 8022 "mdb.declarative_execution.c"
                        return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_76_76, mdb__declarative_execution__V_78_78);
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 3:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_79_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_80_80 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_81_81;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_82_82;

#line 47 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_81_81 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_82_82 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 8054 "mdb.declarative_execution.c"
                    {
#line 8056 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_79_79, mdb__declarative_execution__V_81_81);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 8061 "mdb.declarative_execution.c"
                      {
#line 8063 "mdb.declarative_execution.c"
                        return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_80_80, mdb__declarative_execution__V_82_82);
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 4:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_83_83 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_84_84 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_85_85 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_86_86;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_87_87;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_88_88;

#line 47 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_86_86 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_87_87 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_88_88 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 8101 "mdb.declarative_execution.c"
                    {
#line 8103 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_83_83, mdb__declarative_execution__V_86_86);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 8110 "mdb.declarative_execution.c"
                        {
#line 8112 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_84_84, mdb__declarative_execution__V_87_87);
                        }
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8117 "mdb.declarative_execution.c"
                          {
#line 8119 "mdb.declarative_execution.c"
                            return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_85_85, mdb__declarative_execution__V_88_88);
                          }
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 5:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_89_89 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_90_90 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_92_92;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_93_93;
#line 47 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_94_94;

#line 47 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_92_92 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_93_93 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8159 "mdb.declarative_execution.c"
                    {
#line 8161 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_89_89, mdb__declarative_execution__V_92_92);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 8168 "mdb.declarative_execution.c"
                        {
#line 8170 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_90_90, mdb__declarative_execution__V_93_93);
                        }
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8175 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_91_91 == mdb__declarative_execution__V_94_94);
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 6:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_95_95 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_96_96 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_97_97 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_98_98;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_99_99;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_100_100;

#line 47 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_98_98 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_99_99 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_100_100 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8214 "mdb.declarative_execution.c"
                    {
#line 8216 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_95_95, mdb__declarative_execution__V_98_98);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 8223 "mdb.declarative_execution.c"
                        {
#line 8225 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_96_96, mdb__declarative_execution__V_99_99);
                        }
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8230 "mdb.declarative_execution.c"
                          {
#line 8232 "mdb.declarative_execution.c"
                            return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_97_97, mdb__declarative_execution__V_100_100);
                          }
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 7:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_101_101 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_102_102 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_103_103 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_104_104;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_105_105;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_106_106;

#line 47 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_104_104 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_105_105 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_106_106 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8272 "mdb.declarative_execution.c"
                    {
#line 8274 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_101_101, mdb__declarative_execution__V_104_104);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 8281 "mdb.declarative_execution.c"
                        {
#line 8283 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_102_102, mdb__declarative_execution__V_105_105);
                        }
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8288 "mdb.declarative_execution.c"
                          {
#line 8290 "mdb.declarative_execution.c"
                            return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_103_103, mdb__declarative_execution__V_106_106);
                          }
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 8:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_107_107 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_108_108 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_110_110;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_111_111;
#line 47 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_112_112;

#line 47 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_110_110 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_111_111 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8330 "mdb.declarative_execution.c"
                    {
#line 8332 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_107_107, mdb__declarative_execution__V_110_110);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 8339 "mdb.declarative_execution.c"
                        {
#line 8341 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_108_108, mdb__declarative_execution__V_111_111);
                        }
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8346 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_109_109 == mdb__declarative_execution__V_112_112);
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 9:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_113_113 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_114_114 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_115_115 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_116_116;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_117_117;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_118_118;

#line 47 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_116_116 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_117_117 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_118_118 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8385 "mdb.declarative_execution.c"
                    {
#line 8387 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_113_113, mdb__declarative_execution__V_116_116);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 8394 "mdb.declarative_execution.c"
                        {
#line 8396 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_114_114, mdb__declarative_execution__V_117_117);
                        }
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8401 "mdb.declarative_execution.c"
                          {
#line 8403 "mdb.declarative_execution.c"
                            return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_115_115, mdb__declarative_execution__V_118_118);
                          }
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
            case (MR_Integer) 10:
#line 47 "declarative_execution.m"
              {
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_119_119 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_120_120 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_121_121 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_122_122;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_123_123;
#line 47 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_124_124;

#line 47 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 47 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                  {
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_122_122 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_123_123 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 47 "declarative_execution.m"
                    mdb__declarative_execution__V_124_124 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8443 "mdb.declarative_execution.c"
                    {
#line 8445 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_119_119, mdb__declarative_execution__V_122_122);
                    }
#line 47 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 47 "declarative_execution.m"
                      {
#line 8452 "mdb.declarative_execution.c"
                        {
#line 8454 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_120_120, mdb__declarative_execution__V_123_123);
                        }
#line 47 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8459 "mdb.declarative_execution.c"
                          {
#line 8461 "mdb.declarative_execution.c"
                            return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_121_121, mdb__declarative_execution__V_124_124);
                          }
#line 47 "declarative_execution.m"
                      }
#line 47 "declarative_execution.m"
                  }
#line 47 "declarative_execution.m"
              }
#line 47 "declarative_execution.m"
              break;
#line 47 "declarative_execution.m"
          }
#line 47 "declarative_execution.m"
          break;
#line 47 "declarative_execution.m"
      }
#line 47 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 47 "declarative_execution.m"
  }
#line 47 "declarative_execution.m"
}

#line 238 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0(
#line 238 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 238 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 238 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 238 "declarative_execution.m"
{
#line 238 "declarative_execution.m"
  {
#line 238 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 238 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_12 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 238 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_13 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 238 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_12 == mdb__declarative_execution__CastY_13);
#line 238 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 8509 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 238 "declarative_execution.m"
    else
#line 238 "declarative_execution.m"
      {
#line 238 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 238 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)));
#line 238 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1)));
#line 238 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 238 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_10_10;
#line 238 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_17_17 = (MR_Integer) mdb__declarative_execution__V_4_4;
#line 238 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_18_18 = (MR_Integer) mdb__declarative_execution__V_7_7;

#line 238 "declarative_execution.m"
        {
#line 238 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_10_10, mdb__declarative_execution__V_17_17, mdb__declarative_execution__V_18_18);
        }
#line 8539 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_10_10 == (MR_Integer) 0);
#line 238 "declarative_execution.m"
        mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 238 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 238 "declarative_execution.m"
          *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_10_10;
#line 238 "declarative_execution.m"
        else
#line 238 "declarative_execution.m"
          {
#line 238 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_11_11;

#line 238 "declarative_execution.m"
            {
#line 238 "declarative_execution.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_11_11, mdb__declarative_execution__V_5_5, mdb__declarative_execution__V_8_8);
            }
#line 8559 "mdb.declarative_execution.c"
            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_11_11 == (MR_Integer) 0);
#line 238 "declarative_execution.m"
            mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 238 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 238 "declarative_execution.m"
              *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_11_11;
#line 238 "declarative_execution.m"
            else
#line 238 "declarative_execution.m"
              {
#line 238 "declarative_execution.m"
                {
#line 238 "declarative_execution.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[4], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_6_6)), ((MR_Box) (mdb__declarative_execution__V_9_9)));
#line 238 "declarative_execution.m"
                  return;
                }
#line 238 "declarative_execution.m"
              }
#line 238 "declarative_execution.m"
          }
#line 238 "declarative_execution.m"
      }
#line 238 "declarative_execution.m"
  }
#line 238 "declarative_execution.m"
}

#line 238 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0(
#line 238 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 238 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 238 "declarative_execution.m"
{
#line 238 "declarative_execution.m"
  {
#line 238 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 238 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_9 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 238 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_10 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 238 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_9 == mdb__declarative_execution__CastY_10);
#line 238 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 238 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 238 "declarative_execution.m"
    else
#line 238 "declarative_execution.m"
      {
#line 238 "declarative_execution.m"
        MR_Word mdb__declarative_execution__TypeInfo_11_11;
#line 238 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 238 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 238 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 238 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 238 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 238 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));

#line 8632 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_6_6);
#line 238 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 238 "declarative_execution.m"
          {
#line 8638 "mdb.declarative_execution.c"
            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_4_4 == mdb__declarative_execution__V_7_7);
#line 238 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 238 "declarative_execution.m"
              {
#line 8644 "mdb.declarative_execution.c"
                mdb__declarative_execution__TypeInfo_11_11 = (MR_Word) &mdb__declarative_execution_scalar_common_1[4];
#line 8646 "mdb.declarative_execution.c"
                {
#line 8648 "mdb.declarative_execution.c"
                  return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_11_11, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_8_8)));
                }
#line 238 "declarative_execution.m"
              }
#line 238 "declarative_execution.m"
          }
#line 238 "declarative_execution.m"
      }
#line 238 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 238 "declarative_execution.m"
  }
#line 238 "declarative_execution.m"
}

#line 249 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0(
#line 249 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 249 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 249 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 249 "declarative_execution.m"
{
#line 249 "declarative_execution.m"
  {
#line 249 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 249 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_9 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 249 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_10 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 249 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_9 == mdb__declarative_execution__CastY_10);
#line 249 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 8688 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 249 "declarative_execution.m"
    else
#line 249 "declarative_execution.m"
      {
#line 249 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 249 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 249 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)));
#line 249 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1)));
#line 249 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_8_8;

#line 249 "declarative_execution.m"
        {
#line 249 "declarative_execution.m"
          mdbcomp__rtti_access____Compare____proc_layout_0_0(&mdb__declarative_execution__V_8_8, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_6_6);
        }
#line 8710 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_8_8 == (MR_Integer) 0);
#line 249 "declarative_execution.m"
        mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 249 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 249 "declarative_execution.m"
          *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_8_8;
#line 249 "declarative_execution.m"
        else
#line 249 "declarative_execution.m"
          {
#line 249 "declarative_execution.m"
            {
#line 249 "declarative_execution.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_7_7)));
#line 249 "declarative_execution.m"
              return;
            }
#line 249 "declarative_execution.m"
          }
#line 249 "declarative_execution.m"
      }
#line 249 "declarative_execution.m"
  }
#line 249 "declarative_execution.m"
}

#line 249 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0(
#line 249 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 249 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 249 "declarative_execution.m"
{
#line 249 "declarative_execution.m"
  {
#line 249 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 249 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_7 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 249 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_8 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 249 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_7 == mdb__declarative_execution__CastY_8);
#line 249 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 249 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 249 "declarative_execution.m"
    else
#line 249 "declarative_execution.m"
      {
#line 249 "declarative_execution.m"
        MR_Word mdb__declarative_execution__TypeInfo_9_9;
#line 249 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_3_3 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 249 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 249 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 249 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));

#line 8777 "mdb.declarative_execution.c"
        {
#line 8779 "mdb.declarative_execution.c"
          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____proc_layout_0_0(mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_5_5);
        }
#line 249 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 249 "declarative_execution.m"
          {
#line 8786 "mdb.declarative_execution.c"
            mdb__declarative_execution__TypeInfo_9_9 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
#line 8788 "mdb.declarative_execution.c"
            {
#line 8790 "mdb.declarative_execution.c"
              return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_9_9, ((MR_Box) (mdb__declarative_execution__V_4_4)), ((MR_Box) (mdb__declarative_execution__V_6_6)));
            }
#line 249 "declarative_execution.m"
          }
#line 249 "declarative_execution.m"
      }
#line 249 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 249 "declarative_execution.m"
  }
#line 249 "declarative_execution.m"
}

#line 300 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0(
#line 300 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 300 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2,
#line 300 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__3_3)
#line 300 "declarative_execution.m"
{
#line 300 "declarative_execution.m"
  {
#line 300 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 300 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = mdb__declarative_execution__HeadVar__2_2;
#line 300 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = mdb__declarative_execution__HeadVar__3_3;

#line 300 "declarative_execution.m"
    {
#line 300 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 300 "declarative_execution.m"
      return;
    }
#line 300 "declarative_execution.m"
  }
#line 300 "declarative_execution.m"
}

#line 300 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0(
#line 300 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__1_1,
#line 300 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2)
#line 300 "declarative_execution.m"
{
#line 300 "declarative_execution.m"
  {
#line 300 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 300 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_3 = mdb__declarative_execution__HeadVar__1_1;
#line 300 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_4 = mdb__declarative_execution__HeadVar__2_2;

#line 300 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__Cast_HeadVar1_3 == mdb__declarative_execution__Cast_HeadVar2_4);
#line 300 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 300 "declarative_execution.m"
  }
#line 300 "declarative_execution.m"
}

#line 297 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0(
#line 297 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 297 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2,
#line 297 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__3_3)
#line 297 "declarative_execution.m"
{
#line 297 "declarative_execution.m"
  {
#line 297 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 297 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = mdb__declarative_execution__HeadVar__2_2;
#line 297 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = mdb__declarative_execution__HeadVar__3_3;

#line 297 "declarative_execution.m"
    {
#line 297 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 297 "declarative_execution.m"
      return;
    }
#line 297 "declarative_execution.m"
  }
#line 297 "declarative_execution.m"
}

#line 297 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0(
#line 297 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__1_1,
#line 297 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2)
#line 297 "declarative_execution.m"
{
#line 297 "declarative_execution.m"
  {
#line 297 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 297 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_3 = mdb__declarative_execution__HeadVar__1_1;
#line 297 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_4 = mdb__declarative_execution__HeadVar__2_2;

#line 297 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__Cast_HeadVar1_3 == mdb__declarative_execution__Cast_HeadVar2_4);
#line 297 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 297 "declarative_execution.m"
  }
#line 297 "declarative_execution.m"
}

#line 261 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0(
#line 261 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 261 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 261 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 261 "declarative_execution.m"
{
#line 261 "declarative_execution.m"
  {
#line 261 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 261 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 261 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 261 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 261 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 8946 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 261 "declarative_execution.m"
    else
#line 261 "declarative_execution.m"
      {
#line 261 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 261 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 261 "declarative_execution.m"
        {
#line 261 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 261 "declarative_execution.m"
          return;
        }
#line 261 "declarative_execution.m"
      }
#line 261 "declarative_execution.m"
  }
#line 261 "declarative_execution.m"
}

#line 261 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0(
#line 261 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 261 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 261 "declarative_execution.m"
{
#line 261 "declarative_execution.m"
  {
#line 261 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 261 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 261 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 261 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 261 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 261 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 261 "declarative_execution.m"
    else
#line 261 "declarative_execution.m"
      {
#line 261 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 261 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 9004 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
#line 261 "declarative_execution.m"
      }
#line 261 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 261 "declarative_execution.m"
  }
#line 261 "declarative_execution.m"
}

#line 292 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0(
#line 292 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 292 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 292 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 292 "declarative_execution.m"
{
#line 292 "declarative_execution.m"
  {
#line 292 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 292 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 292 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 292 "declarative_execution.m"
    {
#line 292 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 292 "declarative_execution.m"
      return;
    }
#line 292 "declarative_execution.m"
  }
#line 292 "declarative_execution.m"
}

#line 292 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0(
#line 292 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_1,
#line 292 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 292 "declarative_execution.m"
{
#line 9056 "mdb.declarative_execution.c"
  {
#line 9058 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__HeadVar__2_1 == mdb__declarative_execution__HeadVar__2_2);

#line 9061 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 9063 "mdb.declarative_execution.c"
  }
#line 292 "declarative_execution.m"
}

#line 298 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0(
#line 298 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 298 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2,
#line 298 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__3_3)
#line 298 "declarative_execution.m"
{
#line 298 "declarative_execution.m"
  {
#line 298 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 298 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = mdb__declarative_execution__HeadVar__2_2;
#line 298 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = mdb__declarative_execution__HeadVar__3_3;

#line 298 "declarative_execution.m"
    {
#line 298 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 298 "declarative_execution.m"
      return;
    }
#line 298 "declarative_execution.m"
  }
#line 298 "declarative_execution.m"
}

#line 298 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0(
#line 298 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__1_1,
#line 298 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2)
#line 298 "declarative_execution.m"
{
#line 298 "declarative_execution.m"
  {
#line 298 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 298 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_3 = mdb__declarative_execution__HeadVar__1_1;
#line 298 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_4 = mdb__declarative_execution__HeadVar__2_2;

#line 298 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__Cast_HeadVar1_3 == mdb__declarative_execution__Cast_HeadVar2_4);
#line 298 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 298 "declarative_execution.m"
  }
#line 298 "declarative_execution.m"
}

#line 1548 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(
#line 1548 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1548 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ArgNum_2,
#line 1548 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1548 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__UserArgNum_4)
#line 1548 "declarative_execution.m"
{
#line 1551 "declarative_execution.m"
  while (MR_TRUE)
#line 1551 "declarative_execution.m"
    {
#line 1551 "declarative_execution.m"
      /* tailcall optimized into a loop */
#line 1551 "declarative_execution.m"
      {
#line 1551 "declarative_execution.m"
        MR_bool mdb__declarative_execution__succeeded;

#line 1551 "declarative_execution.m"
        if ((mdb__declarative_execution__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1551 "declarative_execution.m"
          {
#line 1552 "declarative_execution.m"
            {
#line 1552 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[33])));
#line 1552 "declarative_execution.m"
              return;
            }
#line 1551 "declarative_execution.m"
          }
#line 1551 "declarative_execution.m"
        else
#line 1554 "declarative_execution.m"
          {
#line 1554 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1554 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1554 "declarative_execution.m"
            MR_Word mdb__declarative_execution__UserVis_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 0)));
#line 1555 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 1)));
#line 1555 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 2)));

#line 1559 "declarative_execution.m"
#line 1559 "declarative_execution.m"
            switch (mdb__declarative_execution__UserVis_16) {
#line 1559 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1559 "declarative_execution.m"
              case (MR_Integer) 0:
#line 1557 "declarative_execution.m"
                {
#line 1557 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_23_23 = (mdb__declarative_execution__ArgNum_2 - (MR_Integer) 1);

#line 1558 "declarative_execution.m"
                  /* direct tailcall eliminated */
#line 1558 "declarative_execution.m"
                  {
#line 1558 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1558 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__ArgNum__tmp_copy_2 = mdb__declarative_execution__V_23_23;

#line 1558 "declarative_execution.m"
                    mdb__declarative_execution__ArgNum_2 = mdb__declarative_execution__ArgNum__tmp_copy_2;
#line 1558 "declarative_execution.m"
                    mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1558 "declarative_execution.m"
                  }
#line 1558 "declarative_execution.m"
                  continue;
#line 1557 "declarative_execution.m"
                }
#line 1559 "declarative_execution.m"
                break;
#line 1559 "declarative_execution.m"
              case (MR_Integer) 1:
#line 1563 "declarative_execution.m"
                {
#line 1561 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__ArgNum_2 == (MR_Integer) 1);
#line 1563 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 1562 "declarative_execution.m"
                    *mdb__declarative_execution__UserArgNum_4 = mdb__declarative_execution__CurArgNum_3;
#line 1563 "declarative_execution.m"
                  else
#line 1564 "declarative_execution.m"
                    {
#line 1564 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_19_19 = (mdb__declarative_execution__ArgNum_2 - (MR_Integer) 1);
#line 1564 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_20_20 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

#line 1564 "declarative_execution.m"
                      /* direct tailcall eliminated */
#line 1564 "declarative_execution.m"
                      {
#line 1564 "declarative_execution.m"
                        MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1564 "declarative_execution.m"
                        MR_Integer mdb__declarative_execution__ArgNum__tmp_copy_2 = mdb__declarative_execution__V_19_19;
#line 1564 "declarative_execution.m"
                        MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_20_20;

#line 1564 "declarative_execution.m"
                        mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
#line 1564 "declarative_execution.m"
                        mdb__declarative_execution__ArgNum_2 = mdb__declarative_execution__ArgNum__tmp_copy_2;
#line 1564 "declarative_execution.m"
                        mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1564 "declarative_execution.m"
                      }
#line 1564 "declarative_execution.m"
                      continue;
#line 1564 "declarative_execution.m"
                    }
#line 1563 "declarative_execution.m"
                }
#line 1559 "declarative_execution.m"
                break;
#line 1559 "declarative_execution.m"
            }
#line 1554 "declarative_execution.m"
          }
#line 1551 "declarative_execution.m"
      }
#line 1551 "declarative_execution.m"
      break;
#line 1551 "declarative_execution.m"
    }
#line 1548 "declarative_execution.m"
}

#line 1525 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(
#line 1525 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1525 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SearchUserHeadVarNum_2,
#line 1525 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1525 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__ArgNum_4)
#line 1525 "declarative_execution.m"
{
#line 1528 "declarative_execution.m"
  while (MR_TRUE)
#line 1528 "declarative_execution.m"
    {
#line 1528 "declarative_execution.m"
      /* tailcall optimized into a loop */
#line 1528 "declarative_execution.m"
      {
#line 1528 "declarative_execution.m"
        MR_bool mdb__declarative_execution__succeeded;

#line 1528 "declarative_execution.m"
        if ((mdb__declarative_execution__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1528 "declarative_execution.m"
          {
#line 1529 "declarative_execution.m"
            {
#line 1529 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[32])));
#line 1529 "declarative_execution.m"
              return;
            }
#line 1528 "declarative_execution.m"
          }
#line 1528 "declarative_execution.m"
        else
#line 1532 "declarative_execution.m"
          {
#line 1532 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1532 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1532 "declarative_execution.m"
            MR_Word mdb__declarative_execution__UserVis_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 0)));
#line 1533 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 1)));
#line 1533 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 2)));

#line 1538 "declarative_execution.m"
#line 1538 "declarative_execution.m"
            switch (mdb__declarative_execution__UserVis_16) {
#line 1538 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1538 "declarative_execution.m"
              case (MR_Integer) 0:
#line 1535 "declarative_execution.m"
                {
#line 1535 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_23_23 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

#line 1536 "declarative_execution.m"
                  /* direct tailcall eliminated */
#line 1536 "declarative_execution.m"
                  {
#line 1536 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1536 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_23_23;

#line 1536 "declarative_execution.m"
                    mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
#line 1536 "declarative_execution.m"
                    mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1536 "declarative_execution.m"
                  }
#line 1536 "declarative_execution.m"
                  continue;
#line 1535 "declarative_execution.m"
                }
#line 1538 "declarative_execution.m"
                break;
#line 1538 "declarative_execution.m"
              case (MR_Integer) 1:
#line 1542 "declarative_execution.m"
                {
#line 1540 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__SearchUserHeadVarNum_2 == (MR_Integer) 1);
#line 1542 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 1541 "declarative_execution.m"
                    *mdb__declarative_execution__ArgNum_4 = mdb__declarative_execution__CurArgNum_3;
#line 1542 "declarative_execution.m"
                  else
#line 1543 "declarative_execution.m"
                    {
#line 1543 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_19_19 = (mdb__declarative_execution__SearchUserHeadVarNum_2 - (MR_Integer) 1);
#line 1543 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_20_20 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

#line 1543 "declarative_execution.m"
                      /* direct tailcall eliminated */
#line 1543 "declarative_execution.m"
                      {
#line 1543 "declarative_execution.m"
                        MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1543 "declarative_execution.m"
                        MR_Integer mdb__declarative_execution__SearchUserHeadVarNum__tmp_copy_2 = mdb__declarative_execution__V_19_19;
#line 1543 "declarative_execution.m"
                        MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_20_20;

#line 1543 "declarative_execution.m"
                        mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
#line 1543 "declarative_execution.m"
                        mdb__declarative_execution__SearchUserHeadVarNum_2 = mdb__declarative_execution__SearchUserHeadVarNum__tmp_copy_2;
#line 1543 "declarative_execution.m"
                        mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1543 "declarative_execution.m"
                      }
#line 1543 "declarative_execution.m"
                      continue;
#line 1543 "declarative_execution.m"
                    }
#line 1542 "declarative_execution.m"
                }
#line 1538 "declarative_execution.m"
                break;
#line 1538 "declarative_execution.m"
            }
#line 1532 "declarative_execution.m"
          }
#line 1528 "declarative_execution.m"
      }
#line 1528 "declarative_execution.m"
      break;
#line 1528 "declarative_execution.m"
    }
#line 1525 "declarative_execution.m"
}

#line 1449 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__convert_node_2_p_0(
#line 1449 "declarative_execution.m"
  MR_Word mdb__declarative_execution__N1_1,
#line 1449 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__N2_2)
#line 1449 "declarative_execution.m"
{
#line 1452 "declarative_execution.m"
  {
#line 1452 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1455 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__convert_node_2_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__N1_1 ;
		{
#line 1455 "declarative_execution.m"

    N2 = N1;

#line 9442 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__N2_2  = N2;
#line 1455 "declarative_execution.m"
}
#line 1452 "declarative_execution.m"
  }
#line 1449 "declarative_execution.m"
}

#line 1437 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_id_to_key_2_p_0(
#line 1437 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_1,
#line 1437 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Key_2)
#line 1437 "declarative_execution.m"
{
#line 1439 "declarative_execution.m"
  {
#line 1439 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1442 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_id_to_key_2_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__Id_1 ;
		{
#line 1442 "declarative_execution.m"

    Key = (MR_Integer) Id;

#line 9481 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__Key_2  = Key;
#line 1442 "declarative_execution.m"
}
#line 1439 "declarative_execution.m"
  }
#line 1437 "declarative_execution.m"
}

#line 1423 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_map_4_p_0(
#line 1423 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_5,
#line 1423 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_6,
#line 1423 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3,
#line 1423 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Map_8)
#line 1423 "declarative_execution.m"
{
#line 1426 "declarative_execution.m"
  while (MR_TRUE)
#line 1426 "declarative_execution.m"
    {
#line 1426 "declarative_execution.m"
      /* tailcall optimized into a loop */
#line 1426 "declarative_execution.m"
      {
#line 1426 "declarative_execution.m"
        MR_bool mdb__declarative_execution__succeeded;
#line 1426 "declarative_execution.m"
        MR_Word mdb__declarative_execution__Map0_7 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;
#line 1433 "declarative_execution.m"
        MR_Word mdb__declarative_execution__Node1_9;

#line 887 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__NodeId_6 ;
		{
#line 887 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);

#line 9536 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__declarative_execution__Node1_9  = Node;
#line 887 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 1433 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 1428 "declarative_execution.m"
          {
#line 1428 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Key_10;
#line 1428 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Node2_11;
#line 1428 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Map1_12;
#line 1428 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Next_13;
#line 1428 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_14_14;

#line 1442 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__NodeId_6 ;
		{
#line 1442 "declarative_execution.m"

    Key = (MR_Integer) Id;

#line 9574 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Key_10  = Key;
#line 1442 "declarative_execution.m"
}
#line 1455 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__Node1_9 ;
		{
#line 1455 "declarative_execution.m"

    N2 = N1;

#line 9594 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Node2_11  = N2;
#line 1455 "declarative_execution.m"
}
#line 1430 "declarative_execution.m"
            {
#line 1430 "declarative_execution.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], ((MR_Box) (mdb__declarative_execution__Key_10)), ((MR_Box) (mdb__declarative_execution__Node2_11)), mdb__declarative_execution__Map0_7, &mdb__declarative_execution__Map1_12);
            }
#line 1467 "declarative_execution.m"
#line 1467 "declarative_execution.m"
            switch (MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) {
#line 1467 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1467 "declarative_execution.m"
              case (MR_Integer) 0:
#line 1467 "declarative_execution.m"
                {
#line 1467 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_29_29;
#line 1467 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_30_30;
#line 1467 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_31_31;
#line 1467 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_32_32;
#line 1467 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_33_33;
#line 1467 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_34_34;
#line 1467 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_35_35;
#line 1467 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_36_36;
#line 1467 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_37_37;

#line 1467 "declarative_execution.m"
                  mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
#line 1467 "declarative_execution.m"
                  mdb__declarative_execution__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1467 "declarative_execution.m"
                  mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1467 "declarative_execution.m"
                  mdb__declarative_execution__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1467 "declarative_execution.m"
                  mdb__declarative_execution__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1467 "declarative_execution.m"
                  mdb__declarative_execution__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1467 "declarative_execution.m"
                  mdb__declarative_execution__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1467 "declarative_execution.m"
                  mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
#line 1467 "declarative_execution.m"
                  mdb__declarative_execution__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 8)));
#line 1467 "declarative_execution.m"
                  mdb__declarative_execution__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 9)));
#line 1467 "declarative_execution.m"
                }
#line 1467 "declarative_execution.m"
                break;
#line 1467 "declarative_execution.m"
              case (MR_Integer) 1:
#line 1468 "declarative_execution.m"
                {
#line 1468 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_39_39;
#line 1468 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_40_40;
#line 1468 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_41_41;
#line 1468 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_42_42;
#line 1468 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_43_43;
#line 1468 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_44_44;
#line 1468 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_45_45;

#line 1468 "declarative_execution.m"
                  mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
#line 1468 "declarative_execution.m"
                  mdb__declarative_execution__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1468 "declarative_execution.m"
                  mdb__declarative_execution__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1468 "declarative_execution.m"
                  mdb__declarative_execution__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1468 "declarative_execution.m"
                  mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1468 "declarative_execution.m"
                  mdb__declarative_execution__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1468 "declarative_execution.m"
                  mdb__declarative_execution__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1468 "declarative_execution.m"
                  mdb__declarative_execution__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
#line 1468 "declarative_execution.m"
                }
#line 1467 "declarative_execution.m"
                break;
#line 1467 "declarative_execution.m"
              case (MR_Integer) 2:
#line 1469 "declarative_execution.m"
                {
#line 1469 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_47_47;
#line 1469 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_48_48;
#line 1469 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_49_49;
#line 1469 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_50_50;

#line 1469 "declarative_execution.m"
                  mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
#line 1469 "declarative_execution.m"
                  mdb__declarative_execution__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1469 "declarative_execution.m"
                  mdb__declarative_execution__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1469 "declarative_execution.m"
                  mdb__declarative_execution__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1469 "declarative_execution.m"
                  mdb__declarative_execution__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1469 "declarative_execution.m"
                }
#line 1467 "declarative_execution.m"
                break;
#line 1467 "declarative_execution.m"
              case (MR_Integer) 3:
#line 1467 "declarative_execution.m"
#line 1467 "declarative_execution.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) {
#line 1467 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1467 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 1470 "declarative_execution.m"
                    {
#line 1470 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_52_52;
#line 1470 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_53_53;
#line 1470 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_54_54;
#line 1470 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_55_55;
#line 1470 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_56_56;

#line 1470 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1470 "declarative_execution.m"
                      mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1470 "declarative_execution.m"
                      mdb__declarative_execution__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1470 "declarative_execution.m"
                      mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1470 "declarative_execution.m"
                      mdb__declarative_execution__V_55_55 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1470 "declarative_execution.m"
                      mdb__declarative_execution__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1470 "declarative_execution.m"
                    }
#line 1467 "declarative_execution.m"
                    break;
#line 1467 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 1471 "declarative_execution.m"
                    {
#line 1471 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_58_58;
#line 1471 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_59_59;
#line 1471 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_60_60;
#line 1471 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_61_61;
#line 1471 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_62_62;
#line 1471 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_63_63;

#line 1471 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1471 "declarative_execution.m"
                      mdb__declarative_execution__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1471 "declarative_execution.m"
                      mdb__declarative_execution__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1471 "declarative_execution.m"
                      mdb__declarative_execution__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1471 "declarative_execution.m"
                      mdb__declarative_execution__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1471 "declarative_execution.m"
                      mdb__declarative_execution__V_62_62 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1471 "declarative_execution.m"
                      mdb__declarative_execution__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
#line 1471 "declarative_execution.m"
                    }
#line 1467 "declarative_execution.m"
                    break;
#line 1467 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 1472 "declarative_execution.m"
                    {
#line 1472 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_65_65;

#line 1472 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1472 "declarative_execution.m"
                      mdb__declarative_execution__V_65_65 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1472 "declarative_execution.m"
                    }
#line 1467 "declarative_execution.m"
                    break;
#line 1467 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 1473 "declarative_execution.m"
                    {
#line 1473 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_67_67;

#line 1473 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1473 "declarative_execution.m"
                      mdb__declarative_execution__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1473 "declarative_execution.m"
                    }
#line 1467 "declarative_execution.m"
                    break;
#line 1467 "declarative_execution.m"
                  case (MR_Integer) 4:
#line 1474 "declarative_execution.m"
                    {
#line 1474 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_69_69;
#line 1474 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_70_70;

#line 1474 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1474 "declarative_execution.m"
                      mdb__declarative_execution__V_69_69 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1474 "declarative_execution.m"
                      mdb__declarative_execution__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1474 "declarative_execution.m"
                    }
#line 1467 "declarative_execution.m"
                    break;
#line 1467 "declarative_execution.m"
                  case (MR_Integer) 5:
#line 1475 "declarative_execution.m"
                    {
#line 1475 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_72_72;
#line 1475 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_73_73;

#line 1475 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1475 "declarative_execution.m"
                      mdb__declarative_execution__V_72_72 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1475 "declarative_execution.m"
                      mdb__declarative_execution__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1475 "declarative_execution.m"
                    }
#line 1467 "declarative_execution.m"
                    break;
#line 1467 "declarative_execution.m"
                  case (MR_Integer) 6:
#line 1476 "declarative_execution.m"
                    {
#line 1476 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_75_75;
#line 1476 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_76_76;

#line 1476 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1476 "declarative_execution.m"
                      mdb__declarative_execution__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1476 "declarative_execution.m"
                      mdb__declarative_execution__V_76_76 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1476 "declarative_execution.m"
                    }
#line 1467 "declarative_execution.m"
                    break;
#line 1467 "declarative_execution.m"
                  case (MR_Integer) 7:
#line 1477 "declarative_execution.m"
                    {
#line 1477 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_78_78;
#line 1477 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_79_79;

#line 1477 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1477 "declarative_execution.m"
                      mdb__declarative_execution__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1477 "declarative_execution.m"
                      mdb__declarative_execution__V_79_79 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1477 "declarative_execution.m"
                    }
#line 1467 "declarative_execution.m"
                    break;
#line 1467 "declarative_execution.m"
                  case (MR_Integer) 8:
#line 1478 "declarative_execution.m"
                    {
#line 1478 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_81_81;
#line 1478 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_82_82;

#line 1478 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1478 "declarative_execution.m"
                      mdb__declarative_execution__V_81_81 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1478 "declarative_execution.m"
                      mdb__declarative_execution__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1478 "declarative_execution.m"
                    }
#line 1467 "declarative_execution.m"
                    break;
#line 1467 "declarative_execution.m"
                  case (MR_Integer) 9:
#line 1479 "declarative_execution.m"
                    {
#line 1479 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_84_84;
#line 1479 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_85_85;

#line 1479 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1479 "declarative_execution.m"
                      mdb__declarative_execution__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1479 "declarative_execution.m"
                      mdb__declarative_execution__V_85_85 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1479 "declarative_execution.m"
                    }
#line 1467 "declarative_execution.m"
                    break;
#line 1467 "declarative_execution.m"
                  case (MR_Integer) 10:
#line 1480 "declarative_execution.m"
                    {
#line 1480 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_87_87;
#line 1480 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_88_88;

#line 1480 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1480 "declarative_execution.m"
                      mdb__declarative_execution__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1480 "declarative_execution.m"
                      mdb__declarative_execution__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1480 "declarative_execution.m"
                    }
#line 1467 "declarative_execution.m"
                    break;
#line 1467 "declarative_execution.m"
                }
#line 1467 "declarative_execution.m"
                break;
#line 1467 "declarative_execution.m"
            }
#line 1432 "declarative_execution.m"
            mdb__declarative_execution__V_14_14 = (MR_Word) mdb__declarative_execution__Map1_12;
#line 1432 "declarative_execution.m"
            /* direct tailcall eliminated */
#line 1432 "declarative_execution.m"
            {
#line 1432 "declarative_execution.m"
              MR_Word mdb__declarative_execution__NodeId__tmp_copy_6 = mdb__declarative_execution__Next_13;
#line 1432 "declarative_execution.m"
              MR_Word mdb__declarative_execution__HeadVar__3__tmp_copy_3 = mdb__declarative_execution__V_14_14;

#line 1432 "declarative_execution.m"
              mdb__declarative_execution__HeadVar__3_3 = mdb__declarative_execution__HeadVar__3__tmp_copy_3;
#line 1432 "declarative_execution.m"
              mdb__declarative_execution__NodeId_6 = mdb__declarative_execution__NodeId__tmp_copy_6;
#line 1432 "declarative_execution.m"
            }
#line 1432 "declarative_execution.m"
            continue;
#line 1428 "declarative_execution.m"
          }
#line 1433 "declarative_execution.m"
        else
#line 1434 "declarative_execution.m"
          *mdb__declarative_execution__Map_8 = mdb__declarative_execution__HeadVar__3_3;
#line 1426 "declarative_execution.m"
      }
#line 1426 "declarative_execution.m"
      break;
#line 1426 "declarative_execution.m"
    }
#line 1423 "declarative_execution.m"
}

#line 1338 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0(
#line 1338 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_5,
#line 1338 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_6,
#line 1338 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_7,
#line 1338 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__4_4)
#line 1338 "declarative_execution.m"
{
#line 1343 "declarative_execution.m"
  {
#line 1343 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__ProgVis_6 == (MR_Integer) 0);
#line 1343 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Arg_8;
#line 1343 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;

#line 1350 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1352 "declarative_execution.m"
      mdb__declarative_execution__V_9_9 = (MR_Integer) 0;
#line 1350 "declarative_execution.m"
    else
#line 1354 "declarative_execution.m"
      mdb__declarative_execution__V_9_9 = (MR_Integer) 1;
#line 1344 "declarative_execution.m"
    {
#line 1344 "declarative_execution.m"
      mdb__declarative_execution__Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1344 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 0) = ((MR_Box) (mdb__declarative_execution__V_9_9));
#line 1344 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 1) = ((MR_Box) (mdb__declarative_execution__HldsNum_5));
#line 1344 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1344 "declarative_execution.m"
    }
#line 1343 "declarative_execution.m"
    {
#line 1343 "declarative_execution.m"
      MR_Word base;
#line 1343 "declarative_execution.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "declarative_execution.m"
      *mdb__declarative_execution__HeadVar__4_4 = base;
#line 1343 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__Arg_8));
#line 1343 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_execution__Args_7));
#line 1343 "declarative_execution.m"
    }
#line 1343 "declarative_execution.m"
  }
#line 1338 "declarative_execution.m"
}

#line 1326 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_value_5_p_0(
#line 1326 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_6,
#line 1326 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_7,
#line 1326 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Val_8,
#line 1326 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_9,
#line 1326 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__5_5)
#line 1326 "declarative_execution.m"
{
#line 1331 "declarative_execution.m"
  {
#line 1331 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1331 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Arg_10;
#line 1331 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Rep_11;
#line 1331 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 1331 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;

#line 1332 "declarative_execution.m"
    {
#line 1332 "declarative_execution.m"
      mdb__term_rep__univ_to_rep_2_p_0(mdb__declarative_execution__Val_8, &mdb__declarative_execution__Rep_11);
    }
#line 1351 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__ProgVis_7 == (MR_Integer) 0);
#line 1350 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1352 "declarative_execution.m"
      mdb__declarative_execution__V_12_12 = (MR_Integer) 0;
#line 1350 "declarative_execution.m"
    else
#line 1354 "declarative_execution.m"
      mdb__declarative_execution__V_12_12 = (MR_Integer) 1;
#line 1333 "declarative_execution.m"
    {
#line 1333 "declarative_execution.m"
      mdb__declarative_execution__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1333 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_13_13, 0) = ((MR_Box) (mdb__declarative_execution__Rep_11));
#line 1333 "declarative_execution.m"
    }
#line 1333 "declarative_execution.m"
    {
#line 1333 "declarative_execution.m"
      mdb__declarative_execution__Arg_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1333 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 0) = ((MR_Box) (mdb__declarative_execution__V_12_12));
#line 1333 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 1) = ((MR_Box) (mdb__declarative_execution__HldsNum_6));
#line 1333 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 2) = ((MR_Box) (mdb__declarative_execution__V_13_13));
#line 1333 "declarative_execution.m"
    }
#line 1331 "declarative_execution.m"
    {
#line 1331 "declarative_execution.m"
      MR_Word base;
#line 1331 "declarative_execution.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1331 "declarative_execution.m"
      *mdb__declarative_execution__HeadVar__5_5 = base;
#line 1331 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__Arg_10));
#line 1331 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_execution__Args_9));
#line 1331 "declarative_execution.m"
    }
#line 1331 "declarative_execution.m"
  }
#line 1326 "declarative_execution.m"
}

#line 1313 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__init_trace_atom_args_0_f_0(void)
#line 1313 "declarative_execution.m"
{
#line 1318 "declarative_execution.m"
  {
#line 1318 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1318 "declarative_execution.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1318 "declarative_execution.m"
  }
#line 1313 "declarative_execution.m"
}

#line 1301 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__null_trace_node_id_1_p_0(
#line 1301 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Id_1)
#line 1301 "declarative_execution.m"
{
#line 1303 "declarative_execution.m"
  {
#line 1303 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1306 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__null_trace_node_id_1_p_0

	MR_Word Id;

		{
#line 1306 "declarative_execution.m"

    Id = (MR_Word) NULL;

#line 10183 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__Id_1  = Id;
#line 1306 "declarative_execution.m"
}
#line 1303 "declarative_execution.m"
  }
#line 1301 "declarative_execution.m"
}

#line 1292 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_fail_node_3_f_0(
#line 1292 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1292 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1292 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1292 "declarative_execution.m"
{
#line 1299 "declarative_execution.m"
  {
#line 1299 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1299 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1299 "declarative_execution.m"
    {
#line 1299 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1299 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1299 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1299 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Neg_6));
#line 1299 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1299 "declarative_execution.m"
    }
#line 1299 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1299 "declarative_execution.m"
  }
#line 1292 "declarative_execution.m"
}

#line 1283 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_succ_node_3_f_0(
#line 1283 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1283 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1283 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1283 "declarative_execution.m"
{
#line 1290 "declarative_execution.m"
  {
#line 1290 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1290 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1290 "declarative_execution.m"
    {
#line 1290 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1290 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1290 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1290 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Neg_6));
#line 1290 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1290 "declarative_execution.m"
    }
#line 1290 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1290 "declarative_execution.m"
  }
#line 1283 "declarative_execution.m"
}

#line 1275 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_node_2_f_0(
#line 1275 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1275 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1275 "declarative_execution.m"
{
#line 1281 "declarative_execution.m"
  {
#line 1281 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1281 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1281 "declarative_execution.m"
    {
#line 1281 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1281 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1281 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1281 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1281 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1281 "declarative_execution.m"
    }
#line 1281 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1281 "declarative_execution.m"
  }
#line 1275 "declarative_execution.m"
}

#line 1266 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_else_node_3_f_0(
#line 1266 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1266 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1266 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1266 "declarative_execution.m"
{
#line 1273 "declarative_execution.m"
  {
#line 1273 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1273 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1273 "declarative_execution.m"
    {
#line 1273 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1273 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1273 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1273 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Cond_6));
#line 1273 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1273 "declarative_execution.m"
    }
#line 1273 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1273 "declarative_execution.m"
  }
#line 1266 "declarative_execution.m"
}

#line 1257 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_then_node_3_f_0(
#line 1257 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1257 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1257 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1257 "declarative_execution.m"
{
#line 1264 "declarative_execution.m"
  {
#line 1264 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1264 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1264 "declarative_execution.m"
    {
#line 1264 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1264 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1264 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1264 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Cond_6));
#line 1264 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1264 "declarative_execution.m"
    }
#line 1264 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1264 "declarative_execution.m"
  }
#line 1257 "declarative_execution.m"
}

#line 1249 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_cond_node_2_f_0(
#line 1249 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1249 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1249 "declarative_execution.m"
{
#line 1255 "declarative_execution.m"
  {
#line 1255 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1255 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1255 "declarative_execution.m"
    {
#line 1255 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1255 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1255 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1255 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1255 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1255 "declarative_execution.m"
    }
#line 1255 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1255 "declarative_execution.m"
  }
#line 1249 "declarative_execution.m"
}

#line 1233 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_later_disj_node_4_f_0(
#line 1233 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_6,
#line 1233 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1233 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_8,
#line 1233 "declarative_execution.m"
  MR_Word mdb__declarative_execution__PrevDisj_9)
#line 1233 "declarative_execution.m"
{
#line 1240 "declarative_execution.m"
  {
#line 1240 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1240 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__5_5;
#line 1240 "declarative_execution.m"
    MR_Word mdb__declarative_execution__FirstDisj_10;
#line 1240 "declarative_execution.m"
    MR_Word mdb__declarative_execution__PrevDisjNode_11;

#line 1241 "declarative_execution.m"
    {
#line 1241 "declarative_execution.m"
      mdb__declarative_execution__disj_node_from_id_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__Store_6)), ((MR_Box) (mdb__declarative_execution__PrevDisj_9)), &mdb__declarative_execution__PrevDisjNode_11);
    }
#line 1245 "declarative_execution.m"
    if (((((MR_tag((MR_Word) mdb__declarative_execution__PrevDisjNode_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1244 "declarative_execution.m"
      mdb__declarative_execution__FirstDisj_10 = mdb__declarative_execution__PrevDisj_9;
#line 1245 "declarative_execution.m"
    else
#line 1246 "declarative_execution.m"
      {
#line 1246 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 1)));
#line 1246 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 2)));

#line 1246 "declarative_execution.m"
        mdb__declarative_execution__FirstDisj_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 3)));
#line 1246 "declarative_execution.m"
      }
#line 1240 "declarative_execution.m"
    {
#line 1240 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1240 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1240 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_7));
#line 1240 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 2) = ((MR_Box) (mdb__declarative_execution__Label_8));
#line 1240 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 3) = ((MR_Box) (mdb__declarative_execution__FirstDisj_10));
#line 1240 "declarative_execution.m"
    }
#line 1240 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__5_5;
#line 1240 "declarative_execution.m"
  }
#line 1233 "declarative_execution.m"
}

#line 1224 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_first_disj_node_2_f_0(
#line 1224 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1224 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1224 "declarative_execution.m"
{
#line 1231 "declarative_execution.m"
  {
#line 1231 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1231 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1231 "declarative_execution.m"
    {
#line 1231 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1231 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1231 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1231 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1231 "declarative_execution.m"
    }
#line 1231 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1231 "declarative_execution.m"
  }
#line 1224 "declarative_execution.m"
}

#line 1216 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_switch_node_2_f_0(
#line 1216 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1216 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1216 "declarative_execution.m"
{
#line 1222 "declarative_execution.m"
  {
#line 1222 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1222 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1222 "declarative_execution.m"
    {
#line 1222 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1222 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1222 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1222 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1222 "declarative_execution.m"
    }
#line 1222 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1222 "declarative_execution.m"
  }
#line 1216 "declarative_execution.m"
}

#line 1203 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__construct_excp_node_8_p_0(
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_9,
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_10,
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_11,
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exception_12,
#line 1203 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_13,
#line 1203 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_14,
#line 1203 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_15,
#line 1203 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Excp_16)
#line 1203 "declarative_execution.m"
{
#line 1211 "declarative_execution.m"
  {
#line 1211 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1211 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ExceptionRep_17;

#line 1212 "declarative_execution.m"
    {
#line 1212 "declarative_execution.m"
      mdb__term_rep__univ_to_rep_2_p_0(mdb__declarative_execution__Exception_12, &mdb__declarative_execution__ExceptionRep_17);
    }
#line 1213 "declarative_execution.m"
    {
#line 1213 "declarative_execution.m"
      MR_Word base;
#line 1213 "declarative_execution.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1213 "declarative_execution.m"
      *mdb__declarative_execution__Excp_16 = base;
#line 1213 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1213 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_9));
#line 1213 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_execution__Call_10));
#line 1213 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mdb__declarative_execution__MaybeRedo_11));
#line 1213 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mdb__declarative_execution__ExceptionRep_17));
#line 1213 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mdb__declarative_execution__EventNo_13));
#line 1213 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mdb__declarative_execution__Label_14));
#line 1213 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mdb__declarative_execution__Suspicion_15));
#line 1213 "declarative_execution.m"
    }
#line 1211 "declarative_execution.m"
  }
#line 1203 "declarative_execution.m"
}

#line 1193 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_fail_node_6_f_0(
#line 1193 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_8,
#line 1193 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_9,
#line 1193 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Redo_10,
#line 1193 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_11,
#line 1193 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_12,
#line 1193 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_13)
#line 1193 "declarative_execution.m"
{
#line 1201 "declarative_execution.m"
  {
#line 1201 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1201 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__7_7;

#line 1201 "declarative_execution.m"
    {
#line 1201 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_8));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 2) = ((MR_Box) (mdb__declarative_execution__Call_9));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 3) = ((MR_Box) (mdb__declarative_execution__Redo_10));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_11));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 5) = ((MR_Box) (mdb__declarative_execution__Label_12));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 6) = ((MR_Box) (mdb__declarative_execution__Suspicion_13));
#line 1201 "declarative_execution.m"
    }
#line 1201 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__7_7;
#line 1201 "declarative_execution.m"
  }
#line 1193 "declarative_execution.m"
}

#line 1184 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_redo_node_5_f_0(
#line 1184 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1184 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exit_8,
#line 1184 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Event_9,
#line 1184 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_10,
#line 1184 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_11)
#line 1184 "declarative_execution.m"
{
#line 1191 "declarative_execution.m"
  {
#line 1191 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1191 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__6_6;

#line 1191 "declarative_execution.m"
    {
#line 1191 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_7));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 1) = ((MR_Box) (mdb__declarative_execution__Exit_8));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 2) = ((MR_Box) (mdb__declarative_execution__Event_9));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 3) = ((MR_Box) (mdb__declarative_execution__Label_10));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 4) = ((MR_Box) (mdb__declarative_execution__Suspicion_11));
#line 1191 "declarative_execution.m"
    }
#line 1191 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__6_6;
#line 1191 "declarative_execution.m"
  }
#line 1184 "declarative_execution.m"
}

#line 1172 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_exit_node_8_f_0(
#line 1172 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_10,
#line 1172 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_11,
#line 1172 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_12,
#line 1172 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_13,
#line 1172 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1172 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_15,
#line 1172 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
#line 1172 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_17)
#line 1172 "declarative_execution.m"
{
#line 1181 "declarative_execution.m"
  {
#line 1181 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1181 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__9_9;

#line 1181 "declarative_execution.m"
    {
#line 1181 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1181 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_10));
#line 1181 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 1) = ((MR_Box) (mdb__declarative_execution__Call_11));
#line 1181 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 2) = ((MR_Box) (mdb__declarative_execution__MaybeRedo_12));
#line 1181 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 3) = ((MR_Box) (mdb__declarative_execution__AtomArgs_13));
#line 1181 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_14));
#line 1181 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 5) = ((MR_Box) (mdb__declarative_execution__Label_15));
#line 1181 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 6) = ((MR_Box) (mdb__declarative_execution__IoSeqNum_16));
#line 1181 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 7) = ((MR_Box) (mdb__declarative_execution__Suspicion_17));
#line 1181 "declarative_execution.m"
    }
#line 1181 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__9_9;
#line 1181 "declarative_execution.m"
  }
#line 1172 "declarative_execution.m"
}

#line 1166 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_no_maybe_label_0_f_0(void)
#line 1166 "declarative_execution.m"
{
#line 1170 "declarative_execution.m"
  {
#line 1170 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1170 "declarative_execution.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1170 "declarative_execution.m"
  }
#line 1166 "declarative_execution.m"
}

#line 1160 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_yes_maybe_label_1_f_0(
#line 1160 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_3)
#line 1160 "declarative_execution.m"
{
#line 1164 "declarative_execution.m"
  {
#line 1164 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1164 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__2_2;

#line 1164 "declarative_execution.m"
    {
#line 1164 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1164 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, 0) = ((MR_Box) (mdb__declarative_execution__Label_3));
#line 1164 "declarative_execution.m"
    }
#line 1164 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__2_2;
#line 1164 "declarative_execution.m"
  }
#line 1160 "declarative_execution.m"
}

#line 1137 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_call_node_9_f_0(
#line 1137 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_11,
#line 1137 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_12,
#line 1137 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SeqNo_13,
#line 1137 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1137 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
#line 1137 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
#line 1137 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_17,
#line 1137 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
#line 1137 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_19)
#line 1137 "declarative_execution.m"
{
#line 1145 "declarative_execution.m"
  {
#line 1145 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1145 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call_20;
#line 1145 "declarative_execution.m"
    MR_Word mdb__declarative_execution__MaybeImplicitTreeInfo_21;
#line 1145 "declarative_execution.m"
    MR_Word mdb__declarative_execution__LastInterface_22;

#line 1149 "declarative_execution.m"
#line 1149 "declarative_execution.m"
    switch (mdb__declarative_execution__AtMaxDepth_15) {
#line 1149 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1149 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1148 "declarative_execution.m"
        mdb__declarative_execution__MaybeImplicitTreeInfo_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1149 "declarative_execution.m"
        break;
#line 1149 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1150 "declarative_execution.m"
        {
#line 1154 "declarative_execution.m"
          mdb__declarative_execution__MaybeImplicitTreeInfo_21 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_4[0]);
#line 1150 "declarative_execution.m"
        }
#line 1149 "declarative_execution.m"
        break;
#line 1149 "declarative_execution.m"
    }
#line 1306 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__construct_call_node_9_f_0

	MR_Word Id;

		{
#line 1306 "declarative_execution.m"

    Id = (MR_Word) NULL;

#line 10893 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__LastInterface_22  = Id;
#line 1306 "declarative_execution.m"
}
#line 1157 "declarative_execution.m"
    {
#line 1157 "declarative_execution.m"
      mdb__declarative_execution__Call_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1157 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_11));
#line 1157 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 1) = ((MR_Box) (mdb__declarative_execution__LastInterface_22));
#line 1157 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 2) = ((MR_Box) (mdb__declarative_execution__AtomArgs_12));
#line 1157 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 3) = ((MR_Box) (mdb__declarative_execution__SeqNo_13));
#line 1157 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_14));
#line 1157 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 5) = ((MR_Box) (mdb__declarative_execution__MaybeImplicitTreeInfo_21));
#line 1157 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 6) = ((MR_Box) (mdb__declarative_execution__MaybeReturnLabel_16));
#line 1157 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 7) = ((MR_Box) (mdb__declarative_execution__Label_17));
#line 1157 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 8) = ((MR_Box) (mdb__declarative_execution__IoSeqNum_18));
#line 1157 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 9) = ((MR_Box) (mdb__declarative_execution__Suspicion_19));
#line 1157 "declarative_execution.m"
    }
#line 1145 "declarative_execution.m"
    return mdb__declarative_execution__Call_20;
#line 1145 "declarative_execution.m"
  }
#line 1137 "declarative_execution.m"
}

#line 1121 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__print_trace_node_4_p_0(
#line 1121 "declarative_execution.m"
  MR_Word mdb__declarative_execution__OutStr_5,
#line 1121 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_6)
#line 1121 "declarative_execution.m"
{
#line 1127 "declarative_execution.m"
  {
#line 1127 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1127 "declarative_execution.m"
    MR_Word mdb__declarative_execution__CNode_8;

#line 1455 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__print_trace_node_4_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__Node_6 ;
		{
#line 1455 "declarative_execution.m"

    N2 = N1;

#line 10962 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__CNode_8  = N2;
#line 1455 "declarative_execution.m"
}
#line 1129 "declarative_execution.m"
    {
#line 1129 "declarative_execution.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[0], mdb__declarative_execution__OutStr_5, ((MR_Box) (mdb__declarative_execution__CNode_8)));
#line 1129 "declarative_execution.m"
      return;
    }
#line 1127 "declarative_execution.m"
  }
#line 1121 "declarative_execution.m"
}

#line 1105 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__find_prev_contour_store_2_f_0(
#line 1105 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1105 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_5)
#line 1105 "declarative_execution.m"
{
#line 1110 "declarative_execution.m"
  {
#line 1110 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1110 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Prev_6;
#line 1110 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9 = (MR_Word) &mdb__declarative_execution_scalar_common_2[0];
#line 1110 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node_7;
#line 1114 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Prev0_8;

#line 1111 "declarative_execution.m"
    {
#line 1111 "declarative_execution.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Id_5)), &mdb__declarative_execution__Node_7);
    }
#line 689 "declarative_execution.m"
#line 689 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_7)) {
#line 689 "declarative_execution.m"
      default:
#line 689 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_FALSE;
#line 689 "declarative_execution.m"
        break;
#line 689 "declarative_execution.m"
      case (MR_Integer) 0:
#line 703 "declarative_execution.m"
        {
#line 704 "declarative_execution.m"
          {
#line 704 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[29])));
          }
#line 703 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 703 "declarative_execution.m"
        }
#line 689 "declarative_execution.m"
        break;
#line 689 "declarative_execution.m"
      case (MR_Integer) 2:
#line 693 "declarative_execution.m"
        {
#line 693 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Exit_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
#line 693 "declarative_execution.m"
          MR_Word mdb__declarative_execution__ExitNode_25;
#line 693 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 0)));
#line 693 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
#line 693 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
#line 693 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 4)));
#line 695 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_66_66;
#line 695 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_67_67;
#line 695 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_68_68;
#line 695 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_69_69;
#line 695 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_70_70;
#line 695 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_71_71;
#line 695 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_72_72;

#line 694 "declarative_execution.m"
          {
#line 694 "declarative_execution.m"
            mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Exit_21)), &mdb__declarative_execution__ExitNode_25);
          }
#line 695 "declarative_execution.m"
          mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 0)));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 1)));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 2)));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 3)));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 4)));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 5)));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 6)));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 7)));
#line 693 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 693 "declarative_execution.m"
        }
#line 689 "declarative_execution.m"
        break;
#line 689 "declarative_execution.m"
      case (MR_Integer) 3:
#line 689 "declarative_execution.m"
#line 689 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 0)))) {
#line 689 "declarative_execution.m"
          default:
#line 689 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_FALSE;
#line 689 "declarative_execution.m"
            break;
#line 689 "declarative_execution.m"
          case (MR_Integer) 0:
#line 689 "declarative_execution.m"
            {
#line 689 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Call_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
#line 689 "declarative_execution.m"
              MR_Word mdb__declarative_execution__CallNode_19;
#line 689 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
#line 689 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
#line 689 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 4)));
#line 689 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 5)));
#line 689 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 6)));
#line 691 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_57_57;
#line 691 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_58_58;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_59_59;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_60_60;
#line 691 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_61_61;
#line 691 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_62_62;
#line 691 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_63_63;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_64_64;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_65_65;

#line 690 "declarative_execution.m"
              {
#line 690 "declarative_execution.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Call_14)), &mdb__declarative_execution__CallNode_19);
              }
#line 691 "declarative_execution.m"
              mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 0)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 1)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 2)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 3)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 4)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 5)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 6)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_63_63 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 7)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 8)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 9)));
#line 689 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 689 "declarative_execution.m"
            }
#line 689 "declarative_execution.m"
            break;
#line 689 "declarative_execution.m"
          case (MR_Integer) 5:
#line 706 "declarative_execution.m"
            {
#line 707 "declarative_execution.m"
              {
#line 707 "declarative_execution.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[30])));
              }
#line 706 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 706 "declarative_execution.m"
            }
#line 689 "declarative_execution.m"
            break;
#line 689 "declarative_execution.m"
          case (MR_Integer) 8:
#line 709 "declarative_execution.m"
            {
#line 710 "declarative_execution.m"
              {
#line 710 "declarative_execution.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[31])));
              }
#line 709 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 709 "declarative_execution.m"
            }
#line 689 "declarative_execution.m"
            break;
#line 689 "declarative_execution.m"
          case (MR_Integer) 10:
#line 697 "declarative_execution.m"
            {
#line 697 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Neg_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
#line 697 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_56_56;
#line 697 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
#line 697 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
#line 698 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_29_29;
#line 698 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_30_30;

#line 698 "declarative_execution.m"
              {
#line 698 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Neg_27)), &mdb__declarative_execution__V_56_56);
              }
#line 698 "declarative_execution.m"
              mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 1)));
#line 698 "declarative_execution.m"
              mdb__declarative_execution__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 2)));
#line 698 "declarative_execution.m"
              mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 3)));
#line 697 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 697 "declarative_execution.m"
            }
#line 689 "declarative_execution.m"
            break;
#line 689 "declarative_execution.m"
        }
#line 689 "declarative_execution.m"
        break;
#line 689 "declarative_execution.m"
    }
#line 1114 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1113 "declarative_execution.m"
      mdb__declarative_execution__Prev_6 = mdb__declarative_execution__Prev0_8;
#line 1114 "declarative_execution.m"
    else
#line 1115 "declarative_execution.m"
      mdb__declarative_execution__Prev_6 = mdb__declarative_execution__Id_5;
#line 1110 "declarative_execution.m"
    return mdb__declarative_execution__Prev_6;
#line 1110 "declarative_execution.m"
  }
#line 1105 "declarative_execution.m"
}

#line 1092 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__step_left_in_contour_store_2_f_0(
#line 1092 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1092 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 1092 "declarative_execution.m"
{
#line 1097 "declarative_execution.m"
  {
#line 1097 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1097 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;
#line 1097 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_HeadVar__3_3;

#line 1097 "declarative_execution.m"
    {
#line 1097 "declarative_execution.m"
      mdb__declarative_execution__conv0_HeadVar__3_3 = mdb__declarative_execution__step_left_in_contour_2_f_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__Store_4)), mdb__declarative_execution__Node_5);
    }
#line 1097 "declarative_execution.m"
    mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv0_HeadVar__3_3);
#line 1097 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1097 "declarative_execution.m"
  }
#line 1092 "declarative_execution.m"
}

#line 1079 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_first_disj_2_p_0(
#line 1079 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1079 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__2_2)
#line 1079 "declarative_execution.m"
{
#line 1085 "declarative_execution.m"
  {
#line 1085 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1085 "declarative_execution.m"
    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1303 "declarative_execution.m"
      {
#line 1306 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__trace_node_first_disj_2_p_0

	MR_Word Id;

		{
#line 1306 "declarative_execution.m"

    Id = (MR_Word) NULL;

#line 11315 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__HeadVar__2_2  = Id;
#line 1306 "declarative_execution.m"
}
#line 1303 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1303 "declarative_execution.m"
      }
#line 1085 "declarative_execution.m"
    else
#line 1085 "declarative_execution.m"
    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1087 "declarative_execution.m"
      {
#line 1087 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1087 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));

#line 1087 "declarative_execution.m"
        *mdb__declarative_execution__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 1087 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1087 "declarative_execution.m"
      }
#line 1085 "declarative_execution.m"
    else
#line 1085 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_FALSE;
#line 1085 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1085 "declarative_execution.m"
  }
#line 1079 "declarative_execution.m"
}

#line 1066 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_call_3_p_0(
#line 1066 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_1,
#line 1066 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1066 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Call_3)
#line 1066 "declarative_execution.m"
{
#line 1072 "declarative_execution.m"
  {
#line 1072 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1072 "declarative_execution.m"
#line 1072 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) {
#line 1072 "declarative_execution.m"
      default:
#line 1072 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_FALSE;
#line 1072 "declarative_execution.m"
        break;
#line 1072 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1072 "declarative_execution.m"
        {
#line 1072 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 1072 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_7_7;
#line 1072 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_8_8;
#line 1072 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_9_9;
#line 1072 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_10_10;
#line 1072 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_11_11;
#line 1072 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_12_12;

#line 1072 "declarative_execution.m"
          *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1072 "declarative_execution.m"
          mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1072 "declarative_execution.m"
          mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1072 "declarative_execution.m"
          mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1072 "declarative_execution.m"
          mdb__declarative_execution__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 1072 "declarative_execution.m"
          mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 1072 "declarative_execution.m"
          mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 1072 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 1072 "declarative_execution.m"
        }
#line 1072 "declarative_execution.m"
        break;
#line 1072 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1073 "declarative_execution.m"
        {
#line 1073 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Exit_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1073 "declarative_execution.m"
          MR_Word mdb__declarative_execution__ExitNode_20;
#line 1073 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 1073 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1073 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1073 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1075 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_36_36;
#line 1075 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_37_37;
#line 1075 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_38_38;
#line 1075 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_39_39;
#line 1075 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_40_40;
#line 1075 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_41_41;
#line 1075 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_42_42;

#line 1074 "declarative_execution.m"
          {
#line 1074 "declarative_execution.m"
            mdb__declarative_execution__exit_node_from_id_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__S_1)), ((MR_Box) (mdb__declarative_execution__Exit_15)), &mdb__declarative_execution__ExitNode_20);
          }
#line 1075 "declarative_execution.m"
          mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 0)));
#line 1075 "declarative_execution.m"
          *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 1)));
#line 1075 "declarative_execution.m"
          mdb__declarative_execution__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 2)));
#line 1075 "declarative_execution.m"
          mdb__declarative_execution__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 3)));
#line 1075 "declarative_execution.m"
          mdb__declarative_execution__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 4)));
#line 1075 "declarative_execution.m"
          mdb__declarative_execution__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 5)));
#line 1075 "declarative_execution.m"
          mdb__declarative_execution__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 6)));
#line 1075 "declarative_execution.m"
          mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 7)));
#line 1073 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 1073 "declarative_execution.m"
        }
#line 1072 "declarative_execution.m"
        break;
#line 1072 "declarative_execution.m"
      case (MR_Integer) 3:
#line 1072 "declarative_execution.m"
#line 1072 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) {
#line 1072 "declarative_execution.m"
          default:
#line 1072 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_FALSE;
#line 1072 "declarative_execution.m"
            break;
#line 1072 "declarative_execution.m"
          case (MR_Integer) 0:
#line 1076 "declarative_execution.m"
            {
#line 1076 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1076 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_24_24;
#line 1076 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_25_25;
#line 1076 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_26_26;
#line 1076 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_27_27;

#line 1076 "declarative_execution.m"
              *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1076 "declarative_execution.m"
              mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1076 "declarative_execution.m"
              mdb__declarative_execution__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1076 "declarative_execution.m"
              mdb__declarative_execution__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 1076 "declarative_execution.m"
              mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 1076 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 1076 "declarative_execution.m"
            }
#line 1072 "declarative_execution.m"
            break;
#line 1072 "declarative_execution.m"
          case (MR_Integer) 1:
#line 1077 "declarative_execution.m"
            {
#line 1077 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1077 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_31_31;
#line 1077 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_32_32;
#line 1077 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_33_33;
#line 1077 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_34_34;
#line 1077 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_35_35;

#line 1077 "declarative_execution.m"
              *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1077 "declarative_execution.m"
              mdb__declarative_execution__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1077 "declarative_execution.m"
              mdb__declarative_execution__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1077 "declarative_execution.m"
              mdb__declarative_execution__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 1077 "declarative_execution.m"
              mdb__declarative_execution__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 1077 "declarative_execution.m"
              mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 1077 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 1077 "declarative_execution.m"
            }
#line 1072 "declarative_execution.m"
            break;
#line 1072 "declarative_execution.m"
        }
#line 1072 "declarative_execution.m"
        break;
#line 1072 "declarative_execution.m"
    }
#line 1072 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1072 "declarative_execution.m"
  }
#line 1066 "declarative_execution.m"
}

#line 1051 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_seqno_3_p_0(
#line 1051 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_4,
#line 1051 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 1051 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__SeqNo_6)
#line 1051 "declarative_execution.m"
{
#line 1060 "declarative_execution.m"
  {
#line 1060 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 0)));
#line 1060 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__SeqNo0_7;
#line 1058 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;
#line 1058 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_11_11;
#line 1058 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 1058 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_13_13;
#line 1058 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_14_14;
#line 1058 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_15_15;
#line 1058 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_16_16;
#line 1058 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17;
#line 1058 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_18_18;

#line 1058 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1058 "declarative_execution.m"
      {
#line 1058 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 0)));
#line 1058 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 1)));
#line 1058 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 1058 "declarative_execution.m"
        mdb__declarative_execution__SeqNo0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 1058 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 1058 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 1058 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 1058 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
#line 1058 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 8)));
#line 1058 "declarative_execution.m"
        mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 9)));
#line 1059 "declarative_execution.m"
        *mdb__declarative_execution__SeqNo_6 = mdb__declarative_execution__SeqNo0_7;
#line 1059 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1058 "declarative_execution.m"
      }
#line 1058 "declarative_execution.m"
    else
#line 1061 "declarative_execution.m"
      {
#line 1061 "declarative_execution.m"
        MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28;
#line 1061 "declarative_execution.m"
        MR_Word mdb__declarative_execution__Call_8;
#line 1061 "declarative_execution.m"
        MR_Word mdb__declarative_execution__CallNode_9;
#line 1063 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_19_19;
#line 1063 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_20_20;
#line 1063 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_21_21;
#line 1063 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_22_22;
#line 1063 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_23_23;
#line 1063 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_24_24;
#line 1063 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_25_25;
#line 1063 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_26_26;
#line 1063 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_27_27;

#line 1061 "declarative_execution.m"
        {
#line 1061 "declarative_execution.m"
          mdb__declarative_execution__succeeded = mdb__declarative_execution__trace_node_call_3_p_0(mdb__declarative_execution__S_4, mdb__declarative_execution__Node_5, &mdb__declarative_execution__Call_8);
        }
#line 1061 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 1061 "declarative_execution.m"
          {
#line 11670 "mdb.declarative_execution.c"
            mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28 = (MR_Word) &mdb__declarative_execution_scalar_common_2[0];
#line 1062 "declarative_execution.m"
            {
#line 1062 "declarative_execution.m"
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28, ((MR_Box) (mdb__declarative_execution__S_4)), ((MR_Box) (mdb__declarative_execution__Call_8)), &mdb__declarative_execution__CallNode_9);
            }
#line 1063 "declarative_execution.m"
            mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 0)));
#line 1063 "declarative_execution.m"
            mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 1)));
#line 1063 "declarative_execution.m"
            mdb__declarative_execution__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 2)));
#line 1063 "declarative_execution.m"
            *mdb__declarative_execution__SeqNo_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 3)));
#line 1063 "declarative_execution.m"
            mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 4)));
#line 1063 "declarative_execution.m"
            mdb__declarative_execution__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 5)));
#line 1063 "declarative_execution.m"
            mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 6)));
#line 1063 "declarative_execution.m"
            mdb__declarative_execution__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 7)));
#line 1063 "declarative_execution.m"
            mdb__declarative_execution__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 8)));
#line 1063 "declarative_execution.m"
            mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 9)));
#line 1063 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_TRUE;
#line 1061 "declarative_execution.m"
          }
#line 1061 "declarative_execution.m"
      }
#line 1060 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1060 "declarative_execution.m"
  }
#line 1051 "declarative_execution.m"
}

#line 1026 "declarative_execution.m"
static MR_String MR_CALL 
mdb__declarative_execution__trace_node_path_1_f_0(
#line 1026 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_3)
#line 1026 "declarative_execution.m"
{
#line 1030 "declarative_execution.m"
  {
#line 1030 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1030 "declarative_execution.m"
    MR_String mdb__declarative_execution__Path_4;
#line 1030 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_5;

#line 1036 "declarative_execution.m"
#line 1036 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_3)) {
#line 1036 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1036 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1036 "declarative_execution.m"
        {
#line 1036 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
#line 1036 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1036 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1036 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1036 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1036 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1036 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1036 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_15_15;
#line 1036 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_16_16;

#line 1036 "declarative_execution.m"
          mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
#line 1036 "declarative_execution.m"
          mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 8)));
#line 1036 "declarative_execution.m"
          mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 9)));
#line 1036 "declarative_execution.m"
        }
#line 1036 "declarative_execution.m"
        break;
#line 1036 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1037 "declarative_execution.m"
        {
#line 1037 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
#line 1037 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1037 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1037 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1037 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1037 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_23_23;
#line 1037 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_24_24;

#line 1037 "declarative_execution.m"
          mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1037 "declarative_execution.m"
          mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1037 "declarative_execution.m"
          mdb__declarative_execution__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
#line 1037 "declarative_execution.m"
        }
#line 1036 "declarative_execution.m"
        break;
#line 1036 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1038 "declarative_execution.m"
        {
#line 1038 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
#line 1038 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1038 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1038 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_29_29;

#line 1038 "declarative_execution.m"
          mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1038 "declarative_execution.m"
          mdb__declarative_execution__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1038 "declarative_execution.m"
        }
#line 1036 "declarative_execution.m"
        break;
#line 1036 "declarative_execution.m"
      case (MR_Integer) 3:
#line 1036 "declarative_execution.m"
#line 1036 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) {
#line 1036 "declarative_execution.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1036 "declarative_execution.m"
          case (MR_Integer) 0:
#line 1039 "declarative_execution.m"
            {
#line 1039 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1039 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1039 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1039 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1039 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_35_35;

#line 1039 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1039 "declarative_execution.m"
              mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1039 "declarative_execution.m"
            }
#line 1036 "declarative_execution.m"
            break;
#line 1036 "declarative_execution.m"
          case (MR_Integer) 1:
#line 1040 "declarative_execution.m"
            {
#line 1040 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1040 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1040 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1040 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1040 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1040 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_42_42;

#line 1040 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1040 "declarative_execution.m"
              mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
#line 1040 "declarative_execution.m"
            }
#line 1036 "declarative_execution.m"
            break;
#line 1036 "declarative_execution.m"
          case (MR_Integer) 2:
#line 1041 "declarative_execution.m"
            {
#line 1041 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));

#line 1041 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1041 "declarative_execution.m"
            }
#line 1036 "declarative_execution.m"
            break;
#line 1036 "declarative_execution.m"
          case (MR_Integer) 3:
#line 1042 "declarative_execution.m"
            {
#line 1042 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));

#line 1042 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1042 "declarative_execution.m"
            }
#line 1036 "declarative_execution.m"
            break;
#line 1036 "declarative_execution.m"
          case (MR_Integer) 4:
#line 1043 "declarative_execution.m"
            {
#line 1043 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1043 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_49_49;

#line 1043 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1043 "declarative_execution.m"
              mdb__declarative_execution__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1043 "declarative_execution.m"
            }
#line 1036 "declarative_execution.m"
            break;
#line 1036 "declarative_execution.m"
          case (MR_Integer) 5:
#line 1044 "declarative_execution.m"
            {
#line 1044 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1044 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_52_52;

#line 1044 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1044 "declarative_execution.m"
              mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1044 "declarative_execution.m"
            }
#line 1036 "declarative_execution.m"
            break;
#line 1036 "declarative_execution.m"
          case (MR_Integer) 6:
#line 1045 "declarative_execution.m"
            {
#line 1045 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1045 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1045 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1045 "declarative_execution.m"
            }
#line 1036 "declarative_execution.m"
            break;
#line 1036 "declarative_execution.m"
          case (MR_Integer) 7:
#line 1046 "declarative_execution.m"
            {
#line 1046 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1046 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1046 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1046 "declarative_execution.m"
            }
#line 1036 "declarative_execution.m"
            break;
#line 1036 "declarative_execution.m"
          case (MR_Integer) 8:
#line 1047 "declarative_execution.m"
            {
#line 1047 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1047 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_61_61;

#line 1047 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1047 "declarative_execution.m"
              mdb__declarative_execution__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1047 "declarative_execution.m"
            }
#line 1036 "declarative_execution.m"
            break;
#line 1036 "declarative_execution.m"
          case (MR_Integer) 9:
#line 1048 "declarative_execution.m"
            {
#line 1048 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1048 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1048 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1048 "declarative_execution.m"
            }
#line 1036 "declarative_execution.m"
            break;
#line 1036 "declarative_execution.m"
          case (MR_Integer) 10:
#line 1049 "declarative_execution.m"
            {
#line 1049 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1049 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1049 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1049 "declarative_execution.m"
            }
#line 1036 "declarative_execution.m"
            break;
#line 1036 "declarative_execution.m"
        }
#line 1036 "declarative_execution.m"
        break;
#line 1036 "declarative_execution.m"
    }
#line 1032 "declarative_execution.m"
    {
#line 1032 "declarative_execution.m"
      return mdb__declarative_execution__Path_4 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_execution__Label_5);
    }
#line 1030 "declarative_execution.m"
    return mdb__declarative_execution__Path_4;
#line 1030 "declarative_execution.m"
  }
#line 1026 "declarative_execution.m"
}

#line 1007 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__trace_node_port_1_f_0(
#line 1007 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 1007 "declarative_execution.m"
{
#line 1011 "declarative_execution.m"
  {
#line 1011 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1011 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__2_2;

#line 1011 "declarative_execution.m"
#line 1011 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
#line 1011 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1011 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1011 "declarative_execution.m"
        mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 0;
#line 1011 "declarative_execution.m"
        break;
#line 1011 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1012 "declarative_execution.m"
        mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 1;
#line 1011 "declarative_execution.m"
        break;
#line 1011 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1013 "declarative_execution.m"
        mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 2;
#line 1011 "declarative_execution.m"
        break;
#line 1011 "declarative_execution.m"
      case (MR_Integer) 3:
#line 1011 "declarative_execution.m"
#line 1011 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) {
#line 1011 "declarative_execution.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1011 "declarative_execution.m"
          case (MR_Integer) 0:
#line 1014 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 3;
#line 1011 "declarative_execution.m"
            break;
#line 1011 "declarative_execution.m"
          case (MR_Integer) 1:
#line 1015 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 5;
#line 1011 "declarative_execution.m"
            break;
#line 1011 "declarative_execution.m"
          case (MR_Integer) 2:
#line 1016 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 14;
#line 1011 "declarative_execution.m"
            break;
#line 1011 "declarative_execution.m"
          case (MR_Integer) 3:
#line 1017 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 12;
#line 1011 "declarative_execution.m"
            break;
#line 1011 "declarative_execution.m"
          case (MR_Integer) 4:
#line 1018 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 13;
#line 1011 "declarative_execution.m"
            break;
#line 1011 "declarative_execution.m"
          case (MR_Integer) 5:
#line 1019 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 6;
#line 1011 "declarative_execution.m"
            break;
#line 1011 "declarative_execution.m"
          case (MR_Integer) 6:
#line 1020 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 7;
#line 1011 "declarative_execution.m"
            break;
#line 1011 "declarative_execution.m"
          case (MR_Integer) 7:
#line 1021 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 8;
#line 1011 "declarative_execution.m"
            break;
#line 1011 "declarative_execution.m"
          case (MR_Integer) 8:
#line 1022 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 9;
#line 1011 "declarative_execution.m"
            break;
#line 1011 "declarative_execution.m"
          case (MR_Integer) 9:
#line 1023 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 10;
#line 1011 "declarative_execution.m"
            break;
#line 1011 "declarative_execution.m"
          case (MR_Integer) 10:
#line 1024 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 11;
#line 1011 "declarative_execution.m"
            break;
#line 1011 "declarative_execution.m"
        }
#line 1011 "declarative_execution.m"
        break;
#line 1011 "declarative_execution.m"
    }
#line 1011 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__2_2;
#line 1011 "declarative_execution.m"
  }
#line 1007 "declarative_execution.m"
}

#line 981 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__neg_node_set_status_2_f_0(
#line 981 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg0_4,
#line 981 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 981 "declarative_execution.m"
{
#line 987 "declarative_execution.m"
  {
#line 987 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Neg0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 987 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Neg_6;
#line 987 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_16_16;
#line 987 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_27;
#line 987 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_29;
#line 987 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_31;
#line 987 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_32;
#line 987 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Neg1_10;
#line 987 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_22;
#line 987 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_24;
#line 988 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 988 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 988 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 1002 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_23;
#line 1003 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_25;
#line 1004 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_26;
#line 1005 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Neg_6;

#line 988 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 988 "declarative_execution.m"
      {
#line 988 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 1)));
#line 988 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 2)));
#line 988 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 3)));
#line 989 "declarative_execution.m"
        mdb__declarative_execution__Neg1_10 = mdb__declarative_execution__Neg0_4;
#line 988 "declarative_execution.m"
      }
#line 988 "declarative_execution.m"
    else
#line 991 "declarative_execution.m"
      {
#line 991 "declarative_execution.m"
        {
#line 991 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[28])));
        }
#line 991 "declarative_execution.m"
      }
#line 12218 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeCtorInfo_16_16 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0;
#line 1001 "declarative_execution.m"
    {
#line 1001 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_27);
    }
#line 12225 "mdb.declarative_execution.c"
    {
#line 12227 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12229 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 12231 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 12233 "mdb.declarative_execution.c"
    }
#line 12235 "mdb.declarative_execution.c"
    {
#line 12237 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12239 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 12241 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 12243 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_29));
#line 12245 "mdb.declarative_execution.c"
    }
#line 12247 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_32 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1002 "declarative_execution.m"
    {
#line 1002 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) (mdb__declarative_execution__Neg1_10)), &mdb__declarative_execution__Ref_22, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_23);
    }
#line 1003 "declarative_execution.m"
    {
#line 1003 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__Ref_22, (MR_Integer) 2, &mdb__declarative_execution__ArgRef_24, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_25);
    }
#line 1004 "declarative_execution.m"
    {
#line 1004 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__ArgRef_24, ((MR_Box) (mdb__declarative_execution__Status_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_26);
    }
#line 1005 "declarative_execution.m"
    {
#line 1005 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_22, &mdb__declarative_execution__conv3_Neg_6);
    }
#line 1005 "declarative_execution.m"
    mdb__declarative_execution__Neg_6 = ((MR_Word) mdb__declarative_execution__conv3_Neg_6);
#line 987 "declarative_execution.m"
    return mdb__declarative_execution__Neg_6;
#line 987 "declarative_execution.m"
  }
#line 981 "declarative_execution.m"
}

#line 965 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__cond_node_set_status_2_f_0(
#line 965 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond0_4,
#line 965 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 965 "declarative_execution.m"
{
#line 971 "declarative_execution.m"
  {
#line 971 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Cond0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 971 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Cond_6;
#line 971 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_16_16;
#line 971 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_27;
#line 971 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_29;
#line 971 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_31;
#line 971 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_32;
#line 971 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Cond1_10;
#line 971 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_22;
#line 971 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_24;
#line 972 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 972 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 972 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 1002 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_23;
#line 1003 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_25;
#line 1004 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_26;
#line 1005 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Cond_6;

#line 972 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 972 "declarative_execution.m"
      {
#line 972 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 1)));
#line 972 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 2)));
#line 972 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 3)));
#line 973 "declarative_execution.m"
        mdb__declarative_execution__Cond1_10 = mdb__declarative_execution__Cond0_4;
#line 972 "declarative_execution.m"
      }
#line 972 "declarative_execution.m"
    else
#line 975 "declarative_execution.m"
      {
#line 975 "declarative_execution.m"
        {
#line 975 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[27])));
        }
#line 975 "declarative_execution.m"
      }
#line 12349 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeCtorInfo_16_16 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0;
#line 1001 "declarative_execution.m"
    {
#line 1001 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_27);
    }
#line 12356 "mdb.declarative_execution.c"
    {
#line 12358 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12360 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 12362 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 12364 "mdb.declarative_execution.c"
    }
#line 12366 "mdb.declarative_execution.c"
    {
#line 12368 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12370 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 12372 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 12374 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_29));
#line 12376 "mdb.declarative_execution.c"
    }
#line 12378 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_32 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1002 "declarative_execution.m"
    {
#line 1002 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) (mdb__declarative_execution__Cond1_10)), &mdb__declarative_execution__Ref_22, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_23);
    }
#line 1003 "declarative_execution.m"
    {
#line 1003 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__Ref_22, (MR_Integer) 2, &mdb__declarative_execution__ArgRef_24, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_25);
    }
#line 1004 "declarative_execution.m"
    {
#line 1004 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__ArgRef_24, ((MR_Box) (mdb__declarative_execution__Status_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_26);
    }
#line 1005 "declarative_execution.m"
    {
#line 1005 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_22, &mdb__declarative_execution__conv3_Cond_6);
    }
#line 1005 "declarative_execution.m"
    mdb__declarative_execution__Cond_6 = ((MR_Word) mdb__declarative_execution__conv3_Cond_6);
#line 971 "declarative_execution.m"
    return mdb__declarative_execution__Cond_6;
#line 971 "declarative_execution.m"
  }
#line 965 "declarative_execution.m"
}

#line 946 "declarative_execution.m"
static MR_Integer MR_CALL 
mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0(
#line 946 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 946 "declarative_execution.m"
{
#line 961 "declarative_execution.m"
  {
#line 961 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call_3)) == (MR_mktag((MR_Integer) 0)));
#line 961 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__IdealDepth_4;
#line 961 "declarative_execution.m"
    MR_Word mdb__declarative_execution__MaybeImplicitTreeInfo_5;
#line 953 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 953 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_14_14;
#line 953 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_15_15;
#line 953 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 953 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17;
#line 953 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_18_18;
#line 953 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_19_19;
#line 953 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_20_20;
#line 953 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_21_21;

#line 953 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 953 "declarative_execution.m"
      {
#line 953 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 0)));
#line 953 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 1)));
#line 953 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 2)));
#line 953 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 3)));
#line 953 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 4)));
#line 953 "declarative_execution.m"
        mdb__declarative_execution__MaybeImplicitTreeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 5)));
#line 953 "declarative_execution.m"
        mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 6)));
#line 953 "declarative_execution.m"
        mdb__declarative_execution__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 7)));
#line 953 "declarative_execution.m"
        mdb__declarative_execution__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 8)));
#line 953 "declarative_execution.m"
        mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 9)));
#line 956 "declarative_execution.m"
        if ((mdb__declarative_execution__MaybeImplicitTreeInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 957 "declarative_execution.m"
          {
#line 958 "declarative_execution.m"
            {
#line 958 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[25])));
            }
#line 957 "declarative_execution.m"
          }
#line 956 "declarative_execution.m"
        else
#line 955 "declarative_execution.m"
          {
#line 955 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__MaybeImplicitTreeInfo_5, (MR_Integer) 0)));

#line 955 "declarative_execution.m"
            mdb__declarative_execution__IdealDepth_4 = (MR_Integer) mdb__declarative_execution__V_9_9;
#line 955 "declarative_execution.m"
          }
#line 953 "declarative_execution.m"
      }
#line 953 "declarative_execution.m"
    else
#line 962 "declarative_execution.m"
      {
#line 962 "declarative_execution.m"
        {
#line 962 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[26])));
        }
#line 962 "declarative_execution.m"
      }
#line 961 "declarative_execution.m"
    return mdb__declarative_execution__IdealDepth_4;
#line 961 "declarative_execution.m"
  }
#line 946 "declarative_execution.m"
}

#line 928 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0(
#line 928 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 928 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IdealDepth_5)
#line 928 "declarative_execution.m"
{
#line 935 "declarative_execution.m"
  {
#line 935 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call0_4)) == (MR_mktag((MR_Integer) 0)));
#line 935 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call_6;
#line 935 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_25_25;
#line 935 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_36;
#line 935 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_38;
#line 935 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_40;
#line 935 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_41;
#line 935 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call1_17;
#line 935 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_22_22;
#line 935 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_23_23;
#line 935 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_31;
#line 935 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_33;
#line 936 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 936 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8;
#line 936 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 936 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;
#line 936 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 936 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 936 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 936 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_14_14;
#line 936 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_15_15;
#line 936 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 1002 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_32;
#line 1003 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_34;
#line 1004 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_35;
#line 1005 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Call_6;

#line 936 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 936 "declarative_execution.m"
      {
#line 936 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 0)));
#line 936 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 1)));
#line 936 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 2)));
#line 936 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 3)));
#line 936 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 4)));
#line 936 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 5)));
#line 936 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 6)));
#line 936 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 7)));
#line 936 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 8)));
#line 936 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 9)));
#line 937 "declarative_execution.m"
        mdb__declarative_execution__Call1_17 = mdb__declarative_execution__Call0_4;
#line 936 "declarative_execution.m"
      }
#line 936 "declarative_execution.m"
    else
#line 939 "declarative_execution.m"
      {
#line 939 "declarative_execution.m"
        {
#line 939 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[24])));
        }
#line 939 "declarative_execution.m"
      }
#line 944 "declarative_execution.m"
    mdb__declarative_execution__V_23_23 = (MR_Word) mdb__declarative_execution__IdealDepth_5;
#line 944 "declarative_execution.m"
    {
#line 944 "declarative_execution.m"
      mdb__declarative_execution__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 944 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_22_22, 0) = ((MR_Box) (mdb__declarative_execution__V_23_23));
#line 944 "declarative_execution.m"
    }
#line 12622 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_25_25 = (MR_Word) &mdb__declarative_execution_scalar_common_1[1];
#line 1001 "declarative_execution.m"
    {
#line 1001 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_36);
    }
#line 12629 "mdb.declarative_execution.c"
    {
#line 12631 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12633 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_38, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 12635 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_38, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_36));
#line 12637 "mdb.declarative_execution.c"
    }
#line 12639 "mdb.declarative_execution.c"
    {
#line 12641 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12643 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 12645 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_36));
#line 12647 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_38));
#line 12649 "mdb.declarative_execution.c"
    }
#line 12651 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_41 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1002 "declarative_execution.m"
    {
#line 1002 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeClassInfo_for_store_40, ((MR_Box) (mdb__declarative_execution__Call1_17)), &mdb__declarative_execution__Ref_31, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_32);
    }
#line 1003 "declarative_execution.m"
    {
#line 1003 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeInfo_25_25, mdb__declarative_execution__TypeClassInfo_for_store_40, mdb__declarative_execution__Ref_31, (MR_Integer) 5, &mdb__declarative_execution__ArgRef_33, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_34);
    }
#line 1004 "declarative_execution.m"
    {
#line 1004 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeInfo_25_25, mdb__declarative_execution__TypeClassInfo_for_store_40, mdb__declarative_execution__ArgRef_33, ((MR_Box) (mdb__declarative_execution__V_22_22)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_35);
    }
#line 1005 "declarative_execution.m"
    {
#line 1005 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeClassInfo_for_store_40, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_31, &mdb__declarative_execution__conv3_Call_6);
    }
#line 1005 "declarative_execution.m"
    mdb__declarative_execution__Call_6 = ((MR_Word) mdb__declarative_execution__conv3_Call_6);
#line 935 "declarative_execution.m"
    return mdb__declarative_execution__Call_6;
#line 935 "declarative_execution.m"
  }
#line 928 "declarative_execution.m"
}

#line 911 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_set_last_interface_2_f_0(
#line 911 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 911 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Last_5)
#line 911 "declarative_execution.m"
{
#line 917 "declarative_execution.m"
  {
#line 917 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call0_4)) == (MR_mktag((MR_Integer) 0)));
#line 917 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call_6;
#line 917 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_23_23;
#line 917 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_34;
#line 917 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_36;
#line 917 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_38;
#line 917 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_39;
#line 917 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call1_17;
#line 917 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_29;
#line 917 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_31;
#line 918 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 918 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8;
#line 918 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 918 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;
#line 918 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 918 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 918 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 918 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_14_14;
#line 918 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_15_15;
#line 918 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 1002 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_30;
#line 1003 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_32;
#line 1004 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_33;
#line 1005 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Call_6;

#line 918 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 918 "declarative_execution.m"
      {
#line 918 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 0)));
#line 918 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 1)));
#line 918 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 2)));
#line 918 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 3)));
#line 918 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 4)));
#line 918 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 5)));
#line 918 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 6)));
#line 918 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 7)));
#line 918 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 8)));
#line 918 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 9)));
#line 919 "declarative_execution.m"
        mdb__declarative_execution__Call1_17 = mdb__declarative_execution__Call0_4;
#line 918 "declarative_execution.m"
      }
#line 918 "declarative_execution.m"
    else
#line 921 "declarative_execution.m"
      {
#line 921 "declarative_execution.m"
        {
#line 921 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[23])));
        }
#line 921 "declarative_execution.m"
      }
#line 12781 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeCtorInfo_23_23 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0;
#line 1001 "declarative_execution.m"
    {
#line 1001 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_34);
    }
#line 12788 "mdb.declarative_execution.c"
    {
#line 12790 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12792 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_36, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 12794 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_36, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_34));
#line 12796 "mdb.declarative_execution.c"
    }
#line 12798 "mdb.declarative_execution.c"
    {
#line 12800 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12802 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 12804 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_34));
#line 12806 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_36));
#line 12808 "mdb.declarative_execution.c"
    }
#line 12810 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_39 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1002 "declarative_execution.m"
    {
#line 1002 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeClassInfo_for_store_38, ((MR_Box) (mdb__declarative_execution__Call1_17)), &mdb__declarative_execution__Ref_29, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_30);
    }
#line 1003 "declarative_execution.m"
    {
#line 1003 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeCtorInfo_23_23, mdb__declarative_execution__TypeClassInfo_for_store_38, mdb__declarative_execution__Ref_29, (MR_Integer) 1, &mdb__declarative_execution__ArgRef_31, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_32);
    }
#line 1004 "declarative_execution.m"
    {
#line 1004 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_23_23, mdb__declarative_execution__TypeClassInfo_for_store_38, mdb__declarative_execution__ArgRef_31, ((MR_Box) (mdb__declarative_execution__Last_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_33);
    }
#line 1005 "declarative_execution.m"
    {
#line 1005 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeClassInfo_for_store_38, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_29, &mdb__declarative_execution__conv3_Call_6);
    }
#line 1005 "declarative_execution.m"
    mdb__declarative_execution__Call_6 = ((MR_Word) mdb__declarative_execution__conv3_Call_6);
#line 917 "declarative_execution.m"
    return mdb__declarative_execution__Call_6;
#line 917 "declarative_execution.m"
  }
#line 911 "declarative_execution.m"
}

#line 898 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_get_last_interface_1_f_0(
#line 898 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 898 "declarative_execution.m"
{
#line 906 "declarative_execution.m"
  {
#line 906 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call_3)) == (MR_mktag((MR_Integer) 0)));
#line 906 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Last_4;
#line 906 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Last0_6;
#line 904 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_5_5;
#line 904 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 904 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_8_8;
#line 904 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_9_9;
#line 904 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;
#line 904 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_11_11;
#line 904 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_12_12;
#line 904 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_13_13;
#line 904 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_14_14;

#line 904 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 904 "declarative_execution.m"
      {
#line 904 "declarative_execution.m"
        mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 0)));
#line 904 "declarative_execution.m"
        mdb__declarative_execution__Last0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 1)));
#line 904 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 2)));
#line 904 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 3)));
#line 904 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 4)));
#line 904 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 5)));
#line 904 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 6)));
#line 904 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 7)));
#line 904 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 8)));
#line 904 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 9)));
#line 905 "declarative_execution.m"
        mdb__declarative_execution__Last_4 = mdb__declarative_execution__Last0_6;
#line 904 "declarative_execution.m"
      }
#line 904 "declarative_execution.m"
    else
#line 907 "declarative_execution.m"
      {
#line 907 "declarative_execution.m"
        {
#line 907 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[22])));
        }
#line 907 "declarative_execution.m"
      }
#line 906 "declarative_execution.m"
    return mdb__declarative_execution__Last_4;
#line 906 "declarative_execution.m"
  }
#line 898 "declarative_execution.m"
}

#line 881 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__search_trace_node_store_3_p_0(
#line 881 "declarative_execution.m"
  MR_Word mdb__declarative_execution___Store_1,
#line 881 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_2,
#line 881 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_3)
#line 881 "declarative_execution.m"
{
#line 884 "declarative_execution.m"
  {
#line 884 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 887 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__search_trace_node_store_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__Id_2 ;
		{
#line 887 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);

#line 12952 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__Node_3  = Node;
#line 887 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 884 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 884 "declarative_execution.m"
  }
#line 881 "declarative_execution.m"
}

#line 767 "declarative_execution.m"
static MR_Box MR_CALL 
mdb__declarative_execution__step_over_redo_or_call_3_f_0(
#line 767 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24,
#line 767 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_5,
#line 767 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Call_6,
#line 767 "declarative_execution.m"
  MR_Box mdb__declarative_execution__MaybeRedo_7)
#line 767 "declarative_execution.m"
{
#line 772 "declarative_execution.m"
  {
#line 772 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 772 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Next_8;
#line 772 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Redo_9;

#line 770 "declarative_execution.m"
    {
#line 770 "declarative_execution.m"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24, mdb__declarative_execution__Store_5, mdb__declarative_execution__MaybeRedo_7, &mdb__declarative_execution__Redo_9);
    }
#line 772 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 771 "declarative_execution.m"
      {
#line 771 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_10_10;
#line 771 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_11_11;
#line 771 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_12_12;
#line 771 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_13_13;

#line 771 "declarative_execution.m"
        mdb__declarative_execution__Next_8 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 0));
#line 771 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 1));
#line 771 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 2)));
#line 771 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 3)));
#line 771 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 4)));
#line 771 "declarative_execution.m"
      }
#line 772 "declarative_execution.m"
    else
#line 773 "declarative_execution.m"
      {
#line 773 "declarative_execution.m"
        MR_Word mdb__declarative_execution__CallNode_14;
#line 774 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_15_15;
#line 774 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_16_16;
#line 774 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_17_17;
#line 774 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_18_18;
#line 774 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_19_19;
#line 774 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_20_20;
#line 774 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_21_21;
#line 774 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_22_22;
#line 774 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_23_23;

#line 773 "declarative_execution.m"
        {
#line 773 "declarative_execution.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24, mdb__declarative_execution__Store_5, mdb__declarative_execution__Call_6, &mdb__declarative_execution__CallNode_14);
        }
#line 774 "declarative_execution.m"
        mdb__declarative_execution__Next_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 0));
#line 774 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 1));
#line 774 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 2)));
#line 774 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 3)));
#line 774 "declarative_execution.m"
        mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 4)));
#line 774 "declarative_execution.m"
        mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 5)));
#line 774 "declarative_execution.m"
        mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 6)));
#line 774 "declarative_execution.m"
        mdb__declarative_execution__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 7)));
#line 774 "declarative_execution.m"
        mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 8)));
#line 774 "declarative_execution.m"
        mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 9)));
#line 773 "declarative_execution.m"
      }
#line 772 "declarative_execution.m"
    return mdb__declarative_execution__Next_8;
#line 772 "declarative_execution.m"
  }
#line 767 "declarative_execution.m"
}

#line 680 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_1(
#line 680 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67,
#line 680 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 680 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 680 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__OnContour_6)
#line 680 "declarative_execution.m"
{
#line 689 "declarative_execution.m"
  {
#line 689 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 689 "declarative_execution.m"
#line 689 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_5)) {
#line 689 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 689 "declarative_execution.m"
      case (MR_Integer) 2:
#line 693 "declarative_execution.m"
        {
#line 693 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Exit_15 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 693 "declarative_execution.m"
          MR_Word mdb__declarative_execution__ExitNode_19;
#line 693 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 693 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 693 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 693 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 695 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_60_60;
#line 695 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_61_61;
#line 695 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_62_62;
#line 695 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_63_63;
#line 695 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_64_64;
#line 695 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_65_65;
#line 695 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_66_66;

#line 694 "declarative_execution.m"
          {
#line 694 "declarative_execution.m"
            mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Exit_15, &mdb__declarative_execution__ExitNode_19);
          }
#line 695 "declarative_execution.m"
          *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 0));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_60_60 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 1));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_61_61 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 2));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 3)));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 4)));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_64_64 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 5)));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 6)));
#line 695 "declarative_execution.m"
          mdb__declarative_execution__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 7)));
#line 693 "declarative_execution.m"
        }
#line 689 "declarative_execution.m"
        break;
#line 689 "declarative_execution.m"
      case (MR_Integer) 3:
#line 689 "declarative_execution.m"
#line 689 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) {
#line 689 "declarative_execution.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 689 "declarative_execution.m"
          case (MR_Integer) 0:
#line 689 "declarative_execution.m"
            {
#line 689 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 689 "declarative_execution.m"
              MR_Word mdb__declarative_execution__CallNode_13;
#line 689 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 689 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 689 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 689 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 689 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 691 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_51_51;
#line 691 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_52_52;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_53_53;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_54_54;
#line 691 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_55_55;
#line 691 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_56_56;
#line 691 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_57_57;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_58_58;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_59_59;

#line 690 "declarative_execution.m"
              {
#line 690 "declarative_execution.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, &mdb__declarative_execution__CallNode_13);
              }
#line 691 "declarative_execution.m"
              *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 0));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_51_51 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 1));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 2)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 3)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 4)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 5)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 6)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_57_57 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 7)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 8)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 9)));
#line 689 "declarative_execution.m"
            }
#line 689 "declarative_execution.m"
            break;
#line 689 "declarative_execution.m"
          case (MR_Integer) 10:
#line 697 "declarative_execution.m"
            {
#line 697 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Neg_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 697 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_50_50;
#line 697 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 697 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 698 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_23_23;
#line 698 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_24_24;

#line 698 "declarative_execution.m"
              {
#line 698 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_21, &mdb__declarative_execution__V_50_50);
              }
#line 698 "declarative_execution.m"
              *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 1));
#line 698 "declarative_execution.m"
              mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 2)));
#line 698 "declarative_execution.m"
              mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 3)));
#line 697 "declarative_execution.m"
            }
#line 689 "declarative_execution.m"
            break;
#line 689 "declarative_execution.m"
        }
#line 689 "declarative_execution.m"
        break;
#line 689 "declarative_execution.m"
    }
#line 689 "declarative_execution.m"
  }
#line 680 "declarative_execution.m"
}

#line 584 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__cache_proc_defn_rep_2_p_0(
#line 584 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 584 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ProcDefnRep_2)
#line 584 "declarative_execution.m"
{
#line 589 "declarative_execution.m"
  {
#line 589 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 592 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__cache_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_1 ;
	ProcDefnRep =  mdb__declarative_execution__ProcDefnRep_2 ;
		{
#line 592 "declarative_execution.m"

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_defn_rep: %p %x\n", ProcLayout, ProcDefnRep);
#endif
    MR_insert_proc_defn_rep(ProcLayout, ProcDefnRep);

#line 13306 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
#line 592 "declarative_execution.m"
}
#line 589 "declarative_execution.m"
  }
#line 584 "declarative_execution.m"
}

#line 545 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0(
#line 545 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 545 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__ProcDefnRep_2)
#line 545 "declarative_execution.m"
{
#line 552 "declarative_execution.m"
  {
#line 552 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 555 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_1 ;
		{
#line 555 "declarative_execution.m"

    ProcDefnRep = MR_lookup_proc_defn_rep(ProcLayout);
    if (ProcDefnRep != 0) {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p success\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p failure\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 13356 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__ProcDefnRep_2  = ProcDefnRep;
#line 555 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 552 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 552 "declarative_execution.m"
  }
#line 545 "declarative_execution.m"
}

#line 506 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__call_node_bytecode_layout_2_p_0(
#line 506 "declarative_execution.m"
  MR_Box mdb__declarative_execution__CallLabelLayout_1,
#line 506 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__ProcLayout_2)
#line 506 "declarative_execution.m"
{
#line 513 "declarative_execution.m"
  {
#line 513 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 516 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_bytecode_layout_2_p_0

	const MR_LabelLayout * CallLabelLayout;
	const MR_ProcLayout * ProcLayout;
	MR_bool SUCCESS_INDICATOR;

	CallLabelLayout = (const MR_LabelLayout *) mdb__declarative_execution__CallLabelLayout_1 ;
		{
#line 516 "declarative_execution.m"

    ProcLayout = CallLabelLayout->MR_sll_entry;
    if (ProcLayout->MR_sle_body_bytes != NULL) {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p success\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p failure\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 13412 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__ProcLayout_2  = (MR_Box) ProcLayout;
#line 516 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 513 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 513 "declarative_execution.m"
  }
#line 506 "declarative_execution.m"
}

#line 451 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__user_arg_num_3_p_0(
#line 451 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 451 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 451 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__ArgNum_3)
#line 451 "declarative_execution.m"
{
#line 1517 "declarative_execution.m"
  {
#line 1517 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1517 "declarative_execution.m"
#line 1517 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
#line 1517 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1517 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1517 "declarative_execution.m"
        *mdb__declarative_execution__ArgNum_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1517 "declarative_execution.m"
        break;
#line 1517 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1518 "declarative_execution.m"
        {
#line 1518 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__AnyArgNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1518 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1518 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1519 "declarative_execution.m"
          {
#line 1519 "declarative_execution.m"
            mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(mdb__declarative_execution__Args_8, mdb__declarative_execution__AnyArgNum_6, (MR_Integer) 1, mdb__declarative_execution__ArgNum_3);
#line 1519 "declarative_execution.m"
            return;
          }
#line 1518 "declarative_execution.m"
        }
#line 1517 "declarative_execution.m"
        break;
#line 1517 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1521 "declarative_execution.m"
        {
#line 1521 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__AnyArgNumFromBack_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1521 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1521 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_15_15;
#line 1521 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_17_17;
#line 1521 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_18_18;
#line 1520 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1523 "declarative_execution.m"
          {
#line 1523 "declarative_execution.m"
            mdb__declarative_execution__V_18_18 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_13);
          }
#line 1523 "declarative_execution.m"
          mdb__declarative_execution__V_17_17 = (mdb__declarative_execution__V_18_18 - mdb__declarative_execution__AnyArgNumFromBack_11);
#line 1523 "declarative_execution.m"
          mdb__declarative_execution__V_15_15 = (mdb__declarative_execution__V_17_17 + (MR_Integer) 1);
#line 1522 "declarative_execution.m"
          {
#line 1522 "declarative_execution.m"
            mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(mdb__declarative_execution__Args_13, mdb__declarative_execution__V_15_15, (MR_Integer) 1, mdb__declarative_execution__ArgNum_3);
#line 1522 "declarative_execution.m"
            return;
          }
#line 1521 "declarative_execution.m"
        }
#line 1517 "declarative_execution.m"
        break;
#line 1517 "declarative_execution.m"
    }
#line 1517 "declarative_execution.m"
  }
#line 451 "declarative_execution.m"
}

#line 449 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__absolute_arg_num_3_p_0(
#line 449 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 449 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 449 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__HeadVar__3_3)
#line 449 "declarative_execution.m"
{
#line 1512 "declarative_execution.m"
  {
#line 1512 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1512 "declarative_execution.m"
#line 1512 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
#line 1512 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1512 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1513 "declarative_execution.m"
        {
#line 1513 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1513 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1513 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1514 "declarative_execution.m"
          {
#line 1514 "declarative_execution.m"
            mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(mdb__declarative_execution__Args_8, mdb__declarative_execution__N_6, (MR_Integer) 1, mdb__declarative_execution__HeadVar__3_3);
#line 1514 "declarative_execution.m"
            return;
          }
#line 1513 "declarative_execution.m"
        }
#line 1512 "declarative_execution.m"
        break;
#line 1512 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1512 "declarative_execution.m"
        *mdb__declarative_execution__HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1512 "declarative_execution.m"
        break;
#line 1512 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1515 "declarative_execution.m"
        {
#line 1515 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__M_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1515 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1515 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14;
#line 1515 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_15_15;
#line 1515 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1515 "declarative_execution.m"
          {
#line 1515 "declarative_execution.m"
            mdb__declarative_execution__V_15_15 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_13);
          }
#line 1515 "declarative_execution.m"
          mdb__declarative_execution__V_14_14 = (mdb__declarative_execution__V_15_15 - mdb__declarative_execution__M_11);
#line 1515 "declarative_execution.m"
          *mdb__declarative_execution__HeadVar__3_3 = (mdb__declarative_execution__V_14_14 + (MR_Integer) 1);
#line 1515 "declarative_execution.m"
        }
#line 1512 "declarative_execution.m"
        break;
#line 1512 "declarative_execution.m"
    }
#line 1512 "declarative_execution.m"
  }
#line 449 "declarative_execution.m"
}

#line 1490 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0_1(
#line 1490 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1490 "declarative_execution.m"
  MR_Box mdb__declarative_execution__wrapper_arg_1)
#line 1490 "declarative_execution.m"
{
#line 1490 "declarative_execution.m"
  {
#line 1490 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1490 "declarative_execution.m"
    MR_Box mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;

#line 1490 "declarative_execution.m"
    {
#line 1490 "declarative_execution.m"
      return mdb__declarative_execution__succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1));
    }
#line 1490 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1490 "declarative_execution.m"
  }
#line 1490 "declarative_execution.m"
}

#line 446 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0(
#line 446 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ArgPos_4,
#line 446 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args0_5,
#line 446 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Arg_6)
#line 446 "declarative_execution.m"
{
#line 1497 "declarative_execution.m"
  {
#line 1497 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1497 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__N_7;
#line 1497 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Args_10;
#line 1510 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_Arg_6;

#line 13656 "mdb.declarative_execution.c"
#line 13657 "mdb.declarative_execution.c"
    switch (MR_tag((MR_Word) mdb__declarative_execution__ArgPos_4)) {
#line 13659 "mdb.declarative_execution.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 13661 "mdb.declarative_execution.c"
      case (MR_Integer) 0:
#line 13663 "mdb.declarative_execution.c"
        {
#line 1499 "declarative_execution.m"
          mdb__declarative_execution__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
#line 1490 "declarative_execution.m"
          {
#line 1490 "declarative_execution.m"
            mdb__declarative_execution__Args_10 = mercury__list__filter_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mdb__declarative_execution_scalar_common_2[3], mdb__declarative_execution__Args0_5);
          }
#line 13672 "mdb.declarative_execution.c"
        }
#line 13674 "mdb.declarative_execution.c"
        break;
#line 13676 "mdb.declarative_execution.c"
      case (MR_Integer) 1:
#line 13678 "mdb.declarative_execution.c"
        {
#line 1502 "declarative_execution.m"
          mdb__declarative_execution__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
#line 1487 "declarative_execution.m"
          mdb__declarative_execution__Args_10 = mdb__declarative_execution__Args0_5;
#line 13684 "mdb.declarative_execution.c"
        }
#line 13686 "mdb.declarative_execution.c"
        break;
#line 13688 "mdb.declarative_execution.c"
      case (MR_Integer) 2:
#line 13690 "mdb.declarative_execution.c"
        {
#line 13692 "mdb.declarative_execution.c"
          MR_Integer mdb__declarative_execution__M_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
#line 13694 "mdb.declarative_execution.c"
          MR_Integer mdb__declarative_execution__V_11_11;
#line 13696 "mdb.declarative_execution.c"
          MR_Integer mdb__declarative_execution__V_12_12;

#line 1506 "declarative_execution.m"
          {
#line 1506 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args0_5);
          }
#line 1506 "declarative_execution.m"
          mdb__declarative_execution__V_11_11 = (mdb__declarative_execution__V_12_12 - mdb__declarative_execution__M_9);
#line 1506 "declarative_execution.m"
          mdb__declarative_execution__N_7 = (mdb__declarative_execution__V_11_11 + (MR_Integer) 1);
#line 1487 "declarative_execution.m"
          mdb__declarative_execution__Args_10 = mdb__declarative_execution__Args0_5;
#line 13710 "mdb.declarative_execution.c"
        }
#line 13712 "mdb.declarative_execution.c"
        break;
#line 13714 "mdb.declarative_execution.c"
    }
#line 1510 "declarative_execution.m"
    {
#line 1510 "declarative_execution.m"
      mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_10, mdb__declarative_execution__N_7, &mdb__declarative_execution__conv0_Arg_6);
    }
#line 1510 "declarative_execution.m"
    *mdb__declarative_execution__Arg_6 = ((MR_Word) mdb__declarative_execution__conv0_Arg_6);
#line 1497 "declarative_execution.m"
  }
#line 446 "declarative_execution.m"
}

#line 444 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__is_user_visible_arg_1_p_0(
#line 444 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 444 "declarative_execution.m"
{
#line 1495 "declarative_execution.m"
  {
#line 1495 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1495 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1495 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1495 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));

#line 1495 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_4_4 == (MR_Integer) 1);
#line 1495 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1495 "declarative_execution.m"
  }
#line 444 "declarative_execution.m"
}

#line 442 "declarative_execution.m"
MR_Word MR_CALL 
mdb__declarative_execution__chosen_head_vars_presentation_0_f_0(void)
#line 442 "declarative_execution.m"
{
#line 1493 "declarative_execution.m"
  {
#line 1493 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1493 "declarative_execution.m"
    return (MR_Integer) 1;
#line 1493 "declarative_execution.m"
  }
#line 442 "declarative_execution.m"
}

#line 1490 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0_1(
#line 1490 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1490 "declarative_execution.m"
  MR_Box mdb__declarative_execution__wrapper_arg_1)
#line 1490 "declarative_execution.m"
{
#line 1490 "declarative_execution.m"
  {
#line 1490 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1490 "declarative_execution.m"
    MR_Box mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;

#line 1490 "declarative_execution.m"
    {
#line 1490 "declarative_execution.m"
      return mdb__declarative_execution__succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1));
    }
#line 1490 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1490 "declarative_execution.m"
  }
#line 1490 "declarative_execution.m"
}

#line 439 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0(
#line 439 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Which_4,
#line 439 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args0_5,
#line 439 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Args_6)
#line 439 "declarative_execution.m"
{
#line 1486 "declarative_execution.m"
  {
#line 1486 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1486 "declarative_execution.m"
#line 1486 "declarative_execution.m"
    switch (mdb__declarative_execution__Which_4) {
#line 1486 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1486 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1487 "declarative_execution.m"
        *mdb__declarative_execution__Args_6 = mdb__declarative_execution__Args0_5;
#line 1486 "declarative_execution.m"
        break;
#line 1486 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1489 "declarative_execution.m"
        {
#line 1490 "declarative_execution.m"
          {
#line 1490 "declarative_execution.m"
            *mdb__declarative_execution__Args_6 = mercury__list__filter_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mdb__declarative_execution_scalar_common_2[2], mdb__declarative_execution__Args0_5);
          }
#line 1489 "declarative_execution.m"
        }
#line 1486 "declarative_execution.m"
        break;
#line 1486 "declarative_execution.m"
    }
#line 1486 "declarative_execution.m"
  }
#line 439 "declarative_execution.m"
}

#line 411 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__save_trace_node_store_5_p_0(
#line 411 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Stream_6,
#line 411 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_7,
#line 411 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_8)
#line 411 "declarative_execution.m"
{
#line 1414 "declarative_execution.m"
  {
#line 1414 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1414 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0;
#line 1414 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Map0_10;
#line 1414 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Key_11;
#line 1414 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Map_12;
#line 1414 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_15_15;

#line 1415 "declarative_execution.m"
    {
#line 1415 "declarative_execution.m"
      mercury__map__init_1_p_0(mdb__declarative_execution__TypeCtorInfo_22_22, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], &mdb__declarative_execution__Map0_10);
    }
#line 1442 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__save_trace_node_store_5_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__NodeId_8 ;
		{
#line 1442 "declarative_execution.m"

    Key = (MR_Integer) Id;

#line 13891 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Key_11  = Key;
#line 1442 "declarative_execution.m"
}
#line 1417 "declarative_execution.m"
    mdb__declarative_execution__V_15_15 = (MR_Word) mdb__declarative_execution__Map0_10;
#line 1417 "declarative_execution.m"
    {
#line 1417 "declarative_execution.m"
      mdb__declarative_execution__node_map_4_p_0(mdb__declarative_execution__Store_7, mdb__declarative_execution__NodeId_8, mdb__declarative_execution__V_15_15, &mdb__declarative_execution__Map_12);
    }
#line 1418 "declarative_execution.m"
    {
#line 1418 "declarative_execution.m"
      mercury__io__write_4_p_0(mdb__declarative_execution__TypeCtorInfo_22_22, mdb__declarative_execution__Stream_6, ((MR_Box) (mdb__declarative_execution__Key_11)));
    }
#line 1419 "declarative_execution.m"
    {
#line 1419 "declarative_execution.m"
      mercury__io__write_string_4_p_0(mdb__declarative_execution__Stream_6, (MR_String) ".\n");
    }
#line 1420 "declarative_execution.m"
    {
#line 1420 "declarative_execution.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0, mdb__declarative_execution__Stream_6, ((MR_Box) (mdb__declarative_execution__Map_12)));
    }
#line 1421 "declarative_execution.m"
    {
#line 1421 "declarative_execution.m"
      mercury__io__write_string_4_p_0(mdb__declarative_execution__Stream_6, (MR_String) ".\n");
#line 1421 "declarative_execution.m"
      return;
    }
#line 1414 "declarative_execution.m"
  }
#line 411 "declarative_execution.m"
}

#line 405 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__load_trace_node_map_5_p_0(
#line 405 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Stream_6,
#line 405 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Map_7,
#line 405 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Key_8)
#line 405 "declarative_execution.m"
{
#line 1389 "declarative_execution.m"
  {
#line 1389 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1389 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ResKey_10;
#line 1389 "declarative_execution.m"
    MR_String mdb__declarative_execution__Msg_11;
#line 1389 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ResMap_13;

#line 1390 "declarative_execution.m"
    {
#line 1390 "declarative_execution.m"
      mercury__io__read_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, mdb__declarative_execution__Stream_6, &mdb__declarative_execution__ResKey_10);
    }
#line 1393 "declarative_execution.m"
#line 1393 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__ResKey_10)) {
#line 1393 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1393 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1394 "declarative_execution.m"
        {
#line 1395 "declarative_execution.m"
          {
#line 1395 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_1[21]))));
#line 1395 "declarative_execution.m"
            return;
          }
#line 1394 "declarative_execution.m"
        }
#line 1393 "declarative_execution.m"
        break;
#line 1393 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1392 "declarative_execution.m"
        *mdb__declarative_execution__Key_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ResKey_10, (MR_Integer) 0)));
#line 1393 "declarative_execution.m"
        break;
#line 1393 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1397 "declarative_execution.m"
        {
#line 1397 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_18_18;
#line 1397 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_12_12;

#line 1397 "declarative_execution.m"
          mdb__declarative_execution__Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResKey_10, (MR_Integer) 0)));
#line 1397 "declarative_execution.m"
          mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResKey_10, (MR_Integer) 1)));
#line 1398 "declarative_execution.m"
          {
#line 1398 "declarative_execution.m"
            mdb__declarative_execution__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1398 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_18_18, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
#line 1398 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_18_18, 1) = ((MR_Box) (mdb__declarative_execution__Msg_11));
#line 1398 "declarative_execution.m"
          }
#line 1398 "declarative_execution.m"
          {
#line 1398 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_execution__V_18_18)));
#line 1398 "declarative_execution.m"
            return;
          }
#line 1397 "declarative_execution.m"
        }
#line 1393 "declarative_execution.m"
        break;
#line 1393 "declarative_execution.m"
    }
#line 1400 "declarative_execution.m"
    {
#line 1400 "declarative_execution.m"
      mercury__io__read_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0, mdb__declarative_execution__Stream_6, &mdb__declarative_execution__ResMap_13);
    }
#line 1403 "declarative_execution.m"
#line 1403 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__ResMap_13)) {
#line 1403 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1403 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1404 "declarative_execution.m"
        {
#line 1405 "declarative_execution.m"
          {
#line 1405 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_1[21]))));
#line 1405 "declarative_execution.m"
            return;
          }
#line 1404 "declarative_execution.m"
        }
#line 1403 "declarative_execution.m"
        break;
#line 1403 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1402 "declarative_execution.m"
        *mdb__declarative_execution__Map_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ResMap_13, (MR_Integer) 0)));
#line 1403 "declarative_execution.m"
        break;
#line 1403 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1407 "declarative_execution.m"
        {
#line 1407 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_24_24;
#line 1407 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14;

#line 1407 "declarative_execution.m"
          mdb__declarative_execution__Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResMap_13, (MR_Integer) 0)));
#line 1407 "declarative_execution.m"
          mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResMap_13, (MR_Integer) 1)));
#line 1408 "declarative_execution.m"
          {
#line 1408 "declarative_execution.m"
            mdb__declarative_execution__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_24_24, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
#line 1408 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_24_24, 1) = ((MR_Box) (mdb__declarative_execution__Msg_11));
#line 1408 "declarative_execution.m"
          }
#line 1408 "declarative_execution.m"
          {
#line 1408 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_execution__V_24_24)));
#line 1408 "declarative_execution.m"
            return;
          }
#line 1407 "declarative_execution.m"
        }
#line 1403 "declarative_execution.m"
        break;
#line 1403 "declarative_execution.m"
    }
#line 1389 "declarative_execution.m"
  }
#line 405 "declarative_execution.m"
}

#line 400 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__disj_node_from_id_3_p_0(
#line 400 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16,
#line 400 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 400 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 400 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 400 "declarative_execution.m"
{
#line 854 "declarative_execution.m"
  {
#line 854 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 854 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14112 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14114 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;

#line 14117 "mdb.declarative_execution.c"
    {
#line 14119 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14122 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14124 "mdb.declarative_execution.c"
      {
#line 14126 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14128 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14130 "mdb.declarative_execution.c"
      }
#line 848 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 850 "declarative_execution.m"
      {
#line 850 "declarative_execution.m"
        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 849 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 850 "declarative_execution.m"
        else
#line 850 "declarative_execution.m"
        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 850 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 850 "declarative_execution.m"
        else
#line 850 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_FALSE;
#line 850 "declarative_execution.m"
      }
#line 854 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 853 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 854 "declarative_execution.m"
    else
#line 855 "declarative_execution.m"
      {
#line 855 "declarative_execution.m"
        {
#line 855 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[20])));
#line 855 "declarative_execution.m"
          return;
        }
#line 855 "declarative_execution.m"
      }
#line 854 "declarative_execution.m"
  }
#line 400 "declarative_execution.m"
}

#line 392 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__first_disj_node_from_id_3_p_0(
#line 392 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13,
#line 392 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 392 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 392 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 392 "declarative_execution.m"
{
#line 841 "declarative_execution.m"
  {
#line 841 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 841 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14193 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14195 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 838 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 838 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;

#line 14202 "mdb.declarative_execution.c"
    {
#line 14204 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14207 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14209 "mdb.declarative_execution.c"
      {
#line 14211 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14213 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14215 "mdb.declarative_execution.c"
      }
#line 837 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 837 "declarative_execution.m"
      {
#line 838 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 838 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 838 "declarative_execution.m"
          {
#line 838 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 838 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 838 "declarative_execution.m"
          }
#line 837 "declarative_execution.m"
      }
#line 841 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 840 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 841 "declarative_execution.m"
    else
#line 842 "declarative_execution.m"
      {
#line 842 "declarative_execution.m"
        {
#line 842 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[19])));
#line 842 "declarative_execution.m"
          return;
        }
#line 842 "declarative_execution.m"
      }
#line 841 "declarative_execution.m"
  }
#line 392 "declarative_execution.m"
}

#line 386 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__neg_node_from_id_3_p_0(
#line 386 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14,
#line 386 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 386 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 386 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 386 "declarative_execution.m"
{
#line 831 "declarative_execution.m"
  {
#line 831 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 831 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14276 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14278 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 828 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 828 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 828 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;

#line 14287 "mdb.declarative_execution.c"
    {
#line 14289 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14292 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14294 "mdb.declarative_execution.c"
      {
#line 14296 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14298 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14300 "mdb.declarative_execution.c"
      }
#line 827 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 827 "declarative_execution.m"
      {
#line 828 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 828 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 828 "declarative_execution.m"
          {
#line 828 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 828 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 828 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 828 "declarative_execution.m"
          }
#line 827 "declarative_execution.m"
      }
#line 831 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 830 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 831 "declarative_execution.m"
    else
#line 832 "declarative_execution.m"
      {
#line 832 "declarative_execution.m"
        {
#line 832 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[18])));
#line 832 "declarative_execution.m"
          return;
        }
#line 832 "declarative_execution.m"
      }
#line 831 "declarative_execution.m"
  }
#line 386 "declarative_execution.m"
}

#line 380 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__cond_node_from_id_3_p_0(
#line 380 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14,
#line 380 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 380 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 380 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 380 "declarative_execution.m"
{
#line 821 "declarative_execution.m"
  {
#line 821 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 821 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14363 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14365 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 818 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 818 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 818 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;

#line 14374 "mdb.declarative_execution.c"
    {
#line 14376 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14379 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14381 "mdb.declarative_execution.c"
      {
#line 14383 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14385 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14387 "mdb.declarative_execution.c"
      }
#line 817 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 817 "declarative_execution.m"
      {
#line 818 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 818 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 818 "declarative_execution.m"
          {
#line 818 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 818 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 818 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 818 "declarative_execution.m"
          }
#line 817 "declarative_execution.m"
      }
#line 821 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 820 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 821 "declarative_execution.m"
    else
#line 822 "declarative_execution.m"
      {
#line 822 "declarative_execution.m"
        {
#line 822 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[17])));
#line 822 "declarative_execution.m"
          return;
        }
#line 822 "declarative_execution.m"
      }
#line 821 "declarative_execution.m"
  }
#line 380 "declarative_execution.m"
}

#line 374 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__exit_node_from_id_3_p_0(
#line 374 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19,
#line 374 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 374 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 374 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 374 "declarative_execution.m"
{
#line 811 "declarative_execution.m"
  {
#line 811 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 811 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14450 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14452 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 808 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 808 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 808 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_10_10;
#line 808 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_11_11;
#line 808 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;
#line 808 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_13_13;
#line 808 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_14_14;
#line 808 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_15_15;

#line 14471 "mdb.declarative_execution.c"
    {
#line 14473 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14476 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14478 "mdb.declarative_execution.c"
      {
#line 14480 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14482 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14484 "mdb.declarative_execution.c"
      }
#line 807 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 807 "declarative_execution.m"
      {
#line 808 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 1)));
#line 808 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 808 "declarative_execution.m"
          {
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 2));
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 5)));
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 6)));
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 7)));
#line 808 "declarative_execution.m"
          }
#line 807 "declarative_execution.m"
      }
#line 811 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 810 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 811 "declarative_execution.m"
    else
#line 812 "declarative_execution.m"
      {
#line 812 "declarative_execution.m"
        {
#line 812 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[16])));
#line 812 "declarative_execution.m"
          return;
        }
#line 812 "declarative_execution.m"
      }
#line 811 "declarative_execution.m"
  }
#line 374 "declarative_execution.m"
}

#line 365 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(
#line 365 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16,
#line 365 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 365 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 365 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 365 "declarative_execution.m"
{
#line 794 "declarative_execution.m"
  {
#line 794 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 794 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14557 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14559 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 797 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 797 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 797 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;
#line 797 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_11_11;
#line 797 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;

#line 14572 "mdb.declarative_execution.c"
    {
#line 14574 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14577 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14579 "mdb.declarative_execution.c"
      {
#line 14581 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14583 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14585 "mdb.declarative_execution.c"
      }
#line 794 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 794 "declarative_execution.m"
      {
#line 797 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 2)));
#line 797 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 797 "declarative_execution.m"
          {
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
#line 799 "declarative_execution.m"
            *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 797 "declarative_execution.m"
          }
#line 797 "declarative_execution.m"
        else
#line 801 "declarative_execution.m"
          {
#line 801 "declarative_execution.m"
            {
#line 801 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[15])));
            }
#line 801 "declarative_execution.m"
          }
#line 800 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 794 "declarative_execution.m"
      }
#line 794 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 794 "declarative_execution.m"
  }
#line 365 "declarative_execution.m"
}

#line 356 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__call_node_from_id_3_p_0(
#line 356 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21,
#line 356 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 356 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 356 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 356 "declarative_execution.m"
{
#line 790 "declarative_execution.m"
  {
#line 790 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 790 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14652 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14654 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 787 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 787 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 787 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;
#line 787 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 787 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;
#line 787 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 787 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_14_14;
#line 787 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_15_15;
#line 787 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 787 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17;

#line 14677 "mdb.declarative_execution.c"
    {
#line 14679 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14682 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14684 "mdb.declarative_execution.c"
      {
#line 14686 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14688 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14690 "mdb.declarative_execution.c"
      }
#line 786 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 786 "declarative_execution.m"
      {
#line 787 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 0)));
#line 787 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 787 "declarative_execution.m"
          {
#line 787 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
#line 787 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 787 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 787 "declarative_execution.m"
            mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 787 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
#line 787 "declarative_execution.m"
            mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 5)));
#line 787 "declarative_execution.m"
            mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 6)));
#line 787 "declarative_execution.m"
            mdb__declarative_execution__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 7)));
#line 787 "declarative_execution.m"
            mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 8)));
#line 787 "declarative_execution.m"
            mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 9)));
#line 787 "declarative_execution.m"
          }
#line 786 "declarative_execution.m"
      }
#line 790 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 789 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 790 "declarative_execution.m"
    else
#line 791 "declarative_execution.m"
      {
#line 791 "declarative_execution.m"
        {
#line 791 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[14])));
#line 791 "declarative_execution.m"
          return;
        }
#line 791 "declarative_execution.m"
      }
#line 790 "declarative_execution.m"
  }
#line 356 "declarative_execution.m"
}

#line 348 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__det_trace_node_from_id_3_p_0(
#line 348 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11,
#line 348 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 348 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 348 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 348 "declarative_execution.m"
{
#line 780 "declarative_execution.m"
  {
#line 780 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 780 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14767 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14769 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;

#line 14772 "mdb.declarative_execution.c"
    {
#line 14774 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14777 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14779 "mdb.declarative_execution.c"
      {
#line 14781 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14783 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14785 "mdb.declarative_execution.c"
      }
#line 780 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 779 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 780 "declarative_execution.m"
    else
#line 781 "declarative_execution.m"
      {
#line 781 "declarative_execution.m"
        {
#line 781 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[13])));
#line 781 "declarative_execution.m"
          return;
        }
#line 781 "declarative_execution.m"
      }
#line 780 "declarative_execution.m"
  }
#line 348 "declarative_execution.m"
}

#line 343 "declarative_execution.m"
MR_Box MR_CALL 
mdb__declarative_execution__step_in_stratum_2_f_0(
#line 343 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90,
#line 343 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 343 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 343 "declarative_execution.m"
{
#line 716 "declarative_execution.m"
  {
#line 716 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 716 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Next_6;

#line 716 "declarative_execution.m"
#line 716 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_5)) {
#line 716 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 716 "declarative_execution.m"
      case (MR_Integer) 0:
#line 759 "declarative_execution.m"
        {
#line 760 "declarative_execution.m"
          {
#line 760 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[10])));
          }
#line 759 "declarative_execution.m"
        }
#line 716 "declarative_execution.m"
        break;
#line 716 "declarative_execution.m"
      case (MR_Integer) 1:
#line 716 "declarative_execution.m"
        {
#line 716 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 716 "declarative_execution.m"
          MR_Box mdb__declarative_execution__MaybeRedo_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 716 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 716 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 716 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 716 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 716 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 716 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 7)));

#line 717 "declarative_execution.m"
          {
#line 717 "declarative_execution.m"
            return mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, mdb__declarative_execution__MaybeRedo_9);
          }
#line 716 "declarative_execution.m"
        }
#line 716 "declarative_execution.m"
        break;
#line 716 "declarative_execution.m"
      case (MR_Integer) 2:
#line 725 "declarative_execution.m"
        {
#line 725 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Exit_25 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 725 "declarative_execution.m"
          MR_Word mdb__declarative_execution__ExitNode_29;
#line 725 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 725 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 725 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_27_27 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 725 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 727 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_83_83;
#line 727 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_84_84;
#line 727 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_85_85;
#line 727 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_86_86;
#line 727 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_87_87;
#line 727 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_88_88;
#line 727 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_89_89;

#line 726 "declarative_execution.m"
          {
#line 726 "declarative_execution.m"
            mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Exit_25, &mdb__declarative_execution__ExitNode_29);
          }
#line 727 "declarative_execution.m"
          mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 0));
#line 727 "declarative_execution.m"
          mdb__declarative_execution__V_83_83 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 1));
#line 727 "declarative_execution.m"
          mdb__declarative_execution__V_84_84 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 2));
#line 727 "declarative_execution.m"
          mdb__declarative_execution__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 3)));
#line 727 "declarative_execution.m"
          mdb__declarative_execution__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 4)));
#line 727 "declarative_execution.m"
          mdb__declarative_execution__V_87_87 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 5)));
#line 727 "declarative_execution.m"
          mdb__declarative_execution__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 6)));
#line 727 "declarative_execution.m"
          mdb__declarative_execution__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 7)));
#line 725 "declarative_execution.m"
        }
#line 716 "declarative_execution.m"
        break;
#line 716 "declarative_execution.m"
      case (MR_Integer) 3:
#line 716 "declarative_execution.m"
#line 716 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) {
#line 716 "declarative_execution.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 716 "declarative_execution.m"
          case (MR_Integer) 0:
#line 719 "declarative_execution.m"
            {
#line 719 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Call_78 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 719 "declarative_execution.m"
              MR_Box mdb__declarative_execution__MaybeRedo_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 719 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 719 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 719 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 719 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));

#line 720 "declarative_execution.m"
              {
#line 720 "declarative_execution.m"
                return mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_78, mdb__declarative_execution__MaybeRedo_79);
              }
#line 719 "declarative_execution.m"
            }
#line 716 "declarative_execution.m"
            break;
#line 716 "declarative_execution.m"
          case (MR_Integer) 1:
#line 722 "declarative_execution.m"
            {
#line 722 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Call_80 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 722 "declarative_execution.m"
              MR_Box mdb__declarative_execution__MaybeRedo_81 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 722 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 722 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 722 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 722 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 722 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 7)));

#line 723 "declarative_execution.m"
              {
#line 723 "declarative_execution.m"
                return mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_80, mdb__declarative_execution__MaybeRedo_81);
              }
#line 722 "declarative_execution.m"
            }
#line 716 "declarative_execution.m"
            break;
#line 716 "declarative_execution.m"
          case (MR_Integer) 2:
#line 729 "declarative_execution.m"
            {
#line 729 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_30_30;

#line 729 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 729 "declarative_execution.m"
              mdb__declarative_execution__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 729 "declarative_execution.m"
            }
#line 716 "declarative_execution.m"
            break;
#line 716 "declarative_execution.m"
          case (MR_Integer) 3:
#line 730 "declarative_execution.m"
            {
#line 730 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_31_31;

#line 730 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 730 "declarative_execution.m"
              mdb__declarative_execution__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 730 "declarative_execution.m"
            }
#line 716 "declarative_execution.m"
            break;
#line 716 "declarative_execution.m"
          case (MR_Integer) 4:
#line 731 "declarative_execution.m"
            {
#line 731 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_32_32;
#line 731 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_33_33;

#line 731 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 731 "declarative_execution.m"
              mdb__declarative_execution__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 731 "declarative_execution.m"
              mdb__declarative_execution__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 731 "declarative_execution.m"
            }
#line 716 "declarative_execution.m"
            break;
#line 716 "declarative_execution.m"
          case (MR_Integer) 5:
#line 734 "declarative_execution.m"
            {
#line 734 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Prec_34 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 734 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Status_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 734 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));

#line 738 "declarative_execution.m"
#line 738 "declarative_execution.m"
              switch (mdb__declarative_execution__Status_36) {
#line 738 "declarative_execution.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 738 "declarative_execution.m"
                case (MR_Integer) 1:
#line 736 "declarative_execution.m"
                  {
#line 737 "declarative_execution.m"
                    {
#line 737 "declarative_execution.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[11])));
                    }
#line 736 "declarative_execution.m"
                  }
#line 738 "declarative_execution.m"
                  break;
#line 738 "declarative_execution.m"
                case (MR_Integer) 0:
#line 738 "declarative_execution.m"
                case (MR_Integer) 2:
#line 742 "declarative_execution.m"
                  mdb__declarative_execution__Next_6 = mdb__declarative_execution__Prec_34;
#line 738 "declarative_execution.m"
                  break;
#line 738 "declarative_execution.m"
              }
#line 734 "declarative_execution.m"
            }
#line 716 "declarative_execution.m"
            break;
#line 716 "declarative_execution.m"
          case (MR_Integer) 6:
#line 745 "declarative_execution.m"
            {
#line 745 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_37_37;
#line 745 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_38_38;

#line 745 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 745 "declarative_execution.m"
              mdb__declarative_execution__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 745 "declarative_execution.m"
              mdb__declarative_execution__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 745 "declarative_execution.m"
            }
#line 716 "declarative_execution.m"
            break;
#line 716 "declarative_execution.m"
          case (MR_Integer) 7:
#line 747 "declarative_execution.m"
            {
#line 747 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Cond_40 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 747 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_74_74;
#line 747 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_39_39 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 747 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 748 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_42_42;
#line 748 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_43_43;

#line 748 "declarative_execution.m"
              {
#line 748 "declarative_execution.m"
                mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Cond_40, &mdb__declarative_execution__V_74_74);
              }
#line 748 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 1));
#line 748 "declarative_execution.m"
              mdb__declarative_execution__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 2)));
#line 748 "declarative_execution.m"
              mdb__declarative_execution__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 3)));
#line 747 "declarative_execution.m"
            }
#line 716 "declarative_execution.m"
            break;
#line 716 "declarative_execution.m"
          case (MR_Integer) 8:
#line 762 "declarative_execution.m"
            {
#line 763 "declarative_execution.m"
              {
#line 763 "declarative_execution.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[12])));
              }
#line 762 "declarative_execution.m"
            }
#line 716 "declarative_execution.m"
            break;
#line 716 "declarative_execution.m"
          case (MR_Integer) 9:
#line 750 "declarative_execution.m"
            {
#line 750 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Neg_45 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 750 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_73_73;
#line 750 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_44_44 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 750 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_46_46 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 751 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_47_47;
#line 751 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_48_48;

#line 751 "declarative_execution.m"
              {
#line 751 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_45, &mdb__declarative_execution__V_73_73);
              }
#line 751 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 1));
#line 751 "declarative_execution.m"
              mdb__declarative_execution__V_47_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 2)));
#line 751 "declarative_execution.m"
              mdb__declarative_execution__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 3)));
#line 750 "declarative_execution.m"
            }
#line 716 "declarative_execution.m"
            break;
#line 716 "declarative_execution.m"
          case (MR_Integer) 10:
#line 753 "declarative_execution.m"
            {
#line 753 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_72_72;
#line 753 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Neg_82 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 753 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 753 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_50_50 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 754 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_51_51;
#line 754 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_52_52;

#line 754 "declarative_execution.m"
              {
#line 754 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_82, &mdb__declarative_execution__V_72_72);
              }
#line 754 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 1));
#line 754 "declarative_execution.m"
              mdb__declarative_execution__V_51_51 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 2)));
#line 754 "declarative_execution.m"
              mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 3)));
#line 753 "declarative_execution.m"
            }
#line 716 "declarative_execution.m"
            break;
#line 716 "declarative_execution.m"
        }
#line 716 "declarative_execution.m"
        break;
#line 716 "declarative_execution.m"
    }
#line 716 "declarative_execution.m"
    return mdb__declarative_execution__Next_6;
#line 716 "declarative_execution.m"
  }
#line 343 "declarative_execution.m"
}

#line 335 "declarative_execution.m"
MR_Box MR_CALL 
mdb__declarative_execution__step_left_in_contour_2_f_0(
#line 335 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100,
#line 335 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 335 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 335 "declarative_execution.m"
{
#line 614 "declarative_execution.m"
  {
#line 614 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 614 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Prec_6;

#line 614 "declarative_execution.m"
#line 614 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_5)) {
#line 614 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 614 "declarative_execution.m"
      case (MR_Integer) 0:
#line 647 "declarative_execution.m"
        {
#line 649 "declarative_execution.m"
          {
#line 649 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[7])));
          }
#line 647 "declarative_execution.m"
        }
#line 614 "declarative_execution.m"
        break;
#line 614 "declarative_execution.m"
      case (MR_Integer) 1:
#line 614 "declarative_execution.m"
        {
#line 614 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 614 "declarative_execution.m"
          MR_Word mdb__declarative_execution__CallNode_15;
#line 614 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 614 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 614 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 614 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 614 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 614 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 614 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
#line 616 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_82_82;
#line 616 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_83_83;
#line 616 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_84_84;
#line 616 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_85_85;
#line 616 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_86_86;
#line 616 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_87_87;
#line 616 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_88_88;
#line 616 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_89_89;
#line 616 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_90_90;

#line 615 "declarative_execution.m"
          {
#line 615 "declarative_execution.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, &mdb__declarative_execution__CallNode_15);
          }
#line 616 "declarative_execution.m"
          mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 0));
#line 616 "declarative_execution.m"
          mdb__declarative_execution__V_82_82 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 1));
#line 616 "declarative_execution.m"
          mdb__declarative_execution__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 2)));
#line 616 "declarative_execution.m"
          mdb__declarative_execution__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 3)));
#line 616 "declarative_execution.m"
          mdb__declarative_execution__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 4)));
#line 616 "declarative_execution.m"
          mdb__declarative_execution__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 5)));
#line 616 "declarative_execution.m"
          mdb__declarative_execution__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 6)));
#line 616 "declarative_execution.m"
          mdb__declarative_execution__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 7)));
#line 616 "declarative_execution.m"
          mdb__declarative_execution__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 8)));
#line 616 "declarative_execution.m"
          mdb__declarative_execution__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 9)));
#line 614 "declarative_execution.m"
        }
#line 614 "declarative_execution.m"
        break;
#line 614 "declarative_execution.m"
      case (MR_Integer) 2:
#line 672 "declarative_execution.m"
        {
#line 672 "declarative_execution.m"
          mdb__declarative_execution__find_prev_contour_3_p_1(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Node_5, &mdb__declarative_execution__Prec_6);
        }
#line 614 "declarative_execution.m"
        break;
#line 614 "declarative_execution.m"
      case (MR_Integer) 3:
#line 614 "declarative_execution.m"
#line 614 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) {
#line 614 "declarative_execution.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 614 "declarative_execution.m"
          case (MR_Integer) 0:
#line 689 "declarative_execution.m"
            {
#line 689 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Call_108 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 689 "declarative_execution.m"
              MR_Word mdb__declarative_execution__CallNode_113;
#line 689 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_107_107 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 689 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_109_109 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 689 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 689 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_111_111 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 689 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 691 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_151_151;
#line 691 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_152_152;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_153_153;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_154_154;
#line 691 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_155_155;
#line 691 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_156_156;
#line 691 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_157_157;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_158_158;
#line 691 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_159_159;

#line 690 "declarative_execution.m"
              {
#line 690 "declarative_execution.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_108, &mdb__declarative_execution__CallNode_113);
              }
#line 691 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 0));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_151_151 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 1));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 2)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 3)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 4)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 5)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 6)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_157_157 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 7)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 8)));
#line 691 "declarative_execution.m"
              mdb__declarative_execution__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 9)));
#line 689 "declarative_execution.m"
            }
#line 614 "declarative_execution.m"
            break;
#line 614 "declarative_execution.m"
          case (MR_Integer) 1:
#line 618 "declarative_execution.m"
            {
#line 618 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Call_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 618 "declarative_execution.m"
              MR_Word mdb__declarative_execution__CallNode_80;
#line 618 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_16_16 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 618 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_17_17 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 618 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 618 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 618 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 618 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
#line 620 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_91_91;
#line 620 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_92_92;
#line 620 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_93_93;
#line 620 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_94_94;
#line 620 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_95_95;
#line 620 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_96_96;
#line 620 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_97_97;
#line 620 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_98_98;
#line 620 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_99_99;

#line 619 "declarative_execution.m"
              {
#line 619 "declarative_execution.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_79, &mdb__declarative_execution__CallNode_80);
              }
#line 620 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 0));
#line 620 "declarative_execution.m"
              mdb__declarative_execution__V_91_91 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 1));
#line 620 "declarative_execution.m"
              mdb__declarative_execution__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 2)));
#line 620 "declarative_execution.m"
              mdb__declarative_execution__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 3)));
#line 620 "declarative_execution.m"
              mdb__declarative_execution__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 4)));
#line 620 "declarative_execution.m"
              mdb__declarative_execution__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 5)));
#line 620 "declarative_execution.m"
              mdb__declarative_execution__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 6)));
#line 620 "declarative_execution.m"
              mdb__declarative_execution__V_97_97 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 7)));
#line 620 "declarative_execution.m"
              mdb__declarative_execution__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 8)));
#line 620 "declarative_execution.m"
              mdb__declarative_execution__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 9)));
#line 618 "declarative_execution.m"
            }
#line 614 "declarative_execution.m"
            break;
#line 614 "declarative_execution.m"
          case (MR_Integer) 2:
#line 622 "declarative_execution.m"
            {
#line 622 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_22_22;

#line 622 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 622 "declarative_execution.m"
              mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 622 "declarative_execution.m"
            }
#line 614 "declarative_execution.m"
            break;
#line 614 "declarative_execution.m"
          case (MR_Integer) 3:
#line 624 "declarative_execution.m"
            {
#line 624 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_23_23;

#line 624 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 624 "declarative_execution.m"
              mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 624 "declarative_execution.m"
            }
#line 614 "declarative_execution.m"
            break;
#line 614 "declarative_execution.m"
          case (MR_Integer) 4:
#line 626 "declarative_execution.m"
            {
#line 626 "declarative_execution.m"
              MR_Box mdb__declarative_execution__FirstDisj_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 626 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_78_78;
#line 626 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 626 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 627 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_27_27;

#line 627 "declarative_execution.m"
              {
#line 627 "declarative_execution.m"
                mdb__declarative_execution__first_disj_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__FirstDisj_26, &mdb__declarative_execution__V_78_78);
              }
#line 627 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_78_78, (MR_Integer) 1));
#line 627 "declarative_execution.m"
              mdb__declarative_execution__V_27_27 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_78_78, (MR_Integer) 2)));
#line 626 "declarative_execution.m"
            }
#line 614 "declarative_execution.m"
            break;
#line 614 "declarative_execution.m"
          case (MR_Integer) 5:
#line 629 "declarative_execution.m"
            {
#line 629 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Status_29;
#line 629 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_28_28;

#line 629 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 629 "declarative_execution.m"
              mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 629 "declarative_execution.m"
              mdb__declarative_execution__Status_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 633 "declarative_execution.m"
#line 633 "declarative_execution.m"
              switch (mdb__declarative_execution__Status_29) {
#line 633 "declarative_execution.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 633 "declarative_execution.m"
                case (MR_Integer) 1:
#line 631 "declarative_execution.m"
                  {
#line 632 "declarative_execution.m"
                    {
#line 632 "declarative_execution.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[8])));
                    }
#line 631 "declarative_execution.m"
                  }
#line 633 "declarative_execution.m"
                  break;
#line 633 "declarative_execution.m"
                case (MR_Integer) 0:
#line 635 "declarative_execution.m"
                  {
#line 635 "declarative_execution.m"
                  }
#line 633 "declarative_execution.m"
                  break;
#line 633 "declarative_execution.m"
                case (MR_Integer) 2:
#line 634 "declarative_execution.m"
                  {
#line 634 "declarative_execution.m"
                  }
#line 633 "declarative_execution.m"
                  break;
#line 633 "declarative_execution.m"
              }
#line 629 "declarative_execution.m"
            }
#line 614 "declarative_execution.m"
            break;
#line 614 "declarative_execution.m"
          case (MR_Integer) 6:
#line 639 "declarative_execution.m"
            {
#line 639 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_30_30;
#line 639 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_31_31;

#line 639 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 639 "declarative_execution.m"
              mdb__declarative_execution__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 639 "declarative_execution.m"
              mdb__declarative_execution__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 639 "declarative_execution.m"
            }
#line 614 "declarative_execution.m"
            break;
#line 614 "declarative_execution.m"
          case (MR_Integer) 7:
#line 641 "declarative_execution.m"
            {
#line 641 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Cond_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 641 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_74_74;
#line 641 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 641 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 642 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_35_35;
#line 642 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_36_36;

#line 642 "declarative_execution.m"
              {
#line 642 "declarative_execution.m"
                mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Cond_33, &mdb__declarative_execution__V_74_74);
              }
#line 642 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 1));
#line 642 "declarative_execution.m"
              mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 2)));
#line 642 "declarative_execution.m"
              mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 3)));
#line 641 "declarative_execution.m"
            }
#line 614 "declarative_execution.m"
            break;
#line 614 "declarative_execution.m"
          case (MR_Integer) 8:
#line 651 "declarative_execution.m"
            {
#line 651 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Status_81;
#line 651 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_52_52;

#line 651 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 651 "declarative_execution.m"
              mdb__declarative_execution__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 651 "declarative_execution.m"
              mdb__declarative_execution__Status_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 656 "declarative_execution.m"
#line 656 "declarative_execution.m"
              switch (mdb__declarative_execution__Status_81) {
#line 656 "declarative_execution.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 656 "declarative_execution.m"
                case (MR_Integer) 1:
#line 656 "declarative_execution.m"
                case (MR_Integer) 0:
#line 659 "declarative_execution.m"
                  {
#line 662 "declarative_execution.m"
                    {
#line 662 "declarative_execution.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[9])));
                    }
#line 659 "declarative_execution.m"
                  }
#line 656 "declarative_execution.m"
                  break;
#line 656 "declarative_execution.m"
                case (MR_Integer) 2:
#line 653 "declarative_execution.m"
                  {
#line 653 "declarative_execution.m"
                  }
#line 656 "declarative_execution.m"
                  break;
#line 656 "declarative_execution.m"
              }
#line 651 "declarative_execution.m"
            }
#line 614 "declarative_execution.m"
            break;
#line 614 "declarative_execution.m"
          case (MR_Integer) 9:
#line 644 "declarative_execution.m"
            {
#line 644 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Neg_38 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 644 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_73_73;
#line 644 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 644 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_39_39 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 645 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_40_40;
#line 645 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_41_41;

#line 645 "declarative_execution.m"
              {
#line 645 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_38, &mdb__declarative_execution__V_73_73);
              }
#line 645 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 1));
#line 645 "declarative_execution.m"
              mdb__declarative_execution__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 2)));
#line 645 "declarative_execution.m"
              mdb__declarative_execution__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 3)));
#line 644 "declarative_execution.m"
            }
#line 614 "declarative_execution.m"
            break;
#line 614 "declarative_execution.m"
          case (MR_Integer) 10:
#line 697 "declarative_execution.m"
            {
#line 697 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Neg_187 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 697 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_216_216;
#line 697 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_186_186 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 697 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_188_188 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 698 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_189_189;
#line 698 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_190_190;

#line 698 "declarative_execution.m"
              {
#line 698 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_187, &mdb__declarative_execution__V_216_216);
              }
#line 698 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 1));
#line 698 "declarative_execution.m"
              mdb__declarative_execution__V_189_189 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 2)));
#line 698 "declarative_execution.m"
              mdb__declarative_execution__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 3)));
#line 697 "declarative_execution.m"
            }
#line 614 "declarative_execution.m"
            break;
#line 614 "declarative_execution.m"
        }
#line 614 "declarative_execution.m"
        break;
#line 614 "declarative_execution.m"
    }
#line 614 "declarative_execution.m"
    return mdb__declarative_execution__Prec_6;
#line 614 "declarative_execution.m"
  }
#line 335 "declarative_execution.m"
}

#line 319 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__trace_node_from_id_3_p_0(
#line 319 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4,
#line 319 "declarative_execution.m"
  MR_Box mdb__declarative_execution__HeadVar__1_1,
#line 319 "declarative_execution.m"
  MR_Box mdb__declarative_execution__HeadVar__2_2,
#line 319 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
#line 319 "declarative_execution.m"
{
#line 15784 "mdb.declarative_execution.c"
  {
#line 15786 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;
#line 15788 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15790 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_HeadVar__3_3;

#line 15793 "mdb.declarative_execution.c"
    {
#line 15795 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4), mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__HeadVar__2_2, &mdb__declarative_execution__conv1_HeadVar__3_3);
    }
#line 15798 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 15800 "mdb.declarative_execution.c"
      {
#line 15802 "mdb.declarative_execution.c"
        *mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv1_HeadVar__3_3);
#line 15804 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 15806 "mdb.declarative_execution.c"
      }
#line 15808 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 15810 "mdb.declarative_execution.c"
  }
#line 319 "declarative_execution.m"
}

#line 284 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(
#line 284 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_23,
#line 284 "declarative_execution.m"
  MR_Word mdb__declarative_execution__CallNode_3,
#line 284 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__MaybeProcDefnRep_4)
#line 284 "declarative_execution.m"
{
#line 481 "declarative_execution.m"
  {
#line 481 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 481 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 7)));
#line 482 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 0));
#line 482 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 1));
#line 482 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 2)));
#line 482 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 3)));
#line 482 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 4)));
#line 482 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 5)));
#line 482 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 6)));
#line 482 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 8)));
#line 482 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 9)));
#line 502 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_6;

#line 516 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_LabelLayout * CallLabelLayout;
	const MR_ProcLayout * ProcLayout;
	MR_bool SUCCESS_INDICATOR;

	CallLabelLayout = (const MR_LabelLayout *) mdb__declarative_execution__Label_5 ;
		{
#line 516 "declarative_execution.m"

    ProcLayout = CallLabelLayout->MR_sll_entry;
    if (ProcLayout->MR_sle_body_bytes != NULL) {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p success\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("call_node_bytecode_layout: %p failure\n", CallLabelLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 15878 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__declarative_execution__ProcLayout_6  = (MR_Box) ProcLayout;
#line 516 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 502 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 484 "declarative_execution.m"
      {
#line 489 "declarative_execution.m"
        MR_Word mdb__declarative_execution__ProcDefnRep_7;

#line 555 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_6 ;
		{
#line 555 "declarative_execution.m"

    ProcDefnRep = MR_lookup_proc_defn_rep(ProcLayout);
    if (ProcDefnRep != 0) {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p success\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_TRUE;
    } else {
#ifdef MR_DEBUG_PROC_REP
        printf("have_cached_proc_defn_rep: %p failure\n", ProcLayout);
#endif
        SUCCESS_INDICATOR = MR_FALSE;
    }

#line 15920 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__declarative_execution__ProcDefnRep_7  = ProcDefnRep;
#line 555 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 489 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 488 "declarative_execution.m"
          {
#line 488 "declarative_execution.m"
            MR_Word base;
#line 488 "declarative_execution.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 488 "declarative_execution.m"
            *mdb__declarative_execution__MaybeProcDefnRep_4 = base;
#line 488 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcDefnRep_7));
#line 488 "declarative_execution.m"
          }
#line 489 "declarative_execution.m"
        else
#line 490 "declarative_execution.m"
          {
#line 490 "declarative_execution.m"
            MR_Box mdb__declarative_execution__ByteCodeBytes_8;
#line 496 "declarative_execution.m"
            MR_Word mdb__declarative_execution__ProcDefnRep_12;

#line 490 "declarative_execution.m"
            {
#line 490 "declarative_execution.m"
              mdb__declarative_execution__ByteCodeBytes_8 = mdbcomp__rtti_access__proc_bytecode_bytes_1_f_0(mdb__declarative_execution__ProcLayout_6);
            }
#line 492 "declarative_execution.m"
            {
#line 492 "declarative_execution.m"
              mdb__declarative_execution__succeeded = mdbcomp__program_representation__trace_read_proc_defn_rep_3_p_0(mdb__declarative_execution__ByteCodeBytes_8, mdb__declarative_execution__Label_5, &mdb__declarative_execution__ProcDefnRep_12);
            }
#line 496 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 494 "declarative_execution.m"
              {
#line 592 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_6 ;
	ProcDefnRep =  mdb__declarative_execution__ProcDefnRep_12 ;
		{
#line 592 "declarative_execution.m"

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_defn_rep: %p %x\n", ProcLayout, ProcDefnRep);
#endif
    MR_insert_proc_defn_rep(ProcLayout, ProcDefnRep);

#line 15984 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
#line 592 "declarative_execution.m"
}
#line 495 "declarative_execution.m"
                {
#line 495 "declarative_execution.m"
                  MR_Word base;
#line 495 "declarative_execution.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 495 "declarative_execution.m"
                  *mdb__declarative_execution__MaybeProcDefnRep_4 = base;
#line 495 "declarative_execution.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcDefnRep_12));
#line 495 "declarative_execution.m"
                }
#line 494 "declarative_execution.m"
              }
#line 496 "declarative_execution.m"
            else
#line 497 "declarative_execution.m"
              {
#line 497 "declarative_execution.m"
                {
#line 497 "declarative_execution.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[6])));
#line 497 "declarative_execution.m"
                  return;
                }
#line 497 "declarative_execution.m"
              }
#line 490 "declarative_execution.m"
          }
#line 484 "declarative_execution.m"
      }
#line 502 "declarative_execution.m"
    else
#line 503 "declarative_execution.m"
      *mdb__declarative_execution__MaybeProcDefnRep_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 481 "declarative_execution.m"
  }
#line 284 "declarative_execution.m"
}

#line 281 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__get_pred_attributes_5_p_0(
#line 281 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ProcId_6,
#line 281 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Module_7,
#line 281 "declarative_execution.m"
  MR_String * mdb__declarative_execution__Name_8,
#line 281 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__Arity_9,
#line 281 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__PredOrFunc_10)
#line 281 "declarative_execution.m"
{
#line 471 "declarative_execution.m"
  {
#line 471 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 471 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__ProcId_6)) == (MR_mktag((MR_Integer) 0))))
#line 471 "declarative_execution.m"
      {
#line 471 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_11_11;
#line 471 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_12_12;

#line 471 "declarative_execution.m"
        *mdb__declarative_execution__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 0)));
#line 471 "declarative_execution.m"
        *mdb__declarative_execution__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 1)));
#line 471 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 2)));
#line 471 "declarative_execution.m"
        *mdb__declarative_execution__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 3)));
#line 471 "declarative_execution.m"
        *mdb__declarative_execution__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 4)));
#line 471 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 5)));
#line 471 "declarative_execution.m"
      }
#line 471 "declarative_execution.m"
    else
#line 473 "declarative_execution.m"
      {
#line 473 "declarative_execution.m"
        MR_Word mdb__declarative_execution__SpecialId_13;
#line 473 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_14_14;
#line 473 "declarative_execution.m"
        MR_String mdb__declarative_execution__V_15_15;
#line 473 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_16_16;
#line 473 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_17_17;

#line 473 "declarative_execution.m"
        *mdb__declarative_execution__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 0)));
#line 473 "declarative_execution.m"
        mdb__declarative_execution__SpecialId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 1)));
#line 473 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 2)));
#line 473 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 3)));
#line 473 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 4)));
#line 473 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 5)));
#line 474 "declarative_execution.m"
        *mdb__declarative_execution__PredOrFunc_10 = (MR_Integer) 0;
#line 475 "declarative_execution.m"
        {
#line 475 "declarative_execution.m"
          *mdb__declarative_execution__Arity_9 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(mdb__declarative_execution__SpecialId_13);
        }
#line 476 "declarative_execution.m"
        {
#line 476 "declarative_execution.m"
          *mdb__declarative_execution__Name_8 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(mdb__declarative_execution__SpecialId_13);
        }
#line 473 "declarative_execution.m"
      }
#line 471 "declarative_execution.m"
  }
#line 281 "declarative_execution.m"
}

#line 275 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__get_trace_call_atom_1_f_1(
#line 275 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_15,
#line 275 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 275 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Atom_13)
#line 275 "declarative_execution.m"
{
#line 606 "declarative_execution.m"
  {
#line 606 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 606 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_5;
#line 606 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_10;
#line 606 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_14;
#line 605 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3;
#line 605 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4;
#line 605 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_6_6;
#line 605 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7;
#line 605 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8;
#line 605 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 605 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 605 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;

#line 605 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 605 "declarative_execution.m"
      {
#line 605 "declarative_execution.m"
        mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 605 "declarative_execution.m"
        mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 605 "declarative_execution.m"
        mdb__declarative_execution__AtomArgs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 605 "declarative_execution.m"
        mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 605 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 605 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 605 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 605 "declarative_execution.m"
        mdb__declarative_execution__Label_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 605 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
#line 605 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));
#line 607 "declarative_execution.m"
        {
#line 607 "declarative_execution.m"
          mdb__declarative_execution__ProcLayout_14 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_10);
        }
#line 608 "declarative_execution.m"
        {
#line 608 "declarative_execution.m"
          MR_Word base;
#line 608 "declarative_execution.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 608 "declarative_execution.m"
          *mdb__declarative_execution__Atom_13 = base;
#line 608 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_14));
#line 608 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_5));
#line 608 "declarative_execution.m"
        }
#line 608 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 605 "declarative_execution.m"
      }
#line 606 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 606 "declarative_execution.m"
  }
#line 275 "declarative_execution.m"
}

#line 274 "declarative_execution.m"
MR_Word MR_CALL 
mdb__declarative_execution__get_trace_call_atom_1_f_0(
#line 274 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_15,
#line 274 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 274 "declarative_execution.m"
{
#line 606 "declarative_execution.m"
  {
#line 606 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 606 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Atom_13;
#line 606 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 606 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 606 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_14;
#line 605 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 605 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 605 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 605 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 605 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 605 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 605 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
#line 605 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));

#line 607 "declarative_execution.m"
    {
#line 607 "declarative_execution.m"
      mdb__declarative_execution__ProcLayout_14 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_10);
    }
#line 608 "declarative_execution.m"
    {
#line 608 "declarative_execution.m"
      mdb__declarative_execution__Atom_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 608 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_13, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_14));
#line 608 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_13, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_5));
#line 608 "declarative_execution.m"
    }
#line 606 "declarative_execution.m"
    return mdb__declarative_execution__Atom_13;
#line 606 "declarative_execution.m"
  }
#line 274 "declarative_execution.m"
}

#line 271 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_1_f_1(
#line 271 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_13,
#line 271 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 271 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Atom_11)
#line 271 "declarative_execution.m"
{
#line 601 "declarative_execution.m"
  {
#line 601 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 601 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_6;
#line 601 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_8;
#line 601 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_12;
#line 601 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3;
#line 601 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4;
#line 601 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_5_5;
#line 601 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7;
#line 601 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_9_9;
#line 601 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;

#line 601 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 601 "declarative_execution.m"
      {
#line 601 "declarative_execution.m"
        mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 601 "declarative_execution.m"
        mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 601 "declarative_execution.m"
        mdb__declarative_execution__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 601 "declarative_execution.m"
        mdb__declarative_execution__AtomArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 601 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 601 "declarative_execution.m"
        mdb__declarative_execution__Label_8 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 601 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 601 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 602 "declarative_execution.m"
        {
#line 602 "declarative_execution.m"
          mdb__declarative_execution__ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_8);
        }
#line 603 "declarative_execution.m"
        {
#line 603 "declarative_execution.m"
          MR_Word base;
#line 603 "declarative_execution.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "declarative_execution.m"
          *mdb__declarative_execution__Atom_11 = base;
#line 603 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_12));
#line 603 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_6));
#line 603 "declarative_execution.m"
        }
#line 603 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 601 "declarative_execution.m"
      }
#line 601 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 601 "declarative_execution.m"
  }
#line 271 "declarative_execution.m"
}

#line 270 "declarative_execution.m"
MR_Word MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_1_f_0(
#line 270 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_13,
#line 270 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 270 "declarative_execution.m"
{
#line 601 "declarative_execution.m"
  {
#line 601 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 601 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Atom_11;
#line 601 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 601 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_8 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 601 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_12;
#line 601 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 601 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 601 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 601 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 601 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 601 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));

#line 602 "declarative_execution.m"
    {
#line 602 "declarative_execution.m"
      mdb__declarative_execution__ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_8);
    }
#line 603 "declarative_execution.m"
    {
#line 603 "declarative_execution.m"
      mdb__declarative_execution__Atom_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 603 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_11, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_12));
#line 603 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_11, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_6));
#line 603 "declarative_execution.m"
    }
#line 601 "declarative_execution.m"
    return mdb__declarative_execution__Atom_11;
#line 601 "declarative_execution.m"
  }
#line 270 "declarative_execution.m"
}

void mercury__mdb__declarative_execution__init(void)
{
}

void mercury__mdb__declarative_execution__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_event_number_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_sequence_number_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0);
	MR_register_type_ctor_info(&mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_which_headvars_0);
}

void mercury__mdb__declarative_execution__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdb.declarative_execution. */
