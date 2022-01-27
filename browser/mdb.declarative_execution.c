/*
** Automatically generated from `declarative_execution.m'
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
#include "mdbcomp.trace_counts.mih"




#line 91 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0;

#line 94 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1;

#line 97 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2;

#line 100 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_goal_status_0[3];

#line 103 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_goal_status_0[3];

#line 106 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_goal_status_0[3];

#line 109 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0[1];

#line 112 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0;

#line 115 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0;

#line 118 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0[2];

#line 121 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0[2];

#line 124 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0;

#line 127 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0[1];

#line 130 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0[1];

#line 133 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0[1];

#line 136 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0[1];

#line 139 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0;

#line 142 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0[3];

#line 145 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0[3];

#line 148 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0;

#line 151 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0[1];

#line 154 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0[1];

#line 157 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0[1];

#line 160 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0[1];

#line 163 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0;

#line 166 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0;

#line 169 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_0[10];

#line 172 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_0[10];

#line 175 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0;

#line 178 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_1[8];

#line 181 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_1[8];

#line 184 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1;

#line 187 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2[5];

#line 190 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_2[5];

#line 193 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2;

#line 196 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3[6];

#line 199 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_3[6];

#line 202 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_3;

#line 205 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4[7];

#line 208 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_4[7];

#line 211 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_4;

#line 214 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5[2];

#line 217 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5[2];

#line 220 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_5;

#line 223 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6[2];

#line 226 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6[2];

#line 229 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_6;

#line 232 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7[3];

#line 235 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7[3];

#line 238 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_7;

#line 241 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8[3];

#line 244 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8[3];

#line 247 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_8;

#line 250 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9[3];

#line 253 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9[3];

#line 256 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_9;

#line 259 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10[3];

#line 262 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10[3];

#line 265 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_10;

#line 268 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11[3];

#line 271 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11[3];

#line 274 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_11;

#line 277 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12[3];

#line 280 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12[3];

#line 283 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_12;

#line 286 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13[3];

#line 289 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13[3];

#line 292 "mdb.declarative_execution.c"
static const MR_DuFunctorDesc mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_13;

#line 295 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0[1];

#line 298 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1[1];

#line 301 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2[1];

#line 304 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_3[11];

#line 307 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_node_1[4];

#line 310 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_node_1[14];

#line 313 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_1[14];

#line 316 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0[1];

#line 319 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0;

#line 322 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0[1];

#line 325 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0;

#line 328 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0[1];

#line 331 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0;

#line 334 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0;

#line 337 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0;

#line 340 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0[1];

#line 343 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0;

#line 346 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0;

#line 349 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1;

#line 352 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_which_headvars_0[2];

#line 355 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_which_headvars_0[2];

#line 358 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_which_headvars_0[2];

#line 361 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__type_class_id_var_names_annotated_trace_2[2];

#line 364 "mdb.declarative_execution.c"
static const MR_TypeClassMethod mdb__declarative_execution__mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2[1];

#line 367 "mdb.declarative_execution.c"
static const MR_TypeClassId mdb__declarative_execution__mdb__declarative_execution__type_class_id_annotated_trace_2;

#line 370 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0_10001(
#line 373 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 375 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 378 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0_10001(
#line 381 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 383 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 385 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 388 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0_10001(
#line 391 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 393 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 396 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0_10001(
#line 399 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 401 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 403 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 406 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001(
#line 409 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 411 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 414 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001(
#line 417 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 419 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 421 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 424 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0_10001(
#line 427 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 429 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 432 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0_10001(
#line 435 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 437 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 439 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 442 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001(
#line 445 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 447 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 450 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001(
#line 453 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 455 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 457 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 460 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0_10001(
#line 463 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 465 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 468 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0_10001(
#line 471 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 473 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 475 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 478 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001(
#line 481 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 483 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 486 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001(
#line 489 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 491 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 493 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 496 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0_10001(
#line 499 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 501 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 503 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 506 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0_10001(
#line 509 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 511 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_2,
#line 513 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3,
#line 515 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_4);

#line 518 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0_10001(
#line 521 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 523 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 526 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0_10001(
#line 529 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 531 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 533 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 536 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0_10001(
#line 539 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 541 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 544 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0_10001(
#line 547 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 549 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 551 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 554 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0_10001(
#line 557 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 559 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 562 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0_10001(
#line 565 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 567 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 569 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 572 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0_10001(
#line 575 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 577 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 580 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0_10001(
#line 583 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 585 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 587 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 590 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0_10001(
#line 593 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 595 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2);

#line 598 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0_10001(
#line 601 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 603 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 605 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3);

#line 608 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
#line 611 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__closure_arg,
#line 613 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 615 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 617 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_3);

#line 620 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
#line 623 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__closure_arg,
#line 625 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 627 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 629 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_3);

#line 872 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 872 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 872 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 872 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3);

#line 1381 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 1381 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1381 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1381 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3);

#line 1558 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(
#line 1558 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1558 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ArgNum_2,
#line 1558 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1558 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__UserArgNum_4);

#line 1535 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(
#line 1535 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1535 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SearchUserHeadVarNum_2,
#line 1535 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1535 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__ArgNum_4);

#line 1459 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__convert_node_2_p_0(
#line 1459 "declarative_execution.m"
  MR_Word mdb__declarative_execution__N1_1,
#line 1459 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__N2_2);

#line 1447 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_id_to_key_2_p_0(
#line 1447 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_1,
#line 1447 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Key_2);

#line 1433 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_map_4_p_0(
#line 1433 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_5,
#line 1433 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_6,
#line 1433 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3,
#line 1433 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Map_8);

#line 1348 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0(
#line 1348 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_5,
#line 1348 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_6,
#line 1348 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_7,
#line 1348 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__4_4);

#line 1336 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_value_5_p_0(
#line 1336 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_6,
#line 1336 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_7,
#line 1336 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Val_8,
#line 1336 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_9,
#line 1336 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__5_5);

#line 1323 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__init_trace_atom_args_0_f_0(void);

#line 1311 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__null_trace_node_id_1_p_0(
#line 1311 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Id_1);

#line 1302 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_fail_node_3_f_0(
#line 1302 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1302 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1302 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1293 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_succ_node_3_f_0(
#line 1293 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1293 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1293 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1285 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_node_2_f_0(
#line 1285 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1285 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1276 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_else_node_3_f_0(
#line 1276 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1276 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1276 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1267 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_then_node_3_f_0(
#line 1267 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1267 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1267 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7);

#line 1259 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_cond_node_2_f_0(
#line 1259 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1259 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1243 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_later_disj_node_4_f_0(
#line 1243 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_6,
#line 1243 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1243 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_8,
#line 1243 "declarative_execution.m"
  MR_Word mdb__declarative_execution__PrevDisj_9);

#line 1234 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_first_disj_node_2_f_0(
#line 1234 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1234 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1226 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_switch_node_2_f_0(
#line 1226 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1226 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5);

#line 1213 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__construct_excp_node_8_p_0(
#line 1213 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_9,
#line 1213 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_10,
#line 1213 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_11,
#line 1213 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exception_12,
#line 1213 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_13,
#line 1213 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_14,
#line 1213 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_15,
#line 1213 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Excp_16);

#line 1203 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_fail_node_6_f_0(
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_8,
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_9,
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Redo_10,
#line 1203 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_11,
#line 1203 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_12,
#line 1203 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_13);

#line 1194 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_redo_node_5_f_0(
#line 1194 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1194 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exit_8,
#line 1194 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Event_9,
#line 1194 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_10,
#line 1194 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_11);

#line 1182 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_exit_node_8_f_0(
#line 1182 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_10,
#line 1182 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_11,
#line 1182 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_12,
#line 1182 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_13,
#line 1182 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1182 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_15,
#line 1182 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
#line 1182 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_17);

#line 1176 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_no_maybe_label_0_f_0(void);

#line 1170 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_yes_maybe_label_1_f_0(
#line 1170 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_3);

#line 1147 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_call_node_9_f_0(
#line 1147 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_11,
#line 1147 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_12,
#line 1147 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SeqNo_13,
#line 1147 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1147 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
#line 1147 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
#line 1147 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_17,
#line 1147 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
#line 1147 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_19);

#line 1131 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__print_trace_node_4_p_0(
#line 1131 "declarative_execution.m"
  MR_Word mdb__declarative_execution__OutStr_5,
#line 1131 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_6);

#line 1115 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__find_prev_contour_store_2_f_0(
#line 1115 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1115 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_5);

#line 1102 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__step_left_in_contour_store_2_f_0(
#line 1102 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1102 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5);

#line 1089 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_first_disj_2_p_0(
#line 1089 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1089 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__2_2);

#line 1076 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_call_3_p_0(
#line 1076 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_1,
#line 1076 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1076 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Call_3);

#line 1061 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_seqno_3_p_0(
#line 1061 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_4,
#line 1061 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 1061 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__SeqNo_6);

#line 1036 "declarative_execution.m"
static MR_String MR_CALL 
mdb__declarative_execution__trace_node_path_1_f_0(
#line 1036 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_3);

#line 1017 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__trace_node_port_1_f_0(
#line 1017 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1);

#line 991 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__neg_node_set_status_2_f_0(
#line 991 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg0_4,
#line 991 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5);

#line 975 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__cond_node_set_status_2_f_0(
#line 975 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond0_4,
#line 975 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5);

#line 956 "declarative_execution.m"
static MR_Integer MR_CALL 
mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0(
#line 956 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3);

#line 938 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0(
#line 938 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 938 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IdealDepth_5);

#line 921 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_set_last_interface_2_f_0(
#line 921 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 921 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Last_5);

#line 908 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_get_last_interface_1_f_0(
#line 908 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3);

#line 891 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__search_trace_node_store_3_p_0(
#line 891 "declarative_execution.m"
  MR_Word mdb__declarative_execution___Store_1,
#line 891 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_2,
#line 891 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_3);

#line 777 "declarative_execution.m"
static MR_Box MR_CALL 
mdb__declarative_execution__step_over_redo_or_call_3_f_0(
#line 777 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24,
#line 777 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_5,
#line 777 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Call_6,
#line 777 "declarative_execution.m"
  MR_Box mdb__declarative_execution__MaybeRedo_7);

#line 690 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_1(
#line 690 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67,
#line 690 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 690 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 690 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__OnContour_6);

#line 594 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__cache_proc_defn_rep_2_p_0(
#line 594 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 594 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ProcDefnRep_2);

#line 555 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0(
#line 555 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 555 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__ProcDefnRep_2);

#line 516 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__call_node_bytecode_layout_2_p_0(
#line 516 "declarative_execution.m"
  MR_Box mdb__declarative_execution__CallLabelLayout_1,
#line 516 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__ProcLayout_2);

#line 1500 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0_1(
#line 1500 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1500 "declarative_execution.m"
  MR_Box mdb__declarative_execution__wrapper_arg_1);

#line 1500 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0_1(
#line 1500 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1500 "declarative_execution.m"
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

#line 1421 "declarative_execution.m"
void 
MR_DD_save_trace(
#line 1421 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Stream_6,
#line 1421 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_7,
#line 1421 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_8)
#line 1421 "declarative_execution.m"
{
#line 1421 "declarative_execution.m"
	mdb__declarative_execution__save_trace_node_store_5_p_0((MR_Word) mdb__declarative_execution__Stream_6, (MR_Word) mdb__declarative_execution__Store_7, (MR_Word) mdb__declarative_execution__NodeId_8);
}

#line 1350 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_no_value(
#line 1350 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_5,
#line 1350 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_6,
#line 1350 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_7,
#line 1350 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__4_4)
#line 1350 "declarative_execution.m"
{
#line 1350 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0((MR_Integer) mdb__declarative_execution__HldsNum_5, (MR_Integer) mdb__declarative_execution__ProgVis_6, (MR_Word) mdb__declarative_execution__Args_7, (MR_Word *) mdb__declarative_execution__HeadVar__4_4);
}

#line 1338 "declarative_execution.m"
void 
MR_DD_add_trace_atom_arg_value(
#line 1338 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_6,
#line 1338 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_7,
#line 1338 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Val_8,
#line 1338 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_9,
#line 1338 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__5_5)
#line 1338 "declarative_execution.m"
{
#line 1338 "declarative_execution.m"
	mdb__declarative_execution__add_trace_atom_arg_value_5_p_0((MR_Integer) mdb__declarative_execution__HldsNum_6, (MR_Integer) mdb__declarative_execution__ProgVis_7, (MR_Word) mdb__declarative_execution__Val_8, (MR_Word) mdb__declarative_execution__Args_9, (MR_Word *) mdb__declarative_execution__HeadVar__5_5);
}

#line 1325 "declarative_execution.m"
MR_Word 
MR_DD_init_trace_atom_args(void)
#line 1325 "declarative_execution.m"
{
#line 1325 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__init_trace_atom_args_0_f_0();
	return ret_value;
}

#line 1304 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_fail_node(
#line 1304 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1304 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1304 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1304 "declarative_execution.m"
{
#line 1304 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_fail_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Neg_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1295 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_succ_node(
#line 1295 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1295 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1295 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1295 "declarative_execution.m"
{
#line 1295 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_succ_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Neg_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1287 "declarative_execution.m"
MR_Word 
MR_DD_construct_neg_node(
#line 1287 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1287 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1287 "declarative_execution.m"
{
#line 1287 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_neg_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1278 "declarative_execution.m"
MR_Word 
MR_DD_construct_else_node(
#line 1278 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1278 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1278 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1278 "declarative_execution.m"
{
#line 1278 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_else_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Cond_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1269 "declarative_execution.m"
MR_Word 
MR_DD_construct_then_node(
#line 1269 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1269 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1269 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_7)
#line 1269 "declarative_execution.m"
{
#line 1269 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_7;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_7, mdb__declarative_execution__boxed_Label_7);
	ret_value = (MR_Word)mdb__declarative_execution__construct_then_node_3_f_0((MR_Word) mdb__declarative_execution__Preceding_5, (MR_Word) mdb__declarative_execution__Cond_6, mdb__declarative_execution__boxed_Label_7);
	return ret_value;
}

#line 1261 "declarative_execution.m"
MR_Word 
MR_DD_construct_cond_node(
#line 1261 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1261 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1261 "declarative_execution.m"
{
#line 1261 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_cond_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1245 "declarative_execution.m"
MR_Word 
MR_DD_construct_later_disj_node(
#line 1245 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_6,
#line 1245 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1245 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_8,
#line 1245 "declarative_execution.m"
  MR_Word mdb__declarative_execution__PrevDisj_9)
#line 1245 "declarative_execution.m"
{
#line 1245 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_8;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_8, mdb__declarative_execution__boxed_Label_8);
	ret_value = (MR_Word)mdb__declarative_execution__construct_later_disj_node_4_f_0((MR_Word) mdb__declarative_execution__Store_6, (MR_Word) mdb__declarative_execution__Preceding_7, mdb__declarative_execution__boxed_Label_8, (MR_Word) mdb__declarative_execution__PrevDisj_9);
	return ret_value;
}

#line 1236 "declarative_execution.m"
MR_Word 
MR_DD_construct_first_disj_node(
#line 1236 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1236 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1236 "declarative_execution.m"
{
#line 1236 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_first_disj_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1228 "declarative_execution.m"
MR_Word 
MR_DD_construct_switch_node(
#line 1228 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1228 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_5)
#line 1228 "declarative_execution.m"
{
#line 1228 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_5;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_5, mdb__declarative_execution__boxed_Label_5);
	ret_value = (MR_Word)mdb__declarative_execution__construct_switch_node_2_f_0((MR_Word) mdb__declarative_execution__Preceding_4, mdb__declarative_execution__boxed_Label_5);
	return ret_value;
}

#line 1216 "declarative_execution.m"
void 
MR_DD_construct_excp_node(
#line 1216 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_9,
#line 1216 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_10,
#line 1216 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_11,
#line 1216 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exception_12,
#line 1216 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_13,
#line 1216 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_14,
#line 1216 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_15,
#line 1216 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Excp_16)
#line 1216 "declarative_execution.m"
{
#line 1216 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_14;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_14, mdb__declarative_execution__boxed_Label_14);
	mdb__declarative_execution__construct_excp_node_8_p_0((MR_Word) mdb__declarative_execution__Preceding_9, (MR_Word) mdb__declarative_execution__Call_10, (MR_Word) mdb__declarative_execution__MaybeRedo_11, (MR_Word) mdb__declarative_execution__Exception_12, (MR_Integer) mdb__declarative_execution__EventNo_13, mdb__declarative_execution__boxed_Label_14, (MR_Integer) mdb__declarative_execution__Suspicion_15, (MR_Word *) mdb__declarative_execution__Excp_16);
}

#line 1206 "declarative_execution.m"
MR_Word 
MR_DD_construct_fail_node(
#line 1206 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_8,
#line 1206 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_9,
#line 1206 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Redo_10,
#line 1206 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_11,
#line 1206 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_12,
#line 1206 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_13)
#line 1206 "declarative_execution.m"
{
#line 1206 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_12;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_12, mdb__declarative_execution__boxed_Label_12);
	ret_value = (MR_Word)mdb__declarative_execution__construct_fail_node_6_f_0((MR_Word) mdb__declarative_execution__Preceding_8, (MR_Word) mdb__declarative_execution__Call_9, (MR_Word) mdb__declarative_execution__Redo_10, (MR_Integer) mdb__declarative_execution__EventNo_11, mdb__declarative_execution__boxed_Label_12, (MR_Integer) mdb__declarative_execution__Suspicion_13);
	return ret_value;
}

#line 1196 "declarative_execution.m"
MR_Word 
MR_DD_construct_redo_node(
#line 1196 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1196 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exit_8,
#line 1196 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Event_9,
#line 1196 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_10,
#line 1196 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_11)
#line 1196 "declarative_execution.m"
{
#line 1196 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_10;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_10, mdb__declarative_execution__boxed_Label_10);
	ret_value = (MR_Word)mdb__declarative_execution__construct_redo_node_5_f_0((MR_Word) mdb__declarative_execution__Preceding_7, (MR_Word) mdb__declarative_execution__Exit_8, (MR_Integer) mdb__declarative_execution__Event_9, mdb__declarative_execution__boxed_Label_10, (MR_Integer) mdb__declarative_execution__Suspicion_11);
	return ret_value;
}

#line 1185 "declarative_execution.m"
MR_Word 
MR_DD_construct_exit_node(
#line 1185 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_10,
#line 1185 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_11,
#line 1185 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_12,
#line 1185 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_13,
#line 1185 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1185 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_15,
#line 1185 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
#line 1185 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_17)
#line 1185 "declarative_execution.m"
{
#line 1185 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_15;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_15, mdb__declarative_execution__boxed_Label_15);
	ret_value = (MR_Word)mdb__declarative_execution__construct_exit_node_8_f_0((MR_Word) mdb__declarative_execution__Preceding_10, (MR_Word) mdb__declarative_execution__Call_11, (MR_Word) mdb__declarative_execution__MaybeRedo_12, (MR_Word) mdb__declarative_execution__AtomArgs_13, (MR_Integer) mdb__declarative_execution__EventNo_14, mdb__declarative_execution__boxed_Label_15, (MR_Integer) mdb__declarative_execution__IoSeqNum_16, (MR_Integer) mdb__declarative_execution__Suspicion_17);
	return ret_value;
}

#line 1177 "declarative_execution.m"
MR_Word 
MR_DD_make_no_maybe_label(void)
#line 1177 "declarative_execution.m"
{
#line 1177 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__make_no_maybe_label_0_f_0();
	return ret_value;
}

#line 1171 "declarative_execution.m"
MR_Word 
MR_DD_make_yes_maybe_label(
#line 1171 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_3)
#line 1171 "declarative_execution.m"
{
#line 1171 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_3;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_3, mdb__declarative_execution__boxed_Label_3);
	ret_value = (MR_Word)mdb__declarative_execution__make_yes_maybe_label_1_f_0(mdb__declarative_execution__boxed_Label_3);
	return ret_value;
}

#line 1150 "declarative_execution.m"
MR_Word 
MR_DD_construct_call_node(
#line 1150 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_11,
#line 1150 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_12,
#line 1150 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SeqNo_13,
#line 1150 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1150 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
#line 1150 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
#line 1150 "declarative_execution.m"
  const MR_LabelLayout * mdb__declarative_execution__Label_17,
#line 1150 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
#line 1150 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_19)
#line 1150 "declarative_execution.m"
{
#line 1150 "declarative_execution.m"
	MR_Box mdb__declarative_execution__boxed_Label_17;
	MR_Word ret_value;
	MR_MAYBE_BOX_FOREIGN_TYPE(const MR_LabelLayout *, mdb__declarative_execution__Label_17, mdb__declarative_execution__boxed_Label_17);
	ret_value = (MR_Word)mdb__declarative_execution__construct_call_node_9_f_0((MR_Word) mdb__declarative_execution__Preceding_11, (MR_Word) mdb__declarative_execution__AtomArgs_12, (MR_Integer) mdb__declarative_execution__SeqNo_13, (MR_Integer) mdb__declarative_execution__EventNo_14, (MR_Word) mdb__declarative_execution__AtMaxDepth_15, (MR_Word) mdb__declarative_execution__MaybeReturnLabel_16, mdb__declarative_execution__boxed_Label_17, (MR_Integer) mdb__declarative_execution__IoSeqNum_18, (MR_Integer) mdb__declarative_execution__Suspicion_19);
	return ret_value;
}

#line 1134 "declarative_execution.m"
void 
MR_DD_print_trace_node(
#line 1134 "declarative_execution.m"
  MR_Word mdb__declarative_execution__OutStr_5,
#line 1134 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_6)
#line 1134 "declarative_execution.m"
{
#line 1134 "declarative_execution.m"
	mdb__declarative_execution__print_trace_node_4_p_0((MR_Word) mdb__declarative_execution__OutStr_5, (MR_Word) mdb__declarative_execution__Node_6);
}

#line 1117 "declarative_execution.m"
MR_Word 
MR_DD_find_prev_contour(
#line 1117 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1117 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_5)
#line 1117 "declarative_execution.m"
{
#line 1117 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__find_prev_contour_store_2_f_0((MR_Word) mdb__declarative_execution__Store_4, (MR_Word) mdb__declarative_execution__Id_5);
	return ret_value;
}

#line 1104 "declarative_execution.m"
MR_Word 
MR_DD_step_left_in_contour(
#line 1104 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1104 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 1104 "declarative_execution.m"
{
#line 1104 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__step_left_in_contour_store_2_f_0((MR_Word) mdb__declarative_execution__Store_4, (MR_Word) mdb__declarative_execution__Node_5);
	return ret_value;
}

#line 1092 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_first_disj(
#line 1092 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1092 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__2_2)
#line 1092 "declarative_execution.m"
{
#line 1092 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_first_disj_2_p_0((MR_Word) mdb__declarative_execution__HeadVar__1_1, (MR_Word *) mdb__declarative_execution__HeadVar__2_2);
	return ret_value;
}

#line 1079 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_call(
#line 1079 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_1,
#line 1079 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1079 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Call_3)
#line 1079 "declarative_execution.m"
{
#line 1079 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_call_3_p_0((MR_Word) mdb__declarative_execution__S_1, (MR_Word) mdb__declarative_execution__HeadVar__2_2, (MR_Word *) mdb__declarative_execution__Call_3);
	return ret_value;
}

#line 1064 "declarative_execution.m"
MR_bool 
MR_DD_trace_node_seqno(
#line 1064 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_4,
#line 1064 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 1064 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__SeqNo_6)
#line 1064 "declarative_execution.m"
{
#line 1064 "declarative_execution.m"
	MR_bool ret_value;
	ret_value = (MR_bool)mdb__declarative_execution__trace_node_seqno_3_p_0((MR_Word) mdb__declarative_execution__S_4, (MR_Word) mdb__declarative_execution__Node_5, (MR_Integer *) mdb__declarative_execution__SeqNo_6);
	return ret_value;
}

#line 1037 "declarative_execution.m"
MR_String 
MR_DD_trace_node_path(
#line 1037 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_3)
#line 1037 "declarative_execution.m"
{
#line 1037 "declarative_execution.m"
	MR_String ret_value;
	ret_value = (MR_String)mdb__declarative_execution__trace_node_path_1_f_0((MR_Word) mdb__declarative_execution__Node_3);
	return ret_value;
}

#line 1018 "declarative_execution.m"
MR_Word 
MR_DD_trace_node_port(
#line 1018 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 1018 "declarative_execution.m"
{
#line 1018 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__trace_node_port_1_f_0((MR_Word) mdb__declarative_execution__HeadVar__1_1);
	return ret_value;
}

#line 994 "declarative_execution.m"
MR_Word 
MR_DD_neg_node_set_status(
#line 994 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg0_4,
#line 994 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 994 "declarative_execution.m"
{
#line 994 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__neg_node_set_status_2_f_0((MR_Word) mdb__declarative_execution__Neg0_4, (MR_Word) mdb__declarative_execution__Status_5);
	return ret_value;
}

#line 978 "declarative_execution.m"
MR_Word 
MR_DD_cond_node_set_status(
#line 978 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond0_4,
#line 978 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 978 "declarative_execution.m"
{
#line 978 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__cond_node_set_status_2_f_0((MR_Word) mdb__declarative_execution__Cond0_4, (MR_Word) mdb__declarative_execution__Status_5);
	return ret_value;
}

#line 958 "declarative_execution.m"
MR_Integer 
MR_DD_get_implicit_tree_ideal_depth(
#line 958 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 958 "declarative_execution.m"
{
#line 958 "declarative_execution.m"
	MR_Integer ret_value;
	ret_value = (MR_Integer)mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0((MR_Word) mdb__declarative_execution__Call_3);
	return ret_value;
}

#line 941 "declarative_execution.m"
MR_Word 
MR_DD_call_node_update_implicit_tree_info(
#line 941 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 941 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IdealDepth_5)
#line 941 "declarative_execution.m"
{
#line 941 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0((MR_Word) mdb__declarative_execution__Call0_4, (MR_Integer) mdb__declarative_execution__IdealDepth_5);
	return ret_value;
}

#line 924 "declarative_execution.m"
MR_Word 
MR_DD_call_node_set_last_interface(
#line 924 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 924 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Last_5)
#line 924 "declarative_execution.m"
{
#line 924 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_set_last_interface_2_f_0((MR_Word) mdb__declarative_execution__Call0_4, (MR_Word) mdb__declarative_execution__Last_5);
	return ret_value;
}

#line 910 "declarative_execution.m"
MR_Word 
MR_DD_call_node_get_last_interface(
#line 910 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 910 "declarative_execution.m"
{
#line 910 "declarative_execution.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__declarative_execution__call_node_get_last_interface_1_f_0((MR_Word) mdb__declarative_execution__Call_3);
	return ret_value;
}


#line 1953 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_event_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____event_number_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____event_number_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "event_number",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1974 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0 = {
  (MR_String) "succeeded",
  (MR_Integer) 0
};

#line 1980 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1 = {
  (MR_String) "failed",
  (MR_Integer) 1
};

#line 1986 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2 = {
  (MR_String) "undecided",
  (MR_Integer) 2
};

#line 1992 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_goal_status_0[3] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2
};

#line 1999 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_goal_status_0[3] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_1,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_goal_status_0_2
};

#line 2006 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_goal_status_0[3] = {
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 2
};

#line 2013 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_execution____Unify____goal_status_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____goal_status_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "goal_status",
  {
    mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_goal_status_0
  },
  {
    mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_goal_status_0
  },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_goal_status_0
};

#line 2034 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0[1] = {
  (MR_Integer) 0
};

#line 2039 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0 = {
  (MR_String) "implicit_tree_info",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_String) "ideal_depth"
};

#line 2046 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "implicit_tree_info",
  {
    &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0
  },
  {
    &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_implicit_tree_info_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_implicit_tree_info_0
};

#line 2067 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_sequence_number_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____sequence_number_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____sequence_number_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "sequence_number",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2088 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_suspicion_accumulator_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "suspicion_accumulator",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 2109 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0
  }
};

#line 2117 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_0_0[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_proc_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__list__ti_list_1mdb__declarative_execution__type_ctor_info_trace_atom_arg_0
};

#line 2123 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_0_0[2] = {
  (MR_String) "proc_layout",
  (MR_String) "atom_args"
};

#line 2129 "mdb.declarative_execution.c"
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

#line 2144 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0
};

#line 2149 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_0_0
  }
};

#line 2158 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_0_0
};

#line 2163 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0[1] = {
  (MR_Integer) 0
};

#line 2168 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_atom_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_atom_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_atom",
  {
    mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_0
  },
  {
    mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_0
};

#line 2189 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0
  }
};

#line 2197 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_atom_arg_0_0[3] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__maybe__ti_maybe_1mdb__term_rep__type_ctor_info_term_rep_0
};

#line 2204 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_atom_arg_0_0[3] = {
  (MR_String) "prog_visible",
  (MR_String) "prog_vis_headvar_num",
  (MR_String) "arg_value"
};

#line 2211 "mdb.declarative_execution.c"
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

#line 2226 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0
};

#line 2231 "mdb.declarative_execution.c"
static const MR_DuPtagLayout mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_atom_arg_0_0
  }
};

#line 2240 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_atom_arg_0_0
};

#line 2245 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0[1] = {
  (MR_Integer) 0
};

#line 2250 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_atom_arg",
  {
    mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_atom_arg_0
  },
  {
    mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_atom_arg_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_atom_arg_0
};

#line 2271 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdb__declarative_execution__type_ctor_info_implicit_tree_info_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_implicit_tree_info_0
  }
};

#line 2279 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__maybe__ti_maybe_1mdbcomp__rtti_access__type_ctor_info_label_layout_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
  }
};

#line 2287 "mdb.declarative_execution.c"
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

#line 2301 "mdb.declarative_execution.c"
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

#line 2315 "mdb.declarative_execution.c"
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

#line 2330 "mdb.declarative_execution.c"
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

#line 2342 "mdb.declarative_execution.c"
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

#line 2354 "mdb.declarative_execution.c"
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

#line 2369 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_2[5] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2378 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_2[5] = {
  (MR_String) "redo_preceding",
  (MR_String) "redo_exit",
  (MR_String) "redo_event",
  (MR_String) "redo_label",
  (MR_String) "redo_suspicion"
};

#line 2387 "mdb.declarative_execution.c"
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

#line 2402 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_3[6] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2412 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_3[6] = {
  (MR_String) "fail_preceding",
  (MR_String) "fail_call",
  (MR_String) "fail_redo",
  (MR_String) "fail_event",
  (MR_String) "fail_label",
  (MR_String) "fail_suspicion"
};

#line 2422 "mdb.declarative_execution.c"
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

#line 2437 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_4[7] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdb__term_rep__mdb__term_rep__type_ctor_info_term_rep_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 2448 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_4[7] = {
  (MR_String) "excp_preceding",
  (MR_String) "excp_call",
  (MR_String) "excp_redo",
  (MR_String) "excp_value",
  (MR_String) "excp_event",
  (MR_String) "excp_label",
  (MR_String) "excp_suspicion"
};

#line 2459 "mdb.declarative_execution.c"
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

#line 2474 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_5[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2480 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_5[2] = {
  (MR_String) "switch_preceding",
  (MR_String) "switch_label"
};

#line 2486 "mdb.declarative_execution.c"
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

#line 2501 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_6[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2507 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_6[2] = {
  (MR_String) "first_disj_preceding",
  (MR_String) "first_disj_label"
};

#line 2513 "mdb.declarative_execution.c"
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

#line 2528 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_7[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

#line 2535 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_7[3] = {
  (MR_String) "later_disj_preceding",
  (MR_String) "later_disj_label",
  (MR_String) "later_disj_first"
};

#line 2542 "mdb.declarative_execution.c"
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

#line 2557 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_8[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0
};

#line 2564 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_8[3] = {
  (MR_String) "cond_preceding",
  (MR_String) "cond_label",
  (MR_String) "cond_status"
};

#line 2571 "mdb.declarative_execution.c"
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

#line 2586 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_9[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2593 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_9[3] = {
  (MR_String) "then_preceding",
  (MR_String) "then_cond",
  (MR_String) "then_label"
};

#line 2600 "mdb.declarative_execution.c"
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

#line 2615 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_10[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2622 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_10[3] = {
  (MR_String) "else_preceding",
  (MR_String) "else_cond",
  (MR_String) "else_label"
};

#line 2629 "mdb.declarative_execution.c"
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

#line 2644 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_11[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0,
  (MR_PseudoTypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0
};

#line 2651 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_11[3] = {
  (MR_String) "neg_preceding",
  (MR_String) "neg_label",
  (MR_String) "neg_status"
};

#line 2658 "mdb.declarative_execution.c"
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

#line 2673 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_12[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2680 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_12[3] = {
  (MR_String) "neg_succ_preceding",
  (MR_String) "neg_succ_enter",
  (MR_String) "neg_succ_label"
};

#line 2687 "mdb.declarative_execution.c"
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

#line 2702 "mdb.declarative_execution.c"
static const MR_PseudoTypeInfo mdb__declarative_execution__mdb__declarative_execution__field_types_trace_node_1_13[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mdbcomp__rtti_access__mdbcomp__rtti_access__type_ctor_info_label_layout_0
};

#line 2709 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__field_names_trace_node_1_13[3] = {
  (MR_String) "neg_fail_preceding",
  (MR_String) "neg_fail_enter",
  (MR_String) "neg_fail_label"
};

#line 2716 "mdb.declarative_execution.c"
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

#line 2731 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_0[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_0
};

#line 2736 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_1[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_1
};

#line 2741 "mdb.declarative_execution.c"
static const MR_DuFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__du_stag_ordered_trace_node_1_2[1] = {
  &mdb__declarative_execution__mdb__declarative_execution__du_functor_desc_trace_node_1_2
};

#line 2746 "mdb.declarative_execution.c"
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

#line 2761 "mdb.declarative_execution.c"
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

#line 2785 "mdb.declarative_execution.c"
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

#line 2803 "mdb.declarative_execution.c"
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

#line 2821 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_1_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_1_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node",
  {
    mdb__declarative_execution__mdb__declarative_execution__du_name_ordered_trace_node_1
  },
  {
    mdb__declarative_execution__mdb__declarative_execution__du_ptag_ordered_trace_node_1
  },
  (MR_Integer) 14,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_1
};

#line 2842 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0[1] = {
  (MR_Integer) 0
};

#line 2847 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0 = {
  (MR_String) "id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_c_pointer_0,
  NULL
};

#line 2854 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_id_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_id_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_id",
  {
    &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0
  },
  {
    &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_id_0
};

#line 2875 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0[1] = {
  (MR_Integer) 0
};

#line 2880 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0 = {
  (MR_String) "key",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2887 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_key_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_key_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_key",
  {
    &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0
  },
  {
    &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_key_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_key_0
};

#line 2908 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0[1] = {
  (MR_Integer) 0
};

#line 2913 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct1 mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_1,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0
  }
};

#line 2921 "mdb.declarative_execution.c"
static const MR_FA_TypeInfo_Struct2 mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0,
    (MR_TypeInfo) &mdb__declarative_execution__mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0
  }
};

#line 2930 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0 = {
  (MR_String) "map",
  (MR_PseudoTypeInfo) &mdb__declarative_execution__tree234__ti_tree234_2mdb__declarative_execution__type_ctor_info_trace_node_key_0mdb__declarative_execution__ti_trace_node_1mdb__declarative_execution__type_ctor_info_trace_node_key_0,
  NULL
};

#line 2937 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_map_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_map_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_map",
  {
    &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0
  },
  {
    &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_map_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_map_0
};

#line 2958 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0[1] = {
  (MR_Integer) 0
};

#line 2963 "mdb.declarative_execution.c"
static const MR_NotagFunctorDesc mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0 = {
  (MR_String) "store",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 2970 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_store_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdb__declarative_execution____Unify____trace_node_store_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____trace_node_store_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "trace_node_store",
  {
    &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0
  },
  {
    &mdb__declarative_execution__mdb__declarative_execution__notag_functor_desc_trace_node_store_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_trace_node_store_0
};

#line 2991 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0 = {
  (MR_String) "all_headvars",
  (MR_Integer) 0
};

#line 2997 "mdb.declarative_execution.c"
static const MR_EnumFunctorDesc mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1 = {
  (MR_String) "only_user_headvars",
  (MR_Integer) 1
};

#line 3003 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_which_headvars_0[2] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1
};

#line 3009 "mdb.declarative_execution.c"
static const MR_EnumFunctorDescPtr mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_which_headvars_0[2] = {
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_0,
  &mdb__declarative_execution__mdb__declarative_execution__enum_functor_desc_which_headvars_0_1
};

#line 3015 "mdb.declarative_execution.c"
static const MR_Integer mdb__declarative_execution__mdb__declarative_execution__functor_number_map_which_headvars_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 3021 "mdb.declarative_execution.c"
const MR_TypeCtorInfo_Struct mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_which_headvars_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdb__declarative_execution____Unify____which_headvars_0_0_10001)),
  ((MR_Box) (mdb__declarative_execution____Compare____which_headvars_0_0_10001)),
  (MR_String) "mdb.declarative_execution",
  (MR_String) "which_headvars",
  {
    mdb__declarative_execution__mdb__declarative_execution__enum_name_ordered_which_headvars_0
  },
  {
    mdb__declarative_execution__mdb__declarative_execution__enum_value_ordered_which_headvars_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdb__declarative_execution__mdb__declarative_execution__functor_number_map_which_headvars_0
};

#line 3042 "mdb.declarative_execution.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001))
};

#line 3052 "mdb.declarative_execution.c"
const MR_BaseTypeclassInfo base_typeclass_info_mdb__declarative_execution__annotated_trace__arity2__mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0__[6] = {
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 0)),
  ((MR_Box) (MR_Word) ((MR_Integer) 2)),
  ((MR_Box) (MR_Word) ((MR_Integer) 1)),
  ((MR_Box) (mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001))
};

#line 3062 "mdb.declarative_execution.c"
static const MR_ConstString mdb__declarative_execution__mdb__declarative_execution__type_class_id_var_names_annotated_trace_2[2] = {
  (MR_String) "S",
  (MR_String) "R"
};

#line 3068 "mdb.declarative_execution.c"
static const MR_TypeClassMethod mdb__declarative_execution__mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2[1] = {
  {
    (MR_String) "trace_node_from_id",
    (MR_Integer) 3,
    mercury__private_builtin__MR_PREDICATE
  }
};

#line 3077 "mdb.declarative_execution.c"
static const MR_TypeClassId mdb__declarative_execution__mdb__declarative_execution__type_class_id_annotated_trace_2 = {
  (MR_String) "mdb.declarative_execution",
  (MR_String) "annotated_trace",
  (MR_Integer) 2,
  (MR_Integer) 2,
  (MR_Integer) 1,
  mdb__declarative_execution__mdb__declarative_execution__type_class_id_var_names_annotated_trace_2,
  mdb__declarative_execution__mdb__declarative_execution__type_class_id_method_ids_annotated_trace_2
};

#line 3088 "mdb.declarative_execution.c"
const MR_TypeClassDeclStruct mdb__declarative_execution__mdb__declarative_execution__type_class_decl_annotated_trace_2 = {
  &mdb__declarative_execution__mdb__declarative_execution__type_class_id_annotated_trace_2,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

#line 3096 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____event_number_0_0_10001(
#line 3099 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3101 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3103 "mdb.declarative_execution.c"
{
#line 3105 "mdb.declarative_execution.c"
  {
#line 3107 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3110 "mdb.declarative_execution.c"
    {
#line 3112 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____event_number_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3115 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3117 "mdb.declarative_execution.c"
  }
#line 3119 "mdb.declarative_execution.c"
}

#line 3122 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0_10001(
#line 3125 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3127 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3129 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3131 "mdb.declarative_execution.c"
{
#line 3133 "mdb.declarative_execution.c"
  {
#line 3135 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3138 "mdb.declarative_execution.c"
    {
#line 3140 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____event_number_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3143 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3145 "mdb.declarative_execution.c"
  }
#line 3147 "mdb.declarative_execution.c"
}

#line 3150 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0_10001(
#line 3153 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3155 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3157 "mdb.declarative_execution.c"
{
#line 3159 "mdb.declarative_execution.c"
  {
#line 3161 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3164 "mdb.declarative_execution.c"
    {
#line 3166 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____goal_status_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3169 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3171 "mdb.declarative_execution.c"
  }
#line 3173 "mdb.declarative_execution.c"
}

#line 3176 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0_10001(
#line 3179 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3181 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3183 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3185 "mdb.declarative_execution.c"
{
#line 3187 "mdb.declarative_execution.c"
  {
#line 3189 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3192 "mdb.declarative_execution.c"
    {
#line 3194 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____goal_status_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3197 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3199 "mdb.declarative_execution.c"
  }
#line 3201 "mdb.declarative_execution.c"
}

#line 3204 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0_10001(
#line 3207 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3209 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3211 "mdb.declarative_execution.c"
{
#line 3213 "mdb.declarative_execution.c"
  {
#line 3215 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3218 "mdb.declarative_execution.c"
    {
#line 3220 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____implicit_tree_info_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3223 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3225 "mdb.declarative_execution.c"
  }
#line 3227 "mdb.declarative_execution.c"
}

#line 3230 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0_10001(
#line 3233 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3235 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3237 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3239 "mdb.declarative_execution.c"
{
#line 3241 "mdb.declarative_execution.c"
  {
#line 3243 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3246 "mdb.declarative_execution.c"
    {
#line 3248 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____implicit_tree_info_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3251 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3253 "mdb.declarative_execution.c"
  }
#line 3255 "mdb.declarative_execution.c"
}

#line 3258 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0_10001(
#line 3261 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3263 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3265 "mdb.declarative_execution.c"
{
#line 3267 "mdb.declarative_execution.c"
  {
#line 3269 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3272 "mdb.declarative_execution.c"
    {
#line 3274 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____sequence_number_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3277 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3279 "mdb.declarative_execution.c"
  }
#line 3281 "mdb.declarative_execution.c"
}

#line 3284 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0_10001(
#line 3287 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3289 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3291 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3293 "mdb.declarative_execution.c"
{
#line 3295 "mdb.declarative_execution.c"
  {
#line 3297 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3300 "mdb.declarative_execution.c"
    {
#line 3302 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____sequence_number_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3305 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3307 "mdb.declarative_execution.c"
  }
#line 3309 "mdb.declarative_execution.c"
}

#line 3312 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0_10001(
#line 3315 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3317 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3319 "mdb.declarative_execution.c"
{
#line 3321 "mdb.declarative_execution.c"
  {
#line 3323 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3326 "mdb.declarative_execution.c"
    {
#line 3328 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____suspicion_accumulator_0_0(((MR_Integer) mdb__declarative_execution__wrapper_arg_1), ((MR_Integer) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3331 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3333 "mdb.declarative_execution.c"
  }
#line 3335 "mdb.declarative_execution.c"
}

#line 3338 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0_10001(
#line 3341 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3343 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3345 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3347 "mdb.declarative_execution.c"
{
#line 3349 "mdb.declarative_execution.c"
  {
#line 3351 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3354 "mdb.declarative_execution.c"
    {
#line 3356 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____suspicion_accumulator_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Integer) mdb__declarative_execution__wrapper_arg_2), ((MR_Integer) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3359 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3361 "mdb.declarative_execution.c"
  }
#line 3363 "mdb.declarative_execution.c"
}

#line 3366 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0_10001(
#line 3369 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3371 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3373 "mdb.declarative_execution.c"
{
#line 3375 "mdb.declarative_execution.c"
  {
#line 3377 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3380 "mdb.declarative_execution.c"
    {
#line 3382 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_atom_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3385 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3387 "mdb.declarative_execution.c"
  }
#line 3389 "mdb.declarative_execution.c"
}

#line 3392 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0_10001(
#line 3395 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3397 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3399 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3401 "mdb.declarative_execution.c"
{
#line 3403 "mdb.declarative_execution.c"
  {
#line 3405 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3408 "mdb.declarative_execution.c"
    {
#line 3410 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_atom_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3413 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3415 "mdb.declarative_execution.c"
  }
#line 3417 "mdb.declarative_execution.c"
}

#line 3420 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0_10001(
#line 3423 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3425 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3427 "mdb.declarative_execution.c"
{
#line 3429 "mdb.declarative_execution.c"
  {
#line 3431 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3434 "mdb.declarative_execution.c"
    {
#line 3436 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_atom_arg_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3439 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3441 "mdb.declarative_execution.c"
  }
#line 3443 "mdb.declarative_execution.c"
}

#line 3446 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0_10001(
#line 3449 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3451 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3453 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3455 "mdb.declarative_execution.c"
{
#line 3457 "mdb.declarative_execution.c"
  {
#line 3459 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3462 "mdb.declarative_execution.c"
    {
#line 3464 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_atom_arg_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3467 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3469 "mdb.declarative_execution.c"
  }
#line 3471 "mdb.declarative_execution.c"
}

#line 3474 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0_10001(
#line 3477 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3479 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3481 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3483 "mdb.declarative_execution.c"
{
#line 3485 "mdb.declarative_execution.c"
  {
#line 3487 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3490 "mdb.declarative_execution.c"
    {
#line 3492 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_1_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3495 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3497 "mdb.declarative_execution.c"
  }
#line 3499 "mdb.declarative_execution.c"
}

#line 3502 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0_10001(
#line 3505 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3507 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_2,
#line 3509 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3,
#line 3511 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_4)
#line 3513 "mdb.declarative_execution.c"
{
#line 3515 "mdb.declarative_execution.c"
  {
#line 3517 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3520 "mdb.declarative_execution.c"
    {
#line 3522 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_1_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), &mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_3), ((MR_Word) mdb__declarative_execution__wrapper_arg_4));
    }
#line 3525 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_2 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3527 "mdb.declarative_execution.c"
  }
#line 3529 "mdb.declarative_execution.c"
}

#line 3532 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0_10001(
#line 3535 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3537 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3539 "mdb.declarative_execution.c"
{
#line 3541 "mdb.declarative_execution.c"
  {
#line 3543 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3546 "mdb.declarative_execution.c"
    {
#line 3548 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_id_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3551 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3553 "mdb.declarative_execution.c"
  }
#line 3555 "mdb.declarative_execution.c"
}

#line 3558 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0_10001(
#line 3561 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3563 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3565 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3567 "mdb.declarative_execution.c"
{
#line 3569 "mdb.declarative_execution.c"
  {
#line 3571 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3574 "mdb.declarative_execution.c"
    {
#line 3576 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_id_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3579 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3581 "mdb.declarative_execution.c"
  }
#line 3583 "mdb.declarative_execution.c"
}

#line 3586 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0_10001(
#line 3589 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3591 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3593 "mdb.declarative_execution.c"
{
#line 3595 "mdb.declarative_execution.c"
  {
#line 3597 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3600 "mdb.declarative_execution.c"
    {
#line 3602 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_key_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3605 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3607 "mdb.declarative_execution.c"
  }
#line 3609 "mdb.declarative_execution.c"
}

#line 3612 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0_10001(
#line 3615 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3617 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3619 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3621 "mdb.declarative_execution.c"
{
#line 3623 "mdb.declarative_execution.c"
  {
#line 3625 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3628 "mdb.declarative_execution.c"
    {
#line 3630 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_key_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3633 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3635 "mdb.declarative_execution.c"
  }
#line 3637 "mdb.declarative_execution.c"
}

#line 3640 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0_10001(
#line 3643 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3645 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3647 "mdb.declarative_execution.c"
{
#line 3649 "mdb.declarative_execution.c"
  {
#line 3651 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3654 "mdb.declarative_execution.c"
    {
#line 3656 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_map_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3659 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3661 "mdb.declarative_execution.c"
  }
#line 3663 "mdb.declarative_execution.c"
}

#line 3666 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0_10001(
#line 3669 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3671 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3673 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3675 "mdb.declarative_execution.c"
{
#line 3677 "mdb.declarative_execution.c"
  {
#line 3679 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3682 "mdb.declarative_execution.c"
    {
#line 3684 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_map_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3687 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3689 "mdb.declarative_execution.c"
  }
#line 3691 "mdb.declarative_execution.c"
}

#line 3694 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0_10001(
#line 3697 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3699 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3701 "mdb.declarative_execution.c"
{
#line 3703 "mdb.declarative_execution.c"
  {
#line 3705 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3708 "mdb.declarative_execution.c"
    {
#line 3710 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____trace_node_store_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3713 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3715 "mdb.declarative_execution.c"
  }
#line 3717 "mdb.declarative_execution.c"
}

#line 3720 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0_10001(
#line 3723 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3725 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3727 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3729 "mdb.declarative_execution.c"
{
#line 3731 "mdb.declarative_execution.c"
  {
#line 3733 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3736 "mdb.declarative_execution.c"
    {
#line 3738 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____trace_node_store_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3741 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3743 "mdb.declarative_execution.c"
  }
#line 3745 "mdb.declarative_execution.c"
}

#line 3748 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0_10001(
#line 3751 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3753 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2)
#line 3755 "mdb.declarative_execution.c"
{
#line 3757 "mdb.declarative_execution.c"
  {
#line 3759 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;

#line 3762 "mdb.declarative_execution.c"
    {
#line 3764 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution____Unify____which_headvars_0_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2));
    }
#line 3767 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3769 "mdb.declarative_execution.c"
  }
#line 3771 "mdb.declarative_execution.c"
}

#line 3774 "mdb.declarative_execution.c"
static void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0_10001(
#line 3777 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_1,
#line 3779 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3781 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_3)
#line 3783 "mdb.declarative_execution.c"
{
#line 3785 "mdb.declarative_execution.c"
  {
#line 3787 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__1_1;

#line 3790 "mdb.declarative_execution.c"
    {
#line 3792 "mdb.declarative_execution.c"
      mdb__declarative_execution____Compare____which_headvars_0_0(&mdb__declarative_execution__conv0_HeadVar__1_1, ((MR_Word) mdb__declarative_execution__wrapper_arg_2), ((MR_Word) mdb__declarative_execution__wrapper_arg_3));
    }
#line 3795 "mdb.declarative_execution.c"
    *mdb__declarative_execution__wrapper_arg_1 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__1_1));
#line 3797 "mdb.declarative_execution.c"
  }
#line 3799 "mdb.declarative_execution.c"
}

#line 3802 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
#line 3805 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__closure_arg,
#line 3807 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3809 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3811 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_3)
#line 3813 "mdb.declarative_execution.c"
{
#line 3815 "mdb.declarative_execution.c"
  {
#line 3817 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;
#line 3819 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__closure;
#line 3821 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__3_3;

#line 3824 "mdb.declarative_execution.c"
    mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;
#line 3826 "mdb.declarative_execution.c"
    {
#line 3828 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
#line 3831 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 3833 "mdb.declarative_execution.c"
      {
#line 3835 "mdb.declarative_execution.c"
        *mdb__declarative_execution__wrapper_arg_3 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__3_3));
#line 3837 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 3839 "mdb.declarative_execution.c"
      }
#line 3841 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3843 "mdb.declarative_execution.c"
  }
#line 3845 "mdb.declarative_execution.c"
}

#line 3848 "mdb.declarative_execution.c"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0_10001(
#line 3851 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__closure_arg,
#line 3853 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_1,
#line 3855 "mdb.declarative_execution.c"
  MR_Box mdb__declarative_execution__wrapper_arg_2,
#line 3857 "mdb.declarative_execution.c"
  MR_Box * mdb__declarative_execution__wrapper_arg_3)
#line 3859 "mdb.declarative_execution.c"
{
#line 3861 "mdb.declarative_execution.c"
  {
#line 3863 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;
#line 3865 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__closure;
#line 3867 "mdb.declarative_execution.c"
    MR_Word mdb__declarative_execution__conv0_HeadVar__3_3;

#line 3870 "mdb.declarative_execution.c"
    mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;
#line 3872 "mdb.declarative_execution.c"
    {
#line 3874 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1), ((MR_Word) mdb__declarative_execution__wrapper_arg_2), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
#line 3877 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 3879 "mdb.declarative_execution.c"
      {
#line 3881 "mdb.declarative_execution.c"
        *mdb__declarative_execution__wrapper_arg_3 = ((MR_Box) (mdb__declarative_execution__conv0_HeadVar__3_3));
#line 3883 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 3885 "mdb.declarative_execution.c"
      }
#line 3887 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 3889 "mdb.declarative_execution.c"
  }
#line 3891 "mdb.declarative_execution.c"
}

#line 872 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 872 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 872 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 872 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
#line 872 "declarative_execution.m"
{
#line 894 "declarative_execution.m"
  {
#line 894 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 897 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_store__arity0__mdb__declarative_execution__trace_node_id__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__HeadVar__2_2 ;
		{
#line 897 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);

#line 3925 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__HeadVar__3_3  = Node;
#line 897 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 894 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 894 "declarative_execution.m"
  }
#line 872 "declarative_execution.m"
}

#line 1381 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__ClassMethod_for_mdb__declarative_execution__annotated_trace____mdb__declarative_execution__trace_node_map__arity0__mdb__declarative_execution__trace_node_key__arity0______mdb__declarative_execution__trace_node_from_id_3_3_p_0(
#line 1381 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1381 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1381 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
#line 1381 "declarative_execution.m"
{
#line 1396 "declarative_execution.m"
  {
#line 1396 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1396 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Map_6 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
#line 1397 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_HeadVar__3_3;

#line 1397 "declarative_execution.m"
    {
#line 1397 "declarative_execution.m"
      mdb__declarative_execution__succeeded = mercury__map__search_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], mdb__declarative_execution__Map_6, ((MR_Box) (mdb__declarative_execution__HeadVar__2_2)), &mdb__declarative_execution__conv0_HeadVar__3_3);
    }
#line 1397 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1397 "declarative_execution.m"
      {
#line 1397 "declarative_execution.m"
        *mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv0_HeadVar__3_3);
#line 1397 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1397 "declarative_execution.m"
      }
#line 1396 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1396 "declarative_execution.m"
  }
#line 1381 "declarative_execution.m"
}

#line 447 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____which_headvars_0_0(
#line 447 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 447 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 447 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 447 "declarative_execution.m"
{
#line 447 "declarative_execution.m"
  {
#line 447 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 447 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 447 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 447 "declarative_execution.m"
    {
#line 447 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 447 "declarative_execution.m"
      return;
    }
#line 447 "declarative_execution.m"
  }
#line 447 "declarative_execution.m"
}

#line 447 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____which_headvars_0_0(
#line 447 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_1,
#line 447 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 447 "declarative_execution.m"
{
#line 4025 "mdb.declarative_execution.c"
  {
#line 4027 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__HeadVar__2_1 == mdb__declarative_execution__HeadVar__2_2);

#line 4030 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 4032 "mdb.declarative_execution.c"
  }
#line 447 "declarative_execution.m"
}

#line 880 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_store_0_0(
#line 880 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 880 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 880 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 880 "declarative_execution.m"
{
#line 880 "declarative_execution.m"
  {
#line 880 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 880 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 880 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 880 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 880 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4061 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 880 "declarative_execution.m"
    else
#line 880 "declarative_execution.m"
      {
#line 880 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 880 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 880 "declarative_execution.m"
        {
#line 880 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 880 "declarative_execution.m"
          return;
        }
#line 880 "declarative_execution.m"
      }
#line 880 "declarative_execution.m"
  }
#line 880 "declarative_execution.m"
}

#line 880 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_store_0_0(
#line 880 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 880 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 880 "declarative_execution.m"
{
#line 880 "declarative_execution.m"
  {
#line 880 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 880 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 880 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 880 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 880 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 880 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 880 "declarative_execution.m"
    else
#line 880 "declarative_execution.m"
      {
#line 880 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 880 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 4119 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
#line 880 "declarative_execution.m"
      }
#line 880 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 880 "declarative_execution.m"
  }
#line 880 "declarative_execution.m"
}

#line 1384 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_map_0_0(
#line 1384 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 1384 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1384 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 1384 "declarative_execution.m"
{
#line 1384 "declarative_execution.m"
  {
#line 1384 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1384 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 1384 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 1384 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 1384 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4154 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 1384 "declarative_execution.m"
    else
#line 1384 "declarative_execution.m"
      {
#line 1384 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;
#line 1384 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;

#line 1384 "declarative_execution.m"
        {
#line 1384 "declarative_execution.m"
          mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[1], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_4_4)), ((MR_Box) (mdb__declarative_execution__V_5_5)));
#line 1384 "declarative_execution.m"
          return;
        }
#line 1384 "declarative_execution.m"
      }
#line 1384 "declarative_execution.m"
  }
#line 1384 "declarative_execution.m"
}

#line 1384 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_map_0_0(
#line 1384 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1384 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 1384 "declarative_execution.m"
{
#line 1384 "declarative_execution.m"
  {
#line 1384 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1384 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 1384 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 1384 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 1384 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1384 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 1384 "declarative_execution.m"
    else
#line 1384 "declarative_execution.m"
      {
#line 1384 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_3_3 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
#line 1384 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;

#line 4212 "mdb.declarative_execution.c"
        {
#line 4214 "mdb.declarative_execution.c"
          return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[1], ((MR_Box) (mdb__declarative_execution__V_3_3)), ((MR_Box) (mdb__declarative_execution__V_4_4)));
        }
#line 1384 "declarative_execution.m"
      }
#line 1384 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1384 "declarative_execution.m"
  }
#line 1384 "declarative_execution.m"
}

#line 1390 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_key_0_0(
#line 1390 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 1390 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1390 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 1390 "declarative_execution.m"
{
#line 1390 "declarative_execution.m"
  {
#line 1390 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1390 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 1390 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 1390 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 1390 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4250 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 1390 "declarative_execution.m"
    else
#line 1390 "declarative_execution.m"
      {
#line 1390 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 1390 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 1390 "declarative_execution.m"
        {
#line 1390 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 1390 "declarative_execution.m"
          return;
        }
#line 1390 "declarative_execution.m"
      }
#line 1390 "declarative_execution.m"
  }
#line 1390 "declarative_execution.m"
}

#line 1390 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_key_0_0(
#line 1390 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1390 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 1390 "declarative_execution.m"
{
#line 1390 "declarative_execution.m"
  {
#line 1390 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1390 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 1390 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 1390 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 1390 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1390 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 1390 "declarative_execution.m"
    else
#line 1390 "declarative_execution.m"
      {
#line 1390 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 1390 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 4308 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
#line 1390 "declarative_execution.m"
      }
#line 1390 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1390 "declarative_execution.m"
  }
#line 1390 "declarative_execution.m"
}

#line 888 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_id_0_0(
#line 888 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 888 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 888 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 888 "declarative_execution.m"
{
#line 888 "declarative_execution.m"
  {
#line 888 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 888 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 888 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 888 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 888 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4343 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 888 "declarative_execution.m"
    else
#line 888 "declarative_execution.m"
      {
#line 888 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;
#line 888 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;

#line 888 "declarative_execution.m"
        {
#line 888 "declarative_execution.m"
          mercury__builtin____Compare____c_pointer_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 888 "declarative_execution.m"
          return;
        }
#line 888 "declarative_execution.m"
      }
#line 888 "declarative_execution.m"
  }
#line 888 "declarative_execution.m"
}

#line 888 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_id_0_0(
#line 888 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 888 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 888 "declarative_execution.m"
{
#line 888 "declarative_execution.m"
  {
#line 888 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 888 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 888 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 888 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 888 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 888 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 888 "declarative_execution.m"
    else
#line 888 "declarative_execution.m"
      {
#line 888 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_3_3 = (MR_Word) mdb__declarative_execution__HeadVar__1_1;
#line 888 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = (MR_Word) mdb__declarative_execution__HeadVar__2_2;

#line 4401 "mdb.declarative_execution.c"
        {
#line 4403 "mdb.declarative_execution.c"
          return mdb__declarative_execution__succeeded = mercury__builtin____Unify____c_pointer_0_0(mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_4_4);
        }
#line 888 "declarative_execution.m"
      }
#line 888 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 888 "declarative_execution.m"
  }
#line 888 "declarative_execution.m"
}

#line 44 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_node_1_0(
#line 44 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_1761,
#line 44 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 44 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 44 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 44 "declarative_execution.m"
{
#line 44 "declarative_execution.m"
  {
#line 44 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 44 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_1759 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 44 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_1760 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 44 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_1759 == mdb__declarative_execution__CastY_1760);
#line 44 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 4441 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 44 "declarative_execution.m"
    else
#line 44 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0))))
#line 44 "declarative_execution.m"
        {
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_1796_1796 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 9)));
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_1797_1797 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 8)));
#line 44 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_1798_1798 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_1799_1799 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_1800_1800 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_1801_1801 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_1802_1802 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_1803_1803 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_1804_1804 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_1805_1805 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

#line 44 "declarative_execution.m"
          if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 44 "declarative_execution.m"
            {
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
#line 44 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 8)));
#line 44 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 9)));
#line 44 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_24_24;

#line 44 "declarative_execution.m"
              {
#line 44 "declarative_execution.m"
                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_24_24, mdb__declarative_execution__V_1805_1805, mdb__declarative_execution__V_14_14);
              }
#line 4502 "mdb.declarative_execution.c"
              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_24_24 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_24_24;
#line 44 "declarative_execution.m"
              else
#line 44 "declarative_execution.m"
                {
#line 44 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_25_25;

#line 44 "declarative_execution.m"
                  {
#line 44 "declarative_execution.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_25_25, mdb__declarative_execution__V_1804_1804, mdb__declarative_execution__V_15_15);
                  }
#line 4522 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_25_25 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_25_25;
#line 44 "declarative_execution.m"
                  else
#line 44 "declarative_execution.m"
                    {
#line 44 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_26_26;

#line 44 "declarative_execution.m"
                      {
#line 44 "declarative_execution.m"
                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], &mdb__declarative_execution__V_26_26, ((MR_Box) (mdb__declarative_execution__V_1803_1803)), ((MR_Box) (mdb__declarative_execution__V_16_16)));
                      }
#line 4542 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_26_26 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_26_26;
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        {
#line 44 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_27_27;

#line 44 "declarative_execution.m"
                          {
#line 44 "declarative_execution.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_27_27, mdb__declarative_execution__V_1802_1802, mdb__declarative_execution__V_17_17);
                          }
#line 4562 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_27_27 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_27_27;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            {
#line 44 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_28_28;

#line 44 "declarative_execution.m"
                              {
#line 44 "declarative_execution.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_28_28, mdb__declarative_execution__V_1801_1801, mdb__declarative_execution__V_18_18);
                              }
#line 4582 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_28_28 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_28_28;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                {
#line 44 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_29_29;

#line 44 "declarative_execution.m"
                                  {
#line 44 "declarative_execution.m"
                                    mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[1], &mdb__declarative_execution__V_29_29, ((MR_Box) (mdb__declarative_execution__V_1800_1800)), ((MR_Box) (mdb__declarative_execution__V_19_19)));
                                  }
#line 4602 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_29_29 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_29_29;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    {
#line 44 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_30_30;

#line 44 "declarative_execution.m"
                                      {
#line 44 "declarative_execution.m"
                                        mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[5], &mdb__declarative_execution__V_30_30, ((MR_Box) (mdb__declarative_execution__V_1799_1799)), ((MR_Box) (mdb__declarative_execution__V_20_20)));
                                      }
#line 4622 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_30_30 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_30_30;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        {
#line 44 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_31_31;

#line 44 "declarative_execution.m"
                                          {
#line 44 "declarative_execution.m"
                                            mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_31_31, mdb__declarative_execution__V_1798_1798, mdb__declarative_execution__V_21_21);
                                          }
#line 4642 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_31_31 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_31_31;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            {
#line 44 "declarative_execution.m"
                                              MR_Word mdb__declarative_execution__V_32_32;

#line 44 "declarative_execution.m"
                                              {
#line 44 "declarative_execution.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_32_32, mdb__declarative_execution__V_1797_1797, mdb__declarative_execution__V_22_22);
                                              }
#line 4662 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_32_32 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_32_32;
#line 44 "declarative_execution.m"
                                              else
#line 44 "declarative_execution.m"
                                                {
#line 44 "declarative_execution.m"
                                                  mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1796_1796, mdb__declarative_execution__V_23_23);
#line 44 "declarative_execution.m"
                                                  return;
                                                }
#line 44 "declarative_execution.m"
                                            }
#line 44 "declarative_execution.m"
                                        }
#line 44 "declarative_execution.m"
                                    }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                            }
#line 44 "declarative_execution.m"
                        }
#line 44 "declarative_execution.m"
                    }
#line 44 "declarative_execution.m"
                }
#line 44 "declarative_execution.m"
            }
#line 44 "declarative_execution.m"
          else
#line 44 "declarative_execution.m"
            if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 4701 "mdb.declarative_execution.c"
              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
            else
#line 44 "declarative_execution.m"
              if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4707 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
              else
#line 44 "declarative_execution.m"
                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4713 "mdb.declarative_execution.c"
                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                else
#line 44 "declarative_execution.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4719 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                  else
#line 44 "declarative_execution.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4725 "mdb.declarative_execution.c"
                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                    else
#line 44 "declarative_execution.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 4731 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 4737 "mdb.declarative_execution.c"
                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                        else
#line 44 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 4743 "mdb.declarative_execution.c"
                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 4749 "mdb.declarative_execution.c"
                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 4755 "mdb.declarative_execution.c"
                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 4761 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4767 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                  else
#line 4771 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
        }
#line 44 "declarative_execution.m"
      else
#line 44 "declarative_execution.m"
        if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 44 "declarative_execution.m"
          {
#line 44 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1819_1819 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 44 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1820_1820 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1821_1821 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_1822_1822 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_1823_1823 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1824_1824 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1825_1825 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_1826_1826 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

#line 44 "declarative_execution.m"
            if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 4800 "mdb.declarative_execution.c"
              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
            else
#line 44 "declarative_execution.m"
              if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 44 "declarative_execution.m"
                {
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_240_240 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_241_241 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_242_242 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_243_243 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_244_244 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_245_245 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_246_246 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_247_247 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
#line 44 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_248_248;

#line 44 "declarative_execution.m"
                  {
#line 44 "declarative_execution.m"
                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_248_248, mdb__declarative_execution__V_1826_1826, mdb__declarative_execution__V_240_240);
                  }
#line 4832 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_248_248 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_248_248;
#line 44 "declarative_execution.m"
                  else
#line 44 "declarative_execution.m"
                    {
#line 44 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_249_249;

#line 44 "declarative_execution.m"
                      {
#line 44 "declarative_execution.m"
                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_249_249, mdb__declarative_execution__V_1825_1825, mdb__declarative_execution__V_241_241);
                      }
#line 4852 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_249_249 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_249_249;
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        {
#line 44 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_250_250;

#line 44 "declarative_execution.m"
                          {
#line 44 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_250_250, mdb__declarative_execution__V_1824_1824, mdb__declarative_execution__V_242_242);
                          }
#line 4872 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_250_250 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_250_250;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            {
#line 44 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_251_251;

#line 44 "declarative_execution.m"
                              {
#line 44 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], &mdb__declarative_execution__V_251_251, ((MR_Box) (mdb__declarative_execution__V_1823_1823)), ((MR_Box) (mdb__declarative_execution__V_243_243)));
                              }
#line 4892 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_251_251 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_251_251;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                {
#line 44 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_252_252;

#line 44 "declarative_execution.m"
                                  {
#line 44 "declarative_execution.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_252_252, mdb__declarative_execution__V_1822_1822, mdb__declarative_execution__V_244_244);
                                  }
#line 4912 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_252_252 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_252_252;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    {
#line 44 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_253_253;

#line 44 "declarative_execution.m"
                                      {
#line 44 "declarative_execution.m"
                                        mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_253_253, mdb__declarative_execution__V_1821_1821, mdb__declarative_execution__V_245_245);
                                      }
#line 4932 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_253_253 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_253_253;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        {
#line 44 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_254_254;

#line 44 "declarative_execution.m"
                                          {
#line 44 "declarative_execution.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_254_254, mdb__declarative_execution__V_1820_1820, mdb__declarative_execution__V_246_246);
                                          }
#line 4952 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_254_254 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_254_254;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            {
#line 44 "declarative_execution.m"
                                              mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1819_1819, mdb__declarative_execution__V_247_247);
#line 44 "declarative_execution.m"
                                              return;
                                            }
#line 44 "declarative_execution.m"
                                        }
#line 44 "declarative_execution.m"
                                    }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                            }
#line 44 "declarative_execution.m"
                        }
#line 44 "declarative_execution.m"
                    }
#line 44 "declarative_execution.m"
                }
#line 44 "declarative_execution.m"
              else
#line 44 "declarative_execution.m"
                if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 4987 "mdb.declarative_execution.c"
                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                else
#line 44 "declarative_execution.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 4993 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                  else
#line 44 "declarative_execution.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 4999 "mdb.declarative_execution.c"
                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                    else
#line 44 "declarative_execution.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5005 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5011 "mdb.declarative_execution.c"
                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                        else
#line 44 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5017 "mdb.declarative_execution.c"
                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 5023 "mdb.declarative_execution.c"
                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 5029 "mdb.declarative_execution.c"
                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 5035 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 5041 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5047 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                    else
#line 5051 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
          }
#line 44 "declarative_execution.m"
        else
#line 44 "declarative_execution.m"
          if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 44 "declarative_execution.m"
            {
#line 44 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_1847_1847 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_1848_1848 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_1849_1849 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_1850_1850 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_1851_1851 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));

#line 44 "declarative_execution.m"
              if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5074 "mdb.declarative_execution.c"
                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
              else
#line 44 "declarative_execution.m"
                if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5080 "mdb.declarative_execution.c"
                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                else
#line 44 "declarative_execution.m"
                  if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 44 "declarative_execution.m"
                    {
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_427_427 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0));
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_428_428 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_429_429 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_430_430 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_431_431 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_432_432;

#line 44 "declarative_execution.m"
                      {
#line 44 "declarative_execution.m"
                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_432_432, mdb__declarative_execution__V_1851_1851, mdb__declarative_execution__V_427_427);
                      }
#line 5106 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_432_432 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_432_432;
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        {
#line 44 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_433_433;

#line 44 "declarative_execution.m"
                          {
#line 44 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_433_433, mdb__declarative_execution__V_1850_1850, mdb__declarative_execution__V_428_428);
                          }
#line 5126 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_433_433 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_433_433;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            {
#line 44 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_434_434;

#line 44 "declarative_execution.m"
                              {
#line 44 "declarative_execution.m"
                                mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_434_434, mdb__declarative_execution__V_1849_1849, mdb__declarative_execution__V_429_429);
                              }
#line 5146 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_434_434 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_434_434;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                {
#line 44 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_435_435;

#line 44 "declarative_execution.m"
                                  {
#line 44 "declarative_execution.m"
                                    mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_435_435, mdb__declarative_execution__V_1848_1848, mdb__declarative_execution__V_430_430);
                                  }
#line 5166 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_435_435 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_435_435;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    {
#line 44 "declarative_execution.m"
                                      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1847_1847, mdb__declarative_execution__V_431_431);
#line 44 "declarative_execution.m"
                                      return;
                                    }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                            }
#line 44 "declarative_execution.m"
                        }
#line 44 "declarative_execution.m"
                    }
#line 44 "declarative_execution.m"
                  else
#line 44 "declarative_execution.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 5195 "mdb.declarative_execution.c"
                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                    else
#line 44 "declarative_execution.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 5201 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5207 "mdb.declarative_execution.c"
                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                        else
#line 44 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5213 "mdb.declarative_execution.c"
                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5219 "mdb.declarative_execution.c"
                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 5225 "mdb.declarative_execution.c"
                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 5231 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 5237 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 5243 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5249 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                      else
#line 5253 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
            }
#line 44 "declarative_execution.m"
          else
#line 44 "declarative_execution.m"
            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 44 "declarative_execution.m"
              {
#line 44 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_1806_1806 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1807_1807 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_1808_1808 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 44 "declarative_execution.m"
                if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5272 "mdb.declarative_execution.c"
                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                else
#line 44 "declarative_execution.m"
                  if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5278 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                  else
#line 44 "declarative_execution.m"
                    if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5284 "mdb.declarative_execution.c"
                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                    else
#line 44 "declarative_execution.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 44 "declarative_execution.m"
                        {
#line 44 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1199_1199 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1200_1200 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1201_1201 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_1202_1202;

#line 44 "declarative_execution.m"
                          {
#line 44 "declarative_execution.m"
                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1202_1202, mdb__declarative_execution__V_1808_1808, mdb__declarative_execution__V_1199_1199);
                          }
#line 5306 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1202_1202 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1202_1202;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            {
#line 44 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1203_1203;

#line 44 "declarative_execution.m"
                              {
#line 44 "declarative_execution.m"
                                mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1203_1203, mdb__declarative_execution__V_1807_1807, mdb__declarative_execution__V_1200_1200);
                              }
#line 5326 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1203_1203 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1203_1203;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                {
#line 44 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_1857_1857 = (MR_Integer) mdb__declarative_execution__V_1806_1806;
#line 44 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_1858_1858 = (MR_Integer) mdb__declarative_execution__V_1201_1201;

#line 44 "declarative_execution.m"
                                  {
#line 44 "declarative_execution.m"
                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1857_1857, mdb__declarative_execution__V_1858_1858);
#line 44 "declarative_execution.m"
                                    return;
                                  }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                            }
#line 44 "declarative_execution.m"
                        }
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 5360 "mdb.declarative_execution.c"
                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                        else
#line 44 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5366 "mdb.declarative_execution.c"
                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5372 "mdb.declarative_execution.c"
                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5378 "mdb.declarative_execution.c"
                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 5384 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 5390 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 5396 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 5402 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5408 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                        else
#line 5412 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
              }
#line 44 "declarative_execution.m"
            else
#line 44 "declarative_execution.m"
              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 44 "declarative_execution.m"
                {
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_1809_1809 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_1810_1810 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_1811_1811 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 44 "declarative_execution.m"
                  if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5431 "mdb.declarative_execution.c"
                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                  else
#line 44 "declarative_execution.m"
                    if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5437 "mdb.declarative_execution.c"
                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                    else
#line 44 "declarative_execution.m"
                      if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5443 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 5449 "mdb.declarative_execution.c"
                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                        else
#line 44 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 44 "declarative_execution.m"
                            {
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_1421_1421 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_1422_1422 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_1423_1423 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_1424_1424;

#line 44 "declarative_execution.m"
                              {
#line 44 "declarative_execution.m"
                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1424_1424, mdb__declarative_execution__V_1811_1811, mdb__declarative_execution__V_1421_1421);
                              }
#line 5471 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1424_1424 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1424_1424;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                {
#line 44 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_1425_1425;

#line 44 "declarative_execution.m"
                                  {
#line 44 "declarative_execution.m"
                                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1425_1425, mdb__declarative_execution__V_1810_1810, mdb__declarative_execution__V_1422_1422);
                                  }
#line 5491 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1425_1425 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1425_1425;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    {
#line 44 "declarative_execution.m"
                                      mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1809_1809, mdb__declarative_execution__V_1423_1423);
#line 44 "declarative_execution.m"
                                      return;
                                    }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                            }
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5516 "mdb.declarative_execution.c"
                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5522 "mdb.declarative_execution.c"
                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5528 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 5534 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 5540 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 5546 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 5552 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                        else
#line 44 "declarative_execution.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5558 "mdb.declarative_execution.c"
                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                          else
#line 5562 "mdb.declarative_execution.c"
                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                }
#line 44 "declarative_execution.m"
              else
#line 44 "declarative_execution.m"
                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 44 "declarative_execution.m"
                  {
#line 44 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_1812_1812 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_1813_1813 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_1814_1814 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__V_1815_1815 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_1816_1816 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_1817_1817 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_1818_1818 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 44 "declarative_execution.m"
                    if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5589 "mdb.declarative_execution.c"
                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                    else
#line 44 "declarative_execution.m"
                      if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5595 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5601 "mdb.declarative_execution.c"
                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                        else
#line 44 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 5607 "mdb.declarative_execution.c"
                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 5613 "mdb.declarative_execution.c"
                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 44 "declarative_execution.m"
                                {
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_743_743 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_744_744 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_745_745 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
#line 44 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_746_746 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_747_747 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_748_748 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
                                  MR_Integer mdb__declarative_execution__V_749_749 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 7)));
#line 44 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_750_750;

#line 44 "declarative_execution.m"
                                  {
#line 44 "declarative_execution.m"
                                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_750_750, mdb__declarative_execution__V_1818_1818, mdb__declarative_execution__V_743_743);
                                  }
#line 5643 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_750_750 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_750_750;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    {
#line 44 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_751_751;

#line 44 "declarative_execution.m"
                                      {
#line 44 "declarative_execution.m"
                                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_751_751, mdb__declarative_execution__V_1817_1817, mdb__declarative_execution__V_744_744);
                                      }
#line 5663 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_751_751 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_751_751;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        {
#line 44 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_752_752;

#line 44 "declarative_execution.m"
                                          {
#line 44 "declarative_execution.m"
                                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_752_752, mdb__declarative_execution__V_1816_1816, mdb__declarative_execution__V_745_745);
                                          }
#line 5683 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_752_752 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_752_752;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            {
#line 44 "declarative_execution.m"
                                              MR_Word mdb__declarative_execution__V_753_753;

#line 44 "declarative_execution.m"
                                              {
#line 44 "declarative_execution.m"
                                                mdb__term_rep____Compare____term_rep_0_0(&mdb__declarative_execution__V_753_753, mdb__declarative_execution__V_1815_1815, mdb__declarative_execution__V_746_746);
                                              }
#line 5703 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_753_753 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_753_753;
#line 44 "declarative_execution.m"
                                              else
#line 44 "declarative_execution.m"
                                                {
#line 44 "declarative_execution.m"
                                                  MR_Word mdb__declarative_execution__V_754_754;

#line 44 "declarative_execution.m"
                                                  {
#line 44 "declarative_execution.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_754_754, mdb__declarative_execution__V_1814_1814, mdb__declarative_execution__V_747_747);
                                                  }
#line 5723 "mdb.declarative_execution.c"
                                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_754_754 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_754_754;
#line 44 "declarative_execution.m"
                                                  else
#line 44 "declarative_execution.m"
                                                    {
#line 44 "declarative_execution.m"
                                                      MR_Word mdb__declarative_execution__V_755_755;

#line 44 "declarative_execution.m"
                                                      {
#line 44 "declarative_execution.m"
                                                        mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_755_755, mdb__declarative_execution__V_1813_1813, mdb__declarative_execution__V_748_748);
                                                      }
#line 5743 "mdb.declarative_execution.c"
                                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_755_755 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_755_755;
#line 44 "declarative_execution.m"
                                                      else
#line 44 "declarative_execution.m"
                                                        {
#line 44 "declarative_execution.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1812_1812, mdb__declarative_execution__V_749_749);
#line 44 "declarative_execution.m"
                                                          return;
                                                        }
#line 44 "declarative_execution.m"
                                                    }
#line 44 "declarative_execution.m"
                                                }
#line 44 "declarative_execution.m"
                                            }
#line 44 "declarative_execution.m"
                                        }
#line 44 "declarative_execution.m"
                                    }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 5776 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 5782 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 5788 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 5794 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 5800 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                        else
#line 44 "declarative_execution.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 5806 "mdb.declarative_execution.c"
                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 5812 "mdb.declarative_execution.c"
                                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                            else
#line 5816 "mdb.declarative_execution.c"
                                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                  }
#line 44 "declarative_execution.m"
                else
#line 44 "declarative_execution.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 44 "declarative_execution.m"
                    {
#line 44 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_1827_1827 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_1828_1828 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_1829_1829 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_1830_1830 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_1831_1831 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_1832_1832 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 44 "declarative_execution.m"
                      if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 5841 "mdb.declarative_execution.c"
                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 5847 "mdb.declarative_execution.c"
                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                        else
#line 44 "declarative_execution.m"
                          if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 5853 "mdb.declarative_execution.c"
                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 5859 "mdb.declarative_execution.c"
                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 5865 "mdb.declarative_execution.c"
                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 5871 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 44 "declarative_execution.m"
                                    {
#line 44 "declarative_execution.m"
                                      MR_Box mdb__declarative_execution__V_576_576 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                      MR_Box mdb__declarative_execution__V_577_577 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                      MR_Box mdb__declarative_execution__V_578_578 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
#line 44 "declarative_execution.m"
                                      MR_Integer mdb__declarative_execution__V_579_579 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                                      MR_Box mdb__declarative_execution__V_580_580 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
                                      MR_Integer mdb__declarative_execution__V_581_581 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_582_582;

#line 44 "declarative_execution.m"
                                      {
#line 44 "declarative_execution.m"
                                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_582_582, mdb__declarative_execution__V_1832_1832, mdb__declarative_execution__V_576_576);
                                      }
#line 5899 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_582_582 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_582_582;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        {
#line 44 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_583_583;

#line 44 "declarative_execution.m"
                                          {
#line 44 "declarative_execution.m"
                                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_583_583, mdb__declarative_execution__V_1831_1831, mdb__declarative_execution__V_577_577);
                                          }
#line 5919 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_583_583 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_583_583;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            {
#line 44 "declarative_execution.m"
                                              MR_Word mdb__declarative_execution__V_584_584;

#line 44 "declarative_execution.m"
                                              {
#line 44 "declarative_execution.m"
                                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_584_584, mdb__declarative_execution__V_1830_1830, mdb__declarative_execution__V_578_578);
                                              }
#line 5939 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_584_584 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_584_584;
#line 44 "declarative_execution.m"
                                              else
#line 44 "declarative_execution.m"
                                                {
#line 44 "declarative_execution.m"
                                                  MR_Word mdb__declarative_execution__V_585_585;

#line 44 "declarative_execution.m"
                                                  {
#line 44 "declarative_execution.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_585_585, mdb__declarative_execution__V_1829_1829, mdb__declarative_execution__V_579_579);
                                                  }
#line 5959 "mdb.declarative_execution.c"
                                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_585_585 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_585_585;
#line 44 "declarative_execution.m"
                                                  else
#line 44 "declarative_execution.m"
                                                    {
#line 44 "declarative_execution.m"
                                                      MR_Word mdb__declarative_execution__V_586_586;

#line 44 "declarative_execution.m"
                                                      {
#line 44 "declarative_execution.m"
                                                        mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_586_586, mdb__declarative_execution__V_1828_1828, mdb__declarative_execution__V_580_580);
                                                      }
#line 5979 "mdb.declarative_execution.c"
                                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_586_586 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_586_586;
#line 44 "declarative_execution.m"
                                                      else
#line 44 "declarative_execution.m"
                                                        {
#line 44 "declarative_execution.m"
                                                          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1827_1827, mdb__declarative_execution__V_581_581);
#line 44 "declarative_execution.m"
                                                          return;
                                                        }
#line 44 "declarative_execution.m"
                                                    }
#line 44 "declarative_execution.m"
                                                }
#line 44 "declarative_execution.m"
                                            }
#line 44 "declarative_execution.m"
                                        }
#line 44 "declarative_execution.m"
                                    }
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6010 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6016 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6022 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                        else
#line 44 "declarative_execution.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6028 "mdb.declarative_execution.c"
                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6034 "mdb.declarative_execution.c"
                                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                            else
#line 44 "declarative_execution.m"
                                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6040 "mdb.declarative_execution.c"
                                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                              else
#line 6044 "mdb.declarative_execution.c"
                                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                    }
#line 44 "declarative_execution.m"
                  else
#line 44 "declarative_execution.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 44 "declarative_execution.m"
                      {
#line 44 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_1833_1833 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_1834_1834 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 44 "declarative_execution.m"
                        if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6061 "mdb.declarative_execution.c"
                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                        else
#line 44 "declarative_execution.m"
                          if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6067 "mdb.declarative_execution.c"
                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6073 "mdb.declarative_execution.c"
                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6079 "mdb.declarative_execution.c"
                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6085 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6091 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6097 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 44 "declarative_execution.m"
                                        {
#line 44 "declarative_execution.m"
                                          MR_Box mdb__declarative_execution__V_986_986 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                          MR_Box mdb__declarative_execution__V_987_987 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                                          MR_Word mdb__declarative_execution__V_988_988;

#line 44 "declarative_execution.m"
                                          {
#line 44 "declarative_execution.m"
                                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_988_988, mdb__declarative_execution__V_1834_1834, mdb__declarative_execution__V_986_986);
                                          }
#line 6117 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_988_988 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_988_988;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            {
#line 44 "declarative_execution.m"
                                              mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1833_1833, mdb__declarative_execution__V_987_987);
#line 44 "declarative_execution.m"
                                              return;
                                            }
#line 44 "declarative_execution.m"
                                        }
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6140 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                        else
#line 44 "declarative_execution.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6146 "mdb.declarative_execution.c"
                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6152 "mdb.declarative_execution.c"
                                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                            else
#line 44 "declarative_execution.m"
                                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6158 "mdb.declarative_execution.c"
                                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                              else
#line 44 "declarative_execution.m"
                                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6164 "mdb.declarative_execution.c"
                                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                else
#line 6168 "mdb.declarative_execution.c"
                                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                      }
#line 44 "declarative_execution.m"
                    else
#line 44 "declarative_execution.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 44 "declarative_execution.m"
                        {
#line 44 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1835_1835 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 44 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1836_1836 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_1837_1837 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 44 "declarative_execution.m"
                          if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6187 "mdb.declarative_execution.c"
                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6193 "mdb.declarative_execution.c"
                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6199 "mdb.declarative_execution.c"
                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6205 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6211 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6217 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6223 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6229 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                        else
#line 44 "declarative_execution.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 44 "declarative_execution.m"
                                            {
#line 44 "declarative_execution.m"
                                              MR_Box mdb__declarative_execution__V_1088_1088 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                              MR_Box mdb__declarative_execution__V_1089_1089 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                                              MR_Box mdb__declarative_execution__V_1090_1090 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3));
#line 44 "declarative_execution.m"
                                              MR_Word mdb__declarative_execution__V_1091_1091;

#line 44 "declarative_execution.m"
                                              {
#line 44 "declarative_execution.m"
                                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1091_1091, mdb__declarative_execution__V_1837_1837, mdb__declarative_execution__V_1088_1088);
                                              }
#line 6251 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1091_1091 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1091_1091;
#line 44 "declarative_execution.m"
                                              else
#line 44 "declarative_execution.m"
                                                {
#line 44 "declarative_execution.m"
                                                  MR_Word mdb__declarative_execution__V_1092_1092;

#line 44 "declarative_execution.m"
                                                  {
#line 44 "declarative_execution.m"
                                                    mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1092_1092, mdb__declarative_execution__V_1836_1836, mdb__declarative_execution__V_1089_1089);
                                                  }
#line 6271 "mdb.declarative_execution.c"
                                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1092_1092 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1092_1092;
#line 44 "declarative_execution.m"
                                                  else
#line 44 "declarative_execution.m"
                                                    {
#line 44 "declarative_execution.m"
                                                      mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1835_1835, mdb__declarative_execution__V_1090_1090);
#line 44 "declarative_execution.m"
                                                      return;
                                                    }
#line 44 "declarative_execution.m"
                                                }
#line 44 "declarative_execution.m"
                                            }
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6296 "mdb.declarative_execution.c"
                                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                            else
#line 44 "declarative_execution.m"
                                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6302 "mdb.declarative_execution.c"
                                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                              else
#line 44 "declarative_execution.m"
                                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6308 "mdb.declarative_execution.c"
                                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                else
#line 44 "declarative_execution.m"
                                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6314 "mdb.declarative_execution.c"
                                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                  else
#line 6318 "mdb.declarative_execution.c"
                                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                        }
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 44 "declarative_execution.m"
                          {
#line 44 "declarative_execution.m"
                            MR_Word mdb__declarative_execution__V_1838_1838 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_1839_1839 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_1840_1840 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 44 "declarative_execution.m"
                            if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6337 "mdb.declarative_execution.c"
                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6343 "mdb.declarative_execution.c"
                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6349 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6355 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6361 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6367 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6373 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                        else
#line 44 "declarative_execution.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6379 "mdb.declarative_execution.c"
                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6385 "mdb.declarative_execution.c"
                                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                            else
#line 44 "declarative_execution.m"
                                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 44 "declarative_execution.m"
                                                {
#line 44 "declarative_execution.m"
                                                  MR_Box mdb__declarative_execution__V_1532_1532 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                                  MR_Box mdb__declarative_execution__V_1533_1533 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                                                  MR_Word mdb__declarative_execution__V_1534_1534 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                                                  MR_Word mdb__declarative_execution__V_1535_1535;

#line 44 "declarative_execution.m"
                                                  {
#line 44 "declarative_execution.m"
                                                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1535_1535, mdb__declarative_execution__V_1840_1840, mdb__declarative_execution__V_1532_1532);
                                                  }
#line 6407 "mdb.declarative_execution.c"
                                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1535_1535 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1535_1535;
#line 44 "declarative_execution.m"
                                                  else
#line 44 "declarative_execution.m"
                                                    {
#line 44 "declarative_execution.m"
                                                      MR_Word mdb__declarative_execution__V_1536_1536;

#line 44 "declarative_execution.m"
                                                      {
#line 44 "declarative_execution.m"
                                                        mdbcomp__rtti_access____Compare____label_layout_0_0(&mdb__declarative_execution__V_1536_1536, mdb__declarative_execution__V_1839_1839, mdb__declarative_execution__V_1533_1533);
                                                      }
#line 6427 "mdb.declarative_execution.c"
                                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1536_1536 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1536_1536;
#line 44 "declarative_execution.m"
                                                      else
#line 44 "declarative_execution.m"
                                                        {
#line 44 "declarative_execution.m"
                                                          MR_Integer mdb__declarative_execution__V_1859_1859 = (MR_Integer) mdb__declarative_execution__V_1838_1838;
#line 44 "declarative_execution.m"
                                                          MR_Integer mdb__declarative_execution__V_1860_1860 = (MR_Integer) mdb__declarative_execution__V_1534_1534;

#line 44 "declarative_execution.m"
                                                          {
#line 44 "declarative_execution.m"
                                                            mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1859_1859, mdb__declarative_execution__V_1860_1860);
#line 44 "declarative_execution.m"
                                                            return;
                                                          }
#line 44 "declarative_execution.m"
                                                        }
#line 44 "declarative_execution.m"
                                                    }
#line 44 "declarative_execution.m"
                                                }
#line 44 "declarative_execution.m"
                                              else
#line 44 "declarative_execution.m"
                                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6461 "mdb.declarative_execution.c"
                                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                else
#line 44 "declarative_execution.m"
                                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6467 "mdb.declarative_execution.c"
                                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                  else
#line 44 "declarative_execution.m"
                                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6473 "mdb.declarative_execution.c"
                                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                    else
#line 6477 "mdb.declarative_execution.c"
                                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                          }
#line 44 "declarative_execution.m"
                        else
#line 44 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 44 "declarative_execution.m"
                            {
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_1841_1841 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_1842_1842 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_1843_1843 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 44 "declarative_execution.m"
                              if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6496 "mdb.declarative_execution.c"
                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6502 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6508 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6514 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6520 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6526 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                        else
#line 44 "declarative_execution.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6532 "mdb.declarative_execution.c"
                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6538 "mdb.declarative_execution.c"
                                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                            else
#line 44 "declarative_execution.m"
                                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6544 "mdb.declarative_execution.c"
                                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                              else
#line 44 "declarative_execution.m"
                                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6550 "mdb.declarative_execution.c"
                                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                else
#line 44 "declarative_execution.m"
                                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 44 "declarative_execution.m"
                                                    {
#line 44 "declarative_execution.m"
                                                      MR_Box mdb__declarative_execution__V_1754_1754 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                                      MR_Box mdb__declarative_execution__V_1755_1755 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                                      MR_Box mdb__declarative_execution__V_1756_1756 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                                                      MR_Word mdb__declarative_execution__V_1757_1757;

#line 44 "declarative_execution.m"
                                                      {
#line 44 "declarative_execution.m"
                                                        mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1757_1757, mdb__declarative_execution__V_1843_1843, mdb__declarative_execution__V_1754_1754);
                                                      }
#line 6572 "mdb.declarative_execution.c"
                                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1757_1757 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                      mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                        *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1757_1757;
#line 44 "declarative_execution.m"
                                                      else
#line 44 "declarative_execution.m"
                                                        {
#line 44 "declarative_execution.m"
                                                          MR_Word mdb__declarative_execution__V_1758_1758;

#line 44 "declarative_execution.m"
                                                          {
#line 44 "declarative_execution.m"
                                                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1758_1758, mdb__declarative_execution__V_1842_1842, mdb__declarative_execution__V_1755_1755);
                                                          }
#line 6592 "mdb.declarative_execution.c"
                                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1758_1758 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1758_1758;
#line 44 "declarative_execution.m"
                                                          else
#line 44 "declarative_execution.m"
                                                            {
#line 44 "declarative_execution.m"
                                                              mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1841_1841, mdb__declarative_execution__V_1756_1756);
#line 44 "declarative_execution.m"
                                                              return;
                                                            }
#line 44 "declarative_execution.m"
                                                        }
#line 44 "declarative_execution.m"
                                                    }
#line 44 "declarative_execution.m"
                                                  else
#line 44 "declarative_execution.m"
                                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6617 "mdb.declarative_execution.c"
                                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                    else
#line 44 "declarative_execution.m"
                                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6623 "mdb.declarative_execution.c"
                                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                      else
#line 6627 "mdb.declarative_execution.c"
                                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                            }
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 44 "declarative_execution.m"
                              {
#line 44 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_1844_1844 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_1845_1845 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_1846_1846 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 44 "declarative_execution.m"
                                if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6646 "mdb.declarative_execution.c"
                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                else
#line 44 "declarative_execution.m"
                                  if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6652 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6658 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6664 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6670 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                        else
#line 44 "declarative_execution.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6676 "mdb.declarative_execution.c"
                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6682 "mdb.declarative_execution.c"
                                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                            else
#line 44 "declarative_execution.m"
                                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6688 "mdb.declarative_execution.c"
                                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                              else
#line 44 "declarative_execution.m"
                                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6694 "mdb.declarative_execution.c"
                                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                else
#line 44 "declarative_execution.m"
                                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6700 "mdb.declarative_execution.c"
                                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                  else
#line 44 "declarative_execution.m"
                                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6706 "mdb.declarative_execution.c"
                                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                    else
#line 44 "declarative_execution.m"
                                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 44 "declarative_execution.m"
                                                        {
#line 44 "declarative_execution.m"
                                                          MR_Box mdb__declarative_execution__V_1643_1643 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                                          MR_Box mdb__declarative_execution__V_1644_1644 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                                          MR_Box mdb__declarative_execution__V_1645_1645 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                                                          MR_Word mdb__declarative_execution__V_1646_1646;

#line 44 "declarative_execution.m"
                                                          {
#line 44 "declarative_execution.m"
                                                            mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1646_1646, mdb__declarative_execution__V_1846_1846, mdb__declarative_execution__V_1643_1643);
                                                          }
#line 6728 "mdb.declarative_execution.c"
                                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1646_1646 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                          mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                            *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1646_1646;
#line 44 "declarative_execution.m"
                                                          else
#line 44 "declarative_execution.m"
                                                            {
#line 44 "declarative_execution.m"
                                                              MR_Word mdb__declarative_execution__V_1647_1647;

#line 44 "declarative_execution.m"
                                                              {
#line 44 "declarative_execution.m"
                                                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1647_1647, mdb__declarative_execution__V_1845_1845, mdb__declarative_execution__V_1644_1644);
                                                              }
#line 6748 "mdb.declarative_execution.c"
                                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1647_1647 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1647_1647;
#line 44 "declarative_execution.m"
                                                              else
#line 44 "declarative_execution.m"
                                                                {
#line 44 "declarative_execution.m"
                                                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1844_1844, mdb__declarative_execution__V_1645_1645);
#line 44 "declarative_execution.m"
                                                                  return;
                                                                }
#line 44 "declarative_execution.m"
                                                            }
#line 44 "declarative_execution.m"
                                                        }
#line 44 "declarative_execution.m"
                                                      else
#line 44 "declarative_execution.m"
                                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6773 "mdb.declarative_execution.c"
                                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                        else
#line 6777 "mdb.declarative_execution.c"
                                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                              }
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 44 "declarative_execution.m"
                                {
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_1852_1852 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_1853_1853 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 44 "declarative_execution.m"
                                  if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6794 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6800 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6806 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6812 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                        else
#line 44 "declarative_execution.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6818 "mdb.declarative_execution.c"
                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6824 "mdb.declarative_execution.c"
                                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                            else
#line 44 "declarative_execution.m"
                                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6830 "mdb.declarative_execution.c"
                                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                              else
#line 44 "declarative_execution.m"
                                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6836 "mdb.declarative_execution.c"
                                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                else
#line 44 "declarative_execution.m"
                                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6842 "mdb.declarative_execution.c"
                                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                  else
#line 44 "declarative_execution.m"
                                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6848 "mdb.declarative_execution.c"
                                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                    else
#line 44 "declarative_execution.m"
                                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6854 "mdb.declarative_execution.c"
                                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                      else
#line 44 "declarative_execution.m"
                                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6860 "mdb.declarative_execution.c"
                                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                        else
#line 44 "declarative_execution.m"
                                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 44 "declarative_execution.m"
                                                            {
#line 44 "declarative_execution.m"
                                                              MR_Box mdb__declarative_execution__V_892_892 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                                              MR_Box mdb__declarative_execution__V_893_893 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                                                              MR_Word mdb__declarative_execution__V_894_894;

#line 44 "declarative_execution.m"
                                                              {
#line 44 "declarative_execution.m"
                                                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_894_894, mdb__declarative_execution__V_1853_1853, mdb__declarative_execution__V_892_892);
                                                              }
#line 6880 "mdb.declarative_execution.c"
                                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_894_894 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_894_894;
#line 44 "declarative_execution.m"
                                                              else
#line 44 "declarative_execution.m"
                                                                {
#line 44 "declarative_execution.m"
                                                                  mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1852_1852, mdb__declarative_execution__V_893_893);
#line 44 "declarative_execution.m"
                                                                  return;
                                                                }
#line 44 "declarative_execution.m"
                                                            }
#line 44 "declarative_execution.m"
                                                          else
#line 6901 "mdb.declarative_execution.c"
                                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                {
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_1854_1854 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_1855_1855 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_1856_1856 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));

#line 44 "declarative_execution.m"
                                  if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 0))))
#line 6918 "mdb.declarative_execution.c"
                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                  else
#line 44 "declarative_execution.m"
                                    if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 6924 "mdb.declarative_execution.c"
                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                    else
#line 44 "declarative_execution.m"
                                      if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 6930 "mdb.declarative_execution.c"
                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                      else
#line 44 "declarative_execution.m"
                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 6936 "mdb.declarative_execution.c"
                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                        else
#line 44 "declarative_execution.m"
                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 6942 "mdb.declarative_execution.c"
                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                          else
#line 44 "declarative_execution.m"
                                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 6948 "mdb.declarative_execution.c"
                                              *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                            else
#line 44 "declarative_execution.m"
                                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 6954 "mdb.declarative_execution.c"
                                                *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                              else
#line 44 "declarative_execution.m"
                                                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 6960 "mdb.declarative_execution.c"
                                                  *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                else
#line 44 "declarative_execution.m"
                                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 6966 "mdb.declarative_execution.c"
                                                    *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                  else
#line 44 "declarative_execution.m"
                                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 6972 "mdb.declarative_execution.c"
                                                      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                    else
#line 44 "declarative_execution.m"
                                                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 6978 "mdb.declarative_execution.c"
                                                        *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                      else
#line 44 "declarative_execution.m"
                                                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 6984 "mdb.declarative_execution.c"
                                                          *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 1;
#line 44 "declarative_execution.m"
                                                        else
#line 44 "declarative_execution.m"
                                                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 6990 "mdb.declarative_execution.c"
                                                            *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 2;
#line 44 "declarative_execution.m"
                                                          else
#line 44 "declarative_execution.m"
                                                            {
#line 44 "declarative_execution.m"
                                                              MR_Box mdb__declarative_execution__V_1310_1310 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                                              MR_Box mdb__declarative_execution__V_1311_1311 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                                              MR_Box mdb__declarative_execution__V_1312_1312 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                                                              MR_Word mdb__declarative_execution__V_1313_1313;

#line 44 "declarative_execution.m"
                                                              {
#line 44 "declarative_execution.m"
                                                                mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1313_1313, mdb__declarative_execution__V_1856_1856, mdb__declarative_execution__V_1310_1310);
                                                              }
#line 7010 "mdb.declarative_execution.c"
                                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1313_1313 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                              mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                                *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1313_1313;
#line 44 "declarative_execution.m"
                                                              else
#line 44 "declarative_execution.m"
                                                                {
#line 44 "declarative_execution.m"
                                                                  MR_Word mdb__declarative_execution__V_1314_1314;

#line 44 "declarative_execution.m"
                                                                  {
#line 44 "declarative_execution.m"
                                                                    mercury__builtin__compare_3_p_0(mdb__declarative_execution__TypeInfo_for_R_1761, &mdb__declarative_execution__V_1314_1314, mdb__declarative_execution__V_1855_1855, mdb__declarative_execution__V_1311_1311);
                                                                  }
#line 7030 "mdb.declarative_execution.c"
                                                                  mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_1314_1314 == (MR_Integer) 0);
#line 44 "declarative_execution.m"
                                                                  mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 44 "declarative_execution.m"
                                                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                                                    *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_1314_1314;
#line 44 "declarative_execution.m"
                                                                  else
#line 44 "declarative_execution.m"
                                                                    {
#line 44 "declarative_execution.m"
                                                                      mdbcomp__rtti_access____Compare____label_layout_0_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_1854_1854, mdb__declarative_execution__V_1312_1312);
#line 44 "declarative_execution.m"
                                                                      return;
                                                                    }
#line 44 "declarative_execution.m"
                                                                }
#line 44 "declarative_execution.m"
                                                            }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
  }
#line 44 "declarative_execution.m"
}

#line 44 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_node_1_0(
#line 44 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_127,
#line 44 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 44 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 44 "declarative_execution.m"
{
#line 44 "declarative_execution.m"
  {
#line 44 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 44 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_125 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 44 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_126 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 44 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_125 == mdb__declarative_execution__CastY_126);
#line 44 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 44 "declarative_execution.m"
    else
#line 44 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 44 "declarative_execution.m"
        {
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__TypeInfo_128_128;
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__TypeInfo_129_129;
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__TypeInfo_130_130;
#line 44 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 44 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));
#line 44 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_13_13;
#line 44 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_14_14;
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_15_15;
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_16_16;
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_17_17;
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_18_18;
#line 44 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_19_19;
#line 44 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_20_20;
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_21_21;
#line 44 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_22_22;

#line 44 "declarative_execution.m"
          mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
#line 44 "declarative_execution.m"
          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
            {
#line 44 "declarative_execution.m"
              mdb__declarative_execution__V_13_13 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
#line 44 "declarative_execution.m"
              mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
              mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
              mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
              mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
              mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
              mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
              mdb__declarative_execution__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 44 "declarative_execution.m"
              mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 8)));
#line 44 "declarative_execution.m"
              mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 9)));
#line 7163 "mdb.declarative_execution.c"
              {
#line 7165 "mdb.declarative_execution.c"
                mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_13_13);
              }
#line 44 "declarative_execution.m"
              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                {
#line 7172 "mdb.declarative_execution.c"
                  {
#line 7174 "mdb.declarative_execution.c"
                    mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_14_14);
                  }
#line 44 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                    {
#line 7181 "mdb.declarative_execution.c"
                      mdb__declarative_execution__TypeInfo_128_128 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
#line 7183 "mdb.declarative_execution.c"
                      {
#line 7185 "mdb.declarative_execution.c"
                        mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_128_128, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_15_15)));
                      }
#line 44 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                        {
#line 7192 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_6_6 == mdb__declarative_execution__V_16_16);
#line 44 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                            {
#line 7198 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_7_7 == mdb__declarative_execution__V_17_17);
#line 44 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                {
#line 7204 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__TypeInfo_129_129 = (MR_Word) &mdb__declarative_execution_scalar_common_1[1];
#line 7206 "mdb.declarative_execution.c"
                                  {
#line 7208 "mdb.declarative_execution.c"
                                    mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_129_129, ((MR_Box) (mdb__declarative_execution__V_8_8)), ((MR_Box) (mdb__declarative_execution__V_18_18)));
                                  }
#line 44 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                    {
#line 7215 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__TypeInfo_130_130 = (MR_Word) &mdb__declarative_execution_scalar_common_1[5];
#line 7217 "mdb.declarative_execution.c"
                                      {
#line 7219 "mdb.declarative_execution.c"
                                        mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_130_130, ((MR_Box) (mdb__declarative_execution__V_9_9)), ((MR_Box) (mdb__declarative_execution__V_19_19)));
                                      }
#line 44 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                        {
#line 7226 "mdb.declarative_execution.c"
                                          {
#line 7228 "mdb.declarative_execution.c"
                                            mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_10_10, mdb__declarative_execution__V_20_20);
                                          }
#line 44 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                            {
#line 7235 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_11_11 == mdb__declarative_execution__V_21_21);
#line 44 "declarative_execution.m"
                                              if (mdb__declarative_execution__succeeded)
#line 7239 "mdb.declarative_execution.c"
                                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_12_12 == mdb__declarative_execution__V_22_22);
#line 44 "declarative_execution.m"
                                            }
#line 44 "declarative_execution.m"
                                        }
#line 44 "declarative_execution.m"
                                    }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                            }
#line 44 "declarative_execution.m"
                        }
#line 44 "declarative_execution.m"
                    }
#line 44 "declarative_execution.m"
                }
#line 44 "declarative_execution.m"
            }
#line 44 "declarative_execution.m"
        }
#line 44 "declarative_execution.m"
      else
#line 44 "declarative_execution.m"
        if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 44 "declarative_execution.m"
          {
#line 44 "declarative_execution.m"
            MR_Word mdb__declarative_execution__TypeInfo_132_132;
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_23_23 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_25_25 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 44 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_30_30 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_31_31;
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_32_32;
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_33_33;
#line 44 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_34_34;
#line 44 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_35_35;
#line 44 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_36_36;
#line 44 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_37_37;
#line 44 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_38_38;

#line 44 "declarative_execution.m"
            mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 44 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
              {
#line 44 "declarative_execution.m"
                mdb__declarative_execution__V_31_31 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
#line 44 "declarative_execution.m"
                mdb__declarative_execution__V_32_32 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                mdb__declarative_execution__V_33_33 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                mdb__declarative_execution__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                mdb__declarative_execution__V_36_36 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
                mdb__declarative_execution__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
                mdb__declarative_execution__V_38_38 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 7324 "mdb.declarative_execution.c"
                {
#line 7326 "mdb.declarative_execution.c"
                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_23_23, mdb__declarative_execution__V_31_31);
                }
#line 44 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                  {
#line 7333 "mdb.declarative_execution.c"
                    {
#line 7335 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_24_24, mdb__declarative_execution__V_32_32);
                    }
#line 44 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                      {
#line 7342 "mdb.declarative_execution.c"
                        {
#line 7344 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_25_25, mdb__declarative_execution__V_33_33);
                        }
#line 44 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                          {
#line 7351 "mdb.declarative_execution.c"
                            mdb__declarative_execution__TypeInfo_132_132 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
#line 7353 "mdb.declarative_execution.c"
                            {
#line 7355 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_132_132, ((MR_Box) (mdb__declarative_execution__V_26_26)), ((MR_Box) (mdb__declarative_execution__V_34_34)));
                            }
#line 44 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                              {
#line 7362 "mdb.declarative_execution.c"
                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_27_27 == mdb__declarative_execution__V_35_35);
#line 44 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                  {
#line 7368 "mdb.declarative_execution.c"
                                    {
#line 7370 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_28_28, mdb__declarative_execution__V_36_36);
                                    }
#line 44 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                      {
#line 7377 "mdb.declarative_execution.c"
                                        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_29_29 == mdb__declarative_execution__V_37_37);
#line 44 "declarative_execution.m"
                                        if (mdb__declarative_execution__succeeded)
#line 7381 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_30_30 == mdb__declarative_execution__V_38_38);
#line 44 "declarative_execution.m"
                                      }
#line 44 "declarative_execution.m"
                                  }
#line 44 "declarative_execution.m"
                              }
#line 44 "declarative_execution.m"
                          }
#line 44 "declarative_execution.m"
                      }
#line 44 "declarative_execution.m"
                  }
#line 44 "declarative_execution.m"
              }
#line 44 "declarative_execution.m"
          }
#line 44 "declarative_execution.m"
        else
#line 44 "declarative_execution.m"
          if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 44 "declarative_execution.m"
            {
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_39_39 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_40_40 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_44_44;
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_45_45;
#line 44 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_46_46;
#line 44 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_47_47;
#line 44 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_48_48;

#line 44 "declarative_execution.m"
              mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 44 "declarative_execution.m"
              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                {
#line 44 "declarative_execution.m"
                  mdb__declarative_execution__V_44_44 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0));
#line 44 "declarative_execution.m"
                  mdb__declarative_execution__V_45_45 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                  mdb__declarative_execution__V_46_46 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                  mdb__declarative_execution__V_47_47 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                  mdb__declarative_execution__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 7442 "mdb.declarative_execution.c"
                  {
#line 7444 "mdb.declarative_execution.c"
                    mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_39_39, mdb__declarative_execution__V_44_44);
                  }
#line 44 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                    {
#line 7451 "mdb.declarative_execution.c"
                      {
#line 7453 "mdb.declarative_execution.c"
                        mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_40_40, mdb__declarative_execution__V_45_45);
                      }
#line 44 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                        {
#line 7460 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_41_41 == mdb__declarative_execution__V_46_46);
#line 44 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                            {
#line 7466 "mdb.declarative_execution.c"
                              {
#line 7468 "mdb.declarative_execution.c"
                                mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_42_42, mdb__declarative_execution__V_47_47);
                              }
#line 44 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 7473 "mdb.declarative_execution.c"
                                mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_43_43 == mdb__declarative_execution__V_48_48);
#line 44 "declarative_execution.m"
                            }
#line 44 "declarative_execution.m"
                        }
#line 44 "declarative_execution.m"
                    }
#line 44 "declarative_execution.m"
                }
#line 44 "declarative_execution.m"
            }
#line 44 "declarative_execution.m"
          else
#line 44 "declarative_execution.m"
            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 44 "declarative_execution.m"
              {
#line 44 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_89_89 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_90_90 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_91_91 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_92_92;
#line 44 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_93_93;
#line 44 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_94_94;

#line 44 "declarative_execution.m"
                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 44 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                  {
#line 44 "declarative_execution.m"
                    mdb__declarative_execution__V_92_92 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                    mdb__declarative_execution__V_93_93 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                    mdb__declarative_execution__V_94_94 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 7516 "mdb.declarative_execution.c"
                    {
#line 7518 "mdb.declarative_execution.c"
                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_89_89, mdb__declarative_execution__V_92_92);
                    }
#line 44 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                      {
#line 7525 "mdb.declarative_execution.c"
                        {
#line 7527 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_90_90, mdb__declarative_execution__V_93_93);
                        }
#line 44 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 7532 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_91_91 == mdb__declarative_execution__V_94_94);
#line 44 "declarative_execution.m"
                      }
#line 44 "declarative_execution.m"
                  }
#line 44 "declarative_execution.m"
              }
#line 44 "declarative_execution.m"
            else
#line 44 "declarative_execution.m"
              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 44 "declarative_execution.m"
                {
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_101_101 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_102_102 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_103_103 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_104_104;
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_105_105;
#line 44 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_106_106;

#line 44 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 7)));
#line 44 "declarative_execution.m"
                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                    {
#line 44 "declarative_execution.m"
                      mdb__declarative_execution__V_104_104 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                      mdb__declarative_execution__V_105_105 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                      mdb__declarative_execution__V_106_106 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 7571 "mdb.declarative_execution.c"
                      {
#line 7573 "mdb.declarative_execution.c"
                        mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_101_101, mdb__declarative_execution__V_104_104);
                      }
#line 44 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                        {
#line 7580 "mdb.declarative_execution.c"
                          {
#line 7582 "mdb.declarative_execution.c"
                            mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_102_102, mdb__declarative_execution__V_105_105);
                          }
#line 44 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 7587 "mdb.declarative_execution.c"
                            {
#line 7589 "mdb.declarative_execution.c"
                              return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_103_103, mdb__declarative_execution__V_106_106);
                            }
#line 44 "declarative_execution.m"
                        }
#line 44 "declarative_execution.m"
                    }
#line 44 "declarative_execution.m"
                }
#line 44 "declarative_execution.m"
              else
#line 44 "declarative_execution.m"
                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 44 "declarative_execution.m"
                  {
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_61_61 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_62_62 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_63_63 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
#line 44 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__V_64_64 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_66_66 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_67_67 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_68_68;
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_69_69;
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_70_70;
#line 44 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__V_71_71;
#line 44 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_72_72;
#line 44 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_73_73;
#line 44 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_74_74;

#line 44 "declarative_execution.m"
                    mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 44 "declarative_execution.m"
                    if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                      {
#line 44 "declarative_execution.m"
                        mdb__declarative_execution__V_68_68 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                        mdb__declarative_execution__V_69_69 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                        mdb__declarative_execution__V_70_70 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 44 "declarative_execution.m"
                        mdb__declarative_execution__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                        mdb__declarative_execution__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
                        mdb__declarative_execution__V_73_73 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
                        mdb__declarative_execution__V_74_74 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 7653 "mdb.declarative_execution.c"
                        {
#line 7655 "mdb.declarative_execution.c"
                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_61_61, mdb__declarative_execution__V_68_68);
                        }
#line 44 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                          {
#line 7662 "mdb.declarative_execution.c"
                            {
#line 7664 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_62_62, mdb__declarative_execution__V_69_69);
                            }
#line 44 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                              {
#line 7671 "mdb.declarative_execution.c"
                                {
#line 7673 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_63_63, mdb__declarative_execution__V_70_70);
                                }
#line 44 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                  {
#line 7680 "mdb.declarative_execution.c"
                                    {
#line 7682 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = mdb__term_rep____Unify____term_rep_0_0(mdb__declarative_execution__V_64_64, mdb__declarative_execution__V_71_71);
                                    }
#line 44 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                      {
#line 7689 "mdb.declarative_execution.c"
                                        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_65_65 == mdb__declarative_execution__V_72_72);
#line 44 "declarative_execution.m"
                                        if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                          {
#line 7695 "mdb.declarative_execution.c"
                                            {
#line 7697 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_66_66, mdb__declarative_execution__V_73_73);
                                            }
#line 44 "declarative_execution.m"
                                            if (mdb__declarative_execution__succeeded)
#line 7702 "mdb.declarative_execution.c"
                                              mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_67_67 == mdb__declarative_execution__V_74_74);
#line 44 "declarative_execution.m"
                                          }
#line 44 "declarative_execution.m"
                                      }
#line 44 "declarative_execution.m"
                                  }
#line 44 "declarative_execution.m"
                              }
#line 44 "declarative_execution.m"
                          }
#line 44 "declarative_execution.m"
                      }
#line 44 "declarative_execution.m"
                  }
#line 44 "declarative_execution.m"
                else
#line 44 "declarative_execution.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 44 "declarative_execution.m"
                    {
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_50_50 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_51_51 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
#line 44 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_52_52 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_53_53 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_55_55;
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_56_56;
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_57_57;
#line 44 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_58_58;
#line 44 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_59_59;
#line 44 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__V_60_60;

#line 44 "declarative_execution.m"
                      mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 44 "declarative_execution.m"
                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                        {
#line 44 "declarative_execution.m"
                          mdb__declarative_execution__V_55_55 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                          mdb__declarative_execution__V_56_56 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                          mdb__declarative_execution__V_57_57 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 44 "declarative_execution.m"
                          mdb__declarative_execution__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                          mdb__declarative_execution__V_59_59 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 44 "declarative_execution.m"
                          mdb__declarative_execution__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 7767 "mdb.declarative_execution.c"
                          {
#line 7769 "mdb.declarative_execution.c"
                            mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_49_49, mdb__declarative_execution__V_55_55);
                          }
#line 44 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                            {
#line 7776 "mdb.declarative_execution.c"
                              {
#line 7778 "mdb.declarative_execution.c"
                                mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_50_50, mdb__declarative_execution__V_56_56);
                              }
#line 44 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                {
#line 7785 "mdb.declarative_execution.c"
                                  {
#line 7787 "mdb.declarative_execution.c"
                                    mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_51_51, mdb__declarative_execution__V_57_57);
                                  }
#line 44 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                    {
#line 7794 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_52_52 == mdb__declarative_execution__V_58_58);
#line 44 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                        {
#line 7800 "mdb.declarative_execution.c"
                                          {
#line 7802 "mdb.declarative_execution.c"
                                            mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_53_53, mdb__declarative_execution__V_59_59);
                                          }
#line 44 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 7807 "mdb.declarative_execution.c"
                                            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_54_54 == mdb__declarative_execution__V_60_60);
#line 44 "declarative_execution.m"
                                        }
#line 44 "declarative_execution.m"
                                    }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                            }
#line 44 "declarative_execution.m"
                        }
#line 44 "declarative_execution.m"
                    }
#line 44 "declarative_execution.m"
                  else
#line 44 "declarative_execution.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 44 "declarative_execution.m"
                      {
#line 44 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_79_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_80_80 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_81_81;
#line 44 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_82_82;

#line 44 "declarative_execution.m"
                        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                        if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                          {
#line 44 "declarative_execution.m"
                            mdb__declarative_execution__V_81_81 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                            mdb__declarative_execution__V_82_82 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 7846 "mdb.declarative_execution.c"
                            {
#line 7848 "mdb.declarative_execution.c"
                              mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_79_79, mdb__declarative_execution__V_81_81);
                            }
#line 44 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 7853 "mdb.declarative_execution.c"
                              {
#line 7855 "mdb.declarative_execution.c"
                                return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_80_80, mdb__declarative_execution__V_82_82);
                              }
#line 44 "declarative_execution.m"
                          }
#line 44 "declarative_execution.m"
                      }
#line 44 "declarative_execution.m"
                    else
#line 44 "declarative_execution.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 44 "declarative_execution.m"
                        {
#line 44 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_83_83 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_84_84 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_85_85 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3));
#line 44 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_86_86;
#line 44 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_87_87;
#line 44 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_88_88;

#line 44 "declarative_execution.m"
                          mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
#line 44 "declarative_execution.m"
                          if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                            {
#line 44 "declarative_execution.m"
                              mdb__declarative_execution__V_86_86 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                              mdb__declarative_execution__V_87_87 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                              mdb__declarative_execution__V_88_88 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3));
#line 7893 "mdb.declarative_execution.c"
                              {
#line 7895 "mdb.declarative_execution.c"
                                mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_83_83, mdb__declarative_execution__V_86_86);
                              }
#line 44 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                {
#line 7902 "mdb.declarative_execution.c"
                                  {
#line 7904 "mdb.declarative_execution.c"
                                    mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_84_84, mdb__declarative_execution__V_87_87);
                                  }
#line 44 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 7909 "mdb.declarative_execution.c"
                                    {
#line 7911 "mdb.declarative_execution.c"
                                      return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_85_85, mdb__declarative_execution__V_88_88);
                                    }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                            }
#line 44 "declarative_execution.m"
                        }
#line 44 "declarative_execution.m"
                      else
#line 44 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 44 "declarative_execution.m"
                          {
#line 44 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_107_107 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_108_108 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                            MR_Word mdb__declarative_execution__V_109_109 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_110_110;
#line 44 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_111_111;
#line 44 "declarative_execution.m"
                            MR_Word mdb__declarative_execution__V_112_112;

#line 44 "declarative_execution.m"
                            mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 44 "declarative_execution.m"
                            if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                              {
#line 44 "declarative_execution.m"
                                mdb__declarative_execution__V_110_110 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                mdb__declarative_execution__V_111_111 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                                mdb__declarative_execution__V_112_112 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 7951 "mdb.declarative_execution.c"
                                {
#line 7953 "mdb.declarative_execution.c"
                                  mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_107_107, mdb__declarative_execution__V_110_110);
                                }
#line 44 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                  {
#line 7960 "mdb.declarative_execution.c"
                                    {
#line 7962 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_108_108, mdb__declarative_execution__V_111_111);
                                    }
#line 44 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 7967 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_109_109 == mdb__declarative_execution__V_112_112);
#line 44 "declarative_execution.m"
                                  }
#line 44 "declarative_execution.m"
                              }
#line 44 "declarative_execution.m"
                          }
#line 44 "declarative_execution.m"
                        else
#line 44 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 44 "declarative_execution.m"
                            {
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_119_119 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_120_120 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_121_121 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_122_122;
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_123_123;
#line 44 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_124_124;

#line 44 "declarative_execution.m"
                              mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 10)));
#line 44 "declarative_execution.m"
                              if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                {
#line 44 "declarative_execution.m"
                                  mdb__declarative_execution__V_122_122 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                  mdb__declarative_execution__V_123_123 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                  mdb__declarative_execution__V_124_124 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8006 "mdb.declarative_execution.c"
                                  {
#line 8008 "mdb.declarative_execution.c"
                                    mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_119_119, mdb__declarative_execution__V_122_122);
                                  }
#line 44 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                    {
#line 8015 "mdb.declarative_execution.c"
                                      {
#line 8017 "mdb.declarative_execution.c"
                                        mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_120_120, mdb__declarative_execution__V_123_123);
                                      }
#line 44 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 8022 "mdb.declarative_execution.c"
                                        {
#line 8024 "mdb.declarative_execution.c"
                                          return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_121_121, mdb__declarative_execution__V_124_124);
                                        }
#line 44 "declarative_execution.m"
                                    }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                            }
#line 44 "declarative_execution.m"
                          else
#line 44 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 44 "declarative_execution.m"
                              {
#line 44 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_113_113 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_114_114 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_115_115 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_116_116;
#line 44 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_117_117;
#line 44 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_118_118;

#line 44 "declarative_execution.m"
                                mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 9)));
#line 44 "declarative_execution.m"
                                if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                  {
#line 44 "declarative_execution.m"
                                    mdb__declarative_execution__V_116_116 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                    mdb__declarative_execution__V_117_117 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                    mdb__declarative_execution__V_118_118 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8064 "mdb.declarative_execution.c"
                                    {
#line 8066 "mdb.declarative_execution.c"
                                      mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_113_113, mdb__declarative_execution__V_116_116);
                                    }
#line 44 "declarative_execution.m"
                                    if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                      {
#line 8073 "mdb.declarative_execution.c"
                                        {
#line 8075 "mdb.declarative_execution.c"
                                          mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_114_114, mdb__declarative_execution__V_117_117);
                                        }
#line 44 "declarative_execution.m"
                                        if (mdb__declarative_execution__succeeded)
#line 8080 "mdb.declarative_execution.c"
                                          {
#line 8082 "mdb.declarative_execution.c"
                                            return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_115_115, mdb__declarative_execution__V_118_118);
                                          }
#line 44 "declarative_execution.m"
                                      }
#line 44 "declarative_execution.m"
                                  }
#line 44 "declarative_execution.m"
                              }
#line 44 "declarative_execution.m"
                            else
#line 44 "declarative_execution.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 44 "declarative_execution.m"
                                {
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_75_75 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_76_76 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_77_77;
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_78_78;

#line 44 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 44 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                    {
#line 44 "declarative_execution.m"
                                      mdb__declarative_execution__V_77_77 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                      mdb__declarative_execution__V_78_78 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 8116 "mdb.declarative_execution.c"
                                      {
#line 8118 "mdb.declarative_execution.c"
                                        mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_75_75, mdb__declarative_execution__V_77_77);
                                      }
#line 44 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 8123 "mdb.declarative_execution.c"
                                        {
#line 8125 "mdb.declarative_execution.c"
                                          return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_76_76, mdb__declarative_execution__V_78_78);
                                        }
#line 44 "declarative_execution.m"
                                    }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
                              else
#line 44 "declarative_execution.m"
                                {
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_95_95 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_96_96 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_97_97 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_98_98;
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_99_99;
#line 44 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_100_100;

#line 44 "declarative_execution.m"
                                  mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 6)));
#line 44 "declarative_execution.m"
                                  if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                    {
#line 44 "declarative_execution.m"
                                      mdb__declarative_execution__V_98_98 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1));
#line 44 "declarative_execution.m"
                                      mdb__declarative_execution__V_99_99 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2));
#line 44 "declarative_execution.m"
                                      mdb__declarative_execution__V_100_100 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 8161 "mdb.declarative_execution.c"
                                      {
#line 8163 "mdb.declarative_execution.c"
                                        mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_95_95, mdb__declarative_execution__V_98_98);
                                      }
#line 44 "declarative_execution.m"
                                      if (mdb__declarative_execution__succeeded)
#line 44 "declarative_execution.m"
                                        {
#line 8170 "mdb.declarative_execution.c"
                                          {
#line 8172 "mdb.declarative_execution.c"
                                            mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_for_R_127, mdb__declarative_execution__V_96_96, mdb__declarative_execution__V_99_99);
                                          }
#line 44 "declarative_execution.m"
                                          if (mdb__declarative_execution__succeeded)
#line 8177 "mdb.declarative_execution.c"
                                            {
#line 8179 "mdb.declarative_execution.c"
                                              return mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____label_layout_0_0(mdb__declarative_execution__V_97_97, mdb__declarative_execution__V_100_100);
                                            }
#line 44 "declarative_execution.m"
                                        }
#line 44 "declarative_execution.m"
                                    }
#line 44 "declarative_execution.m"
                                }
#line 44 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 44 "declarative_execution.m"
  }
#line 44 "declarative_execution.m"
}

#line 251 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_arg_0_0(
#line 251 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 251 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 251 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 251 "declarative_execution.m"
{
#line 251 "declarative_execution.m"
  {
#line 251 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 251 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_12 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 251 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_13 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 251 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_12 == mdb__declarative_execution__CastY_13);
#line 251 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 8219 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 251 "declarative_execution.m"
    else
#line 251 "declarative_execution.m"
      {
#line 251 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 251 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 251 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 251 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)));
#line 251 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1)));
#line 251 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 2)));
#line 251 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_10_10;
#line 251 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_17_17 = (MR_Integer) mdb__declarative_execution__V_4_4;
#line 251 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_18_18 = (MR_Integer) mdb__declarative_execution__V_7_7;

#line 251 "declarative_execution.m"
        {
#line 251 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_10_10, mdb__declarative_execution__V_17_17, mdb__declarative_execution__V_18_18);
        }
#line 8249 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_10_10 == (MR_Integer) 0);
#line 251 "declarative_execution.m"
        mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 251 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 251 "declarative_execution.m"
          *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_10_10;
#line 251 "declarative_execution.m"
        else
#line 251 "declarative_execution.m"
          {
#line 251 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_11_11;

#line 251 "declarative_execution.m"
            {
#line 251 "declarative_execution.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdb__declarative_execution__V_11_11, mdb__declarative_execution__V_5_5, mdb__declarative_execution__V_8_8);
            }
#line 8269 "mdb.declarative_execution.c"
            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_11_11 == (MR_Integer) 0);
#line 251 "declarative_execution.m"
            mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 251 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 251 "declarative_execution.m"
              *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_11_11;
#line 251 "declarative_execution.m"
            else
#line 251 "declarative_execution.m"
              {
#line 251 "declarative_execution.m"
                {
#line 251 "declarative_execution.m"
                  mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[4], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_6_6)), ((MR_Box) (mdb__declarative_execution__V_9_9)));
#line 251 "declarative_execution.m"
                  return;
                }
#line 251 "declarative_execution.m"
              }
#line 251 "declarative_execution.m"
          }
#line 251 "declarative_execution.m"
      }
#line 251 "declarative_execution.m"
  }
#line 251 "declarative_execution.m"
}

#line 251 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_arg_0_0(
#line 251 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 251 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 251 "declarative_execution.m"
{
#line 251 "declarative_execution.m"
  {
#line 251 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 251 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_9 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 251 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_10 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 251 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_9 == mdb__declarative_execution__CastY_10);
#line 251 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 251 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 251 "declarative_execution.m"
    else
#line 251 "declarative_execution.m"
      {
#line 251 "declarative_execution.m"
        MR_Word mdb__declarative_execution__TypeInfo_11_11;
#line 251 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 251 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 251 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 251 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 251 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 251 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));

#line 8342 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_6_6);
#line 251 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 251 "declarative_execution.m"
          {
#line 8348 "mdb.declarative_execution.c"
            mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_4_4 == mdb__declarative_execution__V_7_7);
#line 251 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 251 "declarative_execution.m"
              {
#line 8354 "mdb.declarative_execution.c"
                mdb__declarative_execution__TypeInfo_11_11 = (MR_Word) &mdb__declarative_execution_scalar_common_1[4];
#line 8356 "mdb.declarative_execution.c"
                {
#line 8358 "mdb.declarative_execution.c"
                  return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_11_11, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_8_8)));
                }
#line 251 "declarative_execution.m"
              }
#line 251 "declarative_execution.m"
          }
#line 251 "declarative_execution.m"
      }
#line 251 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 251 "declarative_execution.m"
  }
#line 251 "declarative_execution.m"
}

#line 262 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____trace_atom_0_0(
#line 262 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 262 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 262 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 262 "declarative_execution.m"
{
#line 262 "declarative_execution.m"
  {
#line 262 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 262 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_9 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 262 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_10 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 262 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_9 == mdb__declarative_execution__CastY_10);
#line 262 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 8398 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 262 "declarative_execution.m"
    else
#line 262 "declarative_execution.m"
      {
#line 262 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_4_4 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 262 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_6_6 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 0)));
#line 262 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__3_3, (MR_Integer) 1)));
#line 262 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_8_8;

#line 262 "declarative_execution.m"
        {
#line 262 "declarative_execution.m"
          mdbcomp__rtti_access____Compare____proc_layout_0_0(&mdb__declarative_execution__V_8_8, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_6_6);
        }
#line 8420 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_8_8 == (MR_Integer) 0);
#line 262 "declarative_execution.m"
        mdb__declarative_execution__succeeded = !(mdb__declarative_execution__succeeded);
#line 262 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 262 "declarative_execution.m"
          *mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__V_8_8;
#line 262 "declarative_execution.m"
        else
#line 262 "declarative_execution.m"
          {
#line 262 "declarative_execution.m"
            {
#line 262 "declarative_execution.m"
              mercury__builtin__compare_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[3], mdb__declarative_execution__HeadVar__1_1, ((MR_Box) (mdb__declarative_execution__V_5_5)), ((MR_Box) (mdb__declarative_execution__V_7_7)));
#line 262 "declarative_execution.m"
              return;
            }
#line 262 "declarative_execution.m"
          }
#line 262 "declarative_execution.m"
      }
#line 262 "declarative_execution.m"
  }
#line 262 "declarative_execution.m"
}

#line 262 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____trace_atom_0_0(
#line 262 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 262 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 262 "declarative_execution.m"
{
#line 262 "declarative_execution.m"
  {
#line 262 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 262 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_7 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 262 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_8 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 262 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_7 == mdb__declarative_execution__CastY_8);
#line 262 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 262 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 262 "declarative_execution.m"
    else
#line 262 "declarative_execution.m"
      {
#line 262 "declarative_execution.m"
        MR_Word mdb__declarative_execution__TypeInfo_9_9;
#line 262 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_3_3 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 262 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 262 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_5_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 262 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));

#line 8487 "mdb.declarative_execution.c"
        {
#line 8489 "mdb.declarative_execution.c"
          mdb__declarative_execution__succeeded = mdbcomp__rtti_access____Unify____proc_layout_0_0(mdb__declarative_execution__V_3_3, mdb__declarative_execution__V_5_5);
        }
#line 262 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 262 "declarative_execution.m"
          {
#line 8496 "mdb.declarative_execution.c"
            mdb__declarative_execution__TypeInfo_9_9 = (MR_Word) &mdb__declarative_execution_scalar_common_1[3];
#line 8498 "mdb.declarative_execution.c"
            {
#line 8500 "mdb.declarative_execution.c"
              return mdb__declarative_execution__succeeded = mercury__builtin__unify_2_p_0(mdb__declarative_execution__TypeInfo_9_9, ((MR_Box) (mdb__declarative_execution__V_4_4)), ((MR_Box) (mdb__declarative_execution__V_6_6)));
            }
#line 262 "declarative_execution.m"
          }
#line 262 "declarative_execution.m"
      }
#line 262 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 262 "declarative_execution.m"
  }
#line 262 "declarative_execution.m"
}

#line 316 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____suspicion_accumulator_0_0(
#line 316 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 316 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2,
#line 316 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__3_3)
#line 316 "declarative_execution.m"
{
#line 316 "declarative_execution.m"
  {
#line 316 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 316 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = mdb__declarative_execution__HeadVar__2_2;
#line 316 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = mdb__declarative_execution__HeadVar__3_3;

#line 316 "declarative_execution.m"
    {
#line 316 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 316 "declarative_execution.m"
      return;
    }
#line 316 "declarative_execution.m"
  }
#line 316 "declarative_execution.m"
}

#line 316 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____suspicion_accumulator_0_0(
#line 316 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__1_1,
#line 316 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2)
#line 316 "declarative_execution.m"
{
#line 316 "declarative_execution.m"
  {
#line 316 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 316 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_3 = mdb__declarative_execution__HeadVar__1_1;
#line 316 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_4 = mdb__declarative_execution__HeadVar__2_2;

#line 316 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__Cast_HeadVar1_3 == mdb__declarative_execution__Cast_HeadVar2_4);
#line 316 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 316 "declarative_execution.m"
  }
#line 316 "declarative_execution.m"
}

#line 313 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____sequence_number_0_0(
#line 313 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 313 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2,
#line 313 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__3_3)
#line 313 "declarative_execution.m"
{
#line 313 "declarative_execution.m"
  {
#line 313 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 313 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = mdb__declarative_execution__HeadVar__2_2;
#line 313 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = mdb__declarative_execution__HeadVar__3_3;

#line 313 "declarative_execution.m"
    {
#line 313 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 313 "declarative_execution.m"
      return;
    }
#line 313 "declarative_execution.m"
  }
#line 313 "declarative_execution.m"
}

#line 313 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____sequence_number_0_0(
#line 313 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__1_1,
#line 313 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HeadVar__2_2)
#line 313 "declarative_execution.m"
{
#line 313 "declarative_execution.m"
  {
#line 313 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 313 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_3 = mdb__declarative_execution__HeadVar__1_1;
#line 313 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_4 = mdb__declarative_execution__HeadVar__2_2;

#line 313 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__Cast_HeadVar1_3 == mdb__declarative_execution__Cast_HeadVar2_4);
#line 313 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 313 "declarative_execution.m"
  }
#line 313 "declarative_execution.m"
}

#line 277 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____implicit_tree_info_0_0(
#line 277 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 277 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 277 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 277 "declarative_execution.m"
{
#line 277 "declarative_execution.m"
  {
#line 277 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 277 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 277 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_7 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 277 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_6 == mdb__declarative_execution__CastY_7);
#line 277 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 8656 "mdb.declarative_execution.c"
      *mdb__declarative_execution__HeadVar__1_1 = (MR_Integer) 0;
#line 277 "declarative_execution.m"
    else
#line 277 "declarative_execution.m"
      {
#line 277 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 277 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_5_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 277 "declarative_execution.m"
        {
#line 277 "declarative_execution.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__V_4_4, mdb__declarative_execution__V_5_5);
#line 277 "declarative_execution.m"
          return;
        }
#line 277 "declarative_execution.m"
      }
#line 277 "declarative_execution.m"
  }
#line 277 "declarative_execution.m"
}

#line 277 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____implicit_tree_info_0_0(
#line 277 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 277 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 277 "declarative_execution.m"
{
#line 277 "declarative_execution.m"
  {
#line 277 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 277 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastX_5 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 277 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__CastY_6 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 277 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__CastX_5 == mdb__declarative_execution__CastY_6);
#line 277 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 277 "declarative_execution.m"
      mdb__declarative_execution__succeeded = MR_TRUE;
#line 277 "declarative_execution.m"
    else
#line 277 "declarative_execution.m"
      {
#line 277 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_3_3 = (MR_Integer) mdb__declarative_execution__HeadVar__1_1;
#line 277 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_4_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;

#line 8714 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_3_3 == mdb__declarative_execution__V_4_4);
#line 277 "declarative_execution.m"
      }
#line 277 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 277 "declarative_execution.m"
  }
#line 277 "declarative_execution.m"
}

#line 308 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____goal_status_0_0(
#line 308 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__1_1,
#line 308 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 308 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3)
#line 308 "declarative_execution.m"
{
#line 308 "declarative_execution.m"
  {
#line 308 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 308 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar1_4 = (MR_Integer) mdb__declarative_execution__HeadVar__2_2;
#line 308 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__Cast_HeadVar2_5 = (MR_Integer) mdb__declarative_execution__HeadVar__3_3;

#line 308 "declarative_execution.m"
    {
#line 308 "declarative_execution.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__Cast_HeadVar1_4, mdb__declarative_execution__Cast_HeadVar2_5);
#line 308 "declarative_execution.m"
      return;
    }
#line 308 "declarative_execution.m"
  }
#line 308 "declarative_execution.m"
}

#line 308 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution____Unify____goal_status_0_0(
#line 308 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_1,
#line 308 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2)
#line 308 "declarative_execution.m"
{
#line 8766 "mdb.declarative_execution.c"
  {
#line 8768 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__HeadVar__2_1 == mdb__declarative_execution__HeadVar__2_2);

#line 8771 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 8773 "mdb.declarative_execution.c"
  }
#line 308 "declarative_execution.m"
}

#line 314 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution____Compare____event_number_0_0(
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
mdb__declarative_execution____Unify____event_number_0_0(
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

#line 1558 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(
#line 1558 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1558 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ArgNum_2,
#line 1558 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1558 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__UserArgNum_4)
#line 1558 "declarative_execution.m"
{
#line 1561 "declarative_execution.m"
  while (MR_TRUE)
#line 1561 "declarative_execution.m"
    {
#line 1561 "declarative_execution.m"
      /* tailcall optimized into a loop */
