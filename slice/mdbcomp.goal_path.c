/*
** Automatically generated from `mdbcomp.goal_path.m'
** by the Mercury compiler,
** version rotd-2014-12-18
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


/* :- module mdbcomp.goal_path. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__goal_path__init
ENDINIT
*/

#include "mdbcomp.goal_path.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "cord.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




#line 69 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0;

#line 72 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_containing_goal_0_1[2];

#line 75 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1;

#line 78 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0[1];

#line 81 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1[1];

#line 84 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_containing_goal_0[2];

#line 87 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0[2];

#line 90 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0[2];

#line 93 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0;

#line 96 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0;

#line 99 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_forward_goal_path_0_1[2];

#line 102 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1;

#line 105 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0[1];

#line 108 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1[1];

#line 111 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_forward_goal_path_0[2];

#line 114 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0[2];

#line 117 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0[2];

#line 120 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1[1];

#line 123 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1;

#line 126 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1;

#line 129 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1;

#line 132 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0;

#line 135 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0[1];

#line 138 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0;

#line 141 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_0[1];

#line 144 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0;

#line 147 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_1[1];

#line 150 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1;

#line 153 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_2[2];

#line 156 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2;

#line 159 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3;

#line 162 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4;

#line 165 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5;

#line 168 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6;

#line 171 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_7[1];

#line 174 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7;

#line 177 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8;

#line 180 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9;

#line 183 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10;

#line 186 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_11[1];

#line 189 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11;

#line 192 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0[7];

#line 195 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1[1];

#line 198 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2[1];

#line 201 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3[3];

#line 204 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_goal_path_step_0[4];

#line 207 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_goal_path_step_0[12];

#line 210 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_path_step_0[12];

#line 213 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 216 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0;

#line 219 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0;

#line 222 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1;

#line 225 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_value_ordered_maybe_cut_0[2];

#line 228 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0[2];

#line 231 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0[2];

#line 234 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0;

#line 237 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1[1];

#line 240 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1;

#line 243 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0[1];

#line 246 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1[1];

#line 249 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_maybe_switch_num_functors_0[2];

#line 252 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0[2];

#line 255 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0[2];

#line 258 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0;

#line 261 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_reverse_goal_path_0_1[2];

#line 264 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1;

#line 267 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0[1];

#line 270 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1[1];

#line 273 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_reverse_goal_path_0[2];

#line 276 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0[2];

#line 279 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0[2];

#line 282 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_0_0_10001(
#line 285 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 287 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 290 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0_10001(
#line 293 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 295 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 297 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 300 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001(
#line 303 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 305 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 308 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001(
#line 311 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 313 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 315 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 318 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001(
#line 321 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 323 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 326 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001(
#line 329 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 331 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 333 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 336 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001(
#line 339 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 341 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 343 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 346 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001(
#line 349 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 351 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2,
#line 353 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3,
#line 355 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_4);

#line 358 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001(
#line 361 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 363 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 366 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001(
#line 369 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 371 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 373 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 376 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_id_0_0_10001(
#line 379 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 381 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 384 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_id_0_0_10001(
#line 387 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 389 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 391 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 394 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_step_0_0_10001(
#line 397 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 399 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 402 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_step_0_0_10001(
#line 405 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 407 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 409 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 412 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_string_0_0_10001(
#line 415 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 417 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 420 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_string_0_0_10001(
#line 423 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 425 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 427 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 430 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001(
#line 433 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 435 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 438 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001(
#line 441 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 443 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 445 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 448 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001(
#line 451 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 453 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 456 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001(
#line 459 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 461 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 463 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 466 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_cut_0_0_10001(
#line 469 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 471 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 474 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_cut_0_0_10001(
#line 477 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 479 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 481 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 484 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001(
#line 487 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 489 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 492 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001(
#line 495 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 497 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 499 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 502 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001(
#line 505 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 507 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2);

#line 510 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001(
#line 513 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 515 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 517 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3);

#line 453 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__453__1_2_p_0(
#line 453 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__1_16,
#line 453 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__2_23);

#line 629 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(
#line 629 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 629 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2,
#line 629 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_3);

#line 604 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(
#line 604 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 604 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2,
#line 604 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_3);

#line 591 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(
#line 591 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 591 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2,
#line 591 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_3);

#line 580 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(
#line 580 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 580 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2,
#line 580 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_3);

#line 492 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(
#line 492 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1);

#line 480 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__goal_path_to_strings_1_f_0(
#line 480 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1);

#line 426 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(
#line 426 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 426 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2);

#line 406 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_strings_2_p_0(
#line 406 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 406 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2);

#line 364 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_last_loop_3_p_0(
#line 364 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 364 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 364 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3);

#line 351 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(
#line 351 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__Head_1,
#line 351 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 351 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3,
#line 351 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__4_4);

#line 575 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0_1(
#line 575 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 575 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 575 "mdbcomp.goal_path.m"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2);

#line 453 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_step_from_string_2_p_0_1(
#line 453 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 453 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 422 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0_1(
#line 422 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 422 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 422 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_2_p_0_1(
#line 422 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 422 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 403 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_det_2_p_0_1(
#line 403 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 403 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 403 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_2_p_0_1(
#line 403 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 403 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);


static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_1[9][3];

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_2[2][4];

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_3[2][2];

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_4[2][5];




