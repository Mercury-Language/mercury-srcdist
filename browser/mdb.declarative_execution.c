/*
** Automatically generated from `declarative_execution.m'
** by the Mercury compiler,
** version rotd-2015-07-01
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

#line 873 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 873 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 873 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 873 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3);

#line 1382 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 1382 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1382 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1382 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3);

#line 1559 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(
#line 1559 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1559 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ArgNum_2,
#line 1559 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1559 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__UserArgNum_4);

#line 1536 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(
#line 1536 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1536 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SearchUserHeadVarNum_2,
#line 1536 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1536 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__ArgNum_4);

#line 1460 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__convert_node_2_p_0(
#line 1460 "declarative_execution.m"
  MR_Word mdb__declarative_execution__N1_1,
#line 1460 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__N2_2);

#line 1448 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_id_to_key_2_p_0(
#line 1448 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_1,
#line 1448 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Key_2);

#line 1434 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_map_4_p_0(
#line 1434 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_5,
#line 1434 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_6,
#line 1434 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3,
#line 1434 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Map_8);

#line 1349 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0(
#line 1349 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_5,
#line 1349 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_6,
#line 1349 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_7,
#line 1349 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__4_4);

#line 1337 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_value_5_p_0(
#line 1337 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_6,
#line 1337 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_7,
#line 1337 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Val_8,
#line 1337 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_9,
#line 1337 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__5_5);

#line 1324 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__init_trace_atom_args_0_f_0(void);

#line 1312 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__null_trace_node_id_1_p_0(
#line 1312 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Id_1);

#line 1303 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_fail_node_3_f_0(
#line 1303 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1303 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1303 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1294 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_succ_node_3_f_0(
#line 1294 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1294 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1294 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1286 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_node_2_f_0(
#line 1286 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1286 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1277 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_else_node_3_f_0(
#line 1277 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1277 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1277 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1268 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_then_node_3_f_0(
#line 1268 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1268 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1268 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1260 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_cond_node_2_f_0(
#line 1260 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1260 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1244 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_later_disj_node_4_f_0(
#line 1244 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_6,
#line 1244 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1244 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_8,
#line 1244 "declarative_execution.m"
  MR_Word mdb__declarative_execution__PrevDisj_9);

#line 1235 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_first_disj_node_2_f_0(
#line 1235 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1235 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1227 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_switch_node_2_f_0(
#line 1227 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1227 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1214 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__construct_excp_node_8_p_0(
#line 1214 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_9,
#line 1214 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_10,
#line 1214 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_11,
#line 1214 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exception_12,
#line 1214 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_13,
#line 1214 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_14,
#line 1214 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_15,
#line 1214 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Excp_16);

#line 1204 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_fail_node_6_f_0(
#line 1204 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_8,
#line 1204 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_9,
#line 1204 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Redo_10,
#line 1204 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_11,
#line 1204 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_12,
#line 1204 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_13);

#line 1195 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_redo_node_5_f_0(
#line 1195 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1195 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exit_8,
#line 1195 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Event_9,
#line 1195 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_10,
#line 1195 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_11);

#line 1183 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_exit_node_8_f_0(
#line 1183 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_10,
#line 1183 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_11,
#line 1183 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_12,
#line 1183 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_13,
#line 1183 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1183 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_15,
#line 1183 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
#line 1183 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_17);

#line 1177 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_no_maybe_label_0_f_0(void);

#line 1171 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_yes_maybe_label_1_f_0(
#line 1171 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_3);

#line 1148 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_call_node_9_f_0(
#line 1148 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_11,
#line 1148 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_12,
#line 1148 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SeqNo_13,
#line 1148 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1148 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
#line 1148 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
#line 1148 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_17,
#line 1148 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
#line 1148 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_19);

#line 1132 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__print_trace_node_4_p_0(
#line 1132 "declarative_execution.m"
  MR_Word mdb__declarative_execution__OutStr_5,
#line 1132 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_6);

#line 1116 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__find_prev_contour_store_2_f_0(
#line 1116 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1116 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_5);

#line 1103 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__step_left_in_contour_store_2_f_0(
#line 1103 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1103 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5);

#line 1090 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_first_disj_2_p_0(
#line 1090 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1090 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__2_2);

#line 1077 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_call_3_p_0(
#line 1077 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_1,
#line 1077 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1077 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Call_3);

#line 1062 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_seqno_3_p_0(
#line 1062 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_4,
#line 1062 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 1062 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__SeqNo_6);

#line 1037 "declarative_execution.m"
static MR_String MR_CALL 
mdb__declarative_execution__trace_node_path_1_f_0(
#line 1037 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_3);

#line 1018 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__trace_node_port_1_f_0(
#line 1018 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1);

#line 992 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__neg_node_set_status_2_f_0(
#line 992 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg0_4,
#line 992 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5);

#line 976 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__cond_node_set_status_2_f_0(
#line 976 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond0_4,
#line 976 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5);

#line 957 "declarative_execution.m"
static MR_Integer MR_CALL 
mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0(
#line 957 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3);

#line 939 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0(
#line 939 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 939 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IdealDepth_5);

#line 922 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_set_last_interface_2_f_0(
#line 922 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 922 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Last_5);

#line 909 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_get_last_interface_1_f_0(
#line 909 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3);

#line 892 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__search_trace_node_store_3_p_0(
#line 892 "declarative_execution.m"
  MR_Word mdb__declarative_execution___Store_1,
#line 892 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_2,
#line 892 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_3);

#line 778 "declarative_execution.m"
static MR_Box MR_CALL 
mdb__declarative_execution__step_over_redo_or_call_3_f_0(
#line 778 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24,
#line 778 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_5,
#line 778 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Call_6,
#line 778 "declarative_execution.m"
  MR_Box mdb__declarative_execution__MaybeRedo_7);

#line 691 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_1(
#line 691 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67,
#line 691 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 691 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 691 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__OnContour_6);

#line 595 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__cache_proc_defn_rep_2_p_0(
#line 595 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 595 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ProcDefnRep_2);

#line 556 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0(
#line 556 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 556 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__ProcDefnRep_2);

#line 517 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__call_node_bytecode_layout_2_p_0(
#line 517 "declarative_execution.m"
  MR_Box mdb__declarative_execution__CallLabelLayout_1,
#line 517 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__ProcLayout_2);

#line 1501 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0_1(
#line 1501 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1501 "declarative_execution.m"
  MR_Box mdb__declarative_execution__wrapper_arg_1);

#line 1501 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0_1(
#line 1501 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1501 "declarative_execution.m"
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



#include "mdb.declarative_execution.mh"
#include "mdb.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.program_representation.mh"
#include "mdbcomp.rtti_access.mh"
#include "mdbcomp.rtti_access.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "array.mh"
#include "array.mh"

#line 911 "declarative_execution.m"
MR_Word 
MR_DD_call_node_get_last_interface(
#line 911 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 911 "declarative_execution.m"
{
#line 911 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_get_last_interface_1_f_0((MR_Word) mdb__declarative_execution__Call_3);
	return ret_value;
}

#line 925 "declarative_execution.m"
MR_Word 
MR_DD_call_node_set_last_interface(
#line 925 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 925 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Last_5)
#line 925 "declarative_execution.m"
{
#line 925 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_set_last_interface_2_f_0((MR_Word) mdb__declarative_execution__Call0_4, (MR_Word) mdb__declarative_execution__Last_5);
	return ret_value;
}

#line 942 "declarative_execution.m"
MR_Word 
MR_DD_call_node_update_implicit_tree_info(
#line 942 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 942 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IdealDepth_5)
#line 942 "declarative_execution.m"
{
#line 942 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0((MR_Word) mdb__declarative_execution__Call0_4, (MR_Integer) mdb__declarative_execution__IdealDepth_5);
	return ret_value;
}

#line 959 "declarative_execution.m"
MR_Integer 
MR_DD_get_implicit_tree_ideal_depth(
#line 959 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 959 "declarative_execution.m"
{
#line 959 "declarative_execution.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0((MR_Word) mdb__declarative_execution__Call_3);
	return ret_value;
}

#line 979 "declarative_execution.m"
MR_Word 
MR_DD_cond_node_set_status(
#line 979 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond0_4,
#line 979 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 979 "declarative_execution.m"
{
#line 979 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__cond_node_set_status_2_f_0((MR_Word) mdb__declarative_execution__Cond0_4, (MR_Word) mdb__declarative_execution__Status_5);
	return ret_value;
}

#line 995 "declarative_execution.m"
MR_Word 
MR_DD_neg_node_set_status(
#line 995 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg0_4,
#line 995 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 995 "declarative_execution.m"
{
#line 995 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__neg_node_set_status_2_f_0((MR_Word) mdb__declarative_execution__Neg0_4, (MR_Word) mdb__declarative_execution__Status_5);
	return ret_value;
}

#line 1019 "declarative_execution.m"
MR_Word 
MR_DD_trace_node_port(
#line 1019 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 1019 "declarative_execution.m"
{
#line 1019 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__trace_node_port_1_f_0((MR_Word) mdb__declarative_execution__HeadVar__1_1);
	return ret_value;
}

#line 1038 "declarative_execution.m"
MR_String 
MR_DD_trace_node_path(
#line 1038 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_3)
#line 1038 "declarative_execution.m"
{
#line 1038 "declarative_execution.m"
	MR_String ret_value;
	ret_value = (MR_String)mdb__declarative_execution__trace_node_path_1_f_0((MR_Word) mdb__declarative_execution__Node_3);
	return ret_value;
}

#line 1065 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_seqno(
#line 1065 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_4,
#line 1065 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 1065 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__SeqNo_6)
#line 1065 "declarative_execution.m"
{
#line 1065 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_seqno_3_p_0((MR_Word) mdb__declarative_execution__S_4, (MR_Word) mdb__declarative_execution__Node_5, (MR_Integer *) mdb__declarative_execution__SeqNo_6);
	return ret_value;
}

#line 1080 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_call(
#line 1080 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_1,
#line 1080 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1080 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Call_3)
#line 1080 "declarative_execution.m"
{
#line 1080 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_call_3_p_0((MR_Word) mdb__declarative_execution__S_1, (MR_Word) mdb__declarative_execution__HeadVar__2_2, (MR_Word *) mdb__declarative_execution__Call_3);
	return ret_value;
}

#line 1093 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_first_disj(
#line 1093 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1093 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__2_2)
#line 1093 "declarative_execution.m"
{
#line 1093 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_first_disj_2_p_0((MR_Word) mdb__declarative_execution__HeadVar__1_1, (MR_Word *) mdb__declarative_execution__HeadVar__2_2);
	return ret_value;
}

#line 1105 "declarative_execution.m"
MR_Word 
MR_DD_step_left_in_contour(
#line 1105 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1105 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 1105 "declarative_execution.m"
{
#line 1105 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__step_left_in_contour_store_2_f_0((MR_Word) mdb__declarative_execution__Store_4, (MR_Word) mdb__declarative_execution__Node_5);
	return ret_value;
}

#line 1118 "declarative_execution.m"
MR_Word 
MR_DD_find_prev_contour(
#line 1118 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1118 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_5)
#line 1118 "declarative_execution.m"
{
#line 1118 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__find_prev_contour_store_2_f_0((MR_Word) mdb__declarative_execution__Store_4, (MR_Word) mdb__declarative_execution__Id_5);
	return ret_value;
}

#line 1135 "declarative_execution.m"
void 
MR_DD_print_trace_node(
#line 1135 "declarative_execution.m"
  MR_Word mdb__declarative_execution__OutStr_5,
#line 1135 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_6)
#line 1135 "declarative_execution.m"
{
#line 1135 "declarative_execution.m"
	mdb__declarative_execution__print_trace_node_4_p_0((MR_Word) mdb__declarative_execution__OutStr_5, (MR_Word) mdb__declarative_execution__Node_6);
}

#line 1151 "declarative_execution.m"
MR_Word 
MR_DD_construct_call_node(
#line 1151 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_11,
#line 1151 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_12,
#line 1151 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SeqNo_13,
#line 1151 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1151 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
#line 1151 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
#line 1151 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_17,
#line 1151 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
#line 1151 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_19)
#line 1151 "declarative_execution.m"
{
#line 1151 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_17;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_17, mdb__declarative_execution__boxed_Label_17);
	ret_value = (MR_Word)mdb__declarative_execution__construct_call_node_9_f_0((MR_Word) mdb__declarative_execution__Preceding_11, (MR_Word) mdb__declarative_execution__AtomArgs_12, (MR_Integer) mdb__declarative_execution__SeqNo_13, (MR_Integer) mdb__declarative_execution__EventNo_14, (MR_Word) mdb__declarative_execution__AtMaxDepth_15, (MR_Word) mdb__declarative_execution__MaybeReturnLabel_16, mdb__declarative_execution__boxed_Label_17, (MR_Integer) mdb__declarative_execution__IoSeqNum_18, (MR_Integer) mdb__declarative_execution__Suspicion_19);
	return ret_value;
}

#line 1172 "declarative_execution.m"
MR_Word 
MR_DD_make_yes_maybe_label(
#line 1172 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_3)
#line 1172 "declarative_execution.m"
{
#line 1172 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_3, mdb__declarative_execution__boxed_Label_3);
	ret_value = (MR_Word)mdb__declarative_execution__make_yes_maybe_label_1_f_0(mdb__declarative_execution__boxed_Label_3);
	return ret_value;
}

#line 1178 "declarative_execution.m"
MR_Word 
MR_DD_make_no_maybe_label(void)
#line 1178 "declarative_execution.m"
{
#line 1178 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__make_no_maybe_label_0_f_0();
	return ret_value;
}

#line 1186 "declarative_execution.m"
MR_Word 
MR_DD_construct_exit_node(
#line 1186 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_10,
#line 1186 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_11,
#line 1186 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_12,
#line 1186 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_13,
#line 1186 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1186 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_15,
#line 1186 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
#line 1186 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_17)
#line 1186 "declarative_execution.m"
{
#line 1186 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_15;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_15, mdb__declarative_execution__boxed_Label_15);
	ret_value = (MR_Word)mdb__declarative_execution__construct_exit_node_8_f_0((MR_Word) mdb__declarative_execution__Preceding_10, (MR_Word) mdb__declarative_execution__Call_11, (MR_Word) mdb__declarative_execution__MaybeRedo_12, (MR_Word) mdb__declarative_execution__AtomArgs_13, (MR_Integer) mdb__declarative_execution__EventNo_14, mdb__declarative_execution__boxed_Label_15, (MR_Integer) mdb__declarative_execution__IoSeqNum_16, (MR_Integer) mdb__declarative_execution__Suspicion_17);
	return ret_value;
}

#line 1197 "declarative_execution.m"
MR_Word 
MR_DD_construct_redo_node(
#line 1197 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1197 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exit_8,
#line 1197 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Event_9,
#line 1197 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_10,
#line 1197 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_11)
#line 1197 "declarative_execution.m"
{
#line 1197 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_10;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_10, mdb__declarative_execution__boxed_Label_10);
	ret_value = (MR_Word)mdb__declarative_execution__construct_redo_node_5_f_0((MR_Word) mdb__declarative_execution__Preceding_7, (MR_Word) mdb__declarative_execution__Exit_8, (MR_Integer) mdb__declarative_execution__Event_9, mdb__declarative_execution__boxed_Label_10, (MR_Integer) mdb__declarative_execution__Suspicion_11);
	return ret_value;
}

#line 1207 "declarative_execution.m"
MR_Word 
MR_DD_construct_fail_node(
#line 1207 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_8,
#line 1207 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_9,
#line 1207 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Redo_10,
#line 1207 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_11,
#line 1207 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_12,
#line 1207 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_13)
#line 1207 "declarative_execution.m"
{
#line 1207 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_12;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_12, mdb__declarative_execution__boxed_Label_12);
	ret_value = (MR_Word)mdb__declarative_execution__construct_fail_node_6_f_0((MR_Word) mdb__declarative_execution__Preceding_8, (MR_Word) mdb__declarative_execution__Call_9, (MR_Word) mdb__declarative_execution__Redo_10, (MR_Integer) mdb__declarative_execution__EventNo_11, mdb__declarative_execution__boxed_Label_12, (MR_Integer) mdb__declarative_execution__Suspicion_13);
	return ret_value;
}

#line 1217 "declarative_execution.m"
void 
MR_DD_construct_excp_node(
#line 1217 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_9,
#line 1217 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_10,
#line 1217 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_11,
#line 1217 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exception_12,
#line 1217 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_13,
#line 1217 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_14,
#line 1217 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_15,
#line 1217 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Excp_16)
#line 1217 "declarative_execution.m"
{
#line 1217 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_14;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_14, mdb__declarative_execution__boxed_Label_14);
	mdb__declarative_execution__construct_excp_node_8_p_0((MR_Word) mdb__declarative_execution__Preceding_9, (MR_Word) mdb__declarative_execution__Call_10, (MR_Word) mdb__declarative_execution__MaybeRedo_11, (MR_Word) mdb__declarative_execution__Exception_12, (MR_Integer) mdb__declarative_execution__EventNo_13, mdb__declarative_execution__boxed_Label_14, (MR_Integer) mdb__declarative_execution__Suspicion_15, (MR_Word *) mdb__declarative_execution__Excp_16);
}

#line 1229 "declarative_execution.m"
MR_Word 
MR_DD_construct_switch_node(
#line 1229 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1229 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1229 "declarative_execution.m"
{
#line 1229 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_switch_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1237 "declarative_execution.m"
MR_Word 
MR_DD_construct_first_disj_node(
#line 1237 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1237 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1237 "declarative_execution.m"
{
#line 1237 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_first_disj_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1246 "declarative_execution.m"
MR_Word 
MR_DD_construct_later_disj_node(
#line 1246 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_6,
#line 1246 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1246 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_8,
#line 1246 "declarative_execution.m"
  MR_Word mdb__declarative_execution__PrevDisj_9)
#line 1246 "declarative_execution.m"
{
#line 1246 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_8;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_8, mdb__declarative_execution__boxed_Label_8);
	ret_value = (MR_Word)mdb__declarative_execution__construct_later_disj_node_4_f_0((MR_Word) mdb__declarative_execution__Store_6, (MR_Word) mdb__declarative_execution__Preceding_7, mdb__declarative_execution__boxed_Label_8, (MR_Word) mdb__declarative_execution__PrevDisj_9);
	return ret_value;
}

#line 1262 "declarative_execution.m"
MR_Word 
MR_DD_construct_cond_node(
#line 1262 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1262 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1262 "declarative_execution.m"
{
#line 1262 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_cond_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1270 "declarative_execution.m"
MR_Word 
MR_DD_construct_then_node(
#line 1270 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1270 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1270 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1270 "declarative_execution.m"
{
#line 1270 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_then_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Cond_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1279 "declarative_execution.m"
MR_Word 
MR_DD_construct_else_node(
#line 1279 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1279 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1279 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1279 "declarative_execution.m"
{
#line 1279 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_else_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Cond_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1288 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_node(
#line 1288 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1288 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1288 "declarative_execution.m"
{
#line 1288 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1296 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_succ_node(
#line 1296 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1296 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1296 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1296 "declarative_execution.m"
{
#line 1296 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_succ_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Neg_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1305 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_fail_node(
#line 1305 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1305 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1305 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1305 "declarative_execution.m"
{
#line 1305 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_fail_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Neg_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1326 "declarative_execution.m"
MR_Word 
MR_DD_init_trace_atom_args(void)
#line 1326 "declarative_execution.m"
{
#line 1326 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__init_trace_atom_args_0_f_0();
	return ret_value;
}

#line 1339 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_value(
#line 1339 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_6,
#line 1339 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_7,
#line 1339 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Val_8,
#line 1339 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_9,
#line 1339 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__5_5)
#line 1339 "declarative_execution.m"
{
#line 1339 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_value_5_p_0((MR_Integer) mdb__declarative_execution__HldsNum_6, (MR_Integer) mdb__declarative_execution__ProgVis_7, (MR_Word) mdb__declarative_execution__Val_8, (MR_Word) mdb__declarative_execution__Args_9, (MR_Word *) mdb__declarative_execution__HeadVar__5_5);
}

#line 1351 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_no_value(
#line 1351 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_5,
#line 1351 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_6,
#line 1351 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_7,
#line 1351 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__4_4)
#line 1351 "declarative_execution.m"
{
#line 1351 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0((MR_Integer) mdb__declarative_execution__HldsNum_5, (MR_Integer) mdb__declarative_execution__ProgVis_6, (MR_Word) mdb__declarative_execution__Args_7, (MR_Word *) mdb__declarative_execution__HeadVar__4_4);
}

#line 1422 "declarative_execution.m"
void 
MR_DD_save_trace(
#line 1422 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Stream_6,
#line 1422 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_7,
#line 1422 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_8)
#line 1422 "declarative_execution.m"
{
#line 1422 "declarative_execution.m"
	mdb__declarative_execution__save_trace_node_store_5_p_0((MR_Word) mdb__declarative_execution__Stream_6, (MR_Word) mdb__declarative_execution__Store_7, (MR_Word) mdb__declarative_execution__NodeId_8);
}


#line 1955 "mdb.declarative_execution.c"
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

#line 1972 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0 = {
  (MR_String) "succeeded",
  (MR_Integer) 0
};

#line 1978 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1 = {
  (MR_String) "failed",
  (MR_Integer) 1
};

#line 1984 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2 = {
  (MR_String) "undecided",
  (MR_Integer) 2
};

#line 1990 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_goal_status_0[3] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2
};

#line 1997 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_goal_status_0[3] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2
};

#line 2004 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_goal_status_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2011 "mdb.declarative_execution.c"
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

#line 2028 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0[1] = {
  (MR_Integer) 0
};

#line 2033 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 = {
  (MR_String) "implicit_tree_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_String) "ideal_depth"
};

#line 2040 "mdb.declarative_execution.c"
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

#line 2057 "mdb.declarative_execution.c"
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

#line 2074 "mdb.declarative_execution.c"
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

#line 2091 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0
  }
};

#line 2099 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0
};

#line 2105 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0[2] = {
  (MR_String) "proc_layout",
  (MR_String) "atom_args"
};

#line 2111 "mdb.declarative_execution.c"
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

#line 2126 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0
};

#line 2131 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0
  }
};

#line 2140 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0
};

#line 2145 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0[1] = {
  (MR_Integer) 0
};

#line 2150 "mdb.declarative_execution.c"
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

#line 2167 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0
  }
};

#line 2175 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0
};

#line 2182 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0[3] = {
  (MR_String) "prog_visible",
  (MR_String) "prog_vis_headvar_num",
  (MR_String) "arg_value"
};

#line 2189 "mdb.declarative_execution.c"
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

#line 2204 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0
};

#line 2209 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0
  }
};

#line 2218 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0
};

#line 2223 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0[1] = {
  (MR_Integer) 0
};

#line 2228 "mdb.declarative_execution.c"
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

#line 2245 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0
  }
};

#line 2253 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
  }
};

#line 2261 "mdb.declarative_execution.c"
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

#line 2275 "mdb.declarative_execution.c"
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

#line 2289 "mdb.declarative_execution.c"
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

#line 2304 "mdb.declarative_execution.c"
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

#line 2316 "mdb.declarative_execution.c"
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

#line 2328 "mdb.declarative_execution.c"
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

#line 2343 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2[5] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2352 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_2[5] = {
  (MR_String) "redo_preceding",
  (MR_String) "redo_exit",
  (MR_String) "redo_event",
  (MR_String) "redo_label",
  (MR_String) "redo_suspicion"
};

#line 2361 "mdb.declarative_execution.c"
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

#line 2376 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3[6] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2386 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_3[6] = {
  (MR_String) "fail_preceding",
  (MR_String) "fail_call",
  (MR_String) "fail_redo",
  (MR_String) "fail_event",
  (MR_String) "fail_label",
  (MR_String) "fail_suspicion"
};

#line 2396 "mdb.declarative_execution.c"
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

#line 2411 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4[7] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2422 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_4[7] = {
  (MR_String) "excp_preceding",
  (MR_String) "excp_call",
  (MR_String) "excp_redo",
  (MR_String) "excp_value",
  (MR_String) "excp_event",
  (MR_String) "excp_label",
  (MR_String) "excp_suspicion"
};

#line 2433 "mdb.declarative_execution.c"
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

#line 2448 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2454 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5[2] = {
  (MR_String) "switch_preceding",
  (MR_String) "switch_label"
};

#line 2460 "mdb.declarative_execution.c"
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

#line 2475 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2481 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6[2] = {
  (MR_String) "first_disj_preceding",
  (MR_String) "first_disj_label"
};

#line 2487 "mdb.declarative_execution.c"
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

#line 2502 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2509 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7[3] = {
  (MR_String) "later_disj_preceding",
  (MR_String) "later_disj_label",
  (MR_String) "later_disj_first"
};

#line 2516 "mdb.declarative_execution.c"
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

#line 2531 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0
};

#line 2538 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8[3] = {
  (MR_String) "cond_preceding",
  (MR_String) "cond_label",
  (MR_String) "cond_status"
};

#line 2545 "mdb.declarative_execution.c"
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

#line 2560 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2567 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9[3] = {
  (MR_String) "then_preceding",
  (MR_String) "then_cond",
  (MR_String) "then_label"
};

#line 2574 "mdb.declarative_execution.c"
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

#line 2589 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2596 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10[3] = {
  (MR_String) "else_preceding",
  (MR_String) "else_cond",
  (MR_String) "else_label"
};

#line 2603 "mdb.declarative_execution.c"
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

#line 2618 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0
};

#line 2625 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11[3] = {
  (MR_String) "neg_preceding",
  (MR_String) "neg_label",
  (MR_String) "neg_status"
};

#line 2632 "mdb.declarative_execution.c"
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

#line 2647 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2654 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12[3] = {
  (MR_String) "neg_succ_preceding",
  (MR_String) "neg_succ_enter",
  (MR_String) "neg_succ_label"
};

#line 2661 "mdb.declarative_execution.c"
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

#line 2676 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2683 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13[3] = {
  (MR_String) "neg_fail_preceding",
  (MR_String) "neg_fail_enter",
  (MR_String) "neg_fail_label"
};

#line 2690 "mdb.declarative_execution.c"
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

#line 2705 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0
};

#line 2710 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1
};

#line 2715 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2
};

#line 2720 "mdb.declarative_execution.c"
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

#line 2735 "mdb.declarative_execution.c"
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

#line 2759 "mdb.declarative_execution.c"
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

#line 2777 "mdb.declarative_execution.c"
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

#line 2795 "mdb.declarative_execution.c"
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

#line 2812 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0[1] = {
  (MR_Integer) 0
};

#line 2817 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0 = {
  (MR_String) "id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 2824 "mdb.declarative_execution.c"
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

#line 2841 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0[1] = {
  (MR_Integer) 0
};

#line 2846 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0 = {
  (MR_String) "key",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2853 "mdb.declarative_execution.c"
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

#line 2870 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0[1] = {
  (MR_Integer) 0
};

#line 2875 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0
  }
};

#line 2883 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0,
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0
  }
};

#line 2892 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0 = {
  (MR_String) "map",
  (MR_PseudoTypeInfo) &mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0,
  NULL
};

#line 2899 "mdb.declarative_execution.c"
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

#line 2916 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0[1] = {
  (MR_Integer) 0
};

#line 2921 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0 = {
  (MR_String) "store",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2928 "mdb.declarative_execution.c"
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

#line 2945 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0 = {
  (MR_String) "all_headvars",
  (MR_Integer) 0
};

#line 2951 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1 = {
  (MR_String) "only_user_headvars",
  (MR_Integer) 1
};

#line 2957 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_which_headvars_0[2] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1
};

#line 2963 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_which_headvars_0[2] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1
};

#line 2969 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_which_headvars_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 2975 "mdb.declarative_execution.c"
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

#line 2992 "mdb.declarative_execution.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001))
};

#line 3002 "mdb.declarative_execution.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001))
};

#line 3012 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__type_class_id_var_names_annotated_trace_2[2] = {
  (MR_String) "S",
  (MR_String) "R"
};

#line 3018 "mdb.declarative_execution.c"
static const MR_TypeClassMethod mdb__declarative_execution__mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2[1] = {
  {
    (MR_String) "trace_node_from_id",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3027 "mdb.declarative_execution.c"
static const MR_TypeClassId mdb__declarative_execution__mdb__declarative_execution__type_class_id_annotated_trace_2 = {
  (MR_String) "mdb.declarative_execution",
  (MR_String) "annotated_trace",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mdb__declarative_execution__mdb__declarative_execution__type_class_id_var_names_annotated_trace_2,
  mdb__declarative_execution__mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2
};

#line 3038 "mdb.declarative_execution.c"
const MR_TypeClassDeclStruct mdb__declarative_execution__mdb__declarative_execution__type_class_decl_annotated_trace_2 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_class_id_annotated_trace_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3046 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0_10001(
#line 3049 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3051 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3053 "mdb.declarative_execution.c"
{
#line 3055 "mdb.declarative_execution.c"
  {
#line 3057 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3060 "mdb.declarative_execution.c"
    {
#line 3062 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____event_number_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3065 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3067 "mdb.declarative_execution.c"
  }
#line 3069 "mdb.declarative_execution.c"
}

#line 3072 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0_10001(
#line 3075 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3077 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3079 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3081 "mdb.declarative_execution.c"
{
#line 3083 "mdb.declarative_execution.c"
  {
#line 3085 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3088 "mdb.declarative_execution.c"
    {
#line 3090 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____event_number_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3093 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3095 "mdb.declarative_execution.c"
  }
#line 3097 "mdb.declarative_execution.c"
}

#line 3100 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0_10001(
#line 3103 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3105 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3107 "mdb.declarative_execution.c"
{
#line 3109 "mdb.declarative_execution.c"
  {
#line 3111 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3114 "mdb.declarative_execution.c"
    {
#line 3116 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____goal_status_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3119 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3121 "mdb.declarative_execution.c"
  }
#line 3123 "mdb.declarative_execution.c"
}

#line 3126 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0_10001(
#line 3129 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3131 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3133 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3135 "mdb.declarative_execution.c"
{
#line 3137 "mdb.declarative_execution.c"
  {
#line 3139 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3142 "mdb.declarative_execution.c"
    {
#line 3144 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____goal_status_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3147 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3149 "mdb.declarative_execution.c"
  }
#line 3151 "mdb.declarative_execution.c"
}

#line 3154 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001(
#line 3157 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3159 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3161 "mdb.declarative_execution.c"
{
#line 3163 "mdb.declarative_execution.c"
  {
#line 3165 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3168 "mdb.declarative_execution.c"
    {
#line 3170 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____implicit_tree_info_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3173 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3175 "mdb.declarative_execution.c"
  }
#line 3177 "mdb.declarative_execution.c"
}

#line 3180 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001(
#line 3183 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3185 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3187 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3189 "mdb.declarative_execution.c"
{
#line 3191 "mdb.declarative_execution.c"
  {
#line 3193 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3196 "mdb.declarative_execution.c"
    {
#line 3198 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____implicit_tree_info_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3201 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3203 "mdb.declarative_execution.c"
  }
#line 3205 "mdb.declarative_execution.c"
}

#line 3208 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0_10001(
#line 3211 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3213 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3215 "mdb.declarative_execution.c"
{
#line 3217 "mdb.declarative_execution.c"
  {
#line 3219 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3222 "mdb.declarative_execution.c"
    {
#line 3224 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____sequence_number_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3227 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3229 "mdb.declarative_execution.c"
  }
#line 3231 "mdb.declarative_execution.c"
}

#line 3234 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0_10001(
#line 3237 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3239 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3241 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3243 "mdb.declarative_execution.c"
{
#line 3245 "mdb.declarative_execution.c"
  {
#line 3247 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3250 "mdb.declarative_execution.c"
    {
#line 3252 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____sequence_number_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3255 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3257 "mdb.declarative_execution.c"
  }
#line 3259 "mdb.declarative_execution.c"
}

#line 3262 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001(
#line 3265 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3267 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3269 "mdb.declarative_execution.c"
{
#line 3271 "mdb.declarative_execution.c"
  {
#line 3273 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3276 "mdb.declarative_execution.c"
    {
#line 3278 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____suspicion_accumulator_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3281 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3283 "mdb.declarative_execution.c"
  }
#line 3285 "mdb.declarative_execution.c"
}

#line 3288 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001(
#line 3291 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3293 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3295 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3297 "mdb.declarative_execution.c"
{
#line 3299 "mdb.declarative_execution.c"
  {
#line 3301 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3304 "mdb.declarative_execution.c"
    {
#line 3306 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____suspicion_accumulator_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3309 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3311 "mdb.declarative_execution.c"
  }
#line 3313 "mdb.declarative_execution.c"
}

#line 3316 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0_10001(
#line 3319 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3321 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3323 "mdb.declarative_execution.c"
{
#line 3325 "mdb.declarative_execution.c"
  {
#line 3327 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3330 "mdb.declarative_execution.c"
    {
#line 3332 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3335 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3337 "mdb.declarative_execution.c"
  }
#line 3339 "mdb.declarative_execution.c"
}

#line 3342 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0_10001(
#line 3345 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3347 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3349 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3351 "mdb.declarative_execution.c"
{
#line 3353 "mdb.declarative_execution.c"
  {
#line 3355 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3358 "mdb.declarative_execution.c"
    {
#line 3360 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_atom_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3363 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3365 "mdb.declarative_execution.c"
  }
#line 3367 "mdb.declarative_execution.c"
}

#line 3370 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001(
#line 3373 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3375 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3377 "mdb.declarative_execution.c"
{
#line 3379 "mdb.declarative_execution.c"
  {
#line 3381 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3384 "mdb.declarative_execution.c"
    {
#line 3386 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_atom_arg_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3389 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3391 "mdb.declarative_execution.c"
  }
#line 3393 "mdb.declarative_execution.c"
}

#line 3396 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001(
#line 3399 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3401 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3403 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3405 "mdb.declarative_execution.c"
{
#line 3407 "mdb.declarative_execution.c"
  {
#line 3409 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3412 "mdb.declarative_execution.c"
    {
#line 3414 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_atom_arg_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3417 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3419 "mdb.declarative_execution.c"
  }
#line 3421 "mdb.declarative_execution.c"
}

#line 3424 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0_10001(
#line 3427 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3429 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3431 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3433 "mdb.declarative_execution.c"
{
#line 3435 "mdb.declarative_execution.c"
  {
#line 3437 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3440 "mdb.declarative_execution.c"
    {
#line 3442 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_1_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3445 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3447 "mdb.declarative_execution.c"
  }
#line 3449 "mdb.declarative_execution.c"
}

#line 3452 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0_10001(
#line 3455 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3457 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_2,
#line 3459 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3,
#line 3461 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_4)
#line 3463 "mdb.declarative_execution.c"
{
#line 3465 "mdb.declarative_execution.c"
  {
#line 3467 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3470 "mdb.declarative_execution.c"
    {
#line 3472 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_1_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), &mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_3), ((MR_Word) mdb__declarative_execution__wrapper_arg_4));
    }
#line 3475 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_2 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3477 "mdb.declarative_execution.c"
  }
#line 3479 "mdb.declarative_execution.c"
}

#line 3482 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0_10001(
#line 3485 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3487 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3489 "mdb.declarative_execution.c"
{
#line 3491 "mdb.declarative_execution.c"
  {
#line 3493 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3496 "mdb.declarative_execution.c"
    {
#line 3498 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_id_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3501 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3503 "mdb.declarative_execution.c"
  }
#line 3505 "mdb.declarative_execution.c"
}

#line 3508 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0_10001(
#line 3511 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3513 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3515 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3517 "mdb.declarative_execution.c"
{
#line 3519 "mdb.declarative_execution.c"
  {
#line 3521 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3524 "mdb.declarative_execution.c"
    {
#line 3526 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_id_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3529 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3531 "mdb.declarative_execution.c"
  }
#line 3533 "mdb.declarative_execution.c"
}

#line 3536 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0_10001(
#line 3539 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3541 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3543 "mdb.declarative_execution.c"
{
#line 3545 "mdb.declarative_execution.c"
  {
#line 3547 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3550 "mdb.declarative_execution.c"
    {
#line 3552 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_key_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3555 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3557 "mdb.declarative_execution.c"
  }
#line 3559 "mdb.declarative_execution.c"
}

#line 3562 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0_10001(
#line 3565 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3567 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3569 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3571 "mdb.declarative_execution.c"
{
#line 3573 "mdb.declarative_execution.c"
  {
#line 3575 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3578 "mdb.declarative_execution.c"
    {
#line 3580 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_key_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3583 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3585 "mdb.declarative_execution.c"
  }
#line 3587 "mdb.declarative_execution.c"
}

#line 3590 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0_10001(
#line 3593 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3595 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3597 "mdb.declarative_execution.c"
{
#line 3599 "mdb.declarative_execution.c"
  {
#line 3601 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3604 "mdb.declarative_execution.c"
    {
#line 3606 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_map_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3609 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3611 "mdb.declarative_execution.c"
  }
#line 3613 "mdb.declarative_execution.c"
}

#line 3616 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0_10001(
#line 3619 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3621 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3623 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3625 "mdb.declarative_execution.c"
{
#line 3627 "mdb.declarative_execution.c"
  {
#line 3629 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3632 "mdb.declarative_execution.c"
    {
#line 3634 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_map_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3637 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3639 "mdb.declarative_execution.c"
  }
#line 3641 "mdb.declarative_execution.c"
}

#line 3644 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0_10001(
#line 3647 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3649 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3651 "mdb.declarative_execution.c"
{
#line 3653 "mdb.declarative_execution.c"
  {
#line 3655 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3658 "mdb.declarative_execution.c"
    {
#line 3660 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_store_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3663 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3665 "mdb.declarative_execution.c"
  }
#line 3667 "mdb.declarative_execution.c"
}

#line 3670 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0_10001(
#line 3673 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3675 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3677 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3679 "mdb.declarative_execution.c"
{
#line 3681 "mdb.declarative_execution.c"
  {
#line 3683 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3686 "mdb.declarative_execution.c"
    {
#line 3688 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_store_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3691 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3693 "mdb.declarative_execution.c"
  }
#line 3695 "mdb.declarative_execution.c"
}

#line 3698 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0_10001(
#line 3701 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3703 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3705 "mdb.declarative_execution.c"
{
#line 3707 "mdb.declarative_execution.c"
  {
#line 3709 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3712 "mdb.declarative_execution.c"
    {
#line 3714 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____which_headvars_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3717 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3719 "mdb.declarative_execution.c"
  }
#line 3721 "mdb.declarative_execution.c"
}

#line 3724 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0_10001(
#line 3727 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3729 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3731 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3733 "mdb.declarative_execution.c"
{
#line 3735 "mdb.declarative_execution.c"
  {
#line 3737 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3740 "mdb.declarative_execution.c"
    {
#line 3742 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____which_headvars_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3745 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3747 "mdb.declarative_execution.c"
  }
#line 3749 "mdb.declarative_execution.c"
}

#line 3752 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
#line 3755 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__closure_arg,
#line 3757 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3759 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3761 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_3)
#line 3763 "mdb.declarative_execution.c"
{
#line 3765 "mdb.declarative_execution.c"
  {
#line 3767 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;
#line 3769 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__closure;
#line 3771 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__3_3;

#line 3774 "mdb.declarative_execution.c"
    mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;
#line 3776 "mdb.declarative_execution.c"
    {
#line 3778 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
#line 3781 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 3783 "mdb.declarative_execution.c"
      {
#line 3785 "mdb.declarative_execution.c"
        *mdb__declarative_execution__wrapper_arg_3 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__3_3));
#line 3787 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 3789 "mdb.declarative_execution.c"
      }
#line 3791 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3793 "mdb.declarative_execution.c"
  }
#line 3795 "mdb.declarative_execution.c"
}

#line 3798 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
#line 3801 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__closure_arg,
#line 3803 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3805 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3807 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_3)
#line 3809 "mdb.declarative_execution.c"
{
#line 3811 "mdb.declarative_execution.c"
  {
#line 3813 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;
#line 3815 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__closure;
#line 3817 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__3_3;

#line 3820 "mdb.declarative_execution.c"
    mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;
#line 3822 "mdb.declarative_execution.c"
    {
#line 3824 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
#line 3827 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 3829 "mdb.declarative_execution.c"
      {
#line 3831 "mdb.declarative_execution.c"
        *mdb__declarative_execution__wrapper_arg_3 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__3_3));
#line 3833 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 3835 "mdb.declarative_execution.c"
      }
#line 3837 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3839 "mdb.declarative_execution.c"
  }
#line 3841 "mdb.declarative_execution.c"
}

#line 873 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 873 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 873 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 873 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
#line 873 "declarative_execution.m"
{
#line 895 "declarative_execution.m"
  {
#line 895 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 898 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__HeadVar__2_2 ;
		{
#line 898 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);

#line 3875 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__HeadVar__3_3  = Node;
#line 898 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 895 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 895 "declarative_execution.m"
  }
#line 873 "declarative_execution.m"
}

#line 1382 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 1382 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1382 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1382 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
#line 1382 "declarative_execution.m"
{
#line 1397 "declarative_execution.m"
  {
#line 1397 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1397 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Map_6 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
#line 1398 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_HeadVar__3_3;

#line 1398 "declarative_execution.m"
    {
#line 1398 "declarative_execution.m"
      mdb__declarative_execution__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], mdb__declarative_execution__Map_6, ((MR_Box) (mdb__declarative_execution__HeadVar__2_2)), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
#line 1398 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1398 "declarative_execution.m"
      {
#line 1398 "declarative_execution.m"
        *mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv0_HeadVar__3_3);
#line 1398 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1398 "declarative_execution.m"
      }
#line 1397 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1397 "declarative_execution.m"
  }
#line 1382 "declarative_execution.m"
}

#line 448 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0(
#line 448 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 448 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 448 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 448 "declarative_execution.m"
{
#line 448 "declarative_execution.m"
  {
#line 448 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 448 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 448 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 448 "declarative_execution.m"
    {
#line 448 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 448 "declarative_execution.m"
      return;
    }
#line 448 "declarative_execution.m"
  }
#line 448 "declarative_execution.m"
}

#line 448 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0(
#line 448 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_1,
#line 448 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 448 "declarative_execution.m"
{
#line 3975 "mdb.declarative_execution.c"
  {
#line 3977 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__HeadVar__2_1 == mdb__declarative_execution__HeadVar__2_2);

#line 3980 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3982 "mdb.declarative_execution.c"
  }
#line 448 "declarative_execution.m"
}

#line 881 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0(
#line 881 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 881 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 881 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 881 "declarative_execution.m"
{
#line 881 "declarative_execution.m"
  {
#line 881 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 881 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 881 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 881 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 881 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4011 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 881 "declarative_execution.m"
    else
#line 881 "declarative_execution.m"
      {
#line 881 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 881 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 881 "declarative_execution.m"
        {
#line 881 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 881 "declarative_execution.m"
          return;
        }
#line 881 "declarative_execution.m"
      }
#line 881 "declarative_execution.m"
  }
#line 881 "declarative_execution.m"
}

#line 881 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0(
#line 881 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 881 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 881 "declarative_execution.m"
{
#line 881 "declarative_execution.m"
  {
#line 881 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 881 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 881 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 881 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 881 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 881 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 881 "declarative_execution.m"
    else
#line 881 "declarative_execution.m"
      {
#line 881 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 881 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 4069 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
#line 881 "declarative_execution.m"
      }
#line 881 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 881 "declarative_execution.m"
  }
#line 881 "declarative_execution.m"
}

#line 1385 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0(
#line 1385 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 1385 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1385 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 1385 "declarative_execution.m"
{
#line 1385 "declarative_execution.m"
  {
#line 1385 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1385 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 1385 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 1385 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 1385 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4104 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 1385 "declarative_execution.m"
    else
#line 1385 "declarative_execution.m"
      {
#line 1385 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;
#line 1385 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;

#line 1385 "declarative_execution.m"
        {
#line 1385 "declarative_execution.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[1], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_4_4)), ((MR_Box) (mdb__declarative_execution__V_5_5)));
#line 1385 "declarative_execution.m"
          return;
        }
#line 1385 "declarative_execution.m"
      }
#line 1385 "declarative_execution.m"
  }
#line 1385 "declarative_execution.m"
}

#line 1385 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0(
#line 1385 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1385 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 1385 "declarative_execution.m"
{
#line 1385 "declarative_execution.m"
  {
#line 1385 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1385 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 1385 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 1385 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 1385 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1385 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 1385 "declarative_execution.m"
    else
#line 1385 "declarative_execution.m"
      {
#line 1385 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_3_3 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
#line 1385 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;

#line 4162 "mdb.declarative_execution.c"
        {
#line 4164 "mdb.declarative_execution.c"
          return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[1], ((MR_Box) (mdb__declarative_execution__V_3_3)), ((MR_Box) (mdb__declarative_execution__V_4_4)));
        }
#line 1385 "declarative_execution.m"
      }
#line 1385 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1385 "declarative_execution.m"
  }
#line 1385 "declarative_execution.m"
}

#line 1391 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0(
#line 1391 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 1391 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1391 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 1391 "declarative_execution.m"
{
#line 1391 "declarative_execution.m"
  {
#line 1391 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1391 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 1391 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 1391 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 1391 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4200 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 1391 "declarative_execution.m"
    else
#line 1391 "declarative_execution.m"
      {
#line 1391 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 1391 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 1391 "declarative_execution.m"
        {
#line 1391 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 1391 "declarative_execution.m"
          return;
        }
#line 1391 "declarative_execution.m"
      }
#line 1391 "declarative_execution.m"
  }
#line 1391 "declarative_execution.m"
}

#line 1391 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0(
#line 1391 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1391 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 1391 "declarative_execution.m"
{
#line 1391 "declarative_execution.m"
  {
#line 1391 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1391 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 1391 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 1391 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 1391 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1391 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 1391 "declarative_execution.m"
    else
#line 1391 "declarative_execution.m"
      {
#line 1391 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 1391 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 4258 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
#line 1391 "declarative_execution.m"
      }
#line 1391 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1391 "declarative_execution.m"
  }
#line 1391 "declarative_execution.m"
}

#line 889 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0(
#line 889 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 889 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 889 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 889 "declarative_execution.m"
{
#line 889 "declarative_execution.m"
  {
#line 889 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 889 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 889 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 889 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 889 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4293 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 889 "declarative_execution.m"
    else
#line 889 "declarative_execution.m"
      {
#line 889 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;
#line 889 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;

#line 889 "declarative_execution.m"
        {
#line 889 "declarative_execution.m"
          mercury__builtin____Compare____c_pointer_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 889 "declarative_execution.m"
          return;
        }
#line 889 "declarative_execution.m"
      }
#line 889 "declarative_execution.m"
  }
#line 889 "declarative_execution.m"
}

#line 889 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0(
#line 889 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 889 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 889 "declarative_execution.m"
{
#line 889 "declarative_execution.m"
  {
#line 889 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 889 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 889 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 889 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 889 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 889 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 889 "declarative_execution.m"
    else
#line 889 "declarative_execution.m"
      {
#line 889 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_3_3 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
#line 889 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;

#line 4351 "mdb.declarative_execution.c"
        {
#line 4353 "mdb.declarative_execution.c"
          return mdb__declarative_execution__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_4_4);
        }
#line 889 "declarative_execution.m"
      }
#line 889 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 889 "declarative_execution.m"
  }
#line 889 "declarative_execution.m"
}

#line 45 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0(
#line 45 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_1761,
#line 45 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 45 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 45 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 45 "declarative_execution.m"
{
#line 45 "declarative_execution.m"
  {
#line 45 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 45 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_1759 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 45 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_1760 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 45 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_1759 == mdb__declarative_execution__CastY_1760);
#line 45 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4391 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 45 "declarative_execution.m"
    else
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
      switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) {
#line 45 "declarative_execution.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
        case (MR_Integer) 0:
#line 45 "declarative_execution.m"
          {
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1796_1796 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 9)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1797_1797 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 8)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1798_1798 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_1799_1799 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_1800_1800 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1801_1801 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1802_1802 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_1803_1803 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1804_1804 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1805_1805 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
            switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
              case (MR_Integer) 0:
#line 45 "declarative_execution.m"
                {
#line 45 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
#line 45 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
#line 45 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 8)));
#line 45 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 9)));
#line 45 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_24_24;

#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_24_24, mdb__declarative_execution__V_1805_1805, mdb__declarative_execution__V_14_14);
                  }
#line 4462 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_24_24 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_24_24;
#line 45 "declarative_execution.m"
                  else
#line 45 "declarative_execution.m"
                    {
#line 45 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_25_25;

#line 45 "declarative_execution.m"
                      {
#line 45 "declarative_execution.m"
                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_25_25, mdb__declarative_execution__V_1804_1804, mdb__declarative_execution__V_15_15);
                      }
#line 4482 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_25_25 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_25_25;
#line 45 "declarative_execution.m"
                      else
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_26_26;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], &mdb__declarative_execution__V_26_26, ((MR_Box) (mdb__declarative_execution__V_1803_1803)), ((MR_Box) (mdb__declarative_execution__V_16_16)));
                          }
#line 4502 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_26_26 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_26_26;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_27_27;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_27_27, mdb__declarative_execution__V_1802_1802, mdb__declarative_execution__V_17_17);
                              }
#line 4522 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_27_27 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_27_27;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_28_28;

#line 45 "declarative_execution.m"
                                  {
#line 45 "declarative_execution.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_28_28, mdb__declarative_execution__V_1801_1801, mdb__declarative_execution__V_18_18);
                                  }
#line 4542 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_28_28 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_28_28;
#line 45 "declarative_execution.m"
                                  else
#line 45 "declarative_execution.m"
                                    {
#line 45 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_29_29;

#line 45 "declarative_execution.m"
                                      {
#line 45 "declarative_execution.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[1], &mdb__declarative_execution__V_29_29, ((MR_Box) (mdb__declarative_execution__V_1800_1800)), ((MR_Box) (mdb__declarative_execution__V_19_19)));
                                      }
#line 4562 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_29_29 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_29_29;
#line 45 "declarative_execution.m"
                                      else
#line 45 "declarative_execution.m"
                                        {
#line 45 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_30_30;

#line 45 "declarative_execution.m"
                                          {
#line 45 "declarative_execution.m"
                                            mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[5], &mdb__declarative_execution__V_30_30, ((MR_Box) (mdb__declarative_execution__V_1799_1799)), ((MR_Box) (mdb__declarative_execution__V_20_20)));
                                          }
#line 4582 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_30_30 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_30_30;
#line 45 "declarative_execution.m"
                                          else
#line 45 "declarative_execution.m"
                                            {
#line 45 "declarative_execution.m"
                                              MR_Word mdb__declarative_execution__V_31_31;

#line 45 "declarative_execution.m"
                                              {
#line 45 "declarative_execution.m"
                                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_31_31, mdb__declarative_execution__V_1798_1798, mdb__declarative_execution__V_21_21);
                                              }
#line 4602 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_31_31 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_31_31;
#line 45 "declarative_execution.m"
                                              else
#line 45 "declarative_execution.m"
                                                {
#line 45 "declarative_execution.m"
                                                  MR_Word mdb__declarative_execution__V_32_32;

#line 45 "declarative_execution.m"
                                                  {
#line 45 "declarative_execution.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_32_32, mdb__declarative_execution__V_1797_1797, mdb__declarative_execution__V_22_22);
                                                  }
#line 4622 "mdb.declarative_execution.c"
                                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_32_32 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                                  if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_32_32;
#line 45 "declarative_execution.m"
                                                  else
#line 45 "declarative_execution.m"
                                                    {
#line 45 "declarative_execution.m"
                                                      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1796_1796, mdb__declarative_execution__V_23_23);
#line 45 "declarative_execution.m"
                                                      return;
                                                    }
#line 45 "declarative_execution.m"
                                                }
#line 45 "declarative_execution.m"
                                            }
#line 45 "declarative_execution.m"
                                        }
#line 45 "declarative_execution.m"
                                    }
#line 45 "declarative_execution.m"
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
              case (MR_Integer) 1:
#line 4661 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
              case (MR_Integer) 2:
#line 4667 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
              case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 4680 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 4686 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 4692 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 4698 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 4:
#line 4704 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 5:
#line 4710 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 6:
#line 4716 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 7:
#line 4722 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 8:
#line 4728 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 9:
#line 4734 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 10:
#line 4740 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
            }
#line 45 "declarative_execution.m"
          }
#line 45 "declarative_execution.m"
          break;
#line 45 "declarative_execution.m"
        case (MR_Integer) 1:
#line 45 "declarative_execution.m"
          {
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1819_1819 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1820_1820 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1821_1821 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1822_1822 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_1823_1823 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1824_1824 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1825_1825 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1826_1826 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
            switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
              case (MR_Integer) 0:
#line 4782 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
              case (MR_Integer) 1:
#line 45 "declarative_execution.m"
                {
#line 45 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_240_240 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
#line 45 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_241_241 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_242_242 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_245_245 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_246_246 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_247_247 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
#line 45 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_248_248;

#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_248_248, mdb__declarative_execution__V_1826_1826, mdb__declarative_execution__V_240_240);
                  }
#line 4814 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_248_248 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_248_248;
#line 45 "declarative_execution.m"
                  else
#line 45 "declarative_execution.m"
                    {
#line 45 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_249_249;

#line 45 "declarative_execution.m"
                      {
#line 45 "declarative_execution.m"
                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_249_249, mdb__declarative_execution__V_1825_1825, mdb__declarative_execution__V_241_241);
                      }
#line 4834 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_249_249 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_249_249;
#line 45 "declarative_execution.m"
                      else
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_250_250;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_250_250, mdb__declarative_execution__V_1824_1824, mdb__declarative_execution__V_242_242);
                          }
#line 4854 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_250_250 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_250_250;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_251_251;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], &mdb__declarative_execution__V_251_251, ((MR_Box) (mdb__declarative_execution__V_1823_1823)), ((MR_Box) (mdb__declarative_execution__V_243_243)));
                              }
#line 4874 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_251_251 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_251_251;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_252_252;

#line 45 "declarative_execution.m"
                                  {
#line 45 "declarative_execution.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_252_252, mdb__declarative_execution__V_1822_1822, mdb__declarative_execution__V_244_244);
                                  }
#line 4894 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_252_252 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_252_252;
#line 45 "declarative_execution.m"
                                  else
#line 45 "declarative_execution.m"
                                    {
#line 45 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_253_253;

#line 45 "declarative_execution.m"
                                      {
#line 45 "declarative_execution.m"
                                        mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_253_253, mdb__declarative_execution__V_1821_1821, mdb__declarative_execution__V_245_245);
                                      }
#line 4914 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_253_253 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_253_253;
#line 45 "declarative_execution.m"
                                      else
#line 45 "declarative_execution.m"
                                        {
#line 45 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_254_254;

#line 45 "declarative_execution.m"
                                          {
#line 45 "declarative_execution.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_254_254, mdb__declarative_execution__V_1820_1820, mdb__declarative_execution__V_246_246);
                                          }
#line 4934 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_254_254 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_254_254;
#line 45 "declarative_execution.m"
                                          else
#line 45 "declarative_execution.m"
                                            {
#line 45 "declarative_execution.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1819_1819, mdb__declarative_execution__V_247_247);
#line 45 "declarative_execution.m"
                                              return;
                                            }
#line 45 "declarative_execution.m"
                                        }
#line 45 "declarative_execution.m"
                                    }
#line 45 "declarative_execution.m"
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
              case (MR_Integer) 2:
#line 4969 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
              case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 4982 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 4988 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 4994 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 5000 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 4:
#line 5006 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 5:
#line 5012 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 6:
#line 5018 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 7:
#line 5024 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 8:
#line 5030 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 9:
#line 5036 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 10:
#line 5042 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
            }
#line 45 "declarative_execution.m"
          }
#line 45 "declarative_execution.m"
          break;
#line 45 "declarative_execution.m"
        case (MR_Integer) 2:
#line 45 "declarative_execution.m"
          {
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1847_1847 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1848_1848 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1849_1849 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1850_1850 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1851_1851 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
            switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
              case (MR_Integer) 0:
#line 5078 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
              case (MR_Integer) 1:
#line 5084 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
              case (MR_Integer) 2:
#line 45 "declarative_execution.m"
                {
#line 45 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_427_427 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
#line 45 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_428_428 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_429_429 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_430_430 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_431_431 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_432_432;

#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_432_432, mdb__declarative_execution__V_1851_1851, mdb__declarative_execution__V_427_427);
                  }
#line 5110 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_432_432 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_432_432;
#line 45 "declarative_execution.m"
                  else
#line 45 "declarative_execution.m"
                    {
#line 45 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_433_433;

#line 45 "declarative_execution.m"
                      {
#line 45 "declarative_execution.m"
                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_433_433, mdb__declarative_execution__V_1850_1850, mdb__declarative_execution__V_428_428);
                      }
#line 5130 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_433_433 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_433_433;
#line 45 "declarative_execution.m"
                      else
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_434_434;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_434_434, mdb__declarative_execution__V_1849_1849, mdb__declarative_execution__V_429_429);
                          }
#line 5150 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_434_434 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_434_434;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_435_435;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_435_435, mdb__declarative_execution__V_1848_1848, mdb__declarative_execution__V_430_430);
                              }
#line 5170 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_435_435 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_435_435;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1847_1847, mdb__declarative_execution__V_431_431);
#line 45 "declarative_execution.m"
                                  return;
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
              case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 5206 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 5212 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 5218 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 5224 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 4:
#line 5230 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 5:
#line 5236 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 6:
#line 5242 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 7:
#line 5248 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 8:
#line 5254 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 9:
#line 5260 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 10:
#line 5266 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
                break;
#line 45 "declarative_execution.m"
            }
#line 45 "declarative_execution.m"
          }
#line 45 "declarative_execution.m"
          break;
#line 45 "declarative_execution.m"
        case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
            case (MR_Integer) 0:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_1827_1827 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1828_1828 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_1829_1829 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1830_1830 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1831_1831 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1832_1832 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 5311 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 5317 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 5323 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_576_576 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_577_577 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_578_578 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
#line 45 "declarative_execution.m"
                          MR_Integer mdb__declarative_execution__V_579_579 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_580_580 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                          MR_Integer mdb__declarative_execution__V_581_581 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_582_582;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_582_582, mdb__declarative_execution__V_1832_1832, mdb__declarative_execution__V_576_576);
                          }
#line 5358 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_582_582 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_582_582;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_583_583;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_583_583, mdb__declarative_execution__V_1831_1831, mdb__declarative_execution__V_577_577);
                              }
#line 5378 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_583_583 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_583_583;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_584_584;

#line 45 "declarative_execution.m"
                                  {
#line 45 "declarative_execution.m"
                                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_584_584, mdb__declarative_execution__V_1830_1830, mdb__declarative_execution__V_578_578);
                                  }
#line 5398 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_584_584 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_584_584;
#line 45 "declarative_execution.m"
                                  else
#line 45 "declarative_execution.m"
                                    {
#line 45 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_585_585;

#line 45 "declarative_execution.m"
                                      {
#line 45 "declarative_execution.m"
                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_585_585, mdb__declarative_execution__V_1829_1829, mdb__declarative_execution__V_579_579);
                                      }
#line 5418 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_585_585 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_585_585;
#line 45 "declarative_execution.m"
                                      else
#line 45 "declarative_execution.m"
                                        {
#line 45 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_586_586;

#line 45 "declarative_execution.m"
                                          {
#line 45 "declarative_execution.m"
                                            mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_586_586, mdb__declarative_execution__V_1828_1828, mdb__declarative_execution__V_580_580);
                                          }
#line 5438 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_586_586 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_586_586;
#line 45 "declarative_execution.m"
                                          else
#line 45 "declarative_execution.m"
                                            {
#line 45 "declarative_execution.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1827_1827, mdb__declarative_execution__V_581_581);
#line 45 "declarative_execution.m"
                                              return;
                                            }
#line 45 "declarative_execution.m"
                                        }
#line 45 "declarative_execution.m"
                                    }
#line 45 "declarative_execution.m"
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 5469 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 5475 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 5481 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 5487 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 5493 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 5499 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 5505 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 5511 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 5517 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 5523 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 1:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_1812_1812 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1813_1813 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_1814_1814 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_1815_1815 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1816_1816 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1817_1817 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1818_1818 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 5563 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 5569 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 5575 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 5588 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_743_743 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_744_744 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_745_745 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_746_746 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                          MR_Integer mdb__declarative_execution__V_747_747 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_748_748 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                          MR_Integer mdb__declarative_execution__V_749_749 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_750_750;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_750_750, mdb__declarative_execution__V_1818_1818, mdb__declarative_execution__V_743_743);
                          }
#line 5618 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_750_750 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_750_750;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_751_751;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_751_751, mdb__declarative_execution__V_1817_1817, mdb__declarative_execution__V_744_744);
                              }
#line 5638 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_751_751 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_751_751;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_752_752;

#line 45 "declarative_execution.m"
                                  {
#line 45 "declarative_execution.m"
                                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_752_752, mdb__declarative_execution__V_1816_1816, mdb__declarative_execution__V_745_745);
                                  }
#line 5658 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_752_752 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_752_752;
#line 45 "declarative_execution.m"
                                  else
#line 45 "declarative_execution.m"
                                    {
#line 45 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_753_753;

#line 45 "declarative_execution.m"
                                      {
#line 45 "declarative_execution.m"
                                        mdb__term_rep____Compare____term_rep_0_0(&mdb__declarative_execution__V_753_753, mdb__declarative_execution__V_1815_1815, mdb__declarative_execution__V_746_746);
                                      }
#line 5678 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_753_753 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_753_753;
#line 45 "declarative_execution.m"
                                      else
#line 45 "declarative_execution.m"
                                        {
#line 45 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_754_754;

#line 45 "declarative_execution.m"
                                          {
#line 45 "declarative_execution.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_754_754, mdb__declarative_execution__V_1814_1814, mdb__declarative_execution__V_747_747);
                                          }
#line 5698 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_754_754 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_754_754;
#line 45 "declarative_execution.m"
                                          else
#line 45 "declarative_execution.m"
                                            {
#line 45 "declarative_execution.m"
                                              MR_Word mdb__declarative_execution__V_755_755;

#line 45 "declarative_execution.m"
                                              {
#line 45 "declarative_execution.m"
                                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_755_755, mdb__declarative_execution__V_1813_1813, mdb__declarative_execution__V_748_748);
                                              }
#line 5718 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_755_755 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_755_755;
#line 45 "declarative_execution.m"
                                              else
#line 45 "declarative_execution.m"
                                                {
#line 45 "declarative_execution.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1812_1812, mdb__declarative_execution__V_749_749);
#line 45 "declarative_execution.m"
                                                  return;
                                                }
#line 45 "declarative_execution.m"
                                            }
#line 45 "declarative_execution.m"
                                        }
#line 45 "declarative_execution.m"
                                    }
#line 45 "declarative_execution.m"
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 5751 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 5757 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 5763 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 5769 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 5775 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 5781 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 5787 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 5793 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 5799 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 2:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1852_1852 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1853_1853 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 5829 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 5835 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 5841 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 5854 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 5860 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_892_892 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_893_893 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_894_894;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_894_894, mdb__declarative_execution__V_1853_1853, mdb__declarative_execution__V_892_892);
                          }
#line 5880 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_894_894 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_894_894;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1852_1852, mdb__declarative_execution__V_893_893);
#line 45 "declarative_execution.m"
                              return;
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 5903 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 5909 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 5915 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 5921 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 5927 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 5933 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 5939 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 5945 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 3:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1833_1833 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1834_1834 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 5975 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 5981 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 5987 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 6000 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 6006 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6012 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_986_986 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_987_987 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_988_988;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_988_988, mdb__declarative_execution__V_1834_1834, mdb__declarative_execution__V_986_986);
                          }
#line 6032 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_988_988 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_988_988;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1833_1833, mdb__declarative_execution__V_987_987);
#line 45 "declarative_execution.m"
                              return;
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 6055 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 6061 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 6067 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 6073 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 6079 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6085 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6091 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 4:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1835_1835 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1836_1836 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1837_1837 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 6123 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 6129 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 6135 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 6148 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 6154 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6160 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 6166 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1088_1088 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1089_1089 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1090_1090 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1091_1091;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1091_1091, mdb__declarative_execution__V_1837_1837, mdb__declarative_execution__V_1088_1088);
                          }
#line 6188 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1091_1091 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1091_1091;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1092_1092;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1092_1092, mdb__declarative_execution__V_1836_1836, mdb__declarative_execution__V_1089_1089);
                              }
#line 6208 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1092_1092 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1092_1092;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1835_1835, mdb__declarative_execution__V_1090_1090);
#line 45 "declarative_execution.m"
                                  return;
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 6233 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 6239 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 6245 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 6251 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6257 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6263 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 5:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_1806_1806 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1807_1807 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1808_1808 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 6295 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 6301 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 6307 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 6320 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 6326 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6332 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 6338 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 6344 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1199_1199 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1200_1200 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1201_1201 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1202_1202;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1202_1202, mdb__declarative_execution__V_1808_1808, mdb__declarative_execution__V_1199_1199);
                          }
#line 6366 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1202_1202 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1202_1202;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1203_1203;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1203_1203, mdb__declarative_execution__V_1807_1807, mdb__declarative_execution__V_1200_1200);
                              }
#line 6386 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1203_1203 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1203_1203;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_1857_1857 = (MR_Integer) mdb__declarative_execution__V_1806_1806;
#line 45 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_1858_1858 = (MR_Integer) mdb__declarative_execution__V_1201_1201;

#line 45 "declarative_execution.m"
                                  {
#line 45 "declarative_execution.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1857_1857, mdb__declarative_execution__V_1858_1858);
#line 45 "declarative_execution.m"
                                    return;
                                  }
#line 45 "declarative_execution.m"
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 6420 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 6426 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 6432 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6438 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6444 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 6:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1854_1854 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1855_1855 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1856_1856 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 6476 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 6482 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 6488 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 6501 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 6507 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6513 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 6519 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 6525 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 6531 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1310_1310 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1311_1311 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1312_1312 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1313_1313;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1313_1313, mdb__declarative_execution__V_1856_1856, mdb__declarative_execution__V_1310_1310);
                          }
#line 6553 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1313_1313 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1313_1313;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1314_1314;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1314_1314, mdb__declarative_execution__V_1855_1855, mdb__declarative_execution__V_1311_1311);
                              }
#line 6573 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1314_1314 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1314_1314;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1854_1854, mdb__declarative_execution__V_1312_1312);
#line 45 "declarative_execution.m"
                                  return;
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 6598 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 6604 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6610 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6616 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 7:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1809_1809 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1810_1810 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1811_1811 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 6648 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 6654 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 6660 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 6673 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 6679 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6685 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 6691 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 6697 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 6703 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 6709 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1421_1421 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1422_1422 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1423_1423 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1424_1424;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1424_1424, mdb__declarative_execution__V_1811_1811, mdb__declarative_execution__V_1421_1421);
                          }
#line 6731 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1424_1424 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1424_1424;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1425_1425;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1425_1425, mdb__declarative_execution__V_1810_1810, mdb__declarative_execution__V_1422_1422);
                              }
#line 6751 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1425_1425 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1425_1425;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1809_1809, mdb__declarative_execution__V_1423_1423);
#line 45 "declarative_execution.m"
                                  return;
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 6776 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6782 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6788 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 8:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_1838_1838 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1839_1839 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1840_1840 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 6820 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 6826 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 6832 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 6845 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 6851 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 6857 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 6863 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 6869 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 6875 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 6881 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 6887 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1532_1532 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1533_1533 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1534_1534 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1535_1535;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1535_1535, mdb__declarative_execution__V_1840_1840, mdb__declarative_execution__V_1532_1532);
                          }
#line 6909 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1535_1535 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1535_1535;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1536_1536;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1536_1536, mdb__declarative_execution__V_1839_1839, mdb__declarative_execution__V_1533_1533);
                              }
#line 6929 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1536_1536 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1536_1536;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_1859_1859 = (MR_Integer) mdb__declarative_execution__V_1838_1838;
#line 45 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_1860_1860 = (MR_Integer) mdb__declarative_execution__V_1534_1534;

#line 45 "declarative_execution.m"
                                  {
#line 45 "declarative_execution.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1859_1859, mdb__declarative_execution__V_1860_1860);
#line 45 "declarative_execution.m"
                                    return;
                                  }
#line 45 "declarative_execution.m"
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 6963 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 6969 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 9:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1844_1844 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1845_1845 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1846_1846 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 7001 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 7007 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 7013 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 7026 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 7032 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 7038 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 7044 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 7050 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 7056 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 7062 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 7068 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 7074 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1643_1643 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1644_1644 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1645_1645 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1646_1646;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1646_1646, mdb__declarative_execution__V_1846_1846, mdb__declarative_execution__V_1643_1643);
                          }
#line 7096 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1646_1646 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1646_1646;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1647_1647;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1647_1647, mdb__declarative_execution__V_1845_1845, mdb__declarative_execution__V_1644_1644);
                              }
#line 7116 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1647_1647 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1647_1647;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1844_1844, mdb__declarative_execution__V_1645_1645);
#line 45 "declarative_execution.m"
                                  return;
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 7141 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 10:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1841_1841 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1842_1842 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1843_1843 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) {
#line 45 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 7173 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 7179 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 7185 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
                      case (MR_Integer) 0:
#line 7198 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 1:
#line 7204 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 2:
#line 7210 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 3:
#line 7216 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 4:
#line 7222 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 5:
#line 7228 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 6:
#line 7234 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 7:
#line 7240 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 8:
#line 7246 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 9:
#line 7252 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                      case (MR_Integer) 10:
#line 45 "declarative_execution.m"
                        {
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1754_1754 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1755_1755 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1756_1756 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1757_1757;

#line 45 "declarative_execution.m"
                          {
#line 45 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1757_1757, mdb__declarative_execution__V_1843_1843, mdb__declarative_execution__V_1754_1754);
                          }
#line 7274 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1757_1757 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1757_1757;
#line 45 "declarative_execution.m"
                          else
#line 45 "declarative_execution.m"
                            {
#line 45 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1758_1758;

#line 45 "declarative_execution.m"
                              {
#line 45 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1758_1758, mdb__declarative_execution__V_1842_1842, mdb__declarative_execution__V_1755_1755);
                              }
#line 7294 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1758_1758 == (MR_Integer) 0);
#line 45 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 45 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1758_1758;
#line 45 "declarative_execution.m"
                              else
#line 45 "declarative_execution.m"
                                {
#line 45 "declarative_execution.m"
                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1841_1841, mdb__declarative_execution__V_1756_1756);
#line 45 "declarative_execution.m"
                                  return;
                                }
#line 45 "declarative_execution.m"
                            }
#line 45 "declarative_execution.m"
                        }
#line 45 "declarative_execution.m"
                        break;
#line 45 "declarative_execution.m"
                    }
#line 45 "declarative_execution.m"
                    break;
#line 45 "declarative_execution.m"
                }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
          }
#line 45 "declarative_execution.m"
          break;
#line 45 "declarative_execution.m"
      }
#line 45 "declarative_execution.m"
  }
#line 45 "declarative_execution.m"
}

#line 45 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0(
#line 45 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_127,
#line 45 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 45 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 45 "declarative_execution.m"
{
#line 45 "declarative_execution.m"
  {
#line 45 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 45 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_125 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 45 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_126 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 45 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_125 == mdb__declarative_execution__CastY_126);
#line 45 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 45 "declarative_execution.m"
    else
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
      switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
#line 45 "declarative_execution.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
        case (MR_Integer) 0:
#line 45 "declarative_execution.m"
          {
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__TypeInfo_128_128;
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__TypeInfo_129_129;
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__TypeInfo_130_130;
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_13_13;
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_14_14;
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_15_15;
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_16_16;
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_17_17;
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_18_18;
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_19_19;
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_20_20;
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_21_21;
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_22_22;

#line 45 "declarative_execution.m"
            mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 45 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 8)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 9)));
#line 7448 "mdb.declarative_execution.c"
                {
#line 7450 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_13_13);
                }
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 7457 "mdb.declarative_execution.c"
                    {
#line 7459 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_14_14);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 7466 "mdb.declarative_execution.c"
                        mdb__declarative_execution__TypeInfo_128_128 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
#line 7468 "mdb.declarative_execution.c"
                        {
#line 7470 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_128_128, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_15_15)));
                        }
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                          {
#line 7477 "mdb.declarative_execution.c"
                            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_6_6 == mdb__declarative_execution__V_16_16);
#line 45 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                              {
#line 7483 "mdb.declarative_execution.c"
                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_7_7 == mdb__declarative_execution__V_17_17);
#line 45 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                  {
#line 7489 "mdb.declarative_execution.c"
                                    mdb__declarative_execution__TypeInfo_129_129 = (MR_Word) &mdb__declarative_execution_scalar_common_1[1];
#line 7491 "mdb.declarative_execution.c"
                                    {
#line 7493 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_129_129, ((MR_Box) (mdb__declarative_execution__V_8_8)), ((MR_Box) (mdb__declarative_execution__V_18_18)));
                                    }
#line 45 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                      {
#line 7500 "mdb.declarative_execution.c"
                                        mdb__declarative_execution__TypeInfo_130_130 = (MR_Word) &mdb__declarative_execution_scalar_common_1[5];
#line 7502 "mdb.declarative_execution.c"
                                        {
#line 7504 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_130_130, ((MR_Box) (mdb__declarative_execution__V_9_9)), ((MR_Box) (mdb__declarative_execution__V_19_19)));
                                        }
#line 45 "declarative_execution.m"
                                        if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                          {
#line 7511 "mdb.declarative_execution.c"
                                            {
#line 7513 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_10_10, mdb__declarative_execution__V_20_20);
                                            }
#line 45 "declarative_execution.m"
                                            if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                              {
#line 7520 "mdb.declarative_execution.c"
                                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_11_11 == mdb__declarative_execution__V_21_21);
#line 45 "declarative_execution.m"
                                                if (mdb__declarative_execution__succeeded)
#line 7524 "mdb.declarative_execution.c"
                                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_12_12 == mdb__declarative_execution__V_22_22);
#line 45 "declarative_execution.m"
                                              }
#line 45 "declarative_execution.m"
                                          }
#line 45 "declarative_execution.m"
                                      }
#line 45 "declarative_execution.m"
                                  }
#line 45 "declarative_execution.m"
                              }
#line 45 "declarative_execution.m"
                          }
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
          }
#line 45 "declarative_execution.m"
          break;
#line 45 "declarative_execution.m"
        case (MR_Integer) 1:
#line 45 "declarative_execution.m"
          {
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__TypeInfo_132_132;
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_23_23 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_25_25 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_31_31;
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_32_32;
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_33_33;
#line 45 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_34_34;
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_35_35;
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_36_36;
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_37_37;
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_38_38;

#line 45 "declarative_execution.m"
            mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 45 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_31_31 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_32_32 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_33_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_36_36 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 7609 "mdb.declarative_execution.c"
                {
#line 7611 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_23_23, mdb__declarative_execution__V_31_31);
                }
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 7618 "mdb.declarative_execution.c"
                    {
#line 7620 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_24_24, mdb__declarative_execution__V_32_32);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 7627 "mdb.declarative_execution.c"
                        {
#line 7629 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_25_25, mdb__declarative_execution__V_33_33);
                        }
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                          {
#line 7636 "mdb.declarative_execution.c"
                            mdb__declarative_execution__TypeInfo_132_132 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
#line 7638 "mdb.declarative_execution.c"
                            {
#line 7640 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_132_132, ((MR_Box) (mdb__declarative_execution__V_26_26)), ((MR_Box) (mdb__declarative_execution__V_34_34)));
                            }
#line 45 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                              {
#line 7647 "mdb.declarative_execution.c"
                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_27_27 == mdb__declarative_execution__V_35_35);
#line 45 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                  {
#line 7653 "mdb.declarative_execution.c"
                                    {
#line 7655 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_28_28, mdb__declarative_execution__V_36_36);
                                    }
#line 45 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                      {
#line 7662 "mdb.declarative_execution.c"
                                        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_29_29 == mdb__declarative_execution__V_37_37);
#line 45 "declarative_execution.m"
                                        if (mdb__declarative_execution__succeeded)
#line 7666 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_30_30 == mdb__declarative_execution__V_38_38);
#line 45 "declarative_execution.m"
                                      }
#line 45 "declarative_execution.m"
                                  }
#line 45 "declarative_execution.m"
                              }
#line 45 "declarative_execution.m"
                          }
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
          }
#line 45 "declarative_execution.m"
          break;
#line 45 "declarative_execution.m"
        case (MR_Integer) 2:
#line 45 "declarative_execution.m"
          {
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_39_39 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_40_40 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_44_44;
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_45_45;
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_46_46;
#line 45 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_47_47;
#line 45 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_48_48;

#line 45 "declarative_execution.m"
            mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 45 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_44_44 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_45_45 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_47_47 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                mdb__declarative_execution__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 7727 "mdb.declarative_execution.c"
                {
#line 7729 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_39_39, mdb__declarative_execution__V_44_44);
                }
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 7736 "mdb.declarative_execution.c"
                    {
#line 7738 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_40_40, mdb__declarative_execution__V_45_45);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 7745 "mdb.declarative_execution.c"
                        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_41_41 == mdb__declarative_execution__V_46_46);
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                          {
#line 7751 "mdb.declarative_execution.c"
                            {
#line 7753 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_42_42, mdb__declarative_execution__V_47_47);
                            }
#line 45 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 7758 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_43_43 == mdb__declarative_execution__V_48_48);
#line 45 "declarative_execution.m"
                          }
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
          }
#line 45 "declarative_execution.m"
          break;
#line 45 "declarative_execution.m"
        case (MR_Integer) 3:
#line 45 "declarative_execution.m"
#line 45 "declarative_execution.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) {
#line 45 "declarative_execution.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 45 "declarative_execution.m"
            case (MR_Integer) 0:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_50_50 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_51_51 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_53_53 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_55_55;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_56_56;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_57_57;
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_58_58;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_59_59;
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_60_60;

#line 45 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_55_55 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_56_56 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_57_57 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_59_59 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 7826 "mdb.declarative_execution.c"
                    {
#line 7828 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_49_49, mdb__declarative_execution__V_55_55);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 7835 "mdb.declarative_execution.c"
                        {
#line 7837 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_50_50, mdb__declarative_execution__V_56_56);
                        }
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                          {
#line 7844 "mdb.declarative_execution.c"
                            {
#line 7846 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_51_51, mdb__declarative_execution__V_57_57);
                            }
#line 45 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                              {
#line 7853 "mdb.declarative_execution.c"
                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_52_52 == mdb__declarative_execution__V_58_58);
#line 45 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                  {
#line 7859 "mdb.declarative_execution.c"
                                    {
#line 7861 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_53_53, mdb__declarative_execution__V_59_59);
                                    }
#line 45 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 7866 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_54_54 == mdb__declarative_execution__V_60_60);
#line 45 "declarative_execution.m"
                                  }
#line 45 "declarative_execution.m"
                              }
#line 45 "declarative_execution.m"
                          }
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 1:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_62_62 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_63_63 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
#line 45 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_66_66 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_68_68;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_69_69;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_70_70;
#line 45 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_71_71;
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_72_72;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_73_73;
#line 45 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_74_74;

#line 45 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_68_68 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_70_70 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_73_73 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 7935 "mdb.declarative_execution.c"
                    {
#line 7937 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_61_61, mdb__declarative_execution__V_68_68);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 7944 "mdb.declarative_execution.c"
                        {
#line 7946 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_62_62, mdb__declarative_execution__V_69_69);
                        }
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                          {
#line 7953 "mdb.declarative_execution.c"
                            {
#line 7955 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_63_63, mdb__declarative_execution__V_70_70);
                            }
#line 45 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                              {
#line 7962 "mdb.declarative_execution.c"
                                {
#line 7964 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_execution__V_64_64, mdb__declarative_execution__V_71_71);
                                }
#line 45 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                  {
#line 7971 "mdb.declarative_execution.c"
                                    mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_65_65 == mdb__declarative_execution__V_72_72);
#line 45 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                                      {
#line 7977 "mdb.declarative_execution.c"
                                        {
#line 7979 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_66_66, mdb__declarative_execution__V_73_73);
                                        }
#line 45 "declarative_execution.m"
                                        if (mdb__declarative_execution__succeeded)
#line 7984 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_67_67 == mdb__declarative_execution__V_74_74);
#line 45 "declarative_execution.m"
                                      }
#line 45 "declarative_execution.m"
                                  }
#line 45 "declarative_execution.m"
                              }
#line 45 "declarative_execution.m"
                          }
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 2:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_75_75 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_76_76 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_77_77;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_78_78;

#line 45 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_77_77 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_78_78 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 8025 "mdb.declarative_execution.c"
                    {
#line 8027 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_75_75, mdb__declarative_execution__V_77_77);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 8032 "mdb.declarative_execution.c"
                      {
#line 8034 "mdb.declarative_execution.c"
                        return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_76_76, mdb__declarative_execution__V_78_78);
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 3:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_79_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_80_80 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_81_81;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_82_82;

#line 45 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_81_81 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_82_82 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 8066 "mdb.declarative_execution.c"
                    {
#line 8068 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_79_79, mdb__declarative_execution__V_81_81);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 8073 "mdb.declarative_execution.c"
                      {
#line 8075 "mdb.declarative_execution.c"
                        return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_80_80, mdb__declarative_execution__V_82_82);
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 4:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_83_83 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_84_84 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_85_85 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_86_86;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_87_87;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_88_88;

#line 45 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_86_86 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_87_87 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_88_88 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 8113 "mdb.declarative_execution.c"
                    {
#line 8115 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_83_83, mdb__declarative_execution__V_86_86);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 8122 "mdb.declarative_execution.c"
                        {
#line 8124 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_84_84, mdb__declarative_execution__V_87_87);
                        }
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8129 "mdb.declarative_execution.c"
                          {
#line 8131 "mdb.declarative_execution.c"
                            return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_85_85, mdb__declarative_execution__V_88_88);
                          }
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 5:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_89_89 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_90_90 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_92_92;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_93_93;
#line 45 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_94_94;

#line 45 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_92_92 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_93_93 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8171 "mdb.declarative_execution.c"
                    {
#line 8173 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_89_89, mdb__declarative_execution__V_92_92);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 8180 "mdb.declarative_execution.c"
                        {
#line 8182 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_90_90, mdb__declarative_execution__V_93_93);
                        }
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8187 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_91_91 == mdb__declarative_execution__V_94_94);
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 6:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_95_95 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_96_96 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_97_97 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_98_98;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_99_99;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_100_100;

#line 45 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_98_98 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_99_99 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_100_100 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8226 "mdb.declarative_execution.c"
                    {
#line 8228 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_95_95, mdb__declarative_execution__V_98_98);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 8235 "mdb.declarative_execution.c"
                        {
#line 8237 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_96_96, mdb__declarative_execution__V_99_99);
                        }
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8242 "mdb.declarative_execution.c"
                          {
#line 8244 "mdb.declarative_execution.c"
                            return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_97_97, mdb__declarative_execution__V_100_100);
                          }
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 7:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_101_101 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_102_102 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_103_103 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_104_104;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_105_105;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_106_106;

#line 45 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_104_104 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_105_105 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_106_106 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8284 "mdb.declarative_execution.c"
                    {
#line 8286 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_101_101, mdb__declarative_execution__V_104_104);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 8293 "mdb.declarative_execution.c"
                        {
#line 8295 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_102_102, mdb__declarative_execution__V_105_105);
                        }
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8300 "mdb.declarative_execution.c"
                          {
#line 8302 "mdb.declarative_execution.c"
                            return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_103_103, mdb__declarative_execution__V_106_106);
                          }
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 8:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_107_107 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_108_108 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_110_110;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_111_111;
#line 45 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_112_112;

#line 45 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_110_110 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_111_111 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8342 "mdb.declarative_execution.c"
                    {
#line 8344 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_107_107, mdb__declarative_execution__V_110_110);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 8351 "mdb.declarative_execution.c"
                        {
#line 8353 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_108_108, mdb__declarative_execution__V_111_111);
                        }
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8358 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_109_109 == mdb__declarative_execution__V_112_112);
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 9:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_113_113 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_114_114 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_115_115 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_116_116;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_117_117;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_118_118;

#line 45 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_116_116 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_117_117 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_118_118 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8397 "mdb.declarative_execution.c"
                    {
#line 8399 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_113_113, mdb__declarative_execution__V_116_116);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 8406 "mdb.declarative_execution.c"
                        {
#line 8408 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_114_114, mdb__declarative_execution__V_117_117);
                        }
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8413 "mdb.declarative_execution.c"
                          {
#line 8415 "mdb.declarative_execution.c"
                            return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_115_115, mdb__declarative_execution__V_118_118);
                          }
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
            case (MR_Integer) 10:
#line 45 "declarative_execution.m"
              {
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_119_119 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_120_120 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_121_121 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_122_122;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_123_123;
#line 45 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_124_124;

#line 45 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 45 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                  {
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_122_122 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_123_123 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 45 "declarative_execution.m"
                    mdb__declarative_execution__V_124_124 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8455 "mdb.declarative_execution.c"
                    {
#line 8457 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_119_119, mdb__declarative_execution__V_122_122);
                    }
#line 45 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 45 "declarative_execution.m"
                      {
#line 8464 "mdb.declarative_execution.c"
                        {
#line 8466 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_120_120, mdb__declarative_execution__V_123_123);
                        }
#line 45 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 8471 "mdb.declarative_execution.c"
                          {
#line 8473 "mdb.declarative_execution.c"
                            return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_121_121, mdb__declarative_execution__V_124_124);
                          }
#line 45 "declarative_execution.m"
                      }
#line 45 "declarative_execution.m"
                  }
#line 45 "declarative_execution.m"
              }
#line 45 "declarative_execution.m"
              break;
#line 45 "declarative_execution.m"
          }
#line 45 "declarative_execution.m"
          break;
#line 45 "declarative_execution.m"
      }
#line 45 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 45 "declarative_execution.m"
  }
#line 45 "declarative_execution.m"
}

#line 252 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0(
#line 252 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 252 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 252 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 252 "declarative_execution.m"
{
#line 252 "declarative_execution.m"
  {
#line 252 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 252 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_12 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 252 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_13 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 252 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_12 == mdb__declarative_execution__CastY_13);
#line 252 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 8521 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 252 "declarative_execution.m"
    else
#line 252 "declarative_execution.m"
      {
#line 252 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 252 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)));
#line 252 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1)));
#line 252 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 252 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_10_10;
#line 252 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_17_17 = (MR_Integer) mdb__declarative_execution__V_4_4;
#line 252 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_18_18 = (MR_Integer) mdb__declarative_execution__V_7_7;

#line 252 "declarative_execution.m"
        {
#line 252 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_10_10, mdb__declarative_execution__V_17_17, mdb__declarative_execution__V_18_18);
        }
#line 8551 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_10_10 == (MR_Integer) 0);
#line 252 "declarative_execution.m"
        mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 252 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 252 "declarative_execution.m"
          *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_10_10;
#line 252 "declarative_execution.m"
        else
#line 252 "declarative_execution.m"
          {
#line 252 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_11_11;

#line 252 "declarative_execution.m"
            {
#line 252 "declarative_execution.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_11_11, mdb__declarative_execution__V_5_5, mdb__declarative_execution__V_8_8);
            }
#line 8571 "mdb.declarative_execution.c"
            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_11_11 == (MR_Integer) 0);
#line 252 "declarative_execution.m"
            mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 252 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 252 "declarative_execution.m"
              *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_11_11;
#line 252 "declarative_execution.m"
            else
#line 252 "declarative_execution.m"
              {
#line 252 "declarative_execution.m"
                {
#line 252 "declarative_execution.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[4], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_6_6)), ((MR_Box) (mdb__declarative_execution__V_9_9)));
#line 252 "declarative_execution.m"
                  return;
                }
#line 252 "declarative_execution.m"
              }
#line 252 "declarative_execution.m"
          }
#line 252 "declarative_execution.m"
      }
#line 252 "declarative_execution.m"
  }
#line 252 "declarative_execution.m"
}

#line 252 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0(
#line 252 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 252 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 252 "declarative_execution.m"
{
#line 252 "declarative_execution.m"
  {
#line 252 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 252 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_9 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 252 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_10 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 252 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_9 == mdb__declarative_execution__CastY_10);
#line 252 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 252 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 252 "declarative_execution.m"
    else
#line 252 "declarative_execution.m"
      {
#line 252 "declarative_execution.m"
        MR_Word mdb__declarative_execution__TypeInfo_11_11;
#line 252 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 252 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 252 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 252 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 252 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 252 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));

#line 8644 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_6_6);
#line 252 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 252 "declarative_execution.m"
          {
#line 8650 "mdb.declarative_execution.c"
            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_4_4 == mdb__declarative_execution__V_7_7);
#line 252 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 252 "declarative_execution.m"
              {
#line 8656 "mdb.declarative_execution.c"
                mdb__declarative_execution__TypeInfo_11_11 = (MR_Word) &mdb__declarative_execution_scalar_common_1[4];
#line 8658 "mdb.declarative_execution.c"
                {
#line 8660 "mdb.declarative_execution.c"
                  return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_11_11, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_8_8)));
                }
#line 252 "declarative_execution.m"
              }
#line 252 "declarative_execution.m"
          }
#line 252 "declarative_execution.m"
      }
#line 252 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 252 "declarative_execution.m"
  }
#line 252 "declarative_execution.m"
}

#line 263 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0(
#line 263 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 263 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 263 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 263 "declarative_execution.m"
{
#line 263 "declarative_execution.m"
  {
#line 263 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 263 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_9 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 263 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_10 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 263 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_9 == mdb__declarative_execution__CastY_10);
#line 263 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 8700 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 263 "declarative_execution.m"
    else
#line 263 "declarative_execution.m"
      {
#line 263 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 263 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 263 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)));
#line 263 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1)));
#line 263 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_8_8;

#line 263 "declarative_execution.m"
        {
#line 263 "declarative_execution.m"
          mdbcomp__rtti_access____Compare____proc_layout_0_0(&mdb__declarative_execution__V_8_8, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_6_6);
        }
#line 8722 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_8_8 == (MR_Integer) 0);
#line 263 "declarative_execution.m"
        mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 263 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 263 "declarative_execution.m"
          *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_8_8;
#line 263 "declarative_execution.m"
        else
#line 263 "declarative_execution.m"
          {
#line 263 "declarative_execution.m"
            {
#line 263 "declarative_execution.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_7_7)));
#line 263 "declarative_execution.m"
              return;
            }
#line 263 "declarative_execution.m"
          }
#line 263 "declarative_execution.m"
      }
#line 263 "declarative_execution.m"
  }
#line 263 "declarative_execution.m"
}

#line 263 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0(
#line 263 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 263 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 263 "declarative_execution.m"
{
#line 263 "declarative_execution.m"
  {
#line 263 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 263 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_7 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 263 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_8 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 263 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_7 == mdb__declarative_execution__CastY_8);
#line 263 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 263 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 263 "declarative_execution.m"
    else
#line 263 "declarative_execution.m"
      {
#line 263 "declarative_execution.m"
        MR_Word mdb__declarative_execution__TypeInfo_9_9;
#line 263 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_3_3 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 263 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 263 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 263 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));

#line 8789 "mdb.declarative_execution.c"
        {
#line 8791 "mdb.declarative_execution.c"
          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____proc_layout_0_0(mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_5_5);
        }
#line 263 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 263 "declarative_execution.m"
          {
#line 8798 "mdb.declarative_execution.c"
            mdb__declarative_execution__TypeInfo_9_9 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
#line 8800 "mdb.declarative_execution.c"
            {
#line 8802 "mdb.declarative_execution.c"
              return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_9_9, ((MR_Box) (mdb__declarative_execution__V_4_4)), ((MR_Box) (mdb__declarative_execution__V_6_6)));
            }
#line 263 "declarative_execution.m"
          }
#line 263 "declarative_execution.m"
      }
#line 263 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 263 "declarative_execution.m"
  }
#line 263 "declarative_execution.m"
}

#line 317 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0(
#line 317 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 317 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2,
#line 317 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__3_3)
#line 317 "declarative_execution.m"
{
#line 317 "declarative_execution.m"
  {
#line 317 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 317 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = mdb__declarative_execution__HeadVar__2_2;
#line 317 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = mdb__declarative_execution__HeadVar__3_3;

#line 317 "declarative_execution.m"
    {
#line 317 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 317 "declarative_execution.m"
      return;
    }
#line 317 "declarative_execution.m"
  }
#line 317 "declarative_execution.m"
}

#line 317 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0(
#line 317 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__1_1,
#line 317 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2)
#line 317 "declarative_execution.m"
{
#line 317 "declarative_execution.m"
  {
#line 317 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 317 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_3 = mdb__declarative_execution__HeadVar__1_1;
#line 317 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_4 = mdb__declarative_execution__HeadVar__2_2;

#line 317 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__Cast_HeadVar1_3 == mdb__declarative_execution__Cast_HeadVar2_4);
#line 317 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 317 "declarative_execution.m"
  }
#line 317 "declarative_execution.m"
}

#line 314 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0(
#line 314 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 314 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2,
#line 314 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__3_3)
#line 314 "declarative_execution.m"
{
#line 314 "declarative_execution.m"
  {
#line 314 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 314 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = mdb__declarative_execution__HeadVar__2_2;
#line 314 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = mdb__declarative_execution__HeadVar__3_3;

#line 314 "declarative_execution.m"
    {
#line 314 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 314 "declarative_execution.m"
      return;
    }
#line 314 "declarative_execution.m"
  }
#line 314 "declarative_execution.m"
}

#line 314 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0(
#line 314 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__1_1,
#line 314 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2)
#line 314 "declarative_execution.m"
{
#line 314 "declarative_execution.m"
  {
#line 314 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 314 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_3 = mdb__declarative_execution__HeadVar__1_1;
#line 314 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_4 = mdb__declarative_execution__HeadVar__2_2;

#line 314 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__Cast_HeadVar1_3 == mdb__declarative_execution__Cast_HeadVar2_4);
#line 314 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 314 "declarative_execution.m"
  }
#line 314 "declarative_execution.m"
}

#line 278 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0(
#line 278 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 278 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 278 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 278 "declarative_execution.m"
{
#line 278 "declarative_execution.m"
  {
#line 278 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 278 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 278 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 278 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 278 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 8958 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 278 "declarative_execution.m"
    else
#line 278 "declarative_execution.m"
      {
#line 278 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 278 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 278 "declarative_execution.m"
        {
#line 278 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 278 "declarative_execution.m"
          return;
        }
#line 278 "declarative_execution.m"
      }
#line 278 "declarative_execution.m"
  }
#line 278 "declarative_execution.m"
}

#line 278 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0(
#line 278 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 278 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 278 "declarative_execution.m"
{
#line 278 "declarative_execution.m"
  {
#line 278 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 278 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 278 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 278 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 278 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 278 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 278 "declarative_execution.m"
    else
#line 278 "declarative_execution.m"
      {
#line 278 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 278 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 9016 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
#line 278 "declarative_execution.m"
      }
#line 278 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 278 "declarative_execution.m"
  }
#line 278 "declarative_execution.m"
}

#line 309 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0(
#line 309 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 309 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 309 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 309 "declarative_execution.m"
{
#line 309 "declarative_execution.m"
  {
#line 309 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 309 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 309 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 309 "declarative_execution.m"
    {
#line 309 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 309 "declarative_execution.m"
      return;
    }
#line 309 "declarative_execution.m"
  }
#line 309 "declarative_execution.m"
}

#line 309 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0(
#line 309 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_1,
#line 309 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 309 "declarative_execution.m"
{
#line 9068 "mdb.declarative_execution.c"
  {
#line 9070 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__HeadVar__2_1 == mdb__declarative_execution__HeadVar__2_2);

#line 9073 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 9075 "mdb.declarative_execution.c"
  }
#line 309 "declarative_execution.m"
}

#line 315 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0(
#line 315 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 315 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2,
#line 315 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__3_3)
#line 315 "declarative_execution.m"
{
#line 315 "declarative_execution.m"
  {
#line 315 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 315 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = mdb__declarative_execution__HeadVar__2_2;
#line 315 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = mdb__declarative_execution__HeadVar__3_3;

#line 315 "declarative_execution.m"
    {
#line 315 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 315 "declarative_execution.m"
      return;
    }
#line 315 "declarative_execution.m"
  }
#line 315 "declarative_execution.m"
}

#line 315 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0(
#line 315 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__1_1,
#line 315 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2)
#line 315 "declarative_execution.m"
{
#line 315 "declarative_execution.m"
  {
#line 315 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 315 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_3 = mdb__declarative_execution__HeadVar__1_1;
#line 315 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_4 = mdb__declarative_execution__HeadVar__2_2;

#line 315 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__Cast_HeadVar1_3 == mdb__declarative_execution__Cast_HeadVar2_4);
#line 315 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 315 "declarative_execution.m"
  }
#line 315 "declarative_execution.m"
}

#line 1559 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(
#line 1559 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1559 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ArgNum_2,
#line 1559 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1559 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__UserArgNum_4)
#line 1559 "declarative_execution.m"
{
#line 1562 "declarative_execution.m"
  while (MR_TRUE)
#line 1562 "declarative_execution.m"
    {
#line 1562 "declarative_execution.m"
      /* tailcall optimized into a loop */