#line 1561 "declarative_execution.m"
      {
#line 1561 "declarative_execution.m"
        MR_bool mdb__declarative_execution__succeeded;

#line 1561 "declarative_execution.m"
        if ((mdb__declarative_execution__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1561 "declarative_execution.m"
          {
#line 1562 "declarative_execution.m"
            {
#line 1562 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[33])));
#line 1562 "declarative_execution.m"
              return;
            }
#line 1561 "declarative_execution.m"
          }
#line 1561 "declarative_execution.m"
        else
#line 1564 "declarative_execution.m"
          {
#line 1564 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1564 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1564 "declarative_execution.m"
            MR_Word mdb__declarative_execution__UserVis_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 0)));
#line 1565 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 1)));
#line 1565 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 2)));

#line 1569 "declarative_execution.m"
            if ((mdb__declarative_execution__UserVis_16 == (MR_Integer) 0))
#line 1567 "declarative_execution.m"
              {
#line 1567 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_23_23 = (mdb__declarative_execution__ArgNum_2 - (MR_Integer) 1);

#line 1568 "declarative_execution.m"
                /* direct tailcall eliminated */
#line 1568 "declarative_execution.m"
                {
#line 1568 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1568 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__ArgNum__tmp_copy_2 = mdb__declarative_execution__V_23_23;

#line 1568 "declarative_execution.m"
                  mdb__declarative_execution__ArgNum_2 = mdb__declarative_execution__ArgNum__tmp_copy_2;
#line 1568 "declarative_execution.m"
                  mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1568 "declarative_execution.m"
                }
#line 1568 "declarative_execution.m"
                continue;
#line 1567 "declarative_execution.m"
              }
#line 1569 "declarative_execution.m"
            else
#line 1573 "declarative_execution.m"
              {
#line 1571 "declarative_execution.m"
                mdb__declarative_execution__succeeded = (mdb__declarative_execution__ArgNum_2 == (MR_Integer) 1);
#line 1573 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 1572 "declarative_execution.m"
                  *mdb__declarative_execution__UserArgNum_4 = mdb__declarative_execution__CurArgNum_3;
#line 1573 "declarative_execution.m"
                else
#line 1574 "declarative_execution.m"
                  {
#line 1574 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_19_19 = (mdb__declarative_execution__ArgNum_2 - (MR_Integer) 1);
#line 1574 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_20_20 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

#line 1574 "declarative_execution.m"
                    /* direct tailcall eliminated */
#line 1574 "declarative_execution.m"
                    {
#line 1574 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1574 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__ArgNum__tmp_copy_2 = mdb__declarative_execution__V_19_19;
#line 1574 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_20_20;

#line 1574 "declarative_execution.m"
                      mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
#line 1574 "declarative_execution.m"
                      mdb__declarative_execution__ArgNum_2 = mdb__declarative_execution__ArgNum__tmp_copy_2;
#line 1574 "declarative_execution.m"
                      mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1574 "declarative_execution.m"
                    }
#line 1574 "declarative_execution.m"
                    continue;
#line 1574 "declarative_execution.m"
                  }
#line 1573 "declarative_execution.m"
              }
#line 1564 "declarative_execution.m"
          }