static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_1[9][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__bimap__bimap__type_ctor_info_bimap_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_2[0])),
    ((MR_Box) (mdbcomp__goal_path__goal_path_from_string_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 5 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_2[0])),
    ((MR_Box) (mdbcomp__goal_path__goal_path_from_string_det_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 6 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_2[0])),
    ((MR_Box) (mdbcomp__goal_path__rev_goal_path_from_string_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 7 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_2[0])),
    ((MR_Box) (mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
  /* row 8 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_4[1])),
    ((MR_Box) (mdbcomp__goal_path__create_forward_goal_path_map_1_f_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_2[2][4] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mdbcomp__goal_path_scalar_common_4[0])),
    ((MR_Box) (mdbcomp__goal_path__goal_path_step_from_string_2_p_0_1)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_Word) ((MR_Char) 45))
  },
};

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_3[2][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mdbcomp__goal_path_scalar_common_4[2][5] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0)),
    ((MR_Box) (&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0))
  },
};



#include "mdbcomp.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"



#line 802 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0 = {
  (MR_String) "whole_body_goal",
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

#line 817 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_containing_goal_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0
};

#line 823 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1 = {
  (MR_String) "containing_goal",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_containing_goal_0_1,
  NULL,
  NULL,
  NULL
};

#line 838 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0
};

#line 843 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1
};

#line 848 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_containing_goal_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1
  }
};

#line 862 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0
};

#line 868 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 874 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____containing_goal_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____containing_goal_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "containing_goal",
  {
    mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0
  },
  {
    mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_containing_goal_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0
};

#line 895 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 904 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "containing_goal_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 925 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0 = {
  (MR_String) "fgp_nil",
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

#line 940 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_forward_goal_path_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 946 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1 = {
  (MR_String) "fgp_cons",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_forward_goal_path_0_1,
  NULL,
  NULL,
  NULL
};

#line 961 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0
};

#line 966 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1
};

#line 971 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_forward_goal_path_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1
  }
};

#line 985 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0
};

#line 991 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 997 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "forward_goal_path",
  {
    mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0
  },
  {
    mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_forward_goal_path_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0
};

#line 1018 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1[1] = {
  (MR_Integer) 0
};

#line 1023 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1031 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1
  }
};

#line 1039 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 = {
  (MR_String) "goal_attr_array",
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1,
  NULL
};

#line 1046 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_attr_array",
  {
    &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1
  },
  {
    &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1
};

#line 1067 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1076 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_forward_path_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_forward_path_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1097 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0[1] = {
  (MR_Integer) 0
};

#line 1102 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0 = {
  (MR_String) "goal_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1109 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_id_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_id_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_id",
  {
    &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0
  },
  {
    &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0
  },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0
};

#line 1130 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1135 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0 = {
  (MR_String) "step_conj",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_0,
  NULL,
  NULL,
  NULL
};

#line 1150 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1155 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1 = {
  (MR_String) "step_disj",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_1,
  NULL,
  NULL,
  NULL
};

#line 1170 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0
};

#line 1176 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2 = {
  (MR_String) "step_switch",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_2,
  NULL,
  NULL,
  NULL
};

#line 1191 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3 = {
  (MR_String) "step_ite_cond",
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

#line 1206 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4 = {
  (MR_String) "step_ite_then",
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

#line 1221 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5 = {
  (MR_String) "step_ite_else",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1236 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6 = {
  (MR_String) "step_neg",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1251 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_7[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_cut_0
};

#line 1256 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7 = {
  (MR_String) "step_scope",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 7,
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_7,
  NULL,
  NULL,
  NULL
};

#line 1271 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8 = {
  (MR_String) "step_lambda",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1286 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9 = {
  (MR_String) "step_try",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1301 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10 = {
  (MR_String) "step_atomic_main",
  (MR_Integer) 0,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 6,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL
};

#line 1316 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1321 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11 = {
  (MR_String) "step_atomic_orelse",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 11,
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_11,
  NULL,
  NULL,
  NULL
};

#line 1336 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0[7] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10
};

#line 1347 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0
};

#line 1352 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1
};

#line 1357 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3[3] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11
};

#line 1364 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_goal_path_step_0[4] = {
  {
    (MR_Integer) 7,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2
  },
  {
    (MR_Integer) 3,
    mercury__private_builtin__MR_SECTAG_REMOTE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3
  }
};

#line 1388 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_goal_path_step_0[12] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9
};

#line 1404 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_path_step_0[12] = {
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 10,
  (MR_Integer) 4,
  (MR_Integer) 6,
  (MR_Integer) 5,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 7,
  (MR_Integer) 11,
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1420 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_path_step_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_path_step_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_path_step",
  {
    mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_goal_path_step_0
  },
  {
    mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_goal_path_step_0
  },
  (MR_Integer) 12,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_path_step_0
};

#line 1441 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_string_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_path_string_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_path_string_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_path_string",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1462 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 1471 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_reverse_path_bimap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_reverse_path_bimap",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1492 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 1501 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_reverse_path_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_reverse_path_map",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1522 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0 = {
  (MR_String) "scope_is_cut",
  (MR_Integer) 0
};

#line 1528 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1 = {
  (MR_String) "scope_is_no_cut",
  (MR_Integer) 1
};

#line 1534 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_value_ordered_maybe_cut_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

#line 1540 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

#line 1546 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1552 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_cut_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__goal_path____Unify____maybe_cut_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____maybe_cut_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "maybe_cut",
  {
    mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0
  },
  {
    mdbcomp__goal_path__mdbcomp__goal_path__enum_value_ordered_maybe_cut_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0
};

#line 1573 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0 = {
  (MR_String) "unknown_num_functors_in_type",
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

#line 1588 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1593 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1 = {
  (MR_String) "known_num_functors_in_type",
  (MR_Integer) 1,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1,
  NULL,
  NULL,
  NULL
};

#line 1608 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0
};

#line 1613 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1
};

#line 1618 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_maybe_switch_num_functors_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1
  }
};

#line 1632 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0
};

#line 1638 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1644 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "maybe_switch_num_functors",
  {
    mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0
  },
  {
    mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_maybe_switch_num_functors_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0
};

#line 1665 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0 = {
  (MR_String) "rgp_nil",
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

#line 1680 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_reverse_goal_path_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0
};

#line 1686 "mdbcomp.goal_path.c"
static const MR_DuFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1 = {
  (MR_String) "rgp_cons",
  (MR_Integer) 2,
  (MR_Integer) 0,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mdbcomp__goal_path__mdbcomp__goal_path__field_types_reverse_goal_path_0_1,
  NULL,
  NULL,
  NULL
};

#line 1701 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0
};

#line 1706 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1
};

#line 1711 "mdbcomp.goal_path.c"
static const MR_DuPtagLayout mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_reverse_goal_path_0[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1
  }
};

#line 1725 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0
};

#line 1731 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1737 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "reverse_goal_path",
  {
    mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0
  },
  {
    mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_reverse_goal_path_0
  },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0
};

#line 1758 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_0_0_10001(
#line 1761 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1763 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1765 "mdbcomp.goal_path.c"
{
#line 1767 "mdbcomp.goal_path.c"
  {
#line 1769 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1772 "mdbcomp.goal_path.c"
    {
#line 1774 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____containing_goal_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1777 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1779 "mdbcomp.goal_path.c"
  }
#line 1781 "mdbcomp.goal_path.c"
}

#line 1784 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0_10001(
#line 1787 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1789 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1791 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1793 "mdbcomp.goal_path.c"
{
#line 1795 "mdbcomp.goal_path.c"
  {
#line 1797 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1800 "mdbcomp.goal_path.c"
    {
#line 1802 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____containing_goal_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1805 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1807 "mdbcomp.goal_path.c"
  }
#line 1809 "mdbcomp.goal_path.c"
}

#line 1812 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001(
#line 1815 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1817 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1819 "mdbcomp.goal_path.c"
{
#line 1821 "mdbcomp.goal_path.c"
  {
#line 1823 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1826 "mdbcomp.goal_path.c"
    {
#line 1828 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____containing_goal_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1831 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1833 "mdbcomp.goal_path.c"
  }
#line 1835 "mdbcomp.goal_path.c"
}

#line 1838 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001(
#line 1841 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1843 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1845 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1847 "mdbcomp.goal_path.c"
{
#line 1849 "mdbcomp.goal_path.c"
  {
#line 1851 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1854 "mdbcomp.goal_path.c"
    {
#line 1856 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____containing_goal_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1859 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1861 "mdbcomp.goal_path.c"
  }
#line 1863 "mdbcomp.goal_path.c"
}

#line 1866 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001(
#line 1869 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1871 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1873 "mdbcomp.goal_path.c"
{
#line 1875 "mdbcomp.goal_path.c"
  {
#line 1877 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1880 "mdbcomp.goal_path.c"
    {
#line 1882 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1885 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1887 "mdbcomp.goal_path.c"
  }
#line 1889 "mdbcomp.goal_path.c"
}

#line 1892 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001(
#line 1895 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1897 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1899 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1901 "mdbcomp.goal_path.c"
{
#line 1903 "mdbcomp.goal_path.c"
  {
#line 1905 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1908 "mdbcomp.goal_path.c"
    {
#line 1910 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1913 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1915 "mdbcomp.goal_path.c"
  }
#line 1917 "mdbcomp.goal_path.c"
}

#line 1920 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001(
#line 1923 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1925 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1927 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1929 "mdbcomp.goal_path.c"
{
#line 1931 "mdbcomp.goal_path.c"
  {
#line 1933 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1936 "mdbcomp.goal_path.c"
    {
#line 1938 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_attr_array_1_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1941 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1943 "mdbcomp.goal_path.c"
  }
#line 1945 "mdbcomp.goal_path.c"
}

#line 1948 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001(
#line 1951 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1953 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2,
#line 1955 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3,
#line 1957 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_4)
#line 1959 "mdbcomp.goal_path.c"
{
#line 1961 "mdbcomp.goal_path.c"
  {
#line 1963 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1966 "mdbcomp.goal_path.c"
    {
#line 1968 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_attr_array_1_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), &mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_3), ((MR_Word) mdbcomp__goal_path__wrapper_arg_4));
    }
#line 1971 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_2 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1973 "mdbcomp.goal_path.c"
  }
#line 1975 "mdbcomp.goal_path.c"
}

#line 1978 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001(
#line 1981 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1983 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1985 "mdbcomp.goal_path.c"
{
#line 1987 "mdbcomp.goal_path.c"
  {
#line 1989 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1992 "mdbcomp.goal_path.c"
    {
#line 1994 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_forward_path_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1997 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1999 "mdbcomp.goal_path.c"
  }
#line 2001 "mdbcomp.goal_path.c"
}

#line 2004 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001(
#line 2007 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2009 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2011 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2013 "mdbcomp.goal_path.c"
{
#line 2015 "mdbcomp.goal_path.c"
  {
#line 2017 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2020 "mdbcomp.goal_path.c"
    {
#line 2022 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_forward_path_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2025 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2027 "mdbcomp.goal_path.c"
  }
#line 2029 "mdbcomp.goal_path.c"
}

#line 2032 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_id_0_0_10001(
#line 2035 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2037 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2039 "mdbcomp.goal_path.c"
{
#line 2041 "mdbcomp.goal_path.c"
  {
#line 2043 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2046 "mdbcomp.goal_path.c"
    {
#line 2048 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_id_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2051 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2053 "mdbcomp.goal_path.c"
  }
#line 2055 "mdbcomp.goal_path.c"
}

#line 2058 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_id_0_0_10001(
#line 2061 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2063 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2065 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2067 "mdbcomp.goal_path.c"
{
#line 2069 "mdbcomp.goal_path.c"
  {
#line 2071 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2074 "mdbcomp.goal_path.c"
    {
#line 2076 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_id_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2079 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2081 "mdbcomp.goal_path.c"
  }
#line 2083 "mdbcomp.goal_path.c"
}

#line 2086 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_step_0_0_10001(
#line 2089 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2091 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2093 "mdbcomp.goal_path.c"
{
#line 2095 "mdbcomp.goal_path.c"
  {
#line 2097 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2100 "mdbcomp.goal_path.c"
    {
#line 2102 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2105 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2107 "mdbcomp.goal_path.c"
  }
#line 2109 "mdbcomp.goal_path.c"
}

#line 2112 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_step_0_0_10001(
#line 2115 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2117 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2119 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2121 "mdbcomp.goal_path.c"
{
#line 2123 "mdbcomp.goal_path.c"
  {
#line 2125 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2128 "mdbcomp.goal_path.c"
    {
#line 2130 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_path_step_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2133 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2135 "mdbcomp.goal_path.c"
  }
#line 2137 "mdbcomp.goal_path.c"
}

#line 2140 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_string_0_0_10001(
#line 2143 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2145 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2147 "mdbcomp.goal_path.c"
{
#line 2149 "mdbcomp.goal_path.c"
  {
#line 2151 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2154 "mdbcomp.goal_path.c"
    {
#line 2156 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_string_0_0(((MR_String) mdbcomp__goal_path__wrapper_arg_1), ((MR_String) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2159 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2161 "mdbcomp.goal_path.c"
  }
#line 2163 "mdbcomp.goal_path.c"
}

#line 2166 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_string_0_0_10001(
#line 2169 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2171 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2173 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2175 "mdbcomp.goal_path.c"
{
#line 2177 "mdbcomp.goal_path.c"
  {
#line 2179 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2182 "mdbcomp.goal_path.c"
    {
#line 2184 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_path_string_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_String) mdbcomp__goal_path__wrapper_arg_2), ((MR_String) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2187 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2189 "mdbcomp.goal_path.c"
  }
#line 2191 "mdbcomp.goal_path.c"
}

#line 2194 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001(
#line 2197 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2199 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2201 "mdbcomp.goal_path.c"
{
#line 2203 "mdbcomp.goal_path.c"
  {
#line 2205 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2208 "mdbcomp.goal_path.c"
    {
#line 2210 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2213 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2215 "mdbcomp.goal_path.c"
  }
#line 2217 "mdbcomp.goal_path.c"
}

#line 2220 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001(
#line 2223 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2225 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2227 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2229 "mdbcomp.goal_path.c"
{
#line 2231 "mdbcomp.goal_path.c"
  {
#line 2233 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2236 "mdbcomp.goal_path.c"
    {
#line 2238 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2241 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2243 "mdbcomp.goal_path.c"
  }
#line 2245 "mdbcomp.goal_path.c"
}

#line 2248 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001(
#line 2251 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2253 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2255 "mdbcomp.goal_path.c"
{
#line 2257 "mdbcomp.goal_path.c"
  {
#line 2259 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2262 "mdbcomp.goal_path.c"
    {
#line 2264 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2267 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2269 "mdbcomp.goal_path.c"
  }
#line 2271 "mdbcomp.goal_path.c"
}

#line 2274 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001(
#line 2277 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2279 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2281 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2283 "mdbcomp.goal_path.c"
{
#line 2285 "mdbcomp.goal_path.c"
  {
#line 2287 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2290 "mdbcomp.goal_path.c"
    {
#line 2292 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2295 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2297 "mdbcomp.goal_path.c"
  }
#line 2299 "mdbcomp.goal_path.c"
}

#line 2302 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_cut_0_0_10001(
#line 2305 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2307 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2309 "mdbcomp.goal_path.c"
{
#line 2311 "mdbcomp.goal_path.c"
  {
#line 2313 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2316 "mdbcomp.goal_path.c"
    {
#line 2318 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____maybe_cut_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2321 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2323 "mdbcomp.goal_path.c"
  }
#line 2325 "mdbcomp.goal_path.c"
}

#line 2328 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_cut_0_0_10001(
#line 2331 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2333 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2335 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2337 "mdbcomp.goal_path.c"
{
#line 2339 "mdbcomp.goal_path.c"
  {
#line 2341 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2344 "mdbcomp.goal_path.c"
    {
#line 2346 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____maybe_cut_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2349 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2351 "mdbcomp.goal_path.c"
  }
#line 2353 "mdbcomp.goal_path.c"
}

#line 2356 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001(
#line 2359 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2361 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2363 "mdbcomp.goal_path.c"
{
#line 2365 "mdbcomp.goal_path.c"
  {
#line 2367 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2370 "mdbcomp.goal_path.c"
    {
#line 2372 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2375 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2377 "mdbcomp.goal_path.c"
  }
#line 2379 "mdbcomp.goal_path.c"
}

#line 2382 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001(
#line 2385 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2387 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2389 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2391 "mdbcomp.goal_path.c"
{
#line 2393 "mdbcomp.goal_path.c"
  {
#line 2395 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2398 "mdbcomp.goal_path.c"
    {
#line 2400 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2403 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2405 "mdbcomp.goal_path.c"
  }
#line 2407 "mdbcomp.goal_path.c"
}

#line 2410 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001(
#line 2413 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2415 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2417 "mdbcomp.goal_path.c"
{
#line 2419 "mdbcomp.goal_path.c"
  {
#line 2421 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2424 "mdbcomp.goal_path.c"
    {
#line 2426 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2429 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2431 "mdbcomp.goal_path.c"
  }
#line 2433 "mdbcomp.goal_path.c"
}

#line 2436 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001(
#line 2439 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2441 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2443 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2445 "mdbcomp.goal_path.c"
{
#line 2447 "mdbcomp.goal_path.c"
  {
#line 2449 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2452 "mdbcomp.goal_path.c"
    {
#line 2454 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2457 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2459 "mdbcomp.goal_path.c"
  }
#line 2461 "mdbcomp.goal_path.c"
}

#line 453 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__453__1_2_p_0(
#line 453 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__1_16,
#line 453 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__2_23)
#line 453 "mdbcomp.goal_path.m"
{
#line 453 "mdbcomp.goal_path.m"
  {
#line 453 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__HeadVar__1_16 == mdbcomp__goal_path__HeadVar__2_23);

#line 453 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 453 "mdbcomp.goal_path.m"
  }
#line 453 "mdbcomp.goal_path.m"
}

#line 71 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____reverse_goal_path_0_0(
#line 71 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 71 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 71 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 71 "mdbcomp.goal_path.m"
{
#line 71 "mdbcomp.goal_path.m"
  {
#line 71 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 71 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_13 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 71 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_14 = (MR_Integer) mdbcomp__goal_path__HeadVar__3_3;

#line 71 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_13 == mdbcomp__goal_path__CastY_14);
#line 71 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 2509 "mdbcomp.goal_path.c"
      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 71 "mdbcomp.goal_path.m"
    else
#line 71 "mdbcomp.goal_path.m"
      if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 71 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 71 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 71 "mdbcomp.goal_path.m"
        else
#line 2521 "mdbcomp.goal_path.c"
          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 71 "mdbcomp.goal_path.m"
      else
#line 71 "mdbcomp.goal_path.m"
        {
#line 71 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 71 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 71 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2534 "mdbcomp.goal_path.c"
            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 71 "mdbcomp.goal_path.m"
          else
#line 71 "mdbcomp.goal_path.m"
            {
#line 71 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)));
#line 71 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 1)));
#line 71 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_12_12;

#line 71 "mdbcomp.goal_path.m"
              {
#line 71 "mdbcomp.goal_path.m"
                mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&mdbcomp__goal_path__V_12_12, mdbcomp__goal_path__V_18_18, mdbcomp__goal_path__V_10_10);
              }
#line 2552 "mdbcomp.goal_path.c"
              mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_12_12 == (MR_Integer) 0);
#line 71 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = !(mdbcomp__goal_path__succeeded);
#line 71 "mdbcomp.goal_path.m"
              if (mdbcomp__goal_path__succeeded)
#line 71 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__V_12_12;
#line 71 "mdbcomp.goal_path.m"
              else
#line 71 "mdbcomp.goal_path.m"
                {
#line 71 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path____Compare____goal_path_step_0_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_17_17, mdbcomp__goal_path__V_11_11);
#line 71 "mdbcomp.goal_path.m"
                  return;
                }
#line 71 "mdbcomp.goal_path.m"
            }
#line 71 "mdbcomp.goal_path.m"
        }
#line 71 "mdbcomp.goal_path.m"
  }
#line 71 "mdbcomp.goal_path.m"
}

#line 71 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____reverse_goal_path_0_0(
#line 71 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 71 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 71 "mdbcomp.goal_path.m"
{
#line 71 "mdbcomp.goal_path.m"
  {
#line 71 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 71 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_9 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 71 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_10 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 71 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_9 == mdbcomp__goal_path__CastY_10);
#line 71 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 71 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = MR_TRUE;
#line 71 "mdbcomp.goal_path.m"
    else
#line 71 "mdbcomp.goal_path.m"
      if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 71 "mdbcomp.goal_path.m"
        {
#line 71 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastX_3 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 71 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastY_4 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 71 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_4 == mdbcomp__goal_path__CastX_3);
#line 71 "mdbcomp.goal_path.m"
        }
#line 71 "mdbcomp.goal_path.m"
      else
#line 71 "mdbcomp.goal_path.m"
        {
#line 71 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 71 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 71 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_7_7;
#line 71 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_8_8;

#line 71 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 71 "mdbcomp.goal_path.m"
          if (mdbcomp__goal_path__succeeded)
#line 71 "mdbcomp.goal_path.m"
            {
#line 71 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 71 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 2640 "mdbcomp.goal_path.c"
              {
#line 2642 "mdbcomp.goal_path.c"
                mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdbcomp__goal_path__V_5_5, mdbcomp__goal_path__V_7_7);
              }
#line 71 "mdbcomp.goal_path.m"
              if (mdbcomp__goal_path__succeeded)
#line 2647 "mdbcomp.goal_path.c"
                {
#line 2649 "mdbcomp.goal_path.c"
                  return mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__V_6_6, mdbcomp__goal_path__V_8_8);
                }
#line 71 "mdbcomp.goal_path.m"
            }
#line 71 "mdbcomp.goal_path.m"
        }
#line 71 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 71 "mdbcomp.goal_path.m"
  }
#line 71 "mdbcomp.goal_path.m"
}

#line 93 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(
#line 93 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 93 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 93 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 93 "mdbcomp.goal_path.m"
{
#line 93 "mdbcomp.goal_path.m"
  {
#line 93 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 93 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_8 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 93 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_9 = (MR_Integer) mdbcomp__goal_path__HeadVar__3_3;

#line 93 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_8 == mdbcomp__goal_path__CastY_9);
#line 93 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 2687 "mdbcomp.goal_path.c"
      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 93 "mdbcomp.goal_path.m"
    else
#line 93 "mdbcomp.goal_path.m"
      if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 93 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 93 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 93 "mdbcomp.goal_path.m"
        else
#line 2699 "mdbcomp.goal_path.c"
          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "mdbcomp.goal_path.m"
      else
#line 93 "mdbcomp.goal_path.m"
        {
#line 93 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 93 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2710 "mdbcomp.goal_path.c"
            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 93 "mdbcomp.goal_path.m"
          else
#line 93 "mdbcomp.goal_path.m"
            {
#line 93 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)));

#line 93 "mdbcomp.goal_path.m"
              {
#line 93 "mdbcomp.goal_path.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_11_11, mdbcomp__goal_path__V_7_7);
#line 93 "mdbcomp.goal_path.m"
                return;
              }
#line 93 "mdbcomp.goal_path.m"
            }
#line 93 "mdbcomp.goal_path.m"
        }
#line 93 "mdbcomp.goal_path.m"
  }
#line 93 "mdbcomp.goal_path.m"
}

#line 93 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(
#line 93 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 93 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 93 "mdbcomp.goal_path.m"
{
#line 93 "mdbcomp.goal_path.m"
  {
#line 93 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 93 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_7 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 93 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_8 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 93 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_7 == mdbcomp__goal_path__CastY_8);
#line 93 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 93 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = MR_TRUE;
#line 93 "mdbcomp.goal_path.m"
    else
#line 93 "mdbcomp.goal_path.m"
      if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 93 "mdbcomp.goal_path.m"
        {
#line 93 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastX_3 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 93 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastY_4 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 93 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_4 == mdbcomp__goal_path__CastX_3);
#line 93 "mdbcomp.goal_path.m"
        }
#line 93 "mdbcomp.goal_path.m"
      else
#line 93 "mdbcomp.goal_path.m"
        {
#line 93 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 93 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__V_6_6;

#line 93 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 93 "mdbcomp.goal_path.m"
          if (mdbcomp__goal_path__succeeded)
#line 93 "mdbcomp.goal_path.m"
            {
#line 93 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 2791 "mdbcomp.goal_path.c"
              mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_5_5 == mdbcomp__goal_path__V_6_6);
#line 93 "mdbcomp.goal_path.m"
            }
#line 93 "mdbcomp.goal_path.m"
        }
#line 93 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 93 "mdbcomp.goal_path.m"
  }
#line 93 "mdbcomp.goal_path.m"
}

#line 98 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____maybe_cut_0_0(
#line 98 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 98 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 98 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 98 "mdbcomp.goal_path.m"
{
#line 98 "mdbcomp.goal_path.m"
  {
#line 98 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 98 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__Cast_HeadVar1_4 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 98 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__Cast_HeadVar2_5 = (MR_Integer) mdbcomp__goal_path__HeadVar__3_3;

#line 98 "mdbcomp.goal_path.m"
    {
#line 98 "mdbcomp.goal_path.m"
      mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__Cast_HeadVar1_4, mdbcomp__goal_path__Cast_HeadVar2_5);
#line 98 "mdbcomp.goal_path.m"
      return;
    }
#line 98 "mdbcomp.goal_path.m"
  }
#line 98 "mdbcomp.goal_path.m"
}

#line 98 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_cut_0_0(
#line 98 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_1,
#line 98 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 98 "mdbcomp.goal_path.m"
{
#line 2845 "mdbcomp.goal_path.c"
  {
#line 2847 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__HeadVar__2_1 == mdbcomp__goal_path__HeadVar__2_2);

#line 2850 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2852 "mdbcomp.goal_path.c"
  }
#line 98 "mdbcomp.goal_path.m"
}

#line 240 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0(
#line 240 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 240 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 240 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 240 "mdbcomp.goal_path.m"
{
#line 240 "mdbcomp.goal_path.m"
  {
#line 240 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 240 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_4 = mdbcomp__goal_path__HeadVar__2_2;
#line 240 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_5 = mdbcomp__goal_path__HeadVar__3_3;

#line 240 "mdbcomp.goal_path.m"
    {
#line 240 "mdbcomp.goal_path.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[3], mdbcomp__goal_path__HeadVar__1_1, ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_5)));
#line 240 "mdbcomp.goal_path.m"
      return;
    }
#line 240 "mdbcomp.goal_path.m"
  }
#line 240 "mdbcomp.goal_path.m"
}

#line 240 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0(
#line 240 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 240 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 240 "mdbcomp.goal_path.m"
{
#line 240 "mdbcomp.goal_path.m"
  {
#line 240 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 240 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 240 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_4 = mdbcomp__goal_path__HeadVar__2_2;

#line 240 "mdbcomp.goal_path.m"
    {
#line 240 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[3], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
    }
#line 240 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 240 "mdbcomp.goal_path.m"
  }
#line 240 "mdbcomp.goal_path.m"
}

#line 241 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0(
#line 241 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 241 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 241 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 241 "mdbcomp.goal_path.m"
{
#line 241 "mdbcomp.goal_path.m"
  {
#line 241 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 241 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_4 = mdbcomp__goal_path__HeadVar__2_2;
#line 241 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_5 = mdbcomp__goal_path__HeadVar__3_3;

#line 241 "mdbcomp.goal_path.m"
    {
#line 241 "mdbcomp.goal_path.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[2], mdbcomp__goal_path__HeadVar__1_1, ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_5)));
#line 241 "mdbcomp.goal_path.m"
      return;
    }
#line 241 "mdbcomp.goal_path.m"
  }
#line 241 "mdbcomp.goal_path.m"
}

#line 241 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0(
#line 241 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 241 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 241 "mdbcomp.goal_path.m"
{
#line 241 "mdbcomp.goal_path.m"
  {
#line 241 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 241 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 241 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_4 = mdbcomp__goal_path__HeadVar__2_2;

#line 241 "mdbcomp.goal_path.m"
    {
#line 241 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[2], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
    }
#line 241 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 241 "mdbcomp.goal_path.m"
  }
#line 241 "mdbcomp.goal_path.m"
}

#line 75 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_string_0_0(
#line 75 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 75 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__HeadVar__2_2,
#line 75 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__HeadVar__3_3)
#line 75 "mdbcomp.goal_path.m"
{
#line 75 "mdbcomp.goal_path.m"
  {
#line 75 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 75 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__Cast_HeadVar1_4 = mdbcomp__goal_path__HeadVar__2_2;
#line 75 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__Cast_HeadVar2_5 = mdbcomp__goal_path__HeadVar__3_3;

#line 75 "mdbcomp.goal_path.m"
    {
#line 75 "mdbcomp.goal_path.m"
      mercury__private_builtin__builtin_compare_string_3_p_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__Cast_HeadVar1_4, mdbcomp__goal_path__Cast_HeadVar2_5);
#line 75 "mdbcomp.goal_path.m"
      return;
    }
#line 75 "mdbcomp.goal_path.m"
  }
#line 75 "mdbcomp.goal_path.m"
}

#line 75 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_string_0_0(
#line 75 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__HeadVar__1_1,
#line 75 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__HeadVar__2_2)
#line 75 "mdbcomp.goal_path.m"
{
#line 75 "mdbcomp.goal_path.m"
  {
#line 75 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 75 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__Cast_HeadVar1_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 75 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__Cast_HeadVar2_4 = mdbcomp__goal_path__HeadVar__2_2;

#line 75 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Cast_HeadVar1_3, mdbcomp__goal_path__Cast_HeadVar2_4) == 0);
#line 75 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 75 "mdbcomp.goal_path.m"
  }
#line 75 "mdbcomp.goal_path.m"
}

#line 77 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_step_0_0(
#line 77 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 77 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 77 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 77 "mdbcomp.goal_path.m"
{
#line 77 "mdbcomp.goal_path.m"
  {
#line 77 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 77 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_149 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 77 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_150 = (MR_Integer) mdbcomp__goal_path__HeadVar__3_3;

#line 77 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_149 == mdbcomp__goal_path__CastY_150);
#line 77 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 3064 "mdbcomp.goal_path.c"
      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
    else
#line 77 "mdbcomp.goal_path.m"
      if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 77 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 77 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
        else
#line 77 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "mdbcomp.goal_path.m"
            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
          else
#line 77 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 77 "mdbcomp.goal_path.m"
              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
            else
#line 77 "mdbcomp.goal_path.m"
              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 77 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
              else
#line 77 "mdbcomp.goal_path.m"
                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 77 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                else
#line 77 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 77 "mdbcomp.goal_path.m"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  else
#line 77 "mdbcomp.goal_path.m"
                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    else
#line 77 "mdbcomp.goal_path.m"
                      if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3114 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      else
#line 77 "mdbcomp.goal_path.m"
                        if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3120 "mdbcomp.goal_path.c"
                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3126 "mdbcomp.goal_path.c"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3132 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 3136 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
      else
#line 77 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 77 "mdbcomp.goal_path.m"
            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
          else
#line 77 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "mdbcomp.goal_path.m"
              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
            else
#line 77 "mdbcomp.goal_path.m"
              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 77 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
              else
#line 77 "mdbcomp.goal_path.m"
                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 77 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                else
#line 77 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 77 "mdbcomp.goal_path.m"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                  else
#line 77 "mdbcomp.goal_path.m"
                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    else
#line 77 "mdbcomp.goal_path.m"
                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 77 "mdbcomp.goal_path.m"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      else
#line 77 "mdbcomp.goal_path.m"
                        if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3186 "mdbcomp.goal_path.c"
                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3192 "mdbcomp.goal_path.c"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3198 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3204 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 3208 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
        else
#line 77 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 77 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 77 "mdbcomp.goal_path.m"
              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
            else
#line 77 "mdbcomp.goal_path.m"
              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
              else
#line 77 "mdbcomp.goal_path.m"
                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 77 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                else
#line 77 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 77 "mdbcomp.goal_path.m"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  else
#line 77 "mdbcomp.goal_path.m"
                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    else
#line 77 "mdbcomp.goal_path.m"
                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 77 "mdbcomp.goal_path.m"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      else
#line 77 "mdbcomp.goal_path.m"
                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 77 "mdbcomp.goal_path.m"
                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3258 "mdbcomp.goal_path.c"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3264 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3270 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3276 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 3280 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
          else
#line 77 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 77 "mdbcomp.goal_path.m"
              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 77 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
              else
#line 77 "mdbcomp.goal_path.m"
                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                else
#line 77 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 77 "mdbcomp.goal_path.m"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                  else
#line 77 "mdbcomp.goal_path.m"
                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                    else
#line 77 "mdbcomp.goal_path.m"
                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 77 "mdbcomp.goal_path.m"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      else
#line 77 "mdbcomp.goal_path.m"
                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 77 "mdbcomp.goal_path.m"
                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 77 "mdbcomp.goal_path.m"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3330 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3336 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3342 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3348 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 3352 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
            else
#line 77 "mdbcomp.goal_path.m"
              if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 77 "mdbcomp.goal_path.m"
                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 77 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                else
#line 77 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "mdbcomp.goal_path.m"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  else
#line 77 "mdbcomp.goal_path.m"
                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    else
#line 77 "mdbcomp.goal_path.m"
                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 77 "mdbcomp.goal_path.m"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      else
#line 77 "mdbcomp.goal_path.m"
                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 77 "mdbcomp.goal_path.m"
                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 77 "mdbcomp.goal_path.m"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 77 "mdbcomp.goal_path.m"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3402 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3408 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3414 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3420 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 3424 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
              else
#line 77 "mdbcomp.goal_path.m"
                if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 77 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 77 "mdbcomp.goal_path.m"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                  else
#line 77 "mdbcomp.goal_path.m"
                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    else
#line 77 "mdbcomp.goal_path.m"
                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 77 "mdbcomp.goal_path.m"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      else
#line 77 "mdbcomp.goal_path.m"
                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 77 "mdbcomp.goal_path.m"
                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 77 "mdbcomp.goal_path.m"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 77 "mdbcomp.goal_path.m"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 77 "mdbcomp.goal_path.m"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3474 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3480 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3486 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3492 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 3496 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                else
#line 77 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 77 "mdbcomp.goal_path.m"
                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    else
#line 77 "mdbcomp.goal_path.m"
                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "mdbcomp.goal_path.m"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      else
#line 77 "mdbcomp.goal_path.m"
                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 77 "mdbcomp.goal_path.m"
                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 77 "mdbcomp.goal_path.m"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 77 "mdbcomp.goal_path.m"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 77 "mdbcomp.goal_path.m"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 77 "mdbcomp.goal_path.m"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3546 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3552 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3558 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 77 "mdbcomp.goal_path.m"
                                        if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3564 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                        else
#line 3568 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  else
#line 77 "mdbcomp.goal_path.m"
                    if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
#line 77 "mdbcomp.goal_path.m"
                      {
#line 77 "mdbcomp.goal_path.m"
                        MR_Integer mdbcomp__goal_path__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "mdbcomp.goal_path.m"
                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 3581 "mdbcomp.goal_path.c"
                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3587 "mdbcomp.goal_path.c"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3593 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3599 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3605 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3611 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 3617 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 77 "mdbcomp.goal_path.m"
                                        {
#line 77 "mdbcomp.goal_path.m"
                                          MR_Integer mdbcomp__goal_path__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)));

#line 77 "mdbcomp.goal_path.m"
                                          {
#line 77 "mdbcomp.goal_path.m"
                                            mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_158_158, mdbcomp__goal_path__V_5_5);
#line 77 "mdbcomp.goal_path.m"
                                            return;
                                          }
#line 77 "mdbcomp.goal_path.m"
                                        }
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 77 "mdbcomp.goal_path.m"
                                        if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3641 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                        else
#line 77 "mdbcomp.goal_path.m"
                                          if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3647 "mdbcomp.goal_path.c"
                                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                          else
#line 77 "mdbcomp.goal_path.m"
                                            if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3653 "mdbcomp.goal_path.c"
                                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                            else
#line 3657 "mdbcomp.goal_path.c"
                                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      }
#line 77 "mdbcomp.goal_path.m"
                    else
#line 77 "mdbcomp.goal_path.m"
                      if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2))))
#line 77 "mdbcomp.goal_path.m"
                        {
#line 77 "mdbcomp.goal_path.m"
                          MR_Integer mdbcomp__goal_path__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "mdbcomp.goal_path.m"
                          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 3672 "mdbcomp.goal_path.c"
                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3678 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3684 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3690 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3696 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3702 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 3708 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 77 "mdbcomp.goal_path.m"
                                        if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3714 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                        else
#line 77 "mdbcomp.goal_path.m"
                                          if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 77 "mdbcomp.goal_path.m"
                                            {
#line 77 "mdbcomp.goal_path.m"
                                              MR_Integer mdbcomp__goal_path__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)));

#line 77 "mdbcomp.goal_path.m"
                                              {
#line 77 "mdbcomp.goal_path.m"
                                                mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_159_159, mdbcomp__goal_path__V_25_25);
#line 77 "mdbcomp.goal_path.m"
                                                return;
                                              }
#line 77 "mdbcomp.goal_path.m"
                                            }
#line 77 "mdbcomp.goal_path.m"
                                          else
#line 77 "mdbcomp.goal_path.m"
                                            if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3738 "mdbcomp.goal_path.c"
                                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                            else
#line 77 "mdbcomp.goal_path.m"
                                              if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3744 "mdbcomp.goal_path.c"
                                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                              else
#line 3748 "mdbcomp.goal_path.c"
                                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        }
#line 77 "mdbcomp.goal_path.m"
                      else
#line 77 "mdbcomp.goal_path.m"
                        if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 77 "mdbcomp.goal_path.m"
                          {
#line 77 "mdbcomp.goal_path.m"
                            MR_Integer mdbcomp__goal_path__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 77 "mdbcomp.goal_path.m"
                            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 3763 "mdbcomp.goal_path.c"
                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                            else
#line 77 "mdbcomp.goal_path.m"
                              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3769 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3775 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3781 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3787 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3793 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 77 "mdbcomp.goal_path.m"
                                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 3799 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                        else
#line 77 "mdbcomp.goal_path.m"
                                          if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3805 "mdbcomp.goal_path.c"
                                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                          else
#line 77 "mdbcomp.goal_path.m"
                                            if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3811 "mdbcomp.goal_path.c"
                                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                            else
#line 77 "mdbcomp.goal_path.m"
                                              if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 77 "mdbcomp.goal_path.m"
                                                {
#line 77 "mdbcomp.goal_path.m"
                                                  MR_Integer mdbcomp__goal_path__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 1)));

#line 77 "mdbcomp.goal_path.m"
                                                  {
#line 77 "mdbcomp.goal_path.m"
                                                    mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_157_157, mdbcomp__goal_path__V_148_148);
#line 77 "mdbcomp.goal_path.m"
                                                    return;
                                                  }
#line 77 "mdbcomp.goal_path.m"
                                                }
#line 77 "mdbcomp.goal_path.m"
                                              else
#line 77 "mdbcomp.goal_path.m"
                                                if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 3835 "mdbcomp.goal_path.c"
                                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                                else
#line 3839 "mdbcomp.goal_path.c"
                                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                          }
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 77 "mdbcomp.goal_path.m"
                            {
#line 77 "mdbcomp.goal_path.m"
                              MR_Word mdbcomp__goal_path__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 77 "mdbcomp.goal_path.m"
                              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 3854 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3860 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3866 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3872 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3878 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 77 "mdbcomp.goal_path.m"
                                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3884 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                        else
#line 77 "mdbcomp.goal_path.m"
                                          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 3890 "mdbcomp.goal_path.c"
                                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                          else
#line 77 "mdbcomp.goal_path.m"
                                            if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3896 "mdbcomp.goal_path.c"
                                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                            else
#line 77 "mdbcomp.goal_path.m"
                                              if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3902 "mdbcomp.goal_path.c"
                                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                              else
#line 77 "mdbcomp.goal_path.m"
                                                if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 3908 "mdbcomp.goal_path.c"
                                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                                else
#line 77 "mdbcomp.goal_path.m"
                                                  if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 77 "mdbcomp.goal_path.m"
                                                    {
#line 77 "mdbcomp.goal_path.m"
                                                      MR_Word mdbcomp__goal_path__V_107_107 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 1)));
#line 77 "mdbcomp.goal_path.m"
                                                      MR_Integer mdbcomp__goal_path__V_163_163 = (MR_Integer) mdbcomp__goal_path__V_160_160;
#line 77 "mdbcomp.goal_path.m"
                                                      MR_Integer mdbcomp__goal_path__V_164_164 = (MR_Integer) mdbcomp__goal_path__V_107_107;

#line 77 "mdbcomp.goal_path.m"
                                                      {
#line 77 "mdbcomp.goal_path.m"
                                                        mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_163_163, mdbcomp__goal_path__V_164_164);
#line 77 "mdbcomp.goal_path.m"
                                                        return;
                                                      }
#line 77 "mdbcomp.goal_path.m"
                                                    }
#line 77 "mdbcomp.goal_path.m"
                                                  else
#line 3934 "mdbcomp.goal_path.c"
                                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                            }
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            {
#line 77 "mdbcomp.goal_path.m"
                              MR_Word mdbcomp__goal_path__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 2)));
#line 77 "mdbcomp.goal_path.m"
                              MR_Integer mdbcomp__goal_path__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 77 "mdbcomp.goal_path.m"
                              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 3949 "mdbcomp.goal_path.c"
                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                              else
#line 77 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 3955 "mdbcomp.goal_path.c"
                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                else
#line 77 "mdbcomp.goal_path.m"
                                  if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 3961 "mdbcomp.goal_path.c"
                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                  else
#line 77 "mdbcomp.goal_path.m"
                                    if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 3967 "mdbcomp.goal_path.c"
                                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                    else
#line 77 "mdbcomp.goal_path.m"
                                      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 3973 "mdbcomp.goal_path.c"
                                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                      else
#line 77 "mdbcomp.goal_path.m"
                                        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 3979 "mdbcomp.goal_path.c"
                                          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                        else
#line 77 "mdbcomp.goal_path.m"
                                          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 3985 "mdbcomp.goal_path.c"
                                            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                          else
#line 77 "mdbcomp.goal_path.m"
                                            if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
#line 3991 "mdbcomp.goal_path.c"
                                              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                            else
#line 77 "mdbcomp.goal_path.m"
                                              if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
#line 3997 "mdbcomp.goal_path.c"
                                                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                                              else
#line 77 "mdbcomp.goal_path.m"
                                                if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 4003 "mdbcomp.goal_path.c"
                                                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                                else
#line 77 "mdbcomp.goal_path.m"
                                                  if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 4009 "mdbcomp.goal_path.c"
                                                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                                                  else
#line 77 "mdbcomp.goal_path.m"
                                                    {
#line 77 "mdbcomp.goal_path.m"
                                                      MR_Integer mdbcomp__goal_path__V_48_48 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 1)));
#line 77 "mdbcomp.goal_path.m"
                                                      MR_Word mdbcomp__goal_path__V_49_49 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 2)));
#line 77 "mdbcomp.goal_path.m"
                                                      MR_Word mdbcomp__goal_path__V_50_50;

#line 77 "mdbcomp.goal_path.m"
                                                      {
#line 77 "mdbcomp.goal_path.m"
                                                        mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__goal_path__V_50_50, mdbcomp__goal_path__V_162_162, mdbcomp__goal_path__V_48_48);
                                                      }
#line 4027 "mdbcomp.goal_path.c"
                                                      mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_50_50 == (MR_Integer) 0);
#line 77 "mdbcomp.goal_path.m"
                                                      mdbcomp__goal_path__succeeded = !(mdbcomp__goal_path__succeeded);
#line 77 "mdbcomp.goal_path.m"
                                                      if (mdbcomp__goal_path__succeeded)
#line 77 "mdbcomp.goal_path.m"
                                                        *mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__V_50_50;
#line 77 "mdbcomp.goal_path.m"
                                                      else
#line 77 "mdbcomp.goal_path.m"
                                                        {
#line 77 "mdbcomp.goal_path.m"
                                                          mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_161_161, mdbcomp__goal_path__V_49_49);
#line 77 "mdbcomp.goal_path.m"
                                                          return;
                                                        }
#line 77 "mdbcomp.goal_path.m"
                                                    }
#line 77 "mdbcomp.goal_path.m"
                            }
#line 77 "mdbcomp.goal_path.m"
  }
#line 77 "mdbcomp.goal_path.m"
}

#line 77 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_step_0_0(
#line 77 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 77 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 77 "mdbcomp.goal_path.m"
{
#line 77 "mdbcomp.goal_path.m"
  {
#line 77 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 77 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_29 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 77 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_30 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 77 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_29 == mdbcomp__goal_path__CastY_30);
#line 77 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 77 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = MR_TRUE;
#line 77 "mdbcomp.goal_path.m"
    else
#line 77 "mdbcomp.goal_path.m"
      if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 77 "mdbcomp.goal_path.m"
        {
#line 77 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastX_25 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 77 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastY_26 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 77 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_26 == mdbcomp__goal_path__CastX_25);
#line 77 "mdbcomp.goal_path.m"
        }
#line 77 "mdbcomp.goal_path.m"
      else
#line 77 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 77 "mdbcomp.goal_path.m"
          {
#line 77 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__CastX_11 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 77 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__CastY_12 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 77 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_12 == mdbcomp__goal_path__CastX_11);
#line 77 "mdbcomp.goal_path.m"
          }
#line 77 "mdbcomp.goal_path.m"
        else
#line 77 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 77 "mdbcomp.goal_path.m"
            {
#line 77 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__CastX_15 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 77 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__CastY_16 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 77 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_16 == mdbcomp__goal_path__CastX_15);
#line 77 "mdbcomp.goal_path.m"
            }
#line 77 "mdbcomp.goal_path.m"
          else
#line 77 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 77 "mdbcomp.goal_path.m"
              {
#line 77 "mdbcomp.goal_path.m"
                MR_Integer mdbcomp__goal_path__CastX_13 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 77 "mdbcomp.goal_path.m"
                MR_Integer mdbcomp__goal_path__CastY_14 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 77 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_14 == mdbcomp__goal_path__CastX_13);
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
            else
#line 77 "mdbcomp.goal_path.m"
              if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 77 "mdbcomp.goal_path.m"
                {
#line 77 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__CastX_21 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 77 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__CastY_22 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 77 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_22 == mdbcomp__goal_path__CastX_21);
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
              else
#line 77 "mdbcomp.goal_path.m"
                if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 77 "mdbcomp.goal_path.m"
                  {
#line 77 "mdbcomp.goal_path.m"
                    MR_Integer mdbcomp__goal_path__CastX_17 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 77 "mdbcomp.goal_path.m"
                    MR_Integer mdbcomp__goal_path__CastY_18 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 77 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_18 == mdbcomp__goal_path__CastX_17);
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                else
#line 77 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 77 "mdbcomp.goal_path.m"
                    {
#line 77 "mdbcomp.goal_path.m"
                      MR_Integer mdbcomp__goal_path__CastX_23 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 77 "mdbcomp.goal_path.m"
                      MR_Integer mdbcomp__goal_path__CastY_24 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 77 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_24 == mdbcomp__goal_path__CastX_23);
#line 77 "mdbcomp.goal_path.m"
                    }
#line 77 "mdbcomp.goal_path.m"
                  else
#line 77 "mdbcomp.goal_path.m"
                    if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
#line 77 "mdbcomp.goal_path.m"
                      {
#line 77 "mdbcomp.goal_path.m"
                        MR_Integer mdbcomp__goal_path__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "mdbcomp.goal_path.m"
                        MR_Integer mdbcomp__goal_path__V_4_4;

#line 77 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 77 "mdbcomp.goal_path.m"
                        if (mdbcomp__goal_path__succeeded)
#line 77 "mdbcomp.goal_path.m"
                          {
#line 77 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 4201 "mdbcomp.goal_path.c"
                            mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_3_3 == mdbcomp__goal_path__V_4_4);
#line 77 "mdbcomp.goal_path.m"
                          }
#line 77 "mdbcomp.goal_path.m"
                      }
#line 77 "mdbcomp.goal_path.m"
                    else
#line 77 "mdbcomp.goal_path.m"
                      if (((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
#line 77 "mdbcomp.goal_path.m"
                        {
#line 77 "mdbcomp.goal_path.m"
                          MR_Integer mdbcomp__goal_path__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 77 "mdbcomp.goal_path.m"
                          MR_Integer mdbcomp__goal_path__V_6_6;

#line 77 "mdbcomp.goal_path.m"
                          mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
#line 77 "mdbcomp.goal_path.m"
                          if (mdbcomp__goal_path__succeeded)
#line 77 "mdbcomp.goal_path.m"
                            {
#line 77 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__V_6_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 4226 "mdbcomp.goal_path.c"
                              mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_5_5 == mdbcomp__goal_path__V_6_6);
#line 77 "mdbcomp.goal_path.m"
                            }
#line 77 "mdbcomp.goal_path.m"
                        }
#line 77 "mdbcomp.goal_path.m"
                      else
#line 77 "mdbcomp.goal_path.m"
                        if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 77 "mdbcomp.goal_path.m"
                          {
#line 77 "mdbcomp.goal_path.m"
                            MR_Integer mdbcomp__goal_path__V_27_27 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 77 "mdbcomp.goal_path.m"
                            MR_Integer mdbcomp__goal_path__V_28_28;

#line 77 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__succeeded = ((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
#line 77 "mdbcomp.goal_path.m"
                            if (mdbcomp__goal_path__succeeded)
#line 77 "mdbcomp.goal_path.m"
                              {
#line 77 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__V_28_28 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 4251 "mdbcomp.goal_path.c"
                                mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_27_27 == mdbcomp__goal_path__V_28_28);
#line 77 "mdbcomp.goal_path.m"
                              }
#line 77 "mdbcomp.goal_path.m"
                          }
#line 77 "mdbcomp.goal_path.m"
                        else
#line 77 "mdbcomp.goal_path.m"
                          if (((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 77 "mdbcomp.goal_path.m"
                            {
#line 77 "mdbcomp.goal_path.m"
                              MR_Word mdbcomp__goal_path__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 77 "mdbcomp.goal_path.m"
                              MR_Word mdbcomp__goal_path__V_20_20;

#line 77 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__succeeded = ((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
#line 77 "mdbcomp.goal_path.m"
                              if (mdbcomp__goal_path__succeeded)
#line 77 "mdbcomp.goal_path.m"
                                {
#line 77 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 4276 "mdbcomp.goal_path.c"
                                  mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_19_19 == mdbcomp__goal_path__V_20_20);
#line 77 "mdbcomp.goal_path.m"
                                }
#line 77 "mdbcomp.goal_path.m"
                            }
#line 77 "mdbcomp.goal_path.m"
                          else
#line 77 "mdbcomp.goal_path.m"
                            {
#line 77 "mdbcomp.goal_path.m"
                              MR_Integer mdbcomp__goal_path__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 77 "mdbcomp.goal_path.m"
                              MR_Word mdbcomp__goal_path__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 2)));
#line 77 "mdbcomp.goal_path.m"
                              MR_Integer mdbcomp__goal_path__V_9_9;
#line 77 "mdbcomp.goal_path.m"
                              MR_Word mdbcomp__goal_path__V_10_10;

#line 77 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__succeeded = ((((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
#line 77 "mdbcomp.goal_path.m"
                              if (mdbcomp__goal_path__succeeded)
#line 77 "mdbcomp.goal_path.m"
                                {
#line 77 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__V_9_9 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 77 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 2)));
#line 4305 "mdbcomp.goal_path.c"
                                  mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_7_7 == mdbcomp__goal_path__V_9_9);
#line 77 "mdbcomp.goal_path.m"
                                  if (mdbcomp__goal_path__succeeded)
#line 4309 "mdbcomp.goal_path.c"
                                    {
#line 4311 "mdbcomp.goal_path.c"
                                      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(mdbcomp__goal_path__V_8_8, mdbcomp__goal_path__V_10_10);
                                    }
#line 77 "mdbcomp.goal_path.m"
                                }
#line 77 "mdbcomp.goal_path.m"
                            }
#line 77 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 77 "mdbcomp.goal_path.m"
  }
#line 77 "mdbcomp.goal_path.m"
}

#line 62 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____goal_id_0_0(
#line 62 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 62 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 62 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 62 "mdbcomp.goal_path.m"
{
#line 62 "mdbcomp.goal_path.m"
  {
#line 62 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 62 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_6 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 62 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_7 = (MR_Integer) mdbcomp__goal_path__HeadVar__3_3;

#line 62 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_6 == mdbcomp__goal_path__CastY_7);
#line 62 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 4349 "mdbcomp.goal_path.c"
      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 62 "mdbcomp.goal_path.m"
    else
#line 62 "mdbcomp.goal_path.m"
      {
#line 62 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__V_4_4 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 62 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__V_5_5 = (MR_Integer) mdbcomp__goal_path__HeadVar__3_3;

#line 62 "mdbcomp.goal_path.m"
        {
#line 62 "mdbcomp.goal_path.m"
          mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_4_4, mdbcomp__goal_path__V_5_5);
#line 62 "mdbcomp.goal_path.m"
          return;
        }
#line 62 "mdbcomp.goal_path.m"
      }
#line 62 "mdbcomp.goal_path.m"
  }
#line 62 "mdbcomp.goal_path.m"
}

#line 62 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_id_0_0(
#line 62 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 62 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 62 "mdbcomp.goal_path.m"
{
#line 62 "mdbcomp.goal_path.m"
  {
#line 62 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 62 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_5 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 62 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_6 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 62 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_5 == mdbcomp__goal_path__CastY_6);
#line 62 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 62 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = MR_TRUE;
#line 62 "mdbcomp.goal_path.m"
    else
#line 62 "mdbcomp.goal_path.m"
      {
#line 62 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__V_3_3 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 62 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__V_4_4 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 4407 "mdbcomp.goal_path.c"
        mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_3_3 == mdbcomp__goal_path__V_4_4);
#line 62 "mdbcomp.goal_path.m"
      }
#line 62 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 62 "mdbcomp.goal_path.m"
  }
#line 62 "mdbcomp.goal_path.m"
}

#line 239 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0(
#line 239 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 239 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 239 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 239 "mdbcomp.goal_path.m"
{
#line 239 "mdbcomp.goal_path.m"
  {
#line 239 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 239 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_4 = mdbcomp__goal_path__HeadVar__2_2;
#line 239 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_5 = mdbcomp__goal_path__HeadVar__3_3;

#line 239 "mdbcomp.goal_path.m"
    {
#line 239 "mdbcomp.goal_path.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[1], mdbcomp__goal_path__HeadVar__1_1, ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_5)));
#line 239 "mdbcomp.goal_path.m"
      return;
    }
#line 239 "mdbcomp.goal_path.m"
  }
#line 239 "mdbcomp.goal_path.m"
}

#line 239 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0(
#line 239 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 239 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 239 "mdbcomp.goal_path.m"
{
#line 239 "mdbcomp.goal_path.m"
  {
#line 239 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 239 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 239 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_4 = mdbcomp__goal_path__HeadVar__2_2;

#line 239 "mdbcomp.goal_path.m"
    {
#line 239 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[1], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
    }
#line 239 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 239 "mdbcomp.goal_path.m"
  }
#line 239 "mdbcomp.goal_path.m"
}

#line 281 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0(
#line 281 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_8,
#line 281 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 281 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 281 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 281 "mdbcomp.goal_path.m"
{
#line 281 "mdbcomp.goal_path.m"
  {
#line 281 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 281 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_6 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 281 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_7 = (MR_Integer) mdbcomp__goal_path__HeadVar__3_3;

#line 281 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_6 == mdbcomp__goal_path__CastY_7);
#line 281 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 4506 "mdbcomp.goal_path.c"
      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 281 "mdbcomp.goal_path.m"
    else
#line 281 "mdbcomp.goal_path.m"
      {
#line 281 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TypeInfo_10_10;
#line 281 "mdbcomp.goal_path.m"
        MR_ArrayPtr mdbcomp__goal_path__V_4_4 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__2_2;
#line 281 "mdbcomp.goal_path.m"
        MR_ArrayPtr mdbcomp__goal_path__V_5_5 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__3_3;

#line 4519 "mdbcomp.goal_path.c"
        {
#line 4521 "mdbcomp.goal_path.c"
          mdbcomp__goal_path__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4523 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4525 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_8));
#line 4527 "mdbcomp.goal_path.c"
        }
#line 281 "mdbcomp.goal_path.m"
        {
#line 281 "mdbcomp.goal_path.m"
          mercury__array____Compare____array_1_0(mdbcomp__goal_path__TypeInfo_10_10, mdbcomp__goal_path__HeadVar__1_1, (MR_ArrayPtr) mdbcomp__goal_path__V_4_4, (MR_ArrayPtr) mdbcomp__goal_path__V_5_5);
#line 281 "mdbcomp.goal_path.m"
          return;
        }
#line 281 "mdbcomp.goal_path.m"
      }
#line 281 "mdbcomp.goal_path.m"
  }
#line 281 "mdbcomp.goal_path.m"
}

#line 281 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0(
#line 281 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_7,
#line 281 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 281 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 281 "mdbcomp.goal_path.m"
{
#line 281 "mdbcomp.goal_path.m"
  {
#line 281 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 281 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_5 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 281 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_6 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 281 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_5 == mdbcomp__goal_path__CastY_6);
#line 281 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 281 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = MR_TRUE;
#line 281 "mdbcomp.goal_path.m"
    else
#line 281 "mdbcomp.goal_path.m"
      {
#line 281 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TypeInfo_9_9;
#line 281 "mdbcomp.goal_path.m"
        MR_ArrayPtr mdbcomp__goal_path__V_3_3 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__1_1;
#line 281 "mdbcomp.goal_path.m"
        MR_ArrayPtr mdbcomp__goal_path__V_4_4 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__2_2;

#line 4580 "mdbcomp.goal_path.c"
        {
#line 4582 "mdbcomp.goal_path.c"
          mdbcomp__goal_path__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4584 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4586 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_9_9, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_7));
#line 4588 "mdbcomp.goal_path.c"
        }
#line 4590 "mdbcomp.goal_path.c"
        {
#line 4592 "mdbcomp.goal_path.c"
          return mdbcomp__goal_path__succeeded = mercury__array____Unify____array_1_0(mdbcomp__goal_path__TypeInfo_9_9, (MR_ArrayPtr) mdbcomp__goal_path__V_3_3, (MR_ArrayPtr) mdbcomp__goal_path__V_4_4);
        }
#line 281 "mdbcomp.goal_path.m"
      }
#line 281 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 281 "mdbcomp.goal_path.m"
  }
#line 281 "mdbcomp.goal_path.m"
}

#line 67 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____forward_goal_path_0_0(
#line 67 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 67 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 67 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 67 "mdbcomp.goal_path.m"
{
#line 67 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 67 "mdbcomp.goal_path.m"
    {
#line 67 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 67 "mdbcomp.goal_path.m"
      {
#line 67 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;
#line 67 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__CastX_13 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 67 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__CastY_14 = (MR_Integer) mdbcomp__goal_path__HeadVar__3_3;

#line 67 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_13 == mdbcomp__goal_path__CastY_14);
#line 67 "mdbcomp.goal_path.m"
        if (mdbcomp__goal_path__succeeded)
#line 4634 "mdbcomp.goal_path.c"
          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mdbcomp.goal_path.m"
        else
#line 67 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "mdbcomp.goal_path.m"
              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 67 "mdbcomp.goal_path.m"
            else
#line 4646 "mdbcomp.goal_path.c"
              *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 67 "mdbcomp.goal_path.m"
          else
#line 67 "mdbcomp.goal_path.m"
            {
#line 67 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 67 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 67 "mdbcomp.goal_path.m"
              if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4659 "mdbcomp.goal_path.c"
                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 67 "mdbcomp.goal_path.m"
              else
#line 67 "mdbcomp.goal_path.m"
                {
#line 67 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)));
#line 67 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 1)));
#line 67 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_12_12;

#line 67 "mdbcomp.goal_path.m"
                  {
#line 67 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path____Compare____goal_path_step_0_0(&mdbcomp__goal_path__V_12_12, mdbcomp__goal_path__V_18_18, mdbcomp__goal_path__V_10_10);
                  }
#line 4677 "mdbcomp.goal_path.c"
                  mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_12_12 == (MR_Integer) 0);
#line 67 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__succeeded = !(mdbcomp__goal_path__succeeded);
#line 67 "mdbcomp.goal_path.m"
                  if (mdbcomp__goal_path__succeeded)
#line 67 "mdbcomp.goal_path.m"
                    *mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__V_12_12;
#line 67 "mdbcomp.goal_path.m"
                  else
#line 67 "mdbcomp.goal_path.m"
                    {
#line 67 "mdbcomp.goal_path.m"
                      /* direct tailcall eliminated */
#line 67 "mdbcomp.goal_path.m"
                      {
#line 67 "mdbcomp.goal_path.m"
                        MR_Word mdbcomp__goal_path__HeadVar__2__tmp_copy_2 = mdbcomp__goal_path__V_17_17;
#line 67 "mdbcomp.goal_path.m"
                        MR_Word mdbcomp__goal_path__HeadVar__3__tmp_copy_3 = mdbcomp__goal_path__V_11_11;

#line 67 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__HeadVar__3_3 = mdbcomp__goal_path__HeadVar__3__tmp_copy_3;
#line 67 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__HeadVar__2_2 = mdbcomp__goal_path__HeadVar__2__tmp_copy_2;
#line 67 "mdbcomp.goal_path.m"
                      }
#line 67 "mdbcomp.goal_path.m"
                      continue;
#line 67 "mdbcomp.goal_path.m"
                    }
#line 67 "mdbcomp.goal_path.m"
                }