#line 1562 "declarative_execution.m"
      {
#line 1562 "declarative_execution.m"
        MR_bool mdb__declarative_execution__succeeded;

#line 1562 "declarative_execution.m"
        if ((mdb__declarative_execution__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1562 "declarative_execution.m"
          {
#line 1563 "declarative_execution.m"
            {
#line 1563 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[33])));
#line 1563 "declarative_execution.m"
              return;
            }
#line 1562 "declarative_execution.m"
          }
#line 1562 "declarative_execution.m"
        else
#line 1565 "declarative_execution.m"
          {
#line 1565 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1565 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1565 "declarative_execution.m"
            MR_Word mdb__declarative_execution__UserVis_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 0)));
#line 1566 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 1)));
#line 1566 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 2)));

#line 1570 "declarative_execution.m"
#line 1570 "declarative_execution.m"
            switch (mdb__declarative_execution__UserVis_16) {
#line 1570 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1570 "declarative_execution.m"
              case (MR_Integer) 0:
#line 1568 "declarative_execution.m"
                {
#line 1568 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_23_23 = (mdb__declarative_execution__ArgNum_2 - (MR_Integer) 1);

#line 1569 "declarative_execution.m"
                  /* direct tailcall eliminated */
#line 1569 "declarative_execution.m"
                  {
#line 1569 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1569 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__ArgNum__tmp_copy_2 = mdb__declarative_execution__V_23_23;

#line 1569 "declarative_execution.m"
                    mdb__declarative_execution__ArgNum_2 = mdb__declarative_execution__ArgNum__tmp_copy_2;
#line 1569 "declarative_execution.m"
                    mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1569 "declarative_execution.m"
                  }
#line 1569 "declarative_execution.m"
                  continue;
#line 1568 "declarative_execution.m"
                }
#line 1570 "declarative_execution.m"
                break;
#line 1570 "declarative_execution.m"
              case (MR_Integer) 1:
#line 1574 "declarative_execution.m"
                {
#line 1572 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__ArgNum_2 == (MR_Integer) 1);
#line 1574 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 1573 "declarative_execution.m"
                    *mdb__declarative_execution__UserArgNum_4 = mdb__declarative_execution__CurArgNum_3;
#line 1574 "declarative_execution.m"
                  else
#line 1575 "declarative_execution.m"
                    {
#line 1575 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_19_19 = (mdb__declarative_execution__ArgNum_2 - (MR_Integer) 1);
#line 1575 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_20_20 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

#line 1575 "declarative_execution.m"
                      /* direct tailcall eliminated */
#line 1575 "declarative_execution.m"
                      {
#line 1575 "declarative_execution.m"
                        MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1575 "declarative_execution.m"
                        MR_Integer mdb__declarative_execution__ArgNum__tmp_copy_2 = mdb__declarative_execution__V_19_19;
#line 1575 "declarative_execution.m"
                        MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_20_20;

#line 1575 "declarative_execution.m"
                        mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
#line 1575 "declarative_execution.m"
                        mdb__declarative_execution__ArgNum_2 = mdb__declarative_execution__ArgNum__tmp_copy_2;
#line 1575 "declarative_execution.m"
                        mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1575 "declarative_execution.m"
                      }
#line 1575 "declarative_execution.m"
                      continue;
#line 1575 "declarative_execution.m"
                    }
#line 1574 "declarative_execution.m"
                }
#line 1570 "declarative_execution.m"
                break;
#line 1570 "declarative_execution.m"
            }
#line 1565 "declarative_execution.m"
          }