#line 1561 "declarative_execution.m"
      }
#line 1561 "declarative_execution.m"
      break;
#line 1561 "declarative_execution.m"
    }
#line 1558 "declarative_execution.m"
}

#line 1535 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(
#line 1535 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1535 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SearchUserHeadVarNum_2,
#line 1535 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__CurArgNum_3,
#line 1535 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__ArgNum_4)
#line 1535 "declarative_execution.m"
{
#line 1538 "declarative_execution.m"
  while (MR_TRUE)
#line 1538 "declarative_execution.m"
    {
#line 1538 "declarative_execution.m"
      /* tailcall optimized into a loop */
#line 1538 "declarative_execution.m"
      {
#line 1538 "declarative_execution.m"
        MR_bool mdb__declarative_execution__succeeded;

#line 1538 "declarative_execution.m"
        if ((mdb__declarative_execution__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1538 "declarative_execution.m"
          {
#line 1539 "declarative_execution.m"
            {
#line 1539 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[32])));
#line 1539 "declarative_execution.m"
              return;
            }
#line 1538 "declarative_execution.m"
          }
#line 1538 "declarative_execution.m"
        else
#line 1542 "declarative_execution.m"
          {
#line 1542 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Arg_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1542 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Args_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1542 "declarative_execution.m"
            MR_Word mdb__declarative_execution__UserVis_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 0)));
#line 1543 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 1)));
#line 1543 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_11, (MR_Integer) 2)));

#line 1548 "declarative_execution.m"
            if ((mdb__declarative_execution__UserVis_16 == (MR_Integer) 0))
#line 1545 "declarative_execution.m"
              {
#line 1545 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_23_23 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

#line 1546 "declarative_execution.m"
                /* direct tailcall eliminated */
#line 1546 "declarative_execution.m"
                {
#line 1546 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1546 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_23_23;

#line 1546 "declarative_execution.m"
                  mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
#line 1546 "declarative_execution.m"
                  mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1546 "declarative_execution.m"
                }
#line 1546 "declarative_execution.m"
                continue;
#line 1545 "declarative_execution.m"
              }
#line 1548 "declarative_execution.m"
            else
#line 1552 "declarative_execution.m"
              {
#line 1550 "declarative_execution.m"
                mdb__declarative_execution__succeeded = (mdb__declarative_execution__SearchUserHeadVarNum_2 == (MR_Integer) 1);
#line 1552 "declarative_execution.m"
                if (mdb__declarative_execution__succeeded)
#line 1551 "declarative_execution.m"
                  *mdb__declarative_execution__ArgNum_4 = mdb__declarative_execution__CurArgNum_3;
#line 1552 "declarative_execution.m"
                else
#line 1553 "declarative_execution.m"
                  {
#line 1553 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_19_19 = (mdb__declarative_execution__SearchUserHeadVarNum_2 - (MR_Integer) 1);
#line 1553 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_20_20 = (mdb__declarative_execution__CurArgNum_3 + (MR_Integer) 1);

#line 1553 "declarative_execution.m"
                    /* direct tailcall eliminated */
#line 1553 "declarative_execution.m"
                    {
#line 1553 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__HeadVar__1__tmp_copy_1 = mdb__declarative_execution__Args_12;
#line 1553 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__SearchUserHeadVarNum__tmp_copy_2 = mdb__declarative_execution__V_19_19;
#line 1553 "declarative_execution.m"
                      MR_Integer mdb__declarative_execution__CurArgNum__tmp_copy_3 = mdb__declarative_execution__V_20_20;

#line 1553 "declarative_execution.m"
                      mdb__declarative_execution__CurArgNum_3 = mdb__declarative_execution__CurArgNum__tmp_copy_3;
#line 1553 "declarative_execution.m"
                      mdb__declarative_execution__SearchUserHeadVarNum_2 = mdb__declarative_execution__SearchUserHeadVarNum__tmp_copy_2;
#line 1553 "declarative_execution.m"
                      mdb__declarative_execution__HeadVar__1_1 = mdb__declarative_execution__HeadVar__1__tmp_copy_1;
#line 1553 "declarative_execution.m"
                    }
#line 1553 "declarative_execution.m"
                    continue;
#line 1553 "declarative_execution.m"
                  }
#line 1552 "declarative_execution.m"
              }
#line 1542 "declarative_execution.m"
          }
#line 1538 "declarative_execution.m"
      }
#line 1538 "declarative_execution.m"
      break;
#line 1538 "declarative_execution.m"
    }