#line 67 "mdbcomp.goal_path.m"
            }
#line 67 "mdbcomp.goal_path.m"
      }
#line 67 "mdbcomp.goal_path.m"
      break;
#line 67 "mdbcomp.goal_path.m"
    }
#line 67 "mdbcomp.goal_path.m"
}

#line 67 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____forward_goal_path_0_0(
#line 67 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 67 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 67 "mdbcomp.goal_path.m"
{
#line 67 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 67 "mdbcomp.goal_path.m"
    {
#line 67 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 67 "mdbcomp.goal_path.m"
      {
#line 67 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;
#line 67 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__CastX_9 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 67 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__CastY_10 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 67 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_9 == mdbcomp__goal_path__CastY_10);
#line 67 "mdbcomp.goal_path.m"
        if (mdbcomp__goal_path__succeeded)
#line 67 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = MR_TRUE;
#line 67 "mdbcomp.goal_path.m"
        else
#line 67 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 67 "mdbcomp.goal_path.m"
            {
#line 67 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__CastX_3 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 67 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__CastY_4 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 67 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_4 == mdbcomp__goal_path__CastX_3);
#line 67 "mdbcomp.goal_path.m"
            }
#line 67 "mdbcomp.goal_path.m"
          else
#line 67 "mdbcomp.goal_path.m"
            {
#line 67 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 67 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 67 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_7_7;
#line 67 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_8_8;

#line 67 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 67 "mdbcomp.goal_path.m"
              if (mdbcomp__goal_path__succeeded)
#line 67 "mdbcomp.goal_path.m"
                {
#line 67 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 67 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 4789 "mdbcomp.goal_path.c"
                  {
#line 4791 "mdbcomp.goal_path.c"
                    mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__V_5_5, mdbcomp__goal_path__V_7_7);
                  }
#line 67 "mdbcomp.goal_path.m"
                  if (mdbcomp__goal_path__succeeded)
#line 4796 "mdbcomp.goal_path.c"
                    {
#line 4798 "mdbcomp.goal_path.c"
                      /* direct tailcall eliminated */
#line 4800 "mdbcomp.goal_path.c"
                      {
#line 4802 "mdbcomp.goal_path.c"
                        MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__V_6_6;
#line 4804 "mdbcomp.goal_path.c"
                        MR_Word mdbcomp__goal_path__HeadVar__2__tmp_copy_2 = mdbcomp__goal_path__V_8_8;

#line 4807 "mdbcomp.goal_path.c"
                        mdbcomp__goal_path__HeadVar__2_2 = mdbcomp__goal_path__HeadVar__2__tmp_copy_2;
#line 4809 "mdbcomp.goal_path.c"
                        mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 4811 "mdbcomp.goal_path.c"
                      }
#line 4813 "mdbcomp.goal_path.c"
                      continue;
#line 4815 "mdbcomp.goal_path.c"
                    }
#line 67 "mdbcomp.goal_path.m"
                }
#line 67 "mdbcomp.goal_path.m"
            }
#line 67 "mdbcomp.goal_path.m"
        return mdbcomp__goal_path__succeeded;
#line 67 "mdbcomp.goal_path.m"
      }
#line 67 "mdbcomp.goal_path.m"
      break;
#line 67 "mdbcomp.goal_path.m"
    }