#line 1562 "declarative_execution.m"
      }
#line 1562 "declarative_execution.m"
      break;
#line 1562 "declarative_execution.m"
    }
#line 1559 "declarative_execution.m"
}

#line 1536 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(
#line 1536 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1536 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SearchUserHeadVarNum_2,
#line 1536 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1536 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__ArgNum_4)
#line 1536 "declarative_execution.m"
{
#line 1539 "declarative_execution.m"
  while (MR_TRUE)
#line 1539 "declarative_execution.m"
    {
#line 1539 "declarative_execution.m"
      /* tailcall optimized into a loop */
#line 1539 "declarative_execution.m"
      {
#line 1539 "declarative_execution.m"
        MR_bool mdb__declarative_execution__succeeded;

#line 1539 "declarative_execution.m"
        if ((mdb__declarative_execution__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1539 "declarative_execution.m"
          {
#line 1540 "declarative_execution.m"
            {
#line 1540 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[32])));
#line 1540 "declarative_execution.m"
              return;
            }
#line 1539 "declarative_execution.m"
          }
#line 1539 "declarative_execution.m"
        else
#line 1543 "declarative_execution.m"
          {
#line 1543 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1543 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1543 "declarative_execution.m"
            MR_Word mdb__declarative_execution__UserVis_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 0)));
#line 1544 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 1)));
#line 1544 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 2)));

#line 1549 "declarative_execution.m"
#line 1549 "declarative_execution.m"
            switch (mdb__declarative_execution__UserVis_16) {
#line 1549 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1549 "declarative_execution.m"
              case (MR_Integer) 0:
#line 1546 "declarative_execution.m"
                {
#line 1546 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_23_23 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

#line 1547 "declarative_execution.m"
                  /* direct tailcall eliminated */
#line 1547 "declarative_execution.m"
                  {
#line 1547 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1547 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_23_23;

#line 1547 "declarative_execution.m"
                    mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
#line 1547 "declarative_execution.m"
                    mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1547 "declarative_execution.m"
                  }
#line 1547 "declarative_execution.m"
                  continue;
#line 1546 "declarative_execution.m"
                }
#line 1549 "declarative_execution.m"
                break;
#line 1549 "declarative_execution.m"
              case (MR_Integer) 1:
#line 1553 "declarative_execution.m"
                {
#line 1551 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__SearchUserHeadVarNum_2 == (MR_Integer) 1);
#line 1553 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 1552 "declarative_execution.m"
                    *mdb__declarative_execution__ArgNum_4 = mdb__declarative_execution__CurArgNum_3;
#line 1553 "declarative_execution.m"
                  else
#line 1554 "declarative_execution.m"
                    {
#line 1554 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_19_19 = (mdb__declarative_execution__SearchUserHeadVarNum_2 - (MR_Integer) 1);
#line 1554 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_20_20 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

#line 1554 "declarative_execution.m"
                      /* direct tailcall eliminated */
#line 1554 "declarative_execution.m"
                      {
#line 1554 "declarative_execution.m"
                        MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1554 "declarative_execution.m"
                        MR_Integer mdb__declarative_execution__SearchUserHeadVarNum__tmp_copy_2 = mdb__declarative_execution__V_19_19;
#line 1554 "declarative_execution.m"
                        MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_20_20;

#line 1554 "declarative_execution.m"
                        mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
#line 1554 "declarative_execution.m"
                        mdb__declarative_execution__SearchUserHeadVarNum_2 = mdb__declarative_execution__SearchUserHeadVarNum__tmp_copy_2;
#line 1554 "declarative_execution.m"
                        mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1554 "declarative_execution.m"
                      }
#line 1554 "declarative_execution.m"
                      continue;
#line 1554 "declarative_execution.m"
                    }
#line 1553 "declarative_execution.m"
                }
#line 1549 "declarative_execution.m"
                break;
#line 1549 "declarative_execution.m"
            }
#line 1543 "declarative_execution.m"
          }
#line 1539 "declarative_execution.m"
      }
#line 1539 "declarative_execution.m"
      break;
#line 1539 "declarative_execution.m"
    }