#line 1535 "declarative_execution.m"
}

#line 1459 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__convert_node_2_p_0(
#line 1459 "declarative_execution.m"
  MR_Word mdb__declarative_execution__N1_1,
#line 1459 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__N2_2)
#line 1459 "declarative_execution.m"
{
#line 1462 "declarative_execution.m"
  {
#line 1462 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1465 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__convert_node_2_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__N1_1 ;
		{
#line 1465 "declarative_execution.m"

    N2 = N1;

#line 9130 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__N2_2  = N2;
#line 1465 "declarative_execution.m"
}
#line 1462 "declarative_execution.m"
  }
#line 1459 "declarative_execution.m"
}

#line 1447 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_id_to_key_2_p_0(
#line 1447 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_1,
#line 1447 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Key_2)
#line 1447 "declarative_execution.m"
{
#line 1449 "declarative_execution.m"
  {
#line 1449 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1452 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_id_to_key_2_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__Id_1 ;
		{
#line 1452 "declarative_execution.m"

    Key = (MR_Integer) Id;

#line 9169 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__Key_2  = Key;
#line 1452 "declarative_execution.m"
}
#line 1449 "declarative_execution.m"
  }
#line 1447 "declarative_execution.m"
}

#line 1433 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__node_map_4_p_0(
#line 1433 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_5,
#line 1433 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_6,
#line 1433 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__3_3,
#line 1433 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Map_8)
#line 1433 "declarative_execution.m"
{
#line 1436 "declarative_execution.m"
  while (MR_TRUE)
#line 1436 "declarative_execution.m"
    {
#line 1436 "declarative_execution.m"
      /* tailcall optimized into a loop */
#line 1436 "declarative_execution.m"
      {
#line 1436 "declarative_execution.m"
        MR_bool mdb__declarative_execution__succeeded;
#line 1436 "declarative_execution.m"
        MR_Word mdb__declarative_execution__Map0_7 = (MR_Word) mdb__declarative_execution__HeadVar__3_3;
#line 1443 "declarative_execution.m"
        MR_Word mdb__declarative_execution__Node1_9;

#line 897 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__NodeId_6 ;
		{
#line 897 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);

#line 9224 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__declarative_execution__Node1_9  = Node;
#line 897 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 1443 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 1438 "declarative_execution.m"
          {
#line 1438 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Key_10;
#line 1438 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Node2_11;
#line 1438 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Map1_12;
#line 1438 "declarative_execution.m"
            MR_Word mdb__declarative_execution__Next_13;
#line 1438 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_14_14;

#line 1452 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__NodeId_6 ;
		{
#line 1452 "declarative_execution.m"

    Key = (MR_Integer) Id;

#line 9262 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Key_10  = Key;
#line 1452 "declarative_execution.m"
}
#line 1465 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__node_map_4_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__Node1_9 ;
		{
#line 1465 "declarative_execution.m"

    N2 = N1;

#line 9282 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Node2_11  = N2;
#line 1465 "declarative_execution.m"
}
#line 1440 "declarative_execution.m"
            {
#line 1440 "declarative_execution.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], ((MR_Box) (mdb__declarative_execution__Key_10)), ((MR_Box) (mdb__declarative_execution__Node2_11)), mdb__declarative_execution__Map0_7, &mdb__declarative_execution__Map1_12);
            }
#line 1477 "declarative_execution.m"
            if (((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 0))))
#line 1477 "declarative_execution.m"
              {
#line 1477 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_29_29;
#line 1477 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_30_30;
#line 1477 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_31_31;
#line 1477 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_32_32;
#line 1477 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_33_33;
#line 1477 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_34_34;
#line 1477 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_35_35;
#line 1477 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_36_36;
#line 1477 "declarative_execution.m"
                MR_Integer mdb__declarative_execution__V_37_37;

#line 1477 "declarative_execution.m"
                mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
#line 1477 "declarative_execution.m"
                mdb__declarative_execution__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1477 "declarative_execution.m"
                mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1477 "declarative_execution.m"
                mdb__declarative_execution__V_31_31 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1477 "declarative_execution.m"
                mdb__declarative_execution__V_32_32 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1477 "declarative_execution.m"
                mdb__declarative_execution__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1477 "declarative_execution.m"
                mdb__declarative_execution__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1477 "declarative_execution.m"
                mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
#line 1477 "declarative_execution.m"
                mdb__declarative_execution__V_36_36 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 8)));
#line 1477 "declarative_execution.m"
                mdb__declarative_execution__V_37_37 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node1_9, (MR_Integer) 9)));
#line 1477 "declarative_execution.m"
              }
#line 1477 "declarative_execution.m"
            else
#line 1477 "declarative_execution.m"
              if (((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 1))))
#line 1478 "declarative_execution.m"
                {
#line 1478 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_39_39;
#line 1478 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_40_40;
#line 1478 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_41_41;
#line 1478 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_42_42;
#line 1478 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_43_43;
#line 1478 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_44_44;
#line 1478 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_45_45;

#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_40_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_43_43 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_44_44 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1478 "declarative_execution.m"
                  mdb__declarative_execution__V_45_45 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
#line 1478 "declarative_execution.m"
                }
#line 1477 "declarative_execution.m"
              else
#line 1477 "declarative_execution.m"
                if (((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 2))))
#line 1479 "declarative_execution.m"
                  {
#line 1479 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__V_47_47;
#line 1479 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_48_48;
#line 1479 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_49_49;
#line 1479 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_50_50;

#line 1479 "declarative_execution.m"
                    mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 0)));
#line 1479 "declarative_execution.m"
                    mdb__declarative_execution__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1479 "declarative_execution.m"
                    mdb__declarative_execution__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1479 "declarative_execution.m"
                    mdb__declarative_execution__V_49_49 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1479 "declarative_execution.m"
                    mdb__declarative_execution__V_50_50 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1479 "declarative_execution.m"
                  }
#line 1477 "declarative_execution.m"
                else
#line 1477 "declarative_execution.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1485 "declarative_execution.m"
                    {
#line 1485 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_72_72;
#line 1485 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_73_73;

#line 1485 "declarative_execution.m"
                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1485 "declarative_execution.m"
                      mdb__declarative_execution__V_72_72 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1485 "declarative_execution.m"
                      mdb__declarative_execution__V_73_73 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1485 "declarative_execution.m"
                    }