#line 67 "mdbcomp.goal_path.m"
}

#line 238 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0(
#line 238 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 238 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 238 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 238 "mdbcomp.goal_path.m"
{
#line 238 "mdbcomp.goal_path.m"
  {
#line 238 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 238 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_4 = mdbcomp__goal_path__HeadVar__2_2;
#line 238 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_5 = mdbcomp__goal_path__HeadVar__3_3;

#line 238 "mdbcomp.goal_path.m"
    {
#line 238 "mdbcomp.goal_path.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[0], mdbcomp__goal_path__HeadVar__1_1, ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_5)));
#line 238 "mdbcomp.goal_path.m"
      return;
    }
#line 238 "mdbcomp.goal_path.m"
  }
#line 238 "mdbcomp.goal_path.m"
}

#line 238 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0(
#line 238 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 238 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 238 "mdbcomp.goal_path.m"
{
#line 238 "mdbcomp.goal_path.m"
  {
#line 238 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 238 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 238 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_4 = mdbcomp__goal_path__HeadVar__2_2;

#line 238 "mdbcomp.goal_path.m"
    {
#line 238 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[0], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
    }
#line 238 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 238 "mdbcomp.goal_path.m"
  }
#line 238 "mdbcomp.goal_path.m"
}

#line 227 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0(
#line 227 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 227 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 227 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 227 "mdbcomp.goal_path.m"
{
#line 227 "mdbcomp.goal_path.m"
  {
#line 227 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 227 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_13 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 227 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_14 = (MR_Integer) mdbcomp__goal_path__HeadVar__3_3;

#line 227 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_13 == mdbcomp__goal_path__CastY_14);
#line 227 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 4918 "mdbcomp.goal_path.c"
      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 227 "mdbcomp.goal_path.m"
    else
#line 227 "mdbcomp.goal_path.m"
      if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 227 "mdbcomp.goal_path.m"
        else
#line 4930 "mdbcomp.goal_path.c"
          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 227 "mdbcomp.goal_path.m"
      else
#line 227 "mdbcomp.goal_path.m"
        {
#line 227 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 227 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 227 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 4943 "mdbcomp.goal_path.c"
            *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 227 "mdbcomp.goal_path.m"
          else
#line 227 "mdbcomp.goal_path.m"
            {
#line 227 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)));
#line 227 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 1)));
#line 227 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__V_12_12;
#line 227 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__V_19_19 = (MR_Integer) mdbcomp__goal_path__V_18_18;
#line 227 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__V_20_20 = (MR_Integer) mdbcomp__goal_path__V_10_10;

#line 227 "mdbcomp.goal_path.m"
              {
#line 227 "mdbcomp.goal_path.m"
                mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__goal_path__V_12_12, mdbcomp__goal_path__V_19_19, mdbcomp__goal_path__V_20_20);
              }
#line 4965 "mdbcomp.goal_path.c"
              mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_12_12 == (MR_Integer) 0);
#line 227 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = !(mdbcomp__goal_path__succeeded);
#line 227 "mdbcomp.goal_path.m"
              if (mdbcomp__goal_path__succeeded)
#line 227 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__V_12_12;
#line 227 "mdbcomp.goal_path.m"
              else
#line 227 "mdbcomp.goal_path.m"
                {
#line 227 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path____Compare____goal_path_step_0_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_17_17, mdbcomp__goal_path__V_11_11);
#line 227 "mdbcomp.goal_path.m"
                  return;
                }
#line 227 "mdbcomp.goal_path.m"
            }
#line 227 "mdbcomp.goal_path.m"
        }
#line 227 "mdbcomp.goal_path.m"
  }
#line 227 "mdbcomp.goal_path.m"
}

#line 227 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_0_0(
#line 227 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 227 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 227 "mdbcomp.goal_path.m"
{
#line 227 "mdbcomp.goal_path.m"
  {
#line 227 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 227 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_9 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 227 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_10 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 227 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_9 == mdbcomp__goal_path__CastY_10);
#line 227 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 227 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = MR_TRUE;
#line 227 "mdbcomp.goal_path.m"
    else
#line 227 "mdbcomp.goal_path.m"
      if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 227 "mdbcomp.goal_path.m"
        {
#line 227 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastX_3 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 227 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastY_4 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 227 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_4 == mdbcomp__goal_path__CastX_3);
#line 227 "mdbcomp.goal_path.m"
        }
#line 227 "mdbcomp.goal_path.m"
      else
#line 227 "mdbcomp.goal_path.m"
        {
#line 227 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 227 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 227 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_7_7;
#line 227 "mdbcomp.goal_path.m"
          MR_Word mdbcomp__goal_path__V_8_8;
#line 62 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastX_13;
#line 62 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastY_14;

#line 227 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 227 "mdbcomp.goal_path.m"
          if (mdbcomp__goal_path__succeeded)
#line 227 "mdbcomp.goal_path.m"
            {
#line 227 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 227 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 62 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__CastX_13 = (MR_Integer) mdbcomp__goal_path__V_5_5;
#line 62 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__CastY_14 = (MR_Integer) mdbcomp__goal_path__V_7_7;
#line 62 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_13 == mdbcomp__goal_path__CastY_14);
#line 62 "mdbcomp.goal_path.m"
              if (mdbcomp__goal_path__succeeded)
#line 62 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 62 "mdbcomp.goal_path.m"
              else
#line 62 "mdbcomp.goal_path.m"
                {
#line 62 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__V_11_11 = (MR_Integer) mdbcomp__goal_path__V_5_5;
#line 62 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__V_12_12 = (MR_Integer) mdbcomp__goal_path__V_7_7;

#line 5076 "mdbcomp.goal_path.c"
                  mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_11_11 == mdbcomp__goal_path__V_12_12);
#line 62 "mdbcomp.goal_path.m"
                }
#line 227 "mdbcomp.goal_path.m"
              if (mdbcomp__goal_path__succeeded)
#line 5082 "mdbcomp.goal_path.c"
                {
#line 5084 "mdbcomp.goal_path.c"
                  return mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__V_6_6, mdbcomp__goal_path__V_8_8);
                }
#line 227 "mdbcomp.goal_path.m"
            }
#line 227 "mdbcomp.goal_path.m"
        }
#line 227 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 227 "mdbcomp.goal_path.m"
  }
#line 227 "mdbcomp.goal_path.m"
}

#line 629 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(
#line 629 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 629 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2,
#line 629 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_3)
#line 629 "mdbcomp.goal_path.m"
{
#line 634 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 634 "mdbcomp.goal_path.m"
    {
#line 634 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 634 "mdbcomp.goal_path.m"
      {
#line 634 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 634 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 634 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_3 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2;
#line 634 "mdbcomp.goal_path.m"
        else
#line 635 "mdbcomp.goal_path.m"
          {
#line 635 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 635 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 635 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 0)));
#line 635 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__ContainingGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 1)));
#line 635 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalReversePath_12;
#line 635 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_18_18;

#line 640 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__ContainingGoal_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 639 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 640 "mdbcomp.goal_path.m"
            else
#line 641 "mdbcomp.goal_path.m"
              {
#line 641 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 0)));
#line 641 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__Step_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 1)));
#line 641 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalReversePath_15;
#line 642 "mdbcomp.goal_path.m"
                MR_Box mdbcomp__goal_path__conv0_ContainingGoalReversePath_15;

#line 642 "mdbcomp.goal_path.m"
                {
#line 642 "mdbcomp.goal_path.m"
                  mercury__bimap__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2, ((MR_Box) (mdbcomp__goal_path__ContainingGoalId_13)), &mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
                }
#line 642 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__ContainingGoalReversePath_15 = ((MR_Word) mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
#line 644 "mdbcomp.goal_path.m"
                {
#line 644 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 644 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 0) = ((MR_Box) (mdbcomp__goal_path__ContainingGoalReversePath_15));
#line 644 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 1) = ((MR_Box) (mdbcomp__goal_path__Step_14));
#line 644 "mdbcomp.goal_path.m"
                }
#line 641 "mdbcomp.goal_path.m"
              }
#line 646 "mdbcomp.goal_path.m"
            {
#line 646 "mdbcomp.goal_path.m"
              mercury__bimap__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, ((MR_Box) (mdbcomp__goal_path__GoalId_10)), ((MR_Box) (mdbcomp__goal_path__GoalReversePath_12)), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2, &mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_18_18);
            }
#line 647 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 647 "mdbcomp.goal_path.m"
            {
#line 647 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__Tail_8;
#line 647 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_18_18;

#line 647 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0__tmp_copy_2;
#line 647 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 647 "mdbcomp.goal_path.m"
            }
#line 647 "mdbcomp.goal_path.m"
            continue;
#line 635 "mdbcomp.goal_path.m"
          }
#line 634 "mdbcomp.goal_path.m"
      }
#line 634 "mdbcomp.goal_path.m"
      break;
#line 634 "mdbcomp.goal_path.m"
    }
#line 629 "mdbcomp.goal_path.m"
}

#line 604 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(
#line 604 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 604 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2,
#line 604 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_3)
#line 604 "mdbcomp.goal_path.m"
{
#line 609 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 609 "mdbcomp.goal_path.m"
    {
#line 609 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 609 "mdbcomp.goal_path.m"
      {
#line 609 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 609 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 609 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_3 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2;
#line 609 "mdbcomp.goal_path.m"
        else
#line 610 "mdbcomp.goal_path.m"
          {
#line 610 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 610 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 610 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 0)));
#line 610 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__ContainingGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 1)));
#line 610 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalReversePath_12;
#line 610 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_18_18;

#line 615 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__ContainingGoal_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 614 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 615 "mdbcomp.goal_path.m"
            else
#line 616 "mdbcomp.goal_path.m"
              {
#line 616 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 0)));
#line 616 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__Step_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 1)));
#line 616 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalReversePath_15;
#line 617 "mdbcomp.goal_path.m"
                MR_Box mdbcomp__goal_path__conv0_ContainingGoalReversePath_15;

#line 617 "mdbcomp.goal_path.m"
                {
#line 617 "mdbcomp.goal_path.m"
                  mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2, ((MR_Box) (mdbcomp__goal_path__ContainingGoalId_13)), &mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
                }
#line 617 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__ContainingGoalReversePath_15 = ((MR_Word) mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
#line 619 "mdbcomp.goal_path.m"
                {
#line 619 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 619 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 0) = ((MR_Box) (mdbcomp__goal_path__ContainingGoalReversePath_15));
#line 619 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 1) = ((MR_Box) (mdbcomp__goal_path__Step_14));
#line 619 "mdbcomp.goal_path.m"
                }
#line 616 "mdbcomp.goal_path.m"
              }
#line 621 "mdbcomp.goal_path.m"
            {
#line 621 "mdbcomp.goal_path.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, ((MR_Box) (mdbcomp__goal_path__GoalId_10)), ((MR_Box) (mdbcomp__goal_path__GoalReversePath_12)), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2, &mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_18_18);
            }
#line 622 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 622 "mdbcomp.goal_path.m"
            {
#line 622 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__Tail_8;
#line 622 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_18_18;

#line 622 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0__tmp_copy_2;
#line 622 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 622 "mdbcomp.goal_path.m"
            }
#line 622 "mdbcomp.goal_path.m"
            continue;
#line 610 "mdbcomp.goal_path.m"
          }
#line 609 "mdbcomp.goal_path.m"
      }
#line 609 "mdbcomp.goal_path.m"
      break;
#line 609 "mdbcomp.goal_path.m"
    }
#line 604 "mdbcomp.goal_path.m"
}

#line 591 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(
#line 591 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 591 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2,
#line 591 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_3)
#line 591 "mdbcomp.goal_path.m"
{
#line 594 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 594 "mdbcomp.goal_path.m"
    {
#line 594 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 594 "mdbcomp.goal_path.m"
      {
#line 594 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 594 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 594 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_3 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2;
#line 594 "mdbcomp.goal_path.m"
        else
#line 595 "mdbcomp.goal_path.m"
          {
#line 595 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__FirstStep_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 595 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__LaterSteps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 595 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12;

#line 596 "mdbcomp.goal_path.m"
            {
#line 596 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 596 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12, 0) = ((MR_Box) (mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2));
#line 596 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12, 1) = ((MR_Box) (mdbcomp__goal_path__FirstStep_7));
#line 596 "mdbcomp.goal_path.m"
            }
#line 597 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 597 "mdbcomp.goal_path.m"
            {
#line 597 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__LaterSteps_8;
#line 597 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12;

#line 597 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0__tmp_copy_2;
#line 597 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 597 "mdbcomp.goal_path.m"
            }
#line 597 "mdbcomp.goal_path.m"
            continue;
#line 595 "mdbcomp.goal_path.m"
          }
#line 594 "mdbcomp.goal_path.m"
      }
#line 594 "mdbcomp.goal_path.m"
      break;
#line 594 "mdbcomp.goal_path.m"
    }
#line 591 "mdbcomp.goal_path.m"
}

#line 580 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(
#line 580 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 580 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2,
#line 580 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_3)
#line 580 "mdbcomp.goal_path.m"
{
#line 583 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 583 "mdbcomp.goal_path.m"
    {
#line 583 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 583 "mdbcomp.goal_path.m"
      {
#line 583 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 583 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 583 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_3 = mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2;
#line 583 "mdbcomp.goal_path.m"
        else
#line 584 "mdbcomp.goal_path.m"
          {
#line 584 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__EarlierSteps_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 584 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__LastStep_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 584 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12;

#line 585 "mdbcomp.goal_path.m"
            {
#line 585 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 585 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12, 0) = ((MR_Box) (mdbcomp__goal_path__LastStep_8));
#line 585 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12, 1) = ((MR_Box) (mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2));
#line 585 "mdbcomp.goal_path.m"
            }
#line 586 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 586 "mdbcomp.goal_path.m"
            {
#line 586 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__EarlierSteps_7;
#line 586 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12;

#line 586 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0__tmp_copy_2;
#line 586 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 586 "mdbcomp.goal_path.m"
            }
#line 586 "mdbcomp.goal_path.m"
            continue;
#line 584 "mdbcomp.goal_path.m"
          }
#line 583 "mdbcomp.goal_path.m"
      }
#line 583 "mdbcomp.goal_path.m"
      break;
#line 583 "mdbcomp.goal_path.m"
    }
#line 580 "mdbcomp.goal_path.m"
}