#line 1536 "declarative_execution.m"
}

#line 1460 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__convert_node_2_p_0(
#line 1460 "declarative_execution.m"
  MR_Word mdb__declarative_execution__N1_1,
#line 1460 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__N2_2)
#line 1460 "declarative_execution.m"
{
#line 1463 "declarative_execution.m"
  {
#line 1463 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1466 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__convert_node_2_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__N1_1 ;
		{
#line 1466 "declarative_execution.m"

    N2 = N1;

#line 9454 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__N2_2  = N2;
#line 1466 "declarative_execution.m"
}
#line 1463 "declarative_execution.m"
  }
#line 1460 "declarative_execution.m"
}

#line 1448 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_id_to_key_2_p_0(
#line 1448 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_1,
#line 1448 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Key_2)
#line 1448 "declarative_execution.m"
{
#line 1450 "declarative_execution.m"
  {
#line 1450 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1453 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_id_to_key_2_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__Id_1 ;
		{
#line 1453 "declarative_execution.m"

    Key = (MR_Integer) Id;

#line 9493 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__Key_2  = Key;
#line 1453 "declarative_execution.m"
}
#line 1450 "declarative_execution.m"
  }
#line 1448 "declarative_execution.m"
}

#line 1434 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_map_4_p_0(
#line 1434 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_5,
#line 1434 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_6,
#line 1434 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3,
#line 1434 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Map_8)
#line 1434 "declarative_execution.m"
{
#line 1437 "declarative_execution.m"
  while (MR_TRUE)
#line 1437 "declarative_execution.m"
    {
#line 1437 "declarative_execution.m"
      /* tailcall optimized into a loop */
#line 1437 "declarative_execution.m"
      {
#line 1437 "declarative_execution.m"
        MR_bool mdb__declarative_execution__succeeded;
#line 1437 "declarative_execution.m"
        MR_Word mdb__declarative_execution__Map0_7 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;
#line 1444 "declarative_execution.m"
        MR_Word mdb__declarative_execution__Node1_9;

#line 898 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__NodeId_6 ;
		{
#line 898 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);

#line 9548 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__declarative_execution__Node1_9  = Node;
#line 898 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 1444 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 1439 "declarative_execution.m"
          {
#line 1439 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Key_10;
#line 1439 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Node2_11;
#line 1439 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Map1_12;
#line 1439 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Next_13;
#line 1439 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_14_14;

#line 1453 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__NodeId_6 ;
		{
#line 1453 "declarative_execution.m"

    Key = (MR_Integer) Id;

#line 9586 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Key_10  = Key;
#line 1453 "declarative_execution.m"
}
#line 1466 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__Node1_9 ;
		{
#line 1466 "declarative_execution.m"

    N2 = N1;

#line 9606 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Node2_11  = N2;
#line 1466 "declarative_execution.m"
}
#line 1441 "declarative_execution.m"
            {
#line 1441 "declarative_execution.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], ((MR_Box) (mdb__declarative_execution__Key_10)), ((MR_Box) (mdb__declarative_execution__Node2_11)), mdb__declarative_execution__Map0_7, &mdb__declarative_execution__Map1_12);
            }
#line 1478 "declarative_execution.m"
#line 1478 "declarative_execution.m"
            switch (MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) {
#line 1478 "declarative_execution.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 1478 "declarative_execution.m"
              case (MR_Integer) 0:
#line 1478 "declarative_execution.m"
                {
#line 1478 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_29_29;
#line 1478 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_30_30;
#line 1478 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_31_31;
#line 1478 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_32_32;
#line 1478 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_33_33;
#line 1478 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_34_34;
#line 1478 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_35_35;
#line 1478 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_36_36;
#line 1478 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_37_37;

#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 8)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 9)));
#line 1478 "declarative_execution.m"
                }
#line 1478 "declarative_execution.m"
                break;
#line 1478 "declarative_execution.m"
              case (MR_Integer) 1:
#line 1479 "declarative_execution.m"
                {
#line 1479 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_39_39;
#line 1479 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_40_40;
#line 1479 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_41_41;
#line 1479 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_42_42;
#line 1479 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_43_43;
#line 1479 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_44_44;
#line 1479 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_45_45;

#line 1479 "declarative_execution.m"
                  mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
#line 1479 "declarative_execution.m"
                  mdb__declarative_execution__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1479 "declarative_execution.m"
                  mdb__declarative_execution__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1479 "declarative_execution.m"
                  mdb__declarative_execution__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1479 "declarative_execution.m"
                  mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1479 "declarative_execution.m"
                  mdb__declarative_execution__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1479 "declarative_execution.m"
                  mdb__declarative_execution__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1479 "declarative_execution.m"
                  mdb__declarative_execution__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
#line 1479 "declarative_execution.m"
                }
#line 1478 "declarative_execution.m"
                break;
#line 1478 "declarative_execution.m"
              case (MR_Integer) 2:
#line 1480 "declarative_execution.m"
                {
#line 1480 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_47_47;
#line 1480 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_48_48;
#line 1480 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_49_49;
#line 1480 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_50_50;

#line 1480 "declarative_execution.m"
                  mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
#line 1480 "declarative_execution.m"
                  mdb__declarative_execution__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1480 "declarative_execution.m"
                  mdb__declarative_execution__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1480 "declarative_execution.m"
                  mdb__declarative_execution__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1480 "declarative_execution.m"
                  mdb__declarative_execution__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1480 "declarative_execution.m"
                }
#line 1478 "declarative_execution.m"
                break;
#line 1478 "declarative_execution.m"
              case (MR_Integer) 3:
#line 1478 "declarative_execution.m"
#line 1478 "declarative_execution.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) {
#line 1478 "declarative_execution.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 1478 "declarative_execution.m"
                  case (MR_Integer) 0:
#line 1481 "declarative_execution.m"
                    {
#line 1481 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_52_52;
#line 1481 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_53_53;
#line 1481 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_54_54;
#line 1481 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_55_55;
#line 1481 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_56_56;

#line 1481 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1481 "declarative_execution.m"
                      mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1481 "declarative_execution.m"
                      mdb__declarative_execution__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1481 "declarative_execution.m"
                      mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1481 "declarative_execution.m"
                      mdb__declarative_execution__V_55_55 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1481 "declarative_execution.m"
                      mdb__declarative_execution__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1481 "declarative_execution.m"
                    }
#line 1478 "declarative_execution.m"
                    break;
#line 1478 "declarative_execution.m"
                  case (MR_Integer) 1:
#line 1482 "declarative_execution.m"
                    {
#line 1482 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_58_58;
#line 1482 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_59_59;
#line 1482 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_60_60;
#line 1482 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_61_61;
#line 1482 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_62_62;
#line 1482 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_63_63;

#line 1482 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1482 "declarative_execution.m"
                      mdb__declarative_execution__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1482 "declarative_execution.m"
                      mdb__declarative_execution__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1482 "declarative_execution.m"
                      mdb__declarative_execution__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1482 "declarative_execution.m"
                      mdb__declarative_execution__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1482 "declarative_execution.m"
                      mdb__declarative_execution__V_62_62 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1482 "declarative_execution.m"
                      mdb__declarative_execution__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
#line 1482 "declarative_execution.m"
                    }
#line 1478 "declarative_execution.m"
                    break;
#line 1478 "declarative_execution.m"
                  case (MR_Integer) 2:
#line 1483 "declarative_execution.m"
                    {
#line 1483 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_65_65;

#line 1483 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1483 "declarative_execution.m"
                      mdb__declarative_execution__V_65_65 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1483 "declarative_execution.m"
                    }
#line 1478 "declarative_execution.m"
                    break;
#line 1478 "declarative_execution.m"
                  case (MR_Integer) 3:
#line 1484 "declarative_execution.m"
                    {
#line 1484 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_67_67;

#line 1484 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1484 "declarative_execution.m"
                      mdb__declarative_execution__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1484 "declarative_execution.m"
                    }
#line 1478 "declarative_execution.m"
                    break;
#line 1478 "declarative_execution.m"
                  case (MR_Integer) 4:
#line 1485 "declarative_execution.m"
                    {
#line 1485 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_69_69;
#line 1485 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_70_70;

#line 1485 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1485 "declarative_execution.m"
                      mdb__declarative_execution__V_69_69 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1485 "declarative_execution.m"
                      mdb__declarative_execution__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1485 "declarative_execution.m"
                    }
#line 1478 "declarative_execution.m"
                    break;
#line 1478 "declarative_execution.m"
                  case (MR_Integer) 5:
#line 1486 "declarative_execution.m"
                    {
#line 1486 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_72_72;
#line 1486 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_73_73;

#line 1486 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1486 "declarative_execution.m"
                      mdb__declarative_execution__V_72_72 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1486 "declarative_execution.m"
                      mdb__declarative_execution__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1486 "declarative_execution.m"
                    }
#line 1478 "declarative_execution.m"
                    break;
#line 1478 "declarative_execution.m"
                  case (MR_Integer) 6:
#line 1487 "declarative_execution.m"
                    {
#line 1487 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_75_75;
#line 1487 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_76_76;

#line 1487 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1487 "declarative_execution.m"
                      mdb__declarative_execution__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1487 "declarative_execution.m"
                      mdb__declarative_execution__V_76_76 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1487 "declarative_execution.m"
                    }
#line 1478 "declarative_execution.m"
                    break;
#line 1478 "declarative_execution.m"
                  case (MR_Integer) 7:
#line 1488 "declarative_execution.m"
                    {
#line 1488 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_78_78;
#line 1488 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_79_79;

#line 1488 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1488 "declarative_execution.m"
                      mdb__declarative_execution__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1488 "declarative_execution.m"
                      mdb__declarative_execution__V_79_79 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1488 "declarative_execution.m"
                    }
#line 1478 "declarative_execution.m"
                    break;
#line 1478 "declarative_execution.m"
                  case (MR_Integer) 8:
#line 1489 "declarative_execution.m"
                    {
#line 1489 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_81_81;
#line 1489 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_82_82;

#line 1489 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1489 "declarative_execution.m"
                      mdb__declarative_execution__V_81_81 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1489 "declarative_execution.m"
                      mdb__declarative_execution__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1489 "declarative_execution.m"
                    }
#line 1478 "declarative_execution.m"
                    break;
#line 1478 "declarative_execution.m"
                  case (MR_Integer) 9:
#line 1490 "declarative_execution.m"
                    {
#line 1490 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_84_84;
#line 1490 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_85_85;

#line 1490 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1490 "declarative_execution.m"
                      mdb__declarative_execution__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1490 "declarative_execution.m"
                      mdb__declarative_execution__V_85_85 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1490 "declarative_execution.m"
                    }
#line 1478 "declarative_execution.m"
                    break;
#line 1478 "declarative_execution.m"
                  case (MR_Integer) 10:
#line 1491 "declarative_execution.m"
                    {
#line 1491 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_87_87;
#line 1491 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_88_88;

#line 1491 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1491 "declarative_execution.m"
                      mdb__declarative_execution__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1491 "declarative_execution.m"
                      mdb__declarative_execution__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1491 "declarative_execution.m"
                    }
#line 1478 "declarative_execution.m"
                    break;
#line 1478 "declarative_execution.m"
                }
#line 1478 "declarative_execution.m"
                break;
#line 1478 "declarative_execution.m"
            }
#line 1443 "declarative_execution.m"
            mdb__declarative_execution__V_14_14 = (MR_Word) mdb__declarative_execution__Map1_12;
#line 1443 "declarative_execution.m"
            /* direct tailcall eliminated */
#line 1443 "declarative_execution.m"
            {
#line 1443 "declarative_execution.m"
              MR_Word mdb__declarative_execution__NodeId__tmp_copy_6 = mdb__declarative_execution__Next_13;
#line 1443 "declarative_execution.m"
              MR_Word mdb__declarative_execution__HeadVar__3__tmp_copy_3 = mdb__declarative_execution__V_14_14;

#line 1443 "declarative_execution.m"
              mdb__declarative_execution__HeadVar__3_3 = mdb__declarative_execution__HeadVar__3__tmp_copy_3;
#line 1443 "declarative_execution.m"
              mdb__declarative_execution__NodeId_6 = mdb__declarative_execution__NodeId__tmp_copy_6;
#line 1443 "declarative_execution.m"
            }
#line 1443 "declarative_execution.m"
            continue;
#line 1439 "declarative_execution.m"
          }
#line 1444 "declarative_execution.m"
        else
#line 1445 "declarative_execution.m"
          *mdb__declarative_execution__Map_8 = mdb__declarative_execution__HeadVar__3_3;
#line 1437 "declarative_execution.m"
      }
#line 1437 "declarative_execution.m"
      break;
#line 1437 "declarative_execution.m"
    }
#line 1434 "declarative_execution.m"
}

#line 1349 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0(
#line 1349 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_5,
#line 1349 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_6,
#line 1349 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_7,
#line 1349 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__4_4)
#line 1349 "declarative_execution.m"
{
#line 1354 "declarative_execution.m"
  {
#line 1354 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__ProgVis_6 == (MR_Integer) 0);
#line 1354 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Arg_8;
#line 1354 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;

#line 1361 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1363 "declarative_execution.m"
      mdb__declarative_execution__V_9_9 = (MR_Integer) 0;
#line 1361 "declarative_execution.m"
    else
#line 1365 "declarative_execution.m"
      mdb__declarative_execution__V_9_9 = (MR_Integer) 1;
#line 1355 "declarative_execution.m"
    {
#line 1355 "declarative_execution.m"
      mdb__declarative_execution__Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1355 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 0) = ((MR_Box) (mdb__declarative_execution__V_9_9));
#line 1355 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 1) = ((MR_Box) (mdb__declarative_execution__HldsNum_5));
#line 1355 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1355 "declarative_execution.m"
    }
#line 1354 "declarative_execution.m"
    {
#line 1354 "declarative_execution.m"
      MR_Word base;
#line 1354 "declarative_execution.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1354 "declarative_execution.m"
      *mdb__declarative_execution__HeadVar__4_4 = base;
#line 1354 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__Arg_8));
#line 1354 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_execution__Args_7));
#line 1354 "declarative_execution.m"
    }
#line 1354 "declarative_execution.m"
  }
#line 1349 "declarative_execution.m"
}

#line 1337 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_value_5_p_0(
#line 1337 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_6,
#line 1337 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_7,
#line 1337 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Val_8,
#line 1337 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_9,
#line 1337 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__5_5)
#line 1337 "declarative_execution.m"
{
#line 1342 "declarative_execution.m"
  {
#line 1342 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1342 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Arg_10;
#line 1342 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Rep_11;
#line 1342 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 1342 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;

#line 1343 "declarative_execution.m"
    {
#line 1343 "declarative_execution.m"
      mdb__term_rep__univ_to_rep_2_p_0(mdb__declarative_execution__Val_8, &mdb__declarative_execution__Rep_11);
    }
#line 1362 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__ProgVis_7 == (MR_Integer) 0);
#line 1361 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1363 "declarative_execution.m"
      mdb__declarative_execution__V_12_12 = (MR_Integer) 0;
#line 1361 "declarative_execution.m"
    else
#line 1365 "declarative_execution.m"
      mdb__declarative_execution__V_12_12 = (MR_Integer) 1;
#line 1344 "declarative_execution.m"
    {
#line 1344 "declarative_execution.m"
      mdb__declarative_execution__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1344 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_13_13, 0) = ((MR_Box) (mdb__declarative_execution__Rep_11));
#line 1344 "declarative_execution.m"
    }
#line 1344 "declarative_execution.m"
    {
#line 1344 "declarative_execution.m"
      mdb__declarative_execution__Arg_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1344 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 0) = ((MR_Box) (mdb__declarative_execution__V_12_12));
#line 1344 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 1) = ((MR_Box) (mdb__declarative_execution__HldsNum_6));
#line 1344 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 2) = ((MR_Box) (mdb__declarative_execution__V_13_13));
#line 1344 "declarative_execution.m"
    }
#line 1342 "declarative_execution.m"
    {
#line 1342 "declarative_execution.m"
      MR_Word base;
#line 1342 "declarative_execution.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1342 "declarative_execution.m"
      *mdb__declarative_execution__HeadVar__5_5 = base;
#line 1342 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__Arg_10));
#line 1342 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_execution__Args_9));
#line 1342 "declarative_execution.m"
    }
#line 1342 "declarative_execution.m"
  }
#line 1337 "declarative_execution.m"
}

#line 1324 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__init_trace_atom_args_0_f_0(void)
#line 1324 "declarative_execution.m"
{
#line 1329 "declarative_execution.m"
  {
#line 1329 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1329 "declarative_execution.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1329 "declarative_execution.m"
  }
#line 1324 "declarative_execution.m"
}

#line 1312 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__null_trace_node_id_1_p_0(
#line 1312 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Id_1)
#line 1312 "declarative_execution.m"
{
#line 1314 "declarative_execution.m"
  {
#line 1314 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1317 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__null_trace_node_id_1_p_0

	MR_Word Id;

		{
#line 1317 "declarative_execution.m"

    Id = (MR_Word) NULL;

#line 10195 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__Id_1  = Id;
#line 1317 "declarative_execution.m"
}
#line 1314 "declarative_execution.m"
  }
#line 1312 "declarative_execution.m"
}

#line 1303 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_fail_node_3_f_0(
#line 1303 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1303 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1303 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1303 "declarative_execution.m"
{
#line 1310 "declarative_execution.m"
  {
#line 1310 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1310 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1310 "declarative_execution.m"
    {
#line 1310 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1310 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1310 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1310 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Neg_6));
#line 1310 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1310 "declarative_execution.m"
    }
#line 1310 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1310 "declarative_execution.m"
  }
#line 1303 "declarative_execution.m"
}