#line 1477 "declarative_execution.m"
                  else
#line 1477 "declarative_execution.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1487 "declarative_execution.m"
                      {
#line 1487 "declarative_execution.m"
                        MR_Word mdb__declarative_execution__V_78_78;
#line 1487 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_79_79;

#line 1487 "declarative_execution.m"
                        mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1487 "declarative_execution.m"
                        mdb__declarative_execution__V_78_78 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1487 "declarative_execution.m"
                        mdb__declarative_execution__V_79_79 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1487 "declarative_execution.m"
                      }
#line 1477 "declarative_execution.m"
                    else
#line 1477 "declarative_execution.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1481 "declarative_execution.m"
                        {
#line 1481 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_58_58;
#line 1481 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_59_59;
#line 1481 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_60_60;
#line 1481 "declarative_execution.m"
                          MR_Integer mdb__declarative_execution__V_61_61;
#line 1481 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_62_62;
#line 1481 "declarative_execution.m"
                          MR_Integer mdb__declarative_execution__V_63_63;

#line 1481 "declarative_execution.m"
                          mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1481 "declarative_execution.m"
                          mdb__declarative_execution__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1481 "declarative_execution.m"
                          mdb__declarative_execution__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1481 "declarative_execution.m"
                          mdb__declarative_execution__V_60_60 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1481 "declarative_execution.m"
                          mdb__declarative_execution__V_61_61 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1481 "declarative_execution.m"
                          mdb__declarative_execution__V_62_62 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1481 "declarative_execution.m"
                          mdb__declarative_execution__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 7)));
#line 1481 "declarative_execution.m"
                        }
#line 1477 "declarative_execution.m"
                      else
#line 1477 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1480 "declarative_execution.m"
                          {
#line 1480 "declarative_execution.m"
                            MR_Word mdb__declarative_execution__V_52_52;
#line 1480 "declarative_execution.m"
                            MR_Word mdb__declarative_execution__V_53_53;
#line 1480 "declarative_execution.m"
                            MR_Integer mdb__declarative_execution__V_54_54;
#line 1480 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_55_55;
#line 1480 "declarative_execution.m"
                            MR_Integer mdb__declarative_execution__V_56_56;

#line 1480 "declarative_execution.m"
                            mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1480 "declarative_execution.m"
                            mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1480 "declarative_execution.m"
                            mdb__declarative_execution__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1480 "declarative_execution.m"
                            mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 4)));
#line 1480 "declarative_execution.m"
                            mdb__declarative_execution__V_55_55 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 5)));
#line 1480 "declarative_execution.m"
                            mdb__declarative_execution__V_56_56 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 6)));
#line 1480 "declarative_execution.m"
                          }
#line 1477 "declarative_execution.m"
                        else
#line 1477 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1483 "declarative_execution.m"
                            {
#line 1483 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_67_67;

#line 1483 "declarative_execution.m"
                              mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1483 "declarative_execution.m"
                              mdb__declarative_execution__V_67_67 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1483 "declarative_execution.m"
                            }
#line 1477 "declarative_execution.m"
                          else
#line 1477 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1484 "declarative_execution.m"
                              {
#line 1484 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_69_69;
#line 1484 "declarative_execution.m"
                                MR_Word mdb__declarative_execution__V_70_70;

#line 1484 "declarative_execution.m"
                                mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1484 "declarative_execution.m"
                                mdb__declarative_execution__V_69_69 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1484 "declarative_execution.m"
                                mdb__declarative_execution__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1484 "declarative_execution.m"
                              }
#line 1477 "declarative_execution.m"
                            else
#line 1477 "declarative_execution.m"
                              if (((((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1488 "declarative_execution.m"
                                {
#line 1488 "declarative_execution.m"
                                  MR_Box mdb__declarative_execution__V_81_81;
#line 1488 "declarative_execution.m"
                                  MR_Word mdb__declarative_execution__V_82_82;

#line 1488 "declarative_execution.m"
                                  mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1488 "declarative_execution.m"
                                  mdb__declarative_execution__V_81_81 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1488 "declarative_execution.m"
                                  mdb__declarative_execution__V_82_82 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1488 "declarative_execution.m"
                                }
#line 1477 "declarative_execution.m"
                              else
#line 1477 "declarative_execution.m"
                                if (((((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1490 "declarative_execution.m"
                                  {
#line 1490 "declarative_execution.m"
                                    MR_Word mdb__declarative_execution__V_87_87;
#line 1490 "declarative_execution.m"
                                    MR_Box mdb__declarative_execution__V_88_88;

#line 1490 "declarative_execution.m"
                                    mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1490 "declarative_execution.m"
                                    mdb__declarative_execution__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1490 "declarative_execution.m"
                                    mdb__declarative_execution__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1490 "declarative_execution.m"
                                  }
#line 1477 "declarative_execution.m"
                                else
#line 1477 "declarative_execution.m"
                                  if (((((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1489 "declarative_execution.m"
                                    {
#line 1489 "declarative_execution.m"
                                      MR_Word mdb__declarative_execution__V_84_84;
#line 1489 "declarative_execution.m"
                                      MR_Box mdb__declarative_execution__V_85_85;

#line 1489 "declarative_execution.m"
                                      mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1489 "declarative_execution.m"
                                      mdb__declarative_execution__V_84_84 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1489 "declarative_execution.m"
                                      mdb__declarative_execution__V_85_85 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1489 "declarative_execution.m"
                                    }
#line 1477 "declarative_execution.m"
                                  else
#line 1477 "declarative_execution.m"
                                    if (((((MR_tag((MR_Word) mdb__declarative_execution__Node1_9)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1482 "declarative_execution.m"
                                      {
#line 1482 "declarative_execution.m"
                                        MR_Box mdb__declarative_execution__V_65_65;

#line 1482 "declarative_execution.m"
                                        mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1482 "declarative_execution.m"
                                        mdb__declarative_execution__V_65_65 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1482 "declarative_execution.m"
                                      }
#line 1477 "declarative_execution.m"
                                    else
#line 1486 "declarative_execution.m"
                                      {
#line 1486 "declarative_execution.m"
                                        MR_Word mdb__declarative_execution__V_75_75;
#line 1486 "declarative_execution.m"
                                        MR_Box mdb__declarative_execution__V_76_76;

#line 1486 "declarative_execution.m"
                                        mdb__declarative_execution__Next_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 1)));
#line 1486 "declarative_execution.m"
                                        mdb__declarative_execution__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 2)));
#line 1486 "declarative_execution.m"
                                        mdb__declarative_execution__V_76_76 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node1_9, (MR_Integer) 3)));
#line 1486 "declarative_execution.m"
                                      }
#line 1442 "declarative_execution.m"
            mdb__declarative_execution__V_14_14 = (MR_Word) mdb__declarative_execution__Map1_12;
#line 1442 "declarative_execution.m"
            /* direct tailcall eliminated */
#line 1442 "declarative_execution.m"
            {
#line 1442 "declarative_execution.m"
              MR_Word mdb__declarative_execution__NodeId__tmp_copy_6 = mdb__declarative_execution__Next_13;
#line 1442 "declarative_execution.m"
              MR_Word mdb__declarative_execution__HeadVar__3__tmp_copy_3 = mdb__declarative_execution__V_14_14;

#line 1442 "declarative_execution.m"
              mdb__declarative_execution__HeadVar__3_3 = mdb__declarative_execution__HeadVar__3__tmp_copy_3;
#line 1442 "declarative_execution.m"
              mdb__declarative_execution__NodeId_6 = mdb__declarative_execution__NodeId__tmp_copy_6;
#line 1442 "declarative_execution.m"
            }
#line 1442 "declarative_execution.m"
            continue;
#line 1438 "declarative_execution.m"
          }
#line 1443 "declarative_execution.m"
        else
#line 1444 "declarative_execution.m"
          *mdb__declarative_execution__Map_8 = mdb__declarative_execution__HeadVar__3_3;
#line 1436 "declarative_execution.m"
      }
#line 1436 "declarative_execution.m"
      break;
#line 1436 "declarative_execution.m"
    }
#line 1433 "declarative_execution.m"
}

#line 1348 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_no_value_4_p_0(
#line 1348 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_5,
#line 1348 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_6,
#line 1348 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_7,
#line 1348 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__4_4)
#line 1348 "declarative_execution.m"
{
#line 1353 "declarative_execution.m"
  {
#line 1353 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = (mdb__declarative_execution__ProgVis_6 == (MR_Integer) 0);
#line 1353 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Arg_8;
#line 1353 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;

#line 1360 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1362 "declarative_execution.m"
      mdb__declarative_execution__V_9_9 = (MR_Integer) 0;
#line 1360 "declarative_execution.m"
    else
#line 1364 "declarative_execution.m"
      mdb__declarative_execution__V_9_9 = (MR_Integer) 1;
#line 1354 "declarative_execution.m"
    {
#line 1354 "declarative_execution.m"
      mdb__declarative_execution__Arg_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1354 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 0) = ((MR_Box) (mdb__declarative_execution__V_9_9));
#line 1354 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 1) = ((MR_Box) (mdb__declarative_execution__HldsNum_5));
#line 1354 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_8, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 1354 "declarative_execution.m"
    }
#line 1353 "declarative_execution.m"
    {
#line 1353 "declarative_execution.m"
      MR_Word base;
#line 1353 "declarative_execution.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1353 "declarative_execution.m"
      *mdb__declarative_execution__HeadVar__4_4 = base;
#line 1353 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__Arg_8));
#line 1353 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_execution__Args_7));
#line 1353 "declarative_execution.m"
    }
#line 1353 "declarative_execution.m"
  }
#line 1348 "declarative_execution.m"
}

#line 1336 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__add_trace_atom_arg_value_5_p_0(
#line 1336 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__HldsNum_6,
#line 1336 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__ProgVis_7,
#line 1336 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Val_8,
#line 1336 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args_9,
#line 1336 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__5_5)
#line 1336 "declarative_execution.m"
{
#line 1341 "declarative_execution.m"
  {
#line 1341 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1341 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Arg_10;
#line 1341 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Rep_11;
#line 1341 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 1341 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;

#line 1342 "declarative_execution.m"
    {
#line 1342 "declarative_execution.m"
      mdb__term_rep__univ_to_rep_2_p_0(mdb__declarative_execution__Val_8, &mdb__declarative_execution__Rep_11);
    }
#line 1361 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__ProgVis_7 == (MR_Integer) 0);
#line 1360 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1362 "declarative_execution.m"
      mdb__declarative_execution__V_12_12 = (MR_Integer) 0;
#line 1360 "declarative_execution.m"
    else
#line 1364 "declarative_execution.m"
      mdb__declarative_execution__V_12_12 = (MR_Integer) 1;
#line 1343 "declarative_execution.m"
    {
#line 1343 "declarative_execution.m"
      mdb__declarative_execution__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1343 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_13_13, 0) = ((MR_Box) (mdb__declarative_execution__Rep_11));
#line 1343 "declarative_execution.m"
    }
#line 1343 "declarative_execution.m"
    {
#line 1343 "declarative_execution.m"
      mdb__declarative_execution__Arg_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1343 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 0) = ((MR_Box) (mdb__declarative_execution__V_12_12));
#line 1343 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 1) = ((MR_Box) (mdb__declarative_execution__HldsNum_6));
#line 1343 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Arg_10, 2) = ((MR_Box) (mdb__declarative_execution__V_13_13));
#line 1343 "declarative_execution.m"
    }
#line 1341 "declarative_execution.m"
    {
#line 1341 "declarative_execution.m"
      MR_Word base;
#line 1341 "declarative_execution.m"
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1341 "declarative_execution.m"
      *mdb__declarative_execution__HeadVar__5_5 = base;
#line 1341 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__Arg_10));
#line 1341 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdb__declarative_execution__Args_9));
#line 1341 "declarative_execution.m"
    }
#line 1341 "declarative_execution.m"
  }
#line 1336 "declarative_execution.m"
}

#line 1323 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__init_trace_atom_args_0_f_0(void)
#line 1323 "declarative_execution.m"
{
#line 1328 "declarative_execution.m"
  {
#line 1328 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1328 "declarative_execution.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1328 "declarative_execution.m"
  }
#line 1323 "declarative_execution.m"
}

#line 1311 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__null_trace_node_id_1_p_0(
#line 1311 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Id_1)
#line 1311 "declarative_execution.m"
{
#line 1313 "declarative_execution.m"
  {
#line 1313 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1316 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__null_trace_node_id_1_p_0

	MR_Word Id;

		{
#line 1316 "declarative_execution.m"

    Id = (MR_Word) NULL;

#line 9849 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__Id_1  = Id;
#line 1316 "declarative_execution.m"
}
#line 1313 "declarative_execution.m"
  }
#line 1311 "declarative_execution.m"
}

#line 1302 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_fail_node_3_f_0(
#line 1302 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1302 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1302 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1302 "declarative_execution.m"
{
#line 1309 "declarative_execution.m"
  {
#line 1309 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1309 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1309 "declarative_execution.m"
    {
#line 1309 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1309 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 10));
#line 1309 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1309 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Neg_6));
#line 1309 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1309 "declarative_execution.m"
    }
#line 1309 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1309 "declarative_execution.m"
  }
#line 1302 "declarative_execution.m"
}

#line 1293 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_succ_node_3_f_0(
#line 1293 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1293 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg_6,
#line 1293 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1293 "declarative_execution.m"
{
#line 1300 "declarative_execution.m"
  {
#line 1300 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1300 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1300 "declarative_execution.m"
    {
#line 1300 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1300 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
#line 1300 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1300 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Neg_6));
#line 1300 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1300 "declarative_execution.m"
    }
#line 1300 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1300 "declarative_execution.m"
  }
#line 1293 "declarative_execution.m"
}

#line 1285 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_neg_node_2_f_0(
#line 1285 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1285 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1285 "declarative_execution.m"
{
#line 1291 "declarative_execution.m"
  {
#line 1291 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1291 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1291 "declarative_execution.m"
    {
#line 1291 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1291 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 8));
#line 1291 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1291 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1291 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1291 "declarative_execution.m"
    }
#line 1291 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1291 "declarative_execution.m"
  }
#line 1285 "declarative_execution.m"
}

#line 1276 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_else_node_3_f_0(
#line 1276 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1276 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1276 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1276 "declarative_execution.m"
{
#line 1283 "declarative_execution.m"
  {
#line 1283 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1283 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1283 "declarative_execution.m"
    {
#line 1283 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1283 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 7));
#line 1283 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1283 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Cond_6));
#line 1283 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1283 "declarative_execution.m"
    }
#line 1283 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1283 "declarative_execution.m"
  }
#line 1276 "declarative_execution.m"
}

#line 1267 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_then_node_3_f_0(
#line 1267 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_5,
#line 1267 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond_6,
#line 1267 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_7)
#line 1267 "declarative_execution.m"
{
#line 1274 "declarative_execution.m"
  {
#line 1274 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1274 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__4_4;

#line 1274 "declarative_execution.m"
    {
#line 1274 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1274 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 6));
#line 1274 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_5));
#line 1274 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 2) = ((MR_Box) (mdb__declarative_execution__Cond_6));
#line 1274 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__4_4, 3) = ((MR_Box) (mdb__declarative_execution__Label_7));
#line 1274 "declarative_execution.m"
    }
#line 1274 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__4_4;
#line 1274 "declarative_execution.m"
  }
#line 1267 "declarative_execution.m"
}

#line 1259 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_cond_node_2_f_0(
#line 1259 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1259 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1259 "declarative_execution.m"
{
#line 1265 "declarative_execution.m"
  {
#line 1265 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1265 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1265 "declarative_execution.m"
    {
#line 1265 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1265 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 5));
#line 1265 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1265 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1265 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 3) = ((MR_Box) ((MR_Integer) 2));
#line 1265 "declarative_execution.m"
    }
#line 1265 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1265 "declarative_execution.m"
  }
#line 1259 "declarative_execution.m"
}

#line 1243 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_later_disj_node_4_f_0(
#line 1243 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_6,
#line 1243 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1243 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_8,
#line 1243 "declarative_execution.m"
  MR_Word mdb__declarative_execution__PrevDisj_9)
#line 1243 "declarative_execution.m"
{
#line 1250 "declarative_execution.m"
  {
#line 1250 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1250 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__5_5;
#line 1250 "declarative_execution.m"
    MR_Word mdb__declarative_execution__FirstDisj_10;
#line 1250 "declarative_execution.m"
    MR_Word mdb__declarative_execution__PrevDisjNode_11;

#line 1251 "declarative_execution.m"
    {
#line 1251 "declarative_execution.m"
      mdb__declarative_execution__disj_node_from_id_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__Store_6)), ((MR_Box) (mdb__declarative_execution__PrevDisj_9)), &mdb__declarative_execution__PrevDisjNode_11);
    }
#line 1255 "declarative_execution.m"
    if (((((MR_tag((MR_Word) mdb__declarative_execution__PrevDisjNode_11)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1254 "declarative_execution.m"
      mdb__declarative_execution__FirstDisj_10 = mdb__declarative_execution__PrevDisj_9;
#line 1255 "declarative_execution.m"
    else
#line 1256 "declarative_execution.m"
      {
#line 1256 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 1)));
#line 1256 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 2)));

#line 1256 "declarative_execution.m"
        mdb__declarative_execution__FirstDisj_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__PrevDisjNode_11, (MR_Integer) 3)));
#line 1256 "declarative_execution.m"
      }
#line 1250 "declarative_execution.m"
    {
#line 1250 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
#line 1250 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 4));
#line 1250 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_7));
#line 1250 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 2) = ((MR_Box) (mdb__declarative_execution__Label_8));
#line 1250 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__5_5, 3) = ((MR_Box) (mdb__declarative_execution__FirstDisj_10));
#line 1250 "declarative_execution.m"
    }
#line 1250 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__5_5;
#line 1250 "declarative_execution.m"
  }
#line 1243 "declarative_execution.m"
}

#line 1234 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_first_disj_node_2_f_0(
#line 1234 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1234 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1234 "declarative_execution.m"
{
#line 1241 "declarative_execution.m"
  {
#line 1241 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1241 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1241 "declarative_execution.m"
    {
#line 1241 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1241 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
#line 1241 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1241 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1241 "declarative_execution.m"
    }
#line 1241 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1241 "declarative_execution.m"
  }
#line 1234 "declarative_execution.m"
}

#line 1226 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_switch_node_2_f_0(
#line 1226 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_4,
#line 1226 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_5)
#line 1226 "declarative_execution.m"
{
#line 1232 "declarative_execution.m"
  {
#line 1232 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1232 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;

#line 1232 "declarative_execution.m"
    {
#line 1232 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 1232 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 1232 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_4));
#line 1232 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__3_3, 2) = ((MR_Box) (mdb__declarative_execution__Label_5));
#line 1232 "declarative_execution.m"
    }
#line 1232 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1232 "declarative_execution.m"
  }
#line 1226 "declarative_execution.m"
}

#line 1213 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__construct_excp_node_8_p_0(
#line 1213 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_9,
#line 1213 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_10,
#line 1213 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_11,
#line 1213 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exception_12,
#line 1213 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_13,
#line 1213 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_14,
#line 1213 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_15,
#line 1213 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Excp_16)
#line 1213 "declarative_execution.m"
{
#line 1221 "declarative_execution.m"
  {
#line 1221 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1221 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ExceptionRep_17;

#line 1222 "declarative_execution.m"
    {
#line 1222 "declarative_execution.m"
      mdb__term_rep__univ_to_rep_2_p_0(mdb__declarative_execution__Exception_12, &mdb__declarative_execution__ExceptionRep_17);
    }
#line 1223 "declarative_execution.m"
    {
#line 1223 "declarative_execution.m"
      MR_Word base;
#line 1223 "declarative_execution.m"
      base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1223 "declarative_execution.m"
      *mdb__declarative_execution__Excp_16 = base;
#line 1223 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
#line 1223 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_9));
#line 1223 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdb__declarative_execution__Call_10));
#line 1223 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 3) = ((MR_Box) (mdb__declarative_execution__MaybeRedo_11));
#line 1223 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 4) = ((MR_Box) (mdb__declarative_execution__ExceptionRep_17));
#line 1223 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 5) = ((MR_Box) (mdb__declarative_execution__EventNo_13));
#line 1223 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 6) = ((MR_Box) (mdb__declarative_execution__Label_14));
#line 1223 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), base, 7) = ((MR_Box) (mdb__declarative_execution__Suspicion_15));
#line 1223 "declarative_execution.m"
    }
#line 1221 "declarative_execution.m"
  }
#line 1213 "declarative_execution.m"
}

#line 1203 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_fail_node_6_f_0(
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_8,
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_9,
#line 1203 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Redo_10,
#line 1203 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_11,
#line 1203 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_12,
#line 1203 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_13)
#line 1203 "declarative_execution.m"
{
#line 1211 "declarative_execution.m"
  {
#line 1211 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1211 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__7_7;

#line 1211 "declarative_execution.m"
    {
#line 1211 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 7 * sizeof(MR_Word)), NULL, NULL));
#line 1211 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 1211 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 1) = ((MR_Box) (mdb__declarative_execution__Preceding_8));
#line 1211 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 2) = ((MR_Box) (mdb__declarative_execution__Call_9));
#line 1211 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 3) = ((MR_Box) (mdb__declarative_execution__Redo_10));
#line 1211 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_11));
#line 1211 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 5) = ((MR_Box) (mdb__declarative_execution__Label_12));
#line 1211 "declarative_execution.m"
      MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__7_7, 6) = ((MR_Box) (mdb__declarative_execution__Suspicion_13));
#line 1211 "declarative_execution.m"
    }
#line 1211 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__7_7;
#line 1211 "declarative_execution.m"
  }
#line 1203 "declarative_execution.m"
}

#line 1194 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_redo_node_5_f_0(
#line 1194 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_7,
#line 1194 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Exit_8,
#line 1194 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Event_9,
#line 1194 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_10,
#line 1194 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_11)
#line 1194 "declarative_execution.m"
{
#line 1201 "declarative_execution.m"
  {
#line 1201 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1201 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__6_6;

#line 1201 "declarative_execution.m"
    {
#line 1201 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_7));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 1) = ((MR_Box) (mdb__declarative_execution__Exit_8));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 2) = ((MR_Box) (mdb__declarative_execution__Event_9));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 3) = ((MR_Box) (mdb__declarative_execution__Label_10));
#line 1201 "declarative_execution.m"
      MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__6_6, 4) = ((MR_Box) (mdb__declarative_execution__Suspicion_11));
#line 1201 "declarative_execution.m"
    }
#line 1201 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__6_6;
#line 1201 "declarative_execution.m"
  }
#line 1194 "declarative_execution.m"
}

#line 1182 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_exit_node_8_f_0(
#line 1182 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_10,
#line 1182 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_11,
#line 1182 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeRedo_12,
#line 1182 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_13,
#line 1182 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1182 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_15,
#line 1182 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_16,
#line 1182 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_17)
#line 1182 "declarative_execution.m"
{
#line 1191 "declarative_execution.m"
  {
#line 1191 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1191 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__9_9;

#line 1191 "declarative_execution.m"
    {
#line 1191 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 8 * sizeof(MR_Word)), NULL, NULL));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_10));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 1) = ((MR_Box) (mdb__declarative_execution__Call_11));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 2) = ((MR_Box) (mdb__declarative_execution__MaybeRedo_12));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 3) = ((MR_Box) (mdb__declarative_execution__AtomArgs_13));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_14));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 5) = ((MR_Box) (mdb__declarative_execution__Label_15));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 6) = ((MR_Box) (mdb__declarative_execution__IoSeqNum_16));
#line 1191 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__9_9, 7) = ((MR_Box) (mdb__declarative_execution__Suspicion_17));
#line 1191 "declarative_execution.m"
    }
#line 1191 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__9_9;
#line 1191 "declarative_execution.m"
  }
#line 1182 "declarative_execution.m"
}

#line 1176 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_no_maybe_label_0_f_0(void)
#line 1176 "declarative_execution.m"
{
#line 1180 "declarative_execution.m"
  {
#line 1180 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1180 "declarative_execution.m"
    return (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1180 "declarative_execution.m"
  }
#line 1176 "declarative_execution.m"
}

#line 1170 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__make_yes_maybe_label_1_f_0(
#line 1170 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_3)
#line 1170 "declarative_execution.m"
{
#line 1174 "declarative_execution.m"
  {
#line 1174 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1174 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__2_2;

#line 1174 "declarative_execution.m"
    {
#line 1174 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 1174 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, 0) = ((MR_Box) (mdb__declarative_execution__Label_3));
#line 1174 "declarative_execution.m"
    }
#line 1174 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__2_2;
#line 1174 "declarative_execution.m"
  }
#line 1170 "declarative_execution.m"
}

#line 1147 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__construct_call_node_9_f_0(
#line 1147 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Preceding_11,
#line 1147 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtomArgs_12,
#line 1147 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__SeqNo_13,
#line 1147 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__EventNo_14,
#line 1147 "declarative_execution.m"
  MR_Word mdb__declarative_execution__AtMaxDepth_15,
#line 1147 "declarative_execution.m"
  MR_Word mdb__declarative_execution__MaybeReturnLabel_16,
#line 1147 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Label_17,
#line 1147 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IoSeqNum_18,
#line 1147 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__Suspicion_19)
#line 1147 "declarative_execution.m"
{
#line 1155 "declarative_execution.m"
  {
#line 1155 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1155 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call_20;
#line 1155 "declarative_execution.m"
    MR_Word mdb__declarative_execution__MaybeImplicitTreeInfo_21;
#line 1155 "declarative_execution.m"
    MR_Word mdb__declarative_execution__LastInterface_22;

#line 1159 "declarative_execution.m"
    if ((mdb__declarative_execution__AtMaxDepth_15 == (MR_Integer) 0))
#line 1158 "declarative_execution.m"
      mdb__declarative_execution__MaybeImplicitTreeInfo_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 1159 "declarative_execution.m"
    else
#line 1160 "declarative_execution.m"
      {
#line 1164 "declarative_execution.m"
        mdb__declarative_execution__MaybeImplicitTreeInfo_21 = (MR_Word) MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_4[0]);
#line 1160 "declarative_execution.m"
      }
#line 1316 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__construct_call_node_9_f_0

	MR_Word Id;

		{
#line 1316 "declarative_execution.m"

    Id = (MR_Word) NULL;

#line 10548 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__LastInterface_22  = Id;
#line 1316 "declarative_execution.m"
}
#line 1167 "declarative_execution.m"
    {
#line 1167 "declarative_execution.m"
      mdb__declarative_execution__Call_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 10 * sizeof(MR_Word)), NULL, NULL);
#line 1167 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 0) = ((MR_Box) (mdb__declarative_execution__Preceding_11));
#line 1167 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 1) = ((MR_Box) (mdb__declarative_execution__LastInterface_22));
#line 1167 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 2) = ((MR_Box) (mdb__declarative_execution__AtomArgs_12));
#line 1167 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 3) = ((MR_Box) (mdb__declarative_execution__SeqNo_13));
#line 1167 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 4) = ((MR_Box) (mdb__declarative_execution__EventNo_14));
#line 1167 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 5) = ((MR_Box) (mdb__declarative_execution__MaybeImplicitTreeInfo_21));
#line 1167 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 6) = ((MR_Box) (mdb__declarative_execution__MaybeReturnLabel_16));
#line 1167 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 7) = ((MR_Box) (mdb__declarative_execution__Label_17));
#line 1167 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 8) = ((MR_Box) (mdb__declarative_execution__IoSeqNum_18));
#line 1167 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_20, 9) = ((MR_Box) (mdb__declarative_execution__Suspicion_19));
#line 1167 "declarative_execution.m"
    }
#line 1155 "declarative_execution.m"
    return mdb__declarative_execution__Call_20;
#line 1155 "declarative_execution.m"
  }
#line 1147 "declarative_execution.m"
}

#line 1131 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__print_trace_node_4_p_0(
#line 1131 "declarative_execution.m"
  MR_Word mdb__declarative_execution__OutStr_5,
#line 1131 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_6)
#line 1131 "declarative_execution.m"
{
#line 1137 "declarative_execution.m"
  {
#line 1137 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1137 "declarative_execution.m"
    MR_Word mdb__declarative_execution__CNode_8;

#line 1465 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__print_trace_node_4_p_0

	MR_Word N1;
	MR_Word N2;

	N1 =  mdb__declarative_execution__Node_6 ;
		{
#line 1465 "declarative_execution.m"

    N2 = N1;

#line 10617 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__CNode_8  = N2;
#line 1465 "declarative_execution.m"
}
#line 1139 "declarative_execution.m"
    {
#line 1139 "declarative_execution.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__declarative_execution_scalar_common_1[0], mdb__declarative_execution__OutStr_5, ((MR_Box) (mdb__declarative_execution__CNode_8)));
#line 1139 "declarative_execution.m"
      return;
    }
#line 1137 "declarative_execution.m"
  }
#line 1131 "declarative_execution.m"
}

#line 1115 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__find_prev_contour_store_2_f_0(
#line 1115 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1115 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_5)
#line 1115 "declarative_execution.m"
{
#line 1120 "declarative_execution.m"
  {
#line 1120 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1120 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Prev_6;
#line 1120 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9 = (MR_Word) &mdb__declarative_execution_scalar_common_2[0];
#line 1120 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node_7;
#line 1124 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Prev0_8;

#line 1121 "declarative_execution.m"
    {
#line 1121 "declarative_execution.m"
      mdb__declarative_execution__det_trace_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Id_5)), &mdb__declarative_execution__Node_7);
    }
#line 699 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__Node_7)) == (MR_mktag((MR_Integer) 0))))
#line 713 "declarative_execution.m"
      {
#line 714 "declarative_execution.m"
        {
#line 714 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[29])));
        }
#line 713 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 713 "declarative_execution.m"
      }
#line 699 "declarative_execution.m"
    else
#line 699 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__Node_7)) == (MR_mktag((MR_Integer) 2))))
#line 703 "declarative_execution.m"
        {
#line 703 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Exit_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
#line 703 "declarative_execution.m"
          MR_Word mdb__declarative_execution__ExitNode_25;
#line 703 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 0)));
#line 703 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
#line 703 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
#line 703 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_7, (MR_Integer) 4)));
#line 705 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_66_66;
#line 705 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_67_67;
#line 705 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_68_68;
#line 705 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_69_69;
#line 705 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_70_70;
#line 705 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_71_71;
#line 705 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_72_72;

#line 704 "declarative_execution.m"
          {
#line 704 "declarative_execution.m"
            mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Exit_21)), &mdb__declarative_execution__ExitNode_25);
          }
#line 705 "declarative_execution.m"
          mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 0)));
#line 705 "declarative_execution.m"
          mdb__declarative_execution__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 1)));
#line 705 "declarative_execution.m"
          mdb__declarative_execution__V_67_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 2)));
#line 705 "declarative_execution.m"
          mdb__declarative_execution__V_68_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 3)));
#line 705 "declarative_execution.m"
          mdb__declarative_execution__V_69_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 4)));
#line 705 "declarative_execution.m"
          mdb__declarative_execution__V_70_70 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 5)));
#line 705 "declarative_execution.m"
          mdb__declarative_execution__V_71_71 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 6)));
#line 705 "declarative_execution.m"
          mdb__declarative_execution__V_72_72 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_25, (MR_Integer) 7)));
#line 703 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 703 "declarative_execution.m"
        }
#line 699 "declarative_execution.m"
      else
#line 699 "declarative_execution.m"
        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 716 "declarative_execution.m"
          {
#line 717 "declarative_execution.m"
            {
#line 717 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[30])));
            }
#line 716 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_TRUE;
#line 716 "declarative_execution.m"
          }
#line 699 "declarative_execution.m"
        else
#line 699 "declarative_execution.m"
          if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 699 "declarative_execution.m"
            {
#line 699 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Call_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
#line 699 "declarative_execution.m"
              MR_Word mdb__declarative_execution__CallNode_19;
#line 699 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
#line 699 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
#line 699 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 4)));
#line 699 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 5)));
#line 699 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 6)));
#line 701 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_57_57;
#line 701 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_58_58;
#line 701 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_59_59;
#line 701 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_60_60;
#line 701 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_61_61;
#line 701 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_62_62;
#line 701 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_63_63;
#line 701 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_64_64;
#line 701 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_65_65;

#line 700 "declarative_execution.m"
              {
#line 700 "declarative_execution.m"
                mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Call_14)), &mdb__declarative_execution__CallNode_19);
              }
#line 701 "declarative_execution.m"
              mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 0)));
#line 701 "declarative_execution.m"
              mdb__declarative_execution__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 1)));
#line 701 "declarative_execution.m"
              mdb__declarative_execution__V_58_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 2)));
#line 701 "declarative_execution.m"
              mdb__declarative_execution__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 3)));
#line 701 "declarative_execution.m"
              mdb__declarative_execution__V_60_60 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 4)));
#line 701 "declarative_execution.m"
              mdb__declarative_execution__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 5)));
#line 701 "declarative_execution.m"
              mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 6)));
#line 701 "declarative_execution.m"
              mdb__declarative_execution__V_63_63 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 7)));
#line 701 "declarative_execution.m"
              mdb__declarative_execution__V_64_64 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 8)));
#line 701 "declarative_execution.m"
              mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_19, (MR_Integer) 9)));
#line 699 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 699 "declarative_execution.m"
            }
#line 699 "declarative_execution.m"
          else
#line 699 "declarative_execution.m"
            if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 719 "declarative_execution.m"
              {
#line 720 "declarative_execution.m"
                {
#line 720 "declarative_execution.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[31])));
                }
#line 719 "declarative_execution.m"
                mdb__declarative_execution__succeeded = MR_TRUE;
#line 719 "declarative_execution.m"
              }
#line 699 "declarative_execution.m"
            else
#line 699 "declarative_execution.m"
              if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 707 "declarative_execution.m"
                {
#line 707 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__Neg_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 2)));
#line 707 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_56_56;
#line 707 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 1)));
#line 707 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_7, (MR_Integer) 3)));
#line 708 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_29_29;
#line 708 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_30_30;

#line 708 "declarative_execution.m"
                  {
#line 708 "declarative_execution.m"
                    mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_9, ((MR_Box) (mdb__declarative_execution__Store_4)), ((MR_Box) (mdb__declarative_execution__Neg_27)), &mdb__declarative_execution__V_56_56);
                  }
#line 708 "declarative_execution.m"
                  mdb__declarative_execution__Prev0_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 1)));
#line 708 "declarative_execution.m"
                  mdb__declarative_execution__V_29_29 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 2)));
#line 708 "declarative_execution.m"
                  mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_56_56, (MR_Integer) 3)));
#line 707 "declarative_execution.m"
                  mdb__declarative_execution__succeeded = MR_TRUE;
#line 707 "declarative_execution.m"
                }
#line 699 "declarative_execution.m"
              else
#line 699 "declarative_execution.m"
                mdb__declarative_execution__succeeded = MR_FALSE;
#line 1124 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1123 "declarative_execution.m"
      mdb__declarative_execution__Prev_6 = mdb__declarative_execution__Prev0_8;
#line 1124 "declarative_execution.m"
    else
#line 1125 "declarative_execution.m"
      mdb__declarative_execution__Prev_6 = mdb__declarative_execution__Id_5;
#line 1120 "declarative_execution.m"
    return mdb__declarative_execution__Prev_6;
#line 1120 "declarative_execution.m"
  }
#line 1115 "declarative_execution.m"
}

#line 1102 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__step_left_in_contour_store_2_f_0(
#line 1102 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_4,
#line 1102 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 1102 "declarative_execution.m"
{
#line 1107 "declarative_execution.m"
  {
#line 1107 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1107 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__3_3;
#line 1107 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_HeadVar__3_3;

#line 1107 "declarative_execution.m"
    {
#line 1107 "declarative_execution.m"
      mdb__declarative_execution__conv0_HeadVar__3_3 = mdb__declarative_execution__step_left_in_contour_2_f_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__Store_4)), mdb__declarative_execution__Node_5);
    }
#line 1107 "declarative_execution.m"
    mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv0_HeadVar__3_3);
#line 1107 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__3_3;
#line 1107 "declarative_execution.m"
  }
#line 1102 "declarative_execution.m"
}

#line 1089 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_first_disj_2_p_0(
#line 1089 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 1089 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__2_2)
#line 1089 "declarative_execution.m"
{
#line 1095 "declarative_execution.m"
  {
#line 1095 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1095 "declarative_execution.m"
    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1313 "declarative_execution.m"
      {
#line 1316 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__trace_node_first_disj_2_p_0

	MR_Word Id;

		{
#line 1316 "declarative_execution.m"

    Id = (MR_Word) NULL;

#line 10946 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 *mdb__declarative_execution__HeadVar__2_2  = Id;
#line 1316 "declarative_execution.m"
}
#line 1313 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1313 "declarative_execution.m"
      }
#line 1095 "declarative_execution.m"
    else
#line 1095 "declarative_execution.m"
      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1097 "declarative_execution.m"
        {
#line 1097 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1097 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));

#line 1097 "declarative_execution.m"
          *mdb__declarative_execution__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 1097 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 1097 "declarative_execution.m"
        }
#line 1095 "declarative_execution.m"
      else
#line 1095 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_FALSE;
#line 1095 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1095 "declarative_execution.m"
  }
#line 1089 "declarative_execution.m"
}