#line 492 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(
#line 492 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1)
#line 492 "mdbcomp.goal_path.m"
{
#line 494 "mdbcomp.goal_path.m"
  {
#line 494 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 494 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__2_2;

#line 494 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 494 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 494 "mdbcomp.goal_path.m"
    else
#line 495 "mdbcomp.goal_path.m"
      {
#line 495 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 495 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Step_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 495 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_5;
#line 495 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_6;

#line 501 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__Step_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 515 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__Str_5 = (MR_String) "a;";
#line 501 "mdbcomp.goal_path.m"
        else
#line 501 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__Step_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__Str_5 = (MR_String) "\?;";
#line 501 "mdbcomp.goal_path.m"
          else
#line 501 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__Step_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 509 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__Str_5 = (MR_String) "e;";
#line 501 "mdbcomp.goal_path.m"
            else
#line 501 "mdbcomp.goal_path.m"
              if ((mdbcomp__goal_path__Step_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 508 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "t;";
#line 501 "mdbcomp.goal_path.m"
              else
#line 501 "mdbcomp.goal_path.m"
                if ((mdbcomp__goal_path__Step_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 514 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__Str_5 = (MR_String) "=;";
#line 501 "mdbcomp.goal_path.m"
                else
#line 501 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__Step_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 510 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__Str_5 = (MR_String) "~;";
#line 501 "mdbcomp.goal_path.m"
                  else
#line 501 "mdbcomp.goal_path.m"
                    if ((mdbcomp__goal_path__Step_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 513 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__Str_5 = (MR_String) "r;";
#line 501 "mdbcomp.goal_path.m"
                    else
#line 501 "mdbcomp.goal_path.m"
                      if (((MR_tag((MR_Word) mdbcomp__goal_path__Step_4)) == (MR_mktag((MR_Integer) 1))))
#line 501 "mdbcomp.goal_path.m"
                        {
#line 501 "mdbcomp.goal_path.m"
                          MR_Integer mdbcomp__goal_path__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__Step_4, (MR_Integer) 0)));
#line 501 "mdbcomp.goal_path.m"
                          MR_String mdbcomp__goal_path__V_9_9;
#line 501 "mdbcomp.goal_path.m"
                          MR_String mdbcomp__goal_path__V_10_10;

#line 501 "mdbcomp.goal_path.m"
                          {
#line 501 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__V_10_10 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_7);
                          }
#line 501 "mdbcomp.goal_path.m"
                          {
#line 501 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__V_9_9 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_10_10, (MR_String) ";");
                          }
#line 501 "mdbcomp.goal_path.m"
                          {
#line 501 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "c", mdbcomp__goal_path__V_9_9);
                          }
#line 501 "mdbcomp.goal_path.m"
                        }
#line 501 "mdbcomp.goal_path.m"
                      else
#line 501 "mdbcomp.goal_path.m"
                        if (((MR_tag((MR_Word) mdbcomp__goal_path__Step_4)) == (MR_mktag((MR_Integer) 2))))
#line 502 "mdbcomp.goal_path.m"
                          {
#line 502 "mdbcomp.goal_path.m"
                            MR_Integer mdbcomp__goal_path__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__Step_4, (MR_Integer) 0)));
#line 502 "mdbcomp.goal_path.m"
                            MR_String mdbcomp__goal_path__V_14_14;
#line 502 "mdbcomp.goal_path.m"
                            MR_String mdbcomp__goal_path__V_15_15;

#line 502 "mdbcomp.goal_path.m"
                            {
#line 502 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__V_15_15 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_12);
                            }
#line 502 "mdbcomp.goal_path.m"
                            {
#line 502 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__V_14_14 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_15_15, (MR_String) ";");
                            }
#line 502 "mdbcomp.goal_path.m"
                            {
#line 502 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "d", mdbcomp__goal_path__V_14_14);
                            }
#line 502 "mdbcomp.goal_path.m"
                          }
#line 501 "mdbcomp.goal_path.m"
                        else
#line 501 "mdbcomp.goal_path.m"
                          if (((((MR_tag((MR_Word) mdbcomp__goal_path__Step_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 516 "mdbcomp.goal_path.m"
                            {
#line 516 "mdbcomp.goal_path.m"
                              MR_Integer mdbcomp__goal_path__N_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 1)));
#line 516 "mdbcomp.goal_path.m"
                              MR_String mdbcomp__goal_path__V_38_38;
#line 516 "mdbcomp.goal_path.m"
                              MR_String mdbcomp__goal_path__V_39_39;

#line 517 "mdbcomp.goal_path.m"
                              {
#line 517 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__V_39_39 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_36);
                              }
#line 517 "mdbcomp.goal_path.m"
                              {
#line 517 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__V_38_38 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_39_39, (MR_String) ";");
                              }
#line 517 "mdbcomp.goal_path.m"
                              {
#line 517 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "o", mdbcomp__goal_path__V_38_38);
                              }
#line 516 "mdbcomp.goal_path.m"
                            }
#line 501 "mdbcomp.goal_path.m"
                          else
#line 501 "mdbcomp.goal_path.m"
                            if (((((MR_tag((MR_Word) mdbcomp__goal_path__Step_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 501 "mdbcomp.goal_path.m"
                              {
#line 501 "mdbcomp.goal_path.m"
                                MR_Word mdbcomp__goal_path__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 1)));

#line 501 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__V_41_41 == (MR_Integer) 0))
#line 511 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__Str_5 = (MR_String) "q!;";
#line 501 "mdbcomp.goal_path.m"
                                else
#line 512 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__Str_5 = (MR_String) "q;";
#line 501 "mdbcomp.goal_path.m"
                              }
#line 501 "mdbcomp.goal_path.m"
                            else
#line 501 "mdbcomp.goal_path.m"
                              {
#line 501 "mdbcomp.goal_path.m"
                                MR_Word mdbcomp__goal_path__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 2)));
#line 501 "mdbcomp.goal_path.m"
                                MR_Integer mdbcomp__goal_path__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 1)));

#line 501 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "mdbcomp.goal_path.m"
                                  {
#line 505 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_31_31;
#line 505 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_32_32;

#line 506 "mdbcomp.goal_path.m"
                                    {
#line 506 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_32_32 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                                    }
#line 506 "mdbcomp.goal_path.m"
                                    {
#line 506 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_31_31 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_32_32, (MR_String) "-na;");
                                    }
#line 506 "mdbcomp.goal_path.m"
                                    {
#line 506 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_31_31);
                                    }
#line 505 "mdbcomp.goal_path.m"
                                  }
#line 501 "mdbcomp.goal_path.m"
                                else
#line 503 "mdbcomp.goal_path.m"
                                  {
#line 503 "mdbcomp.goal_path.m"
                                    MR_Integer mdbcomp__goal_path__M_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_42_42, (MR_Integer) 0)));
#line 503 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_21_21;
#line 503 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_22_22;
#line 503 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_23_23;
#line 503 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_25_25;
#line 503 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_26_26;

#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_22_22 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                                    }
#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_26_26 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__M_18);
                                    }
#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_26_26, (MR_String) ";");
                                    }
#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "-", mdbcomp__goal_path__V_25_25);
                                    }
#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_21_21 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_22_22, mdbcomp__goal_path__V_23_23);
                                    }
#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_21_21);
                                    }
#line 503 "mdbcomp.goal_path.m"
                                  }
#line 501 "mdbcomp.goal_path.m"
                              }
#line 497 "mdbcomp.goal_path.m"
        {
#line 497 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__Strs_6 = mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(mdbcomp__goal_path__Steps_3);
        }
#line 495 "mdbcomp.goal_path.m"
        {
#line 495 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 495 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, 0) = ((MR_Box) (mdbcomp__goal_path__Str_5));
#line 495 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, 1) = ((MR_Box) (mdbcomp__goal_path__Strs_6));
#line 495 "mdbcomp.goal_path.m"
        }
#line 495 "mdbcomp.goal_path.m"
      }
#line 494 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__2_2;
#line 494 "mdbcomp.goal_path.m"
  }
#line 492 "mdbcomp.goal_path.m"
}

#line 480 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__goal_path_to_strings_1_f_0(
#line 480 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1)
#line 480 "mdbcomp.goal_path.m"
{
#line 482 "mdbcomp.goal_path.m"
  {
#line 482 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 482 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__2_2;

#line 482 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 482 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 482 "mdbcomp.goal_path.m"
    else
#line 483 "mdbcomp.goal_path.m"
      {
#line 483 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Step_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 483 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 483 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_5;
#line 483 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_6;

#line 501 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__Step_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 515 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__Str_5 = (MR_String) "a;";
#line 501 "mdbcomp.goal_path.m"
        else
#line 501 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__Step_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 507 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__Str_5 = (MR_String) "\?;";
#line 501 "mdbcomp.goal_path.m"
          else
#line 501 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__Step_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 509 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__Str_5 = (MR_String) "e;";
#line 501 "mdbcomp.goal_path.m"
            else
#line 501 "mdbcomp.goal_path.m"
              if ((mdbcomp__goal_path__Step_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 508 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "t;";
#line 501 "mdbcomp.goal_path.m"
              else
#line 501 "mdbcomp.goal_path.m"
                if ((mdbcomp__goal_path__Step_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 514 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__Str_5 = (MR_String) "=;";
#line 501 "mdbcomp.goal_path.m"
                else
#line 501 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__Step_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 510 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__Str_5 = (MR_String) "~;";
#line 501 "mdbcomp.goal_path.m"
                  else
#line 501 "mdbcomp.goal_path.m"
                    if ((mdbcomp__goal_path__Step_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 513 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__Str_5 = (MR_String) "r;";
#line 501 "mdbcomp.goal_path.m"
                    else
#line 501 "mdbcomp.goal_path.m"
                      if (((MR_tag((MR_Word) mdbcomp__goal_path__Step_3)) == (MR_mktag((MR_Integer) 1))))
#line 501 "mdbcomp.goal_path.m"
                        {
#line 501 "mdbcomp.goal_path.m"
                          MR_Integer mdbcomp__goal_path__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__Step_3, (MR_Integer) 0)));
#line 501 "mdbcomp.goal_path.m"
                          MR_String mdbcomp__goal_path__V_9_9;
#line 501 "mdbcomp.goal_path.m"
                          MR_String mdbcomp__goal_path__V_10_10;

#line 501 "mdbcomp.goal_path.m"
                          {
#line 501 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__V_10_10 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_7);
                          }
#line 501 "mdbcomp.goal_path.m"
                          {
#line 501 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__V_9_9 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_10_10, (MR_String) ";");
                          }
#line 501 "mdbcomp.goal_path.m"
                          {
#line 501 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "c", mdbcomp__goal_path__V_9_9);
                          }
#line 501 "mdbcomp.goal_path.m"
                        }
#line 501 "mdbcomp.goal_path.m"
                      else
#line 501 "mdbcomp.goal_path.m"
                        if (((MR_tag((MR_Word) mdbcomp__goal_path__Step_3)) == (MR_mktag((MR_Integer) 2))))
#line 502 "mdbcomp.goal_path.m"
                          {
#line 502 "mdbcomp.goal_path.m"
                            MR_Integer mdbcomp__goal_path__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__Step_3, (MR_Integer) 0)));
#line 502 "mdbcomp.goal_path.m"
                            MR_String mdbcomp__goal_path__V_14_14;
#line 502 "mdbcomp.goal_path.m"
                            MR_String mdbcomp__goal_path__V_15_15;

#line 502 "mdbcomp.goal_path.m"
                            {
#line 502 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__V_15_15 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_12);
                            }
#line 502 "mdbcomp.goal_path.m"
                            {
#line 502 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__V_14_14 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_15_15, (MR_String) ";");
                            }
#line 502 "mdbcomp.goal_path.m"
                            {
#line 502 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "d", mdbcomp__goal_path__V_14_14);
                            }
#line 502 "mdbcomp.goal_path.m"
                          }
#line 501 "mdbcomp.goal_path.m"
                        else
#line 501 "mdbcomp.goal_path.m"
                          if (((((MR_tag((MR_Word) mdbcomp__goal_path__Step_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 516 "mdbcomp.goal_path.m"
                            {
#line 516 "mdbcomp.goal_path.m"
                              MR_Integer mdbcomp__goal_path__N_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 1)));
#line 516 "mdbcomp.goal_path.m"
                              MR_String mdbcomp__goal_path__V_38_38;
#line 516 "mdbcomp.goal_path.m"
                              MR_String mdbcomp__goal_path__V_39_39;

#line 517 "mdbcomp.goal_path.m"
                              {
#line 517 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__V_39_39 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_36);
                              }
#line 517 "mdbcomp.goal_path.m"
                              {
#line 517 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__V_38_38 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_39_39, (MR_String) ";");
                              }
#line 517 "mdbcomp.goal_path.m"
                              {
#line 517 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "o", mdbcomp__goal_path__V_38_38);
                              }
#line 516 "mdbcomp.goal_path.m"
                            }
#line 501 "mdbcomp.goal_path.m"
                          else
#line 501 "mdbcomp.goal_path.m"
                            if (((((MR_tag((MR_Word) mdbcomp__goal_path__Step_3)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 501 "mdbcomp.goal_path.m"
                              {
#line 501 "mdbcomp.goal_path.m"
                                MR_Word mdbcomp__goal_path__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 1)));

#line 501 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__V_41_41 == (MR_Integer) 0))
#line 511 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__Str_5 = (MR_String) "q!;";
#line 501 "mdbcomp.goal_path.m"
                                else
#line 512 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__Str_5 = (MR_String) "q;";
#line 501 "mdbcomp.goal_path.m"
                              }
#line 501 "mdbcomp.goal_path.m"
                            else
#line 501 "mdbcomp.goal_path.m"
                              {
#line 501 "mdbcomp.goal_path.m"
                                MR_Word mdbcomp__goal_path__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 2)));
#line 501 "mdbcomp.goal_path.m"
                                MR_Integer mdbcomp__goal_path__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 1)));

#line 501 "mdbcomp.goal_path.m"
                                if ((mdbcomp__goal_path__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 505 "mdbcomp.goal_path.m"
                                  {
#line 505 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_31_31;
#line 505 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_32_32;

#line 506 "mdbcomp.goal_path.m"
                                    {
#line 506 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_32_32 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                                    }
#line 506 "mdbcomp.goal_path.m"
                                    {
#line 506 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_31_31 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_32_32, (MR_String) "-na;");
                                    }
#line 506 "mdbcomp.goal_path.m"
                                    {
#line 506 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_31_31);
                                    }
#line 505 "mdbcomp.goal_path.m"
                                  }
#line 501 "mdbcomp.goal_path.m"
                                else
#line 503 "mdbcomp.goal_path.m"
                                  {
#line 503 "mdbcomp.goal_path.m"
                                    MR_Integer mdbcomp__goal_path__M_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_42_42, (MR_Integer) 0)));
#line 503 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_21_21;
#line 503 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_22_22;
#line 503 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_23_23;
#line 503 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_25_25;
#line 503 "mdbcomp.goal_path.m"
                                    MR_String mdbcomp__goal_path__V_26_26;

#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_22_22 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                                    }
#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_26_26 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__M_18);
                                    }
#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_26_26, (MR_String) ";");
                                    }
#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "-", mdbcomp__goal_path__V_25_25);
                                    }
#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_21_21 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_22_22, mdbcomp__goal_path__V_23_23);
                                    }
#line 504 "mdbcomp.goal_path.m"
                                    {
#line 504 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_21_21);
                                    }
#line 503 "mdbcomp.goal_path.m"
                                  }
#line 501 "mdbcomp.goal_path.m"
                              }
#line 485 "mdbcomp.goal_path.m"
        {
#line 485 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__Strs_6 = mdbcomp__goal_path__goal_path_to_strings_1_f_0(mdbcomp__goal_path__Steps_4);
        }
#line 483 "mdbcomp.goal_path.m"
        {
#line 483 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, 0) = ((MR_Box) (mdbcomp__goal_path__Str_5));
#line 483 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, 1) = ((MR_Box) (mdbcomp__goal_path__Strs_6));
#line 483 "mdbcomp.goal_path.m"
        }
#line 483 "mdbcomp.goal_path.m"
      }
#line 482 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__2_2;
#line 482 "mdbcomp.goal_path.m"
  }
#line 480 "mdbcomp.goal_path.m"
}

#line 426 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(
#line 426 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 426 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2)
#line 426 "mdbcomp.goal_path.m"
{
#line 429 "mdbcomp.goal_path.m"
  {
#line 429 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 429 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 429 "mdbcomp.goal_path.m"
      {
#line 429 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 429 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 429 "mdbcomp.goal_path.m"
      }
#line 429 "mdbcomp.goal_path.m"
    else
#line 430 "mdbcomp.goal_path.m"
      {
#line 430 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 430 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 430 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__HeadSteps_5;
#line 430 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TailStep_6;

#line 431 "mdbcomp.goal_path.m"
        {
#line 431 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(mdbcomp__goal_path__Strs_4, &mdbcomp__goal_path__HeadSteps_5);
        }
#line 430 "mdbcomp.goal_path.m"
        if (mdbcomp__goal_path__succeeded)
#line 430 "mdbcomp.goal_path.m"
          {
#line 432 "mdbcomp.goal_path.m"
            {
#line 432 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_step_from_string_2_p_0(mdbcomp__goal_path__Str_3, &mdbcomp__goal_path__TailStep_6);
            }
#line 430 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 430 "mdbcomp.goal_path.m"
              {
#line 430 "mdbcomp.goal_path.m"
                {
#line 430 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 430 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 430 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__HeadVar__2_2 = base;
#line 430 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__HeadSteps_5));
#line 430 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__TailStep_6));
#line 430 "mdbcomp.goal_path.m"
                }
#line 430 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 430 "mdbcomp.goal_path.m"
              }
#line 430 "mdbcomp.goal_path.m"
          }
#line 430 "mdbcomp.goal_path.m"
      }
#line 429 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 429 "mdbcomp.goal_path.m"
  }
#line 426 "mdbcomp.goal_path.m"
}

#line 406 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_strings_2_p_0(
#line 406 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 406 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2)
#line 406 "mdbcomp.goal_path.m"
{
#line 409 "mdbcomp.goal_path.m"
  {
#line 409 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 409 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 409 "mdbcomp.goal_path.m"
      {
#line 409 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 409 "mdbcomp.goal_path.m"
      }
#line 409 "mdbcomp.goal_path.m"
    else
#line 410 "mdbcomp.goal_path.m"
      {
#line 410 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 410 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 410 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__HeadStep_5;
#line 410 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__LaterSteps_6;

#line 411 "mdbcomp.goal_path.m"
        {
#line 411 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_step_from_string_2_p_0(mdbcomp__goal_path__Str_3, &mdbcomp__goal_path__HeadStep_5);
        }
#line 410 "mdbcomp.goal_path.m"
        if (mdbcomp__goal_path__succeeded)
#line 410 "mdbcomp.goal_path.m"
          {
#line 412 "mdbcomp.goal_path.m"
            {
#line 412 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(mdbcomp__goal_path__Strs_4, &mdbcomp__goal_path__LaterSteps_6);
            }
#line 410 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 410 "mdbcomp.goal_path.m"
              {
#line 410 "mdbcomp.goal_path.m"
                {
#line 410 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 410 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 410 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__HeadVar__2_2 = base;
#line 410 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__HeadStep_5));
#line 410 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__LaterSteps_6));
#line 410 "mdbcomp.goal_path.m"
                }
#line 410 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 410 "mdbcomp.goal_path.m"
              }
#line 410 "mdbcomp.goal_path.m"
          }
#line 410 "mdbcomp.goal_path.m"
      }
#line 409 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 409 "mdbcomp.goal_path.m"
  }
#line 406 "mdbcomp.goal_path.m"
}

#line 364 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_last_loop_3_p_0(
#line 364 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 364 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 364 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3)
#line 364 "mdbcomp.goal_path.m"
{
#line 367 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 367 "mdbcomp.goal_path.m"
    {
#line 367 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 367 "mdbcomp.goal_path.m"
      {
#line 367 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 367 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 367 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__3_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 367 "mdbcomp.goal_path.m"
        else
#line 368 "mdbcomp.goal_path.m"
          {
#line 368 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__TailHead_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 368 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__TailTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 369 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 369 "mdbcomp.goal_path.m"
            {
#line 369 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__TailHead_6;
#line 369 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__2__tmp_copy_2 = mdbcomp__goal_path__TailTail_7;

#line 369 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__2_2 = mdbcomp__goal_path__HeadVar__2__tmp_copy_2;
#line 369 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 369 "mdbcomp.goal_path.m"
            }
#line 369 "mdbcomp.goal_path.m"
            continue;
#line 368 "mdbcomp.goal_path.m"
          }
#line 367 "mdbcomp.goal_path.m"
      }
#line 367 "mdbcomp.goal_path.m"
      break;
#line 367 "mdbcomp.goal_path.m"
    }
#line 364 "mdbcomp.goal_path.m"
}