#line 1294 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_succ_node_3_f_0(
#line 1294 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1294 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1294 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1294 "declarative_execution.m"
{
#line 1301 "declarative_execution.m"
  {
#line 1301 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1301 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1301 "declarative_execution.m"
    {
#line 1301 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1301 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1301 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1301 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Neg_6));
#line 1301 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1301 "declarative_execution.m"
    }
#line 1301 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1301 "declarative_execution.m"
  }
#line 1294 "declarative_execution.m"
}

#line 1286 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_node_2_f_0(
#line 1286 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1286 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1286 "declarative_execution.m"
{
#line 1292 "declarative_execution.m"
  {
#line 1292 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1292 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1292 "declarative_execution.m"
    {
#line 1292 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1292 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1292 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1292 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1292 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1292 "declarative_execution.m"
    }
#line 1292 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1292 "declarative_execution.m"
  }
#line 1286 "declarative_execution.m"
}

#line 1277 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_else_node_3_f_0(
#line 1277 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1277 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1277 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1277 "declarative_execution.m"
{
#line 1284 "declarative_execution.m"
  {
#line 1284 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1284 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1284 "declarative_execution.m"
    {
#line 1284 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1284 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1284 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1284 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Cond_6));
#line 1284 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1284 "declarative_execution.m"
    }
#line 1284 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1284 "declarative_execution.m"
  }
#line 1277 "declarative_execution.m"
}

#line 1268 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_then_node_3_f_0(
#line 1268 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1268 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1268 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1268 "declarative_execution.m"
{
#line 1275 "declarative_execution.m"
  {
#line 1275 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1275 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1275 "declarative_execution.m"
    {
#line 1275 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1275 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1275 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1275 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Cond_6));
#line 1275 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1275 "declarative_execution.m"
    }
#line 1275 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1275 "declarative_execution.m"
  }
#line 1268 "declarative_execution.m"
}

#line 1260 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_cond_node_2_f_0(
#line 1260 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1260 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1260 "declarative_execution.m"
{
#line 1266 "declarative_execution.m"
  {
#line 1266 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1266 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1266 "declarative_execution.m"
    {
#line 1266 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1266 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1266 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1266 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1266 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1266 "declarative_execution.m"
    }
#line 1266 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1266 "declarative_execution.m"
  }
#line 1260 "declarative_execution.m"
}

#line 1244 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_later_disj_node_4_f_0(
#line 1244 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_6,
#line 1244 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1244 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_8,
#line 1244 "declarative_execution.m"
  MR_Word mdb__declarative_execution__PrevDisj_9)
#line 1244 "declarative_execution.m"
{
#line 1251 "declarative_execution.m"
  {
#line 1251 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1251 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__5_5;
#line 1251 "declarative_execution.m"
    MR_Word mdb__declarative_execution__FirstDisj_10;
#line 1251 "declarative_execution.m"
    MR_Word mdb__declarative_execution__PrevDisjNode_11;

#line 1252 "declarative_execution.m"
    {
#line 1252 "declarative_execution.m"
      mdb__declarative_execution__disj_node_from_id_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__Store_6)), ((MR_Box) (mdb__declarative_execution__PrevDisj_9)), &mdb__declarative_execution__PrevDisjNode_11);
    }
#line 1256 "declarative_execution.m"
    if (((((MR_tag((MR_Word) mdb__declarative_execution__PrevDisjNode_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1255 "declarative_execution.m"
      mdb__declarative_execution__FirstDisj_10 = mdb__declarative_execution__PrevDisj_9;
#line 1256 "declarative_execution.m"
    else
#line 1257 "declarative_execution.m"
      {
#line 1257 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 1)));
#line 1257 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 2)));

#line 1257 "declarative_execution.m"
        mdb__declarative_execution__FirstDisj_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 3)));
#line 1257 "declarative_execution.m"
      }
#line 1251 "declarative_execution.m"
    {
#line 1251 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1251 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1251 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_7));
#line 1251 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 2) = ((MR_Box) (mdb__declarative_execution__Label_8));
#line 1251 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 3) = ((MR_Box) (mdb__declarative_execution__FirstDisj_10));
#line 1251 "declarative_execution.m"
    }
#line 1251 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__5_5;
#line 1251 "declarative_execution.m"
  }
#line 1244 "declarative_execution.m"
}

#line 1235 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_first_disj_node_2_f_0(
#line 1235 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1235 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1235 "declarative_execution.m"
{
#line 1242 "declarative_execution.m"
  {
#line 1242 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1242 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1242 "declarative_execution.m"
    {
#line 1242 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1242 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1242 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1242 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1242 "declarative_execution.m"
    }
#line 1242 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1242 "declarative_execution.m"
  }
#line 1235 "declarative_execution.m"
}

#line 1227 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_switch_node_2_f_0(
#line 1227 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1227 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1227 "declarative_execution.m"
{
#line 1233 "declarative_execution.m"
  {
#line 1233 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1233 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1233 "declarative_execution.m"
    {
#line 1233 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1233 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1233 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1233 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1233 "declarative_execution.m"
    }
#line 1233 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1233 "declarative_execution.m"
  }
#line 1227 "declarative_execution.m"
}

#line 1214 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__construct_excp_node_8_p_0(
#line 1214 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_9,
#line 1214 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_10,
#line 1214 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_11,
#line 1214 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exception_12,
#line 1214 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_13,
#line 1214 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_14,
#line 1214 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_15,
#line 1214 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Excp_16)
#line 1214 "declarative_execution.m"
{
#line 1222 "declarative_execution.m"
  {
#line 1222 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1222 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ExceptionRep_17;

#line 1223 "declarative_execution.m"
    {
#line 1223 "declarative_execution.m"
      mdb__term_rep__univ_to_rep_2_p_0(mdb__declarative_execution__Exception_12, &mdb__declarative_execution__ExceptionRep_17);
    }
#line 1224 "declarative_execution.m"
    {
#line 1224 "declarative_execution.m"
      MR_Word base;
#line 1224 "declarative_execution.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1224 "declarative_execution.m"
      *mdb__declarative_execution__Excp_16 = base;
#line 1224 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1224 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_9));
#line 1224 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_execution__Call_10));
#line 1224 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mdb__declarative_execution__MaybeRedo_11));
#line 1224 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mdb__declarative_execution__ExceptionRep_17));
#line 1224 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mdb__declarative_execution__EventNo_13));
#line 1224 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mdb__declarative_execution__Label_14));
#line 1224 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mdb__declarative_execution__Suspicion_15));
#line 1224 "declarative_execution.m"
    }
#line 1222 "declarative_execution.m"
  }
#line 1214 "declarative_execution.m"
}

#line 1204 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_fail_node_6_f_0(
#line 1204 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_8,
#line 1204 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_9,
#line 1204 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Redo_10,
#line 1204 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_11,
#line 1204 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_12,
#line 1204 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_13)
#line 1204 "declarative_execution.m"
{
#line 1212 "declarative_execution.m"
  {
#line 1212 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1212 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__7_7;

#line 1212 "declarative_execution.m"
    {
#line 1212 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1212 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1212 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_8));
#line 1212 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 2) = ((MR_Box) (mdb__declarative_execution__Call_9));
#line 1212 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 3) = ((MR_Box) (mdb__declarative_execution__Redo_10));
#line 1212 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_11));
#line 1212 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 5) = ((MR_Box) (mdb__declarative_execution__Label_12));
#line 1212 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 6) = ((MR_Box) (mdb__declarative_execution__Suspicion_13));
#line 1212 "declarative_execution.m"
    }
#line 1212 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__7_7;
#line 1212 "declarative_execution.m"
  }
#line 1204 "declarative_execution.m"
}

#line 1195 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_redo_node_5_f_0(
#line 1195 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1195 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exit_8,
#line 1195 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Event_9,
#line 1195 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_10,
#line 1195 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_11)
#line 1195 "declarative_execution.m"
{
#line 1202 "declarative_execution.m"
  {
#line 1202 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1202 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__6_6;

#line 1202 "declarative_execution.m"
    {
#line 1202 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1202 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_7));
#line 1202 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 1) = ((MR_Box) (mdb__declarative_execution__Exit_8));
#line 1202 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 2) = ((MR_Box) (mdb__declarative_execution__Event_9));
#line 1202 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 3) = ((MR_Box) (mdb__declarative_execution__Label_10));
#line 1202 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 4) = ((MR_Box) (mdb__declarative_execution__Suspicion_11));
#line 1202 "declarative_execution.m"
    }
#line 1202 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__6_6;
#line 1202 "declarative_execution.m"
  }
#line 1195 "declarative_execution.m"
}

#line 1183 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_exit_node_8_f_0(
#line 1183 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_10,
#line 1183 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_11,
#line 1183 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_12,
#line 1183 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_13,
#line 1183 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1183 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_15,
#line 1183 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
#line 1183 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_17)
#line 1183 "declarative_execution.m"
{
#line 1192 "declarative_execution.m"
  {
#line 1192 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1192 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__9_9;

#line 1192 "declarative_execution.m"
    {
#line 1192 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1192 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_10));
#line 1192 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 1) = ((MR_Box) (mdb__declarative_execution__Call_11));
#line 1192 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 2) = ((MR_Box) (mdb__declarative_execution__MaybeRedo_12));
#line 1192 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 3) = ((MR_Box) (mdb__declarative_execution__AtomArgs_13));
#line 1192 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_14));
#line 1192 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 5) = ((MR_Box) (mdb__declarative_execution__Label_15));
#line 1192 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 6) = ((MR_Box) (mdb__declarative_execution__IoSeqNum_16));
#line 1192 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 7) = ((MR_Box) (mdb__declarative_execution__Suspicion_17));
#line 1192 "declarative_execution.m"
    }
#line 1192 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__9_9;
#line 1192 "declarative_execution.m"
  }
#line 1183 "declarative_execution.m"
}

#line 1177 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_no_maybe_label_0_f_0(void)
#line 1177 "declarative_execution.m"
{
#line 1181 "declarative_execution.m"
  {
#line 1181 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1181 "declarative_execution.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1181 "declarative_execution.m"
  }
#line 1177 "declarative_execution.m"
}

#line 1171 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_yes_maybe_label_1_f_0(
#line 1171 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_3)
#line 1171 "declarative_execution.m"
{
#line 1175 "declarative_execution.m"
  {
#line 1175 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1175 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__2_2;

#line 1175 "declarative_execution.m"
    {
#line 1175 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1175 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, 0) = ((MR_Box) (mdb__declarative_execution__Label_3));
#line 1175 "declarative_execution.m"
    }
#line 1175 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__2_2;
#line 1175 "declarative_execution.m"
  }
#line 1171 "declarative_execution.m"
}

#line 1148 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_call_node_9_f_0(
#line 1148 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_11,
#line 1148 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_12,
#line 1148 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SeqNo_13,
#line 1148 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1148 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
#line 1148 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
#line 1148 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_17,
#line 1148 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
#line 1148 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_19)
#line 1148 "declarative_execution.m"
{
#line 1156 "declarative_execution.m"
  {
#line 1156 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1156 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call_20;
#line 1156 "declarative_execution.m"
    MR_Word mdb__declarative_execution__MaybeImplicitTreeInfo_21;
#line 1156 "declarative_execution.m"
    MR_Word mdb__declarative_execution__LastInterface_22;

#line 1160 "declarative_execution.m"
#line 1160 "declarative_execution.m"
    switch (mdb__declarative_execution__AtMaxDepth_15) {
#line 1160 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1160 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1159 "declarative_execution.m"
        mdb__declarative_execution__MaybeImplicitTreeInfo_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1160 "declarative_execution.m"
        break;
#line 1160 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1161 "declarative_execution.m"
        {
#line 1165 "declarative_execution.m"
          mdb__declarative_execution__MaybeImplicitTreeInfo_21 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_4[0]);
#line 1161 "declarative_execution.m"
        }
#line 1160 "declarative_execution.m"
        break;
#line 1160 "declarative_execution.m"
    }
#line 1317 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__construct_call_node_9_f_0

	MR_Word Id;

		{
#line 1317 "declarative_execution.m"

    Id = (MR_Word) NULL;

#line 10905 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__LastInterface_22  = Id;
#line 1317 "declarative_execution.m"
}
#line 1168 "declarative_execution.m"
    {
#line 1168 "declarative_execution.m"
      mdb__declarative_execution__Call_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1168 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_11));
#line 1168 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 1) = ((MR_Box) (mdb__declarative_execution__LastInterface_22));
#line 1168 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 2) = ((MR_Box) (mdb__declarative_execution__AtomArgs_12));
#line 1168 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 3) = ((MR_Box) (mdb__declarative_execution__SeqNo_13));
#line 1168 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_14));
#line 1168 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 5) = ((MR_Box) (mdb__declarative_execution__MaybeImplicitTreeInfo_21));
#line 1168 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 6) = ((MR_Box) (mdb__declarative_execution__MaybeReturnLabel_16));
#line 1168 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 7) = ((MR_Box) (mdb__declarative_execution__Label_17));
#line 1168 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 8) = ((MR_Box) (mdb__declarative_execution__IoSeqNum_18));
#line 1168 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 9) = ((MR_Box) (mdb__declarative_execution__Suspicion_19));
#line 1168 "declarative_execution.m"
    }
#line 1156 "declarative_execution.m"
    return mdb__declarative_execution__Call_20;
#line 1156 "declarative_execution.m"
  }
#line 1148 "declarative_execution.m"
}

#line 1132 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__print_trace_node_4_p_0(
#line 1132 "declarative_execution.m"
  MR_Word mdb__declarative_execution__OutStr_5,
#line 1132 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_6)
#line 1132 "declarative_execution.m"
{
#line 1138 "declarative_execution.m"
  {
#line 1138 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1138 "declarative_execution.m"
    MR_Word mdb__declarative_execution__CNode_8;

#line 1466 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__print_trace_node_4_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__Node_6 ;
		{
#line 1466 "declarative_execution.m"

    N2 = N1;

#line 10974 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__CNode_8  = N2;
#line 1466 "declarative_execution.m"
}
#line 1140 "declarative_execution.m"
    {
#line 1140 "declarative_execution.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[0], mdb__declarative_execution__OutStr_5, ((MR_Box) (mdb__declarative_execution__CNode_8)));
#line 1140 "declarative_execution.m"
      return;
    }
#line 1138 "declarative_execution.m"
  }
#line 1132 "declarative_execution.m"
}

#line 1116 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__find_prev_contour_store_2_f_0(
#line 1116 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1116 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_5)
#line 1116 "declarative_execution.m"
{
#line 1121 "declarative_execution.m"
  {
#line 1121 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1121 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Prev_6;
#line 1121 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9 = (MR_Word) &mdb__declarative_execution_scalar_common_2[0];
#line 1121 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node_7;
#line 1125 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Prev0_8;

#line 1122 "declarative_execution.m"
    {
#line 1122 "declarative_execution.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Id_5)), &mdb__declarative_execution__Node_7);
    }
#line 700 "declarative_execution.m"
#line 700 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_7)) {
#line 700 "declarative_execution.m"
      default:
#line 700 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_FALSE;
#line 700 "declarative_execution.m"
        break;
#line 700 "declarative_execution.m"
      case (MR_Integer) 0:
#line 714 "declarative_execution.m"
        {
#line 715 "declarative_execution.m"
          {
#line 715 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[29])));
          }
#line 714 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 714 "declarative_execution.m"
        }
#line 700 "declarative_execution.m"
        break;
#line 700 "declarative_execution.m"
      case (MR_Integer) 2:
#line 704 "declarative_execution.m"
        {
#line 704 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Exit_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
#line 704 "declarative_execution.m"
          MR_Word mdb__declarative_execution__ExitNode_25;
#line 704 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 0)));
#line 704 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
#line 704 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
#line 704 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 4)));
#line 706 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_66_66;
#line 706 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_67_67;
#line 706 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_68_68;
#line 706 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_69_69;
#line 706 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_70_70;
#line 706 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_71_71;
#line 706 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_72_72;

#line 705 "declarative_execution.m"
          {
#line 705 "declarative_execution.m"
            mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Exit_21)), &mdb__declarative_execution__ExitNode_25);
          }
#line 706 "declarative_execution.m"
          mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 0)));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 1)));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 2)));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 3)));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 4)));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 5)));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 6)));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 7)));
#line 704 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 704 "declarative_execution.m"
        }
#line 700 "declarative_execution.m"
        break;
#line 700 "declarative_execution.m"
      case (MR_Integer) 3:
#line 700 "declarative_execution.m"
#line 700 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 0)))) {
#line 700 "declarative_execution.m"
          default:
#line 700 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_FALSE;
#line 700 "declarative_execution.m"
            break;
#line 700 "declarative_execution.m"
          case (MR_Integer) 0:
#line 700 "declarative_execution.m"
            {
#line 700 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Call_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
#line 700 "declarative_execution.m"
              MR_Word mdb__declarative_execution__CallNode_19;
#line 700 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
#line 700 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
#line 700 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 4)));
#line 700 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 5)));
#line 700 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 6)));
#line 702 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_57_57;
#line 702 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_58_58;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_59_59;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_60_60;
#line 702 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_61_61;
#line 702 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_62_62;
#line 702 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_63_63;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_64_64;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_65_65;

#line 701 "declarative_execution.m"
              {
#line 701 "declarative_execution.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Call_14)), &mdb__declarative_execution__CallNode_19);
              }
#line 702 "declarative_execution.m"
              mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 0)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 1)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 2)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 3)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 4)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 5)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 6)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_63_63 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 7)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 8)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 9)));
#line 700 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 700 "declarative_execution.m"
            }
#line 700 "declarative_execution.m"
            break;
#line 700 "declarative_execution.m"
          case (MR_Integer) 5:
#line 717 "declarative_execution.m"
            {
#line 718 "declarative_execution.m"
              {
#line 718 "declarative_execution.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[30])));
              }
#line 717 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 717 "declarative_execution.m"
            }
#line 700 "declarative_execution.m"
            break;
#line 700 "declarative_execution.m"
          case (MR_Integer) 8:
#line 720 "declarative_execution.m"
            {
#line 721 "declarative_execution.m"
              {
#line 721 "declarative_execution.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[31])));
              }
#line 720 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 720 "declarative_execution.m"
            }
#line 700 "declarative_execution.m"
            break;
#line 700 "declarative_execution.m"
          case (MR_Integer) 10:
#line 708 "declarative_execution.m"
            {
#line 708 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Neg_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
#line 708 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_56_56;
#line 708 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
#line 708 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
#line 709 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_29_29;
#line 709 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_30_30;

#line 709 "declarative_execution.m"
              {
#line 709 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Neg_27)), &mdb__declarative_execution__V_56_56);
              }
#line 709 "declarative_execution.m"
              mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 1)));
#line 709 "declarative_execution.m"
              mdb__declarative_execution__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 2)));
#line 709 "declarative_execution.m"
              mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 3)));
#line 708 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 708 "declarative_execution.m"
            }
#line 700 "declarative_execution.m"
            break;
#line 700 "declarative_execution.m"
        }
#line 700 "declarative_execution.m"
        break;
#line 700 "declarative_execution.m"
    }
#line 1125 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1124 "declarative_execution.m"
      mdb__declarative_execution__Prev_6 = mdb__declarative_execution__Prev0_8;
#line 1125 "declarative_execution.m"
    else
#line 1126 "declarative_execution.m"
      mdb__declarative_execution__Prev_6 = mdb__declarative_execution__Id_5;
#line 1121 "declarative_execution.m"
    return mdb__declarative_execution__Prev_6;
#line 1121 "declarative_execution.m"
  }
#line 1116 "declarative_execution.m"
}

#line 1103 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__step_left_in_contour_store_2_f_0(
#line 1103 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1103 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 1103 "declarative_execution.m"
{
#line 1108 "declarative_execution.m"
  {
#line 1108 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1108 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;
#line 1108 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_HeadVar__3_3;

#line 1108 "declarative_execution.m"
    {
#line 1108 "declarative_execution.m"
      mdb__declarative_execution__conv0_HeadVar__3_3 = mdb__declarative_execution__step_left_in_contour_2_f_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__Store_4)), mdb__declarative_execution__Node_5);
    }
#line 1108 "declarative_execution.m"
    mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv0_HeadVar__3_3);
#line 1108 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1108 "declarative_execution.m"
  }
#line 1103 "declarative_execution.m"
}

#line 1090 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_first_disj_2_p_0(
#line 1090 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1090 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__2_2)
#line 1090 "declarative_execution.m"
{
#line 1096 "declarative_execution.m"
  {
#line 1096 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1096 "declarative_execution.m"
    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1314 "declarative_execution.m"
      {
#line 1317 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__trace_node_first_disj_2_p_0

	MR_Word Id;

		{
#line 1317 "declarative_execution.m"

    Id = (MR_Word) NULL;

#line 11327 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__HeadVar__2_2  = Id;
#line 1317 "declarative_execution.m"
}
#line 1314 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1314 "declarative_execution.m"
      }
#line 1096 "declarative_execution.m"
    else
#line 1096 "declarative_execution.m"
    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1098 "declarative_execution.m"
      {
#line 1098 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1098 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));

#line 1098 "declarative_execution.m"
        *mdb__declarative_execution__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 1098 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1098 "declarative_execution.m"
      }
#line 1096 "declarative_execution.m"
    else
#line 1096 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_FALSE;
#line 1096 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1096 "declarative_execution.m"
  }
#line 1090 "declarative_execution.m"
}

#line 1077 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_call_3_p_0(
#line 1077 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_1,
#line 1077 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1077 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Call_3)
#line 1077 "declarative_execution.m"
{
#line 1083 "declarative_execution.m"
  {
#line 1083 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1083 "declarative_execution.m"
#line 1083 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) {
#line 1083 "declarative_execution.m"
      default:
#line 1083 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_FALSE;
#line 1083 "declarative_execution.m"
        break;
#line 1083 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1083 "declarative_execution.m"
        {
#line 1083 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 1083 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_7_7;
#line 1083 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_8_8;
#line 1083 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_9_9;
#line 1083 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_10_10;
#line 1083 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_11_11;
#line 1083 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_12_12;

#line 1083 "declarative_execution.m"
          *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1083 "declarative_execution.m"
          mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1083 "declarative_execution.m"
          mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1083 "declarative_execution.m"
          mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1083 "declarative_execution.m"
          mdb__declarative_execution__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 1083 "declarative_execution.m"
          mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 1083 "declarative_execution.m"
          mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 1083 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 1083 "declarative_execution.m"
        }
#line 1083 "declarative_execution.m"
        break;
#line 1083 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1084 "declarative_execution.m"
        {
#line 1084 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Exit_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1084 "declarative_execution.m"
          MR_Word mdb__declarative_execution__ExitNode_20;
#line 1084 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 1084 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1084 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1084 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1086 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_36_36;
#line 1086 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_37_37;
#line 1086 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_38_38;
#line 1086 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_39_39;
#line 1086 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_40_40;
#line 1086 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_41_41;
#line 1086 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_42_42;

#line 1085 "declarative_execution.m"
          {
#line 1085 "declarative_execution.m"
            mdb__declarative_execution__exit_node_from_id_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__S_1)), ((MR_Box) (mdb__declarative_execution__Exit_15)), &mdb__declarative_execution__ExitNode_20);
          }
#line 1086 "declarative_execution.m"
          mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 0)));
#line 1086 "declarative_execution.m"
          *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 1)));
#line 1086 "declarative_execution.m"
          mdb__declarative_execution__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 2)));
#line 1086 "declarative_execution.m"
          mdb__declarative_execution__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 3)));
#line 1086 "declarative_execution.m"
          mdb__declarative_execution__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 4)));
#line 1086 "declarative_execution.m"
          mdb__declarative_execution__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 5)));
#line 1086 "declarative_execution.m"
          mdb__declarative_execution__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 6)));
#line 1086 "declarative_execution.m"
          mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 7)));
#line 1084 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 1084 "declarative_execution.m"
        }
#line 1083 "declarative_execution.m"
        break;
#line 1083 "declarative_execution.m"
      case (MR_Integer) 3:
#line 1083 "declarative_execution.m"
#line 1083 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) {
#line 1083 "declarative_execution.m"
          default:
#line 1083 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_FALSE;
#line 1083 "declarative_execution.m"
            break;
#line 1083 "declarative_execution.m"
          case (MR_Integer) 0:
#line 1087 "declarative_execution.m"
            {
#line 1087 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1087 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_24_24;
#line 1087 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_25_25;
#line 1087 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_26_26;
#line 1087 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_27_27;

#line 1087 "declarative_execution.m"
              *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1087 "declarative_execution.m"
              mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1087 "declarative_execution.m"
              mdb__declarative_execution__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1087 "declarative_execution.m"
              mdb__declarative_execution__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 1087 "declarative_execution.m"
              mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 1087 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 1087 "declarative_execution.m"
            }
#line 1083 "declarative_execution.m"
            break;
#line 1083 "declarative_execution.m"
          case (MR_Integer) 1:
#line 1088 "declarative_execution.m"
            {
#line 1088 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1088 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_31_31;
#line 1088 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_32_32;
#line 1088 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_33_33;
#line 1088 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_34_34;
#line 1088 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_35_35;

#line 1088 "declarative_execution.m"
              *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1088 "declarative_execution.m"
              mdb__declarative_execution__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1088 "declarative_execution.m"
              mdb__declarative_execution__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1088 "declarative_execution.m"
              mdb__declarative_execution__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 1088 "declarative_execution.m"
              mdb__declarative_execution__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 1088 "declarative_execution.m"
              mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 1088 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 1088 "declarative_execution.m"
            }
#line 1083 "declarative_execution.m"
            break;
#line 1083 "declarative_execution.m"
        }
#line 1083 "declarative_execution.m"
        break;
#line 1083 "declarative_execution.m"
    }
#line 1083 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1083 "declarative_execution.m"
  }
#line 1077 "declarative_execution.m"
}

#line 1062 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_seqno_3_p_0(
#line 1062 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_4,
#line 1062 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 1062 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__SeqNo_6)
#line 1062 "declarative_execution.m"
{
#line 1071 "declarative_execution.m"
  {
#line 1071 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 0)));
#line 1071 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__SeqNo0_7;
#line 1069 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;
#line 1069 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_11_11;
#line 1069 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 1069 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_13_13;
#line 1069 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_14_14;
#line 1069 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_15_15;
#line 1069 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_16_16;
#line 1069 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17;
#line 1069 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_18_18;

#line 1069 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1069 "declarative_execution.m"
      {
#line 1069 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 0)));
#line 1069 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 1)));
#line 1069 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 1069 "declarative_execution.m"
        mdb__declarative_execution__SeqNo0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 1069 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 1069 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 1069 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 1069 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
#line 1069 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 8)));
#line 1069 "declarative_execution.m"
        mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 9)));
#line 1070 "declarative_execution.m"
        *mdb__declarative_execution__SeqNo_6 = mdb__declarative_execution__SeqNo0_7;
#line 1070 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1069 "declarative_execution.m"
      }
#line 1069 "declarative_execution.m"
    else
#line 1072 "declarative_execution.m"
      {
#line 1072 "declarative_execution.m"
        MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28;
#line 1072 "declarative_execution.m"
        MR_Word mdb__declarative_execution__Call_8;
#line 1072 "declarative_execution.m"
        MR_Word mdb__declarative_execution__CallNode_9;
#line 1074 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_19_19;
#line 1074 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_20_20;
#line 1074 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_21_21;
#line 1074 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_22_22;
#line 1074 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_23_23;
#line 1074 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_24_24;
#line 1074 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_25_25;
#line 1074 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_26_26;
#line 1074 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_27_27;

#line 1072 "declarative_execution.m"
        {
#line 1072 "declarative_execution.m"
          mdb__declarative_execution__succeeded = mdb__declarative_execution__trace_node_call_3_p_0(mdb__declarative_execution__S_4, mdb__declarative_execution__Node_5, &mdb__declarative_execution__Call_8);
        }
#line 1072 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 1072 "declarative_execution.m"
          {
#line 11682 "mdb.declarative_execution.c"
            mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28 = (MR_Word) &mdb__declarative_execution_scalar_common_2[0];
#line 1073 "declarative_execution.m"
            {
#line 1073 "declarative_execution.m"
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28, ((MR_Box) (mdb__declarative_execution__S_4)), ((MR_Box) (mdb__declarative_execution__Call_8)), &mdb__declarative_execution__CallNode_9);
            }
#line 1074 "declarative_execution.m"
            mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 0)));
#line 1074 "declarative_execution.m"
            mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 1)));
#line 1074 "declarative_execution.m"
            mdb__declarative_execution__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 2)));
#line 1074 "declarative_execution.m"
            *mdb__declarative_execution__SeqNo_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 3)));
#line 1074 "declarative_execution.m"
            mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 4)));
#line 1074 "declarative_execution.m"
            mdb__declarative_execution__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 5)));
#line 1074 "declarative_execution.m"
            mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 6)));
#line 1074 "declarative_execution.m"
            mdb__declarative_execution__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 7)));
#line 1074 "declarative_execution.m"
            mdb__declarative_execution__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 8)));
#line 1074 "declarative_execution.m"
            mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 9)));
#line 1074 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_TRUE;
#line 1072 "declarative_execution.m"
          }
#line 1072 "declarative_execution.m"
      }
#line 1071 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1071 "declarative_execution.m"
  }
#line 1062 "declarative_execution.m"
}

#line 1037 "declarative_execution.m"
static MR_String MR_CALL 
mdb__declarative_execution__trace_node_path_1_f_0(
#line 1037 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_3)
#line 1037 "declarative_execution.m"
{
#line 1041 "declarative_execution.m"
  {
#line 1041 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1041 "declarative_execution.m"
    MR_String mdb__declarative_execution__Path_4;
#line 1041 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_5;

#line 1047 "declarative_execution.m"
#line 1047 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_3)) {
#line 1047 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1047 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1047 "declarative_execution.m"
        {
#line 1047 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
#line 1047 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1047 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1047 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1047 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1047 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1047 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1047 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_15_15;
#line 1047 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_16_16;

#line 1047 "declarative_execution.m"
          mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
#line 1047 "declarative_execution.m"
          mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 8)));
#line 1047 "declarative_execution.m"
          mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 9)));
#line 1047 "declarative_execution.m"
        }
#line 1047 "declarative_execution.m"
        break;
#line 1047 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1048 "declarative_execution.m"
        {
#line 1048 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
#line 1048 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1048 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1048 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1048 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1048 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_23_23;
#line 1048 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_24_24;

#line 1048 "declarative_execution.m"
          mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1048 "declarative_execution.m"
          mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1048 "declarative_execution.m"
          mdb__declarative_execution__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
#line 1048 "declarative_execution.m"
        }