#line 1076 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_call_3_p_0(
#line 1076 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_1,
#line 1076 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 1076 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Call_3)
#line 1076 "declarative_execution.m"
{
#line 1082 "declarative_execution.m"
  {
#line 1082 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1082 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 1082 "declarative_execution.m"
      {
#line 1082 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 1082 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_7_7;
#line 1082 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_8_8;
#line 1082 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_9_9;
#line 1082 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_10_10;
#line 1082 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_11_11;
#line 1082 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_12_12;

#line 1082 "declarative_execution.m"
        *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1082 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1082 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1082 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1082 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 1082 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 1082 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 1082 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1082 "declarative_execution.m"
      }
#line 1082 "declarative_execution.m"
    else
#line 1082 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 1083 "declarative_execution.m"
        {
#line 1083 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Exit_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1083 "declarative_execution.m"
          MR_Word mdb__declarative_execution__ExitNode_20;
#line 1083 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));
#line 1083 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1083 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1083 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1085 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_36_36;
#line 1085 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_37_37;
#line 1085 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_38_38;
#line 1085 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_39_39;
#line 1085 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_40_40;
#line 1085 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_41_41;
#line 1085 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_42_42;

#line 1084 "declarative_execution.m"
          {
#line 1084 "declarative_execution.m"
            mdb__declarative_execution__exit_node_from_id_3_p_0((MR_Word) &mdb__declarative_execution_scalar_common_2[0], ((MR_Box) (mdb__declarative_execution__S_1)), ((MR_Box) (mdb__declarative_execution__Exit_15)), &mdb__declarative_execution__ExitNode_20);
          }
#line 1085 "declarative_execution.m"
          mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 0)));
#line 1085 "declarative_execution.m"
          *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 1)));
#line 1085 "declarative_execution.m"
          mdb__declarative_execution__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 2)));
#line 1085 "declarative_execution.m"
          mdb__declarative_execution__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 3)));
#line 1085 "declarative_execution.m"
          mdb__declarative_execution__V_39_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 4)));
#line 1085 "declarative_execution.m"
          mdb__declarative_execution__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 5)));
#line 1085 "declarative_execution.m"
          mdb__declarative_execution__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 6)));
#line 1085 "declarative_execution.m"
          mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_20, (MR_Integer) 7)));
#line 1083 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 1083 "declarative_execution.m"
        }
#line 1082 "declarative_execution.m"
      else
#line 1082 "declarative_execution.m"
        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1087 "declarative_execution.m"
          {
#line 1087 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_29_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1087 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_31_31;
#line 1087 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_32_32;
#line 1087 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_33_33;
#line 1087 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_34_34;
#line 1087 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_35_35;

#line 1087 "declarative_execution.m"
            *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1087 "declarative_execution.m"
            mdb__declarative_execution__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1087 "declarative_execution.m"
            mdb__declarative_execution__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1087 "declarative_execution.m"
            mdb__declarative_execution__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 1087 "declarative_execution.m"
            mdb__declarative_execution__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 1087 "declarative_execution.m"
            mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 7)));
#line 1087 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_TRUE;
#line 1087 "declarative_execution.m"
          }
#line 1082 "declarative_execution.m"
        else
#line 1082 "declarative_execution.m"
          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1086 "declarative_execution.m"
            {
#line 1086 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1086 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_24_24;
#line 1086 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_25_25;
#line 1086 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_26_26;
#line 1086 "declarative_execution.m"
              MR_Integer mdb__declarative_execution__V_27_27;

#line 1086 "declarative_execution.m"
              *mdb__declarative_execution__Call_3 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 2)));
#line 1086 "declarative_execution.m"
              mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 3)));
#line 1086 "declarative_execution.m"
              mdb__declarative_execution__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 4)));
#line 1086 "declarative_execution.m"
              mdb__declarative_execution__V_26_26 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 5)));
#line 1086 "declarative_execution.m"
              mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 6)));
#line 1086 "declarative_execution.m"
              mdb__declarative_execution__succeeded = MR_TRUE;
#line 1086 "declarative_execution.m"
            }
#line 1082 "declarative_execution.m"
          else
#line 1082 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_FALSE;
#line 1082 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1082 "declarative_execution.m"
  }
#line 1076 "declarative_execution.m"
}

#line 1061 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__trace_node_seqno_3_p_0(
#line 1061 "declarative_execution.m"
  MR_Word mdb__declarative_execution__S_4,
#line 1061 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 1061 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__SeqNo_6)
#line 1061 "declarative_execution.m"
{
#line 1070 "declarative_execution.m"
  {
#line 1070 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 0)));
#line 1070 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__SeqNo0_7;
#line 1068 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;
#line 1068 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_11_11;
#line 1068 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 1068 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_13_13;
#line 1068 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_14_14;
#line 1068 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_15_15;
#line 1068 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_16_16;
#line 1068 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17;
#line 1068 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_18_18;

#line 1068 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 1068 "declarative_execution.m"
      {
#line 1068 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 0)));
#line 1068 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 1)));
#line 1068 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 1068 "declarative_execution.m"
        mdb__declarative_execution__SeqNo0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 1068 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 1068 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 1068 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 1068 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
#line 1068 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 8)));
#line 1068 "declarative_execution.m"
        mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_5, (MR_Integer) 9)));
#line 1069 "declarative_execution.m"
        *mdb__declarative_execution__SeqNo_6 = mdb__declarative_execution__SeqNo0_7;
#line 1069 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 1068 "declarative_execution.m"
      }
#line 1068 "declarative_execution.m"
    else
#line 1071 "declarative_execution.m"
      {
#line 1071 "declarative_execution.m"
        MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28;
#line 1071 "declarative_execution.m"
        MR_Word mdb__declarative_execution__Call_8;
#line 1071 "declarative_execution.m"
        MR_Word mdb__declarative_execution__CallNode_9;
#line 1073 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_19_19;
#line 1073 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_20_20;
#line 1073 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_21_21;
#line 1073 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_22_22;
#line 1073 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_23_23;
#line 1073 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_24_24;
#line 1073 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_25_25;
#line 1073 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_26_26;
#line 1073 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_27_27;

#line 1071 "declarative_execution.m"
        {
#line 1071 "declarative_execution.m"
          mdb__declarative_execution__succeeded = mdb__declarative_execution__trace_node_call_3_p_0(mdb__declarative_execution__S_4, mdb__declarative_execution__Node_5, &mdb__declarative_execution__Call_8);
        }
#line 1071 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 1071 "declarative_execution.m"
          {
#line 11277 "mdb.declarative_execution.c"
            mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28 = (MR_Word) &mdb__declarative_execution_scalar_common_2[0];
#line 1072 "declarative_execution.m"
            {
#line 1072 "declarative_execution.m"
              mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_28, ((MR_Box) (mdb__declarative_execution__S_4)), ((MR_Box) (mdb__declarative_execution__Call_8)), &mdb__declarative_execution__CallNode_9);
            }
#line 1073 "declarative_execution.m"
            mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 0)));
#line 1073 "declarative_execution.m"
            mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 1)));
#line 1073 "declarative_execution.m"
            mdb__declarative_execution__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 2)));
#line 1073 "declarative_execution.m"
            *mdb__declarative_execution__SeqNo_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 3)));
#line 1073 "declarative_execution.m"
            mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 4)));
#line 1073 "declarative_execution.m"
            mdb__declarative_execution__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 5)));
#line 1073 "declarative_execution.m"
            mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 6)));
#line 1073 "declarative_execution.m"
            mdb__declarative_execution__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 7)));
#line 1073 "declarative_execution.m"
            mdb__declarative_execution__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 8)));
#line 1073 "declarative_execution.m"
            mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_9, (MR_Integer) 9)));
#line 1073 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_TRUE;
#line 1071 "declarative_execution.m"
          }
#line 1071 "declarative_execution.m"
      }
#line 1070 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1070 "declarative_execution.m"
  }
#line 1061 "declarative_execution.m"
}

#line 1036 "declarative_execution.m"
static MR_String MR_CALL 
mdb__declarative_execution__trace_node_path_1_f_0(
#line 1036 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_3)
#line 1036 "declarative_execution.m"
{
#line 1040 "declarative_execution.m"
  {
#line 1040 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1040 "declarative_execution.m"
    MR_String mdb__declarative_execution__Path_4;
#line 1040 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_5;

#line 1046 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 0))))
#line 1046 "declarative_execution.m"
      {
#line 1046 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
#line 1046 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1046 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1046 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1046 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1046 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1046 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1046 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_15_15;
#line 1046 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_16_16;

#line 1046 "declarative_execution.m"
        mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
#line 1046 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 8)));
#line 1046 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node_3, (MR_Integer) 9)));
#line 1046 "declarative_execution.m"
      }
#line 1046 "declarative_execution.m"
    else
#line 1046 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 1))))
#line 1047 "declarative_execution.m"
        {
#line 1047 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
#line 1047 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1047 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1047 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1047 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1047 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_23_23;
#line 1047 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_24_24;

#line 1047 "declarative_execution.m"
          mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1047 "declarative_execution.m"
          mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1047 "declarative_execution.m"
          mdb__declarative_execution__V_24_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
#line 1047 "declarative_execution.m"
        }
#line 1046 "declarative_execution.m"
      else
#line 1046 "declarative_execution.m"
        if (((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 2))))
#line 1048 "declarative_execution.m"
          {
#line 1048 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_25_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 0)));
#line 1048 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_26_26 = ((MR_Word) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1048 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1048 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_29_29;

#line 1048 "declarative_execution.m"
            mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1048 "declarative_execution.m"
            mdb__declarative_execution__V_29_29 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1048 "declarative_execution.m"
          }
#line 1046 "declarative_execution.m"
        else
#line 1046 "declarative_execution.m"
          if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1054 "declarative_execution.m"
            {
#line 1054 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1054 "declarative_execution.m"
              MR_Word mdb__declarative_execution__V_52_52;

#line 1054 "declarative_execution.m"
              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1054 "declarative_execution.m"
              mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1054 "declarative_execution.m"
            }
#line 1046 "declarative_execution.m"
          else
#line 1046 "declarative_execution.m"
            if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1056 "declarative_execution.m"
              {
#line 1056 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1056 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_57_57 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1056 "declarative_execution.m"
                mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1056 "declarative_execution.m"
              }
#line 1046 "declarative_execution.m"
            else
#line 1046 "declarative_execution.m"
              if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1050 "declarative_execution.m"
                {
#line 1050 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1050 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1050 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1050 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1050 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_40_40 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1050 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_42_42;

#line 1050 "declarative_execution.m"
                  mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1050 "declarative_execution.m"
                  mdb__declarative_execution__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 7)));
#line 1050 "declarative_execution.m"
                }
#line 1046 "declarative_execution.m"
              else
#line 1046 "declarative_execution.m"
                if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1049 "declarative_execution.m"
                  {
#line 1049 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__V_30_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1049 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__V_31_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1049 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__V_32_32 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1049 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_33_33 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 4)));
#line 1049 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_35_35;

#line 1049 "declarative_execution.m"
                    mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 5)));
#line 1049 "declarative_execution.m"
                    mdb__declarative_execution__V_35_35 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 6)));
#line 1049 "declarative_execution.m"
                  }
#line 1046 "declarative_execution.m"
                else
#line 1046 "declarative_execution.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1052 "declarative_execution.m"
                    {
#line 1052 "declarative_execution.m"
                      MR_Word mdb__declarative_execution__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));

#line 1052 "declarative_execution.m"
                      mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1052 "declarative_execution.m"
                    }
#line 1046 "declarative_execution.m"
                  else
#line 1046 "declarative_execution.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1053 "declarative_execution.m"
                      {
#line 1053 "declarative_execution.m"
                        MR_Word mdb__declarative_execution__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1053 "declarative_execution.m"
                        MR_Word mdb__declarative_execution__V_49_49;

#line 1053 "declarative_execution.m"
                        mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1053 "declarative_execution.m"
                        mdb__declarative_execution__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1053 "declarative_execution.m"
                      }
#line 1046 "declarative_execution.m"
                    else
#line 1046 "declarative_execution.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1057 "declarative_execution.m"
                        {
#line 1057 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_59_59 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1057 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__V_61_61;

#line 1057 "declarative_execution.m"
                          mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1057 "declarative_execution.m"
                          mdb__declarative_execution__V_61_61 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1057 "declarative_execution.m"
                        }
#line 1046 "declarative_execution.m"
                      else
#line 1046 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1059 "declarative_execution.m"
                          {
#line 1059 "declarative_execution.m"
                            MR_Word mdb__declarative_execution__V_65_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1059 "declarative_execution.m"
                            MR_Word mdb__declarative_execution__V_66_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1059 "declarative_execution.m"
                            mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1059 "declarative_execution.m"
                          }
#line 1046 "declarative_execution.m"
                        else
#line 1046 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1058 "declarative_execution.m"
                            {
#line 1058 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1058 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_63_63 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1058 "declarative_execution.m"
                              mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1058 "declarative_execution.m"
                            }
#line 1046 "declarative_execution.m"
                          else
#line 1046 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1051 "declarative_execution.m"
                              {
#line 1051 "declarative_execution.m"
                                MR_Word mdb__declarative_execution__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));

#line 1051 "declarative_execution.m"
                                mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));
#line 1051 "declarative_execution.m"
                              }
#line 1046 "declarative_execution.m"
                            else
#line 1055 "declarative_execution.m"
                              {
#line 1055 "declarative_execution.m"
                                MR_Word mdb__declarative_execution__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 1)));
#line 1055 "declarative_execution.m"
                                MR_Word mdb__declarative_execution__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 2)));

#line 1055 "declarative_execution.m"
                                mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_3, (MR_Integer) 3)));
#line 1055 "declarative_execution.m"
                              }
#line 1042 "declarative_execution.m"
    {
#line 1042 "declarative_execution.m"
      return mdb__declarative_execution__Path_4 = mdbcomp__rtti_access__get_goal_path_from_label_layout_1_f_0(mdb__declarative_execution__Label_5);
    }
#line 1040 "declarative_execution.m"
    return mdb__declarative_execution__Path_4;
#line 1040 "declarative_execution.m"
  }
#line 1036 "declarative_execution.m"
}

#line 1017 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__trace_node_port_1_f_0(
#line 1017 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 1017 "declarative_execution.m"
{
#line 1021 "declarative_execution.m"
  {
#line 1021 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1021 "declarative_execution.m"
    MR_Word mdb__declarative_execution__HeadVar__2_2;

#line 1021 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0))))
#line 1021 "declarative_execution.m"
      mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 0;
#line 1021 "declarative_execution.m"
    else
#line 1021 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1022 "declarative_execution.m"
        mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 1;
#line 1021 "declarative_execution.m"
      else
#line 1021 "declarative_execution.m"
        if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1023 "declarative_execution.m"
          mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 2;
#line 1021 "declarative_execution.m"
        else
#line 1021 "declarative_execution.m"
          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 1029 "declarative_execution.m"
            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 6;
#line 1021 "declarative_execution.m"
          else
#line 1021 "declarative_execution.m"
            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 1031 "declarative_execution.m"
              mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 8;
#line 1021 "declarative_execution.m"
            else
#line 1021 "declarative_execution.m"
              if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 1025 "declarative_execution.m"
                mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 5;
#line 1021 "declarative_execution.m"
              else
#line 1021 "declarative_execution.m"
                if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 1024 "declarative_execution.m"
                  mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 3;
#line 1021 "declarative_execution.m"
                else
#line 1021 "declarative_execution.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 1027 "declarative_execution.m"
                    mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 12;
#line 1021 "declarative_execution.m"
                  else
#line 1021 "declarative_execution.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 1028 "declarative_execution.m"
                      mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 13;
#line 1021 "declarative_execution.m"
                    else
#line 1021 "declarative_execution.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 1032 "declarative_execution.m"
                        mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 9;
#line 1021 "declarative_execution.m"
                      else
#line 1021 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 1034 "declarative_execution.m"
                          mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 11;
#line 1021 "declarative_execution.m"
                        else
#line 1021 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 1033 "declarative_execution.m"
                            mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 10;
#line 1021 "declarative_execution.m"
                          else
#line 1021 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 1026 "declarative_execution.m"
                              mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 14;
#line 1021 "declarative_execution.m"
                            else
#line 1030 "declarative_execution.m"
                              mdb__declarative_execution__HeadVar__2_2 = (MR_Integer) 7;
#line 1021 "declarative_execution.m"
    return mdb__declarative_execution__HeadVar__2_2;
#line 1021 "declarative_execution.m"
  }
#line 1017 "declarative_execution.m"
}

#line 991 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__neg_node_set_status_2_f_0(
#line 991 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Neg0_4,
#line 991 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 991 "declarative_execution.m"
{
#line 997 "declarative_execution.m"
  {
#line 997 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Neg0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 997 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Neg_6;
#line 997 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_16_16;
#line 997 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_27;
#line 997 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_29;
#line 997 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_31;
#line 997 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_32;
#line 997 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Neg1_10;
#line 997 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_22;
#line 997 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_24;
#line 998 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 998 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 998 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 1012 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_23;
#line 1013 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_25;
#line 1014 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_26;
#line 1015 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Neg_6;

#line 998 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 998 "declarative_execution.m"
      {
#line 998 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 1)));
#line 998 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 2)));
#line 998 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Neg0_4, (MR_Integer) 3)));
#line 999 "declarative_execution.m"
        mdb__declarative_execution__Neg1_10 = mdb__declarative_execution__Neg0_4;
#line 998 "declarative_execution.m"
      }
#line 998 "declarative_execution.m"
    else
#line 1001 "declarative_execution.m"
      {
#line 1001 "declarative_execution.m"
        {
#line 1001 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[28])));
        }
#line 1001 "declarative_execution.m"
      }
#line 11781 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeCtorInfo_16_16 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0;
#line 1011 "declarative_execution.m"
    {
#line 1011 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_27);
    }
#line 11788 "mdb.declarative_execution.c"
    {
#line 11790 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11792 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 11794 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 11796 "mdb.declarative_execution.c"
    }
#line 11798 "mdb.declarative_execution.c"
    {
#line 11800 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11802 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 11804 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 11806 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_29));
#line 11808 "mdb.declarative_execution.c"
    }
#line 11810 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_32 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1012 "declarative_execution.m"
    {
#line 1012 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) (mdb__declarative_execution__Neg1_10)), &mdb__declarative_execution__Ref_22, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_23);
    }
#line 1013 "declarative_execution.m"
    {
#line 1013 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__Ref_22, (MR_Integer) 2, &mdb__declarative_execution__ArgRef_24, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_25);
    }
#line 1014 "declarative_execution.m"
    {
#line 1014 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__ArgRef_24, ((MR_Box) (mdb__declarative_execution__Status_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_26);
    }
#line 1015 "declarative_execution.m"
    {
#line 1015 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_22, &mdb__declarative_execution__conv3_Neg_6);
    }
#line 1015 "declarative_execution.m"
    mdb__declarative_execution__Neg_6 = ((MR_Word) mdb__declarative_execution__conv3_Neg_6);
#line 997 "declarative_execution.m"
    return mdb__declarative_execution__Neg_6;
#line 997 "declarative_execution.m"
  }
#line 991 "declarative_execution.m"
}

#line 975 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__cond_node_set_status_2_f_0(
#line 975 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Cond0_4,
#line 975 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Status_5)
#line 975 "declarative_execution.m"
{
#line 981 "declarative_execution.m"
  {
#line 981 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Cond0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 0)))) == (MR_Integer) 5)));
#line 981 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Cond_6;
#line 981 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_16_16;
#line 981 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_27;
#line 981 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_29;
#line 981 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_31;
#line 981 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_32;
#line 981 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Cond1_10;
#line 981 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_22;
#line 981 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_24;
#line 982 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 982 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 982 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 1012 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_23;
#line 1013 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_25;
#line 1014 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_26;
#line 1015 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Cond_6;

#line 982 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 982 "declarative_execution.m"
      {
#line 982 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 1)));
#line 982 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 2)));
#line 982 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Cond0_4, (MR_Integer) 3)));
#line 983 "declarative_execution.m"
        mdb__declarative_execution__Cond1_10 = mdb__declarative_execution__Cond0_4;
#line 982 "declarative_execution.m"
      }
#line 982 "declarative_execution.m"
    else
#line 985 "declarative_execution.m"
      {
#line 985 "declarative_execution.m"
        {
#line 985 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[27])));
        }
#line 985 "declarative_execution.m"
      }
#line 11912 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeCtorInfo_16_16 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_goal_status_0;
#line 1011 "declarative_execution.m"
    {
#line 1011 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_27);
    }
#line 11919 "mdb.declarative_execution.c"
    {
#line 11921 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_29 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 11923 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 11925 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_29, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 11927 "mdb.declarative_execution.c"
    }
#line 11929 "mdb.declarative_execution.c"
    {
#line 11931 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_31 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 11933 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 11935 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_27));
#line 11937 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_31, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_29));
#line 11939 "mdb.declarative_execution.c"
    }
#line 11941 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_32 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1012 "declarative_execution.m"
    {
#line 1012 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) (mdb__declarative_execution__Cond1_10)), &mdb__declarative_execution__Ref_22, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_23);
    }
#line 1013 "declarative_execution.m"
    {
#line 1013 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__Ref_22, (MR_Integer) 2, &mdb__declarative_execution__ArgRef_24, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_25);
    }
#line 1014 "declarative_execution.m"
    {
#line 1014 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_16_16, mdb__declarative_execution__TypeClassInfo_for_store_31, mdb__declarative_execution__ArgRef_24, ((MR_Box) (mdb__declarative_execution__Status_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_26);
    }
#line 1015 "declarative_execution.m"
    {
#line 1015 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_32, mdb__declarative_execution__TypeClassInfo_for_store_31, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_22, &mdb__declarative_execution__conv3_Cond_6);
    }
#line 1015 "declarative_execution.m"
    mdb__declarative_execution__Cond_6 = ((MR_Word) mdb__declarative_execution__conv3_Cond_6);
#line 981 "declarative_execution.m"
    return mdb__declarative_execution__Cond_6;
#line 981 "declarative_execution.m"
  }
#line 975 "declarative_execution.m"
}

#line 956 "declarative_execution.m"
static MR_Integer MR_CALL 
mdb__declarative_execution__get_implicit_tree_ideal_depth_1_f_0(
#line 956 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 956 "declarative_execution.m"
{
#line 971 "declarative_execution.m"
  {
#line 971 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call_3)) == (MR_mktag((MR_Integer) 0)));
#line 971 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__IdealDepth_4;
#line 971 "declarative_execution.m"
    MR_Word mdb__declarative_execution__MaybeImplicitTreeInfo_5;
#line 963 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 963 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_14_14;
#line 963 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_15_15;
#line 963 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 963 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17;
#line 963 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_18_18;
#line 963 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_19_19;
#line 963 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_20_20;
#line 963 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_21_21;

#line 963 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 963 "declarative_execution.m"
      {
#line 963 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 0)));
#line 963 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 1)));
#line 963 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 2)));
#line 963 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 3)));
#line 963 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 4)));
#line 963 "declarative_execution.m"
        mdb__declarative_execution__MaybeImplicitTreeInfo_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 5)));
#line 963 "declarative_execution.m"
        mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 6)));
#line 963 "declarative_execution.m"
        mdb__declarative_execution__V_19_19 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 7)));
#line 963 "declarative_execution.m"
        mdb__declarative_execution__V_20_20 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 8)));
#line 963 "declarative_execution.m"
        mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 9)));
#line 966 "declarative_execution.m"
        if ((mdb__declarative_execution__MaybeImplicitTreeInfo_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 967 "declarative_execution.m"
          {
#line 968 "declarative_execution.m"
            {
#line 968 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[25])));
            }
#line 967 "declarative_execution.m"
          }
#line 966 "declarative_execution.m"
        else
#line 965 "declarative_execution.m"
          {
#line 965 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__MaybeImplicitTreeInfo_5, (MR_Integer) 0)));

#line 965 "declarative_execution.m"
            mdb__declarative_execution__IdealDepth_4 = (MR_Integer) mdb__declarative_execution__V_9_9;
#line 965 "declarative_execution.m"
          }
#line 963 "declarative_execution.m"
      }
#line 963 "declarative_execution.m"
    else
#line 972 "declarative_execution.m"
      {
#line 972 "declarative_execution.m"
        {
#line 972 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[26])));
        }
#line 972 "declarative_execution.m"
      }
#line 971 "declarative_execution.m"
    return mdb__declarative_execution__IdealDepth_4;
#line 971 "declarative_execution.m"
  }
#line 956 "declarative_execution.m"
}

#line 938 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_update_implicit_tree_info_2_f_0(
#line 938 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 938 "declarative_execution.m"
  MR_Integer mdb__declarative_execution__IdealDepth_5)
#line 938 "declarative_execution.m"
{
#line 945 "declarative_execution.m"
  {
#line 945 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call0_4)) == (MR_mktag((MR_Integer) 0)));
#line 945 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call_6;
#line 945 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_25_25;
#line 945 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_36;
#line 945 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_38;
#line 945 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_40;
#line 945 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_41;
#line 945 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call1_17;
#line 945 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_22_22;
#line 945 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_23_23;
#line 945 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_31;
#line 945 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_33;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 946 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;
#line 946 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 946 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 946 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_14_14;
#line 946 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_15_15;
#line 946 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 1012 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_32;
#line 1013 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_34;
#line 1014 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_35;
#line 1015 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Call_6;

#line 946 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 946 "declarative_execution.m"
      {
#line 946 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 0)));
#line 946 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 1)));
#line 946 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 2)));
#line 946 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 3)));
#line 946 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 4)));
#line 946 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 5)));
#line 946 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 6)));
#line 946 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 7)));
#line 946 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 8)));
#line 946 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 9)));
#line 947 "declarative_execution.m"
        mdb__declarative_execution__Call1_17 = mdb__declarative_execution__Call0_4;
#line 946 "declarative_execution.m"
      }
#line 946 "declarative_execution.m"
    else
#line 949 "declarative_execution.m"
      {
#line 949 "declarative_execution.m"
        {
#line 949 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[24])));
        }
#line 949 "declarative_execution.m"
      }
#line 954 "declarative_execution.m"
    mdb__declarative_execution__V_23_23 = (MR_Word) mdb__declarative_execution__IdealDepth_5;
#line 954 "declarative_execution.m"
    {
#line 954 "declarative_execution.m"
      mdb__declarative_execution__V_22_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 954 "declarative_execution.m"
      MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_22_22, 0) = ((MR_Box) (mdb__declarative_execution__V_23_23));
#line 954 "declarative_execution.m"
    }
#line 12185 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_25_25 = (MR_Word) &mdb__declarative_execution_scalar_common_1[1];
#line 1011 "declarative_execution.m"
    {
#line 1011 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_36);
    }
#line 12192 "mdb.declarative_execution.c"
    {
#line 12194 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12196 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_38, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 12198 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_38, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_36));
#line 12200 "mdb.declarative_execution.c"
    }
#line 12202 "mdb.declarative_execution.c"
    {
#line 12204 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_40 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12206 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 12208 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_36));
#line 12210 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_40, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_38));
#line 12212 "mdb.declarative_execution.c"
    }
#line 12214 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_41 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1012 "declarative_execution.m"
    {
#line 1012 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeClassInfo_for_store_40, ((MR_Box) (mdb__declarative_execution__Call1_17)), &mdb__declarative_execution__Ref_31, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_32);
    }
#line 1013 "declarative_execution.m"
    {
#line 1013 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeInfo_25_25, mdb__declarative_execution__TypeClassInfo_for_store_40, mdb__declarative_execution__Ref_31, (MR_Integer) 5, &mdb__declarative_execution__ArgRef_33, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_34);
    }
#line 1014 "declarative_execution.m"
    {
#line 1014 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeInfo_25_25, mdb__declarative_execution__TypeClassInfo_for_store_40, mdb__declarative_execution__ArgRef_33, ((MR_Box) (mdb__declarative_execution__V_22_22)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_35);
    }
#line 1015 "declarative_execution.m"
    {
#line 1015 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_41, mdb__declarative_execution__TypeClassInfo_for_store_40, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_31, &mdb__declarative_execution__conv3_Call_6);
    }
#line 1015 "declarative_execution.m"
    mdb__declarative_execution__Call_6 = ((MR_Word) mdb__declarative_execution__conv3_Call_6);
#line 945 "declarative_execution.m"
    return mdb__declarative_execution__Call_6;
#line 945 "declarative_execution.m"
  }
#line 938 "declarative_execution.m"
}

#line 921 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_set_last_interface_2_f_0(
#line 921 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call0_4,
#line 921 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Last_5)
#line 921 "declarative_execution.m"
{
#line 927 "declarative_execution.m"
  {
#line 927 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call0_4)) == (MR_mktag((MR_Integer) 0)));
#line 927 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call_6;
#line 927 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_23_23;
#line 927 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_16_34;
#line 927 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_18_36;
#line 927 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeClassInfo_for_store_38;
#line 927 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeInfo_21_39;
#line 927 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Call1_17;
#line 927 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Ref_29;
#line 927 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ArgRef_31;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 928 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;
#line 928 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_12_12;
#line 928 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 928 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_14_14;
#line 928 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_15_15;
#line 928 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 1012 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_S1_30;
#line 1013 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv1_S2_32;
#line 1014 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv2_S_33;
#line 1015 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv3_Call_6;

#line 928 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 928 "declarative_execution.m"
      {
#line 928 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 0)));
#line 928 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 1)));
#line 928 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 2)));
#line 928 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 3)));
#line 928 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 4)));
#line 928 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 5)));
#line 928 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 6)));
#line 928 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 7)));
#line 928 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 8)));
#line 928 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call0_4, (MR_Integer) 9)));
#line 929 "declarative_execution.m"
        mdb__declarative_execution__Call1_17 = mdb__declarative_execution__Call0_4;
#line 928 "declarative_execution.m"
      }
#line 928 "declarative_execution.m"
    else
#line 931 "declarative_execution.m"
      {
#line 931 "declarative_execution.m"
        {
#line 931 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[23])));
        }
#line 931 "declarative_execution.m"
      }
#line 12344 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeCtorInfo_23_23 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_id_0;
#line 1011 "declarative_execution.m"
    {
#line 1011 "declarative_execution.m"
      mercury__store__init_1_p_0(&mdb__declarative_execution__TypeInfo_16_34);
    }
#line 12351 "mdb.declarative_execution.c"
    {
#line 12353 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeInfo_18_36 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 12355 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_36, 0) = ((MR_Box) (&mercury__store__store__type_ctor_info_store_1));
#line 12357 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeInfo_18_36, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_34));
#line 12359 "mdb.declarative_execution.c"
    }
#line 12361 "mdb.declarative_execution.c"
    {
#line 12363 "mdb.declarative_execution.c"
      mdb__declarative_execution__TypeClassInfo_for_store_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 12365 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 0) = ((MR_Box) (base_typeclass_info_store__store__arity1__store__store__arity1__));
#line 12367 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 1) = ((MR_Box) (mdb__declarative_execution__TypeInfo_16_34));
#line 12369 "mdb.declarative_execution.c"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_store_38, 2) = ((MR_Box) (mdb__declarative_execution__TypeInfo_18_36));
#line 12371 "mdb.declarative_execution.c"
    }
#line 12373 "mdb.declarative_execution.c"
    mdb__declarative_execution__TypeInfo_21_39 = (MR_Word) &mdb__declarative_execution_scalar_common_1[2];
#line 1012 "declarative_execution.m"
    {
#line 1012 "declarative_execution.m"
      mercury__store__new_ref_4_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeClassInfo_for_store_38, ((MR_Box) (mdb__declarative_execution__Call1_17)), &mdb__declarative_execution__Ref_29, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv0_S1_30);
    }
#line 1013 "declarative_execution.m"
    {
#line 1013 "declarative_execution.m"
      mercury__store__arg_ref_5_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeCtorInfo_23_23, mdb__declarative_execution__TypeClassInfo_for_store_38, mdb__declarative_execution__Ref_29, (MR_Integer) 1, &mdb__declarative_execution__ArgRef_31, ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv1_S2_32);
    }
#line 1014 "declarative_execution.m"
    {
#line 1014 "declarative_execution.m"
      mercury__store__set_ref_value_4_p_0(mdb__declarative_execution__TypeCtorInfo_23_23, mdb__declarative_execution__TypeClassInfo_for_store_38, mdb__declarative_execution__ArgRef_31, ((MR_Box) (mdb__declarative_execution__Last_5)), ((MR_Box) ((MR_Integer) 0)), &mdb__declarative_execution__conv2_S_33);
    }
#line 1015 "declarative_execution.m"
    {
#line 1015 "declarative_execution.m"
      mercury__store__extract_ref_value_3_p_0(mdb__declarative_execution__TypeInfo_21_39, mdb__declarative_execution__TypeClassInfo_for_store_38, ((MR_Box) ((MR_Integer) 0)), mdb__declarative_execution__Ref_29, &mdb__declarative_execution__conv3_Call_6);
    }
#line 1015 "declarative_execution.m"
    mdb__declarative_execution__Call_6 = ((MR_Word) mdb__declarative_execution__conv3_Call_6);
#line 927 "declarative_execution.m"
    return mdb__declarative_execution__Call_6;
#line 927 "declarative_execution.m"
  }
#line 921 "declarative_execution.m"
}

#line 908 "declarative_execution.m"
static MR_Word MR_CALL 
mdb__declarative_execution__call_node_get_last_interface_1_f_0(
#line 908 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Call_3)
#line 908 "declarative_execution.m"
{
#line 916 "declarative_execution.m"
  {
#line 916 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Call_3)) == (MR_mktag((MR_Integer) 0)));
#line 916 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Last_4;
#line 916 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Last0_6;
#line 914 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_5_5;
#line 914 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_7_7;
#line 914 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_8_8;
#line 914 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_9_9;
#line 914 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;
#line 914 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_11_11;
#line 914 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_12_12;
#line 914 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_13_13;
#line 914 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_14_14;

#line 914 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 914 "declarative_execution.m"
      {
#line 914 "declarative_execution.m"
        mdb__declarative_execution__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 0)));
#line 914 "declarative_execution.m"
        mdb__declarative_execution__Last0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 1)));
#line 914 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 2)));
#line 914 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 3)));
#line 914 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 4)));
#line 914 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 5)));
#line 914 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 6)));
#line 914 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 7)));
#line 914 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 8)));
#line 914 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Call_3, (MR_Integer) 9)));
#line 915 "declarative_execution.m"
        mdb__declarative_execution__Last_4 = mdb__declarative_execution__Last0_6;
#line 914 "declarative_execution.m"
      }
#line 914 "declarative_execution.m"
    else
#line 917 "declarative_execution.m"
      {
#line 917 "declarative_execution.m"
        {
#line 917 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[22])));
        }
#line 917 "declarative_execution.m"
      }
#line 916 "declarative_execution.m"
    return mdb__declarative_execution__Last_4;
#line 916 "declarative_execution.m"
  }
#line 908 "declarative_execution.m"
}

#line 891 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__search_trace_node_store_3_p_0(
#line 891 "declarative_execution.m"
  MR_Word mdb__declarative_execution___Store_1,
#line 891 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Id_2,
#line 891 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_3)
#line 891 "declarative_execution.m"
{
#line 894 "declarative_execution.m"
  {
#line 894 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 897 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__search_trace_node_store_3_p_0

	MR_Word Id;
	MR_Word Node;
	MR_bool SUCCESS_INDICATOR;

	Id =  mdb__declarative_execution__Id_2 ;
		{
#line 897 "declarative_execution.m"

    Node = Id;
    SUCCESS_INDICATOR = (Id != (MR_Word) NULL);

#line 12515 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__Node_3  = Node;
#line 897 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 894 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 894 "declarative_execution.m"
  }
#line 891 "declarative_execution.m"
}

#line 777 "declarative_execution.m"
static MR_Box MR_CALL 
mdb__declarative_execution__step_over_redo_or_call_3_f_0(
#line 777 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24,
#line 777 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_5,
#line 777 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Call_6,
#line 777 "declarative_execution.m"
  MR_Box mdb__declarative_execution__MaybeRedo_7)
#line 777 "declarative_execution.m"
{
#line 782 "declarative_execution.m"
  {
#line 782 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 782 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Next_8;
#line 782 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Redo_9;

#line 780 "declarative_execution.m"
    {
#line 780 "declarative_execution.m"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24, mdb__declarative_execution__Store_5, mdb__declarative_execution__MaybeRedo_7, &mdb__declarative_execution__Redo_9);
    }
#line 782 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 781 "declarative_execution.m"
      {
#line 781 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_10_10;
#line 781 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_11_11;
#line 781 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_12_12;
#line 781 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_13_13;

#line 781 "declarative_execution.m"
        mdb__declarative_execution__Next_8 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 0));
#line 781 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 1));
#line 781 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 2)));
#line 781 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 3)));
#line 781 "declarative_execution.m"
        mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Redo_9, (MR_Integer) 4)));
#line 781 "declarative_execution.m"
      }
#line 782 "declarative_execution.m"
    else
#line 783 "declarative_execution.m"
      {
#line 783 "declarative_execution.m"
        MR_Word mdb__declarative_execution__CallNode_14;
#line 784 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_15_15;
#line 784 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_16_16;
#line 784 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_17_17;
#line 784 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_18_18;
#line 784 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_19_19;
#line 784 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_20_20;
#line 784 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_21_21;
#line 784 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_22_22;
#line 784 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_23_23;

#line 783 "declarative_execution.m"
        {
#line 783 "declarative_execution.m"
          mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_24, mdb__declarative_execution__Store_5, mdb__declarative_execution__Call_6, &mdb__declarative_execution__CallNode_14);
        }
#line 784 "declarative_execution.m"
        mdb__declarative_execution__Next_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 0));
#line 784 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 1));
#line 784 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 2)));
#line 784 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 3)));
#line 784 "declarative_execution.m"
        mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 4)));
#line 784 "declarative_execution.m"
        mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 5)));
#line 784 "declarative_execution.m"
        mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 6)));
#line 784 "declarative_execution.m"
        mdb__declarative_execution__V_21_21 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 7)));
#line 784 "declarative_execution.m"
        mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 8)));
#line 784 "declarative_execution.m"
        mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_14, (MR_Integer) 9)));
#line 783 "declarative_execution.m"
      }
#line 782 "declarative_execution.m"
    return mdb__declarative_execution__Next_8;
#line 782 "declarative_execution.m"
  }
#line 777 "declarative_execution.m"
}