#line 351 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(
#line 351 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__Head_1,
#line 351 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 351 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3,
#line 351 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__4_4)
#line 351 "mdbcomp.goal_path.m"
{
#line 354 "mdbcomp.goal_path.m"
  {
#line 354 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 354 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 354 "mdbcomp.goal_path.m"
      {
#line 354 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 354 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__4_4 = mdbcomp__goal_path__Head_1;
#line 354 "mdbcomp.goal_path.m"
      }
#line 354 "mdbcomp.goal_path.m"
    else
#line 356 "mdbcomp.goal_path.m"
      {
#line 356 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TailHead_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 356 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TailTail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 356 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__AllButLastGoalPath0_11;

#line 357 "mdbcomp.goal_path.m"
        {
#line 357 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(mdbcomp__goal_path__TailHead_7, mdbcomp__goal_path__TailTail_8, &mdbcomp__goal_path__AllButLastGoalPath0_11, mdbcomp__goal_path__HeadVar__4_4);
        }
#line 359 "mdbcomp.goal_path.m"
        {
#line 359 "mdbcomp.goal_path.m"
          MR_Word base;
#line 359 "mdbcomp.goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 359 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__3_3 = base;
#line 359 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__Head_1));
#line 359 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__AllButLastGoalPath0_11));
#line 359 "mdbcomp.goal_path.m"
        }
#line 356 "mdbcomp.goal_path.m"
      }
#line 354 "mdbcomp.goal_path.m"
  }
#line 351 "mdbcomp.goal_path.m"
}

#line 318 "mdbcomp.goal_path.m"
MR_Box MR_CALL 
mdbcomp__goal_path__get_goal_attribute_det_2_f_0(
#line 318 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_11,
#line 318 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 318 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 318 "mdbcomp.goal_path.m"
{
#line 661 "mdbcomp.goal_path.m"
  {
#line 661 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 661 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__Attr_6;
#line 661 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_13_13;
#line 661 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__Array_4 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__1_1;
#line 661 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__Index_5 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 661 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__MaybeAttr_7;
#line 662 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__conv0_MaybeAttr_7;

#line 6376 "mdbcomp.goal_path.c"
    {
#line 6378 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6380 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6382 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_13_13, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_11));
#line 6384 "mdbcomp.goal_path.c"
    }
#line 662 "mdbcomp.goal_path.m"
    {
#line 662 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__conv0_MaybeAttr_7 = mercury__array__lookup_2_f_0(mdbcomp__goal_path__TypeInfo_13_13, (MR_ArrayPtr) mdbcomp__goal_path__Array_4, mdbcomp__goal_path__Index_5);
    }
#line 662 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__MaybeAttr_7 = ((MR_Word) mdbcomp__goal_path__conv0_MaybeAttr_7);
#line 665 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__MaybeAttr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 666 "mdbcomp.goal_path.m"
      {
#line 667 "mdbcomp.goal_path.m"
        {
#line 667 "mdbcomp.goal_path.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.goal_path", (MR_String) "function \140mdbcomp.goal_path.get_goal_attribute_det\'/2", (MR_String) "Goal attribute array slot empty");
        }
#line 666 "mdbcomp.goal_path.m"
      }
#line 665 "mdbcomp.goal_path.m"
    else
#line 664 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__Attr_6 = (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__MaybeAttr_7, (MR_Integer) 0));
#line 661 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__Attr_6;
#line 661 "mdbcomp.goal_path.m"
  }
#line 318 "mdbcomp.goal_path.m"
}

#line 311 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__update_goal_attribute_4_p_0(
#line 311 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_12,
#line 311 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 311 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__Value_6,
#line 311 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3,
#line 311 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__4_4)
#line 311 "mdbcomp.goal_path.m"
{
#line 658 "mdbcomp.goal_path.m"
  {
#line 658 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 658 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_14_14;
#line 658 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__Index_5 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 658 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__STATE_VARIABLE_Array_0_8 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__3_3;
#line 658 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__STATE_VARIABLE_Array_9;
#line 658 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_10_10;
#line 659 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__conv0_STATE_VARIABLE_Array_9;

#line 659 "mdbcomp.goal_path.m"
    {
#line 659 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 659 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_10_10, 0) = mdbcomp__goal_path__Value_6;
#line 659 "mdbcomp.goal_path.m"
    }
#line 6455 "mdbcomp.goal_path.c"
    {
#line 6457 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6459 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6461 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_14_14, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_12));
#line 6463 "mdbcomp.goal_path.c"
    }
#line 659 "mdbcomp.goal_path.m"
    {
#line 659 "mdbcomp.goal_path.m"
      mercury__array__set_4_p_0(mdbcomp__goal_path__TypeInfo_14_14, mdbcomp__goal_path__Index_5, ((MR_Box) (mdbcomp__goal_path__V_10_10)), (MR_ArrayPtr) mdbcomp__goal_path__STATE_VARIABLE_Array_0_8, &mdbcomp__goal_path__conv0_STATE_VARIABLE_Array_9);
    }
#line 659 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__STATE_VARIABLE_Array_9 = (MR_ArrayPtr) mdbcomp__goal_path__conv0_STATE_VARIABLE_Array_9;
#line 658 "mdbcomp.goal_path.m"
    *mdbcomp__goal_path__HeadVar__4_4 = (MR_Word) mdbcomp__goal_path__STATE_VARIABLE_Array_9;
#line 658 "mdbcomp.goal_path.m"
  }
#line 311 "mdbcomp.goal_path.m"
}

#line 305 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__create_goal_id_array_2_f_0(
#line 305 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_10,
#line 305 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 305 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__Default_5)
#line 305 "mdbcomp.goal_path.m"
{
#line 654 "mdbcomp.goal_path.m"
  {
#line 654 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 654 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__3_3;
#line 654 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_12_12;
#line 654 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__LastGoalIdNum_4 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 654 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__V_6_6;
#line 654 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__V_7_7;
#line 654 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_9_9;
#line 655 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__conv0_V_6_6;

#line 6509 "mdbcomp.goal_path.c"
    {
#line 6511 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6513 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6515 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_12_12, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_10));
#line 6517 "mdbcomp.goal_path.c"
    }
#line 655 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_7_7 = (mdbcomp__goal_path__LastGoalIdNum_4 + (MR_Integer) 1);
#line 655 "mdbcomp.goal_path.m"
    {
#line 655 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 655 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_9_9, 0) = mdbcomp__goal_path__Default_5;
#line 655 "mdbcomp.goal_path.m"
    }
#line 655 "mdbcomp.goal_path.m"
    {
#line 655 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__conv0_V_6_6 = mercury__array__init_2_f_0(mdbcomp__goal_path__TypeInfo_12_12, mdbcomp__goal_path__V_7_7, ((MR_Box) (mdbcomp__goal_path__V_9_9)));
    }
#line 655 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_6_6 = (MR_ArrayPtr) mdbcomp__goal_path__conv0_V_6_6;
#line 655 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) mdbcomp__goal_path__V_6_6;
#line 654 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__3_3;
#line 654 "mdbcomp.goal_path.m"
  }
#line 305 "mdbcomp.goal_path.m"
}

#line 298 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__create_goal_id_array_1_f_0(
#line 298 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_8,
#line 298 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1)
#line 298 "mdbcomp.goal_path.m"
{
#line 651 "mdbcomp.goal_path.m"
  {
#line 651 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 651 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__2_2;
#line 651 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_10_10;
#line 651 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__LastGoalIdNum_3 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 651 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__V_4_4;
#line 651 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__V_5_5;
#line 652 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__conv0_V_4_4;

#line 6571 "mdbcomp.goal_path.c"
    {
#line 6573 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6575 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6577 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_8));
#line 6579 "mdbcomp.goal_path.c"
    }
#line 652 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_5_5 = (mdbcomp__goal_path__LastGoalIdNum_3 + (MR_Integer) 1);
#line 652 "mdbcomp.goal_path.m"
    {
#line 652 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__conv0_V_4_4 = mercury__array__init_2_f_0(mdbcomp__goal_path__TypeInfo_10_10, mdbcomp__goal_path__V_5_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 652 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_4_4 = (MR_ArrayPtr) mdbcomp__goal_path__conv0_V_4_4;
#line 652 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) mdbcomp__goal_path__V_4_4;
#line 651 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__2_2;
#line 651 "mdbcomp.goal_path.m"
  }
#line 298 "mdbcomp.goal_path.m"
}

#line 276 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_bimap_1_f_0(
#line 276 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalMap_3)
#line 276 "mdbcomp.goal_path.m"
{
#line 624 "mdbcomp.goal_path.m"
  {
#line 624 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 624 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ReverseGoalPathBiMap_4;
#line 624 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeCtorInfo_7_7 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 624 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoalList_5;
#line 624 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_6_6;

#line 625 "mdbcomp.goal_path.m"
    {
#line 625 "mdbcomp.goal_path.m"
      mercury__map__to_assoc_list_2_p_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_3, &mdbcomp__goal_path__ContainingGoalList_5);
    }
#line 627 "mdbcomp.goal_path.m"
    {
#line 627 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_6_6 = mercury__bimap__init_0_f_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
    }
#line 626 "mdbcomp.goal_path.m"
    {
#line 626 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(mdbcomp__goal_path__ContainingGoalList_5, mdbcomp__goal_path__V_6_6, &mdbcomp__goal_path__ReverseGoalPathBiMap_4);
    }
#line 624 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__ReverseGoalPathBiMap_4;
#line 624 "mdbcomp.goal_path.m"
  }
#line 276 "mdbcomp.goal_path.m"
}

#line 270 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_map_1_f_0(
#line 270 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalMap_3)
#line 270 "mdbcomp.goal_path.m"
{
#line 599 "mdbcomp.goal_path.m"
  {
#line 599 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 599 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ReverseGoalPathMap_4;
#line 599 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeCtorInfo_7_7 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 599 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoalList_5;
#line 599 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_6_6;

#line 600 "mdbcomp.goal_path.m"
    {
#line 600 "mdbcomp.goal_path.m"
      mercury__map__to_assoc_list_2_p_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_3, &mdbcomp__goal_path__ContainingGoalList_5);
    }
#line 602 "mdbcomp.goal_path.m"
    {
#line 602 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_6_6 = mercury__map__init_0_f_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
    }
#line 601 "mdbcomp.goal_path.m"
    {
#line 601 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(mdbcomp__goal_path__ContainingGoalList_5, mdbcomp__goal_path__V_6_6, &mdbcomp__goal_path__ReverseGoalPathMap_4);
    }
#line 599 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__ReverseGoalPathMap_4;
#line 599 "mdbcomp.goal_path.m"
  }
#line 270 "mdbcomp.goal_path.m"
}

#line 575 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0_1(
#line 575 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 575 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 575 "mdbcomp.goal_path.m"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2)
#line 575 "mdbcomp.goal_path.m"
{
#line 575 "mdbcomp.goal_path.m"
  {
#line 575 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;
#line 575 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__conv0_ForwardGoalPath_4;

#line 575 "mdbcomp.goal_path.m"
    {
#line 575 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_p_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), &mdbcomp__goal_path__conv0_ForwardGoalPath_4);
    }
#line 575 "mdbcomp.goal_path.m"
    *mdbcomp__goal_path__wrapper_arg_2 = ((MR_Box) (mdbcomp__goal_path__conv0_ForwardGoalPath_4));
#line 575 "mdbcomp.goal_path.m"
  }
#line 575 "mdbcomp.goal_path.m"
}

#line 264 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0(
#line 264 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalMap_3)
#line 264 "mdbcomp.goal_path.m"
{
#line 573 "mdbcomp.goal_path.m"
  {
#line 573 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 573 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ForwardGoalPathMap_4;
#line 573 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeCtorInfo_7_16 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 573 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ReverseGoalPathMap_5;
#line 573 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoalList_14;
#line 573 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_15_15;

#line 600 "mdbcomp.goal_path.m"
    {
#line 600 "mdbcomp.goal_path.m"
      mercury__map__to_assoc_list_2_p_0(mdbcomp__goal_path__TypeCtorInfo_7_16, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_3, &mdbcomp__goal_path__ContainingGoalList_14);
    }
#line 602 "mdbcomp.goal_path.m"
    {
#line 602 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_15_15 = mercury__map__init_0_f_0(mdbcomp__goal_path__TypeCtorInfo_7_16, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
    }
#line 601 "mdbcomp.goal_path.m"
    {
#line 601 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(mdbcomp__goal_path__ContainingGoalList_14, mdbcomp__goal_path__V_15_15, &mdbcomp__goal_path__ReverseGoalPathMap_5);
    }
#line 575 "mdbcomp.goal_path.m"
    {
#line 575 "mdbcomp.goal_path.m"
      mercury__map__map_values_only_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path_scalar_common_1[8], mdbcomp__goal_path__ReverseGoalPathMap_5, &mdbcomp__goal_path__ForwardGoalPathMap_4);
    }
#line 573 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__ForwardGoalPathMap_4;
#line 573 "mdbcomp.goal_path.m"
  }
#line 264 "mdbcomp.goal_path.m"
}

#line 258 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(
#line 258 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalMap_4,
#line 258 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalId_5)
#line 258 "mdbcomp.goal_path.m"
{
#line 562 "mdbcomp.goal_path.m"
  {
#line 562 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 562 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPath_6;
#line 562 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoal_7;
#line 563 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__conv0_ContainingGoal_7;

#line 563 "mdbcomp.goal_path.m"
    {
#line 563 "mdbcomp.goal_path.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_4, ((MR_Box) (mdbcomp__goal_path__GoalId_5)), &mdbcomp__goal_path__conv0_ContainingGoal_7);
    }
#line 563 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__ContainingGoal_7 = ((MR_Word) mdbcomp__goal_path__conv0_ContainingGoal_7);
#line 567 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__ContainingGoal_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 566 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__GoalPath_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 567 "mdbcomp.goal_path.m"
    else
#line 568 "mdbcomp.goal_path.m"
      {
#line 568 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__ParentGoalId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_7, (MR_Integer) 0)));
#line 568 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__LastStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_7, (MR_Integer) 1)));
#line 568 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__EarlierPath_10;

#line 569 "mdbcomp.goal_path.m"
        {
#line 569 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__EarlierPath_10 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(mdbcomp__goal_path__ContainingGoalMap_4, mdbcomp__goal_path__ParentGoalId_8);
        }
#line 570 "mdbcomp.goal_path.m"
        {
#line 570 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__GoalPath_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 570 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 0) = ((MR_Box) (mdbcomp__goal_path__EarlierPath_10));
#line 570 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 1) = ((MR_Box) (mdbcomp__goal_path__LastStep_9));
#line 570 "mdbcomp.goal_path.m"
        }
#line 568 "mdbcomp.goal_path.m"
      }
#line 562 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPath_6;
#line 562 "mdbcomp.goal_path.m"
  }
#line 258 "mdbcomp.goal_path.m"
}

#line 253 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(
#line 253 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalMap_4,
#line 253 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalId_5)
#line 253 "mdbcomp.goal_path.m"
{
#line 558 "mdbcomp.goal_path.m"
  {
#line 558 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 558 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPath_6;
#line 558 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevGoalPath_7;

#line 559 "mdbcomp.goal_path.m"
    {
#line 559 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__RevGoalPath_7 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(mdbcomp__goal_path__ContainingGoalMap_4, mdbcomp__goal_path__GoalId_5);
    }
#line 578 "mdbcomp.goal_path.m"
    {
#line 578 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevGoalPath_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__GoalPath_6);
    }
#line 558 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPath_6;
#line 558 "mdbcomp.goal_path.m"
  }
#line 253 "mdbcomp.goal_path.m"
}

#line 248 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_id_inside_3_p_0(
#line 248 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalId_4,
#line 248 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalIdA_5,
#line 248 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalIdB_6)
#line 248 "mdbcomp.goal_path.m"
{
#line 551 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 551 "mdbcomp.goal_path.m"
    {
#line 551 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 551 "mdbcomp.goal_path.m"
      {
#line 551 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 62 "mdbcomp.goal_path.m"
        {
#line 62 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastX_14 = (MR_Integer) mdbcomp__goal_path__GoalIdB_6;
#line 62 "mdbcomp.goal_path.m"
          MR_Integer mdbcomp__goal_path__CastY_15 = (MR_Integer) mdbcomp__goal_path__GoalIdA_5;

#line 62 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_14 == mdbcomp__goal_path__CastY_15);
#line 62 "mdbcomp.goal_path.m"
          if (mdbcomp__goal_path__succeeded)
#line 62 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = MR_TRUE;
#line 62 "mdbcomp.goal_path.m"
          else
#line 62 "mdbcomp.goal_path.m"
            {
#line 62 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__V_12_12 = (MR_Integer) mdbcomp__goal_path__GoalIdB_6;
#line 62 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__V_13_13 = (MR_Integer) mdbcomp__goal_path__GoalIdA_5;

#line 6907 "mdbcomp.goal_path.c"
              mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_12_12 == mdbcomp__goal_path__V_13_13);
#line 62 "mdbcomp.goal_path.m"
            }
#line 62 "mdbcomp.goal_path.m"
        }
#line 551 "mdbcomp.goal_path.m"
        if (!(mdbcomp__goal_path__succeeded))
#line 553 "mdbcomp.goal_path.m"
          {
#line 553 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalContainingB_7;
#line 553 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__ParentGoalIdB_8;
#line 553 "mdbcomp.goal_path.m"
            MR_Box mdbcomp__goal_path__conv0_GoalContainingB_7;
#line 554 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_9_9;

#line 553 "mdbcomp.goal_path.m"
            {
#line 553 "mdbcomp.goal_path.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalId_4, ((MR_Box) (mdbcomp__goal_path__GoalIdB_6)), &mdbcomp__goal_path__conv0_GoalContainingB_7);
            }
#line 553 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__GoalContainingB_7 = ((MR_Word) mdbcomp__goal_path__conv0_GoalContainingB_7);
#line 554 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__GoalContainingB_7)) == (MR_mktag((MR_Integer) 1)));
#line 554 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 554 "mdbcomp.goal_path.m"
              {
#line 554 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__ParentGoalIdB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalContainingB_7, (MR_Integer) 0)));
#line 554 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalContainingB_7, (MR_Integer) 1)));
#line 555 "mdbcomp.goal_path.m"
                /* direct tailcall eliminated */
#line 555 "mdbcomp.goal_path.m"
                {
#line 555 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__GoalIdB__tmp_copy_6 = mdbcomp__goal_path__ParentGoalIdB_8;

#line 555 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__GoalIdB_6 = mdbcomp__goal_path__GoalIdB__tmp_copy_6;
#line 555 "mdbcomp.goal_path.m"
                }
#line 555 "mdbcomp.goal_path.m"
                continue;
#line 554 "mdbcomp.goal_path.m"
              }
#line 553 "mdbcomp.goal_path.m"
          }
#line 551 "mdbcomp.goal_path.m"
        return mdbcomp__goal_path__succeeded;
#line 551 "mdbcomp.goal_path.m"
      }
#line 551 "mdbcomp.goal_path.m"
      break;
#line 551 "mdbcomp.goal_path.m"
    }
#line 248 "mdbcomp.goal_path.m"
}

#line 222 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(
#line 222 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 222 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2)
#line 222 "mdbcomp.goal_path.m"
{
#line 519 "mdbcomp.goal_path.m"
  {
#line 519 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 519 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 519 "mdbcomp.goal_path.m"
      *mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 519 "mdbcomp.goal_path.m"
    else
#line 521 "mdbcomp.goal_path.m"
      {
#line 521 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 521 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Step0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 521 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps_5;
#line 521 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Step_6;

#line 530 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__Step0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6)))))
#line 539 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 530 "mdbcomp.goal_path.m"
        else
#line 530 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__Step0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 532 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 530 "mdbcomp.goal_path.m"
          else
#line 530 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__Step0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2)))))
#line 534 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 530 "mdbcomp.goal_path.m"
            else
#line 530 "mdbcomp.goal_path.m"
              if ((mdbcomp__goal_path__Step0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1)))))
#line 533 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 530 "mdbcomp.goal_path.m"
              else
#line 530 "mdbcomp.goal_path.m"
                if ((mdbcomp__goal_path__Step0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4)))))
#line 537 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 530 "mdbcomp.goal_path.m"
                else
#line 530 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__Step0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3)))))
#line 535 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 530 "mdbcomp.goal_path.m"
                  else
#line 530 "mdbcomp.goal_path.m"
                    if ((mdbcomp__goal_path__Step0_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5)))))
#line 538 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 530 "mdbcomp.goal_path.m"
                    else