#line 1047 "declarative_execution.m"
        break;
#line 1047 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1049 "declarative_execution.m"
        {
#line 1049 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
#line 1049 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1049 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1049 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_29_29;

#line 1049 "declarative_execution.m"
          mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1049 "declarative_execution.m"
          mdb__declarative_execution__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1049 "declarative_execution.m"
        }
#line 1047 "declarative_execution.m"
        break;
#line 1047 "declarative_execution.m"
      case (MR_Integer) 3:
#line 1047 "declarative_execution.m"
#line 1047 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) {
#line 1047 "declarative_execution.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1047 "declarative_execution.m"
          case (MR_Integer) 0:
#line 1050 "declarative_execution.m"
            {
#line 1050 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1050 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1050 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1050 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1050 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_35_35;

#line 1050 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1050 "declarative_execution.m"
              mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1050 "declarative_execution.m"
            }
#line 1047 "declarative_execution.m"
            break;
#line 1047 "declarative_execution.m"
          case (MR_Integer) 1:
#line 1051 "declarative_execution.m"
            {
#line 1051 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1051 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1051 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1051 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1051 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1051 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_42_42;

#line 1051 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1051 "declarative_execution.m"
              mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
#line 1051 "declarative_execution.m"
            }
#line 1047 "declarative_execution.m"
            break;
#line 1047 "declarative_execution.m"
          case (MR_Integer) 2:
#line 1052 "declarative_execution.m"
            {
#line 1052 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));

#line 1052 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1052 "declarative_execution.m"
            }
#line 1047 "declarative_execution.m"
            break;
#line 1047 "declarative_execution.m"
          case (MR_Integer) 3:
#line 1053 "declarative_execution.m"
            {
#line 1053 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));

#line 1053 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1053 "declarative_execution.m"
            }
#line 1047 "declarative_execution.m"
            break;
#line 1047 "declarative_execution.m"
          case (MR_Integer) 4:
#line 1054 "declarative_execution.m"
            {
#line 1054 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1054 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_49_49;

#line 1054 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1054 "declarative_execution.m"
              mdb__declarative_execution__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1054 "declarative_execution.m"
            }
#line 1047 "declarative_execution.m"
            break;
#line 1047 "declarative_execution.m"
          case (MR_Integer) 5:
#line 1055 "declarative_execution.m"
            {
#line 1055 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1055 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_52_52;

#line 1055 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1055 "declarative_execution.m"
              mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1055 "declarative_execution.m"
            }
#line 1047 "declarative_execution.m"
            break;
#line 1047 "declarative_execution.m"
          case (MR_Integer) 6:
#line 1056 "declarative_execution.m"
            {
#line 1056 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1056 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1056 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1056 "declarative_execution.m"
            }
#line 1047 "declarative_execution.m"
            break;
#line 1047 "declarative_execution.m"
          case (MR_Integer) 7:
#line 1057 "declarative_execution.m"
            {
#line 1057 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1057 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1057 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1057 "declarative_execution.m"
            }
#line 1047 "declarative_execution.m"
            break;
#line 1047 "declarative_execution.m"
          case (MR_Integer) 8:
#line 1058 "declarative_execution.m"
            {
#line 1058 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1058 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_61_61;

#line 1058 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1058 "declarative_execution.m"
              mdb__declarative_execution__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1058 "declarative_execution.m"
            }
#line 1047 "declarative_execution.m"
            break;
#line 1047 "declarative_execution.m"
          case (MR_Integer) 9:
#line 1059 "declarative_execution.m"
            {
#line 1059 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1059 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1059 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1059 "declarative_execution.m"
            }
#line 1047 "declarative_execution.m"
            break;
#line 1047 "declarative_execution.m"
          case (MR_Integer) 10:
#line 1060 "declarative_execution.m"
            {
#line 1060 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1060 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1060 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1060 "declarative_execution.m"
            }
#line 1047 "declarative_execution.m"
            break;
#line 1047 "declarative_execution.m"
        }
#line 1047 "declarative_execution.m"
        break;
#line 1047 "declarative_execution.m"
    }
#line 1043 "declarative_execution.m"
    {
#line 1043 "declarative_execution.m"
      return mdb__declarative_execution__Path_4 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_execution__Label_5);
    }
#line 1041 "declarative_execution.m"
    return mdb__declarative_execution__Path_4;
#line 1041 "declarative_execution.m"
  }
#line 1037 "declarative_execution.m"
}

#line 1018 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__trace_node_port_1_f_0(
#line 1018 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 1018 "declarative_execution.m"
{
#line 1022 "declarative_execution.m"
  {
#line 1022 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1022 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__2_2;

#line 1022 "declarative_execution.m"
#line 1022 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
#line 1022 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1022 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1022 "declarative_execution.m"
        mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 0;
#line 1022 "declarative_execution.m"
        break;
#line 1022 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1023 "declarative_execution.m"
        mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 1;
#line 1022 "declarative_execution.m"
        break;
#line 1022 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1024 "declarative_execution.m"
        mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 2;
#line 1022 "declarative_execution.m"
        break;
#line 1022 "declarative_execution.m"
      case (MR_Integer) 3:
#line 1022 "declarative_execution.m"
#line 1022 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) {
#line 1022 "declarative_execution.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 1022 "declarative_execution.m"
          case (MR_Integer) 0:
#line 1025 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 3;
#line 1022 "declarative_execution.m"
            break;
#line 1022 "declarative_execution.m"
          case (MR_Integer) 1:
#line 1026 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 5;
#line 1022 "declarative_execution.m"
            break;
#line 1022 "declarative_execution.m"
          case (MR_Integer) 2:
#line 1027 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 14;
#line 1022 "declarative_execution.m"
            break;
#line 1022 "declarative_execution.m"
          case (MR_Integer) 3:
#line 1028 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 12;
#line 1022 "declarative_execution.m"
            break;
#line 1022 "declarative_execution.m"
          case (MR_Integer) 4:
#line 1029 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 13;
#line 1022 "declarative_execution.m"
            break;
#line 1022 "declarative_execution.m"
          case (MR_Integer) 5:
#line 1030 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 6;
#line 1022 "declarative_execution.m"
            break;
#line 1022 "declarative_execution.m"
          case (MR_Integer) 6:
#line 1031 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 7;
#line 1022 "declarative_execution.m"
            break;
#line 1022 "declarative_execution.m"
          case (MR_Integer) 7:
#line 1032 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 8;
#line 1022 "declarative_execution.m"
            break;
#line 1022 "declarative_execution.m"
          case (MR_Integer) 8:
#line 1033 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 9;
#line 1022 "declarative_execution.m"
            break;
#line 1022 "declarative_execution.m"
          case (MR_Integer) 9:
#line 1034 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 10;
#line 1022 "declarative_execution.m"
            break;
#line 1022 "declarative_execution.m"
          case (MR_Integer) 10:
#line 1035 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 11;
#line 1022 "declarative_execution.m"
            break;
#line 1022 "declarative_execution.m"
        }
#line 1022 "declarative_execution.m"
        break;
#line 1022 "declarative_execution.m"
    }
#line 1022 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__2_2;
#line 1022 "declarative_execution.m"
  }
#line 1018 "declarative_execution.m"
}

#line 992 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__neg_node_set_status_2_f_0(
#line 992 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg0_4,
#line 992 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 992 "declarative_execution.m"
{
#line 998 "declarative_execution.m"
  {
#line 998 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Neg0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 998 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Neg_6;
#line 998 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_16_16;
#line 998 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_27;
#line 998 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_29;
#line 998 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_31;
#line 998 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_32;
#line 998 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Neg1_10;
#line 998 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_22;
#line 998 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_24;
#line 999 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 999 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 999 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 1013 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_23;
#line 1014 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_25;
#line 1015 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_26;
#line 1016 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Neg_6;

#line 999 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 999 "declarative_execution.m"
      {
#line 999 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 1)));
#line 999 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 2)));
#line 999 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 3)));
#line 1000 "declarative_execution.m"
        mdb__declarative_execution__Neg1_10 = mdb__declarative_execution__Neg0_4;
#line 999 "declarative_execution.m"
      }
#line 999 "declarative_execution.m"
    else
#line 1002 "declarative_execution.m"
      {
#line 1002 "declarative_execution.m"
        {
#line 1002 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[28])));
        }
#line 1002 "declarative_execution.m"
      }
#line 12230 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeCtorInfo_16_16 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0;
#line 1012 "declarative_execution.m"
    {
#line 1012 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_27);
    }
#line 12237 "mdb.declarative_execution.c"
    {
#line 12239 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12241 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 12243 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 12245 "mdb.declarative_execution.c"
    }
#line 12247 "mdb.declarative_execution.c"
    {
#line 12249 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12251 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 12253 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 12255 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_29));
#line 12257 "mdb.declarative_execution.c"
    }
#line 12259 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_32 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1013 "declarative_execution.m"
    {
#line 1013 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) (mdb__declarative_execution__Neg1_10)), &mdb__declarative_execution__Ref_22, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_23);
    }
#line 1014 "declarative_execution.m"
    {
#line 1014 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__Ref_22, (MR_Integer) 2, &mdb__declarative_execution__ArgRef_24, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_25);
    }
#line 1015 "declarative_execution.m"
    {
#line 1015 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__ArgRef_24, ((MR_Box) (mdb__declarative_execution__Status_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_26);
    }
#line 1016 "declarative_execution.m"
    {
#line 1016 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_22, &mdb__declarative_execution__conv3_Neg_6);
    }
#line 1016 "declarative_execution.m"
    mdb__declarative_execution__Neg_6 = ((MR_Word) mdb__declarative_execution__conv3_Neg_6);
#line 998 "declarative_execution.m"
    return mdb__declarative_execution__Neg_6;
#line 998 "declarative_execution.m"
  }
#line 992 "declarative_execution.m"
}

#line 976 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__cond_node_set_status_2_f_0(
#line 976 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond0_4,
#line 976 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 976 "declarative_execution.m"
{
#line 982 "declarative_execution.m"
  {
#line 982 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Cond0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 982 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Cond_6;
#line 982 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_16_16;
#line 982 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_27;
#line 982 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_29;
#line 982 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_31;
#line 982 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_32;
#line 982 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Cond1_10;
#line 982 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_22;
#line 982 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_24;
#line 983 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 983 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 983 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 1013 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_23;
#line 1014 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_25;
#line 1015 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_26;
#line 1016 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Cond_6;

#line 983 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 983 "declarative_execution.m"
      {
#line 983 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 1)));
#line 983 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 2)));
#line 983 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 3)));
#line 984 "declarative_execution.m"
        mdb__declarative_execution__Cond1_10 = mdb__declarative_execution__Cond0_4;
#line 983 "declarative_execution.m"
      }
#line 983 "declarative_execution.m"
    else
#line 986 "declarative_execution.m"
      {
#line 986 "declarative_execution.m"
        {
#line 986 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[27])));
        }
#line 986 "declarative_execution.m"
      }
#line 12361 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeCtorInfo_16_16 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0;
#line 1012 "declarative_execution.m"
    {
#line 1012 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_27);
    }
#line 12368 "mdb.declarative_execution.c"
    {
#line 12370 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12372 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 12374 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 12376 "mdb.declarative_execution.c"
    }
#line 12378 "mdb.declarative_execution.c"
    {
#line 12380 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12382 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 12384 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 12386 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_29));
#line 12388 "mdb.declarative_execution.c"
    }
#line 12390 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_32 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1013 "declarative_execution.m"
    {
#line 1013 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) (mdb__declarative_execution__Cond1_10)), &mdb__declarative_execution__Ref_22, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_23);
    }
#line 1014 "declarative_execution.m"
    {
#line 1014 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__Ref_22, (MR_Integer) 2, &mdb__declarative_execution__ArgRef_24, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_25);
    }
#line 1015 "declarative_execution.m"
    {
#line 1015 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__ArgRef_24, ((MR_Box) (mdb__declarative_execution__Status_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_26);
    }
#line 1016 "declarative_execution.m"
    {
#line 1016 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_22, &mdb__declarative_execution__conv3_Cond_6);
    }
#line 1016 "declarative_execution.m"
    mdb__declarative_execution__Cond_6 = ((MR_Word) mdb__declarative_execution__conv3_Cond_6);
#line 982 "declarative_execution.m"
    return mdb__declarative_execution__Cond_6;
#line 982 "declarative_execution.m"
  }
#line 976 "declarative_execution.m"
}

#line 957 "declarative_execution.m"
static MR_Integer MR_CALL 
mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0(
#line 957 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 957 "declarative_execution.m"
{
#line 972 "declarative_execution.m"
  {
#line 972 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call_3)) == (MR_mktag((MR_Integer) 0)));
#line 972 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__IdealDepth_4;
#line 972 "declarative_execution.m"
    MR_Word mdb__declarative_execution__MaybeImplicitTreeInfo_5;
#line 964 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 964 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_14_14;
#line 964 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_15_15;
#line 964 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 964 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17;
#line 964 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_18_18;
#line 964 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_19_19;
#line 964 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_20_20;
#line 964 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_21_21;

#line 964 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 964 "declarative_execution.m"
      {
#line 964 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 0)));
#line 964 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 1)));
#line 964 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 2)));
#line 964 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 3)));
#line 964 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 4)));
#line 964 "declarative_execution.m"
        mdb__declarative_execution__MaybeImplicitTreeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 5)));
#line 964 "declarative_execution.m"
        mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 6)));
#line 964 "declarative_execution.m"
        mdb__declarative_execution__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 7)));
#line 964 "declarative_execution.m"
        mdb__declarative_execution__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 8)));
#line 964 "declarative_execution.m"
        mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 9)));
#line 967 "declarative_execution.m"
        if ((mdb__declarative_execution__MaybeImplicitTreeInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 968 "declarative_execution.m"
          {
#line 969 "declarative_execution.m"
            {
#line 969 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[25])));
            }
#line 968 "declarative_execution.m"
          }
#line 967 "declarative_execution.m"
        else
#line 966 "declarative_execution.m"
          {
#line 966 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__MaybeImplicitTreeInfo_5, (MR_Integer) 0)));

#line 966 "declarative_execution.m"
            mdb__declarative_execution__IdealDepth_4 = (MR_Integer) mdb__declarative_execution__V_9_9;
#line 966 "declarative_execution.m"
          }
#line 964 "declarative_execution.m"
      }
#line 964 "declarative_execution.m"
    else
#line 973 "declarative_execution.m"
      {
#line 973 "declarative_execution.m"
        {
#line 973 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[26])));
        }
#line 973 "declarative_execution.m"
      }
#line 972 "declarative_execution.m"
    return mdb__declarative_execution__IdealDepth_4;
#line 972 "declarative_execution.m"
  }
#line 957 "declarative_execution.m"
}

#line 939 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0(
#line 939 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 939 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IdealDepth_5)
#line 939 "declarative_execution.m"
{
#line 946 "declarative_execution.m"
  {
#line 946 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call0_4)) == (MR_mktag((MR_Integer) 0)));
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call_6;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_25_25;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_36;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_38;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_40;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_41;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call1_17;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_22_22;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_23_23;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_31;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_33;
#line 947 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 947 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8;
#line 947 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 947 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;
#line 947 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 947 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 947 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 947 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_14_14;
#line 947 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_15_15;
#line 947 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 1013 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_32;
#line 1014 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_34;
#line 1015 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_35;
#line 1016 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Call_6;

#line 947 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 947 "declarative_execution.m"
      {
#line 947 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 0)));
#line 947 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 1)));
#line 947 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 2)));
#line 947 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 3)));
#line 947 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 4)));
#line 947 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 5)));
#line 947 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 6)));
#line 947 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 7)));
#line 947 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 8)));
#line 947 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 9)));
#line 948 "declarative_execution.m"
        mdb__declarative_execution__Call1_17 = mdb__declarative_execution__Call0_4;
#line 947 "declarative_execution.m"
      }
#line 947 "declarative_execution.m"
    else
#line 950 "declarative_execution.m"
      {
#line 950 "declarative_execution.m"
        {
#line 950 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[24])));
        }
#line 950 "declarative_execution.m"
      }
#line 955 "declarative_execution.m"
    mdb__declarative_execution__V_23_23 = (MR_Word) mdb__declarative_execution__IdealDepth_5;
#line 955 "declarative_execution.m"
    {
#line 955 "declarative_execution.m"
      mdb__declarative_execution__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 955 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_22_22, 0) = ((MR_Box) (mdb__declarative_execution__V_23_23));
#line 955 "declarative_execution.m"
    }
#line 12634 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_25_25 = (MR_Word) &mdb__declarative_execution_scalar_common_1[1];
#line 1012 "declarative_execution.m"
    {
#line 1012 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_36);
    }
#line 12641 "mdb.declarative_execution.c"
    {
#line 12643 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12645 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_38, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 12647 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_38, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_36));
#line 12649 "mdb.declarative_execution.c"
    }
#line 12651 "mdb.declarative_execution.c"
    {
#line 12653 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12655 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 12657 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_36));
#line 12659 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_38));
#line 12661 "mdb.declarative_execution.c"
    }
#line 12663 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_41 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1013 "declarative_execution.m"
    {
#line 1013 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeClassInfo_for_store_40, ((MR_Box) (mdb__declarative_execution__Call1_17)), &mdb__declarative_execution__Ref_31, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_32);
    }
#line 1014 "declarative_execution.m"
    {
#line 1014 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeInfo_25_25, mdb__declarative_execution__TypeClassInfo_for_store_40, mdb__declarative_execution__Ref_31, (MR_Integer) 5, &mdb__declarative_execution__ArgRef_33, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_34);
    }
#line 1015 "declarative_execution.m"
    {
#line 1015 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeInfo_25_25, mdb__declarative_execution__TypeClassInfo_for_store_40, mdb__declarative_execution__ArgRef_33, ((MR_Box) (mdb__declarative_execution__V_22_22)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_35);
    }
#line 1016 "declarative_execution.m"
    {
#line 1016 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeClassInfo_for_store_40, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_31, &mdb__declarative_execution__conv3_Call_6);
    }
#line 1016 "declarative_execution.m"
    mdb__declarative_execution__Call_6 = ((MR_Word) mdb__declarative_execution__conv3_Call_6);
#line 946 "declarative_execution.m"
    return mdb__declarative_execution__Call_6;
#line 946 "declarative_execution.m"
  }
#line 939 "declarative_execution.m"
}

#line 922 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_set_last_interface_2_f_0(
#line 922 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 922 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Last_5)
#line 922 "declarative_execution.m"
{
#line 928 "declarative_execution.m"
  {
#line 928 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call0_4)) == (MR_mktag((MR_Integer) 0)));
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call_6;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_23_23;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_34;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_36;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_38;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_39;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call1_17;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_29;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_31;
#line 929 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 929 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8;
#line 929 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 929 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;
#line 929 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 929 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 929 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 929 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_14_14;
#line 929 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_15_15;
#line 929 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 1013 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_30;
#line 1014 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_32;
#line 1015 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_33;
#line 1016 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Call_6;

#line 929 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 929 "declarative_execution.m"
      {
#line 929 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 0)));
#line 929 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 1)));
#line 929 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 2)));
#line 929 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 3)));
#line 929 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 4)));
#line 929 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 5)));
#line 929 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 6)));
#line 929 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 7)));
#line 929 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 8)));
#line 929 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 9)));
#line 930 "declarative_execution.m"
        mdb__declarative_execution__Call1_17 = mdb__declarative_execution__Call0_4;
#line 929 "declarative_execution.m"
      }
#line 929 "declarative_execution.m"
    else
#line 932 "declarative_execution.m"
      {
#line 932 "declarative_execution.m"
        {
#line 932 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[23])));
        }
#line 932 "declarative_execution.m"
      }
#line 12793 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeCtorInfo_23_23 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0;
#line 1012 "declarative_execution.m"
    {
#line 1012 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_34);
    }
#line 12800 "mdb.declarative_execution.c"
    {
#line 12802 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12804 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_36, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 12806 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_36, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_34));
#line 12808 "mdb.declarative_execution.c"
    }
#line 12810 "mdb.declarative_execution.c"
    {
#line 12812 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12814 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 12816 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_34));
#line 12818 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_36));
#line 12820 "mdb.declarative_execution.c"
    }
#line 12822 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_39 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1013 "declarative_execution.m"
    {
#line 1013 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeClassInfo_for_store_38, ((MR_Box) (mdb__declarative_execution__Call1_17)), &mdb__declarative_execution__Ref_29, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_30);
    }
#line 1014 "declarative_execution.m"
    {
#line 1014 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeCtorInfo_23_23, mdb__declarative_execution__TypeClassInfo_for_store_38, mdb__declarative_execution__Ref_29, (MR_Integer) 1, &mdb__declarative_execution__ArgRef_31, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_32);
    }
#line 1015 "declarative_execution.m"
    {
#line 1015 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_23_23, mdb__declarative_execution__TypeClassInfo_for_store_38, mdb__declarative_execution__ArgRef_31, ((MR_Box) (mdb__declarative_execution__Last_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_33);
    }
#line 1016 "declarative_execution.m"
    {
#line 1016 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeClassInfo_for_store_38, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_29, &mdb__declarative_execution__conv3_Call_6);
    }
#line 1016 "declarative_execution.m"
    mdb__declarative_execution__Call_6 = ((MR_Word) mdb__declarative_execution__conv3_Call_6);
#line 928 "declarative_execution.m"
    return mdb__declarative_execution__Call_6;
#line 928 "declarative_execution.m"
  }
#line 922 "declarative_execution.m"
}

#line 909 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_get_last_interface_1_f_0(
#line 909 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 909 "declarative_execution.m"
{
#line 917 "declarative_execution.m"
  {
#line 917 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call_3)) == (MR_mktag((MR_Integer) 0)));
#line 917 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Last_4;
#line 917 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Last0_6;
#line 915 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_5_5;
#line 915 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 915 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_8_8;
#line 915 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_9_9;
#line 915 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;
#line 915 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_11_11;
#line 915 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_12_12;
#line 915 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_13_13;
#line 915 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_14_14;

#line 915 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 915 "declarative_execution.m"
      {
#line 915 "declarative_execution.m"
        mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 0)));
#line 915 "declarative_execution.m"
        mdb__declarative_execution__Last0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 1)));
#line 915 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 2)));
#line 915 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 3)));
#line 915 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 4)));
#line 915 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 5)));
#line 915 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 6)));
#line 915 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 7)));
#line 915 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 8)));
#line 915 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 9)));
#line 916 "declarative_execution.m"
        mdb__declarative_execution__Last_4 = mdb__declarative_execution__Last0_6;
#line 915 "declarative_execution.m"
      }
#line 915 "declarative_execution.m"
    else
#line 918 "declarative_execution.m"
      {
#line 918 "declarative_execution.m"
        {
#line 918 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[22])));
        }
#line 918 "declarative_execution.m"
      }
#line 917 "declarative_execution.m"
    return mdb__declarative_execution__Last_4;
#line 917 "declarative_execution.m"
  }
#line 909 "declarative_execution.m"
}

#line 892 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__search_trace_node_store_3_p_0(
#line 892 "declarative_execution.m"
  MR_Word mdb__declarative_execution___Store_1,
#line 892 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_2,
#line 892 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_3)
#line 892 "declarative_execution.m"
{
#line 895 "declarative_execution.m"
  {
#line 895 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 898 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__search_trace_node_store_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__Id_2 ;
		{
#line 898 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);

#line 12964 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__Node_3  = Node;
#line 898 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 895 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 895 "declarative_execution.m"
  }
#line 892 "declarative_execution.m"
}

#line 778 "declarative_execution.m"
static MR_Box MR_CALL 
mdb__declarative_execution__step_over_redo_or_call_3_f_0(
#line 778 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24,
#line 778 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_5,
#line 778 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Call_6,
#line 778 "declarative_execution.m"
  MR_Box mdb__declarative_execution__MaybeRedo_7)
#line 778 "declarative_execution.m"
{
#line 783 "declarative_execution.m"
  {
#line 783 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 783 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Next_8;
#line 783 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Redo_9;

#line 781 "declarative_execution.m"
    {
#line 781 "declarative_execution.m"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24, mdb__declarative_execution__Store_5, mdb__declarative_execution__MaybeRedo_7, &mdb__declarative_execution__Redo_9);
    }
#line 783 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 782 "declarative_execution.m"
      {
#line 782 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_10_10;
#line 782 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_11_11;
#line 782 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_12_12;
#line 782 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_13_13;

#line 782 "declarative_execution.m"
        mdb__declarative_execution__Next_8 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 0));
#line 782 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 1));
#line 782 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 2)));
#line 782 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 3)));
#line 782 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 4)));
#line 782 "declarative_execution.m"
      }
#line 783 "declarative_execution.m"
    else
#line 784 "declarative_execution.m"
      {
#line 784 "declarative_execution.m"
        MR_Word mdb__declarative_execution__CallNode_14;
#line 785 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_15_15;
#line 785 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_16_16;
#line 785 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_17_17;
#line 785 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_18_18;
#line 785 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_19_19;
#line 785 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_20_20;
#line 785 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_21_21;
#line 785 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_22_22;
#line 785 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_23_23;

#line 784 "declarative_execution.m"
        {
#line 784 "declarative_execution.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24, mdb__declarative_execution__Store_5, mdb__declarative_execution__Call_6, &mdb__declarative_execution__CallNode_14);
        }
#line 785 "declarative_execution.m"
        mdb__declarative_execution__Next_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 0));
#line 785 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 1));
#line 785 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 2)));
#line 785 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 3)));
#line 785 "declarative_execution.m"
        mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 4)));
#line 785 "declarative_execution.m"
        mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 5)));
#line 785 "declarative_execution.m"
        mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 6)));
#line 785 "declarative_execution.m"
        mdb__declarative_execution__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 7)));
#line 785 "declarative_execution.m"
        mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 8)));
#line 785 "declarative_execution.m"
        mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 9)));
#line 784 "declarative_execution.m"
      }
#line 783 "declarative_execution.m"
    return mdb__declarative_execution__Next_8;
#line 783 "declarative_execution.m"
  }
#line 778 "declarative_execution.m"
}

#line 691 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_1(
#line 691 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67,
#line 691 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 691 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 691 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__OnContour_6)
#line 691 "declarative_execution.m"
{
#line 700 "declarative_execution.m"
  {
#line 700 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 700 "declarative_execution.m"
#line 700 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_5)) {
#line 700 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 700 "declarative_execution.m"
      case (MR_Integer) 2:
#line 704 "declarative_execution.m"
        {
#line 704 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Exit_15 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 704 "declarative_execution.m"
          MR_Word mdb__declarative_execution__ExitNode_19;
#line 704 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 704 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 704 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 704 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 706 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_60_60;
#line 706 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_61_61;
#line 706 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_62_62;
#line 706 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_63_63;
#line 706 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_64_64;
#line 706 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_65_65;
#line 706 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_66_66;

#line 705 "declarative_execution.m"
          {
#line 705 "declarative_execution.m"
            mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Exit_15, &mdb__declarative_execution__ExitNode_19);
          }
#line 706 "declarative_execution.m"
          *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 0));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_60_60 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 1));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_61_61 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 2));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 3)));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 4)));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_64_64 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 5)));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 6)));
#line 706 "declarative_execution.m"
          mdb__declarative_execution__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 7)));
#line 704 "declarative_execution.m"
        }
#line 700 "declarative_execution.m"
        break;
#line 700 "declarative_execution.m"
      case (MR_Integer) 3:
#line 700 "declarative_execution.m"
#line 700 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) {
#line 700 "declarative_execution.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 700 "declarative_execution.m"
          case (MR_Integer) 0:
#line 700 "declarative_execution.m"
            {
#line 700 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 700 "declarative_execution.m"
              MR_Word mdb__declarative_execution__CallNode_13;
#line 700 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 700 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 700 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 700 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 700 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 702 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_51_51;
#line 702 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_52_52;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_53_53;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_54_54;
#line 702 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_55_55;
#line 702 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_56_56;
#line 702 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_57_57;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_58_58;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_59_59;

#line 701 "declarative_execution.m"
              {
#line 701 "declarative_execution.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, &mdb__declarative_execution__CallNode_13);
              }
#line 702 "declarative_execution.m"
              *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 0));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_51_51 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 1));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 2)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 3)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 4)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 5)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 6)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_57_57 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 7)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 8)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 9)));
#line 700 "declarative_execution.m"
            }
#line 700 "declarative_execution.m"
            break;
#line 700 "declarative_execution.m"
          case (MR_Integer) 10:
#line 708 "declarative_execution.m"
            {
#line 708 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Neg_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 708 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_50_50;
#line 708 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 708 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 709 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_23_23;
#line 709 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_24_24;

#line 709 "declarative_execution.m"
              {
#line 709 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_21, &mdb__declarative_execution__V_50_50);
              }
#line 709 "declarative_execution.m"
              *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 1));
#line 709 "declarative_execution.m"
              mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 2)));
#line 709 "declarative_execution.m"
              mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 3)));
#line 708 "declarative_execution.m"
            }
#line 700 "declarative_execution.m"
            break;
#line 700 "declarative_execution.m"
        }
#line 700 "declarative_execution.m"
        break;
#line 700 "declarative_execution.m"
    }
#line 700 "declarative_execution.m"
  }
#line 691 "declarative_execution.m"
}

#line 595 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__cache_proc_defn_rep_2_p_0(
#line 595 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 595 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ProcDefnRep_2)
#line 595 "declarative_execution.m"
{
#line 600 "declarative_execution.m"
  {
#line 600 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 603 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__cache_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_1 ;
	ProcDefnRep =  mdb__declarative_execution__ProcDefnRep_2 ;
		{
#line 603 "declarative_execution.m"

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_defn_rep: %p %x\n", ProcLayout, ProcDefnRep);
#endif
    MR_insert_proc_defn_rep(ProcLayout, ProcDefnRep);

#line 13318 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
#line 603 "declarative_execution.m"
}
#line 600 "declarative_execution.m"
  }
#line 595 "declarative_execution.m"
}