#line 690 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__find_prev_contour_3_p_1(
#line 690 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67,
#line 690 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 690 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5,
#line 690 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__OnContour_6)
#line 690 "declarative_execution.m"
{
#line 699 "declarative_execution.m"
  {
#line 699 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 699 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 703 "declarative_execution.m"
      {
#line 703 "declarative_execution.m"
        MR_Box mdb__declarative_execution__Exit_15 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 703 "declarative_execution.m"
        MR_Word mdb__declarative_execution__ExitNode_19;
#line 703 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 703 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 703 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 703 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 705 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_60_60;
#line 705 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_61_61;
#line 705 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_62_62;
#line 705 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_63_63;
#line 705 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_64_64;
#line 705 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_65_65;
#line 705 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_66_66;

#line 704 "declarative_execution.m"
        {
#line 704 "declarative_execution.m"
          mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Exit_15, &mdb__declarative_execution__ExitNode_19);
        }
#line 705 "declarative_execution.m"
        *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 0));
#line 705 "declarative_execution.m"
        mdb__declarative_execution__V_60_60 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 1));
#line 705 "declarative_execution.m"
        mdb__declarative_execution__V_61_61 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 2));
#line 705 "declarative_execution.m"
        mdb__declarative_execution__V_62_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 3)));
#line 705 "declarative_execution.m"
        mdb__declarative_execution__V_63_63 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 4)));
#line 705 "declarative_execution.m"
        mdb__declarative_execution__V_64_64 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 5)));
#line 705 "declarative_execution.m"
        mdb__declarative_execution__V_65_65 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 6)));
#line 705 "declarative_execution.m"
        mdb__declarative_execution__V_66_66 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_19, (MR_Integer) 7)));
#line 703 "declarative_execution.m"
      }
#line 699 "declarative_execution.m"
    else
#line 699 "declarative_execution.m"
      if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 699 "declarative_execution.m"
        {
#line 699 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 699 "declarative_execution.m"
          MR_Word mdb__declarative_execution__CallNode_13;
#line 699 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 699 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 699 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 699 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 699 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 701 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_51_51;
#line 701 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_52_52;
#line 701 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_53_53;
#line 701 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_54_54;
#line 701 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_55_55;
#line 701 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_56_56;
#line 701 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_57_57;
#line 701 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_58_58;
#line 701 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_59_59;

#line 700 "declarative_execution.m"
          {
#line 700 "declarative_execution.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, &mdb__declarative_execution__CallNode_13);
          }
#line 701 "declarative_execution.m"
          *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 0));
#line 701 "declarative_execution.m"
          mdb__declarative_execution__V_51_51 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 1));
#line 701 "declarative_execution.m"
          mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 2)));
#line 701 "declarative_execution.m"
          mdb__declarative_execution__V_53_53 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 3)));
#line 701 "declarative_execution.m"
          mdb__declarative_execution__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 4)));
#line 701 "declarative_execution.m"
          mdb__declarative_execution__V_55_55 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 5)));
#line 701 "declarative_execution.m"
          mdb__declarative_execution__V_56_56 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 6)));
#line 701 "declarative_execution.m"
          mdb__declarative_execution__V_57_57 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 7)));
#line 701 "declarative_execution.m"
          mdb__declarative_execution__V_58_58 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 8)));
#line 701 "declarative_execution.m"
          mdb__declarative_execution__V_59_59 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_13, (MR_Integer) 9)));
#line 699 "declarative_execution.m"
        }
#line 699 "declarative_execution.m"
      else
#line 707 "declarative_execution.m"
        {
#line 707 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Neg_21 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 707 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_50_50;
#line 707 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_20_20 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 707 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 708 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_23_23;
#line 708 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_24_24;

#line 708 "declarative_execution.m"
          {
#line 708 "declarative_execution.m"
            mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_67, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_21, &mdb__declarative_execution__V_50_50);
          }
#line 708 "declarative_execution.m"
          *mdb__declarative_execution__OnContour_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 1));
#line 708 "declarative_execution.m"
          mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 2)));
#line 708 "declarative_execution.m"
          mdb__declarative_execution__V_24_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_50_50, (MR_Integer) 3)));
#line 707 "declarative_execution.m"
        }
#line 699 "declarative_execution.m"
  }
#line 690 "declarative_execution.m"
}

#line 594 "declarative_execution.m"
static void MR_CALL 
mdb__declarative_execution__cache_proc_defn_rep_2_p_0(
#line 594 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 594 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ProcDefnRep_2)
#line 594 "declarative_execution.m"
{
#line 599 "declarative_execution.m"
  {
#line 599 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 602 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__cache_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_1 ;
	ProcDefnRep =  mdb__declarative_execution__ProcDefnRep_2 ;
		{
#line 602 "declarative_execution.m"

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_defn_rep: %p %x\n", ProcLayout, ProcDefnRep);
#endif
    MR_insert_proc_defn_rep(ProcLayout, ProcDefnRep);

#line 12847 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
#line 602 "declarative_execution.m"
}
#line 599 "declarative_execution.m"
  }
#line 594 "declarative_execution.m"
}

#line 555 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0(
#line 555 "declarative_execution.m"
  MR_Box mdb__declarative_execution__ProcLayout_1,
#line 555 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__ProcDefnRep_2)
#line 555 "declarative_execution.m"
{
#line 562 "declarative_execution.m"
  {
#line 562 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 565 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__have_cached_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_1 ;
		{
#line 565 "declarative_execution.m"

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

#line 12897 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__ProcDefnRep_2  = ProcDefnRep;
#line 565 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 562 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 562 "declarative_execution.m"
  }
#line 555 "declarative_execution.m"
}

#line 516 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__call_node_bytecode_layout_2_p_0(
#line 516 "declarative_execution.m"
  MR_Box mdb__declarative_execution__CallLabelLayout_1,
#line 516 "declarative_execution.m"
  MR_Box * mdb__declarative_execution__ProcLayout_2)
#line 516 "declarative_execution.m"
{
#line 523 "declarative_execution.m"
  {
#line 523 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 526 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_bytecode_layout_2_p_0

	const MR_LabelLayout * CallLabelLayout;
	const MR_ProcLayout * ProcLayout;
	MR_bool SUCCESS_INDICATOR;

	CallLabelLayout = (const MR_LabelLayout *) mdb__declarative_execution__CallLabelLayout_1 ;
		{
#line 526 "declarative_execution.m"

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

#line 12953 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 *mdb__declarative_execution__ProcLayout_2  = (MR_Box) ProcLayout;
#line 526 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 523 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 523 "declarative_execution.m"
  }
#line 516 "declarative_execution.m"
}

#line 463 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__user_arg_num_3_p_0(
#line 463 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 463 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 463 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__ArgNum_3)
#line 463 "declarative_execution.m"
{
#line 1527 "declarative_execution.m"
  {
#line 1527 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1527 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1528 "declarative_execution.m"
      {
#line 1528 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__AnyArgNum_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1528 "declarative_execution.m"
        MR_Word mdb__declarative_execution__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1528 "declarative_execution.m"
        MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1529 "declarative_execution.m"
        {
#line 1529 "declarative_execution.m"
          mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(mdb__declarative_execution__Args_8, mdb__declarative_execution__AnyArgNum_6, (MR_Integer) 1, mdb__declarative_execution__ArgNum_3);
#line 1529 "declarative_execution.m"
          return;
        }
#line 1528 "declarative_execution.m"
      }
#line 1527 "declarative_execution.m"
    else
#line 1527 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1531 "declarative_execution.m"
        {
#line 1531 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__AnyArgNumFromBack_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1531 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1531 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_15_15;
#line 1531 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_17_17;
#line 1531 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_18_18;
#line 1530 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1533 "declarative_execution.m"
          {
#line 1533 "declarative_execution.m"
            mdb__declarative_execution__V_18_18 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_13);
          }
#line 1533 "declarative_execution.m"
          mdb__declarative_execution__V_17_17 = (mdb__declarative_execution__V_18_18 - mdb__declarative_execution__AnyArgNumFromBack_11);
#line 1533 "declarative_execution.m"
          mdb__declarative_execution__V_15_15 = (mdb__declarative_execution__V_17_17 + (MR_Integer) 1);
#line 1532 "declarative_execution.m"
          {
#line 1532 "declarative_execution.m"
            mdb__declarative_execution__arg_num_to_head_var_num_4_p_0(mdb__declarative_execution__Args_13, mdb__declarative_execution__V_15_15, (MR_Integer) 1, mdb__declarative_execution__ArgNum_3);
#line 1532 "declarative_execution.m"
            return;
          }
#line 1531 "declarative_execution.m"
        }
#line 1527 "declarative_execution.m"
      else
#line 1527 "declarative_execution.m"
        *mdb__declarative_execution__ArgNum_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1527 "declarative_execution.m"
  }
#line 463 "declarative_execution.m"
}

#line 461 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__absolute_arg_num_3_p_0(
#line 461 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 461 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__2_2,
#line 461 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__HeadVar__3_3)
#line 461 "declarative_execution.m"
{
#line 1522 "declarative_execution.m"
  {
#line 1522 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1522 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 1522 "declarative_execution.m"
      *mdb__declarative_execution__HeadVar__3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1522 "declarative_execution.m"
    else
#line 1522 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 1525 "declarative_execution.m"
        {
#line 1525 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__M_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1525 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Args_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1525 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14;
#line 1525 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_15_15;
#line 1525 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1525 "declarative_execution.m"
          {
#line 1525 "declarative_execution.m"
            mdb__declarative_execution__V_15_15 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_13);
          }
#line 1525 "declarative_execution.m"
          mdb__declarative_execution__V_14_14 = (mdb__declarative_execution__V_15_15 - mdb__declarative_execution__M_11);
#line 1525 "declarative_execution.m"
          *mdb__declarative_execution__HeadVar__3_3 = (mdb__declarative_execution__V_14_14 + (MR_Integer) 1);
#line 1525 "declarative_execution.m"
        }
#line 1522 "declarative_execution.m"
      else
#line 1523 "declarative_execution.m"
        {
#line 1523 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1523 "declarative_execution.m"
          MR_Word mdb__declarative_execution__Args_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 1)));
#line 1523 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__2_2, (MR_Integer) 0)));

#line 1524 "declarative_execution.m"
          {
#line 1524 "declarative_execution.m"
            mdb__declarative_execution__head_var_num_to_arg_num_4_p_0(mdb__declarative_execution__Args_8, mdb__declarative_execution__N_6, (MR_Integer) 1, mdb__declarative_execution__HeadVar__3_3);
#line 1524 "declarative_execution.m"
            return;
          }
#line 1523 "declarative_execution.m"
        }
#line 1522 "declarative_execution.m"
  }
#line 461 "declarative_execution.m"
}

#line 1500 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0_1(
#line 1500 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1500 "declarative_execution.m"
  MR_Box mdb__declarative_execution__wrapper_arg_1)
#line 1500 "declarative_execution.m"
{
#line 1500 "declarative_execution.m"
  {
#line 1500 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1500 "declarative_execution.m"
    MR_Box mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;

#line 1500 "declarative_execution.m"
    {
#line 1500 "declarative_execution.m"
      return mdb__declarative_execution__succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1));
    }
#line 1500 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1500 "declarative_execution.m"
  }
#line 1500 "declarative_execution.m"
}

#line 458 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__select_arg_at_pos_3_p_0(
#line 458 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ArgPos_4,
#line 458 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args0_5,
#line 458 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Arg_6)
#line 458 "declarative_execution.m"
{
#line 1507 "declarative_execution.m"
  {
#line 1507 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1507 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__N_7;
#line 1507 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Args_10;
#line 1520 "declarative_execution.m"
    MR_Box mdb__declarative_execution__conv0_Arg_6;

#line 13175 "mdb.declarative_execution.c"
    if (((MR_tag((MR_Word) mdb__declarative_execution__ArgPos_4)) == (MR_mktag((MR_Integer) 1))))
#line 13177 "mdb.declarative_execution.c"
      {
#line 1512 "declarative_execution.m"
        mdb__declarative_execution__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
#line 1497 "declarative_execution.m"
        mdb__declarative_execution__Args_10 = mdb__declarative_execution__Args0_5;
#line 13183 "mdb.declarative_execution.c"
      }
#line 13185 "mdb.declarative_execution.c"
    else
#line 13187 "mdb.declarative_execution.c"
      if (((MR_tag((MR_Word) mdb__declarative_execution__ArgPos_4)) == (MR_mktag((MR_Integer) 2))))
#line 13189 "mdb.declarative_execution.c"
        {
#line 13191 "mdb.declarative_execution.c"
          MR_Integer mdb__declarative_execution__M_9 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
#line 13193 "mdb.declarative_execution.c"
          MR_Integer mdb__declarative_execution__V_11_11;
#line 13195 "mdb.declarative_execution.c"
          MR_Integer mdb__declarative_execution__V_12_12;

#line 1516 "declarative_execution.m"
          {
#line 1516 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = mercury__list__length_1_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args0_5);
          }
#line 1516 "declarative_execution.m"
          mdb__declarative_execution__V_11_11 = (mdb__declarative_execution__V_12_12 - mdb__declarative_execution__M_9);
#line 1516 "declarative_execution.m"
          mdb__declarative_execution__N_7 = (mdb__declarative_execution__V_11_11 + (MR_Integer) 1);
#line 1497 "declarative_execution.m"
          mdb__declarative_execution__Args_10 = mdb__declarative_execution__Args0_5;
#line 13209 "mdb.declarative_execution.c"
        }
#line 13211 "mdb.declarative_execution.c"
      else
#line 13213 "mdb.declarative_execution.c"
        {
#line 1509 "declarative_execution.m"
          mdb__declarative_execution__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ArgPos_4, (MR_Integer) 0)));
#line 1500 "declarative_execution.m"
          {
#line 1500 "declarative_execution.m"
            mdb__declarative_execution__Args_10 = mercury__list__filter_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mdb__declarative_execution_scalar_common_2[3], mdb__declarative_execution__Args0_5);
          }
#line 13222 "mdb.declarative_execution.c"
        }
#line 1520 "declarative_execution.m"
    {
#line 1520 "declarative_execution.m"
      mercury__list__det_index1_3_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, mdb__declarative_execution__Args_10, mdb__declarative_execution__N_7, &mdb__declarative_execution__conv0_Arg_6);
    }
#line 1520 "declarative_execution.m"
    *mdb__declarative_execution__Arg_6 = ((MR_Word) mdb__declarative_execution__conv0_Arg_6);
#line 1507 "declarative_execution.m"
  }
#line 458 "declarative_execution.m"
}

#line 456 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__is_user_visible_arg_1_p_0(
#line 456 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 456 "declarative_execution.m"
{
#line 1505 "declarative_execution.m"
  {
#line 1505 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1505 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0)));
#line 1505 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1)));
#line 1505 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));

#line 1505 "declarative_execution.m"
    mdb__declarative_execution__succeeded = (mdb__declarative_execution__V_4_4 == (MR_Integer) 1);
#line 1505 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1505 "declarative_execution.m"
  }
#line 456 "declarative_execution.m"
}

#line 454 "declarative_execution.m"
MR_Word MR_CALL 
mdb__declarative_execution__chosen_head_vars_presentation_0_f_0(void)
#line 454 "declarative_execution.m"
{
#line 1503 "declarative_execution.m"
  {
#line 1503 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1503 "declarative_execution.m"
    return (MR_Integer) 1;
#line 1503 "declarative_execution.m"
  }
#line 454 "declarative_execution.m"
}

#line 1500 "declarative_execution.m"
static MR_bool MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0_1(
#line 1500 "declarative_execution.m"
  MR_Box mdb__declarative_execution__closure_arg,
#line 1500 "declarative_execution.m"
  MR_Box mdb__declarative_execution__wrapper_arg_1)
#line 1500 "declarative_execution.m"
{
#line 1500 "declarative_execution.m"
  {
#line 1500 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1500 "declarative_execution.m"
    MR_Box mdb__declarative_execution__closure = mdb__declarative_execution__closure_arg;

#line 1500 "declarative_execution.m"
    {
#line 1500 "declarative_execution.m"
      return mdb__declarative_execution__succeeded = mdb__declarative_execution__is_user_visible_arg_1_p_0(((MR_Word) mdb__declarative_execution__wrapper_arg_1));
    }
#line 1500 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 1500 "declarative_execution.m"
  }
#line 1500 "declarative_execution.m"
}

#line 451 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__maybe_filter_headvars_3_p_0(
#line 451 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Which_4,
#line 451 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Args0_5,
#line 451 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Args_6)
#line 451 "declarative_execution.m"
{
#line 1496 "declarative_execution.m"
  {
#line 1496 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 1496 "declarative_execution.m"
    if ((mdb__declarative_execution__Which_4 == (MR_Integer) 0))
#line 1497 "declarative_execution.m"
      *mdb__declarative_execution__Args_6 = mdb__declarative_execution__Args0_5;
#line 1496 "declarative_execution.m"
    else
#line 1499 "declarative_execution.m"
      {
#line 1500 "declarative_execution.m"
        {
#line 1500 "declarative_execution.m"
          *mdb__declarative_execution__Args_6 = mercury__list__filter_2_f_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_atom_arg_0, (MR_Word) &mdb__declarative_execution_scalar_common_2[2], mdb__declarative_execution__Args0_5);
        }
#line 1499 "declarative_execution.m"
      }
#line 1496 "declarative_execution.m"
  }
#line 451 "declarative_execution.m"
}

#line 423 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__save_trace_node_store_5_p_0(
#line 423 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Stream_6,
#line 423 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Store_7,
#line 423 "declarative_execution.m"
  MR_Word mdb__declarative_execution__NodeId_8)
#line 423 "declarative_execution.m"
{
#line 1424 "declarative_execution.m"
  {
#line 1424 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1424 "declarative_execution.m"
    MR_Word mdb__declarative_execution__TypeCtorInfo_22_22 = (MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0;
#line 1424 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Map0_10;
#line 1424 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Key_11;
#line 1424 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Map_12;
#line 1424 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_15_15;

#line 1425 "declarative_execution.m"
    {
#line 1425 "declarative_execution.m"
      mercury__map__init_1_p_0(mdb__declarative_execution__TypeCtorInfo_22_22, (MR_Word) &mdb__declarative_execution_scalar_common_1[0], &mdb__declarative_execution__Map0_10);
    }
#line 1452 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__save_trace_node_store_5_p_0

	MR_Word Id;
	MR_Word Key;

	Id =  mdb__declarative_execution__NodeId_8 ;
		{
#line 1452 "declarative_execution.m"

    Key = (MR_Integer) Id;

#line 13388 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	 mdb__declarative_execution__Key_11  = Key;
#line 1452 "declarative_execution.m"
}
#line 1427 "declarative_execution.m"
    mdb__declarative_execution__V_15_15 = (MR_Word) mdb__declarative_execution__Map0_10;
#line 1427 "declarative_execution.m"
    {
#line 1427 "declarative_execution.m"
      mdb__declarative_execution__node_map_4_p_0(mdb__declarative_execution__Store_7, mdb__declarative_execution__NodeId_8, mdb__declarative_execution__V_15_15, &mdb__declarative_execution__Map_12);
    }
#line 1428 "declarative_execution.m"
    {
#line 1428 "declarative_execution.m"
      mercury__io__write_4_p_0(mdb__declarative_execution__TypeCtorInfo_22_22, mdb__declarative_execution__Stream_6, ((MR_Box) (mdb__declarative_execution__Key_11)));
    }
#line 1429 "declarative_execution.m"
    {
#line 1429 "declarative_execution.m"
      mercury__io__write_string_4_p_0(mdb__declarative_execution__Stream_6, (MR_String) ".\n");
    }
#line 1430 "declarative_execution.m"
    {
#line 1430 "declarative_execution.m"
      mercury__io__write_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0, mdb__declarative_execution__Stream_6, ((MR_Box) (mdb__declarative_execution__Map_12)));
    }
#line 1431 "declarative_execution.m"
    {
#line 1431 "declarative_execution.m"
      mercury__io__write_string_4_p_0(mdb__declarative_execution__Stream_6, (MR_String) ".\n");
#line 1431 "declarative_execution.m"
      return;
    }
#line 1424 "declarative_execution.m"
  }
#line 423 "declarative_execution.m"
}

#line 417 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__load_trace_node_map_5_p_0(
#line 417 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Stream_6,
#line 417 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Map_7,
#line 417 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Key_8)
#line 417 "declarative_execution.m"
{
#line 1399 "declarative_execution.m"
  {
#line 1399 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 1399 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ResKey_10;
#line 1399 "declarative_execution.m"
    MR_String mdb__declarative_execution__Msg_11;
#line 1399 "declarative_execution.m"
    MR_Word mdb__declarative_execution__ResMap_13;

#line 1400 "declarative_execution.m"
    {
#line 1400 "declarative_execution.m"
      mercury__io__read_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_key_0, mdb__declarative_execution__Stream_6, &mdb__declarative_execution__ResKey_10);
    }
#line 1403 "declarative_execution.m"
    if ((mdb__declarative_execution__ResKey_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
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
    else
#line 1403 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__ResKey_10)) == (MR_mktag((MR_Integer) 2))))
#line 1407 "declarative_execution.m"
        {
#line 1407 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_18_18;
#line 1407 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_12_12;

#line 1407 "declarative_execution.m"
          mdb__declarative_execution__Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResKey_10, (MR_Integer) 0)));
#line 1407 "declarative_execution.m"
          mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResKey_10, (MR_Integer) 1)));
#line 1408 "declarative_execution.m"
          {
#line 1408 "declarative_execution.m"
            mdb__declarative_execution__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1408 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_18_18, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
#line 1408 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_18_18, 1) = ((MR_Box) (mdb__declarative_execution__Msg_11));
#line 1408 "declarative_execution.m"
          }
#line 1408 "declarative_execution.m"
          {
#line 1408 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_execution__V_18_18)));
#line 1408 "declarative_execution.m"
            return;
          }
#line 1407 "declarative_execution.m"
        }
#line 1403 "declarative_execution.m"
      else
#line 1402 "declarative_execution.m"
        *mdb__declarative_execution__Key_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ResKey_10, (MR_Integer) 0)));
#line 1410 "declarative_execution.m"
    {
#line 1410 "declarative_execution.m"
      mercury__io__read_4_p_0((MR_Word) &mdb__declarative_execution__mdb__declarative_execution__type_ctor_info_trace_node_map_0, mdb__declarative_execution__Stream_6, &mdb__declarative_execution__ResMap_13);
    }
#line 1413 "declarative_execution.m"
    if ((mdb__declarative_execution__ResMap_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 1414 "declarative_execution.m"
      {
#line 1415 "declarative_execution.m"
        {
#line 1415 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (MR_mkword(MR_mktag(1), &mdb__declarative_execution_scalar_common_1[21]))));
#line 1415 "declarative_execution.m"
          return;
        }
#line 1414 "declarative_execution.m"
      }
#line 1413 "declarative_execution.m"
    else
#line 1413 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__ResMap_13)) == (MR_mktag((MR_Integer) 2))))
#line 1417 "declarative_execution.m"
        {
#line 1417 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_24_24;
#line 1417 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14;

#line 1417 "declarative_execution.m"
          mdb__declarative_execution__Msg_11 = ((MR_String) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResMap_13, (MR_Integer) 0)));
#line 1417 "declarative_execution.m"
          mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__ResMap_13, (MR_Integer) 1)));
#line 1418 "declarative_execution.m"
          {
#line 1418 "declarative_execution.m"
            mdb__declarative_execution__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 1418 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_24_24, 0) = ((MR_Box) ((MR_String) "load_trace_node_map"));
#line 1418 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), mdb__declarative_execution__V_24_24, 1) = ((MR_Box) (mdb__declarative_execution__Msg_11));
#line 1418 "declarative_execution.m"
          }
#line 1418 "declarative_execution.m"
          {
#line 1418 "declarative_execution.m"
            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (mdb__declarative_execution__V_24_24)));
#line 1418 "declarative_execution.m"
            return;
          }
#line 1417 "declarative_execution.m"
        }
#line 1413 "declarative_execution.m"
      else
#line 1412 "declarative_execution.m"
        *mdb__declarative_execution__Map_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ResMap_13, (MR_Integer) 0)));
#line 1399 "declarative_execution.m"
  }
#line 417 "declarative_execution.m"
}

#line 411 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__disj_node_from_id_3_p_0(
#line 411 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16,
#line 411 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 411 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 411 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 411 "declarative_execution.m"
{
#line 864 "declarative_execution.m"
  {
#line 864 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 864 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 13587 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13589 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;

#line 13592 "mdb.declarative_execution.c"
    {
#line 13594 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 13597 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 13599 "mdb.declarative_execution.c"
      {
#line 13601 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 13603 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 13605 "mdb.declarative_execution.c"
      }
#line 858 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 860 "declarative_execution.m"
      {
#line 860 "declarative_execution.m"
        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 859 "declarative_execution.m"
          mdb__declarative_execution__succeeded = MR_TRUE;
#line 860 "declarative_execution.m"
        else
#line 860 "declarative_execution.m"
          if (((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 860 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_TRUE;
#line 860 "declarative_execution.m"
          else
#line 860 "declarative_execution.m"
            mdb__declarative_execution__succeeded = MR_FALSE;
#line 860 "declarative_execution.m"
      }
#line 864 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 863 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 864 "declarative_execution.m"
    else
#line 865 "declarative_execution.m"
      {
#line 865 "declarative_execution.m"
        {
#line 865 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[20])));
#line 865 "declarative_execution.m"
          return;
        }
#line 865 "declarative_execution.m"
      }
#line 864 "declarative_execution.m"
  }
#line 411 "declarative_execution.m"
}

#line 403 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__first_disj_node_from_id_3_p_0(
#line 403 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13,
#line 403 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 403 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 403 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 403 "declarative_execution.m"
{
#line 851 "declarative_execution.m"
  {
#line 851 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 851 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 13668 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13670 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 848 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 848 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;

#line 13677 "mdb.declarative_execution.c"
    {
#line 13679 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_13), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 13682 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 13684 "mdb.declarative_execution.c"
      {
#line 13686 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 13688 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 13690 "mdb.declarative_execution.c"
      }
#line 847 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 847 "declarative_execution.m"
      {
#line 848 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 3)));
#line 848 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 848 "declarative_execution.m"
          {
#line 848 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 848 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 848 "declarative_execution.m"
          }
#line 847 "declarative_execution.m"
      }
#line 851 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 850 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 851 "declarative_execution.m"
    else
#line 852 "declarative_execution.m"
      {
#line 852 "declarative_execution.m"
        {
#line 852 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[19])));
#line 852 "declarative_execution.m"
          return;
        }
#line 852 "declarative_execution.m"
      }
#line 851 "declarative_execution.m"
  }
#line 403 "declarative_execution.m"
}

#line 398 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__neg_node_from_id_3_p_0(
#line 398 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14,
#line 398 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 398 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 398 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 398 "declarative_execution.m"
{
#line 841 "declarative_execution.m"
  {
#line 841 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 841 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 13751 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13753 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 838 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 838 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 838 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;

#line 13762 "mdb.declarative_execution.c"
    {
#line 13764 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 13767 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 13769 "mdb.declarative_execution.c"
      {
#line 13771 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 13773 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 13775 "mdb.declarative_execution.c"
      }
#line 837 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 837 "declarative_execution.m"
      {
#line 838 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 8)));
#line 838 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 838 "declarative_execution.m"
          {
#line 838 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 838 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 838 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
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
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[18])));
#line 842 "declarative_execution.m"
          return;
        }
#line 842 "declarative_execution.m"
      }
#line 841 "declarative_execution.m"
  }
#line 398 "declarative_execution.m"
}

#line 393 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__cond_node_from_id_3_p_0(
#line 393 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14,
#line 393 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 393 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 393 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 393 "declarative_execution.m"
{
#line 831 "declarative_execution.m"
  {
#line 831 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 831 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 13838 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13840 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 828 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 828 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 828 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;

#line 13849 "mdb.declarative_execution.c"
    {
#line 13851 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_14), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 13854 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 13856 "mdb.declarative_execution.c"
      {
#line 13858 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 13860 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 13862 "mdb.declarative_execution.c"
      }
#line 827 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 827 "declarative_execution.m"
      {
#line 828 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node0_7, (MR_Integer) 0)))) == (MR_Integer) 5)));
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
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[17])));
#line 832 "declarative_execution.m"
          return;
        }
#line 832 "declarative_execution.m"
      }
#line 831 "declarative_execution.m"
  }
#line 393 "declarative_execution.m"
}

#line 388 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__exit_node_from_id_3_p_0(
#line 388 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19,
#line 388 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 388 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 388 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 388 "declarative_execution.m"
{
#line 821 "declarative_execution.m"
  {
#line 821 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 821 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 13925 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19, (MR_Integer) 0)), (MR_Integer) 5)));
#line 13927 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 818 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 818 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 818 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_10_10;
#line 818 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_11_11;
#line 818 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;
#line 818 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_13_13;
#line 818 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_14_14;
#line 818 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_15_15;

#line 13946 "mdb.declarative_execution.c"
    {
#line 13948 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_19), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 13951 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 13953 "mdb.declarative_execution.c"
      {
#line 13955 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 13957 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 13959 "mdb.declarative_execution.c"
      }
#line 817 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 817 "declarative_execution.m"
      {
#line 818 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 1)));
#line 818 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 818 "declarative_execution.m"
          {
#line 818 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
#line 818 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 818 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 2));
#line 818 "declarative_execution.m"
            mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 818 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
#line 818 "declarative_execution.m"
            mdb__declarative_execution__V_13_13 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 5)));
#line 818 "declarative_execution.m"
            mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 6)));
#line 818 "declarative_execution.m"
            mdb__declarative_execution__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node0_7, (MR_Integer) 7)));
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
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[16])));
#line 822 "declarative_execution.m"
          return;
        }
#line 822 "declarative_execution.m"
      }
#line 821 "declarative_execution.m"
  }
#line 388 "declarative_execution.m"
}

#line 381 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__maybe_redo_node_from_id_3_p_0(
#line 381 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16,
#line 381 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 381 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 381 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 381 "declarative_execution.m"
{
#line 804 "declarative_execution.m"
  {
#line 804 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 804 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14032 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14034 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 807 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 807 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 807 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;
#line 807 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_11_11;
#line 807 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;

#line 14047 "mdb.declarative_execution.c"
    {
#line 14049 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_16), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14052 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14054 "mdb.declarative_execution.c"
      {
#line 14056 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14058 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14060 "mdb.declarative_execution.c"
      }
#line 804 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 804 "declarative_execution.m"
      {
#line 807 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 2)));
#line 807 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 807 "declarative_execution.m"
          {
#line 807 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
#line 807 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 807 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 807 "declarative_execution.m"
            mdb__declarative_execution__V_11_11 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 807 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
#line 809 "declarative_execution.m"
            *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 807 "declarative_execution.m"
          }
#line 807 "declarative_execution.m"
        else
#line 811 "declarative_execution.m"
          {
#line 811 "declarative_execution.m"
            {
#line 811 "declarative_execution.m"
              mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[15])));
            }
#line 811 "declarative_execution.m"
          }
#line 810 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 804 "declarative_execution.m"
      }
#line 804 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 804 "declarative_execution.m"
  }
#line 381 "declarative_execution.m"
}

#line 373 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__call_node_from_id_3_p_0(
#line 373 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21,
#line 373 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 373 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 373 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 373 "declarative_execution.m"
{
#line 800 "declarative_execution.m"
  {
#line 800 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 800 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14127 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14129 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;
#line 797 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_8_8;
#line 797 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_9_9;
#line 797 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_10_10;
#line 797 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 797 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;
#line 797 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_13_13;
#line 797 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_14_14;
#line 797 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_15_15;
#line 797 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_16_16;
#line 797 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17;

#line 14152 "mdb.declarative_execution.c"
    {
#line 14154 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_21), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14157 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14159 "mdb.declarative_execution.c"
      {
#line 14161 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14163 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14165 "mdb.declarative_execution.c"
      }
#line 796 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 796 "declarative_execution.m"
      {
#line 797 "declarative_execution.m"
        mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__Node0_7)) == (MR_mktag((MR_Integer) 0)));
#line 797 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 797 "declarative_execution.m"
          {
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_8_8 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 0));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 1));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 2)));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 3)));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 4)));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 5)));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 6)));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_15_15 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 7)));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 8)));
#line 797 "declarative_execution.m"
            mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__Node0_7, (MR_Integer) 9)));
#line 797 "declarative_execution.m"
          }
#line 796 "declarative_execution.m"
      }
#line 800 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 799 "declarative_execution.m"
      *mdb__declarative_execution__Node_6 = mdb__declarative_execution__Node0_7;
#line 800 "declarative_execution.m"
    else
#line 801 "declarative_execution.m"
      {
#line 801 "declarative_execution.m"
        {
#line 801 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[14])));
#line 801 "declarative_execution.m"
          return;
        }
#line 801 "declarative_execution.m"
      }
#line 800 "declarative_execution.m"
  }
#line 373 "declarative_execution.m"
}

#line 367 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__det_trace_node_from_id_3_p_0(
#line 367 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11,
#line 367 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 367 "declarative_execution.m"
  MR_Box mdb__declarative_execution__NodeId_5,
#line 367 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Node_6)
#line 367 "declarative_execution.m"
{
#line 790 "declarative_execution.m"
  {
#line 790 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 790 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Node0_7;
#line 14242 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11, (MR_Integer) 0)), (MR_Integer) 5)));
#line 14244 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_Node0_7;

#line 14247 "mdb.declarative_execution.c"
    {
#line 14249 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_11), mdb__declarative_execution__Store_4, mdb__declarative_execution__NodeId_5, &mdb__declarative_execution__conv1_Node0_7);
    }
#line 14252 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 14254 "mdb.declarative_execution.c"
      {
#line 14256 "mdb.declarative_execution.c"
        mdb__declarative_execution__Node0_7 = ((MR_Word) mdb__declarative_execution__conv1_Node0_7);
#line 14258 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 14260 "mdb.declarative_execution.c"
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
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[13])));
#line 791 "declarative_execution.m"
          return;
        }
#line 791 "declarative_execution.m"
      }
#line 790 "declarative_execution.m"
  }
#line 367 "declarative_execution.m"
}

#line 362 "declarative_execution.m"
MR_Box MR_CALL 
mdb__declarative_execution__step_in_stratum_2_f_0(
#line 362 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90,
#line 362 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 362 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 362 "declarative_execution.m"
{
#line 726 "declarative_execution.m"
  {
#line 726 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 726 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Next_6;

#line 726 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 0))))
#line 769 "declarative_execution.m"
      {
#line 770 "declarative_execution.m"
        {
#line 770 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[10])));
        }
#line 769 "declarative_execution.m"
      }
#line 726 "declarative_execution.m"
    else
#line 726 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 1))))
#line 726 "declarative_execution.m"
        {
#line 726 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 726 "declarative_execution.m"
          MR_Box mdb__declarative_execution__MaybeRedo_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 726 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 726 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 726 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 726 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 726 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 726 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 7)));

#line 727 "declarative_execution.m"
          {
#line 727 "declarative_execution.m"
            return mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, mdb__declarative_execution__MaybeRedo_9);
          }
#line 726 "declarative_execution.m"
        }
#line 726 "declarative_execution.m"
      else
#line 726 "declarative_execution.m"
        if (((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 735 "declarative_execution.m"
          {
#line 735 "declarative_execution.m"
            MR_Box mdb__declarative_execution__Exit_25 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 735 "declarative_execution.m"
            MR_Word mdb__declarative_execution__ExitNode_29;
#line 735 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 735 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_26_26 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 735 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_27_27 = ((MR_Box) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 735 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 737 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_83_83;
#line 737 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_84_84;
#line 737 "declarative_execution.m"
            MR_Word mdb__declarative_execution__V_85_85;
#line 737 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_86_86;
#line 737 "declarative_execution.m"
            MR_Box mdb__declarative_execution__V_87_87;
#line 737 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_88_88;
#line 737 "declarative_execution.m"
            MR_Integer mdb__declarative_execution__V_89_89;

#line 736 "declarative_execution.m"
            {
#line 736 "declarative_execution.m"
              mdb__declarative_execution__exit_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Exit_25, &mdb__declarative_execution__ExitNode_29);
            }
#line 737 "declarative_execution.m"
            mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 0));
#line 737 "declarative_execution.m"
            mdb__declarative_execution__V_83_83 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 1));
#line 737 "declarative_execution.m"
            mdb__declarative_execution__V_84_84 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 2));
#line 737 "declarative_execution.m"
            mdb__declarative_execution__V_85_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 3)));
#line 737 "declarative_execution.m"
            mdb__declarative_execution__V_86_86 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 4)));
#line 737 "declarative_execution.m"
            mdb__declarative_execution__V_87_87 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 5)));
#line 737 "declarative_execution.m"
            mdb__declarative_execution__V_88_88 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 6)));
#line 737 "declarative_execution.m"
            mdb__declarative_execution__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ExitNode_29, (MR_Integer) 7)));
#line 735 "declarative_execution.m"
          }
#line 726 "declarative_execution.m"
        else
#line 726 "declarative_execution.m"
          if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 744 "declarative_execution.m"
            {
#line 744 "declarative_execution.m"
              MR_Box mdb__declarative_execution__Prec_34 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 744 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Status_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 744 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));

#line 748 "declarative_execution.m"
              if ((mdb__declarative_execution__Status_36 == (MR_Integer) 1))
#line 746 "declarative_execution.m"
                {
#line 747 "declarative_execution.m"
                  {
#line 747 "declarative_execution.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[11])));
                  }
#line 746 "declarative_execution.m"
                }
#line 748 "declarative_execution.m"
              else
#line 752 "declarative_execution.m"
                mdb__declarative_execution__Next_6 = mdb__declarative_execution__Prec_34;
#line 744 "declarative_execution.m"
            }
#line 726 "declarative_execution.m"
          else
#line 726 "declarative_execution.m"
            if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 757 "declarative_execution.m"
              {
#line 757 "declarative_execution.m"
                MR_Box mdb__declarative_execution__Cond_40 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 757 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_74_74;
#line 757 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_39_39 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 757 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_41_41 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 758 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_42_42;
#line 758 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_43_43;

#line 758 "declarative_execution.m"
                {
#line 758 "declarative_execution.m"
                  mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Cond_40, &mdb__declarative_execution__V_74_74);
                }
#line 758 "declarative_execution.m"
                mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 1));