#line 530 "mdbcomp.goal_path.m"
                      if (((MR_tag((MR_Word) mdbcomp__goal_path__Step0_4)) == (MR_mktag((MR_Integer) 1))))
#line 530 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 530 "mdbcomp.goal_path.m"
                      else
#line 530 "mdbcomp.goal_path.m"
                        if (((MR_tag((MR_Word) mdbcomp__goal_path__Step0_4)) == (MR_mktag((MR_Integer) 2))))
#line 531 "mdbcomp.goal_path.m"
                          mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 530 "mdbcomp.goal_path.m"
                        else
#line 530 "mdbcomp.goal_path.m"
                          if (((((MR_tag((MR_Word) mdbcomp__goal_path__Step0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step0_4, (MR_Integer) 0)))) == (MR_Integer) 2))))
#line 540 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 530 "mdbcomp.goal_path.m"
                          else
#line 530 "mdbcomp.goal_path.m"
                            if (((((MR_tag((MR_Word) mdbcomp__goal_path__Step0_4)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step0_4, (MR_Integer) 0)))) == (MR_Integer) 1))))
#line 536 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 530 "mdbcomp.goal_path.m"
                            else
#line 543 "mdbcomp.goal_path.m"
                              {
#line 543 "mdbcomp.goal_path.m"
                                MR_Integer mdbcomp__goal_path__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step0_4, (MR_Integer) 1)));
#line 543 "mdbcomp.goal_path.m"
                                MR_Word mdbcomp__goal_path__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step0_4, (MR_Integer) 2)));

#line 544 "mdbcomp.goal_path.m"
                                {
#line 544 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__Step_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 544 "mdbcomp.goal_path.m"
                                  MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 544 "mdbcomp.goal_path.m"
                                  MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_6, 1) = ((MR_Box) (mdbcomp__goal_path__N_14));
#line 544 "mdbcomp.goal_path.m"
                                  MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_6, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 544 "mdbcomp.goal_path.m"
                                }
#line 543 "mdbcomp.goal_path.m"
                              }
#line 523 "mdbcomp.goal_path.m"
        {
#line 523 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(mdbcomp__goal_path__Steps0_3, &mdbcomp__goal_path__Steps_5);
        }
#line 521 "mdbcomp.goal_path.m"
        {
#line 521 "mdbcomp.goal_path.m"
          MR_Word base;
#line 521 "mdbcomp.goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 521 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__2_2 = base;
#line 521 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__Steps_5));
#line 521 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__Step_6));
#line 521 "mdbcomp.goal_path.m"
        }
#line 521 "mdbcomp.goal_path.m"
      }
#line 519 "mdbcomp.goal_path.m"
  }
#line 222 "mdbcomp.goal_path.m"
}

#line 213 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_inside_relative_3_p_0(
#line 213 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__RevPathA_4,
#line 213 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__RevPathB_5,
#line 213 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__RevRelativePath_6)
#line 213 "mdbcomp.goal_path.m"
{
#line 387 "mdbcomp.goal_path.m"
  {
#line 387 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 387 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathA_7;
#line 387 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathB_8;
#line 387 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RelativePath_9;
#line 387 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_18_18;

#line 578 "mdbcomp.goal_path.m"
    {
#line 578 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathA_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathA_7);
    }
#line 578 "mdbcomp.goal_path.m"
    {
#line 578 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathB_8);
    }
#line 393 "mdbcomp.goal_path.m"
    {
#line 393 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(mdbcomp__goal_path__PathA_7, mdbcomp__goal_path__PathB_8, &mdbcomp__goal_path__RelativePath_9);
    }
#line 387 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 387 "mdbcomp.goal_path.m"
      {
#line 589 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 589 "mdbcomp.goal_path.m"
        {
#line 589 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(mdbcomp__goal_path__RelativePath_9, mdbcomp__goal_path__V_18_18, mdbcomp__goal_path__RevRelativePath_6);
        }
#line 589 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 387 "mdbcomp.goal_path.m"
      }
#line 387 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 387 "mdbcomp.goal_path.m"
  }
#line 213 "mdbcomp.goal_path.m"
}

#line 211 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_inside_relative_3_p_0(
#line 211 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 211 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 211 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3)
#line 211 "mdbcomp.goal_path.m"
{
#line 381 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 381 "mdbcomp.goal_path.m"
    {
#line 381 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 381 "mdbcomp.goal_path.m"
      {
#line 381 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 381 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 381 "mdbcomp.goal_path.m"
          {
#line 381 "mdbcomp.goal_path.m"
            *mdbcomp__goal_path__HeadVar__3_3 = mdbcomp__goal_path__HeadVar__2_2;
#line 381 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = MR_TRUE;
#line 381 "mdbcomp.goal_path.m"
          }
#line 381 "mdbcomp.goal_path.m"
        else
#line 383 "mdbcomp.goal_path.m"
          {
#line 383 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__StepA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 383 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__PathA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 383 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__StepB_7;
#line 383 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__PathB_8;

#line 382 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 382 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 382 "mdbcomp.goal_path.m"
              {
#line 382 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__StepB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 382 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__PathB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 384 "mdbcomp.goal_path.m"
                {
#line 384 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__StepA_5, mdbcomp__goal_path__StepB_7);
                }
#line 383 "mdbcomp.goal_path.m"
                if (mdbcomp__goal_path__succeeded)
#line 385 "mdbcomp.goal_path.m"
                  {
#line 385 "mdbcomp.goal_path.m"
                    /* direct tailcall eliminated */
#line 385 "mdbcomp.goal_path.m"
                    {
#line 385 "mdbcomp.goal_path.m"
                      MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__PathA_6;
#line 385 "mdbcomp.goal_path.m"
                      MR_Word mdbcomp__goal_path__HeadVar__2__tmp_copy_2 = mdbcomp__goal_path__PathB_8;

#line 385 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__HeadVar__2_2 = mdbcomp__goal_path__HeadVar__2__tmp_copy_2;
#line 385 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 385 "mdbcomp.goal_path.m"
                    }
#line 385 "mdbcomp.goal_path.m"
                    continue;
#line 385 "mdbcomp.goal_path.m"
                  }
#line 382 "mdbcomp.goal_path.m"
              }
#line 383 "mdbcomp.goal_path.m"
          }
#line 381 "mdbcomp.goal_path.m"
        return mdbcomp__goal_path__succeeded;
#line 381 "mdbcomp.goal_path.m"
      }
#line 381 "mdbcomp.goal_path.m"
      break;
#line 381 "mdbcomp.goal_path.m"
    }
#line 211 "mdbcomp.goal_path.m"
}

#line 203 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_inside_2_p_0(
#line 203 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__RevPathA_3,
#line 203 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__RevPathB_4)
#line 203 "mdbcomp.goal_path.m"
{
#line 387 "mdbcomp.goal_path.m"
  {
#line 387 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 387 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathA_9;
#line 387 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathB_10;
#line 387 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RelativePath_11;
#line 387 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_20_20;
#line 589 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_5_5;

#line 578 "mdbcomp.goal_path.m"
    {
#line 578 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathA_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathA_9);
    }
#line 578 "mdbcomp.goal_path.m"
    {
#line 578 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathB_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathB_10);
    }
#line 393 "mdbcomp.goal_path.m"
    {
#line 393 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(mdbcomp__goal_path__PathA_9, mdbcomp__goal_path__PathB_10, &mdbcomp__goal_path__RelativePath_11);
    }
#line 387 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 387 "mdbcomp.goal_path.m"
      {
#line 589 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 589 "mdbcomp.goal_path.m"
        {
#line 589 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(mdbcomp__goal_path__RelativePath_11, mdbcomp__goal_path__V_20_20, &mdbcomp__goal_path__V_5_5);
        }
#line 589 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 387 "mdbcomp.goal_path.m"
      }
#line 387 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 387 "mdbcomp.goal_path.m"
  }
#line 203 "mdbcomp.goal_path.m"
}

#line 201 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_inside_2_p_0(
#line 201 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__PathA_3,
#line 201 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__PathB_4)
#line 201 "mdbcomp.goal_path.m"
{
#line 397 "mdbcomp.goal_path.m"
  {
#line 397 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 397 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_5_5;

#line 397 "mdbcomp.goal_path.m"
    {
#line 397 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(mdbcomp__goal_path__PathA_3, mdbcomp__goal_path__PathB_4, &mdbcomp__goal_path__V_5_5);
    }
#line 397 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 397 "mdbcomp.goal_path.m"
  }
#line 201 "mdbcomp.goal_path.m"
}

#line 194 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__fgp_to_rgp_2_p_0(
#line 194 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ForwardGoalPath_3,
#line 194 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__ReverseGoalPath_4)
#line 194 "mdbcomp.goal_path.m"
{
#line 588 "mdbcomp.goal_path.m"
  {
#line 588 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 589 "mdbcomp.goal_path.m"
    {
#line 589 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(mdbcomp__goal_path__ForwardGoalPath_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdbcomp__goal_path__ReverseGoalPath_4);
#line 589 "mdbcomp.goal_path.m"
      return;
    }
#line 588 "mdbcomp.goal_path.m"
  }
#line 194 "mdbcomp.goal_path.m"
}

#line 193 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__rgp_to_fgp_2_p_0(
#line 193 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ReverseGoalPath_3,
#line 193 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__ForwardGoalPath_4)
#line 193 "mdbcomp.goal_path.m"
{
#line 577 "mdbcomp.goal_path.m"
  {
#line 577 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 578 "mdbcomp.goal_path.m"
    {
#line 578 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__ReverseGoalPath_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdbcomp__goal_path__ForwardGoalPath_4);
#line 578 "mdbcomp.goal_path.m"
      return;
    }
#line 577 "mdbcomp.goal_path.m"
  }
#line 193 "mdbcomp.goal_path.m"
}

#line 189 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__is_goal_path_separator_1_p_0(
#line 189 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__1_1)
#line 189 "mdbcomp.goal_path.m"
{
#line 474 "mdbcomp.goal_path.m"
  {
#line 474 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__HeadVar__1_1 == (MR_Char) 59);

#line 474 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 474 "mdbcomp.goal_path.m"
  }
#line 189 "mdbcomp.goal_path.m"
}

#line 185 "mdbcomp.goal_path.m"
MR_String MR_CALL 
mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(
#line 185 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalPath_3)
#line 185 "mdbcomp.goal_path.m"
{
#line 487 "mdbcomp.goal_path.m"
  {
#line 487 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 487 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__GoalPathStr_4;
#line 487 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevStepStrs_5;
#line 487 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_6;

#line 488 "mdbcomp.goal_path.m"
    {
#line 488 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__RevStepStrs_5 = mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(mdbcomp__goal_path__GoalPath_3);
    }
#line 489 "mdbcomp.goal_path.m"
    {
#line 489 "mdbcomp.goal_path.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdbcomp__goal_path__RevStepStrs_5, &mdbcomp__goal_path__StepStrs_6);
    }
#line 490 "mdbcomp.goal_path.m"
    {
#line 490 "mdbcomp.goal_path.m"
      mercury__string__append_list_2_p_0(mdbcomp__goal_path__StepStrs_6, &mdbcomp__goal_path__GoalPathStr_4);
    }
#line 487 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPathStr_4;
#line 487 "mdbcomp.goal_path.m"
  }
#line 185 "mdbcomp.goal_path.m"
}

#line 180 "mdbcomp.goal_path.m"
MR_String MR_CALL 
mdbcomp__goal_path__goal_path_to_string_1_f_0(
#line 180 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalPath_3)
#line 180 "mdbcomp.goal_path.m"
{
#line 476 "mdbcomp.goal_path.m"
  {
#line 476 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 476 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__GoalPathStr_4;
#line 476 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_5;

#line 477 "mdbcomp.goal_path.m"
    {
#line 477 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_5 = mdbcomp__goal_path__goal_path_to_strings_1_f_0(mdbcomp__goal_path__GoalPath_3);
    }
#line 478 "mdbcomp.goal_path.m"
    {
#line 478 "mdbcomp.goal_path.m"
      mercury__string__append_list_2_p_0(mdbcomp__goal_path__StepStrs_5, &mdbcomp__goal_path__GoalPathStr_4);
    }
#line 476 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPathStr_4;
#line 476 "mdbcomp.goal_path.m"
  }
#line 180 "mdbcomp.goal_path.m"
}

#line 453 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_step_from_string_2_p_0_1(
#line 453 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 453 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 453 "mdbcomp.goal_path.m"
{
#line 453 "mdbcomp.goal_path.m"
  {
#line 453 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 453 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 453 "mdbcomp.goal_path.m"
    {
#line 453 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__453__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 453 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 453 "mdbcomp.goal_path.m"
  }
#line 453 "mdbcomp.goal_path.m"
}

#line 175 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_step_from_string_2_p_0(
#line 175 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__String_3,
#line 175 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__Step_4)
#line 175 "mdbcomp.goal_path.m"
{
#line 441 "mdbcomp.goal_path.m"
  {
#line 441 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 441 "mdbcomp.goal_path.m"
    MR_Char mdbcomp__goal_path__First_5;
#line 441 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__Rest_6;

#line 442 "mdbcomp.goal_path.m"
    {
#line 442 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mercury__string__first_char_3_p_3(mdbcomp__goal_path__String_3, &mdbcomp__goal_path__First_5, &mdbcomp__goal_path__Rest_6);
    }
#line 441 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 448 "mdbcomp.goal_path.m"
      {
#line 448 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__First_5 == (MR_Char) 61))
#line 469 "mdbcomp.goal_path.m"
          {
#line 469 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 469 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 469 "mdbcomp.goal_path.m"
              {
#line 469 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 469 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 469 "mdbcomp.goal_path.m"
              }
#line 469 "mdbcomp.goal_path.m"
          }
#line 448 "mdbcomp.goal_path.m"
        else
#line 448 "mdbcomp.goal_path.m"
          if ((mdbcomp__goal_path__First_5 == (MR_Char) 63))
#line 462 "mdbcomp.goal_path.m"
            {
#line 462 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 462 "mdbcomp.goal_path.m"
              if (mdbcomp__goal_path__succeeded)
#line 462 "mdbcomp.goal_path.m"
                {
#line 462 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 462 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__succeeded = MR_TRUE;
#line 462 "mdbcomp.goal_path.m"
                }
#line 462 "mdbcomp.goal_path.m"
            }
#line 448 "mdbcomp.goal_path.m"
          else
#line 448 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__First_5 == (MR_Char) 97))
#line 470 "mdbcomp.goal_path.m"
              {
#line 470 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 470 "mdbcomp.goal_path.m"
                if (mdbcomp__goal_path__succeeded)
#line 470 "mdbcomp.goal_path.m"
                  {
#line 470 "mdbcomp.goal_path.m"
                    *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 470 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__succeeded = MR_TRUE;
#line 470 "mdbcomp.goal_path.m"
                  }
#line 470 "mdbcomp.goal_path.m"
              }
#line 448 "mdbcomp.goal_path.m"
            else
#line 448 "mdbcomp.goal_path.m"
              if ((mdbcomp__goal_path__First_5 == (MR_Char) 99))
#line 448 "mdbcomp.goal_path.m"
                {
#line 448 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__N_8;

#line 449 "mdbcomp.goal_path.m"
                  {
#line 449 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__Rest_6, &mdbcomp__goal_path__N_8);
                  }
#line 448 "mdbcomp.goal_path.m"
                  if (mdbcomp__goal_path__succeeded)
#line 448 "mdbcomp.goal_path.m"
                    {
#line 448 "mdbcomp.goal_path.m"
                      {
#line 448 "mdbcomp.goal_path.m"
                        MR_Word base;
#line 448 "mdbcomp.goal_path.m"
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 448 "mdbcomp.goal_path.m"
                        *mdbcomp__goal_path__Step_4 = base;
#line 448 "mdbcomp.goal_path.m"
                        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__N_8));
#line 448 "mdbcomp.goal_path.m"
                      }
#line 448 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__succeeded = MR_TRUE;
#line 448 "mdbcomp.goal_path.m"
                    }
#line 448 "mdbcomp.goal_path.m"
                }
#line 448 "mdbcomp.goal_path.m"
              else
#line 448 "mdbcomp.goal_path.m"
                if ((mdbcomp__goal_path__First_5 == (MR_Char) 100))
#line 450 "mdbcomp.goal_path.m"
                  {
#line 450 "mdbcomp.goal_path.m"
                    MR_Integer mdbcomp__goal_path__N_10;

#line 451 "mdbcomp.goal_path.m"
                    {
#line 451 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__Rest_6, &mdbcomp__goal_path__N_10);
                    }
#line 450 "mdbcomp.goal_path.m"
                    if (mdbcomp__goal_path__succeeded)
#line 450 "mdbcomp.goal_path.m"
                      {
#line 450 "mdbcomp.goal_path.m"
                        {
#line 450 "mdbcomp.goal_path.m"
                          MR_Word base;
#line 450 "mdbcomp.goal_path.m"
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 450 "mdbcomp.goal_path.m"
                          *mdbcomp__goal_path__Step_4 = base;
#line 450 "mdbcomp.goal_path.m"
                          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__goal_path__N_10));
#line 450 "mdbcomp.goal_path.m"
                        }
#line 450 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 450 "mdbcomp.goal_path.m"
                      }
#line 450 "mdbcomp.goal_path.m"
                  }
#line 448 "mdbcomp.goal_path.m"
                else
#line 448 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__First_5 == (MR_Char) 101))
#line 464 "mdbcomp.goal_path.m"
                    {
#line 464 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 464 "mdbcomp.goal_path.m"
                      if (mdbcomp__goal_path__succeeded)
#line 464 "mdbcomp.goal_path.m"
                        {
#line 464 "mdbcomp.goal_path.m"
                          *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 464 "mdbcomp.goal_path.m"
                          mdbcomp__goal_path__succeeded = MR_TRUE;
#line 464 "mdbcomp.goal_path.m"
                        }
#line 464 "mdbcomp.goal_path.m"
                    }
#line 448 "mdbcomp.goal_path.m"
                  else
#line 448 "mdbcomp.goal_path.m"
                    if ((mdbcomp__goal_path__First_5 == (MR_Char) 111))
#line 471 "mdbcomp.goal_path.m"
                      {
#line 471 "mdbcomp.goal_path.m"
                        MR_Integer mdbcomp__goal_path__N_25;

#line 472 "mdbcomp.goal_path.m"
                        {
#line 472 "mdbcomp.goal_path.m"
                          mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__Rest_6, &mdbcomp__goal_path__N_25);
                        }
#line 471 "mdbcomp.goal_path.m"
                        if (mdbcomp__goal_path__succeeded)
#line 471 "mdbcomp.goal_path.m"
                          {
#line 471 "mdbcomp.goal_path.m"
                            {
#line 471 "mdbcomp.goal_path.m"
                              MR_Word base;
#line 471 "mdbcomp.goal_path.m"
                              base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 471 "mdbcomp.goal_path.m"
                              *mdbcomp__goal_path__Step_4 = base;
#line 471 "mdbcomp.goal_path.m"
                              MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 471 "mdbcomp.goal_path.m"
                              MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__goal_path__N_25));
#line 471 "mdbcomp.goal_path.m"
                            }
#line 471 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__succeeded = MR_TRUE;
#line 471 "mdbcomp.goal_path.m"
                          }
#line 471 "mdbcomp.goal_path.m"
                      }
#line 448 "mdbcomp.goal_path.m"
                    else
#line 448 "mdbcomp.goal_path.m"
                      if ((mdbcomp__goal_path__First_5 == (MR_Char) 113))
#line 448 "mdbcomp.goal_path.m"
                        if ((strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0))
#line 467 "mdbcomp.goal_path.m"
                          {
#line 467 "mdbcomp.goal_path.m"
                            *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdbcomp__goal_path_scalar_common_3[0]);
#line 467 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__succeeded = MR_TRUE;
#line 467 "mdbcomp.goal_path.m"
                          }
#line 448 "mdbcomp.goal_path.m"
                        else
#line 448 "mdbcomp.goal_path.m"
                          if ((strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "!") == 0))
#line 466 "mdbcomp.goal_path.m"
                            {
#line 466 "mdbcomp.goal_path.m"
                              *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdbcomp__goal_path_scalar_common_3[1]);
#line 466 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__succeeded = MR_TRUE;
#line 466 "mdbcomp.goal_path.m"
                            }
#line 448 "mdbcomp.goal_path.m"
                          else
#line 448 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__succeeded = MR_FALSE;
#line 448 "mdbcomp.goal_path.m"
                      else
#line 448 "mdbcomp.goal_path.m"
                        if ((mdbcomp__goal_path__First_5 == (MR_Char) 114))
#line 468 "mdbcomp.goal_path.m"
                          {
#line 468 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 468 "mdbcomp.goal_path.m"
                            if (mdbcomp__goal_path__succeeded)
#line 468 "mdbcomp.goal_path.m"
                              {
#line 468 "mdbcomp.goal_path.m"
                                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 468 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 468 "mdbcomp.goal_path.m"
                              }
#line 468 "mdbcomp.goal_path.m"
                          }
#line 448 "mdbcomp.goal_path.m"
                        else