#line 556 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0(
#line 556 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 556 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__ProcDefnRep_2)
#line 556 "declarative_execution.m"
{
#line 563 "declarative_execution.m"
  {
#line 563 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 566 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_1 ;
		{
#line 566 "declarative_execution.m"

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

#line 13368 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__ProcDefnRep_2  = ProcDefnRep;
#line 566 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 563 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 563 "declarative_execution.m"
  }
#line 556 "declarative_execution.m"
}

#line 517 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__call_node_bytecode_layout_2_p_0(
#line 517 "declarative_execution.m"
  MR_Box mdb__declarative_execution__CallLabelLayout_1,
#line 517 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__ProcLayout_2)
#line 517 "declarative_execution.m"
{
#line 524 "declarative_execution.m"
  {
#line 524 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 527 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_bytecode_layout_2_p_0

	const MR_LabelLayout * CallLabelLayout;
	const MR_ProcLayout * ProcLayout;
	MR_bool SUCCESS_INDICATOR;

	CallLabelLayout = (const MR_LabelLayout *) mdb__declarative_execution__CallLabelLayout_1 ;
		{
#line 527 "declarative_execution.m"

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

#line 13424 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__ProcLayout_2  = (MR_Box) ProcLayout;
#line 527 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 524 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 524 "declarative_execution.m"
  }
#line 517 "declarative_execution.m"
}

#line 464 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__user_arg_num_3_p_0(
#line 464 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 464 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 464 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__ArgNum_3)
#line 464 "declarative_execution.m"
{
#line 1528 "declarative_execution.m"
  {
#line 1528 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1528 "declarative_execution.m"
#line 1528 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
#line 1528 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1528 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1528 "declarative_execution.m"
        *mdb__declarative_execution__ArgNum_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1528 "declarative_execution.m"
        break;
#line 1528 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1529 "declarative_execution.m"
        {
#line 1529 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__AnyArgNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1529 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1529 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1530 "declarative_execution.m"
          {
#line 1530 "declarative_execution.m"
            mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(mdb__declarative_execution__Args_8, mdb__declarative_execution__AnyArgNum_6, (MR_Integer) 1, mdb__declarative_execution__ArgNum_3);
#line 1530 "declarative_execution.m"
            return;
          }
#line 1529 "declarative_execution.m"
        }
#line 1528 "declarative_execution.m"
        break;
#line 1528 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1532 "declarative_execution.m"
        {
#line 1532 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__AnyArgNumFromBack_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1532 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1532 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_15_15;
#line 1532 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_17_17;
#line 1532 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_18_18;
#line 1531 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1534 "declarative_execution.m"
          {
#line 1534 "declarative_execution.m"
            mdb__declarative_execution__V_18_18 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_13);
          }
#line 1534 "declarative_execution.m"
          mdb__declarative_execution__V_17_17 = (mdb__declarative_execution__V_18_18 - mdb__declarative_execution__AnyArgNumFromBack_11);
#line 1534 "declarative_execution.m"
          mdb__declarative_execution__V_15_15 = (mdb__declarative_execution__V_17_17 + (MR_Integer) 1);
#line 1533 "declarative_execution.m"
          {
#line 1533 "declarative_execution.m"
            mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(mdb__declarative_execution__Args_13, mdb__declarative_execution__V_15_15, (MR_Integer) 1, mdb__declarative_execution__ArgNum_3);
#line 1533 "declarative_execution.m"
            return;
          }
#line 1532 "declarative_execution.m"
        }
#line 1528 "declarative_execution.m"
        break;
#line 1528 "declarative_execution.m"
    }
#line 1528 "declarative_execution.m"
  }
#line 464 "declarative_execution.m"
}

#line 462 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__absolute_arg_num_3_p_0(
#line 462 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 462 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 462 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__HeadVar__3_3)
#line 462 "declarative_execution.m"
{
#line 1523 "declarative_execution.m"
  {
#line 1523 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1523 "declarative_execution.m"
#line 1523 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) {
#line 1523 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1523 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1524 "declarative_execution.m"
        {
#line 1524 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1524 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1524 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1525 "declarative_execution.m"
          {
#line 1525 "declarative_execution.m"
            mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(mdb__declarative_execution__Args_8, mdb__declarative_execution__N_6, (MR_Integer) 1, mdb__declarative_execution__HeadVar__3_3);
#line 1525 "declarative_execution.m"
            return;
          }
#line 1524 "declarative_execution.m"
        }
#line 1523 "declarative_execution.m"
        break;
#line 1523 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1523 "declarative_execution.m"
        *mdb__declarative_execution__HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1523 "declarative_execution.m"
        break;
#line 1523 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1526 "declarative_execution.m"
        {
#line 1526 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__M_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1526 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1526 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14;
#line 1526 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_15_15;
#line 1526 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1526 "declarative_execution.m"
          {
#line 1526 "declarative_execution.m"
            mdb__declarative_execution__V_15_15 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_13);
          }
#line 1526 "declarative_execution.m"
          mdb__declarative_execution__V_14_14 = (mdb__declarative_execution__V_15_15 - mdb__declarative_execution__M_11);
#line 1526 "declarative_execution.m"
          *mdb__declarative_execution__HeadVar__3_3 = (mdb__declarative_execution__V_14_14 + (MR_Integer) 1);
#line 1526 "declarative_execution.m"
        }
#line 1523 "declarative_execution.m"
        break;
#line 1523 "declarative_execution.m"
    }
#line 1523 "declarative_execution.m"
  }
#line 462 "declarative_execution.m"
}

#line 1501 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0_1(
#line 1501 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1501 "declarative_execution.m"
  MR_Box mdb__declarative_execution__wrapper_arg_1)
#line 1501 "declarative_execution.m"
{
#line 1501 "declarative_execution.m"
  {
#line 1501 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1501 "declarative_execution.m"
    MR_Box mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;

#line 1501 "declarative_execution.m"
    {
#line 1501 "declarative_execution.m"
      return mdb__declarative_execution__succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1));
    }
#line 1501 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1501 "declarative_execution.m"
  }
#line 1501 "declarative_execution.m"
}

#line 459 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0(
#line 459 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ArgPos_4,
#line 459 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args0_5,
#line 459 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Arg_6)
#line 459 "declarative_execution.m"
{
#line 1508 "declarative_execution.m"
  {
#line 1508 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1508 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__N_7;
#line 1508 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Args_10;
#line 1521 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_Arg_6;

#line 13668 "mdb.declarative_execution.c"
#line 13669 "mdb.declarative_execution.c"
    switch (MR_tag((MR_Word) mdb__declarative_execution__ArgPos_4)) {
#line 13671 "mdb.declarative_execution.c"
      default: /*NOTREACHED*/ MR_assert(0);
#line 13673 "mdb.declarative_execution.c"
      case (MR_Integer) 0:
#line 13675 "mdb.declarative_execution.c"
        {
#line 1510 "declarative_execution.m"
          mdb__declarative_execution__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
#line 1501 "declarative_execution.m"
          {
#line 1501 "declarative_execution.m"
            mdb__declarative_execution__Args_10 = mercury__list__filter_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mdb__declarative_execution_scalar_common_2[3], mdb__declarative_execution__Args0_5);
          }
#line 13684 "mdb.declarative_execution.c"
        }
#line 13686 "mdb.declarative_execution.c"
        break;
#line 13688 "mdb.declarative_execution.c"
      case (MR_Integer) 1:
#line 13690 "mdb.declarative_execution.c"
        {
#line 1513 "declarative_execution.m"
          mdb__declarative_execution__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
#line 1498 "declarative_execution.m"
          mdb__declarative_execution__Args_10 = mdb__declarative_execution__Args0_5;
#line 13696 "mdb.declarative_execution.c"
        }
#line 13698 "mdb.declarative_execution.c"
        break;
#line 13700 "mdb.declarative_execution.c"
      case (MR_Integer) 2:
#line 13702 "mdb.declarative_execution.c"
        {
#line 13704 "mdb.declarative_execution.c"
          MR_Integer mdb__declarative_execution__M_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
#line 13706 "mdb.declarative_execution.c"
          MR_Integer mdb__declarative_execution__V_11_11;
#line 13708 "mdb.declarative_execution.c"
          MR_Integer mdb__declarative_execution__V_12_12;

#line 1517 "declarative_execution.m"
          {
#line 1517 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args0_5);
          }
#line 1517 "declarative_execution.m"
          mdb__declarative_execution__V_11_11 = (mdb__declarative_execution__V_12_12 - mdb__declarative_execution__M_9);
#line 1517 "declarative_execution.m"
          mdb__declarative_execution__N_7 = (mdb__declarative_execution__V_11_11 + (MR_Integer) 1);
#line 1498 "declarative_execution.m"
          mdb__declarative_execution__Args_10 = mdb__declarative_execution__Args0_5;
#line 13722 "mdb.declarative_execution.c"
        }
#line 13724 "mdb.declarative_execution.c"
        break;
#line 13726 "mdb.declarative_execution.c"
    }
#line 1521 "declarative_execution.m"
    {
#line 1521 "declarative_execution.m"
      mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_10, mdb__declarative_execution__N_7, &mdb__declarative_execution__conv0_Arg_6);
    }
#line 1521 "declarative_execution.m"
    *mdb__declarative_execution__Arg_6 = ((MR_Word) mdb__declarative_execution__conv0_Arg_6);
#line 1508 "declarative_execution.m"
  }
#line 459 "declarative_execution.m"
}

#line 457 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__is_user_visible_arg_1_p_0(
#line 457 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 457 "declarative_execution.m"
{
#line 1506 "declarative_execution.m"
  {
#line 1506 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1506 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1506 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1506 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));

#line 1506 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_4_4 == (MR_Integer) 1);
#line 1506 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1506 "declarative_execution.m"
  }
#line 457 "declarative_execution.m"
}

#line 455 "declarative_execution.m"
MR_Word MR_CALL 
mdb__declarative_execution__chosen_head_vars_presentation_0_f_0(void)
#line 455 "declarative_execution.m"
{
#line 1504 "declarative_execution.m"
  {
#line 1504 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1504 "declarative_execution.m"
    return (MR_Integer) 1;
#line 1504 "declarative_execution.m"
  }
#line 455 "declarative_execution.m"
}

#line 1501 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0_1(
#line 1501 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1501 "declarative_execution.m"
  MR_Box mdb__declarative_execution__wrapper_arg_1)
#line 1501 "declarative_execution.m"
{
#line 1501 "declarative_execution.m"
  {
#line 1501 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1501 "declarative_execution.m"
    MR_Box mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;

#line 1501 "declarative_execution.m"
    {
#line 1501 "declarative_execution.m"
      return mdb__declarative_execution__succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1));
    }
#line 1501 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1501 "declarative_execution.m"
  }
#line 1501 "declarative_execution.m"
}

#line 452 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0(
#line 452 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Which_4,
#line 452 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args0_5,
#line 452 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Args_6)
#line 452 "declarative_execution.m"
{
#line 1497 "declarative_execution.m"
  {
#line 1497 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1497 "declarative_execution.m"
#line 1497 "declarative_execution.m"
    switch (mdb__declarative_execution__Which_4) {
#line 1497 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1497 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1498 "declarative_execution.m"
        *mdb__declarative_execution__Args_6 = mdb__declarative_execution__Args0_5;
#line 1497 "declarative_execution.m"
        break;
#line 1497 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1500 "declarative_execution.m"
        {
#line 1501 "declarative_execution.m"
          {
#line 1501 "declarative_execution.m"
            *mdb__declarative_execution__Args_6 = mercury__list__filter_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mdb__declarative_execution_scalar_common_2[2], mdb__declarative_execution__Args0_5);
          }
#line 1500 "declarative_execution.m"
        }
#line 1497 "declarative_execution.m"
        break;
#line 1497 "declarative_execution.m"
    }
#line 1497 "declarative_execution.m"
  }
#line 452 "declarative_execution.m"
}

#line 424 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__save_trace_node_store_5_p_0(
#line 424 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Stream_6,
#line 424 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_7,
#line 424 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_8)
#line 424 "declarative_execution.m"
{
#line 1425 "declarative_execution.m"
  {
#line 1425 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1425 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0;
#line 1425 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Map0_10;
#line 1425 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Key_11;
#line 1425 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Map_12;
#line 1425 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_15_15;

#line 1426 "declarative_execution.m"
    {
#line 1426 "declarative_execution.m"
      mercury__map__init_1_p_0(mdb__declarative_execution__TypeCtorInfo_22_22, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], &mdb__declarative_execution__Map0_10);
    }
#line 1453 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__save_trace_node_store_5_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__NodeId_8 ;
		{
#line 1453 "declarative_execution.m"

    Key = (MR_Integer) Id;

#line 13903 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Key_11  = Key;
#line 1453 "declarative_execution.m"
}
#line 1428 "declarative_execution.m"
    mdb__declarative_execution__V_15_15 = (MR_Word) mdb__declarative_execution__Map0_10;
#line 1428 "declarative_execution.m"
    {
#line 1428 "declarative_execution.m"
      mdb__declarative_execution__node_map_4_p_0(mdb__declarative_execution__Store_7, mdb__declarative_execution__NodeId_8, mdb__declarative_execution__V_15_15, &mdb__declarative_execution__Map_12);
    }
#line 1429 "declarative_execution.m"
    {
#line 1429 "declarative_execution.m"
      mercury__io__write_4_p_0(mdb__declarative_execution__TypeCtorInfo_22_22, mdb__declarative_execution__Stream_6, ((MR_Box) (mdb__declarative_execution__Key_11)));
    }
#line 1430 "declarative_execution.m"
    {
#line 1430 "declarative_execution.m"
      mercury__io__write_string_4_p_0(mdb__declarative_execution__Stream_6, (MR_String) ".\n");
    }
#line 1431 "declarative_execution.m"
    {
#line 1431 "declarative_execution.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0, mdb__declarative_execution__Stream_6, ((MR_Box) (mdb__declarative_execution__Map_12)));
    }
#line 1432 "declarative_execution.m"
    {
#line 1432 "declarative_execution.m"
      mercury__io__write_string_4_p_0(mdb__declarative_execution__Stream_6, (MR_String) ".\n");
#line 1432 "declarative_execution.m"
      return;
    }
#line 1425 "declarative_execution.m"
  }
#line 424 "declarative_execution.m"
}

#line 418 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__load_trace_node_map_5_p_0(
#line 418 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Stream_6,
#line 418 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Map_7,
#line 418 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Key_8)
#line 418 "declarative_execution.m"
{
#line 1400 "declarative_execution.m"
  {
#line 1400 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1400 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ResKey_10;
#line 1400 "declarative_execution.m"
    MR_String mdb__declarative_execution__Msg_11;
#line 1400 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ResMap_13;

#line 1401 "declarative_execution.m"
    {
#line 1401 "declarative_execution.m"
      mercury__io__read_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, mdb__declarative_execution__Stream_6, &mdb__declarative_execution__ResKey_10);
    }
#line 1404 "declarative_execution.m"
#line 1404 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__ResKey_10)) {
#line 1404 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1404 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1405 "declarative_execution.m"
        {
#line 1406 "declarative_execution.m"
          {
#line 1406 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_1[21]))));
#line 1406 "declarative_execution.m"
            return;
          }
#line 1405 "declarative_execution.m"
        }
#line 1404 "declarative_execution.m"
        break;
#line 1404 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1403 "declarative_execution.m"
        *mdb__declarative_execution__Key_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ResKey_10, (MR_Integer) 0)));
#line 1404 "declarative_execution.m"
        break;
#line 1404 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1408 "declarative_execution.m"
        {
#line 1408 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_18_18;
#line 1408 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_12_12;

#line 1408 "declarative_execution.m"
          mdb__declarative_execution__Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResKey_10, (MR_Integer) 0)));
#line 1408 "declarative_execution.m"
          mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResKey_10, (MR_Integer) 1)));
#line 1409 "declarative_execution.m"
          {
#line 1409 "declarative_execution.m"
            mdb__declarative_execution__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1409 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_18_18, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
#line 1409 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_18_18, 1) = ((MR_Box) (mdb__declarative_execution__Msg_11));
#line 1409 "declarative_execution.m"
          }
#line 1409 "declarative_execution.m"
          {
#line 1409 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_execution__V_18_18)));
#line 1409 "declarative_execution.m"
            return;
          }
#line 1408 "declarative_execution.m"
        }
#line 1404 "declarative_execution.m"
        break;
#line 1404 "declarative_execution.m"
    }
#line 1411 "declarative_execution.m"
    {
#line 1411 "declarative_execution.m"
      mercury__io__read_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0, mdb__declarative_execution__Stream_6, &mdb__declarative_execution__ResMap_13);
    }
#line 1414 "declarative_execution.m"
#line 1414 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__ResMap_13)) {
#line 1414 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 1414 "declarative_execution.m"
      case (MR_Integer) 0:
#line 1415 "declarative_execution.m"
        {
#line 1416 "declarative_execution.m"
          {
#line 1416 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_1[21]))));
#line 1416 "declarative_execution.m"
            return;
          }
#line 1415 "declarative_execution.m"
        }
#line 1414 "declarative_execution.m"
        break;
#line 1414 "declarative_execution.m"
      case (MR_Integer) 1:
#line 1413 "declarative_execution.m"
        *mdb__declarative_execution__Map_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ResMap_13, (MR_Integer) 0)));
#line 1414 "declarative_execution.m"
        break;
#line 1414 "declarative_execution.m"
      case (MR_Integer) 2:
#line 1418 "declarative_execution.m"
        {
#line 1418 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_24_24;
#line 1418 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14;

#line 1418 "declarative_execution.m"
          mdb__declarative_execution__Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResMap_13, (MR_Integer) 0)));
#line 1418 "declarative_execution.m"
          mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResMap_13, (MR_Integer) 1)));
#line 1419 "declarative_execution.m"
          {
#line 1419 "declarative_execution.m"
            mdb__declarative_execution__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1419 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_24_24, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
#line 1419 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_24_24, 1) = ((MR_Box) (mdb__declarative_execution__Msg_11));
#line 1419 "declarative_execution.m"
          }
#line 1419 "declarative_execution.m"
          {
#line 1419 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_execution__V_24_24)));
#line 1419 "declarative_execution.m"
            return;
          }
#line 1418 "declarative_execution.m"
        }
#line 1414 "declarative_execution.m"
        break;
#line 1414 "declarative_execution.m"
    }
#line 1400 "declarative_execution.m"
  }
#line 418 "declarative_execution.m"
}

#line 412 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__disj_node_from_id_3_p_0(
#line 412 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16,
#line 412 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 412 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 412 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 412 "declarative_execution.m"
{
#line 865 "declarative_execution.m"
  {
#line 865 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 865 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14124 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14126 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;

#line 14129 "mdb.declarative_execution.c"
    {
#line 14131 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14134 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14136 "mdb.declarative_execution.c"
      {
#line 14138 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14140 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14142 "mdb.declarative_execution.c"
      }
#line 859 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 861 "declarative_execution.m"
      {
#line 861 "declarative_execution.m"
        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 860 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 861 "declarative_execution.m"
        else
#line 861 "declarative_execution.m"
        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 861 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 861 "declarative_execution.m"
        else
#line 861 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_FALSE;
#line 861 "declarative_execution.m"
      }
#line 865 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 864 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 865 "declarative_execution.m"
    else
#line 866 "declarative_execution.m"
      {
#line 866 "declarative_execution.m"
        {
#line 866 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[20])));
#line 866 "declarative_execution.m"
          return;
        }
#line 866 "declarative_execution.m"
      }
#line 865 "declarative_execution.m"
  }
#line 412 "declarative_execution.m"
}

#line 404 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__first_disj_node_from_id_3_p_0(
#line 404 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13,
#line 404 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 404 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 404 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 404 "declarative_execution.m"
{
#line 852 "declarative_execution.m"
  {
#line 852 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 852 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14205 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14207 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 849 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 849 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;

#line 14214 "mdb.declarative_execution.c"
    {
#line 14216 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14219 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14221 "mdb.declarative_execution.c"
      {
#line 14223 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14225 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14227 "mdb.declarative_execution.c"
      }
#line 848 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 848 "declarative_execution.m"
      {
#line 849 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 849 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 849 "declarative_execution.m"
          {
#line 849 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 849 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 849 "declarative_execution.m"
          }
#line 848 "declarative_execution.m"
      }
#line 852 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 851 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 852 "declarative_execution.m"
    else
#line 853 "declarative_execution.m"
      {
#line 853 "declarative_execution.m"
        {
#line 853 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[19])));
#line 853 "declarative_execution.m"
          return;
        }
#line 853 "declarative_execution.m"
      }
#line 852 "declarative_execution.m"
  }
#line 404 "declarative_execution.m"
}

#line 399 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__neg_node_from_id_3_p_0(
#line 399 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14,
#line 399 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 399 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 399 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 399 "declarative_execution.m"
{
#line 842 "declarative_execution.m"
  {
#line 842 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 842 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14288 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14290 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 839 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 839 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 839 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;

#line 14299 "mdb.declarative_execution.c"
    {
#line 14301 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14304 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14306 "mdb.declarative_execution.c"
      {
#line 14308 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14310 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14312 "mdb.declarative_execution.c"
      }
#line 838 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 838 "declarative_execution.m"
      {
#line 839 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 839 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 839 "declarative_execution.m"
          {
#line 839 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 839 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 839 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 839 "declarative_execution.m"
          }
#line 838 "declarative_execution.m"
      }
#line 842 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 841 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 842 "declarative_execution.m"
    else
#line 843 "declarative_execution.m"
      {
#line 843 "declarative_execution.m"
        {
#line 843 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[18])));
#line 843 "declarative_execution.m"
          return;
        }
#line 843 "declarative_execution.m"
      }
#line 842 "declarative_execution.m"
  }
#line 399 "declarative_execution.m"
}

#line 394 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__cond_node_from_id_3_p_0(
#line 394 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14,
#line 394 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 394 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 394 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 394 "declarative_execution.m"
{
#line 832 "declarative_execution.m"
  {
#line 832 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 832 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14375 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14377 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 829 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 829 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 829 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;

#line 14386 "mdb.declarative_execution.c"
    {
#line 14388 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14391 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14393 "mdb.declarative_execution.c"
      {
#line 14395 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14397 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14399 "mdb.declarative_execution.c"
      }
#line 828 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 828 "declarative_execution.m"
      {
#line 829 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 829 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 829 "declarative_execution.m"
          {
#line 829 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 829 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 829 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 829 "declarative_execution.m"
          }
#line 828 "declarative_execution.m"
      }
#line 832 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 831 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 832 "declarative_execution.m"
    else
#line 833 "declarative_execution.m"
      {
#line 833 "declarative_execution.m"
        {
#line 833 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[17])));
#line 833 "declarative_execution.m"
          return;
        }
#line 833 "declarative_execution.m"
      }
#line 832 "declarative_execution.m"
  }
#line 394 "declarative_execution.m"
}

#line 389 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__exit_node_from_id_3_p_0(
#line 389 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19,
#line 389 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 389 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 389 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 389 "declarative_execution.m"
{
#line 822 "declarative_execution.m"
  {
#line 822 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 822 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14462 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14464 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 819 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 819 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 819 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_10_10;
#line 819 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_11_11;
#line 819 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;
#line 819 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_13_13;
#line 819 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_14_14;
#line 819 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_15_15;

#line 14483 "mdb.declarative_execution.c"
    {
#line 14485 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14488 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14490 "mdb.declarative_execution.c"
      {
#line 14492 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14494 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14496 "mdb.declarative_execution.c"
      }
#line 818 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 818 "declarative_execution.m"
      {
#line 819 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 1)));
#line 819 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 819 "declarative_execution.m"
          {
#line 819 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
#line 819 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 819 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 2));
#line 819 "declarative_execution.m"
            mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 819 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
#line 819 "declarative_execution.m"
            mdb__declarative_execution__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 5)));
#line 819 "declarative_execution.m"
            mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 6)));
#line 819 "declarative_execution.m"
            mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 7)));
#line 819 "declarative_execution.m"
          }
#line 818 "declarative_execution.m"
      }
#line 822 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 821 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 822 "declarative_execution.m"
    else
#line 823 "declarative_execution.m"
      {
#line 823 "declarative_execution.m"
        {
#line 823 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[16])));
#line 823 "declarative_execution.m"
          return;
        }
#line 823 "declarative_execution.m"
      }
#line 822 "declarative_execution.m"
  }
#line 389 "declarative_execution.m"
}

#line 382 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(
#line 382 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16,
#line 382 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 382 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 382 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 382 "declarative_execution.m"
{
#line 805 "declarative_execution.m"
  {
#line 805 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 805 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14569 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14571 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 808 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 808 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 808 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;
#line 808 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_11_11;
#line 808 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;

#line 14584 "mdb.declarative_execution.c"
    {
#line 14586 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14589 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14591 "mdb.declarative_execution.c"
      {
#line 14593 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14595 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14597 "mdb.declarative_execution.c"
      }
#line 805 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 805 "declarative_execution.m"
      {
#line 808 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 2)));
#line 808 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 808 "declarative_execution.m"
          {
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 808 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
#line 810 "declarative_execution.m"
            *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 808 "declarative_execution.m"
          }
#line 808 "declarative_execution.m"
        else
#line 812 "declarative_execution.m"
          {
#line 812 "declarative_execution.m"
            {
#line 812 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[15])));
            }
#line 812 "declarative_execution.m"
          }
#line 811 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 805 "declarative_execution.m"
      }
#line 805 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 805 "declarative_execution.m"
  }
#line 382 "declarative_execution.m"
}

#line 374 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__call_node_from_id_3_p_0(
#line 374 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21,
#line 374 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 374 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 374 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 374 "declarative_execution.m"
{
#line 801 "declarative_execution.m"
  {
#line 801 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 801 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14664 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14666 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 798 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 798 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 798 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;
#line 798 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 798 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;
#line 798 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 798 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_14_14;
#line 798 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_15_15;
#line 798 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 798 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17;

#line 14689 "mdb.declarative_execution.c"
    {
#line 14691 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14694 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14696 "mdb.declarative_execution.c"
      {
#line 14698 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14700 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14702 "mdb.declarative_execution.c"
      }
#line 797 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 797 "declarative_execution.m"
      {
#line 798 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 0)));
#line 798 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 798 "declarative_execution.m"
          {
#line 798 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
#line 798 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 798 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 798 "declarative_execution.m"
            mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 798 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
#line 798 "declarative_execution.m"
            mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 5)));
#line 798 "declarative_execution.m"
            mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 6)));
#line 798 "declarative_execution.m"
            mdb__declarative_execution__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 7)));
#line 798 "declarative_execution.m"
            mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 8)));
#line 798 "declarative_execution.m"
            mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 9)));
#line 798 "declarative_execution.m"
          }
#line 797 "declarative_execution.m"
      }
#line 801 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 800 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 801 "declarative_execution.m"
    else
#line 802 "declarative_execution.m"
      {
#line 802 "declarative_execution.m"
        {
#line 802 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[14])));
#line 802 "declarative_execution.m"
          return;
        }
#line 802 "declarative_execution.m"
      }
#line 801 "declarative_execution.m"
  }
#line 374 "declarative_execution.m"
}

#line 368 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__det_trace_node_from_id_3_p_0(
#line 368 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11,
#line 368 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 368 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 368 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 368 "declarative_execution.m"
{
#line 791 "declarative_execution.m"
  {
#line 791 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 791 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14779 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14781 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;

#line 14784 "mdb.declarative_execution.c"
    {
#line 14786 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14789 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14791 "mdb.declarative_execution.c"
      {
#line 14793 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14795 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14797 "mdb.declarative_execution.c"
      }
#line 791 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 790 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 791 "declarative_execution.m"
    else
#line 792 "declarative_execution.m"
      {
#line 792 "declarative_execution.m"
        {
#line 792 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[13])));
#line 792 "declarative_execution.m"
          return;
        }
#line 792 "declarative_execution.m"
      }
#line 791 "declarative_execution.m"
  }
#line 368 "declarative_execution.m"
}

#line 363 "declarative_execution.m"
MR_Box MR_CALL 
mdb__declarative_execution__step_in_stratum_2_f_0(
#line 363 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90,
#line 363 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 363 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 363 "declarative_execution.m"
{
#line 727 "declarative_execution.m"
  {
#line 727 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 727 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Next_6;

#line 727 "declarative_execution.m"
#line 727 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_5)) {
#line 727 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 727 "declarative_execution.m"
      case (MR_Integer) 0:
#line 770 "declarative_execution.m"
        {
#line 771 "declarative_execution.m"
          {
#line 771 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[10])));
          }
#line 770 "declarative_execution.m"
        }
#line 727 "declarative_execution.m"
        break;
#line 727 "declarative_execution.m"
      case (MR_Integer) 1:
#line 727 "declarative_execution.m"
        {
#line 727 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 727 "declarative_execution.m"
          MR_Box mdb__declarative_execution__MaybeRedo_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 727 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 727 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 727 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 727 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 727 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 727 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 7)));

#line 728 "declarative_execution.m"
          {
#line 728 "declarative_execution.m"
            return mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, mdb__declarative_execution__MaybeRedo_9);
          }
#line 727 "declarative_execution.m"
        }
#line 727 "declarative_execution.m"
        break;
#line 727 "declarative_execution.m"
      case (MR_Integer) 2:
#line 736 "declarative_execution.m"
        {
#line 736 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Exit_25 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 736 "declarative_execution.m"
          MR_Word mdb__declarative_execution__ExitNode_29;
#line 736 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 736 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 736 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_27_27 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 736 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 738 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_83_83;
#line 738 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_84_84;
#line 738 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_85_85;
#line 738 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_86_86;
#line 738 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_87_87;
#line 738 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_88_88;
#line 738 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_89_89;

#line 737 "declarative_execution.m"
          {
#line 737 "declarative_execution.m"
            mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Exit_25, &mdb__declarative_execution__ExitNode_29);
          }
#line 738 "declarative_execution.m"
          mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 0));
#line 738 "declarative_execution.m"
          mdb__declarative_execution__V_83_83 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 1));
#line 738 "declarative_execution.m"
          mdb__declarative_execution__V_84_84 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 2));
#line 738 "declarative_execution.m"
          mdb__declarative_execution__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 3)));
#line 738 "declarative_execution.m"
          mdb__declarative_execution__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 4)));
#line 738 "declarative_execution.m"
          mdb__declarative_execution__V_87_87 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 5)));
#line 738 "declarative_execution.m"
          mdb__declarative_execution__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 6)));
#line 738 "declarative_execution.m"
          mdb__declarative_execution__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 7)));
#line 736 "declarative_execution.m"
        }
#line 727 "declarative_execution.m"
        break;
#line 727 "declarative_execution.m"
      case (MR_Integer) 3:
#line 727 "declarative_execution.m"
#line 727 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) {
#line 727 "declarative_execution.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 727 "declarative_execution.m"
          case (MR_Integer) 0:
#line 730 "declarative_execution.m"
            {
#line 730 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Call_78 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 730 "declarative_execution.m"
              MR_Box mdb__declarative_execution__MaybeRedo_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 730 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 730 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 730 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 730 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));

#line 731 "declarative_execution.m"
              {
#line 731 "declarative_execution.m"
                return mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_78, mdb__declarative_execution__MaybeRedo_79);
              }
#line 730 "declarative_execution.m"
            }