#line 758 "declarative_execution.m"
                mdb__declarative_execution__V_42_42 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 2)));
#line 758 "declarative_execution.m"
                mdb__declarative_execution__V_43_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 3)));
#line 757 "declarative_execution.m"
              }
#line 726 "declarative_execution.m"
            else
#line 726 "declarative_execution.m"
              if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 732 "declarative_execution.m"
                {
#line 732 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__Call_80 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 732 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__MaybeRedo_81 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 732 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_19_19 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 732 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 732 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 732 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 732 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_23_23 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 7)));

#line 733 "declarative_execution.m"
                  {
#line 733 "declarative_execution.m"
                    return mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_80, mdb__declarative_execution__MaybeRedo_81);
                  }
#line 732 "declarative_execution.m"
                }
#line 726 "declarative_execution.m"
              else
#line 726 "declarative_execution.m"
                if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 729 "declarative_execution.m"
                  {
#line 729 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__Call_78 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 729 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__MaybeRedo_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 729 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 729 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 729 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_17_17 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 729 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));

#line 730 "declarative_execution.m"
                    {
#line 730 "declarative_execution.m"
                      return mdb__declarative_execution__Next_6 = mdb__declarative_execution__step_over_redo_or_call_3_f_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_78, mdb__declarative_execution__MaybeRedo_79);
                    }
#line 729 "declarative_execution.m"
                  }
#line 726 "declarative_execution.m"
                else
#line 726 "declarative_execution.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 740 "declarative_execution.m"
                    {
#line 740 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_31_31;

#line 740 "declarative_execution.m"
                      mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 740 "declarative_execution.m"
                      mdb__declarative_execution__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 740 "declarative_execution.m"
                    }
#line 726 "declarative_execution.m"
                  else
#line 726 "declarative_execution.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 741 "declarative_execution.m"
                      {
#line 741 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_32_32;
#line 741 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_33_33;

#line 741 "declarative_execution.m"
                        mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 741 "declarative_execution.m"
                        mdb__declarative_execution__V_32_32 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 741 "declarative_execution.m"
                        mdb__declarative_execution__V_33_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 741 "declarative_execution.m"
                      }
#line 726 "declarative_execution.m"
                    else
#line 726 "declarative_execution.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 772 "declarative_execution.m"
                        {
#line 773 "declarative_execution.m"
                          {
#line 773 "declarative_execution.m"
                            mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[12])));
                          }
#line 772 "declarative_execution.m"
                        }
#line 726 "declarative_execution.m"
                      else
#line 726 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 763 "declarative_execution.m"
                          {
#line 763 "declarative_execution.m"
                            MR_Word mdb__declarative_execution__V_72_72;
#line 763 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__Neg_82 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 763 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_49_49 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 763 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_50_50 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 764 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_51_51;
#line 764 "declarative_execution.m"
                            MR_Word mdb__declarative_execution__V_52_52;

#line 764 "declarative_execution.m"
                            {
#line 764 "declarative_execution.m"
                              mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_82, &mdb__declarative_execution__V_72_72);
                            }
#line 764 "declarative_execution.m"
                            mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 1));
#line 764 "declarative_execution.m"
                            mdb__declarative_execution__V_51_51 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 2)));
#line 764 "declarative_execution.m"
                            mdb__declarative_execution__V_52_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_72_72, (MR_Integer) 3)));
#line 763 "declarative_execution.m"
                          }
#line 726 "declarative_execution.m"
                        else
#line 726 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 760 "declarative_execution.m"
                            {
#line 760 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__Neg_45 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 760 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_73_73;
#line 760 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_44_44 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 760 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_46_46 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 761 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_47_47;
#line 761 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_48_48;

#line 761 "declarative_execution.m"
                              {
#line 761 "declarative_execution.m"
                                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_90, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_45, &mdb__declarative_execution__V_73_73);
                              }
#line 761 "declarative_execution.m"
                              mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 1));
#line 761 "declarative_execution.m"
                              mdb__declarative_execution__V_47_47 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 2)));
#line 761 "declarative_execution.m"
                              mdb__declarative_execution__V_48_48 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 3)));
#line 760 "declarative_execution.m"
                            }
#line 726 "declarative_execution.m"
                          else
#line 726 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 739 "declarative_execution.m"
                              {
#line 739 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_30_30;

#line 739 "declarative_execution.m"
                                mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 739 "declarative_execution.m"
                                mdb__declarative_execution__V_30_30 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 739 "declarative_execution.m"
                              }
#line 726 "declarative_execution.m"
                            else
#line 755 "declarative_execution.m"
                              {
#line 755 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_37_37;
#line 755 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_38_38;

#line 755 "declarative_execution.m"
                                mdb__declarative_execution__Next_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 755 "declarative_execution.m"
                                mdb__declarative_execution__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 755 "declarative_execution.m"
                                mdb__declarative_execution__V_38_38 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 755 "declarative_execution.m"
                              }
#line 726 "declarative_execution.m"
    return mdb__declarative_execution__Next_6;
#line 726 "declarative_execution.m"
  }
#line 362 "declarative_execution.m"
}

#line 354 "declarative_execution.m"
MR_Box MR_CALL 
mdb__declarative_execution__step_left_in_contour_2_f_0(
#line 354 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100,
#line 354 "declarative_execution.m"
  MR_Box mdb__declarative_execution__Store_4,
#line 354 "declarative_execution.m"
  MR_Word mdb__declarative_execution__Node_5)
#line 354 "declarative_execution.m"
{
#line 624 "declarative_execution.m"
  {
#line 624 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 624 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Prec_6;

#line 624 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 0))))
#line 657 "declarative_execution.m"
      {
#line 659 "declarative_execution.m"
        {
#line 659 "declarative_execution.m"
          mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[7])));
        }
#line 657 "declarative_execution.m"
      }
#line 624 "declarative_execution.m"
    else
#line 624 "declarative_execution.m"
      if (((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 1))))
#line 624 "declarative_execution.m"
        {
#line 624 "declarative_execution.m"
          MR_Box mdb__declarative_execution__Call_8 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 624 "declarative_execution.m"
          MR_Word mdb__declarative_execution__CallNode_15;
#line 624 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_7_7 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 0));
#line 624 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_9_9 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 624 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 624 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 624 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_12_12 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 624 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_13_13 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 624 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_14_14 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
#line 626 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_82_82;
#line 626 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_83_83;
#line 626 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_84_84;
#line 626 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_85_85;
#line 626 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_86_86;
#line 626 "declarative_execution.m"
          MR_Word mdb__declarative_execution__V_87_87;
#line 626 "declarative_execution.m"
          MR_Box mdb__declarative_execution__V_88_88;
#line 626 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_89_89;
#line 626 "declarative_execution.m"
          MR_Integer mdb__declarative_execution__V_90_90;

#line 625 "declarative_execution.m"
          {
#line 625 "declarative_execution.m"
            mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_8, &mdb__declarative_execution__CallNode_15);
          }
#line 626 "declarative_execution.m"
          mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 0));
#line 626 "declarative_execution.m"
          mdb__declarative_execution__V_82_82 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 1));
#line 626 "declarative_execution.m"
          mdb__declarative_execution__V_83_83 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 2)));
#line 626 "declarative_execution.m"
          mdb__declarative_execution__V_84_84 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 3)));
#line 626 "declarative_execution.m"
          mdb__declarative_execution__V_85_85 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 4)));
#line 626 "declarative_execution.m"
          mdb__declarative_execution__V_86_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 5)));
#line 626 "declarative_execution.m"
          mdb__declarative_execution__V_87_87 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 6)));
#line 626 "declarative_execution.m"
          mdb__declarative_execution__V_88_88 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 7)));
#line 626 "declarative_execution.m"
          mdb__declarative_execution__V_89_89 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 8)));
#line 626 "declarative_execution.m"
          mdb__declarative_execution__V_90_90 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_15, (MR_Integer) 9)));
#line 624 "declarative_execution.m"
        }
#line 624 "declarative_execution.m"
      else
#line 624 "declarative_execution.m"
        if (((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 2))))
#line 682 "declarative_execution.m"
          {
#line 682 "declarative_execution.m"
            mdb__declarative_execution__find_prev_contour_3_p_1(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Node_5, &mdb__declarative_execution__Prec_6);
          }
#line 624 "declarative_execution.m"
        else
#line 624 "declarative_execution.m"
          if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 5))))
#line 639 "declarative_execution.m"
            {
#line 639 "declarative_execution.m"
              MR_Word mdb__declarative_execution__Status_29;
#line 639 "declarative_execution.m"
              MR_Box mdb__declarative_execution__V_28_28;

#line 639 "declarative_execution.m"
              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 639 "declarative_execution.m"
              mdb__declarative_execution__V_28_28 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 639 "declarative_execution.m"
              mdb__declarative_execution__Status_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 643 "declarative_execution.m"
              if ((mdb__declarative_execution__Status_29 == (MR_Integer) 1))
#line 641 "declarative_execution.m"
                {
#line 642 "declarative_execution.m"
                  {
#line 642 "declarative_execution.m"
                    mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[8])));
                  }
#line 641 "declarative_execution.m"
                }
#line 643 "declarative_execution.m"
              else
#line 643 "declarative_execution.m"
                if ((mdb__declarative_execution__Status_29 == (MR_Integer) 0))
#line 645 "declarative_execution.m"
                  {
#line 645 "declarative_execution.m"
                  }
#line 643 "declarative_execution.m"
                else
#line 644 "declarative_execution.m"
                  {
#line 644 "declarative_execution.m"
                  }
#line 639 "declarative_execution.m"
            }
#line 624 "declarative_execution.m"
          else
#line 624 "declarative_execution.m"
            if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 7))))
#line 651 "declarative_execution.m"
              {
#line 651 "declarative_execution.m"
                MR_Box mdb__declarative_execution__Cond_33 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 651 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_74_74;
#line 651 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_32_32 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 651 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_34_34 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 652 "declarative_execution.m"
                MR_Box mdb__declarative_execution__V_35_35;
#line 652 "declarative_execution.m"
                MR_Word mdb__declarative_execution__V_36_36;

#line 652 "declarative_execution.m"
                {
#line 652 "declarative_execution.m"
                  mdb__declarative_execution__cond_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Cond_33, &mdb__declarative_execution__V_74_74);
                }
#line 652 "declarative_execution.m"
                mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 1));
#line 652 "declarative_execution.m"
                mdb__declarative_execution__V_35_35 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 2)));
#line 652 "declarative_execution.m"
                mdb__declarative_execution__V_36_36 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_74_74, (MR_Integer) 3)));
#line 651 "declarative_execution.m"
              }
#line 624 "declarative_execution.m"
            else
#line 624 "declarative_execution.m"
              if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 628 "declarative_execution.m"
                {
#line 628 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__Call_79 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 628 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__CallNode_80;
#line 628 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_16_16 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 628 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_17_17 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 628 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 628 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 628 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_20_20 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 628 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 7)));
#line 630 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_91_91;
#line 630 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_92_92;
#line 630 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_93_93;
#line 630 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_94_94;
#line 630 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_95_95;
#line 630 "declarative_execution.m"
                  MR_Word mdb__declarative_execution__V_96_96;
#line 630 "declarative_execution.m"
                  MR_Box mdb__declarative_execution__V_97_97;
#line 630 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_98_98;
#line 630 "declarative_execution.m"
                  MR_Integer mdb__declarative_execution__V_99_99;

#line 629 "declarative_execution.m"
                  {
#line 629 "declarative_execution.m"
                    mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_79, &mdb__declarative_execution__CallNode_80);
                  }
#line 630 "declarative_execution.m"
                  mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 0));
#line 630 "declarative_execution.m"
                  mdb__declarative_execution__V_91_91 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 1));
#line 630 "declarative_execution.m"
                  mdb__declarative_execution__V_92_92 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 2)));
#line 630 "declarative_execution.m"
                  mdb__declarative_execution__V_93_93 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 3)));
#line 630 "declarative_execution.m"
                  mdb__declarative_execution__V_94_94 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 4)));
#line 630 "declarative_execution.m"
                  mdb__declarative_execution__V_95_95 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 5)));
#line 630 "declarative_execution.m"
                  mdb__declarative_execution__V_96_96 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 6)));
#line 630 "declarative_execution.m"
                  mdb__declarative_execution__V_97_97 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 7)));
#line 630 "declarative_execution.m"
                  mdb__declarative_execution__V_98_98 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 8)));
#line 630 "declarative_execution.m"
                  mdb__declarative_execution__V_99_99 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_80, (MR_Integer) 9)));
#line 628 "declarative_execution.m"
                }
#line 624 "declarative_execution.m"
              else
#line 624 "declarative_execution.m"
                if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 0))))
#line 699 "declarative_execution.m"
                  {
#line 699 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__Call_108 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 699 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__CallNode_113;
#line 699 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_107_107 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 699 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_109_109 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 699 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_110_110 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 4)));
#line 699 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_111_111 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 5)));
#line 699 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_112_112 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 6)));
#line 701 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_151_151;
#line 701 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__V_152_152;
#line 701 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_153_153;
#line 701 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_154_154;
#line 701 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__V_155_155;
#line 701 "declarative_execution.m"
                    MR_Word mdb__declarative_execution__V_156_156;
#line 701 "declarative_execution.m"
                    MR_Box mdb__declarative_execution__V_157_157;
#line 701 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_158_158;
#line 701 "declarative_execution.m"
                    MR_Integer mdb__declarative_execution__V_159_159;

#line 700 "declarative_execution.m"
                    {
#line 700 "declarative_execution.m"
                      mdb__declarative_execution__call_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Call_108, &mdb__declarative_execution__CallNode_113);
                    }
#line 701 "declarative_execution.m"
                    mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 0));
#line 701 "declarative_execution.m"
                    mdb__declarative_execution__V_151_151 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 1));
#line 701 "declarative_execution.m"
                    mdb__declarative_execution__V_152_152 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 2)));
#line 701 "declarative_execution.m"
                    mdb__declarative_execution__V_153_153 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 3)));
#line 701 "declarative_execution.m"
                    mdb__declarative_execution__V_154_154 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 4)));
#line 701 "declarative_execution.m"
                    mdb__declarative_execution__V_155_155 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 5)));
#line 701 "declarative_execution.m"
                    mdb__declarative_execution__V_156_156 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 6)));
#line 701 "declarative_execution.m"
                    mdb__declarative_execution__V_157_157 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 7)));
#line 701 "declarative_execution.m"
                    mdb__declarative_execution__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 8)));
#line 701 "declarative_execution.m"
                    mdb__declarative_execution__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_113, (MR_Integer) 9)));
#line 699 "declarative_execution.m"
                  }
#line 624 "declarative_execution.m"
                else
#line 624 "declarative_execution.m"
                  if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 3))))
#line 634 "declarative_execution.m"
                    {
#line 634 "declarative_execution.m"
                      MR_Box mdb__declarative_execution__V_23_23;

#line 634 "declarative_execution.m"
                      mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 634 "declarative_execution.m"
                      mdb__declarative_execution__V_23_23 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 634 "declarative_execution.m"
                    }
#line 624 "declarative_execution.m"
                  else
#line 624 "declarative_execution.m"
                    if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 4))))
#line 636 "declarative_execution.m"
                      {
#line 636 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__FirstDisj_26 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3));
#line 636 "declarative_execution.m"
                        MR_Word mdb__declarative_execution__V_78_78;
#line 636 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_24_24 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 636 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_25_25 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 637 "declarative_execution.m"
                        MR_Box mdb__declarative_execution__V_27_27;

#line 637 "declarative_execution.m"
                        {
#line 637 "declarative_execution.m"
                          mdb__declarative_execution__first_disj_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__FirstDisj_26, &mdb__declarative_execution__V_78_78);
                        }
#line 637 "declarative_execution.m"
                        mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_78_78, (MR_Integer) 1));
#line 637 "declarative_execution.m"
                        mdb__declarative_execution__V_27_27 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_78_78, (MR_Integer) 2)));
#line 636 "declarative_execution.m"
                      }
#line 624 "declarative_execution.m"
                    else
#line 624 "declarative_execution.m"
                      if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 8))))
#line 661 "declarative_execution.m"
                        {
#line 661 "declarative_execution.m"
                          MR_Word mdb__declarative_execution__Status_81;
#line 661 "declarative_execution.m"
                          MR_Box mdb__declarative_execution__V_52_52;

#line 661 "declarative_execution.m"
                          mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 661 "declarative_execution.m"
                          mdb__declarative_execution__V_52_52 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 661 "declarative_execution.m"
                          mdb__declarative_execution__Status_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 666 "declarative_execution.m"
                          if ((mdb__declarative_execution__Status_81 == (MR_Integer) 2))
#line 663 "declarative_execution.m"
                            {
#line 663 "declarative_execution.m"
                            }
#line 666 "declarative_execution.m"
                          else
#line 669 "declarative_execution.m"
                            {
#line 672 "declarative_execution.m"
                              {
#line 672 "declarative_execution.m"
                                mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[9])));
                              }
#line 669 "declarative_execution.m"
                            }
#line 661 "declarative_execution.m"
                        }
#line 624 "declarative_execution.m"
                      else
#line 624 "declarative_execution.m"
                        if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 10))))
#line 707 "declarative_execution.m"
                          {
#line 707 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__Neg_187 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 707 "declarative_execution.m"
                            MR_Word mdb__declarative_execution__V_216_216;
#line 707 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_186_186 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 707 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_188_188 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 708 "declarative_execution.m"
                            MR_Box mdb__declarative_execution__V_189_189;
#line 708 "declarative_execution.m"
                            MR_Word mdb__declarative_execution__V_190_190;

#line 708 "declarative_execution.m"
                            {
#line 708 "declarative_execution.m"
                              mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_187, &mdb__declarative_execution__V_216_216);
                            }
#line 708 "declarative_execution.m"
                            mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 1));
#line 708 "declarative_execution.m"
                            mdb__declarative_execution__V_189_189 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 2)));
#line 708 "declarative_execution.m"
                            mdb__declarative_execution__V_190_190 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_216_216, (MR_Integer) 3)));
#line 707 "declarative_execution.m"
                          }
#line 624 "declarative_execution.m"
                        else
#line 624 "declarative_execution.m"
                          if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 9))))
#line 654 "declarative_execution.m"
                            {
#line 654 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__Neg_38 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 654 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_73_73;
#line 654 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_37_37 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 654 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_39_39 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 655 "declarative_execution.m"
                              MR_Box mdb__declarative_execution__V_40_40;
#line 655 "declarative_execution.m"
                              MR_Word mdb__declarative_execution__V_41_41;

#line 655 "declarative_execution.m"
                              {
#line 655 "declarative_execution.m"
                                mdb__declarative_execution__neg_node_from_id_3_p_0(mdb__declarative_execution__TypeClassInfo_for_annotated_trace_100, mdb__declarative_execution__Store_4, mdb__declarative_execution__Neg_38, &mdb__declarative_execution__V_73_73);
                              }
#line 655 "declarative_execution.m"
                              mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 1));
#line 655 "declarative_execution.m"
                              mdb__declarative_execution__V_40_40 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 2)));
#line 655 "declarative_execution.m"
                              mdb__declarative_execution__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__V_73_73, (MR_Integer) 3)));
#line 654 "declarative_execution.m"
                            }
#line 624 "declarative_execution.m"
                          else
#line 624 "declarative_execution.m"
                            if (((((MR_tag((MR_Word) mdb__declarative_execution__Node_5)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 632 "declarative_execution.m"
                              {
#line 632 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_22_22;

#line 632 "declarative_execution.m"
                                mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 632 "declarative_execution.m"
                                mdb__declarative_execution__V_22_22 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2)));
#line 632 "declarative_execution.m"
                              }
#line 624 "declarative_execution.m"
                            else
#line 649 "declarative_execution.m"
                              {
#line 649 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_30_30;
#line 649 "declarative_execution.m"
                                MR_Box mdb__declarative_execution__V_31_31;

#line 649 "declarative_execution.m"
                                mdb__declarative_execution__Prec_6 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 1));
#line 649 "declarative_execution.m"
                                mdb__declarative_execution__V_30_30 = (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 2));
#line 649 "declarative_execution.m"
                                mdb__declarative_execution__V_31_31 = ((MR_Box) (MR_hl_field(MR_mktag(3), mdb__declarative_execution__Node_5, (MR_Integer) 3)));
#line 649 "declarative_execution.m"
                              }
#line 624 "declarative_execution.m"
    return mdb__declarative_execution__Prec_6;
#line 624 "declarative_execution.m"
  }
#line 354 "declarative_execution.m"
}

#line 337 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__trace_node_from_id_3_p_0(
#line 337 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4,
#line 337 "declarative_execution.m"
  MR_Box mdb__declarative_execution__HeadVar__1_1,
#line 337 "declarative_execution.m"
  MR_Box mdb__declarative_execution__HeadVar__2_2,
#line 337 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__HeadVar__3_3)
#line 337 "declarative_execution.m"
{
#line 15178 "mdb.declarative_execution.c"
  {
#line 15180 "mdb.declarative_execution.c"
    MR_bool mdb__declarative_execution__succeeded;
#line 15182 "mdb.declarative_execution.c"
    MR_bool MR_CALL (* mdb__declarative_execution__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4, (MR_Integer) 0)), (MR_Integer) 5)));
#line 15184 "mdb.declarative_execution.c"
    MR_Box mdb__declarative_execution__conv1_HeadVar__3_3;

#line 15187 "mdb.declarative_execution.c"
    {
#line 15189 "mdb.declarative_execution.c"
      mdb__declarative_execution__succeeded = mdb__declarative_execution__func_0(((MR_Box) mdb__declarative_execution__TypeClassInfo_for_annotated_trace_4), mdb__declarative_execution__HeadVar__1_1, mdb__declarative_execution__HeadVar__2_2, &mdb__declarative_execution__conv1_HeadVar__3_3);
    }
#line 15192 "mdb.declarative_execution.c"
    if (mdb__declarative_execution__succeeded)
#line 15194 "mdb.declarative_execution.c"
      {
#line 15196 "mdb.declarative_execution.c"
        *mdb__declarative_execution__HeadVar__3_3 = ((MR_Word) mdb__declarative_execution__conv1_HeadVar__3_3);
#line 15198 "mdb.declarative_execution.c"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 15200 "mdb.declarative_execution.c"
      }
#line 15202 "mdb.declarative_execution.c"
    return mdb__declarative_execution__succeeded;
#line 15204 "mdb.declarative_execution.c"
  }
#line 337 "declarative_execution.m"
}

#line 300 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0(
#line 300 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_23,
#line 300 "declarative_execution.m"
  MR_Word mdb__declarative_execution__CallNode_3,
#line 300 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__MaybeProcDefnRep_4)
#line 300 "declarative_execution.m"
{
#line 493 "declarative_execution.m"
  {
#line 493 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 493 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_5 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 7)));
#line 494 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_14_14 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 0));
#line 494 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_15_15 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 1));
#line 494 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 2)));
#line 494 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 3)));
#line 494 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_18_18 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 4)));
#line 494 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 5)));
#line 494 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 6)));
#line 494 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_21_21 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 8)));
#line 494 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__CallNode_3, (MR_Integer) 9)));
#line 512 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_6;

#line 526 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_LabelLayout * CallLabelLayout;
	const MR_ProcLayout * ProcLayout;
	MR_bool SUCCESS_INDICATOR;

	CallLabelLayout = (const MR_LabelLayout *) mdb__declarative_execution__Label_5 ;
		{
#line 526 "declarative_execution.m"

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

#line 15272 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__declarative_execution__ProcLayout_6  = (MR_Box) ProcLayout;
#line 526 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 512 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 496 "declarative_execution.m"
      {
#line 499 "declarative_execution.m"
        MR_Word mdb__declarative_execution__ProcDefnRep_7;

#line 565 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;
	MR_bool SUCCESS_INDICATOR;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_6 ;
		{
#line 565 "declarative_execution.m"

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

#line 15314 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 mdb__declarative_execution__ProcDefnRep_7  = ProcDefnRep;
#line 565 "declarative_execution.m"
	}
mdb__declarative_execution__succeeded  = SUCCESS_INDICATOR;
}
#line 499 "declarative_execution.m"
        if (mdb__declarative_execution__succeeded)
#line 498 "declarative_execution.m"
          {
#line 498 "declarative_execution.m"
            MR_Word base;
#line 498 "declarative_execution.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 498 "declarative_execution.m"
            *mdb__declarative_execution__MaybeProcDefnRep_4 = base;
#line 498 "declarative_execution.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcDefnRep_7));
#line 498 "declarative_execution.m"
          }
#line 499 "declarative_execution.m"
        else
#line 500 "declarative_execution.m"
          {
#line 500 "declarative_execution.m"
            MR_Box mdb__declarative_execution__ByteCodeBytes_8;
#line 506 "declarative_execution.m"
            MR_Word mdb__declarative_execution__ProcDefnRep_12;

#line 500 "declarative_execution.m"
            {
#line 500 "declarative_execution.m"
              mdb__declarative_execution__ByteCodeBytes_8 = mdbcomp__rtti_access__proc_bytecode_bytes_1_f_0(mdb__declarative_execution__ProcLayout_6);
            }
#line 502 "declarative_execution.m"
            {
#line 502 "declarative_execution.m"
              mdb__declarative_execution__succeeded = mdbcomp__program_representation__trace_read_proc_defn_rep_3_p_0(mdb__declarative_execution__ByteCodeBytes_8, mdb__declarative_execution__Label_5, &mdb__declarative_execution__ProcDefnRep_12);
            }
#line 506 "declarative_execution.m"
            if (mdb__declarative_execution__succeeded)
#line 504 "declarative_execution.m"
              {
#line 602 "declarative_execution.m"
{
#define MR_PROC_LABEL mdb__declarative_execution__call_node_maybe_proc_defn_rep_2_p_0

	const MR_ProcLayout * ProcLayout;
	MR_Word ProcDefnRep;

	ProcLayout = (const MR_ProcLayout *) mdb__declarative_execution__ProcLayout_6 ;
	ProcDefnRep =  mdb__declarative_execution__ProcDefnRep_12 ;
		{
#line 602 "declarative_execution.m"

#ifdef MR_DEBUG_PROC_REP
    printf("cache_proc_defn_rep: %p %x\n", ProcLayout, ProcDefnRep);
#endif
    MR_insert_proc_defn_rep(ProcLayout, ProcDefnRep);

#line 15378 "mdb.declarative_execution.c"

		;}
#undef MR_PROC_LABEL
#line 602 "declarative_execution.m"
}
#line 505 "declarative_execution.m"
                {
#line 505 "declarative_execution.m"
                  MR_Word base;
#line 505 "declarative_execution.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 505 "declarative_execution.m"
                  *mdb__declarative_execution__MaybeProcDefnRep_4 = base;
#line 505 "declarative_execution.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcDefnRep_12));
#line 505 "declarative_execution.m"
                }
#line 504 "declarative_execution.m"
              }
#line 506 "declarative_execution.m"
            else
#line 507 "declarative_execution.m"
              {
#line 507 "declarative_execution.m"
                {
#line 507 "declarative_execution.m"
                  mercury__exception__throw_1_p_0((MR_Word) &mdb__declarative_debugger__mdb__declarative_debugger__type_ctor_info_diagnoser_exception_0, ((MR_Box) (&mdb__declarative_execution_scalar_common_1[6])));
#line 507 "declarative_execution.m"
                  return;
                }
#line 507 "declarative_execution.m"
              }
#line 500 "declarative_execution.m"
          }
#line 496 "declarative_execution.m"
      }
#line 512 "declarative_execution.m"
    else
#line 513 "declarative_execution.m"
      *mdb__declarative_execution__MaybeProcDefnRep_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 493 "declarative_execution.m"
  }
#line 300 "declarative_execution.m"
}

#line 297 "declarative_execution.m"
void MR_CALL 
mdb__declarative_execution__get_pred_attributes_5_p_0(
#line 297 "declarative_execution.m"
  MR_Word mdb__declarative_execution__ProcId_6,
#line 297 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Module_7,
#line 297 "declarative_execution.m"
  MR_String * mdb__declarative_execution__Name_8,
#line 297 "declarative_execution.m"
  MR_Integer * mdb__declarative_execution__Arity_9,
#line 297 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__PredOrFunc_10)
#line 297 "declarative_execution.m"
{
#line 483 "declarative_execution.m"
  {
#line 483 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;

#line 483 "declarative_execution.m"
    if (((MR_tag((MR_Word) mdb__declarative_execution__ProcId_6)) == (MR_mktag((MR_Integer) 0))))
#line 483 "declarative_execution.m"
      {
#line 483 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_11_11;
#line 483 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_12_12;

#line 483 "declarative_execution.m"
        *mdb__declarative_execution__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 0)));
#line 483 "declarative_execution.m"
        *mdb__declarative_execution__PredOrFunc_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 1)));
#line 483 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 2)));
#line 483 "declarative_execution.m"
        *mdb__declarative_execution__Name_8 = ((MR_String) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 3)));
#line 483 "declarative_execution.m"
        *mdb__declarative_execution__Arity_9 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 4)));
#line 483 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__ProcId_6, (MR_Integer) 5)));
#line 483 "declarative_execution.m"
      }
#line 483 "declarative_execution.m"
    else
#line 485 "declarative_execution.m"
      {
#line 485 "declarative_execution.m"
        MR_Word mdb__declarative_execution__SpecialId_13;
#line 485 "declarative_execution.m"
        MR_Word mdb__declarative_execution__V_14_14;
#line 485 "declarative_execution.m"
        MR_String mdb__declarative_execution__V_15_15;
#line 485 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_16_16;
#line 485 "declarative_execution.m"
        MR_Integer mdb__declarative_execution__V_17_17;

#line 485 "declarative_execution.m"
        *mdb__declarative_execution__Module_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 0)));
#line 485 "declarative_execution.m"
        mdb__declarative_execution__SpecialId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 1)));
#line 485 "declarative_execution.m"
        mdb__declarative_execution__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 2)));
#line 485 "declarative_execution.m"
        mdb__declarative_execution__V_15_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 3)));
#line 485 "declarative_execution.m"
        mdb__declarative_execution__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 4)));
#line 485 "declarative_execution.m"
        mdb__declarative_execution__V_17_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__ProcId_6, (MR_Integer) 5)));
#line 486 "declarative_execution.m"
        *mdb__declarative_execution__PredOrFunc_10 = (MR_Integer) 0;
#line 487 "declarative_execution.m"
        {
#line 487 "declarative_execution.m"
          *mdb__declarative_execution__Arity_9 = mdbcomp__prim_data__get_special_pred_id_arity_1_f_0(mdb__declarative_execution__SpecialId_13);
        }
#line 488 "declarative_execution.m"
        {
#line 488 "declarative_execution.m"
          *mdb__declarative_execution__Name_8 = mdbcomp__prim_data__get_special_pred_id_target_name_1_f_0(mdb__declarative_execution__SpecialId_13);
        }
#line 485 "declarative_execution.m"
      }
#line 483 "declarative_execution.m"
  }
#line 297 "declarative_execution.m"
}

#line 291 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__get_trace_call_atom_1_f_1(
#line 291 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_15,
#line 291 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 291 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Atom_13)
#line 291 "declarative_execution.m"
{
#line 616 "declarative_execution.m"
  {
#line 616 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 0)));
#line 616 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_5;
#line 616 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_10;
#line 616 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_14;
#line 615 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3;
#line 615 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4;
#line 615 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_6_6;
#line 615 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7;
#line 615 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8;
#line 615 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9;
#line 615 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11;
#line 615 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12;

#line 615 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 615 "declarative_execution.m"
      {
#line 615 "declarative_execution.m"
        mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 615 "declarative_execution.m"
        mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 615 "declarative_execution.m"
        mdb__declarative_execution__AtomArgs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 615 "declarative_execution.m"
        mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 615 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 615 "declarative_execution.m"
        mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 615 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 615 "declarative_execution.m"
        mdb__declarative_execution__Label_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 615 "declarative_execution.m"
        mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
#line 615 "declarative_execution.m"
        mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));
#line 617 "declarative_execution.m"
        {
#line 617 "declarative_execution.m"
          mdb__declarative_execution__ProcLayout_14 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_10);
        }
#line 618 "declarative_execution.m"
        {
#line 618 "declarative_execution.m"
          MR_Word base;
#line 618 "declarative_execution.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "declarative_execution.m"
          *mdb__declarative_execution__Atom_13 = base;
#line 618 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_14));
#line 618 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_5));
#line 618 "declarative_execution.m"
        }
#line 618 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 615 "declarative_execution.m"
      }
#line 616 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 616 "declarative_execution.m"
  }
#line 291 "declarative_execution.m"
}

#line 290 "declarative_execution.m"
MR_Word MR_CALL 
mdb__declarative_execution__get_trace_call_atom_1_f_0(
#line 290 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_15,
#line 290 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 290 "declarative_execution.m"
{
#line 616 "declarative_execution.m"
  {
#line 616 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 616 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Atom_13;
#line 616 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2)));
#line 616 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_10 = ((MR_Box) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 616 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_14;
#line 615 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 615 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 615 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 615 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 615 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 615 "declarative_execution.m"
    MR_Word mdb__declarative_execution__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 615 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 8)));
#line 615 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_12_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 9)));

#line 617 "declarative_execution.m"
    {
#line 617 "declarative_execution.m"
      mdb__declarative_execution__ProcLayout_14 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_10);
    }
#line 618 "declarative_execution.m"
    {
#line 618 "declarative_execution.m"
      mdb__declarative_execution__Atom_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 618 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_13, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_14));
#line 618 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_13, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_5));
#line 618 "declarative_execution.m"
    }
#line 616 "declarative_execution.m"
    return mdb__declarative_execution__Atom_13;
#line 616 "declarative_execution.m"
  }
#line 290 "declarative_execution.m"
}

#line 287 "declarative_execution.m"
MR_bool MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_1_f_1(
#line 287 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_13,
#line 287 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1,
#line 287 "declarative_execution.m"
  MR_Word * mdb__declarative_execution__Atom_11)
#line 287 "declarative_execution.m"
{
#line 611 "declarative_execution.m"
  {
#line 611 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded = ((MR_tag((MR_Word) mdb__declarative_execution__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 611 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_6;
#line 611 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_8;
#line 611 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_12;
#line 611 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3;
#line 611 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4;
#line 611 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_5_5;
#line 611 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7;
#line 611 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_9_9;
#line 611 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10;

#line 611 "declarative_execution.m"
    if (mdb__declarative_execution__succeeded)
#line 611 "declarative_execution.m"
      {
#line 611 "declarative_execution.m"
        mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 611 "declarative_execution.m"
        mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 611 "declarative_execution.m"
        mdb__declarative_execution__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 611 "declarative_execution.m"
        mdb__declarative_execution__AtomArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 611 "declarative_execution.m"
        mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 611 "declarative_execution.m"
        mdb__declarative_execution__Label_8 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 611 "declarative_execution.m"
        mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 611 "declarative_execution.m"
        mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));
#line 612 "declarative_execution.m"
        {
#line 612 "declarative_execution.m"
          mdb__declarative_execution__ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_8);
        }
#line 613 "declarative_execution.m"
        {
#line 613 "declarative_execution.m"
          MR_Word base;
#line 613 "declarative_execution.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "declarative_execution.m"
          *mdb__declarative_execution__Atom_11 = base;
#line 613 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_12));
#line 613 "declarative_execution.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_6));
#line 613 "declarative_execution.m"
        }
#line 613 "declarative_execution.m"
        mdb__declarative_execution__succeeded = MR_TRUE;
#line 611 "declarative_execution.m"
      }
#line 611 "declarative_execution.m"
    return mdb__declarative_execution__succeeded;
#line 611 "declarative_execution.m"
  }
#line 287 "declarative_execution.m"
}

#line 286 "declarative_execution.m"
MR_Word MR_CALL 
mdb__declarative_execution__get_trace_exit_atom_1_f_0(
#line 286 "declarative_execution.m"
  MR_Word mdb__declarative_execution__TypeInfo_for_R_13,
#line 286 "declarative_execution.m"
  MR_Word mdb__declarative_execution__HeadVar__1_1)
#line 286 "declarative_execution.m"
{
#line 611 "declarative_execution.m"
  {
#line 611 "declarative_execution.m"
    MR_bool mdb__declarative_execution__succeeded;
#line 611 "declarative_execution.m"
    MR_Word mdb__declarative_execution__Atom_11;
#line 611 "declarative_execution.m"
    MR_Word mdb__declarative_execution__AtomArgs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 3)));
#line 611 "declarative_execution.m"
    MR_Box mdb__declarative_execution__Label_8 = ((MR_Box) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 5)));
#line 611 "declarative_execution.m"
    MR_Box mdb__declarative_execution__ProcLayout_12;
#line 611 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_3_3 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 0));
#line 611 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_4_4 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 1));
#line 611 "declarative_execution.m"
    MR_Box mdb__declarative_execution__V_5_5 = (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 2));
#line 611 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 4)));
#line 611 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 6)));
#line 611 "declarative_execution.m"
    MR_Integer mdb__declarative_execution__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdb__declarative_execution__HeadVar__1_1, (MR_Integer) 7)));

#line 612 "declarative_execution.m"
    {
#line 612 "declarative_execution.m"
      mdb__declarative_execution__ProcLayout_12 = mdbcomp__rtti_access__get_proc_layout_from_label_layout_1_f_0(mdb__declarative_execution__Label_8);
    }
#line 613 "declarative_execution.m"
    {
#line 613 "declarative_execution.m"
      mdb__declarative_execution__Atom_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 613 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_11, 0) = ((MR_Box) (mdb__declarative_execution__ProcLayout_12));
#line 613 "declarative_execution.m"
      MR_hl_field(MR_mktag(0), mdb__declarative_execution__Atom_11, 1) = ((MR_Box) (mdb__declarative_execution__AtomArgs_6));
#line 613 "declarative_execution.m"
    }
#line 611 "declarative_execution.m"
    return mdb__declarative_execution__Atom_11;
#line 611 "declarative_execution.m"
  }
#line 286 "declarative_execution.m"
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