#line 448 "mdbcomp.goal_path.m"
                          if ((mdbcomp__goal_path__First_5 == (MR_Char) 115))
#line 452 "mdbcomp.goal_path.m"
                            {
#line 452 "mdbcomp.goal_path.m"
                              MR_Integer mdbcomp__goal_path__N_12;
#line 452 "mdbcomp.goal_path.m"
                              MR_Word mdbcomp__goal_path__MaybeM_13;
#line 452 "mdbcomp.goal_path.m"
                              MR_String mdbcomp__goal_path__NStr_14;
#line 452 "mdbcomp.goal_path.m"
                              MR_String mdbcomp__goal_path__MStr_15;
#line 452 "mdbcomp.goal_path.m"
                              MR_Word mdbcomp__goal_path__V_17_17;
#line 452 "mdbcomp.goal_path.m"
                              MR_Word mdbcomp__goal_path__V_20_20;
#line 452 "mdbcomp.goal_path.m"
                              MR_Word mdbcomp__goal_path__V_21_21;

#line 453 "mdbcomp.goal_path.m"
                              {
#line 453 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__V_17_17 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_2[1], mdbcomp__goal_path__Rest_6);
                              }
#line 453 "mdbcomp.goal_path.m"
                              mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 453 "mdbcomp.goal_path.m"
                              if (mdbcomp__goal_path__succeeded)
#line 453 "mdbcomp.goal_path.m"
                                {
#line 453 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__NStr_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_17_17, (MR_Integer) 0)));
#line 453 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_17_17, (MR_Integer) 1)));
#line 453 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 453 "mdbcomp.goal_path.m"
                                  if (mdbcomp__goal_path__succeeded)
#line 453 "mdbcomp.goal_path.m"
                                    {
#line 453 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__MStr_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_20_20, (MR_Integer) 0)));
#line 453 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_20_20, (MR_Integer) 1)));
#line 453 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 452 "mdbcomp.goal_path.m"
                                      if (mdbcomp__goal_path__succeeded)
#line 452 "mdbcomp.goal_path.m"
                                        {
#line 454 "mdbcomp.goal_path.m"
                                          {
#line 454 "mdbcomp.goal_path.m"
                                            mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__NStr_14, &mdbcomp__goal_path__N_12);
                                          }
#line 452 "mdbcomp.goal_path.m"
                                          if (mdbcomp__goal_path__succeeded)
#line 452 "mdbcomp.goal_path.m"
                                            {
#line 456 "mdbcomp.goal_path.m"
                                              mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__MStr_15, (MR_String) "na") == 0);
#line 458 "mdbcomp.goal_path.m"
                                              if (mdbcomp__goal_path__succeeded)
#line 457 "mdbcomp.goal_path.m"
                                                {
#line 457 "mdbcomp.goal_path.m"
                                                  mdbcomp__goal_path__MaybeM_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 457 "mdbcomp.goal_path.m"
                                                  mdbcomp__goal_path__succeeded = MR_TRUE;
#line 457 "mdbcomp.goal_path.m"
                                                }
#line 458 "mdbcomp.goal_path.m"
                                              else
#line 459 "mdbcomp.goal_path.m"
                                                {
#line 459 "mdbcomp.goal_path.m"
                                                  MR_Integer mdbcomp__goal_path__M_16;

#line 459 "mdbcomp.goal_path.m"
                                                  {
#line 459 "mdbcomp.goal_path.m"
                                                    mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__MStr_15, &mdbcomp__goal_path__M_16);
                                                  }
#line 459 "mdbcomp.goal_path.m"
                                                  if (mdbcomp__goal_path__succeeded)
#line 459 "mdbcomp.goal_path.m"
                                                    {
#line 460 "mdbcomp.goal_path.m"
                                                      {
#line 460 "mdbcomp.goal_path.m"
                                                        mdbcomp__goal_path__MaybeM_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 460 "mdbcomp.goal_path.m"
                                                        MR_hl_field(MR_mktag(1), mdbcomp__goal_path__MaybeM_13, 0) = ((MR_Box) (mdbcomp__goal_path__M_16));
#line 460 "mdbcomp.goal_path.m"
                                                      }
#line 460 "mdbcomp.goal_path.m"
                                                      mdbcomp__goal_path__succeeded = MR_TRUE;
#line 459 "mdbcomp.goal_path.m"
                                                    }
#line 459 "mdbcomp.goal_path.m"
                                                }
#line 452 "mdbcomp.goal_path.m"
                                              if (mdbcomp__goal_path__succeeded)
#line 452 "mdbcomp.goal_path.m"
                                                {
#line 452 "mdbcomp.goal_path.m"
                                                  {
#line 452 "mdbcomp.goal_path.m"
                                                    MR_Word base;
#line 452 "mdbcomp.goal_path.m"
                                                    base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 452 "mdbcomp.goal_path.m"
                                                    *mdbcomp__goal_path__Step_4 = base;
#line 452 "mdbcomp.goal_path.m"
                                                    MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 452 "mdbcomp.goal_path.m"
                                                    MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__goal_path__N_12));
#line 452 "mdbcomp.goal_path.m"
                                                    MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdbcomp__goal_path__MaybeM_13));
#line 452 "mdbcomp.goal_path.m"
                                                  }
#line 452 "mdbcomp.goal_path.m"
                                                  mdbcomp__goal_path__succeeded = MR_TRUE;
#line 452 "mdbcomp.goal_path.m"
                                                }
#line 452 "mdbcomp.goal_path.m"
                                            }
#line 452 "mdbcomp.goal_path.m"
                                        }
#line 453 "mdbcomp.goal_path.m"
                                    }
#line 453 "mdbcomp.goal_path.m"
                                }
#line 452 "mdbcomp.goal_path.m"
                            }
#line 448 "mdbcomp.goal_path.m"
                          else
#line 448 "mdbcomp.goal_path.m"
                            if ((mdbcomp__goal_path__First_5 == (MR_Char) 116))
#line 463 "mdbcomp.goal_path.m"
                              {
#line 463 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 463 "mdbcomp.goal_path.m"
                                if (mdbcomp__goal_path__succeeded)
#line 463 "mdbcomp.goal_path.m"
                                  {
#line 463 "mdbcomp.goal_path.m"
                                    *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 463 "mdbcomp.goal_path.m"
                                    mdbcomp__goal_path__succeeded = MR_TRUE;
#line 463 "mdbcomp.goal_path.m"
                                  }
#line 463 "mdbcomp.goal_path.m"
                              }
#line 448 "mdbcomp.goal_path.m"
                            else
#line 448 "mdbcomp.goal_path.m"
                              if ((mdbcomp__goal_path__First_5 == (MR_Char) 126))
#line 465 "mdbcomp.goal_path.m"
                                {
#line 465 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 465 "mdbcomp.goal_path.m"
                                  if (mdbcomp__goal_path__succeeded)
#line 465 "mdbcomp.goal_path.m"
                                    {
#line 465 "mdbcomp.goal_path.m"
                                      *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 465 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__succeeded = MR_TRUE;
#line 465 "mdbcomp.goal_path.m"
                                    }
#line 465 "mdbcomp.goal_path.m"
                                }
#line 448 "mdbcomp.goal_path.m"
                              else
#line 448 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__succeeded = MR_FALSE;
#line 448 "mdbcomp.goal_path.m"
      }
#line 441 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 441 "mdbcomp.goal_path.m"
  }
#line 175 "mdbcomp.goal_path.m"
}

#line 422 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0_1(
#line 422 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 422 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 422 "mdbcomp.goal_path.m"
{
#line 422 "mdbcomp.goal_path.m"
  {
#line 422 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 422 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 422 "mdbcomp.goal_path.m"
    {
#line 422 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 422 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 422 "mdbcomp.goal_path.m"
  }
#line 422 "mdbcomp.goal_path.m"
}

#line 169 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(
#line 169 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__GoalPathStr_3,
#line 169 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__GoalPath_4)
#line 169 "mdbcomp.goal_path.m"
{
#line 437 "mdbcomp.goal_path.m"
  {
#line 437 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 437 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPathPrime_5;
#line 421 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_11;
#line 421 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevStepStrs_12;

#line 422 "mdbcomp.goal_path.m"
    {
#line 422 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_11 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[7], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 423 "mdbcomp.goal_path.m"
    {
#line 423 "mdbcomp.goal_path.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdbcomp__goal_path__StepStrs_11, &mdbcomp__goal_path__RevStepStrs_12);
    }
#line 424 "mdbcomp.goal_path.m"
    {
#line 424 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(mdbcomp__goal_path__RevStepStrs_12, &mdbcomp__goal_path__GoalPathPrime_5);
    }
#line 437 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 436 "mdbcomp.goal_path.m"
      *mdbcomp__goal_path__GoalPath_4 = mdbcomp__goal_path__GoalPathPrime_5;
#line 437 "mdbcomp.goal_path.m"
    else
#line 438 "mdbcomp.goal_path.m"
      {
#line 438 "mdbcomp.goal_path.m"
        {
#line 438 "mdbcomp.goal_path.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.goal_path", (MR_String) "predicate \140mdbcomp.goal_path.rev_goal_path_from_string_det\'/2", (MR_String) "rev_goal_path_from_string failed");
#line 438 "mdbcomp.goal_path.m"
          return;
        }
#line 438 "mdbcomp.goal_path.m"
      }
#line 437 "mdbcomp.goal_path.m"
  }
#line 169 "mdbcomp.goal_path.m"
}

#line 422 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_2_p_0_1(
#line 422 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 422 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 422 "mdbcomp.goal_path.m"
{
#line 422 "mdbcomp.goal_path.m"
  {
#line 422 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 422 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 422 "mdbcomp.goal_path.m"
    {
#line 422 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 422 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 422 "mdbcomp.goal_path.m"
  }
#line 422 "mdbcomp.goal_path.m"
}

#line 163 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(
#line 163 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__GoalPathStr_3,
#line 163 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__GoalPath_4)
#line 163 "mdbcomp.goal_path.m"
{
#line 421 "mdbcomp.goal_path.m"
  {
#line 421 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 421 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_5;
#line 421 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevStepStrs_6;

#line 422 "mdbcomp.goal_path.m"
    {
#line 422 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_5 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[6], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 423 "mdbcomp.goal_path.m"
    {
#line 423 "mdbcomp.goal_path.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdbcomp__goal_path__StepStrs_5, &mdbcomp__goal_path__RevStepStrs_6);
    }
#line 424 "mdbcomp.goal_path.m"
    {
#line 424 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(mdbcomp__goal_path__RevStepStrs_6, mdbcomp__goal_path__GoalPath_4);
    }
#line 421 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 421 "mdbcomp.goal_path.m"
  }
#line 163 "mdbcomp.goal_path.m"
}

#line 403 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_det_2_p_0_1(
#line 403 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 403 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 403 "mdbcomp.goal_path.m"
{
#line 403 "mdbcomp.goal_path.m"
  {
#line 403 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 403 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 403 "mdbcomp.goal_path.m"
    {
#line 403 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 403 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 403 "mdbcomp.goal_path.m"
  }
#line 403 "mdbcomp.goal_path.m"
}

#line 158 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__goal_path_from_string_det_2_p_0(
#line 158 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__GoalPathStr_3,
#line 158 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__GoalPath_4)
#line 158 "mdbcomp.goal_path.m"
{
#line 417 "mdbcomp.goal_path.m"
  {
#line 417 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 417 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPathPrime_5;
#line 402 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_11;

#line 403 "mdbcomp.goal_path.m"
    {
#line 403 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_11 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[5], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 404 "mdbcomp.goal_path.m"
    {
#line 404 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(mdbcomp__goal_path__StepStrs_11, &mdbcomp__goal_path__GoalPathPrime_5);
    }
#line 417 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 416 "mdbcomp.goal_path.m"
      *mdbcomp__goal_path__GoalPath_4 = mdbcomp__goal_path__GoalPathPrime_5;
#line 417 "mdbcomp.goal_path.m"
    else
#line 418 "mdbcomp.goal_path.m"
      {
#line 418 "mdbcomp.goal_path.m"
        {
#line 418 "mdbcomp.goal_path.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.goal_path", (MR_String) "predicate \140mdbcomp.goal_path.goal_path_from_string_det\'/2", (MR_String) "goal_path_from_string failed");
#line 418 "mdbcomp.goal_path.m"
          return;
        }
#line 418 "mdbcomp.goal_path.m"
      }
#line 417 "mdbcomp.goal_path.m"
  }
#line 158 "mdbcomp.goal_path.m"
}

#line 403 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_2_p_0_1(
#line 403 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 403 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 403 "mdbcomp.goal_path.m"
{
#line 403 "mdbcomp.goal_path.m"
  {
#line 403 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 403 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 403 "mdbcomp.goal_path.m"
    {
#line 403 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 403 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 403 "mdbcomp.goal_path.m"
  }
#line 403 "mdbcomp.goal_path.m"
}

#line 153 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_2_p_0(
#line 153 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__GoalPathStr_3,
#line 153 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__GoalPath_4)
#line 153 "mdbcomp.goal_path.m"
{
#line 402 "mdbcomp.goal_path.m"
  {
#line 402 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 402 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_5;

#line 403 "mdbcomp.goal_path.m"
    {
#line 403 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_5 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[4], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 404 "mdbcomp.goal_path.m"
    {
#line 404 "mdbcomp.goal_path.m"
      return mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(mdbcomp__goal_path__StepStrs_5, mdbcomp__goal_path__GoalPath_4);
    }
#line 402 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 402 "mdbcomp.goal_path.m"
  }
#line 153 "mdbcomp.goal_path.m"
}

#line 147 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_get_last_2_p_0(
#line 147 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 147 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__LastStep_4)
#line 147 "mdbcomp.goal_path.m"
{
#line 379 "mdbcomp.goal_path.m"
  {
#line 379 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 379 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_3_3;

#line 379 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 379 "mdbcomp.goal_path.m"
      {
#line 379 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 379 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__LastStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 379 "mdbcomp.goal_path.m"
      }
#line 379 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 379 "mdbcomp.goal_path.m"
  }
#line 147 "mdbcomp.goal_path.m"
}

#line 141 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(
#line 141 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 141 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__GoalPath_4,
#line 141 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__LastStep_5)
#line 141 "mdbcomp.goal_path.m"
{
#line 377 "mdbcomp.goal_path.m"
  {
#line 377 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 377 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 377 "mdbcomp.goal_path.m"
      {
#line 377 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__GoalPath_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 377 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__LastStep_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 377 "mdbcomp.goal_path.m"
      }
#line 377 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 377 "mdbcomp.goal_path.m"
  }
#line 141 "mdbcomp.goal_path.m"
}

#line 135 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_get_first_2_p_0(
#line 135 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalPath_3,
#line 135 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__FirstStep_4)
#line 135 "mdbcomp.goal_path.m"
{
#line 371 "mdbcomp.goal_path.m"
  {
#line 371 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__GoalPath_3)) == (MR_mktag((MR_Integer) 1)));
#line 371 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_5_5;

#line 371 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 371 "mdbcomp.goal_path.m"
      {
#line 371 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__FirstStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_3, (MR_Integer) 0)));
#line 371 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_3, (MR_Integer) 1)));
#line 371 "mdbcomp.goal_path.m"
      }
#line 371 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 371 "mdbcomp.goal_path.m"
  }
#line 135 "mdbcomp.goal_path.m"
}

#line 129 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_remove_first_3_p_0(
#line 129 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 129 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__OtherSteps_5,
#line 129 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__FirstStep_4)
#line 129 "mdbcomp.goal_path.m"
{
#line 371 "mdbcomp.goal_path.m"
  {
#line 371 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 371 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 371 "mdbcomp.goal_path.m"
      {
#line 371 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__FirstStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 371 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__OtherSteps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 371 "mdbcomp.goal_path.m"
      }
#line 371 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 371 "mdbcomp.goal_path.m"
  }
#line 129 "mdbcomp.goal_path.m"
}

#line 123 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_get_last_2_p_0(
#line 123 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 123 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__LastStep_5)
#line 123 "mdbcomp.goal_path.m"
{
#line 361 "mdbcomp.goal_path.m"
  {
#line 361 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 361 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadStep_3;
#line 361 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TailSteps_4;

#line 361 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 361 "mdbcomp.goal_path.m"
      {
#line 361 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__HeadStep_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 361 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__TailSteps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 362 "mdbcomp.goal_path.m"
        {
#line 362 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__goal_path_last_loop_3_p_0(mdbcomp__goal_path__HeadStep_3, mdbcomp__goal_path__TailSteps_4, mdbcomp__goal_path__LastStep_5);
        }
#line 362 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 361 "mdbcomp.goal_path.m"
      }
#line 361 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 361 "mdbcomp.goal_path.m"
  }
#line 123 "mdbcomp.goal_path.m"
}

#line 117 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_remove_last_3_p_0(
#line 117 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 117 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__AllButLastGoalPath_6,
#line 117 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__LastStep_7)
#line 117 "mdbcomp.goal_path.m"
{
#line 347 "mdbcomp.goal_path.m"
  {
#line 347 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 347 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadStep_4;
#line 347 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TailSteps_5;

#line 346 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 346 "mdbcomp.goal_path.m"
      {
#line 346 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__HeadStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 346 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__TailSteps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 348 "mdbcomp.goal_path.m"
        {
#line 348 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(mdbcomp__goal_path__HeadStep_4, mdbcomp__goal_path__TailSteps_5, mdbcomp__goal_path__AllButLastGoalPath_6, mdbcomp__goal_path__LastStep_7);
        }
#line 348 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 346 "mdbcomp.goal_path.m"
      }
#line 347 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 347 "mdbcomp.goal_path.m"
  }
#line 117 "mdbcomp.goal_path.m"
}

#line 111 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(
#line 111 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalPath0_4,
#line 111 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__NewStep_5)
#line 111 "mdbcomp.goal_path.m"
{
#line 344 "mdbcomp.goal_path.m"
  {
#line 344 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 344 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPath_6;

#line 344 "mdbcomp.goal_path.m"
    {
#line 344 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__GoalPath_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 344 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 0) = ((MR_Box) (mdbcomp__goal_path__GoalPath0_4));
#line 344 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 1) = ((MR_Box) (mdbcomp__goal_path__NewStep_5));
#line 344 "mdbcomp.goal_path.m"
    }
#line 344 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPath_6;
#line 344 "mdbcomp.goal_path.m"
  }
#line 111 "mdbcomp.goal_path.m"
}

#line 106 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__goal_path_add_at_end_2_f_0(
#line 106 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 106 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__NewStep_2)
#line 106 "mdbcomp.goal_path.m"
{
#line 338 "mdbcomp.goal_path.m"
  {
#line 338 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 338 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__3_3;

#line 338 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 338 "mdbcomp.goal_path.m"
      {
#line 338 "mdbcomp.goal_path.m"
        {
#line 338 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 338 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__goal_path__NewStep_2));
#line 338 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 338 "mdbcomp.goal_path.m"
        }
#line 338 "mdbcomp.goal_path.m"
      }
#line 338 "mdbcomp.goal_path.m"
    else
#line 340 "mdbcomp.goal_path.m"
      {
#line 340 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__OldStep_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 340 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__GoalPath0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 340 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__GoalPath_9;

#line 341 "mdbcomp.goal_path.m"
        {
#line 341 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__GoalPath_9 = mdbcomp__goal_path__goal_path_add_at_end_2_f_0(mdbcomp__goal_path__GoalPath0_7, mdbcomp__goal_path__NewStep_2);
        }
#line 340 "mdbcomp.goal_path.m"
        {
#line 340 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 340 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__goal_path__OldStep_6));
#line 340 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__goal_path__GoalPath_9));
#line 340 "mdbcomp.goal_path.m"
        }
#line 340 "mdbcomp.goal_path.m"
      }
#line 338 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__3_3;
#line 338 "mdbcomp.goal_path.m"
  }
#line 106 "mdbcomp.goal_path.m"
}

#line 102 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__whole_body_goal_id_0_f_0(void)
#line 102 "mdbcomp.goal_path.m"
{
#line 336 "mdbcomp.goal_path.m"
  {
#line 336 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 336 "mdbcomp.goal_path.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 336 "mdbcomp.goal_path.m"
  }
#line 102 "mdbcomp.goal_path.m"
}

#line 65 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__is_valid_goal_id_1_p_0(
#line 65 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1)
#line 65 "mdbcomp.goal_path.m"
{
#line 333 "mdbcomp.goal_path.m"
  {
#line 333 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 333 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__GoalIdNum_2 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;

#line 334 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__GoalIdNum_2 >= (MR_Integer) 0);
#line 333 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 333 "mdbcomp.goal_path.m"
  }
#line 65 "mdbcomp.goal_path.m"
}

void mercury__mdbcomp__goal_path__init(void)
{
}

void mercury__mdbcomp__goal_path__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_map_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_forward_path_map_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_string_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_reverse_path_bimap_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_reverse_path_map_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_cut_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0);
	MR_register_type_ctor_info(&mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
}

void mercury__mdbcomp__goal_path__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mdbcomp.goal_path. */