#line 727 "declarative_execution.m"
            break;
#line 727 "declarative_execution.m"
          case (MR_Integer) 1:
#line 733 "declarative_execution.m"
            {
#line 733 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Call_80 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 733 "declarative_execution.m"
              MR_Box mdb__declarative_execution__MaybeRedo_81 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 733 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 733 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 733 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 733 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 733 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 7)));

#line 734 "declarative_execution.m"
              {
#line 734 "declarative_execution.m"
                return mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_80, mdb__declarative_execution__MaybeRedo_81);
              }
#line 733 "declarative_execution.m"
            }
#line 727 "declarative_execution.m"
            break;
#line 727 "declarative_execution.m"
          case (MR_Integer) 2:
#line 740 "declarative_execution.m"
            {
#line 740 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_30_30;

#line 740 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 740 "declarative_execution.m"
              mdb__declarative_execution__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 740 "declarative_execution.m"
            }
#line 727 "declarative_execution.m"
            break;
#line 727 "declarative_execution.m"
          case (MR_Integer) 3:
#line 741 "declarative_execution.m"
            {
#line 741 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_31_31;

#line 741 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 741 "declarative_execution.m"
              mdb__declarative_execution__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 741 "declarative_execution.m"
            }
#line 727 "declarative_execution.m"
            break;
#line 727 "declarative_execution.m"
          case (MR_Integer) 4:
#line 742 "declarative_execution.m"
            {
#line 742 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_32_32;
#line 742 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_33_33;

#line 742 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 742 "declarative_execution.m"
              mdb__declarative_execution__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 742 "declarative_execution.m"
              mdb__declarative_execution__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 742 "declarative_execution.m"
            }
#line 727 "declarative_execution.m"
            break;
#line 727 "declarative_execution.m"
          case (MR_Integer) 5:
#line 745 "declarative_execution.m"
            {
#line 745 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Prec_34 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 745 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Status_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 745 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));

#line 749 "declarative_execution.m"
#line 749 "declarative_execution.m"
              switch (mdb__declarative_execution__Status_36) {
#line 749 "declarative_execution.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 749 "declarative_execution.m"
                case (MR_Integer) 1:
#line 747 "declarative_execution.m"
                  {
#line 748 "declarative_execution.m"
                    {
#line 748 "declarative_execution.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[11])));
                    }
#line 747 "declarative_execution.m"
                  }
#line 749 "declarative_execution.m"
                  break;
#line 749 "declarative_execution.m"
                case (MR_Integer) 0:
#line 749 "declarative_execution.m"
                case (MR_Integer) 2:
#line 753 "declarative_execution.m"
                  mdb__declarative_execution__Next_6 = mdb__declarative_execution__Prec_34;
#line 749 "declarative_execution.m"
                  break;
#line 749 "declarative_execution.m"
              }
#line 745 "declarative_execution.m"
            }
#line 727 "declarative_execution.m"
            break;
#line 727 "declarative_execution.m"
          case (MR_Integer) 6:
#line 756 "declarative_execution.m"
            {
#line 756 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_37_37;
#line 756 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_38_38;

#line 756 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 756 "declarative_execution.m"
              mdb__declarative_execution__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 756 "declarative_execution.m"
              mdb__declarative_execution__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 756 "declarative_execution.m"
            }
#line 727 "declarative_execution.m"
            break;
#line 727 "declarative_execution.m"
          case (MR_Integer) 7:
#line 758 "declarative_execution.m"
            {
#line 758 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Cond_40 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 758 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_74_74;
#line 758 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_39_39 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 758 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 759 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_42_42;
#line 759 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_43_43;

#line 759 "declarative_execution.m"
              {
#line 759 "declarative_execution.m"
                mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Cond_40, &mdb__declarative_execution__V_74_74);
              }
#line 759 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 1));
#line 759 "declarative_execution.m"
              mdb__declarative_execution__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 2)));
#line 759 "declarative_execution.m"
              mdb__declarative_execution__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 3)));
#line 758 "declarative_execution.m"
            }
#line 727 "declarative_execution.m"
            break;
#line 727 "declarative_execution.m"
          case (MR_Integer) 8:
#line 773 "declarative_execution.m"
            {
#line 774 "declarative_execution.m"
              {
#line 774 "declarative_execution.m"
                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[12])));
              }
#line 773 "declarative_execution.m"
            }
#line 727 "declarative_execution.m"
            break;
#line 727 "declarative_execution.m"
          case (MR_Integer) 9:
#line 761 "declarative_execution.m"
            {
#line 761 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Neg_45 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 761 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_73_73;
#line 761 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_44_44 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 761 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_46_46 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 762 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_47_47;
#line 762 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_48_48;

#line 762 "declarative_execution.m"
              {
#line 762 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_45, &mdb__declarative_execution__V_73_73);
              }
#line 762 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 1));
#line 762 "declarative_execution.m"
              mdb__declarative_execution__V_47_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 2)));
#line 762 "declarative_execution.m"
              mdb__declarative_execution__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 3)));
#line 761 "declarative_execution.m"
            }
#line 727 "declarative_execution.m"
            break;
#line 727 "declarative_execution.m"
          case (MR_Integer) 10:
#line 764 "declarative_execution.m"
            {
#line 764 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_72_72;
#line 764 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Neg_82 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 764 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 764 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_50_50 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 765 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_51_51;
#line 765 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_52_52;

#line 765 "declarative_execution.m"
              {
#line 765 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_82, &mdb__declarative_execution__V_72_72);
              }
#line 765 "declarative_execution.m"
              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 1));
#line 765 "declarative_execution.m"
              mdb__declarative_execution__V_51_51 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 2)));
#line 765 "declarative_execution.m"
              mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 3)));
#line 764 "declarative_execution.m"
            }
#line 727 "declarative_execution.m"
            break;
#line 727 "declarative_execution.m"
        }
#line 727 "declarative_execution.m"
        break;
#line 727 "declarative_execution.m"
    }
#line 727 "declarative_execution.m"
    return mdb__declarative_execution__Next_6;
#line 727 "declarative_execution.m"
  }
#line 363 "declarative_execution.m"
}

#line 355 "declarative_execution.m"
MR_Box MR_CALL 
mdb__declarative_execution__step_left_in_contour_2_f_0(
#line 355 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100,
#line 355 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 355 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 355 "declarative_execution.m"
{
#line 625 "declarative_execution.m"
  {
#line 625 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 625 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Prec_6;

#line 625 "declarative_execution.m"
#line 625 "declarative_execution.m"
    switch (MR_tag((MR_Word) mdb__declarative_execution__Node_5)) {
#line 625 "declarative_execution.m"
      default: /*NOTREACHED*/ MR_assert(0);
#line 625 "declarative_execution.m"
      case (MR_Integer) 0:
#line 658 "declarative_execution.m"
        {
#line 660 "declarative_execution.m"
          {
#line 660 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[7])));
          }
#line 658 "declarative_execution.m"
        }
#line 625 "declarative_execution.m"
        break;
#line 625 "declarative_execution.m"
      case (MR_Integer) 1:
#line 625 "declarative_execution.m"
        {
#line 625 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 625 "declarative_execution.m"
          MR_Word mdb__declarative_execution__CallNode_15;
#line 625 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 625 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 625 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 625 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 625 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 625 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 625 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
#line 627 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_82_82;
#line 627 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_83_83;
#line 627 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_84_84;
#line 627 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_85_85;
#line 627 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_86_86;
#line 627 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_87_87;
#line 627 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_88_88;
#line 627 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_89_89;
#line 627 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_90_90;

#line 626 "declarative_execution.m"
          {
#line 626 "declarative_execution.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, &mdb__declarative_execution__CallNode_15);
          }
#line 627 "declarative_execution.m"
          mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 0));
#line 627 "declarative_execution.m"
          mdb__declarative_execution__V_82_82 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 1));
#line 627 "declarative_execution.m"
          mdb__declarative_execution__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 2)));
#line 627 "declarative_execution.m"
          mdb__declarative_execution__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 3)));
#line 627 "declarative_execution.m"
          mdb__declarative_execution__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 4)));
#line 627 "declarative_execution.m"
          mdb__declarative_execution__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 5)));
#line 627 "declarative_execution.m"
          mdb__declarative_execution__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 6)));
#line 627 "declarative_execution.m"
          mdb__declarative_execution__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 7)));
#line 627 "declarative_execution.m"
          mdb__declarative_execution__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 8)));
#line 627 "declarative_execution.m"
          mdb__declarative_execution__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 9)));
#line 625 "declarative_execution.m"
        }
#line 625 "declarative_execution.m"
        break;
#line 625 "declarative_execution.m"
      case (MR_Integer) 2:
#line 683 "declarative_execution.m"
        {
#line 683 "declarative_execution.m"
          mdb__declarative_execution__find_prev_contour_3_p_1(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Node_5, &mdb__declarative_execution__Prec_6);
        }
#line 625 "declarative_execution.m"
        break;
#line 625 "declarative_execution.m"
      case (MR_Integer) 3:
#line 625 "declarative_execution.m"
#line 625 "declarative_execution.m"
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) {
#line 625 "declarative_execution.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 625 "declarative_execution.m"
          case (MR_Integer) 0:
#line 700 "declarative_execution.m"
            {
#line 700 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Call_108 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 700 "declarative_execution.m"
              MR_Word mdb__declarative_execution__CallNode_113;
#line 700 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_107_107 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 700 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_109_109 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 700 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 700 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_111_111 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 700 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 702 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_151_151;
#line 702 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_152_152;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_153_153;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_154_154;
#line 702 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_155_155;
#line 702 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_156_156;
#line 702 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_157_157;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_158_158;
#line 702 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_159_159;

#line 701 "declarative_execution.m"
              {
#line 701 "declarative_execution.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_108, &mdb__declarative_execution__CallNode_113);
              }
#line 702 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 0));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_151_151 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 1));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 2)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 3)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 4)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 5)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 6)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_157_157 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 7)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 8)));
#line 702 "declarative_execution.m"
              mdb__declarative_execution__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 9)));
#line 700 "declarative_execution.m"
            }
#line 625 "declarative_execution.m"
            break;
#line 625 "declarative_execution.m"
          case (MR_Integer) 1:
#line 629 "declarative_execution.m"
            {
#line 629 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Call_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 629 "declarative_execution.m"
              MR_Word mdb__declarative_execution__CallNode_80;
#line 629 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_16_16 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 629 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_17_17 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 629 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 629 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 629 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 629 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
#line 631 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_91_91;
#line 631 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_92_92;
#line 631 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_93_93;
#line 631 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_94_94;
#line 631 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_95_95;
#line 631 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_96_96;
#line 631 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_97_97;
#line 631 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_98_98;
#line 631 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_99_99;

#line 630 "declarative_execution.m"
              {
#line 630 "declarative_execution.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_79, &mdb__declarative_execution__CallNode_80);
              }
#line 631 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 0));
#line 631 "declarative_execution.m"
              mdb__declarative_execution__V_91_91 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 1));
#line 631 "declarative_execution.m"
              mdb__declarative_execution__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 2)));
#line 631 "declarative_execution.m"
              mdb__declarative_execution__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 3)));
#line 631 "declarative_execution.m"
              mdb__declarative_execution__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 4)));
#line 631 "declarative_execution.m"
              mdb__declarative_execution__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 5)));
#line 631 "declarative_execution.m"
              mdb__declarative_execution__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 6)));
#line 631 "declarative_execution.m"
              mdb__declarative_execution__V_97_97 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 7)));
#line 631 "declarative_execution.m"
              mdb__declarative_execution__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 8)));
#line 631 "declarative_execution.m"
              mdb__declarative_execution__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 9)));
#line 629 "declarative_execution.m"
            }
#line 625 "declarative_execution.m"
            break;
#line 625 "declarative_execution.m"
          case (MR_Integer) 2:
#line 633 "declarative_execution.m"
            {
#line 633 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_22_22;

#line 633 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 633 "declarative_execution.m"
              mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 633 "declarative_execution.m"
            }
#line 625 "declarative_execution.m"
            break;
#line 625 "declarative_execution.m"
          case (MR_Integer) 3:
#line 635 "declarative_execution.m"
            {
#line 635 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_23_23;

#line 635 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 635 "declarative_execution.m"
              mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 635 "declarative_execution.m"
            }
#line 625 "declarative_execution.m"
            break;
#line 625 "declarative_execution.m"
          case (MR_Integer) 4:
#line 637 "declarative_execution.m"
            {
#line 637 "declarative_execution.m"
              MR_Box mdb__declarative_execution__FirstDisj_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 637 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_78_78;
#line 637 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 637 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 638 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_27_27;

#line 638 "declarative_execution.m"
              {
#line 638 "declarative_execution.m"
                mdb__declarative_execution__first_disj_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__FirstDisj_26, &mdb__declarative_execution__V_78_78);
              }
#line 638 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_78_78, (MR_Integer) 1));
#line 638 "declarative_execution.m"
              mdb__declarative_execution__V_27_27 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_78_78, (MR_Integer) 2)));
#line 637 "declarative_execution.m"
            }
#line 625 "declarative_execution.m"
            break;
#line 625 "declarative_execution.m"
          case (MR_Integer) 5:
#line 640 "declarative_execution.m"
            {
#line 640 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Status_29;
#line 640 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_28_28;

#line 640 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 640 "declarative_execution.m"
              mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 640 "declarative_execution.m"
              mdb__declarative_execution__Status_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 644 "declarative_execution.m"
#line 644 "declarative_execution.m"
              switch (mdb__declarative_execution__Status_29) {
#line 644 "declarative_execution.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 644 "declarative_execution.m"
                case (MR_Integer) 1:
#line 642 "declarative_execution.m"
                  {
#line 643 "declarative_execution.m"
                    {
#line 643 "declarative_execution.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[8])));
                    }
#line 642 "declarative_execution.m"
                  }
#line 644 "declarative_execution.m"
                  break;
#line 644 "declarative_execution.m"
                case (MR_Integer) 0:
#line 646 "declarative_execution.m"
                  {
#line 646 "declarative_execution.m"
                  }
#line 644 "declarative_execution.m"
                  break;
#line 644 "declarative_execution.m"
                case (MR_Integer) 2:
#line 645 "declarative_execution.m"
                  {
#line 645 "declarative_execution.m"
                  }
#line 644 "declarative_execution.m"
                  break;
#line 644 "declarative_execution.m"
              }
#line 640 "declarative_execution.m"
            }
#line 625 "declarative_execution.m"
            break;
#line 625 "declarative_execution.m"
          case (MR_Integer) 6:
#line 650 "declarative_execution.m"
            {
#line 650 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_30_30;
#line 650 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_31_31;

#line 650 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 650 "declarative_execution.m"
              mdb__declarative_execution__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 650 "declarative_execution.m"
              mdb__declarative_execution__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 650 "declarative_execution.m"
            }
#line 625 "declarative_execution.m"
            break;
#line 625 "declarative_execution.m"
          case (MR_Integer) 7:
#line 652 "declarative_execution.m"
            {
#line 652 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Cond_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 652 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_74_74;
#line 652 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 652 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 653 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_35_35;
#line 653 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_36_36;

#line 653 "declarative_execution.m"
              {
#line 653 "declarative_execution.m"
                mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Cond_33, &mdb__declarative_execution__V_74_74);
              }
#line 653 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 1));
#line 653 "declarative_execution.m"
              mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 2)));
#line 653 "declarative_execution.m"
              mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 3)));
#line 652 "declarative_execution.m"
            }
#line 625 "declarative_execution.m"
            break;
#line 625 "declarative_execution.m"
          case (MR_Integer) 8:
#line 662 "declarative_execution.m"
            {
#line 662 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Status_81;
#line 662 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_52_52;

#line 662 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 662 "declarative_execution.m"
              mdb__declarative_execution__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 662 "declarative_execution.m"
              mdb__declarative_execution__Status_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 667 "declarative_execution.m"
#line 667 "declarative_execution.m"
              switch (mdb__declarative_execution__Status_81) {
#line 667 "declarative_execution.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 667 "declarative_execution.m"
                case (MR_Integer) 1:
#line 667 "declarative_execution.m"
                case (MR_Integer) 0:
#line 670 "declarative_execution.m"
                  {
#line 673 "declarative_execution.m"
                    {
#line 673 "declarative_execution.m"
                      mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[9])));
                    }
#line 670 "declarative_execution.m"
                  }
#line 667 "declarative_execution.m"
                  break;
#line 667 "declarative_execution.m"
                case (MR_Integer) 2:
#line 664 "declarative_execution.m"
                  {
#line 664 "declarative_execution.m"
                  }
#line 667 "declarative_execution.m"
                  break;
#line 667 "declarative_execution.m"
              }
#line 662 "declarative_execution.m"
            }
#line 625 "declarative_execution.m"
            break;
#line 625 "declarative_execution.m"
          case (MR_Integer) 9:
#line 655 "declarative_execution.m"
            {
#line 655 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Neg_38 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 655 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_73_73;
#line 655 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 655 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_39_39 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 656 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_40_40;
#line 656 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_41_41;

#line 656 "declarative_execution.m"
              {
#line 656 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_38, &mdb__declarative_execution__V_73_73);
              }
#line 656 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 1));
#line 656 "declarative_execution.m"
              mdb__declarative_execution__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 2)));
#line 656 "declarative_execution.m"
              mdb__declarative_execution__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 3)));
#line 655 "declarative_execution.m"
            }
#line 625 "declarative_execution.m"
            break;
#line 625 "declarative_execution.m"
          case (MR_Integer) 10:
#line 708 "declarative_execution.m"
            {
#line 708 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Neg_187 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 708 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_216_216;
#line 708 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_186_186 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 708 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_188_188 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 709 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_189_189;
#line 709 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_190_190;

#line 709 "declarative_execution.m"
              {
#line 709 "declarative_execution.m"
                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_187, &mdb__declarative_execution__V_216_216);
              }
#line 709 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 1));
#line 709 "declarative_execution.m"
              mdb__declarative_execution__V_189_189 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 2)));
#line 709 "declarative_execution.m"
              mdb__declarative_execution__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 3)));
#line 708 "declarative_execution.m"
            }
#line 625 "declarative_execution.m"
            break;
#line 625 "declarative_execution.m"
        }
#line 625 "declarative_execution.m"
        break;
#line 625 "declarative_execution.m"
    }
#line 625 "declarative_execution.m"
    return mdb__declarative_execution__Prec_6;
#line 625 "declarative_execution.m"
  }
#line 355 "declarative_execution.m"
}

#line 338 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__trace_node_from_id_3_p_0(
#line 338 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4,
#line 338 "declarative_execution.m"
  MR_Box mdb__declarative_execution__HeadVar__1_1,
#line 338 "declarative_execution.m"
  MR_Box mdb__declarative_execution__HeadVar__2_2,
#line 338 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
#line 338 "declarative_execution.m"
{
#line 15796 "mdb.declarative_execution.c"
  {
#line 15798 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;
#line 15800 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15802 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_HeadVar__3_3;

#line 15805 "mdb.declarative_execution.c"
    {
#line 15807 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4), mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__HeadVar__2_2, &mdb__declarative_execution__conv1_HeadVar__3_3);
    }
#line 15810 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 15812 "mdb.declarative_execution.c"
      {
#line 15814 "mdb.declarative_execution.c"
        *mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv1_HeadVar__3_3);
#line 15816 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 15818 "mdb.declarative_execution.c"
      }
#line 15820 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 15822 "mdb.declarative_execution.c"
  }
#line 338 "declarative_execution.m"
}

#line 301 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(
#line 301 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_23,
#line 301 "declarative_execution.m"
  MR_Word mdb__declarative_execution__CallNode_3,
#line 301 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__MaybeProcDefnRep_4)
#line 301 "declarative_execution.m"
{
#line 494 "declarative_execution.m"
  {
#line 494 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 494 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 7)));
#line 495 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 0));
#line 495 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 1));
#line 495 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 2)));
#line 495 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 3)));
#line 495 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 4)));
#line 495 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 5)));
#line 495 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 6)));
#line 495 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 8)));
#line 495 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 9)));
#line 513 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_6;

#line 527 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_LabelLayout * CallLabelLayout;
	const MR_ProcLayout * ProcLayout;
	MR_bool SUCCESS_INDICATOR;

	CallLabelLayout = (const MR_LabelLayout *) mdb__declarative_execution__Label_5 ;
		{
#line 527 "declarative_execution.m"

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

#line 15890 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__declarative_execution__ProcLayout_6  = (MR_Box) ProcLayout;
#line 527 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 513 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 497 "declarative_execution.m"
      {
#line 500 "declarative_execution.m"
        MR_Word mdb__declarative_execution__ProcDefnRep_7;

#line 566 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_6 ;
		{
#line 566 "declarative_execution.m"

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

#line 15932 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__declarative_execution__ProcDefnRep_7  = ProcDefnRep;
#line 566 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 500 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 499 "declarative_execution.m"
          {
#line 499 "declarative_execution.m"
            MR_Word base;
#line 499 "declarative_execution.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 499 "declarative_execution.m"
            *mdb__declarative_execution__MaybeProcDefnRep_4 = base;
#line 499 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcDefnRep_7));
#line 499 "declarative_execution.m"
          }
#line 500 "declarative_execution.m"
        else
#line 501 "declarative_execution.m"
          {
#line 501 "declarative_execution.m"
            MR_Box mdb__declarative_execution__ByteCodeBytes_8;
#line 507 "declarative_execution.m"
            MR_Word mdb__declarative_execution__ProcDefnRep_12;

#line 501 "declarative_execution.m"
            {
#line 501 "declarative_execution.m"
              mdb__declarative_execution__ByteCodeBytes_8 = mdbcomp__rtti_access__proc_bytecode_bytes_1_f_0(mdb__declarative_execution__ProcLayout_6);
            }
#line 503 "declarative_execution.m"
            {
#line 503 "declarative_execution.m"
              mdb__declarative_execution__succeeded = mdbcomp__program_representation__trace_read_proc_defn_rep_3_p_0(mdb__declarative_execution__ByteCodeBytes_8, mdb__declarative_execution__Label_5, &mdb__declarative_execution__ProcDefnRep_12);
            }
#line 507 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 505 "declarative_execution.m"
              {
#line 603 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_6 ;
	ProcDefnRep =  mdb__declarative_execution__ProcDefnRep_12 ;
		{
#line 603 "declarative_execution.m"

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_defn_rep: %p %x\n", ProcLayout, ProcDefnRep);
#endif
    MR_insert_proc_defn_rep(ProcLayout, ProcDefnRep);

#line 15996 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
#line 603 "declarative_execution.m"
}
#line 506 "declarative_execution.m"
                {
#line 506 "declarative_execution.m"
                  MR_Word base;
#line 506 "declarative_execution.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 506 "declarative_execution.m"
                  *mdb__declarative_execution__MaybeProcDefnRep_4 = base;
#line 506 "declarative_execution.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcDefnRep_12));
#line 506 "declarative_execution.m"
                }
#line 505 "declarative_execution.m"
              }
#line 507 "declarative_execution.m"
            else
#line 508 "declarative_execution.m"
              {
#line 508 "declarative_execution.m"
                {
#line 508 "declarative_execution.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[6])));
#line 508 "declarative_execution.m"
                  return;
                }
#line 508 "declarative_execution.m"
              }
#line 501 "declarative_execution.m"
          }
#line 497 "declarative_execution.m"
      }
#line 513 "declarative_execution.m"
    else
#line 514 "declarative_execution.m"
      *mdb__declarative_execution__MaybeProcDefnRep_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "declarative_execution.m"
  }
#line 301 "declarative_execution.m"
}

#line 298 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__get_pred_attributes_5_p_0(
#line 298 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ProcId_6,
#line 298 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Module_7,
#line 298 "declarative_execution.m"
  MR_String * mdb__declarative_execution__Name_8,
#line 298 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__Arity_9,
#line 298 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__PredOrFunc_10)
#line 298 "declarative_execution.m"
{
#line 484 "declarative_execution.m"
  {
#line 484 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 484 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__ProcId_6)) == (MR_mktag((MR_Integer) 0))))
#line 484 "declarative_execution.m"
      {
#line 484 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_11_11;
#line 484 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_12_12;

#line 484 "declarative_execution.m"
        *mdb__declarative_execution__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 0)));
#line 484 "declarative_execution.m"
        *mdb__declarative_execution__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 1)));
#line 484 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 2)));
#line 484 "declarative_execution.m"
        *mdb__declarative_execution__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 3)));
#line 484 "declarative_execution.m"
        *mdb__declarative_execution__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 4)));
#line 484 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 5)));
#line 484 "declarative_execution.m"
      }
#line 484 "declarative_execution.m"
    else
#line 486 "declarative_execution.m"
      {
#line 486 "declarative_execution.m"
        MR_Word mdb__declarative_execution__SpecialId_13;
#line 486 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_14_14;
#line 486 "declarative_execution.m"
        MR_String mdb__declarative_execution__V_15_15;
#line 486 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_16_16;
#line 486 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_17_17;

#line 486 "declarative_execution.m"
        *mdb__declarative_execution__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 0)));
#line 486 "declarative_execution.m"
        mdb__declarative_execution__SpecialId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 1)));
#line 486 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 2)));
#line 486 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 3)));
#line 486 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 4)));
#line 486 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 5)));
#line 487 "declarative_execution.m"
        *mdb__declarative_execution__PredOrFunc_10 = (MR_Integer) 0;
#line 488 "declarative_execution.m"
        {
#line 488 "declarative_execution.m"
          *mdb__declarative_execution__Arity_9 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(mdb__declarative_execution__SpecialId_13);
        }
#line 489 "declarative_execution.m"
        {
#line 489 "declarative_execution.m"
          *mdb__declarative_execution__Name_8 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(mdb__declarative_execution__SpecialId_13);
        }
#line 486 "declarative_execution.m"
      }
#line 484 "declarative_execution.m"
  }
#line 298 "declarative_execution.m"
}

#line 292 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__get_trace_call_atom_1_f_1(
#line 292 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_15,
#line 292 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 292 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Atom_13)
#line 292 "declarative_execution.m"
{
#line 617 "declarative_execution.m"
  {
#line 617 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 617 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_5;
#line 617 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_10;
#line 617 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_14;
#line 616 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3;
#line 616 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4;
#line 616 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_6_6;
#line 616 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7;
#line 616 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8;
#line 616 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 616 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 616 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;

#line 616 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 616 "declarative_execution.m"
      {
#line 616 "declarative_execution.m"
        mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 616 "declarative_execution.m"
        mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 616 "declarative_execution.m"
        mdb__declarative_execution__AtomArgs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 616 "declarative_execution.m"
        mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 616 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 616 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 616 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 616 "declarative_execution.m"
        mdb__declarative_execution__Label_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 616 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
#line 616 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));
#line 618 "declarative_execution.m"
        {
#line 618 "declarative_execution.m"
          mdb__declarative_execution__ProcLayout_14 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_10);
        }
#line 619 "declarative_execution.m"
        {
#line 619 "declarative_execution.m"
          MR_Word base;
#line 619 "declarative_execution.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "declarative_execution.m"
          *mdb__declarative_execution__Atom_13 = base;
#line 619 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_14));
#line 619 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_5));
#line 619 "declarative_execution.m"
        }
#line 619 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 616 "declarative_execution.m"
      }
#line 617 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 617 "declarative_execution.m"
  }
#line 292 "declarative_execution.m"
}

#line 291 "declarative_execution.m"
MR_Word MR_CALL 
mdb__declarative_execution__get_trace_call_atom_1_f_0(
#line 291 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_15,
#line 291 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 291 "declarative_execution.m"
{
#line 617 "declarative_execution.m"
  {
#line 617 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 617 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Atom_13;
#line 617 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 617 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 617 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_14;
#line 616 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 616 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 616 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 616 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 616 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 616 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 616 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
#line 616 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));

#line 618 "declarative_execution.m"
    {
#line 618 "declarative_execution.m"
      mdb__declarative_execution__ProcLayout_14 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_10);
    }
#line 619 "declarative_execution.m"
    {
#line 619 "declarative_execution.m"
      mdb__declarative_execution__Atom_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 619 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_13, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_14));
#line 619 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_13, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_5));
#line 619 "declarative_execution.m"
    }
#line 617 "declarative_execution.m"
    return mdb__declarative_execution__Atom_13;
#line 617 "declarative_execution.m"
  }
#line 291 "declarative_execution.m"
}

#line 288 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_1_f_1(
#line 288 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_13,
#line 288 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 288 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Atom_11)
#line 288 "declarative_execution.m"
{
#line 612 "declarative_execution.m"
  {
#line 612 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 612 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_6;
#line 612 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_8;
#line 612 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_12;
#line 612 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3;
#line 612 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4;
#line 612 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_5_5;
#line 612 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7;
#line 612 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_9_9;
#line 612 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;

#line 612 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 612 "declarative_execution.m"
      {
#line 612 "declarative_execution.m"
        mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 612 "declarative_execution.m"
        mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 612 "declarative_execution.m"
        mdb__declarative_execution__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 612 "declarative_execution.m"
        mdb__declarative_execution__AtomArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 612 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 612 "declarative_execution.m"
        mdb__declarative_execution__Label_8 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 612 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 612 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 613 "declarative_execution.m"
        {
#line 613 "declarative_execution.m"
          mdb__declarative_execution__ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_8);
        }
#line 614 "declarative_execution.m"
        {
#line 614 "declarative_execution.m"
          MR_Word base;
#line 614 "declarative_execution.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 614 "declarative_execution.m"
          *mdb__declarative_execution__Atom_11 = base;
#line 614 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_12));
#line 614 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_6));
#line 614 "declarative_execution.m"
        }
#line 614 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 612 "declarative_execution.m"
      }
#line 612 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 612 "declarative_execution.m"
  }
#line 288 "declarative_execution.m"
}

#line 287 "declarative_execution.m"
MR_Word MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_1_f_0(
#line 287 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_13,
#line 287 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 287 "declarative_execution.m"
{
#line 612 "declarative_execution.m"
  {
#line 612 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 612 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Atom_11;
#line 612 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 612 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_8 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 612 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_12;
#line 612 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 612 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 612 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 612 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 612 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 612 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));

#line 613 "declarative_execution.m"
    {
#line 613 "declarative_execution.m"
      mdb__declarative_execution__ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_8);
    }
#line 614 "declarative_execution.m"
    {
#line 614 "declarative_execution.m"
      mdb__declarative_execution__Atom_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 614 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_11, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_12));
#line 614 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_11, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_6));
#line 614 "declarative_execution.m"
    }
#line 612 "declarative_execution.m"
    return mdb__declarative_execution__Atom_11;
#line 612 "declarative_execution.m"
  }
#line 287 "declarative_execution.m"
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
