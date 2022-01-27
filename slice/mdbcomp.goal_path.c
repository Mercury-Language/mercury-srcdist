/*
** Automatically generated from `mdbcomp.goal_path.m'
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


/* :- module mdbcomp.goal_path. */
/* :- implementation. */

/*
INIT mercury__mdbcomp__goal_path__init
ENDINIT
*/

#include "mdbcomp.goal_path.mih"


#include "mdbcomp.mih"
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

#line 465 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__465__1_2_p_0(
#line 465 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__1_16,
#line 465 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__2_23);

#line 641 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(
#line 641 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 641 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2,
#line 641 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_3);

#line 616 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(
#line 616 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 616 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2,
#line 616 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_3);

#line 603 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(
#line 603 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 603 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2,
#line 603 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_3);

#line 592 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(
#line 592 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 592 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2,
#line 592 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_3);

#line 504 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(
#line 504 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1);

#line 492 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__goal_path_to_strings_1_f_0(
#line 492 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1);

#line 438 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(
#line 438 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 438 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2);

#line 418 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_strings_2_p_0(
#line 418 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 418 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2);

#line 376 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_last_loop_3_p_0(
#line 376 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 376 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 376 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3);

#line 363 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(
#line 363 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__Head_1,
#line 363 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 363 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3,
#line 363 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__4_4);

#line 587 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0_1(
#line 587 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 587 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 587 "mdbcomp.goal_path.m"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2);

#line 465 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_step_from_string_2_p_0_1(
#line 465 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 465 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 434 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0_1(
#line 434 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 434 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 434 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_2_p_0_1(
#line 434 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 434 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 415 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_det_2_p_0_1(
#line 415 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 415 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1);

#line 415 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_2_p_0_1(
#line 415 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 415 "mdbcomp.goal_path.m"
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



#include "array.mh"
#include "io.mh"
#include "mdbcomp.mh"
#include "string.mh"
#include "time.mh"



#line 796 "mdbcomp.goal_path.c"
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

#line 811 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_containing_goal_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0
};

#line 817 "mdbcomp.goal_path.c"
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

#line 832 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0
};

#line 837 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_containing_goal_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1
};

#line 842 "mdbcomp.goal_path.c"
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

#line 856 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_containing_goal_0_0
};

#line 862 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 868 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____containing_goal_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____containing_goal_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "containing_goal",
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_containing_goal_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_containing_goal_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_containing_goal_0
};

#line 885 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0
  }
};

#line 894 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "containing_goal_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_containing_goal_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 911 "mdbcomp.goal_path.c"
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

#line 926 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_forward_goal_path_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
};

#line 932 "mdbcomp.goal_path.c"
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

#line 947 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0
};

#line 952 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_forward_goal_path_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1
};

#line 957 "mdbcomp.goal_path.c"
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

#line 971 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_forward_goal_path_0_0
};

#line 977 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 983 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "forward_goal_path",
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_forward_goal_path_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_forward_goal_path_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_forward_goal_path_0
};

#line 1000 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1[1] = {
  (MR_Integer) 0
};

#line 1005 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 1013 "mdbcomp.goal_path.c"
static const MR_FA_PseudoTypeInfo_Struct1 mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) &mdbcomp__goal_path__maybe__pti_maybe_1__pseudo_1
  }
};

#line 1021 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 = {
  (MR_String) "goal_attr_array",
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__array__pti_array_1__pseudo_maybe__pti_maybe_1__pseudo_1,
  NULL
};

#line 1028 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_attr_array_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_attr_array",
  {     &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 },
  {     &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_attr_array_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_attr_array_1
};

#line 1045 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0
  }
};

#line 1054 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_forward_path_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_forward_path_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_forward_goal_path_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1071 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0[1] = {
  (MR_Integer) 0
};

#line 1076 "mdbcomp.goal_path.c"
static const MR_NotagFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0 = {
  (MR_String) "goal_id",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 1083 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_id_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_id_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_id",
  {     &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0 },
  {     &mdbcomp__goal_path__mdbcomp__goal_path__notag_functor_desc_goal_id_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_id_0
};

#line 1100 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1105 "mdbcomp.goal_path.c"
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

#line 1120 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1125 "mdbcomp.goal_path.c"
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

#line 1140 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_2[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0
};

#line 1146 "mdbcomp.goal_path.c"
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

#line 1161 "mdbcomp.goal_path.c"
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

#line 1176 "mdbcomp.goal_path.c"
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

#line 1191 "mdbcomp.goal_path.c"
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

#line 1206 "mdbcomp.goal_path.c"
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

#line 1221 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_7[1] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_cut_0
};

#line 1226 "mdbcomp.goal_path.c"
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

#line 1241 "mdbcomp.goal_path.c"
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

#line 1256 "mdbcomp.goal_path.c"
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

#line 1271 "mdbcomp.goal_path.c"
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

#line 1286 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_goal_path_step_0_11[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1291 "mdbcomp.goal_path.c"
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

#line 1306 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_0[7] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_3,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_4,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_5,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_6,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_8,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_9,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_10
};

#line 1317 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_0
};

#line 1322 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_2[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_1
};

#line 1327 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_goal_path_step_0_3[3] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_2,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_7,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_goal_path_step_0_11
};

#line 1334 "mdbcomp.goal_path.c"
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

#line 1358 "mdbcomp.goal_path.c"
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

#line 1374 "mdbcomp.goal_path.c"
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

#line 1390 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 4,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_path_step_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_path_step_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_path_step",
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_goal_path_step_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_goal_path_step_0 },
  (MR_Integer) 12,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_goal_path_step_0
};

#line 1407 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_string_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_path_string_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_path_string_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_path_string",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1424 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__bimap__bimap__type_ctor_info_bimap_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 1433 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_reverse_path_bimap_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_reverse_path_bimap",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__goal_path__bimap__ti_bimap_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1450 "mdbcomp.goal_path.c"
static const MR_FA_TypeInfo_Struct2 mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0,
    (MR_TypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0
  }
};

#line 1459 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_reverse_path_map_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "goal_reverse_path_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mdbcomp__goal_path__tree234__ti_tree234_2mdbcomp__goal_path__type_ctor_info_goal_id_0mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 1476 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0 = {
  (MR_String) "scope_is_cut",
  (MR_Integer) 0
};

#line 1482 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDesc mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1 = {
  (MR_String) "scope_is_no_cut",
  (MR_Integer) 1
};

#line 1488 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_value_ordered_maybe_cut_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

#line 1494 "mdbcomp.goal_path.c"
static const MR_EnumFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_0,
  &mdbcomp__goal_path__mdbcomp__goal_path__enum_functor_desc_maybe_cut_0_1
};

#line 1500 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 1506 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_cut_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mdbcomp__goal_path____Unify____maybe_cut_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____maybe_cut_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "maybe_cut",
  {     mdbcomp__goal_path__mdbcomp__goal_path__enum_name_ordered_maybe_cut_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__enum_value_ordered_maybe_cut_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_cut_0
};

#line 1523 "mdbcomp.goal_path.c"
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

#line 1538 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_maybe_switch_num_functors_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

#line 1543 "mdbcomp.goal_path.c"
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

#line 1558 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0
};

#line 1563 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_maybe_switch_num_functors_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1
};

#line 1568 "mdbcomp.goal_path.c"
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

#line 1582 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_maybe_switch_num_functors_0_0
};

#line 1588 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1594 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_maybe_switch_num_functors_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "maybe_switch_num_functors",
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_maybe_switch_num_functors_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_maybe_switch_num_functors_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_maybe_switch_num_functors_0
};

#line 1611 "mdbcomp.goal_path.c"
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

#line 1626 "mdbcomp.goal_path.c"
static const MR_PseudoTypeInfo mdbcomp__goal_path__mdbcomp__goal_path__field_types_reverse_goal_path_0_1[2] = {
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0,
  (MR_PseudoTypeInfo) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_path_step_0
};

#line 1632 "mdbcomp.goal_path.c"
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

#line 1647 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_0[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0
};

#line 1652 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_stag_ordered_reverse_goal_path_0_1[1] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1
};

#line 1657 "mdbcomp.goal_path.c"
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

#line 1671 "mdbcomp.goal_path.c"
static const MR_DuFunctorDescPtr mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0[2] = {
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_1,
  &mdbcomp__goal_path__mdbcomp__goal_path__du_functor_desc_reverse_goal_path_0_0
};

#line 1677 "mdbcomp.goal_path.c"
static const MR_Integer mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

#line 1683 "mdbcomp.goal_path.c"
const MR_TypeCtorInfo_Struct mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001)),
  ((MR_Box) (mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001)),
  (MR_String) "mdbcomp.goal_path",
  (MR_String) "reverse_goal_path",
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_name_ordered_reverse_goal_path_0 },
  {     mdbcomp__goal_path__mdbcomp__goal_path__du_ptag_ordered_reverse_goal_path_0 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mdbcomp__goal_path__mdbcomp__goal_path__functor_number_map_reverse_goal_path_0
};

#line 1700 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_0_0_10001(
#line 1703 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1705 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1707 "mdbcomp.goal_path.c"
{
#line 1709 "mdbcomp.goal_path.c"
  {
#line 1711 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1714 "mdbcomp.goal_path.c"
    {
#line 1716 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____containing_goal_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1719 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1721 "mdbcomp.goal_path.c"
  }
#line 1723 "mdbcomp.goal_path.c"
}

#line 1726 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0_10001(
#line 1729 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1731 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1733 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1735 "mdbcomp.goal_path.c"
{
#line 1737 "mdbcomp.goal_path.c"
  {
#line 1739 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1742 "mdbcomp.goal_path.c"
    {
#line 1744 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____containing_goal_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1747 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1749 "mdbcomp.goal_path.c"
  }
#line 1751 "mdbcomp.goal_path.c"
}

#line 1754 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0_10001(
#line 1757 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1759 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1761 "mdbcomp.goal_path.c"
{
#line 1763 "mdbcomp.goal_path.c"
  {
#line 1765 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1768 "mdbcomp.goal_path.c"
    {
#line 1770 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____containing_goal_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1773 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1775 "mdbcomp.goal_path.c"
  }
#line 1777 "mdbcomp.goal_path.c"
}

#line 1780 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0_10001(
#line 1783 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1785 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1787 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1789 "mdbcomp.goal_path.c"
{
#line 1791 "mdbcomp.goal_path.c"
  {
#line 1793 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1796 "mdbcomp.goal_path.c"
    {
#line 1798 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____containing_goal_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1801 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1803 "mdbcomp.goal_path.c"
  }
#line 1805 "mdbcomp.goal_path.c"
}

#line 1808 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____forward_goal_path_0_0_10001(
#line 1811 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1813 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1815 "mdbcomp.goal_path.c"
{
#line 1817 "mdbcomp.goal_path.c"
  {
#line 1819 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1822 "mdbcomp.goal_path.c"
    {
#line 1824 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____forward_goal_path_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1827 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1829 "mdbcomp.goal_path.c"
  }
#line 1831 "mdbcomp.goal_path.c"
}

#line 1834 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____forward_goal_path_0_0_10001(
#line 1837 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1839 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1841 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1843 "mdbcomp.goal_path.c"
{
#line 1845 "mdbcomp.goal_path.c"
  {
#line 1847 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1850 "mdbcomp.goal_path.c"
    {
#line 1852 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____forward_goal_path_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1855 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1857 "mdbcomp.goal_path.c"
  }
#line 1859 "mdbcomp.goal_path.c"
}

#line 1862 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0_10001(
#line 1865 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1867 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1869 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1871 "mdbcomp.goal_path.c"
{
#line 1873 "mdbcomp.goal_path.c"
  {
#line 1875 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1878 "mdbcomp.goal_path.c"
    {
#line 1880 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_attr_array_1_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1883 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1885 "mdbcomp.goal_path.c"
  }
#line 1887 "mdbcomp.goal_path.c"
}

#line 1890 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0_10001(
#line 1893 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1895 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2,
#line 1897 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3,
#line 1899 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_4)
#line 1901 "mdbcomp.goal_path.c"
{
#line 1903 "mdbcomp.goal_path.c"
  {
#line 1905 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1908 "mdbcomp.goal_path.c"
    {
#line 1910 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_attr_array_1_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), &mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_3), ((MR_Word) mdbcomp__goal_path__wrapper_arg_4));
    }
#line 1913 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_2 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1915 "mdbcomp.goal_path.c"
  }
#line 1917 "mdbcomp.goal_path.c"
}

#line 1920 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0_10001(
#line 1923 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1925 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1927 "mdbcomp.goal_path.c"
{
#line 1929 "mdbcomp.goal_path.c"
  {
#line 1931 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1934 "mdbcomp.goal_path.c"
    {
#line 1936 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_forward_path_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1939 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1941 "mdbcomp.goal_path.c"
  }
#line 1943 "mdbcomp.goal_path.c"
}

#line 1946 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0_10001(
#line 1949 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 1951 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 1953 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 1955 "mdbcomp.goal_path.c"
{
#line 1957 "mdbcomp.goal_path.c"
  {
#line 1959 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 1962 "mdbcomp.goal_path.c"
    {
#line 1964 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_forward_path_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 1967 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 1969 "mdbcomp.goal_path.c"
  }
#line 1971 "mdbcomp.goal_path.c"
}

#line 1974 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_id_0_0_10001(
#line 1977 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 1979 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 1981 "mdbcomp.goal_path.c"
{
#line 1983 "mdbcomp.goal_path.c"
  {
#line 1985 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 1988 "mdbcomp.goal_path.c"
    {
#line 1990 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_id_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 1993 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 1995 "mdbcomp.goal_path.c"
  }
#line 1997 "mdbcomp.goal_path.c"
}

#line 2000 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_id_0_0_10001(
#line 2003 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2005 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2007 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2009 "mdbcomp.goal_path.c"
{
#line 2011 "mdbcomp.goal_path.c"
  {
#line 2013 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2016 "mdbcomp.goal_path.c"
    {
#line 2018 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_id_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2021 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2023 "mdbcomp.goal_path.c"
  }
#line 2025 "mdbcomp.goal_path.c"
}

#line 2028 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_step_0_0_10001(
#line 2031 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2033 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2035 "mdbcomp.goal_path.c"
{
#line 2037 "mdbcomp.goal_path.c"
  {
#line 2039 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2042 "mdbcomp.goal_path.c"
    {
#line 2044 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2047 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2049 "mdbcomp.goal_path.c"
  }
#line 2051 "mdbcomp.goal_path.c"
}

#line 2054 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_step_0_0_10001(
#line 2057 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2059 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2061 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2063 "mdbcomp.goal_path.c"
{
#line 2065 "mdbcomp.goal_path.c"
  {
#line 2067 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2070 "mdbcomp.goal_path.c"
    {
#line 2072 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_path_step_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2075 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2077 "mdbcomp.goal_path.c"
  }
#line 2079 "mdbcomp.goal_path.c"
}

#line 2082 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_path_string_0_0_10001(
#line 2085 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2087 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2089 "mdbcomp.goal_path.c"
{
#line 2091 "mdbcomp.goal_path.c"
  {
#line 2093 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2096 "mdbcomp.goal_path.c"
    {
#line 2098 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_string_0_0(((MR_String) mdbcomp__goal_path__wrapper_arg_1), ((MR_String) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2101 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2103 "mdbcomp.goal_path.c"
  }
#line 2105 "mdbcomp.goal_path.c"
}

#line 2108 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_path_string_0_0_10001(
#line 2111 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2113 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2115 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2117 "mdbcomp.goal_path.c"
{
#line 2119 "mdbcomp.goal_path.c"
  {
#line 2121 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2124 "mdbcomp.goal_path.c"
    {
#line 2126 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_path_string_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_String) mdbcomp__goal_path__wrapper_arg_2), ((MR_String) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2129 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2131 "mdbcomp.goal_path.c"
  }
#line 2133 "mdbcomp.goal_path.c"
}

#line 2136 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0_10001(
#line 2139 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2141 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2143 "mdbcomp.goal_path.c"
{
#line 2145 "mdbcomp.goal_path.c"
  {
#line 2147 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2150 "mdbcomp.goal_path.c"
    {
#line 2152 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2155 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2157 "mdbcomp.goal_path.c"
  }
#line 2159 "mdbcomp.goal_path.c"
}

#line 2162 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0_10001(
#line 2165 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2167 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2169 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2171 "mdbcomp.goal_path.c"
{
#line 2173 "mdbcomp.goal_path.c"
  {
#line 2175 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2178 "mdbcomp.goal_path.c"
    {
#line 2180 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2183 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2185 "mdbcomp.goal_path.c"
  }
#line 2187 "mdbcomp.goal_path.c"
}

#line 2190 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0_10001(
#line 2193 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2195 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2197 "mdbcomp.goal_path.c"
{
#line 2199 "mdbcomp.goal_path.c"
  {
#line 2201 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2204 "mdbcomp.goal_path.c"
    {
#line 2206 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2209 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2211 "mdbcomp.goal_path.c"
  }
#line 2213 "mdbcomp.goal_path.c"
}

#line 2216 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0_10001(
#line 2219 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2221 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2223 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2225 "mdbcomp.goal_path.c"
{
#line 2227 "mdbcomp.goal_path.c"
  {
#line 2229 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2232 "mdbcomp.goal_path.c"
    {
#line 2234 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2237 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2239 "mdbcomp.goal_path.c"
  }
#line 2241 "mdbcomp.goal_path.c"
}

#line 2244 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_cut_0_0_10001(
#line 2247 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2249 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2251 "mdbcomp.goal_path.c"
{
#line 2253 "mdbcomp.goal_path.c"
  {
#line 2255 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2258 "mdbcomp.goal_path.c"
    {
#line 2260 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____maybe_cut_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2263 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2265 "mdbcomp.goal_path.c"
  }
#line 2267 "mdbcomp.goal_path.c"
}

#line 2270 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_cut_0_0_10001(
#line 2273 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2275 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2277 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2279 "mdbcomp.goal_path.c"
{
#line 2281 "mdbcomp.goal_path.c"
  {
#line 2283 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2286 "mdbcomp.goal_path.c"
    {
#line 2288 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____maybe_cut_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2291 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2293 "mdbcomp.goal_path.c"
  }
#line 2295 "mdbcomp.goal_path.c"
}

#line 2298 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0_10001(
#line 2301 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2303 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2305 "mdbcomp.goal_path.c"
{
#line 2307 "mdbcomp.goal_path.c"
  {
#line 2309 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2312 "mdbcomp.goal_path.c"
    {
#line 2314 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2317 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2319 "mdbcomp.goal_path.c"
  }
#line 2321 "mdbcomp.goal_path.c"
}

#line 2324 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0_10001(
#line 2327 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2329 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2331 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2333 "mdbcomp.goal_path.c"
{
#line 2335 "mdbcomp.goal_path.c"
  {
#line 2337 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2340 "mdbcomp.goal_path.c"
    {
#line 2342 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____maybe_switch_num_functors_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2345 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2347 "mdbcomp.goal_path.c"
  }
#line 2349 "mdbcomp.goal_path.c"
}

#line 2352 "mdbcomp.goal_path.c"
static MR_bool MR_CALL 
mdbcomp__goal_path____Unify____reverse_goal_path_0_0_10001(
#line 2355 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 2357 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2)
#line 2359 "mdbcomp.goal_path.c"
{
#line 2361 "mdbcomp.goal_path.c"
  {
#line 2363 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded;

#line 2366 "mdbcomp.goal_path.c"
    {
#line 2368 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), ((MR_Word) mdbcomp__goal_path__wrapper_arg_2));
    }
#line 2371 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2373 "mdbcomp.goal_path.c"
  }
#line 2375 "mdbcomp.goal_path.c"
}

#line 2378 "mdbcomp.goal_path.c"
static void MR_CALL 
mdbcomp__goal_path____Compare____reverse_goal_path_0_0_10001(
#line 2381 "mdbcomp.goal_path.c"
  MR_Box * mdbcomp__goal_path__wrapper_arg_1,
#line 2383 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_2,
#line 2385 "mdbcomp.goal_path.c"
  MR_Box mdbcomp__goal_path__wrapper_arg_3)
#line 2387 "mdbcomp.goal_path.c"
{
#line 2389 "mdbcomp.goal_path.c"
  {
#line 2391 "mdbcomp.goal_path.c"
    MR_Word mdbcomp__goal_path__conv0_HeadVar__1_1;

#line 2394 "mdbcomp.goal_path.c"
    {
#line 2396 "mdbcomp.goal_path.c"
      mdbcomp__goal_path____Compare____reverse_goal_path_0_0(&mdbcomp__goal_path__conv0_HeadVar__1_1, ((MR_Word) mdbcomp__goal_path__wrapper_arg_2), ((MR_Word) mdbcomp__goal_path__wrapper_arg_3));
    }
#line 2399 "mdbcomp.goal_path.c"
    *mdbcomp__goal_path__wrapper_arg_1 = ((MR_Box) (mdbcomp__goal_path__conv0_HeadVar__1_1));
#line 2401 "mdbcomp.goal_path.c"
  }
#line 2403 "mdbcomp.goal_path.c"
}

#line 465 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__465__1_2_p_0(
#line 465 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__1_16,
#line 465 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__2_23)
#line 465 "mdbcomp.goal_path.m"
{
#line 465 "mdbcomp.goal_path.m"
  {
#line 465 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__HeadVar__1_16 == mdbcomp__goal_path__HeadVar__2_23);

#line 465 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 465 "mdbcomp.goal_path.m"
  }
#line 465 "mdbcomp.goal_path.m"
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
#line 2451 "mdbcomp.goal_path.c"
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
#line 2463 "mdbcomp.goal_path.c"
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
#line 2476 "mdbcomp.goal_path.c"
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
#line 2494 "mdbcomp.goal_path.c"
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
#line 2580 "mdbcomp.goal_path.c"
            {
#line 2582 "mdbcomp.goal_path.c"
              mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____reverse_goal_path_0_0(mdbcomp__goal_path__V_5_5, mdbcomp__goal_path__V_7_7);
            }
#line 71 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 2587 "mdbcomp.goal_path.c"
              {
#line 2589 "mdbcomp.goal_path.c"
                mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__V_6_6, mdbcomp__goal_path__V_8_8);
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
#line 2627 "mdbcomp.goal_path.c"
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
#line 2639 "mdbcomp.goal_path.c"
        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 93 "mdbcomp.goal_path.m"
    else
#line 93 "mdbcomp.goal_path.m"
      {
#line 93 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__V_11_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 93 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 2650 "mdbcomp.goal_path.c"
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
#line 2729 "mdbcomp.goal_path.c"
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
#line 2781 "mdbcomp.goal_path.c"
  {
#line 2783 "mdbcomp.goal_path.c"
    MR_bool mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__HeadVar__2_1 == mdbcomp__goal_path__HeadVar__2_2);

#line 2786 "mdbcomp.goal_path.c"
    return mdbcomp__goal_path__succeeded;
#line 2788 "mdbcomp.goal_path.c"
  }
#line 98 "mdbcomp.goal_path.m"
}

#line 248 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_map_0_0(
#line 248 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 248 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 248 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 248 "mdbcomp.goal_path.m"
{
#line 248 "mdbcomp.goal_path.m"
  {
#line 248 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 248 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_4 = mdbcomp__goal_path__HeadVar__2_2;
#line 248 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_5 = mdbcomp__goal_path__HeadVar__3_3;

#line 248 "mdbcomp.goal_path.m"
    {
#line 248 "mdbcomp.goal_path.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[3], mdbcomp__goal_path__HeadVar__1_1, ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_5)));
    }
#line 248 "mdbcomp.goal_path.m"
  }
#line 248 "mdbcomp.goal_path.m"
}

#line 248 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_map_0_0(
#line 248 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 248 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 248 "mdbcomp.goal_path.m"
{
#line 248 "mdbcomp.goal_path.m"
  {
#line 248 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 248 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 248 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_4 = mdbcomp__goal_path__HeadVar__2_2;

#line 248 "mdbcomp.goal_path.m"
    {
#line 248 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[3], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
    }
#line 248 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 248 "mdbcomp.goal_path.m"
  }
#line 248 "mdbcomp.goal_path.m"
}

#line 249 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____goal_reverse_path_bimap_0_0(
#line 249 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 249 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 249 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 249 "mdbcomp.goal_path.m"
{
#line 249 "mdbcomp.goal_path.m"
  {
#line 249 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 249 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_4 = mdbcomp__goal_path__HeadVar__2_2;
#line 249 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_5 = mdbcomp__goal_path__HeadVar__3_3;

#line 249 "mdbcomp.goal_path.m"
    {
#line 249 "mdbcomp.goal_path.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[2], mdbcomp__goal_path__HeadVar__1_1, ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_5)));
    }
#line 249 "mdbcomp.goal_path.m"
  }
#line 249 "mdbcomp.goal_path.m"
}

#line 249 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_reverse_path_bimap_0_0(
#line 249 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 249 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 249 "mdbcomp.goal_path.m"
{
#line 249 "mdbcomp.goal_path.m"
  {
#line 249 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 249 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 249 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_4 = mdbcomp__goal_path__HeadVar__2_2;

#line 249 "mdbcomp.goal_path.m"
    {
#line 249 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[2], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
    }
#line 249 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 249 "mdbcomp.goal_path.m"
  }
#line 249 "mdbcomp.goal_path.m"
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
#line 2994 "mdbcomp.goal_path.c"
      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
    else
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
      switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) {
#line 77 "mdbcomp.goal_path.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
        case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
          switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__2_2)) {
#line 77 "mdbcomp.goal_path.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
              switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 4:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 5:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 6:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 1:
#line 3072 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3078 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 3091 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3097 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3103 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 1:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
              switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 4:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 5:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 6:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 1:
#line 3177 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3183 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 3196 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3202 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3208 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
              switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 4:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 5:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 6:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 1:
#line 3282 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3288 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 3301 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3307 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3313 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
              switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 4:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 5:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 6:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 1:
#line 3387 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3393 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 3406 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3412 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3418 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 4:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
              switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 4:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 5:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 6:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 1:
#line 3492 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3498 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 3511 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3517 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3523 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 5:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
              switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 4:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 5:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 6:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 1:
#line 3597 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3603 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 3616 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3622 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3628 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 6:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
              switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 4:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 5:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 6:
#line 77 "mdbcomp.goal_path.m"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 1:
#line 3702 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 2:
#line 3708 "mdbcomp.goal_path.c"
                  *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
                case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 3721 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 3727 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                    case (MR_Integer) 2:
#line 3733 "mdbcomp.goal_path.c"
                      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                      break;
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
                  break;
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
          }
#line 77 "mdbcomp.goal_path.m"
          break;
#line 77 "mdbcomp.goal_path.m"
        case (MR_Integer) 1:
#line 77 "mdbcomp.goal_path.m"
          {
#line 77 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__V_158_158 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
            switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 0:
#line 3770 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 3776 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 3782 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 3:
#line 3788 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 4:
#line 3794 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 5:
#line 3800 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 6:
#line 3806 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
                break;
#line 77 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 77 "mdbcomp.goal_path.m"
                {
#line 77 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)));

#line 77 "mdbcomp.goal_path.m"
                  {
#line 77 "mdbcomp.goal_path.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_158_158, mdbcomp__goal_path__V_5_5);
                  }
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
                break;
#line 77 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 3832 "mdbcomp.goal_path.c"
                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                break;
#line 77 "mdbcomp.goal_path.m"
              case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 0:
#line 3845 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 3851 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 3857 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
                break;
#line 77 "mdbcomp.goal_path.m"
            }
#line 77 "mdbcomp.goal_path.m"
          }
#line 77 "mdbcomp.goal_path.m"
          break;
#line 77 "mdbcomp.goal_path.m"
        case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
          {
#line 77 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__V_159_159 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
            switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 0:
#line 3892 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 3898 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 3904 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 3:
#line 3910 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 4:
#line 3916 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 5:
#line 3922 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 6:
#line 3928 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
                break;
#line 77 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 3938 "mdbcomp.goal_path.c"
                *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                break;
#line 77 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
                {
#line 77 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__V_25_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)));

#line 77 "mdbcomp.goal_path.m"
                  {
#line 77 "mdbcomp.goal_path.m"
                    mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_159_159, mdbcomp__goal_path__V_25_25);
                  }
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
                break;
#line 77 "mdbcomp.goal_path.m"
              case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 0:
#line 3967 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 3973 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 3979 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
                break;
#line 77 "mdbcomp.goal_path.m"
            }
#line 77 "mdbcomp.goal_path.m"
          }
#line 77 "mdbcomp.goal_path.m"
          break;
#line 77 "mdbcomp.goal_path.m"
        case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
              {
#line 77 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__V_161_161 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 2)));
#line 77 "mdbcomp.goal_path.m"
                MR_Integer mdbcomp__goal_path__V_162_162 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                    switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 0:
#line 4023 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 1:
#line 4029 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 2:
#line 4035 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 3:
#line 4041 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 4:
#line 4047 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 5:
#line 4053 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 6:
#line 4059 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                    }
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 4069 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 4075 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 0:
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
#line 4102 "mdbcomp.goal_path.c"
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
                            }
#line 77 "mdbcomp.goal_path.m"
                        }
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 1:
#line 4123 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 2:
#line 4129 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                    }
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 1:
#line 77 "mdbcomp.goal_path.m"
              {
#line 77 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__V_160_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                    switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 0:
#line 4164 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 1:
#line 4170 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 2:
#line 4176 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 3:
#line 4182 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 4:
#line 4188 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 5:
#line 4194 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 6:
#line 4200 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                    }
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 4210 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 4216 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 0:
#line 4229 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 1:
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
                          }
#line 77 "mdbcomp.goal_path.m"
                        }
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 2:
#line 4255 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                    }
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
              {
#line 77 "mdbcomp.goal_path.m"
                MR_Integer mdbcomp__goal_path__V_157_157 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                  default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                    switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__3_3)) {
#line 77 "mdbcomp.goal_path.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 0:
#line 4290 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 1:
#line 4296 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 2:
#line 4302 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 3:
#line 4308 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 4:
#line 4314 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 5:
#line 4320 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 6:
#line 4326 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                    }
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 1:
#line 4336 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 2:
#line 4342 "mdbcomp.goal_path.c"
                    *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                  case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
                      default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 0:
#line 4355 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 1:
#line 4361 "mdbcomp.goal_path.c"
                        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                      case (MR_Integer) 2:
#line 77 "mdbcomp.goal_path.m"
                        {
#line 77 "mdbcomp.goal_path.m"
                          MR_Integer mdbcomp__goal_path__V_148_148 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 1)));

#line 77 "mdbcomp.goal_path.m"
                          {
#line 77 "mdbcomp.goal_path.m"
                            mercury__private_builtin__builtin_compare_int_3_p_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_157_157, mdbcomp__goal_path__V_148_148);
                          }
#line 77 "mdbcomp.goal_path.m"
                        }
#line 77 "mdbcomp.goal_path.m"
                        break;
#line 77 "mdbcomp.goal_path.m"
                    }
#line 77 "mdbcomp.goal_path.m"
                    break;
#line 77 "mdbcomp.goal_path.m"
                }
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
          }
#line 77 "mdbcomp.goal_path.m"
          break;
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
#line 77 "mdbcomp.goal_path.m"
      switch (MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) {
#line 77 "mdbcomp.goal_path.m"
        default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
        case (MR_Integer) 0:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
          switch (MR_unmkbody(mdbcomp__goal_path__HeadVar__1_1)) {
#line 77 "mdbcomp.goal_path.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 0:
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
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 1:
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
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 2:
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
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 3:
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
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 4:
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
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 5:
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
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 6:
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
              break;
#line 77 "mdbcomp.goal_path.m"
          }
#line 77 "mdbcomp.goal_path.m"
          break;
#line 77 "mdbcomp.goal_path.m"
        case (MR_Integer) 1:
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
#line 4566 "mdbcomp.goal_path.c"
                mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_3_3 == mdbcomp__goal_path__V_4_4);
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
          }
#line 77 "mdbcomp.goal_path.m"
          break;
#line 77 "mdbcomp.goal_path.m"
        case (MR_Integer) 2:
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
#line 4591 "mdbcomp.goal_path.c"
                mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_5_5 == mdbcomp__goal_path__V_6_6);
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
          }
#line 77 "mdbcomp.goal_path.m"
          break;
#line 77 "mdbcomp.goal_path.m"
        case (MR_Integer) 3:
#line 77 "mdbcomp.goal_path.m"
#line 77 "mdbcomp.goal_path.m"
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)))) {
#line 77 "mdbcomp.goal_path.m"
            default: /*NOTREACHED*/ MR_assert(0);
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 0:
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
#line 4629 "mdbcomp.goal_path.c"
                    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_7_7 == mdbcomp__goal_path__V_9_9);
#line 77 "mdbcomp.goal_path.m"
                    if (mdbcomp__goal_path__succeeded)
#line 4633 "mdbcomp.goal_path.c"
                      {
#line 4635 "mdbcomp.goal_path.c"
                        mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____maybe_switch_num_functors_0_0(mdbcomp__goal_path__V_8_8, mdbcomp__goal_path__V_10_10);
                      }
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 1:
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
#line 4661 "mdbcomp.goal_path.c"
                    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_19_19 == mdbcomp__goal_path__V_20_20);
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
            case (MR_Integer) 2:
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
#line 4686 "mdbcomp.goal_path.c"
                    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_27_27 == mdbcomp__goal_path__V_28_28);
#line 77 "mdbcomp.goal_path.m"
                  }
#line 77 "mdbcomp.goal_path.m"
              }
#line 77 "mdbcomp.goal_path.m"
              break;
#line 77 "mdbcomp.goal_path.m"
          }
#line 77 "mdbcomp.goal_path.m"
          break;
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
#line 4731 "mdbcomp.goal_path.c"
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

#line 4787 "mdbcomp.goal_path.c"
        mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_3_3 == mdbcomp__goal_path__V_4_4);
#line 62 "mdbcomp.goal_path.m"
      }
#line 62 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 62 "mdbcomp.goal_path.m"
  }
#line 62 "mdbcomp.goal_path.m"
}

#line 247 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____goal_forward_path_map_0_0(
#line 247 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 247 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 247 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 247 "mdbcomp.goal_path.m"
{
#line 247 "mdbcomp.goal_path.m"
  {
#line 247 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 247 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_4 = mdbcomp__goal_path__HeadVar__2_2;
#line 247 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_5 = mdbcomp__goal_path__HeadVar__3_3;

#line 247 "mdbcomp.goal_path.m"
    {
#line 247 "mdbcomp.goal_path.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[1], mdbcomp__goal_path__HeadVar__1_1, ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_5)));
    }
#line 247 "mdbcomp.goal_path.m"
  }
#line 247 "mdbcomp.goal_path.m"
}

#line 247 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_forward_path_map_0_0(
#line 247 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 247 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 247 "mdbcomp.goal_path.m"
{
#line 247 "mdbcomp.goal_path.m"
  {
#line 247 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 247 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 247 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_4 = mdbcomp__goal_path__HeadVar__2_2;

#line 247 "mdbcomp.goal_path.m"
    {
#line 247 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[1], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
    }
#line 247 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 247 "mdbcomp.goal_path.m"
  }
#line 247 "mdbcomp.goal_path.m"
}

#line 289 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____goal_attr_array_1_0(
#line 289 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_8,
#line 289 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 289 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 289 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 289 "mdbcomp.goal_path.m"
{
#line 289 "mdbcomp.goal_path.m"
  {
#line 289 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 289 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_6 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 289 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_7 = (MR_Integer) mdbcomp__goal_path__HeadVar__3_3;

#line 289 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_6 == mdbcomp__goal_path__CastY_7);
#line 289 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 4884 "mdbcomp.goal_path.c"
      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 289 "mdbcomp.goal_path.m"
    else
#line 289 "mdbcomp.goal_path.m"
      {
#line 289 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TypeInfo_10_10;
#line 289 "mdbcomp.goal_path.m"
        MR_ArrayPtr mdbcomp__goal_path__V_4_4 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__2_2;
#line 289 "mdbcomp.goal_path.m"
        MR_ArrayPtr mdbcomp__goal_path__V_5_5 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__3_3;

#line 4897 "mdbcomp.goal_path.c"
        {
#line 4899 "mdbcomp.goal_path.c"
          mdbcomp__goal_path__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4901 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4903 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_8));
#line 4905 "mdbcomp.goal_path.c"
        }
#line 289 "mdbcomp.goal_path.m"
        {
#line 289 "mdbcomp.goal_path.m"
          mercury__array____Compare____array_1_0(mdbcomp__goal_path__TypeInfo_10_10, mdbcomp__goal_path__HeadVar__1_1, (MR_ArrayPtr) mdbcomp__goal_path__V_4_4, (MR_ArrayPtr) mdbcomp__goal_path__V_5_5);
        }
#line 289 "mdbcomp.goal_path.m"
      }
#line 289 "mdbcomp.goal_path.m"
  }
#line 289 "mdbcomp.goal_path.m"
}

#line 289 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____goal_attr_array_1_0(
#line 289 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_7,
#line 289 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 289 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 289 "mdbcomp.goal_path.m"
{
#line 289 "mdbcomp.goal_path.m"
  {
#line 289 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 289 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_5 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 289 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_6 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 289 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_5 == mdbcomp__goal_path__CastY_6);
#line 289 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 289 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = MR_TRUE;
#line 289 "mdbcomp.goal_path.m"
    else
#line 289 "mdbcomp.goal_path.m"
      {
#line 289 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TypeInfo_9_9;
#line 289 "mdbcomp.goal_path.m"
        MR_ArrayPtr mdbcomp__goal_path__V_3_3 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__1_1;
#line 289 "mdbcomp.goal_path.m"
        MR_ArrayPtr mdbcomp__goal_path__V_4_4 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__2_2;

#line 4956 "mdbcomp.goal_path.c"
        {
#line 4958 "mdbcomp.goal_path.c"
          mdbcomp__goal_path__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4960 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_9_9, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 4962 "mdbcomp.goal_path.c"
          MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_9_9, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_7));
#line 4964 "mdbcomp.goal_path.c"
        }
#line 4966 "mdbcomp.goal_path.c"
        {
#line 4968 "mdbcomp.goal_path.c"
          mdbcomp__goal_path__succeeded = mercury__array____Unify____array_1_0(mdbcomp__goal_path__TypeInfo_9_9, (MR_ArrayPtr) mdbcomp__goal_path__V_3_3, (MR_ArrayPtr) mdbcomp__goal_path__V_4_4);
        }
#line 289 "mdbcomp.goal_path.m"
      }
#line 289 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 289 "mdbcomp.goal_path.m"
  }
#line 289 "mdbcomp.goal_path.m"
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
#line 5010 "mdbcomp.goal_path.c"
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
#line 5022 "mdbcomp.goal_path.c"
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
#line 5035 "mdbcomp.goal_path.c"
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
#line 5053 "mdbcomp.goal_path.c"
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
#line 5165 "mdbcomp.goal_path.c"
                {
#line 5167 "mdbcomp.goal_path.c"
                  mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__V_5_5, mdbcomp__goal_path__V_7_7);
                }
#line 67 "mdbcomp.goal_path.m"
                if (mdbcomp__goal_path__succeeded)
#line 5172 "mdbcomp.goal_path.c"
                  {
#line 5174 "mdbcomp.goal_path.c"
                    /* direct tailcall eliminated */
#line 5176 "mdbcomp.goal_path.c"
                    {
#line 5178 "mdbcomp.goal_path.c"
                      MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__V_6_6;
#line 5180 "mdbcomp.goal_path.c"
                      MR_Word mdbcomp__goal_path__HeadVar__2__tmp_copy_2 = mdbcomp__goal_path__V_8_8;

#line 5183 "mdbcomp.goal_path.c"
                      mdbcomp__goal_path__HeadVar__2_2 = mdbcomp__goal_path__HeadVar__2__tmp_copy_2;
#line 5185 "mdbcomp.goal_path.c"
                      mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 5187 "mdbcomp.goal_path.c"
                    }
#line 5189 "mdbcomp.goal_path.c"
                    continue;
#line 5191 "mdbcomp.goal_path.c"
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

#line 246 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_map_0_0(
#line 246 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 246 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 246 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 246 "mdbcomp.goal_path.m"
{
#line 246 "mdbcomp.goal_path.m"
  {
#line 246 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 246 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_4 = mdbcomp__goal_path__HeadVar__2_2;
#line 246 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_5 = mdbcomp__goal_path__HeadVar__3_3;

#line 246 "mdbcomp.goal_path.m"
    {
#line 246 "mdbcomp.goal_path.m"
      mercury__builtin__compare_3_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[0], mdbcomp__goal_path__HeadVar__1_1, ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_4)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_5)));
    }
#line 246 "mdbcomp.goal_path.m"
  }
#line 246 "mdbcomp.goal_path.m"
}

#line 246 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_map_0_0(
#line 246 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 246 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 246 "mdbcomp.goal_path.m"
{
#line 246 "mdbcomp.goal_path.m"
  {
#line 246 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 246 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar1_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 246 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__Cast_HeadVar2_4 = mdbcomp__goal_path__HeadVar__2_2;

#line 246 "mdbcomp.goal_path.m"
    {
#line 246 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mercury__builtin__unify_2_p_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[0], ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar1_3)), ((MR_Box) (mdbcomp__goal_path__Cast_HeadVar2_4)));
    }
#line 246 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 246 "mdbcomp.goal_path.m"
  }
#line 246 "mdbcomp.goal_path.m"
}

#line 235 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path____Compare____containing_goal_0_0(
#line 235 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__1_1,
#line 235 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 235 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3)
#line 235 "mdbcomp.goal_path.m"
{
#line 235 "mdbcomp.goal_path.m"
  {
#line 235 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 235 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_13 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 235 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_14 = (MR_Integer) mdbcomp__goal_path__HeadVar__3_3;

#line 235 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_13 == mdbcomp__goal_path__CastY_14);
#line 235 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 5292 "mdbcomp.goal_path.c"
      *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 235 "mdbcomp.goal_path.m"
    else
#line 235 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 235 "mdbcomp.goal_path.m"
      if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 235 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 0;
#line 235 "mdbcomp.goal_path.m"
      else
#line 5304 "mdbcomp.goal_path.c"
        *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 1;
#line 235 "mdbcomp.goal_path.m"
    else
#line 235 "mdbcomp.goal_path.m"
      {
#line 235 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 235 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));

#line 235 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 5317 "mdbcomp.goal_path.c"
          *mdbcomp__goal_path__HeadVar__1_1 = (MR_Integer) 2;
#line 235 "mdbcomp.goal_path.m"
        else
#line 235 "mdbcomp.goal_path.m"
          {
#line 235 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 0)));
#line 235 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, (MR_Integer) 1)));
#line 235 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_12_12;
#line 235 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__V_19_19 = (MR_Integer) mdbcomp__goal_path__V_18_18;
#line 235 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__V_20_20 = (MR_Integer) mdbcomp__goal_path__V_10_10;

#line 235 "mdbcomp.goal_path.m"
            {
#line 235 "mdbcomp.goal_path.m"
              mercury__private_builtin__builtin_compare_int_3_p_0(&mdbcomp__goal_path__V_12_12, mdbcomp__goal_path__V_19_19, mdbcomp__goal_path__V_20_20);
            }
#line 5339 "mdbcomp.goal_path.c"
            mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_12_12 == (MR_Integer) 0);
#line 235 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = !(mdbcomp__goal_path__succeeded);
#line 235 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 235 "mdbcomp.goal_path.m"
              *mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__V_12_12;
#line 235 "mdbcomp.goal_path.m"
            else
#line 235 "mdbcomp.goal_path.m"
              {
#line 235 "mdbcomp.goal_path.m"
                mdbcomp__goal_path____Compare____goal_path_step_0_0(mdbcomp__goal_path__HeadVar__1_1, mdbcomp__goal_path__V_17_17, mdbcomp__goal_path__V_11_11);
              }
#line 235 "mdbcomp.goal_path.m"
          }
#line 235 "mdbcomp.goal_path.m"
      }
#line 235 "mdbcomp.goal_path.m"
  }
#line 235 "mdbcomp.goal_path.m"
}

#line 235 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path____Unify____containing_goal_0_0(
#line 235 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 235 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 235 "mdbcomp.goal_path.m"
{
#line 235 "mdbcomp.goal_path.m"
  {
#line 235 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 235 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastX_9 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 235 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__CastY_10 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 235 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastX_9 == mdbcomp__goal_path__CastY_10);
#line 235 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 235 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = MR_TRUE;
#line 235 "mdbcomp.goal_path.m"
    else
#line 235 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 235 "mdbcomp.goal_path.m"
      {
#line 235 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__CastX_3 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 235 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__CastY_4 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;

#line 235 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__CastY_4 == mdbcomp__goal_path__CastX_3);
#line 235 "mdbcomp.goal_path.m"
      }
#line 235 "mdbcomp.goal_path.m"
    else
#line 235 "mdbcomp.goal_path.m"
      {
#line 235 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 235 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 235 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__V_7_7;
#line 235 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__V_8_8;
#line 62 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__CastX_13;
#line 62 "mdbcomp.goal_path.m"
        MR_Integer mdbcomp__goal_path__CastY_14;

#line 235 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 235 "mdbcomp.goal_path.m"
        if (mdbcomp__goal_path__succeeded)
#line 235 "mdbcomp.goal_path.m"
          {
#line 235 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 235 "mdbcomp.goal_path.m"
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

#line 5448 "mdbcomp.goal_path.c"
                mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_11_11 == mdbcomp__goal_path__V_12_12);
#line 62 "mdbcomp.goal_path.m"
              }
#line 235 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 5454 "mdbcomp.goal_path.c"
              {
#line 5456 "mdbcomp.goal_path.c"
                mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__V_6_6, mdbcomp__goal_path__V_8_8);
              }
#line 235 "mdbcomp.goal_path.m"
          }
#line 235 "mdbcomp.goal_path.m"
      }
#line 235 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 235 "mdbcomp.goal_path.m"
  }
#line 235 "mdbcomp.goal_path.m"
}

#line 641 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(
#line 641 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 641 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2,
#line 641 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_3)
#line 641 "mdbcomp.goal_path.m"
{
#line 646 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 646 "mdbcomp.goal_path.m"
    {
#line 646 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 646 "mdbcomp.goal_path.m"
      {
#line 646 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 646 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 646 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_3 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2;
#line 646 "mdbcomp.goal_path.m"
        else
#line 647 "mdbcomp.goal_path.m"
          {
#line 647 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 647 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 647 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 0)));
#line 647 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__ContainingGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 1)));
#line 647 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalReversePath_12;
#line 647 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_18_18;

#line 652 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__ContainingGoal_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 651 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 652 "mdbcomp.goal_path.m"
            else
#line 653 "mdbcomp.goal_path.m"
              {
#line 653 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 0)));
#line 653 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__Step_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 1)));
#line 653 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalReversePath_15;
#line 654 "mdbcomp.goal_path.m"
                MR_Box mdbcomp__goal_path__conv0_ContainingGoalReversePath_15;

#line 654 "mdbcomp.goal_path.m"
                {
#line 654 "mdbcomp.goal_path.m"
                  mercury__bimap__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2, ((MR_Box) (mdbcomp__goal_path__ContainingGoalId_13)), &mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
                }
#line 654 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__ContainingGoalReversePath_15 = ((MR_Word) mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
#line 656 "mdbcomp.goal_path.m"
                {
#line 656 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 656 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 0) = ((MR_Box) (mdbcomp__goal_path__ContainingGoalReversePath_15));
#line 656 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 1) = ((MR_Box) (mdbcomp__goal_path__Step_14));
#line 656 "mdbcomp.goal_path.m"
                }
#line 653 "mdbcomp.goal_path.m"
              }
#line 658 "mdbcomp.goal_path.m"
            {
#line 658 "mdbcomp.goal_path.m"
              mercury__bimap__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, ((MR_Box) (mdbcomp__goal_path__GoalId_10)), ((MR_Box) (mdbcomp__goal_path__GoalReversePath_12)), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2, &mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_18_18);
            }
#line 659 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 659 "mdbcomp.goal_path.m"
            {
#line 659 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__Tail_8;
#line 659 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_18_18;

#line 659 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathBiMap_0__tmp_copy_2;
#line 659 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 659 "mdbcomp.goal_path.m"
            }
#line 659 "mdbcomp.goal_path.m"
            continue;
#line 647 "mdbcomp.goal_path.m"
          }
#line 646 "mdbcomp.goal_path.m"
      }
#line 646 "mdbcomp.goal_path.m"
      break;
#line 646 "mdbcomp.goal_path.m"
    }
#line 641 "mdbcomp.goal_path.m"
}

#line 616 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(
#line 616 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 616 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2,
#line 616 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_3)
#line 616 "mdbcomp.goal_path.m"
{
#line 621 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 621 "mdbcomp.goal_path.m"
    {
#line 621 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 621 "mdbcomp.goal_path.m"
      {
#line 621 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 621 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 621 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_3 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2;
#line 621 "mdbcomp.goal_path.m"
        else
#line 622 "mdbcomp.goal_path.m"
          {
#line 622 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Head_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 622 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__Tail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 622 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalId_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 0)));
#line 622 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__ContainingGoal_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__Head_7, (MR_Integer) 1)));
#line 622 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalReversePath_12;
#line 622 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_18_18;

#line 627 "mdbcomp.goal_path.m"
            if ((mdbcomp__goal_path__ContainingGoal_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 626 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 627 "mdbcomp.goal_path.m"
            else
#line 628 "mdbcomp.goal_path.m"
              {
#line 628 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalId_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 0)));
#line 628 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__Step_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_11, (MR_Integer) 1)));
#line 628 "mdbcomp.goal_path.m"
                MR_Word mdbcomp__goal_path__ContainingGoalReversePath_15;
#line 629 "mdbcomp.goal_path.m"
                MR_Box mdbcomp__goal_path__conv0_ContainingGoalReversePath_15;

#line 629 "mdbcomp.goal_path.m"
                {
#line 629 "mdbcomp.goal_path.m"
                  mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2, ((MR_Box) (mdbcomp__goal_path__ContainingGoalId_13)), &mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
                }
#line 629 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__ContainingGoalReversePath_15 = ((MR_Word) mdbcomp__goal_path__conv0_ContainingGoalReversePath_15);
#line 631 "mdbcomp.goal_path.m"
                {
#line 631 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__GoalReversePath_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 631 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 0) = ((MR_Box) (mdbcomp__goal_path__ContainingGoalReversePath_15));
#line 631 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalReversePath_12, 1) = ((MR_Box) (mdbcomp__goal_path__Step_14));
#line 631 "mdbcomp.goal_path.m"
                }
#line 628 "mdbcomp.goal_path.m"
              }
#line 633 "mdbcomp.goal_path.m"
            {
#line 633 "mdbcomp.goal_path.m"
              mercury__map__det_insert_4_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, ((MR_Box) (mdbcomp__goal_path__GoalId_10)), ((MR_Box) (mdbcomp__goal_path__GoalReversePath_12)), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2, &mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_18_18);
            }
#line 634 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 634 "mdbcomp.goal_path.m"
            {
#line 634 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__Tail_8;
#line 634 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_18_18;

#line 634 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPathMap_0__tmp_copy_2;
#line 634 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 634 "mdbcomp.goal_path.m"
            }
#line 634 "mdbcomp.goal_path.m"
            continue;
#line 622 "mdbcomp.goal_path.m"
          }
#line 621 "mdbcomp.goal_path.m"
      }
#line 621 "mdbcomp.goal_path.m"
      break;
#line 621 "mdbcomp.goal_path.m"
    }
#line 616 "mdbcomp.goal_path.m"
}

#line 603 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(
#line 603 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 603 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2,
#line 603 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_3)
#line 603 "mdbcomp.goal_path.m"
{
#line 606 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 606 "mdbcomp.goal_path.m"
    {
#line 606 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 606 "mdbcomp.goal_path.m"
      {
#line 606 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 606 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 606 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_3 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2;
#line 606 "mdbcomp.goal_path.m"
        else
#line 607 "mdbcomp.goal_path.m"
          {
#line 607 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__FirstStep_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 607 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__LaterSteps_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 607 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12;

#line 608 "mdbcomp.goal_path.m"
            {
#line 608 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 608 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12, 0) = ((MR_Box) (mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2));
#line 608 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12, 1) = ((MR_Box) (mdbcomp__goal_path__FirstStep_7));
#line 608 "mdbcomp.goal_path.m"
            }
#line 609 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 609 "mdbcomp.goal_path.m"
            {
#line 609 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__LaterSteps_8;
#line 609 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_12_12;

#line 609 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ReverseGoalPath_0__tmp_copy_2;
#line 609 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 609 "mdbcomp.goal_path.m"
            }
#line 609 "mdbcomp.goal_path.m"
            continue;
#line 607 "mdbcomp.goal_path.m"
          }
#line 606 "mdbcomp.goal_path.m"
      }
#line 606 "mdbcomp.goal_path.m"
      break;
#line 606 "mdbcomp.goal_path.m"
    }
#line 603 "mdbcomp.goal_path.m"
}

#line 592 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(
#line 592 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 592 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2,
#line 592 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_3)
#line 592 "mdbcomp.goal_path.m"
{
#line 595 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 595 "mdbcomp.goal_path.m"
    {
#line 595 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 595 "mdbcomp.goal_path.m"
      {
#line 595 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 595 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 595 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_3 = mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2;
#line 595 "mdbcomp.goal_path.m"
        else
#line 596 "mdbcomp.goal_path.m"
          {
#line 596 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__EarlierSteps_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 596 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__LastStep_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 596 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12;

#line 597 "mdbcomp.goal_path.m"
            {
#line 597 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 597 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12, 0) = ((MR_Box) (mdbcomp__goal_path__LastStep_8));
#line 597 "mdbcomp.goal_path.m"
              MR_hl_field(MR_mktag(1), mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12, 1) = ((MR_Box) (mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2));
#line 597 "mdbcomp.goal_path.m"
            }
#line 598 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 598 "mdbcomp.goal_path.m"
            {
#line 598 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__EarlierSteps_7;
#line 598 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0__tmp_copy_2 = mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_12_12;

#line 598 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0_2 = mdbcomp__goal_path__STATE_VARIABLE_ForwardGoalPath_0__tmp_copy_2;
#line 598 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 598 "mdbcomp.goal_path.m"
            }
#line 598 "mdbcomp.goal_path.m"
            continue;
#line 596 "mdbcomp.goal_path.m"
          }
#line 595 "mdbcomp.goal_path.m"
      }
#line 595 "mdbcomp.goal_path.m"
      break;
#line 595 "mdbcomp.goal_path.m"
    }
#line 592 "mdbcomp.goal_path.m"
}

#line 504 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(
#line 504 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1)
#line 504 "mdbcomp.goal_path.m"
{
#line 506 "mdbcomp.goal_path.m"
  {
#line 506 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 506 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__2_2;

#line 506 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 506 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 506 "mdbcomp.goal_path.m"
    else
#line 507 "mdbcomp.goal_path.m"
      {
#line 507 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 507 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Step_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 507 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_5;
#line 507 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_6;

#line 513 "mdbcomp.goal_path.m"
#line 513 "mdbcomp.goal_path.m"
        switch (MR_tag((MR_Word) mdbcomp__goal_path__Step_4)) {
#line 513 "mdbcomp.goal_path.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 513 "mdbcomp.goal_path.m"
          case (MR_Integer) 0:
#line 513 "mdbcomp.goal_path.m"
#line 513 "mdbcomp.goal_path.m"
            switch (MR_unmkbody(mdbcomp__goal_path__Step_4)) {
#line 513 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 519 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "\?;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 520 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "t;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 521 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "e;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 3:
#line 522 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "~;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 4:
#line 526 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "=;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 5:
#line 525 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "r;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 6:
#line 527 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "a;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
            }
#line 513 "mdbcomp.goal_path.m"
            break;
#line 513 "mdbcomp.goal_path.m"
          case (MR_Integer) 1:
#line 513 "mdbcomp.goal_path.m"
            {
#line 513 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__Step_4, (MR_Integer) 0)));
#line 513 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_9_9;
#line 513 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_10_10;

#line 513 "mdbcomp.goal_path.m"
              {
#line 513 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_10_10 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_7);
              }
#line 513 "mdbcomp.goal_path.m"
              {
#line 513 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_9_9 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_10_10, (MR_String) ";");
              }
#line 513 "mdbcomp.goal_path.m"
              {
#line 513 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "c", mdbcomp__goal_path__V_9_9);
              }
#line 513 "mdbcomp.goal_path.m"
            }
#line 513 "mdbcomp.goal_path.m"
            break;
#line 513 "mdbcomp.goal_path.m"
          case (MR_Integer) 2:
#line 514 "mdbcomp.goal_path.m"
            {
#line 514 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__Step_4, (MR_Integer) 0)));
#line 514 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_14_14;
#line 514 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_15_15;

#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_15_15 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_12);
              }
#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_14_14 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_15_15, (MR_String) ";");
              }
#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "d", mdbcomp__goal_path__V_14_14);
              }
#line 514 "mdbcomp.goal_path.m"
            }
#line 513 "mdbcomp.goal_path.m"
            break;
#line 513 "mdbcomp.goal_path.m"
          case (MR_Integer) 3:
#line 513 "mdbcomp.goal_path.m"
#line 513 "mdbcomp.goal_path.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 0)))) {
#line 513 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 513 "mdbcomp.goal_path.m"
                {
#line 513 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 2)));
#line 513 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 1)));

#line 513 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "mdbcomp.goal_path.m"
                    {
#line 517 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_31_31;
#line 517 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_32_32;

#line 518 "mdbcomp.goal_path.m"
                      {
#line 518 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_32_32 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                      }
#line 518 "mdbcomp.goal_path.m"
                      {
#line 518 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_31_31 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_32_32, (MR_String) "-na;");
                      }
#line 518 "mdbcomp.goal_path.m"
                      {
#line 518 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_31_31);
                      }
#line 517 "mdbcomp.goal_path.m"
                    }
#line 513 "mdbcomp.goal_path.m"
                  else
#line 515 "mdbcomp.goal_path.m"
                    {
#line 515 "mdbcomp.goal_path.m"
                      MR_Integer mdbcomp__goal_path__M_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_42_42, (MR_Integer) 0)));
#line 515 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_21_21;
#line 515 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_22_22;
#line 515 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_23_23;
#line 515 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_25_25;
#line 515 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_26_26;

#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_22_22 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                      }
#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_26_26 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__M_18);
                      }
#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_26_26, (MR_String) ";");
                      }
#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "-", mdbcomp__goal_path__V_25_25);
                      }
#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_21_21 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_22_22, mdbcomp__goal_path__V_23_23);
                      }
#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_21_21);
                      }
#line 515 "mdbcomp.goal_path.m"
                    }
#line 513 "mdbcomp.goal_path.m"
                }
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 513 "mdbcomp.goal_path.m"
                {
#line 513 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 1)));

#line 513 "mdbcomp.goal_path.m"
#line 513 "mdbcomp.goal_path.m"
                  switch (mdbcomp__goal_path__V_41_41) {
#line 513 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 513 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 523 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__Str_5 = (MR_String) "q!;";
#line 513 "mdbcomp.goal_path.m"
                      break;
#line 513 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 524 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__Str_5 = (MR_String) "q;";
#line 513 "mdbcomp.goal_path.m"
                      break;
#line 513 "mdbcomp.goal_path.m"
                  }
#line 513 "mdbcomp.goal_path.m"
                }
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 528 "mdbcomp.goal_path.m"
                {
#line 528 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__N_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_4, (MR_Integer) 1)));
#line 528 "mdbcomp.goal_path.m"
                  MR_String mdbcomp__goal_path__V_38_38;
#line 528 "mdbcomp.goal_path.m"
                  MR_String mdbcomp__goal_path__V_39_39;

#line 529 "mdbcomp.goal_path.m"
                  {
#line 529 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__V_39_39 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_36);
                  }
#line 529 "mdbcomp.goal_path.m"
                  {
#line 529 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__V_38_38 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_39_39, (MR_String) ";");
                  }
#line 529 "mdbcomp.goal_path.m"
                  {
#line 529 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "o", mdbcomp__goal_path__V_38_38);
                  }
#line 528 "mdbcomp.goal_path.m"
                }
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
            }
#line 513 "mdbcomp.goal_path.m"
            break;
#line 513 "mdbcomp.goal_path.m"
        }
#line 509 "mdbcomp.goal_path.m"
        {
#line 509 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__Strs_6 = mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(mdbcomp__goal_path__Steps_3);
        }
#line 507 "mdbcomp.goal_path.m"
        {
#line 507 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 507 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, 0) = ((MR_Box) (mdbcomp__goal_path__Str_5));
#line 507 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, 1) = ((MR_Box) (mdbcomp__goal_path__Strs_6));
#line 507 "mdbcomp.goal_path.m"
        }
#line 507 "mdbcomp.goal_path.m"
      }
#line 506 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__2_2;
#line 506 "mdbcomp.goal_path.m"
  }
#line 504 "mdbcomp.goal_path.m"
}

#line 492 "mdbcomp.goal_path.m"
static MR_Word MR_CALL 
mdbcomp__goal_path__goal_path_to_strings_1_f_0(
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
        MR_Word mdbcomp__goal_path__Step_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 495 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 495 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_5;
#line 495 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_6;

#line 513 "mdbcomp.goal_path.m"
#line 513 "mdbcomp.goal_path.m"
        switch (MR_tag((MR_Word) mdbcomp__goal_path__Step_3)) {
#line 513 "mdbcomp.goal_path.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 513 "mdbcomp.goal_path.m"
          case (MR_Integer) 0:
#line 513 "mdbcomp.goal_path.m"
#line 513 "mdbcomp.goal_path.m"
            switch (MR_unmkbody(mdbcomp__goal_path__Step_3)) {
#line 513 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 519 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "\?;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 520 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "t;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 521 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "e;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 3:
#line 522 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "~;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 4:
#line 526 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "=;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 5:
#line 525 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "r;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 6:
#line 527 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = (MR_String) "a;";
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
            }
#line 513 "mdbcomp.goal_path.m"
            break;
#line 513 "mdbcomp.goal_path.m"
          case (MR_Integer) 1:
#line 513 "mdbcomp.goal_path.m"
            {
#line 513 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__Step_3, (MR_Integer) 0)));
#line 513 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_9_9;
#line 513 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_10_10;

#line 513 "mdbcomp.goal_path.m"
              {
#line 513 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_10_10 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_7);
              }
#line 513 "mdbcomp.goal_path.m"
              {
#line 513 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_9_9 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_10_10, (MR_String) ";");
              }
#line 513 "mdbcomp.goal_path.m"
              {
#line 513 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "c", mdbcomp__goal_path__V_9_9);
              }
#line 513 "mdbcomp.goal_path.m"
            }
#line 513 "mdbcomp.goal_path.m"
            break;
#line 513 "mdbcomp.goal_path.m"
          case (MR_Integer) 2:
#line 514 "mdbcomp.goal_path.m"
            {
#line 514 "mdbcomp.goal_path.m"
              MR_Integer mdbcomp__goal_path__N_12 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mdbcomp__goal_path__Step_3, (MR_Integer) 0)));
#line 514 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_14_14;
#line 514 "mdbcomp.goal_path.m"
              MR_String mdbcomp__goal_path__V_15_15;

#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_15_15 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_12);
              }
#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_14_14 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_15_15, (MR_String) ";");
              }
#line 514 "mdbcomp.goal_path.m"
              {
#line 514 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "d", mdbcomp__goal_path__V_14_14);
              }
#line 514 "mdbcomp.goal_path.m"
            }
#line 513 "mdbcomp.goal_path.m"
            break;
#line 513 "mdbcomp.goal_path.m"
          case (MR_Integer) 3:
#line 513 "mdbcomp.goal_path.m"
#line 513 "mdbcomp.goal_path.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 0)))) {
#line 513 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 513 "mdbcomp.goal_path.m"
                {
#line 513 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_42_42 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 2)));
#line 513 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__V_43_43 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 1)));

#line 513 "mdbcomp.goal_path.m"
                  if ((mdbcomp__goal_path__V_42_42 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 517 "mdbcomp.goal_path.m"
                    {
#line 517 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_31_31;
#line 517 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_32_32;

#line 518 "mdbcomp.goal_path.m"
                      {
#line 518 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_32_32 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                      }
#line 518 "mdbcomp.goal_path.m"
                      {
#line 518 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_31_31 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_32_32, (MR_String) "-na;");
                      }
#line 518 "mdbcomp.goal_path.m"
                      {
#line 518 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_31_31);
                      }
#line 517 "mdbcomp.goal_path.m"
                    }
#line 513 "mdbcomp.goal_path.m"
                  else
#line 515 "mdbcomp.goal_path.m"
                    {
#line 515 "mdbcomp.goal_path.m"
                      MR_Integer mdbcomp__goal_path__M_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_42_42, (MR_Integer) 0)));
#line 515 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_21_21;
#line 515 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_22_22;
#line 515 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_23_23;
#line 515 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_25_25;
#line 515 "mdbcomp.goal_path.m"
                      MR_String mdbcomp__goal_path__V_26_26;

#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_22_22 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__V_43_43);
                      }
#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_26_26 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__M_18);
                      }
#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_25_25 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_26_26, (MR_String) ";");
                      }
#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_23_23 = mercury__string__f_43_43_2_f_0((MR_String) "-", mdbcomp__goal_path__V_25_25);
                      }
#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__V_21_21 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_22_22, mdbcomp__goal_path__V_23_23);
                      }
#line 516 "mdbcomp.goal_path.m"
                      {
#line 516 "mdbcomp.goal_path.m"
                        mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "s", mdbcomp__goal_path__V_21_21);
                      }
#line 515 "mdbcomp.goal_path.m"
                    }
#line 513 "mdbcomp.goal_path.m"
                }
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 513 "mdbcomp.goal_path.m"
                {
#line 513 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_41_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 1)));

#line 513 "mdbcomp.goal_path.m"
#line 513 "mdbcomp.goal_path.m"
                  switch (mdbcomp__goal_path__V_41_41) {
#line 513 "mdbcomp.goal_path.m"
                    default: /*NOTREACHED*/ MR_assert(0);
#line 513 "mdbcomp.goal_path.m"
                    case (MR_Integer) 0:
#line 523 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__Str_5 = (MR_String) "q!;";
#line 513 "mdbcomp.goal_path.m"
                      break;
#line 513 "mdbcomp.goal_path.m"
                    case (MR_Integer) 1:
#line 524 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__Str_5 = (MR_String) "q;";
#line 513 "mdbcomp.goal_path.m"
                      break;
#line 513 "mdbcomp.goal_path.m"
                  }
#line 513 "mdbcomp.goal_path.m"
                }
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 528 "mdbcomp.goal_path.m"
                {
#line 528 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__N_36 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_3, (MR_Integer) 1)));
#line 528 "mdbcomp.goal_path.m"
                  MR_String mdbcomp__goal_path__V_38_38;
#line 528 "mdbcomp.goal_path.m"
                  MR_String mdbcomp__goal_path__V_39_39;

#line 529 "mdbcomp.goal_path.m"
                  {
#line 529 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__V_39_39 = mercury__string__int_to_string_1_f_0(mdbcomp__goal_path__N_36);
                  }
#line 529 "mdbcomp.goal_path.m"
                  {
#line 529 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__V_38_38 = mercury__string__f_43_43_2_f_0(mdbcomp__goal_path__V_39_39, (MR_String) ";");
                  }
#line 529 "mdbcomp.goal_path.m"
                  {
#line 529 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__Str_5 = mercury__string__f_43_43_2_f_0((MR_String) "o", mdbcomp__goal_path__V_38_38);
                  }
#line 528 "mdbcomp.goal_path.m"
                }
#line 513 "mdbcomp.goal_path.m"
                break;
#line 513 "mdbcomp.goal_path.m"
            }
#line 513 "mdbcomp.goal_path.m"
            break;
#line 513 "mdbcomp.goal_path.m"
        }
#line 497 "mdbcomp.goal_path.m"
        {
#line 497 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__Strs_6 = mdbcomp__goal_path__goal_path_to_strings_1_f_0(mdbcomp__goal_path__Steps_4);
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

#line 438 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(
#line 438 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 438 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2)
#line 438 "mdbcomp.goal_path.m"
{
#line 441 "mdbcomp.goal_path.m"
  {
#line 441 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 441 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 441 "mdbcomp.goal_path.m"
      {
#line 441 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 441 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 441 "mdbcomp.goal_path.m"
      }
#line 441 "mdbcomp.goal_path.m"
    else
#line 442 "mdbcomp.goal_path.m"
      {
#line 442 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 442 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 442 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__HeadSteps_5;
#line 442 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TailStep_6;

#line 443 "mdbcomp.goal_path.m"
        {
#line 443 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(mdbcomp__goal_path__Strs_4, &mdbcomp__goal_path__HeadSteps_5);
        }
#line 442 "mdbcomp.goal_path.m"
        if (mdbcomp__goal_path__succeeded)
#line 442 "mdbcomp.goal_path.m"
          {
#line 444 "mdbcomp.goal_path.m"
            {
#line 444 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_step_from_string_2_p_0(mdbcomp__goal_path__Str_3, &mdbcomp__goal_path__TailStep_6);
            }
#line 442 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 442 "mdbcomp.goal_path.m"
              {
#line 442 "mdbcomp.goal_path.m"
                {
#line 442 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 442 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 442 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__HeadVar__2_2 = base;
#line 442 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__HeadSteps_5));
#line 442 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__TailStep_6));
#line 442 "mdbcomp.goal_path.m"
                }
#line 442 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 442 "mdbcomp.goal_path.m"
              }
#line 442 "mdbcomp.goal_path.m"
          }
#line 442 "mdbcomp.goal_path.m"
      }
#line 441 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 441 "mdbcomp.goal_path.m"
  }
#line 438 "mdbcomp.goal_path.m"
}

#line 418 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_strings_2_p_0(
#line 418 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 418 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2)
#line 418 "mdbcomp.goal_path.m"
{
#line 421 "mdbcomp.goal_path.m"
  {
#line 421 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 421 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 421 "mdbcomp.goal_path.m"
      {
#line 421 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 421 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 421 "mdbcomp.goal_path.m"
      }
#line 421 "mdbcomp.goal_path.m"
    else
#line 422 "mdbcomp.goal_path.m"
      {
#line 422 "mdbcomp.goal_path.m"
        MR_String mdbcomp__goal_path__Str_3 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 422 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Strs_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 422 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__HeadStep_5;
#line 422 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__LaterSteps_6;

#line 423 "mdbcomp.goal_path.m"
        {
#line 423 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_step_from_string_2_p_0(mdbcomp__goal_path__Str_3, &mdbcomp__goal_path__HeadStep_5);
        }
#line 422 "mdbcomp.goal_path.m"
        if (mdbcomp__goal_path__succeeded)
#line 422 "mdbcomp.goal_path.m"
          {
#line 424 "mdbcomp.goal_path.m"
            {
#line 424 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(mdbcomp__goal_path__Strs_4, &mdbcomp__goal_path__LaterSteps_6);
            }
#line 422 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 422 "mdbcomp.goal_path.m"
              {
#line 422 "mdbcomp.goal_path.m"
                {
#line 422 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 422 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 422 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__HeadVar__2_2 = base;
#line 422 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__HeadStep_5));
#line 422 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__LaterSteps_6));
#line 422 "mdbcomp.goal_path.m"
                }
#line 422 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 422 "mdbcomp.goal_path.m"
              }
#line 422 "mdbcomp.goal_path.m"
          }
#line 422 "mdbcomp.goal_path.m"
      }
#line 421 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 421 "mdbcomp.goal_path.m"
  }
#line 418 "mdbcomp.goal_path.m"
}

#line 376 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_last_loop_3_p_0(
#line 376 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 376 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 376 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3)
#line 376 "mdbcomp.goal_path.m"
{
#line 379 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 379 "mdbcomp.goal_path.m"
    {
#line 379 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 379 "mdbcomp.goal_path.m"
      {
#line 379 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 379 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 379 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__3_3 = mdbcomp__goal_path__HeadVar__1_1;
#line 379 "mdbcomp.goal_path.m"
        else
#line 380 "mdbcomp.goal_path.m"
          {
#line 380 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__TailHead_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 380 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__TailTail_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));

#line 381 "mdbcomp.goal_path.m"
            /* direct tailcall eliminated */
#line 381 "mdbcomp.goal_path.m"
            {
#line 381 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__TailHead_6;
#line 381 "mdbcomp.goal_path.m"
              MR_Word mdbcomp__goal_path__HeadVar__2__tmp_copy_2 = mdbcomp__goal_path__TailTail_7;

#line 381 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__2_2 = mdbcomp__goal_path__HeadVar__2__tmp_copy_2;
#line 381 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 381 "mdbcomp.goal_path.m"
            }
#line 381 "mdbcomp.goal_path.m"
            continue;
#line 380 "mdbcomp.goal_path.m"
          }
#line 379 "mdbcomp.goal_path.m"
      }
#line 379 "mdbcomp.goal_path.m"
      break;
#line 379 "mdbcomp.goal_path.m"
    }
#line 376 "mdbcomp.goal_path.m"
}

#line 363 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(
#line 363 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__Head_1,
#line 363 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 363 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3,
#line 363 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__4_4)
#line 363 "mdbcomp.goal_path.m"
{
#line 366 "mdbcomp.goal_path.m"
  {
#line 366 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 366 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 366 "mdbcomp.goal_path.m"
      {
#line 366 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__HeadVar__4_4 = mdbcomp__goal_path__Head_1;
#line 366 "mdbcomp.goal_path.m"
      }
#line 366 "mdbcomp.goal_path.m"
    else
#line 368 "mdbcomp.goal_path.m"
      {
#line 368 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TailHead_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 368 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__TailTail_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 368 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__AllButLastGoalPath0_11;

#line 369 "mdbcomp.goal_path.m"
        {
#line 369 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(mdbcomp__goal_path__TailHead_7, mdbcomp__goal_path__TailTail_8, &mdbcomp__goal_path__AllButLastGoalPath0_11, mdbcomp__goal_path__HeadVar__4_4);
        }
#line 371 "mdbcomp.goal_path.m"
        {
#line 371 "mdbcomp.goal_path.m"
          MR_Word base;
#line 371 "mdbcomp.goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 371 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__3_3 = base;
#line 371 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__Head_1));
#line 371 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__AllButLastGoalPath0_11));
#line 371 "mdbcomp.goal_path.m"
        }
#line 368 "mdbcomp.goal_path.m"
      }
#line 366 "mdbcomp.goal_path.m"
  }
#line 363 "mdbcomp.goal_path.m"
}

#line 326 "mdbcomp.goal_path.m"
MR_Box MR_CALL 
mdbcomp__goal_path__get_goal_attribute_det_2_f_0(
#line 326 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_11,
#line 326 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 326 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2)
#line 326 "mdbcomp.goal_path.m"
{
#line 673 "mdbcomp.goal_path.m"
  {
#line 673 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 673 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__Attr_6;
#line 673 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_13_13;
#line 673 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__Array_4 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__1_1;
#line 673 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__Index_5 = (MR_Integer) mdbcomp__goal_path__HeadVar__2_2;
#line 673 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__MaybeAttr_7;
#line 674 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__conv0_MaybeAttr_7;

#line 6836 "mdbcomp.goal_path.c"
    {
#line 6838 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6840 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_13_13, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6842 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_13_13, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_11));
#line 6844 "mdbcomp.goal_path.c"
    }
#line 674 "mdbcomp.goal_path.m"
    {
#line 674 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__conv0_MaybeAttr_7 = mercury__array__lookup_2_f_0(mdbcomp__goal_path__TypeInfo_13_13, (MR_ArrayPtr) mdbcomp__goal_path__Array_4, mdbcomp__goal_path__Index_5);
    }
#line 674 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__MaybeAttr_7 = ((MR_Word) mdbcomp__goal_path__conv0_MaybeAttr_7);
#line 677 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__MaybeAttr_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 678 "mdbcomp.goal_path.m"
      {
#line 679 "mdbcomp.goal_path.m"
        {
#line 679 "mdbcomp.goal_path.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.goal_path", (MR_String) "function \140mdbcomp.goal_path.get_goal_attribute_det\'/2", (MR_String) "Goal attribute array slot empty");
        }
#line 678 "mdbcomp.goal_path.m"
      }
#line 677 "mdbcomp.goal_path.m"
    else
#line 676 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__Attr_6 = (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__MaybeAttr_7, (MR_Integer) 0));
#line 673 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__Attr_6;
#line 673 "mdbcomp.goal_path.m"
  }
#line 326 "mdbcomp.goal_path.m"
}

#line 319 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__update_goal_attribute_4_p_0(
#line 319 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_12,
#line 319 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 319 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__Value_6,
#line 319 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__3_3,
#line 319 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__4_4)
#line 319 "mdbcomp.goal_path.m"
{
#line 670 "mdbcomp.goal_path.m"
  {
#line 670 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 670 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_14_14;
#line 670 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__Index_5 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 670 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__STATE_VARIABLE_Array_0_8 = (MR_ArrayPtr) mdbcomp__goal_path__HeadVar__3_3;
#line 670 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__STATE_VARIABLE_Array_9;
#line 670 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_10_10;
#line 671 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__conv0_STATE_VARIABLE_Array_9;

#line 671 "mdbcomp.goal_path.m"
    {
#line 671 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 671 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_10_10, 0) = mdbcomp__goal_path__Value_6;
#line 671 "mdbcomp.goal_path.m"
    }
#line 6915 "mdbcomp.goal_path.c"
    {
#line 6917 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6919 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_14_14, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6921 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_14_14, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_12));
#line 6923 "mdbcomp.goal_path.c"
    }
#line 671 "mdbcomp.goal_path.m"
    {
#line 671 "mdbcomp.goal_path.m"
      mercury__array__set_4_p_0(mdbcomp__goal_path__TypeInfo_14_14, mdbcomp__goal_path__Index_5, ((MR_Box) (mdbcomp__goal_path__V_10_10)), (MR_ArrayPtr) mdbcomp__goal_path__STATE_VARIABLE_Array_0_8, &mdbcomp__goal_path__conv0_STATE_VARIABLE_Array_9);
    }
#line 671 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__STATE_VARIABLE_Array_9 = (MR_ArrayPtr) mdbcomp__goal_path__conv0_STATE_VARIABLE_Array_9;
#line 670 "mdbcomp.goal_path.m"
    *mdbcomp__goal_path__HeadVar__4_4 = (MR_Word) mdbcomp__goal_path__STATE_VARIABLE_Array_9;
#line 670 "mdbcomp.goal_path.m"
  }
#line 319 "mdbcomp.goal_path.m"
}

#line 313 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__create_goal_id_array_2_f_0(
#line 313 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_10,
#line 313 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 313 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__Default_5)
#line 313 "mdbcomp.goal_path.m"
{
#line 666 "mdbcomp.goal_path.m"
  {
#line 666 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 666 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__3_3;
#line 666 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_12_12;
#line 666 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__LastGoalIdNum_4 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 666 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__V_6_6;
#line 666 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__V_7_7;
#line 666 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_9_9;
#line 667 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__conv0_V_6_6;

#line 6969 "mdbcomp.goal_path.c"
    {
#line 6971 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 6973 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_12_12, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 6975 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_12_12, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_10));
#line 6977 "mdbcomp.goal_path.c"
    }
#line 667 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_7_7 = (mdbcomp__goal_path__LastGoalIdNum_4 + (MR_Integer) 1);
#line 667 "mdbcomp.goal_path.m"
    {
#line 667 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 667 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_9_9, 0) = mdbcomp__goal_path__Default_5;
#line 667 "mdbcomp.goal_path.m"
    }
#line 667 "mdbcomp.goal_path.m"
    {
#line 667 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__conv0_V_6_6 = mercury__array__init_2_f_0(mdbcomp__goal_path__TypeInfo_12_12, mdbcomp__goal_path__V_7_7, ((MR_Box) (mdbcomp__goal_path__V_9_9)));
    }
#line 667 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_6_6 = (MR_ArrayPtr) mdbcomp__goal_path__conv0_V_6_6;
#line 667 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) mdbcomp__goal_path__V_6_6;
#line 666 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__3_3;
#line 666 "mdbcomp.goal_path.m"
  }
#line 313 "mdbcomp.goal_path.m"
}

#line 306 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__create_goal_id_array_1_f_0(
#line 306 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__TypeInfo_for_T_8,
#line 306 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1)
#line 306 "mdbcomp.goal_path.m"
{
#line 663 "mdbcomp.goal_path.m"
  {
#line 663 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 663 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__2_2;
#line 663 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeInfo_10_10;
#line 663 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__LastGoalIdNum_3 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;
#line 663 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__V_4_4;
#line 663 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__V_5_5;
#line 664 "mdbcomp.goal_path.m"
    MR_ArrayPtr mdbcomp__goal_path__conv0_V_4_4;

#line 7031 "mdbcomp.goal_path.c"
    {
#line 7033 "mdbcomp.goal_path.c"
      mdbcomp__goal_path__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 7035 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 0) = ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1));
#line 7037 "mdbcomp.goal_path.c"
      MR_hl_field(MR_mktag(0), mdbcomp__goal_path__TypeInfo_10_10, 1) = ((MR_Box) (mdbcomp__goal_path__TypeInfo_for_T_8));
#line 7039 "mdbcomp.goal_path.c"
    }
#line 664 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_5_5 = (mdbcomp__goal_path__LastGoalIdNum_3 + (MR_Integer) 1);
#line 664 "mdbcomp.goal_path.m"
    {
#line 664 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__conv0_V_4_4 = mercury__array__init_2_f_0(mdbcomp__goal_path__TypeInfo_10_10, mdbcomp__goal_path__V_5_5, ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))));
    }
#line 664 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__V_4_4 = (MR_ArrayPtr) mdbcomp__goal_path__conv0_V_4_4;
#line 664 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) mdbcomp__goal_path__V_4_4;
#line 663 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__2_2;
#line 663 "mdbcomp.goal_path.m"
  }
#line 306 "mdbcomp.goal_path.m"
}

#line 284 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_bimap_1_f_0(
#line 284 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalMap_3)
#line 284 "mdbcomp.goal_path.m"
{
#line 636 "mdbcomp.goal_path.m"
  {
#line 636 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 636 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ReverseGoalPathBiMap_4;
#line 636 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeCtorInfo_7_7 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 636 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoalList_5;
#line 636 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_6_6;

#line 637 "mdbcomp.goal_path.m"
    {
#line 637 "mdbcomp.goal_path.m"
      mercury__map__to_assoc_list_2_p_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_3, &mdbcomp__goal_path__ContainingGoalList_5);
    }
#line 639 "mdbcomp.goal_path.m"
    {
#line 639 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_6_6 = mercury__bimap__init_0_f_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
    }
#line 638 "mdbcomp.goal_path.m"
    {
#line 638 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__create_reverse_goal_path_bimap_2_3_p_0(mdbcomp__goal_path__ContainingGoalList_5, mdbcomp__goal_path__V_6_6, &mdbcomp__goal_path__ReverseGoalPathBiMap_4);
    }
#line 636 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__ReverseGoalPathBiMap_4;
#line 636 "mdbcomp.goal_path.m"
  }
#line 284 "mdbcomp.goal_path.m"
}

#line 278 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__create_reverse_goal_path_map_1_f_0(
#line 278 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalMap_3)
#line 278 "mdbcomp.goal_path.m"
{
#line 611 "mdbcomp.goal_path.m"
  {
#line 611 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 611 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ReverseGoalPathMap_4;
#line 611 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeCtorInfo_7_7 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 611 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoalList_5;
#line 611 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_6_6;

#line 612 "mdbcomp.goal_path.m"
    {
#line 612 "mdbcomp.goal_path.m"
      mercury__map__to_assoc_list_2_p_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_3, &mdbcomp__goal_path__ContainingGoalList_5);
    }
#line 614 "mdbcomp.goal_path.m"
    {
#line 614 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_6_6 = mercury__map__init_0_f_0(mdbcomp__goal_path__TypeCtorInfo_7_7, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
    }
#line 613 "mdbcomp.goal_path.m"
    {
#line 613 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(mdbcomp__goal_path__ContainingGoalList_5, mdbcomp__goal_path__V_6_6, &mdbcomp__goal_path__ReverseGoalPathMap_4);
    }
#line 611 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__ReverseGoalPathMap_4;
#line 611 "mdbcomp.goal_path.m"
  }
#line 278 "mdbcomp.goal_path.m"
}

#line 587 "mdbcomp.goal_path.m"
static void MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0_1(
#line 587 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 587 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1,
#line 587 "mdbcomp.goal_path.m"
  MR_Box * mdbcomp__goal_path__wrapper_arg_2)
#line 587 "mdbcomp.goal_path.m"
{
#line 587 "mdbcomp.goal_path.m"
  {
#line 587 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;
#line 587 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__conv0_ForwardGoalPath_4;

#line 587 "mdbcomp.goal_path.m"
    {
#line 587 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_p_0(((MR_Word) mdbcomp__goal_path__wrapper_arg_1), &mdbcomp__goal_path__conv0_ForwardGoalPath_4);
    }
#line 587 "mdbcomp.goal_path.m"
    *mdbcomp__goal_path__wrapper_arg_2 = ((MR_Box) (mdbcomp__goal_path__conv0_ForwardGoalPath_4));
#line 587 "mdbcomp.goal_path.m"
  }
#line 587 "mdbcomp.goal_path.m"
}

#line 272 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__create_forward_goal_path_map_1_f_0(
#line 272 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalMap_3)
#line 272 "mdbcomp.goal_path.m"
{
#line 585 "mdbcomp.goal_path.m"
  {
#line 585 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 585 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ForwardGoalPathMap_4;
#line 585 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TypeCtorInfo_7_16 = (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0;
#line 585 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ReverseGoalPathMap_5;
#line 585 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoalList_14;
#line 585 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_15_15;

#line 612 "mdbcomp.goal_path.m"
    {
#line 612 "mdbcomp.goal_path.m"
      mercury__map__to_assoc_list_2_p_0(mdbcomp__goal_path__TypeCtorInfo_7_16, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_3, &mdbcomp__goal_path__ContainingGoalList_14);
    }
#line 614 "mdbcomp.goal_path.m"
    {
#line 614 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__V_15_15 = mercury__map__init_0_f_0(mdbcomp__goal_path__TypeCtorInfo_7_16, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0);
    }
#line 613 "mdbcomp.goal_path.m"
    {
#line 613 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__create_reverse_goal_path_map_2_3_p_0(mdbcomp__goal_path__ContainingGoalList_14, mdbcomp__goal_path__V_15_15, &mdbcomp__goal_path__ReverseGoalPathMap_5);
    }
#line 587 "mdbcomp.goal_path.m"
    {
#line 587 "mdbcomp.goal_path.m"
      mercury__map__map_values_only_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_reverse_goal_path_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_forward_goal_path_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path_scalar_common_1[8], mdbcomp__goal_path__ReverseGoalPathMap_5, &mdbcomp__goal_path__ForwardGoalPathMap_4);
    }
#line 585 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__ForwardGoalPathMap_4;
#line 585 "mdbcomp.goal_path.m"
  }
#line 272 "mdbcomp.goal_path.m"
}

#line 266 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(
#line 266 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalMap_4,
#line 266 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalId_5)
#line 266 "mdbcomp.goal_path.m"
{
#line 574 "mdbcomp.goal_path.m"
  {
#line 574 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 574 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPath_6;
#line 574 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__ContainingGoal_7;
#line 575 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__conv0_ContainingGoal_7;

#line 575 "mdbcomp.goal_path.m"
    {
#line 575 "mdbcomp.goal_path.m"
      mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalMap_4, ((MR_Box) (mdbcomp__goal_path__GoalId_5)), &mdbcomp__goal_path__conv0_ContainingGoal_7);
    }
#line 575 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__ContainingGoal_7 = ((MR_Word) mdbcomp__goal_path__conv0_ContainingGoal_7);
#line 579 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__ContainingGoal_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 578 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__GoalPath_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 579 "mdbcomp.goal_path.m"
    else
#line 580 "mdbcomp.goal_path.m"
      {
#line 580 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__ParentGoalId_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_7, (MR_Integer) 0)));
#line 580 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__LastStep_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__ContainingGoal_7, (MR_Integer) 1)));
#line 580 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__EarlierPath_10;

#line 581 "mdbcomp.goal_path.m"
        {
#line 581 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__EarlierPath_10 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(mdbcomp__goal_path__ContainingGoalMap_4, mdbcomp__goal_path__ParentGoalId_8);
        }
#line 582 "mdbcomp.goal_path.m"
        {
#line 582 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__GoalPath_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 582 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 0) = ((MR_Box) (mdbcomp__goal_path__EarlierPath_10));
#line 582 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 1) = ((MR_Box) (mdbcomp__goal_path__LastStep_9));
#line 582 "mdbcomp.goal_path.m"
        }
#line 580 "mdbcomp.goal_path.m"
      }
#line 574 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPath_6;
#line 574 "mdbcomp.goal_path.m"
  }
#line 266 "mdbcomp.goal_path.m"
}

#line 261 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__goal_id_to_forward_path_2_f_0(
#line 261 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalMap_4,
#line 261 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalId_5)
#line 261 "mdbcomp.goal_path.m"
{
#line 570 "mdbcomp.goal_path.m"
  {
#line 570 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 570 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPath_6;
#line 570 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevGoalPath_7;

#line 571 "mdbcomp.goal_path.m"
    {
#line 571 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__RevGoalPath_7 = mdbcomp__goal_path__goal_id_to_reverse_path_2_f_0(mdbcomp__goal_path__ContainingGoalMap_4, mdbcomp__goal_path__GoalId_5);
    }
#line 590 "mdbcomp.goal_path.m"
    {
#line 590 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevGoalPath_7, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__GoalPath_6);
    }
#line 570 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPath_6;
#line 570 "mdbcomp.goal_path.m"
  }
#line 261 "mdbcomp.goal_path.m"
}

#line 256 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_id_inside_3_p_0(
#line 256 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ContainingGoalId_4,
#line 256 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalIdA_5,
#line 256 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalIdB_6)
#line 256 "mdbcomp.goal_path.m"
{
#line 563 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 563 "mdbcomp.goal_path.m"
    {
#line 563 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 563 "mdbcomp.goal_path.m"
      {
#line 563 "mdbcomp.goal_path.m"
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

#line 7367 "mdbcomp.goal_path.c"
              mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_12_12 == mdbcomp__goal_path__V_13_13);
#line 62 "mdbcomp.goal_path.m"
            }
#line 62 "mdbcomp.goal_path.m"
        }
#line 563 "mdbcomp.goal_path.m"
        if (!(mdbcomp__goal_path__succeeded))
#line 565 "mdbcomp.goal_path.m"
          {
#line 565 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__GoalContainingB_7;
#line 565 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__ParentGoalIdB_8;
#line 565 "mdbcomp.goal_path.m"
            MR_Box mdbcomp__goal_path__conv0_GoalContainingB_7;
#line 566 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_9_9;

#line 565 "mdbcomp.goal_path.m"
            {
#line 565 "mdbcomp.goal_path.m"
              mercury__map__lookup_3_p_0((MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_goal_id_0, (MR_Word) &mdbcomp__goal_path__mdbcomp__goal_path__type_ctor_info_containing_goal_0, mdbcomp__goal_path__ContainingGoalId_4, ((MR_Box) (mdbcomp__goal_path__GoalIdB_6)), &mdbcomp__goal_path__conv0_GoalContainingB_7);
            }
#line 565 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__GoalContainingB_7 = ((MR_Word) mdbcomp__goal_path__conv0_GoalContainingB_7);
#line 566 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__GoalContainingB_7)) == (MR_mktag((MR_Integer) 1)));
#line 566 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 566 "mdbcomp.goal_path.m"
              {
#line 566 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__ParentGoalIdB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalContainingB_7, (MR_Integer) 0)));
#line 566 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalContainingB_7, (MR_Integer) 1)));
#line 567 "mdbcomp.goal_path.m"
                /* direct tailcall eliminated */
#line 567 "mdbcomp.goal_path.m"
                {
#line 567 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__GoalIdB__tmp_copy_6 = mdbcomp__goal_path__ParentGoalIdB_8;

#line 567 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__GoalIdB_6 = mdbcomp__goal_path__GoalIdB__tmp_copy_6;
#line 567 "mdbcomp.goal_path.m"
                }
#line 567 "mdbcomp.goal_path.m"
                continue;
#line 566 "mdbcomp.goal_path.m"
              }
#line 565 "mdbcomp.goal_path.m"
          }
#line 563 "mdbcomp.goal_path.m"
        return mdbcomp__goal_path__succeeded;
#line 563 "mdbcomp.goal_path.m"
      }
#line 563 "mdbcomp.goal_path.m"
      break;
#line 563 "mdbcomp.goal_path.m"
    }
#line 256 "mdbcomp.goal_path.m"
}

#line 230 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(
#line 230 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 230 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__2_2)
#line 230 "mdbcomp.goal_path.m"
{
#line 531 "mdbcomp.goal_path.m"
  {
#line 531 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 531 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 531 "mdbcomp.goal_path.m"
      *mdbcomp__goal_path__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 531 "mdbcomp.goal_path.m"
    else
#line 533 "mdbcomp.goal_path.m"
      {
#line 533 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 533 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Step0_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 533 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Steps_5;
#line 533 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__Step_6;

#line 542 "mdbcomp.goal_path.m"
#line 542 "mdbcomp.goal_path.m"
        switch (MR_tag((MR_Word) mdbcomp__goal_path__Step0_4)) {
#line 542 "mdbcomp.goal_path.m"
          default: /*NOTREACHED*/ MR_assert(0);
#line 542 "mdbcomp.goal_path.m"
          case (MR_Integer) 0:
#line 542 "mdbcomp.goal_path.m"
#line 542 "mdbcomp.goal_path.m"
            switch (MR_unmkbody(mdbcomp__goal_path__Step0_4)) {
#line 542 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 542 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 544 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 542 "mdbcomp.goal_path.m"
                break;
#line 542 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 545 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 542 "mdbcomp.goal_path.m"
                break;
#line 542 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 546 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 542 "mdbcomp.goal_path.m"
                break;
#line 542 "mdbcomp.goal_path.m"
              case (MR_Integer) 3:
#line 547 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 542 "mdbcomp.goal_path.m"
                break;
#line 542 "mdbcomp.goal_path.m"
              case (MR_Integer) 4:
#line 549 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 542 "mdbcomp.goal_path.m"
                break;
#line 542 "mdbcomp.goal_path.m"
              case (MR_Integer) 5:
#line 550 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 542 "mdbcomp.goal_path.m"
                break;
#line 542 "mdbcomp.goal_path.m"
              case (MR_Integer) 6:
#line 551 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 542 "mdbcomp.goal_path.m"
                break;
#line 542 "mdbcomp.goal_path.m"
            }
#line 542 "mdbcomp.goal_path.m"
            break;
#line 542 "mdbcomp.goal_path.m"
          case (MR_Integer) 1:
#line 542 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 542 "mdbcomp.goal_path.m"
            break;
#line 542 "mdbcomp.goal_path.m"
          case (MR_Integer) 2:
#line 543 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 542 "mdbcomp.goal_path.m"
            break;
#line 542 "mdbcomp.goal_path.m"
          case (MR_Integer) 3:
#line 542 "mdbcomp.goal_path.m"
#line 542 "mdbcomp.goal_path.m"
            switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step0_4, (MR_Integer) 0)))) {
#line 542 "mdbcomp.goal_path.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 542 "mdbcomp.goal_path.m"
              case (MR_Integer) 0:
#line 555 "mdbcomp.goal_path.m"
                {
#line 555 "mdbcomp.goal_path.m"
                  MR_Integer mdbcomp__goal_path__N_14 = ((MR_Integer) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step0_4, (MR_Integer) 1)));
#line 555 "mdbcomp.goal_path.m"
                  MR_Word mdbcomp__goal_path__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step0_4, (MR_Integer) 2)));

#line 556 "mdbcomp.goal_path.m"
                  {
#line 556 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__Step_6 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 556 "mdbcomp.goal_path.m"
                    MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_6, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 556 "mdbcomp.goal_path.m"
                    MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_6, 1) = ((MR_Box) (mdbcomp__goal_path__N_14));
#line 556 "mdbcomp.goal_path.m"
                    MR_hl_field(MR_mktag(3), mdbcomp__goal_path__Step_6, 2) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 556 "mdbcomp.goal_path.m"
                  }
#line 555 "mdbcomp.goal_path.m"
                }
#line 542 "mdbcomp.goal_path.m"
                break;
#line 542 "mdbcomp.goal_path.m"
              case (MR_Integer) 1:
#line 548 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 542 "mdbcomp.goal_path.m"
                break;
#line 542 "mdbcomp.goal_path.m"
              case (MR_Integer) 2:
#line 552 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__Step_6 = mdbcomp__goal_path__Step0_4;
#line 542 "mdbcomp.goal_path.m"
                break;
#line 542 "mdbcomp.goal_path.m"
            }
#line 542 "mdbcomp.goal_path.m"
            break;
#line 542 "mdbcomp.goal_path.m"
        }
#line 535 "mdbcomp.goal_path.m"
        {
#line 535 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__rev_goal_path_remove_type_info_2_p_0(mdbcomp__goal_path__Steps0_3, &mdbcomp__goal_path__Steps_5);
        }
#line 533 "mdbcomp.goal_path.m"
        {
#line 533 "mdbcomp.goal_path.m"
          MR_Word base;
#line 533 "mdbcomp.goal_path.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 533 "mdbcomp.goal_path.m"
          *mdbcomp__goal_path__HeadVar__2_2 = base;
#line 533 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__Steps_5));
#line 533 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mdbcomp__goal_path__Step_6));
#line 533 "mdbcomp.goal_path.m"
        }
#line 533 "mdbcomp.goal_path.m"
      }
#line 531 "mdbcomp.goal_path.m"
  }
#line 230 "mdbcomp.goal_path.m"
}

#line 221 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_inside_relative_3_p_0(
#line 221 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__RevPathA_4,
#line 221 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__RevPathB_5,
#line 221 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__RevRelativePath_6)
#line 221 "mdbcomp.goal_path.m"
{
#line 399 "mdbcomp.goal_path.m"
  {
#line 399 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 399 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathA_7;
#line 399 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathB_8;
#line 399 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RelativePath_9;
#line 399 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_18_18;

#line 590 "mdbcomp.goal_path.m"
    {
#line 590 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathA_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathA_7);
    }
#line 590 "mdbcomp.goal_path.m"
    {
#line 590 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathB_5, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathB_8);
    }
#line 405 "mdbcomp.goal_path.m"
    {
#line 405 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(mdbcomp__goal_path__PathA_7, mdbcomp__goal_path__PathB_8, &mdbcomp__goal_path__RelativePath_9);
    }
#line 399 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 399 "mdbcomp.goal_path.m"
      {
#line 601 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_18_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 601 "mdbcomp.goal_path.m"
        {
#line 601 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(mdbcomp__goal_path__RelativePath_9, mdbcomp__goal_path__V_18_18, mdbcomp__goal_path__RevRelativePath_6);
        }
#line 601 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 399 "mdbcomp.goal_path.m"
      }
#line 399 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 399 "mdbcomp.goal_path.m"
  }
#line 221 "mdbcomp.goal_path.m"
}

#line 219 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_inside_relative_3_p_0(
#line 219 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 219 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__2_2,
#line 219 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__HeadVar__3_3)
#line 219 "mdbcomp.goal_path.m"
{
#line 393 "mdbcomp.goal_path.m"
  while (MR_TRUE)
#line 393 "mdbcomp.goal_path.m"
    {
#line 393 "mdbcomp.goal_path.m"
      /* tailcall optimized into a loop */
#line 393 "mdbcomp.goal_path.m"
      {
#line 393 "mdbcomp.goal_path.m"
        MR_bool mdbcomp__goal_path__succeeded;

#line 393 "mdbcomp.goal_path.m"
        if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "mdbcomp.goal_path.m"
          {
#line 393 "mdbcomp.goal_path.m"
            *mdbcomp__goal_path__HeadVar__3_3 = mdbcomp__goal_path__HeadVar__2_2;
#line 393 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = MR_TRUE;
#line 393 "mdbcomp.goal_path.m"
          }
#line 393 "mdbcomp.goal_path.m"
        else
#line 395 "mdbcomp.goal_path.m"
          {
#line 395 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__StepA_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 395 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__PathA_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 395 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__StepB_7;
#line 395 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__PathB_8;

#line 394 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 394 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 394 "mdbcomp.goal_path.m"
              {
#line 394 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__StepB_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 0)));
#line 394 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__PathB_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "mdbcomp.goal_path.m"
                {
#line 396 "mdbcomp.goal_path.m"
                  mdbcomp__goal_path__succeeded = mdbcomp__goal_path____Unify____goal_path_step_0_0(mdbcomp__goal_path__StepA_5, mdbcomp__goal_path__StepB_7);
                }
#line 395 "mdbcomp.goal_path.m"
                if (mdbcomp__goal_path__succeeded)
#line 397 "mdbcomp.goal_path.m"
                  {
#line 397 "mdbcomp.goal_path.m"
                    /* direct tailcall eliminated */
#line 397 "mdbcomp.goal_path.m"
                    {
#line 397 "mdbcomp.goal_path.m"
                      MR_Word mdbcomp__goal_path__HeadVar__1__tmp_copy_1 = mdbcomp__goal_path__PathA_6;
#line 397 "mdbcomp.goal_path.m"
                      MR_Word mdbcomp__goal_path__HeadVar__2__tmp_copy_2 = mdbcomp__goal_path__PathB_8;

#line 397 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__HeadVar__2_2 = mdbcomp__goal_path__HeadVar__2__tmp_copy_2;
#line 397 "mdbcomp.goal_path.m"
                      mdbcomp__goal_path__HeadVar__1_1 = mdbcomp__goal_path__HeadVar__1__tmp_copy_1;
#line 397 "mdbcomp.goal_path.m"
                    }
#line 397 "mdbcomp.goal_path.m"
                    continue;
#line 397 "mdbcomp.goal_path.m"
                  }
#line 394 "mdbcomp.goal_path.m"
              }
#line 395 "mdbcomp.goal_path.m"
          }
#line 393 "mdbcomp.goal_path.m"
        return mdbcomp__goal_path__succeeded;
#line 393 "mdbcomp.goal_path.m"
      }
#line 393 "mdbcomp.goal_path.m"
      break;
#line 393 "mdbcomp.goal_path.m"
    }
#line 219 "mdbcomp.goal_path.m"
}

#line 211 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_inside_2_p_0(
#line 211 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__RevPathA_3,
#line 211 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__RevPathB_4)
#line 211 "mdbcomp.goal_path.m"
{
#line 399 "mdbcomp.goal_path.m"
  {
#line 399 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 399 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathA_9;
#line 399 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__PathB_10;
#line 399 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RelativePath_11;
#line 399 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_20_20;
#line 601 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_5_5;

#line 590 "mdbcomp.goal_path.m"
    {
#line 590 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathA_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathA_9);
    }
#line 590 "mdbcomp.goal_path.m"
    {
#line 590 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__RevPathB_4, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), &mdbcomp__goal_path__PathB_10);
    }
#line 405 "mdbcomp.goal_path.m"
    {
#line 405 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(mdbcomp__goal_path__PathA_9, mdbcomp__goal_path__PathB_10, &mdbcomp__goal_path__RelativePath_11);
    }
#line 399 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 399 "mdbcomp.goal_path.m"
      {
#line 601 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 601 "mdbcomp.goal_path.m"
        {
#line 601 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(mdbcomp__goal_path__RelativePath_11, mdbcomp__goal_path__V_20_20, &mdbcomp__goal_path__V_5_5);
        }
#line 601 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 399 "mdbcomp.goal_path.m"
      }
#line 399 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 399 "mdbcomp.goal_path.m"
  }
#line 211 "mdbcomp.goal_path.m"
}

#line 209 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_inside_2_p_0(
#line 209 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__PathA_3,
#line 209 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__PathB_4)
#line 209 "mdbcomp.goal_path.m"
{
#line 409 "mdbcomp.goal_path.m"
  {
#line 409 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 409 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_5_5;

#line 409 "mdbcomp.goal_path.m"
    {
#line 409 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_inside_relative_3_p_0(mdbcomp__goal_path__PathA_3, mdbcomp__goal_path__PathB_4, &mdbcomp__goal_path__V_5_5);
    }
#line 409 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 409 "mdbcomp.goal_path.m"
  }
#line 209 "mdbcomp.goal_path.m"
}

#line 202 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__fgp_to_rgp_2_p_0(
#line 202 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ForwardGoalPath_3,
#line 202 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__ReverseGoalPath_4)
#line 202 "mdbcomp.goal_path.m"
{
#line 600 "mdbcomp.goal_path.m"
  {
#line 600 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 601 "mdbcomp.goal_path.m"
    {
#line 601 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__fgp_to_rgp_2_3_p_0(mdbcomp__goal_path__ForwardGoalPath_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdbcomp__goal_path__ReverseGoalPath_4);
    }
#line 600 "mdbcomp.goal_path.m"
  }
#line 202 "mdbcomp.goal_path.m"
}

#line 201 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__rgp_to_fgp_2_p_0(
#line 201 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__ReverseGoalPath_3,
#line 201 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__ForwardGoalPath_4)
#line 201 "mdbcomp.goal_path.m"
{
#line 589 "mdbcomp.goal_path.m"
  {
#line 589 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 590 "mdbcomp.goal_path.m"
    {
#line 590 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__rgp_to_fgp_2_3_p_0(mdbcomp__goal_path__ReverseGoalPath_3, (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)), mdbcomp__goal_path__ForwardGoalPath_4);
    }
#line 589 "mdbcomp.goal_path.m"
  }
#line 201 "mdbcomp.goal_path.m"
}

#line 197 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__is_goal_path_separator_1_p_0(
#line 197 "mdbcomp.goal_path.m"
  MR_Char mdbcomp__goal_path__HeadVar__1_1)
#line 197 "mdbcomp.goal_path.m"
{
#line 486 "mdbcomp.goal_path.m"
  {
#line 486 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__HeadVar__1_1 == (MR_Char) 59);

#line 486 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 486 "mdbcomp.goal_path.m"
  }
#line 197 "mdbcomp.goal_path.m"
}

#line 193 "mdbcomp.goal_path.m"
MR_String MR_CALL 
mdbcomp__goal_path__rev_goal_path_to_string_1_f_0(
#line 193 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalPath_3)
#line 193 "mdbcomp.goal_path.m"
{
#line 499 "mdbcomp.goal_path.m"
  {
#line 499 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 499 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__GoalPathStr_4;
#line 499 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevStepStrs_5;
#line 499 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_6;

#line 500 "mdbcomp.goal_path.m"
    {
#line 500 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__RevStepStrs_5 = mdbcomp__goal_path__rev_goal_path_to_strings_1_f_0(mdbcomp__goal_path__GoalPath_3);
    }
#line 501 "mdbcomp.goal_path.m"
    {
#line 501 "mdbcomp.goal_path.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdbcomp__goal_path__RevStepStrs_5, &mdbcomp__goal_path__StepStrs_6);
    }
#line 502 "mdbcomp.goal_path.m"
    {
#line 502 "mdbcomp.goal_path.m"
      mercury__string__append_list_2_p_0(mdbcomp__goal_path__StepStrs_6, &mdbcomp__goal_path__GoalPathStr_4);
    }
#line 499 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPathStr_4;
#line 499 "mdbcomp.goal_path.m"
  }
#line 193 "mdbcomp.goal_path.m"
}

#line 188 "mdbcomp.goal_path.m"
MR_String MR_CALL 
mdbcomp__goal_path__goal_path_to_string_1_f_0(
#line 188 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalPath_3)
#line 188 "mdbcomp.goal_path.m"
{
#line 488 "mdbcomp.goal_path.m"
  {
#line 488 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 488 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__GoalPathStr_4;
#line 488 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_5;

#line 489 "mdbcomp.goal_path.m"
    {
#line 489 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_5 = mdbcomp__goal_path__goal_path_to_strings_1_f_0(mdbcomp__goal_path__GoalPath_3);
    }
#line 490 "mdbcomp.goal_path.m"
    {
#line 490 "mdbcomp.goal_path.m"
      mercury__string__append_list_2_p_0(mdbcomp__goal_path__StepStrs_5, &mdbcomp__goal_path__GoalPathStr_4);
    }
#line 488 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPathStr_4;
#line 488 "mdbcomp.goal_path.m"
  }
#line 188 "mdbcomp.goal_path.m"
}

#line 465 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_step_from_string_2_p_0_1(
#line 465 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 465 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 465 "mdbcomp.goal_path.m"
{
#line 465 "mdbcomp.goal_path.m"
  {
#line 465 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 465 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 465 "mdbcomp.goal_path.m"
    {
#line 465 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__IntroducedFrom__pred__goal_path_step_from_string_2__465__1_2_p_0(((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(0), mdbcomp__goal_path__closure, (MR_Integer) 3))), ((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 465 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 465 "mdbcomp.goal_path.m"
  }
#line 465 "mdbcomp.goal_path.m"
}

#line 183 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_step_from_string_2_p_0(
#line 183 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__String_3,
#line 183 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__Step_4)
#line 183 "mdbcomp.goal_path.m"
{
#line 453 "mdbcomp.goal_path.m"
  {
#line 453 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 453 "mdbcomp.goal_path.m"
    MR_Char mdbcomp__goal_path__First_5;
#line 453 "mdbcomp.goal_path.m"
    MR_String mdbcomp__goal_path__Rest_6;

#line 454 "mdbcomp.goal_path.m"
    {
#line 454 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mercury__string__first_char_3_p_3(mdbcomp__goal_path__String_3, &mdbcomp__goal_path__First_5, &mdbcomp__goal_path__Rest_6);
    }
#line 453 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 460 "mdbcomp.goal_path.m"
#line 460 "mdbcomp.goal_path.m"
      switch (mdbcomp__goal_path__First_5) {
#line 460 "mdbcomp.goal_path.m"
        default:
#line 460 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__succeeded = MR_FALSE;
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 61:
#line 481 "mdbcomp.goal_path.m"
          {
#line 481 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 481 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 481 "mdbcomp.goal_path.m"
              {
#line 481 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
#line 481 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 481 "mdbcomp.goal_path.m"
              }
#line 481 "mdbcomp.goal_path.m"
          }
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 63:
#line 474 "mdbcomp.goal_path.m"
          {
#line 474 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 474 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 474 "mdbcomp.goal_path.m"
              {
#line 474 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 474 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 474 "mdbcomp.goal_path.m"
              }
#line 474 "mdbcomp.goal_path.m"
          }
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 97:
#line 482 "mdbcomp.goal_path.m"
          {
#line 482 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 482 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 482 "mdbcomp.goal_path.m"
              {
#line 482 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 6));
#line 482 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 482 "mdbcomp.goal_path.m"
              }
#line 482 "mdbcomp.goal_path.m"
          }
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 99:
#line 460 "mdbcomp.goal_path.m"
          {
#line 460 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__N_8;

#line 461 "mdbcomp.goal_path.m"
            {
#line 461 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__Rest_6, &mdbcomp__goal_path__N_8);
            }
#line 460 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 460 "mdbcomp.goal_path.m"
              {
#line 460 "mdbcomp.goal_path.m"
                {
#line 460 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 460 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 460 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__Step_4 = base;
#line 460 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mdbcomp__goal_path__N_8));
#line 460 "mdbcomp.goal_path.m"
                }
#line 460 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 460 "mdbcomp.goal_path.m"
              }
#line 460 "mdbcomp.goal_path.m"
          }
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 100:
#line 462 "mdbcomp.goal_path.m"
          {
#line 462 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__N_10;

#line 463 "mdbcomp.goal_path.m"
            {
#line 463 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__Rest_6, &mdbcomp__goal_path__N_10);
            }
#line 462 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 462 "mdbcomp.goal_path.m"
              {
#line 462 "mdbcomp.goal_path.m"
                {
#line 462 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 462 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 462 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__Step_4 = base;
#line 462 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mdbcomp__goal_path__N_10));
#line 462 "mdbcomp.goal_path.m"
                }
#line 462 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 462 "mdbcomp.goal_path.m"
              }
#line 462 "mdbcomp.goal_path.m"
          }
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 101:
#line 476 "mdbcomp.goal_path.m"
          {
#line 476 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 476 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 476 "mdbcomp.goal_path.m"
              {
#line 476 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));
#line 476 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 476 "mdbcomp.goal_path.m"
              }
#line 476 "mdbcomp.goal_path.m"
          }
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 111:
#line 483 "mdbcomp.goal_path.m"
          {
#line 483 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__N_25;

#line 484 "mdbcomp.goal_path.m"
            {
#line 484 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__Rest_6, &mdbcomp__goal_path__N_25);
            }
#line 483 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 483 "mdbcomp.goal_path.m"
              {
#line 483 "mdbcomp.goal_path.m"
                {
#line 483 "mdbcomp.goal_path.m"
                  MR_Word base;
#line 483 "mdbcomp.goal_path.m"
                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 483 "mdbcomp.goal_path.m"
                  *mdbcomp__goal_path__Step_4 = base;
#line 483 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
#line 483 "mdbcomp.goal_path.m"
                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__goal_path__N_25));
#line 483 "mdbcomp.goal_path.m"
                }
#line 483 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 483 "mdbcomp.goal_path.m"
              }
#line 483 "mdbcomp.goal_path.m"
          }
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 113:
#line 460 "mdbcomp.goal_path.m"
          if ((strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0))
#line 479 "mdbcomp.goal_path.m"
            {
#line 479 "mdbcomp.goal_path.m"
              *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdbcomp__goal_path_scalar_common_3[0]);
#line 479 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = MR_TRUE;
#line 479 "mdbcomp.goal_path.m"
            }
#line 460 "mdbcomp.goal_path.m"
          else
#line 460 "mdbcomp.goal_path.m"
          if ((strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "!") == 0))
#line 478 "mdbcomp.goal_path.m"
            {
#line 478 "mdbcomp.goal_path.m"
              *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(3), &mdbcomp__goal_path_scalar_common_3[1]);
#line 478 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__succeeded = MR_TRUE;
#line 478 "mdbcomp.goal_path.m"
            }
#line 460 "mdbcomp.goal_path.m"
          else
#line 460 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = MR_FALSE;
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 114:
#line 480 "mdbcomp.goal_path.m"
          {
#line 480 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 480 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 480 "mdbcomp.goal_path.m"
              {
#line 480 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 5));
#line 480 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 480 "mdbcomp.goal_path.m"
              }
#line 480 "mdbcomp.goal_path.m"
          }
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 115:
#line 464 "mdbcomp.goal_path.m"
          {
#line 464 "mdbcomp.goal_path.m"
            MR_Integer mdbcomp__goal_path__N_12;
#line 464 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__MaybeM_13;
#line 464 "mdbcomp.goal_path.m"
            MR_String mdbcomp__goal_path__NStr_14;
#line 464 "mdbcomp.goal_path.m"
            MR_String mdbcomp__goal_path__MStr_15;
#line 464 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_17_17;
#line 464 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_20_20;
#line 464 "mdbcomp.goal_path.m"
            MR_Word mdbcomp__goal_path__V_21_21;

#line 465 "mdbcomp.goal_path.m"
            {
#line 465 "mdbcomp.goal_path.m"
              mdbcomp__goal_path__V_17_17 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_2[1], mdbcomp__goal_path__Rest_6);
            }
#line 465 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 465 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 465 "mdbcomp.goal_path.m"
              {
#line 465 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__NStr_14 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_17_17, (MR_Integer) 0)));
#line 465 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_17_17, (MR_Integer) 1)));
#line 465 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__V_20_20)) == (MR_mktag((MR_Integer) 1)));
#line 465 "mdbcomp.goal_path.m"
                if (mdbcomp__goal_path__succeeded)
#line 465 "mdbcomp.goal_path.m"
                  {
#line 465 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__MStr_15 = ((MR_String) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_20_20, (MR_Integer) 0)));
#line 465 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__V_20_20, (MR_Integer) 1)));
#line 465 "mdbcomp.goal_path.m"
                    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__V_21_21 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 464 "mdbcomp.goal_path.m"
                    if (mdbcomp__goal_path__succeeded)
#line 464 "mdbcomp.goal_path.m"
                      {
#line 466 "mdbcomp.goal_path.m"
                        {
#line 466 "mdbcomp.goal_path.m"
                          mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__NStr_14, &mdbcomp__goal_path__N_12);
                        }
#line 464 "mdbcomp.goal_path.m"
                        if (mdbcomp__goal_path__succeeded)
#line 464 "mdbcomp.goal_path.m"
                          {
#line 468 "mdbcomp.goal_path.m"
                            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__MStr_15, (MR_String) "na") == 0);
#line 470 "mdbcomp.goal_path.m"
                            if (mdbcomp__goal_path__succeeded)
#line 469 "mdbcomp.goal_path.m"
                              {
#line 469 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__MaybeM_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 469 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 469 "mdbcomp.goal_path.m"
                              }
#line 470 "mdbcomp.goal_path.m"
                            else
#line 471 "mdbcomp.goal_path.m"
                              {
#line 471 "mdbcomp.goal_path.m"
                                MR_Integer mdbcomp__goal_path__M_16;

#line 471 "mdbcomp.goal_path.m"
                                {
#line 471 "mdbcomp.goal_path.m"
                                  mdbcomp__goal_path__succeeded = mercury__string__to_int_2_p_0(mdbcomp__goal_path__MStr_15, &mdbcomp__goal_path__M_16);
                                }
#line 471 "mdbcomp.goal_path.m"
                                if (mdbcomp__goal_path__succeeded)
#line 471 "mdbcomp.goal_path.m"
                                  {
#line 472 "mdbcomp.goal_path.m"
                                    {
#line 472 "mdbcomp.goal_path.m"
                                      mdbcomp__goal_path__MaybeM_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 472 "mdbcomp.goal_path.m"
                                      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__MaybeM_13, 0) = ((MR_Box) (mdbcomp__goal_path__M_16));
#line 472 "mdbcomp.goal_path.m"
                                    }
#line 472 "mdbcomp.goal_path.m"
                                    mdbcomp__goal_path__succeeded = MR_TRUE;
#line 471 "mdbcomp.goal_path.m"
                                  }
#line 471 "mdbcomp.goal_path.m"
                              }
#line 464 "mdbcomp.goal_path.m"
                            if (mdbcomp__goal_path__succeeded)
#line 464 "mdbcomp.goal_path.m"
                              {
#line 464 "mdbcomp.goal_path.m"
                                {
#line 464 "mdbcomp.goal_path.m"
                                  MR_Word base;
#line 464 "mdbcomp.goal_path.m"
                                  base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
#line 464 "mdbcomp.goal_path.m"
                                  *mdbcomp__goal_path__Step_4 = base;
#line 464 "mdbcomp.goal_path.m"
                                  MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
#line 464 "mdbcomp.goal_path.m"
                                  MR_hl_field(MR_mktag(3), base, 1) = ((MR_Box) (mdbcomp__goal_path__N_12));
#line 464 "mdbcomp.goal_path.m"
                                  MR_hl_field(MR_mktag(3), base, 2) = ((MR_Box) (mdbcomp__goal_path__MaybeM_13));
#line 464 "mdbcomp.goal_path.m"
                                }
#line 464 "mdbcomp.goal_path.m"
                                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 464 "mdbcomp.goal_path.m"
                              }
#line 464 "mdbcomp.goal_path.m"
                          }
#line 464 "mdbcomp.goal_path.m"
                      }
#line 465 "mdbcomp.goal_path.m"
                  }
#line 465 "mdbcomp.goal_path.m"
              }
#line 464 "mdbcomp.goal_path.m"
          }
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 116:
#line 475 "mdbcomp.goal_path.m"
          {
#line 475 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 475 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 475 "mdbcomp.goal_path.m"
              {
#line 475 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
#line 475 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 475 "mdbcomp.goal_path.m"
              }
#line 475 "mdbcomp.goal_path.m"
          }
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
        case (MR_Char) 126:
#line 477 "mdbcomp.goal_path.m"
          {
#line 477 "mdbcomp.goal_path.m"
            mdbcomp__goal_path__succeeded = (strcmp(mdbcomp__goal_path__Rest_6, (MR_String) "") == 0);
#line 477 "mdbcomp.goal_path.m"
            if (mdbcomp__goal_path__succeeded)
#line 477 "mdbcomp.goal_path.m"
              {
#line 477 "mdbcomp.goal_path.m"
                *mdbcomp__goal_path__Step_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
#line 477 "mdbcomp.goal_path.m"
                mdbcomp__goal_path__succeeded = MR_TRUE;
#line 477 "mdbcomp.goal_path.m"
              }
#line 477 "mdbcomp.goal_path.m"
          }
#line 460 "mdbcomp.goal_path.m"
          break;
#line 460 "mdbcomp.goal_path.m"
      }
#line 453 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 453 "mdbcomp.goal_path.m"
  }
#line 183 "mdbcomp.goal_path.m"
}

#line 434 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0_1(
#line 434 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 434 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 434 "mdbcomp.goal_path.m"
{
#line 434 "mdbcomp.goal_path.m"
  {
#line 434 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 434 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 434 "mdbcomp.goal_path.m"
    {
#line 434 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 434 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 434 "mdbcomp.goal_path.m"
  }
#line 434 "mdbcomp.goal_path.m"
}

#line 177 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_det_2_p_0(
#line 177 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__GoalPathStr_3,
#line 177 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__GoalPath_4)
#line 177 "mdbcomp.goal_path.m"
{
#line 449 "mdbcomp.goal_path.m"
  {
#line 449 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 449 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPathPrime_5;
#line 433 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_11;
#line 433 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevStepStrs_12;

#line 434 "mdbcomp.goal_path.m"
    {
#line 434 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_11 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[7], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 435 "mdbcomp.goal_path.m"
    {
#line 435 "mdbcomp.goal_path.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdbcomp__goal_path__StepStrs_11, &mdbcomp__goal_path__RevStepStrs_12);
    }
#line 436 "mdbcomp.goal_path.m"
    {
#line 436 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(mdbcomp__goal_path__RevStepStrs_12, &mdbcomp__goal_path__GoalPathPrime_5);
    }
#line 449 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 448 "mdbcomp.goal_path.m"
      *mdbcomp__goal_path__GoalPath_4 = mdbcomp__goal_path__GoalPathPrime_5;
#line 449 "mdbcomp.goal_path.m"
    else
#line 450 "mdbcomp.goal_path.m"
      {
#line 450 "mdbcomp.goal_path.m"
        {
#line 450 "mdbcomp.goal_path.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.goal_path", (MR_String) "predicate \140mdbcomp.goal_path.rev_goal_path_from_string_det\'/2", (MR_String) "rev_goal_path_from_string failed");
#line 450 "mdbcomp.goal_path.m"
          return;
        }
#line 450 "mdbcomp.goal_path.m"
      }
#line 449 "mdbcomp.goal_path.m"
  }
#line 177 "mdbcomp.goal_path.m"
}

#line 434 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_2_p_0_1(
#line 434 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 434 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 434 "mdbcomp.goal_path.m"
{
#line 434 "mdbcomp.goal_path.m"
  {
#line 434 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 434 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 434 "mdbcomp.goal_path.m"
    {
#line 434 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 434 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 434 "mdbcomp.goal_path.m"
  }
#line 434 "mdbcomp.goal_path.m"
}

#line 171 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_from_string_2_p_0(
#line 171 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__GoalPathStr_3,
#line 171 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__GoalPath_4)
#line 171 "mdbcomp.goal_path.m"
{
#line 433 "mdbcomp.goal_path.m"
  {
#line 433 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 433 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_5;
#line 433 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__RevStepStrs_6;

#line 434 "mdbcomp.goal_path.m"
    {
#line 434 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_5 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[6], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 435 "mdbcomp.goal_path.m"
    {
#line 435 "mdbcomp.goal_path.m"
      mercury__list__reverse_2_p_0((MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0, mdbcomp__goal_path__StepStrs_5, &mdbcomp__goal_path__RevStepStrs_6);
    }
#line 436 "mdbcomp.goal_path.m"
    {
#line 436 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__rev_goal_path_from_rev_strings_2_p_0(mdbcomp__goal_path__RevStepStrs_6, mdbcomp__goal_path__GoalPath_4);
    }
#line 433 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 433 "mdbcomp.goal_path.m"
  }
#line 171 "mdbcomp.goal_path.m"
}

#line 415 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_det_2_p_0_1(
#line 415 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 415 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 415 "mdbcomp.goal_path.m"
{
#line 415 "mdbcomp.goal_path.m"
  {
#line 415 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 415 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 415 "mdbcomp.goal_path.m"
    {
#line 415 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 415 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 415 "mdbcomp.goal_path.m"
  }
#line 415 "mdbcomp.goal_path.m"
}

#line 166 "mdbcomp.goal_path.m"
void MR_CALL 
mdbcomp__goal_path__goal_path_from_string_det_2_p_0(
#line 166 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__GoalPathStr_3,
#line 166 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__GoalPath_4)
#line 166 "mdbcomp.goal_path.m"
{
#line 429 "mdbcomp.goal_path.m"
  {
#line 429 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 429 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPathPrime_5;
#line 414 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_11;

#line 415 "mdbcomp.goal_path.m"
    {
#line 415 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_11 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[5], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 416 "mdbcomp.goal_path.m"
    {
#line 416 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(mdbcomp__goal_path__StepStrs_11, &mdbcomp__goal_path__GoalPathPrime_5);
    }
#line 429 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 428 "mdbcomp.goal_path.m"
      *mdbcomp__goal_path__GoalPath_4 = mdbcomp__goal_path__GoalPathPrime_5;
#line 429 "mdbcomp.goal_path.m"
    else
#line 430 "mdbcomp.goal_path.m"
      {
#line 430 "mdbcomp.goal_path.m"
        {
#line 430 "mdbcomp.goal_path.m"
          mercury__require__unexpected_3_p_0((MR_String) "mdbcomp.goal_path", (MR_String) "predicate \140mdbcomp.goal_path.goal_path_from_string_det\'/2", (MR_String) "goal_path_from_string failed");
#line 430 "mdbcomp.goal_path.m"
          return;
        }
#line 430 "mdbcomp.goal_path.m"
      }
#line 429 "mdbcomp.goal_path.m"
  }
#line 166 "mdbcomp.goal_path.m"
}

#line 415 "mdbcomp.goal_path.m"
static MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_2_p_0_1(
#line 415 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__closure_arg,
#line 415 "mdbcomp.goal_path.m"
  MR_Box mdbcomp__goal_path__wrapper_arg_1)
#line 415 "mdbcomp.goal_path.m"
{
#line 415 "mdbcomp.goal_path.m"
  {
#line 415 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 415 "mdbcomp.goal_path.m"
    MR_Box mdbcomp__goal_path__closure = mdbcomp__goal_path__closure_arg;

#line 415 "mdbcomp.goal_path.m"
    {
#line 415 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__is_goal_path_separator_1_p_0(((MR_Char) (MR_Word) mdbcomp__goal_path__wrapper_arg_1));
    }
#line 415 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 415 "mdbcomp.goal_path.m"
  }
#line 415 "mdbcomp.goal_path.m"
}

#line 161 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_from_string_2_p_0(
#line 161 "mdbcomp.goal_path.m"
  MR_String mdbcomp__goal_path__GoalPathStr_3,
#line 161 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__GoalPath_4)
#line 161 "mdbcomp.goal_path.m"
{
#line 414 "mdbcomp.goal_path.m"
  {
#line 414 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 414 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__StepStrs_5;

#line 415 "mdbcomp.goal_path.m"
    {
#line 415 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__StepStrs_5 = mercury__string__words_separator_2_f_0((MR_Word) &mdbcomp__goal_path_scalar_common_1[4], mdbcomp__goal_path__GoalPathStr_3);
    }
#line 416 "mdbcomp.goal_path.m"
    {
#line 416 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__succeeded = mdbcomp__goal_path__goal_path_from_strings_2_p_0(mdbcomp__goal_path__StepStrs_5, mdbcomp__goal_path__GoalPath_4);
    }
#line 414 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 414 "mdbcomp.goal_path.m"
  }
#line 161 "mdbcomp.goal_path.m"
}

#line 155 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_get_last_2_p_0(
#line 155 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 155 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__LastStep_4)
#line 155 "mdbcomp.goal_path.m"
{
#line 391 "mdbcomp.goal_path.m"
  {
#line 391 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 391 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_3_3;

#line 391 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 391 "mdbcomp.goal_path.m"
      {
#line 391 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 391 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__LastStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 391 "mdbcomp.goal_path.m"
      }
#line 391 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 391 "mdbcomp.goal_path.m"
  }
#line 155 "mdbcomp.goal_path.m"
}

#line 149 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__rev_goal_path_remove_last_3_p_0(
#line 149 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 149 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__GoalPath_4,
#line 149 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__LastStep_5)
#line 149 "mdbcomp.goal_path.m"
{
#line 389 "mdbcomp.goal_path.m"
  {
#line 389 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 389 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 389 "mdbcomp.goal_path.m"
      {
#line 389 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__GoalPath_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 389 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__LastStep_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 389 "mdbcomp.goal_path.m"
      }
#line 389 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 389 "mdbcomp.goal_path.m"
  }
#line 149 "mdbcomp.goal_path.m"
}

#line 143 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_get_first_2_p_0(
#line 143 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalPath_3,
#line 143 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__FirstStep_4)
#line 143 "mdbcomp.goal_path.m"
{
#line 383 "mdbcomp.goal_path.m"
  {
#line 383 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__GoalPath_3)) == (MR_mktag((MR_Integer) 1)));
#line 383 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__V_5_5;

#line 383 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 383 "mdbcomp.goal_path.m"
      {
#line 383 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__FirstStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_3, (MR_Integer) 0)));
#line 383 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_3, (MR_Integer) 1)));
#line 383 "mdbcomp.goal_path.m"
      }
#line 383 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 383 "mdbcomp.goal_path.m"
  }
#line 143 "mdbcomp.goal_path.m"
}

#line 137 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_remove_first_3_p_0(
#line 137 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 137 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__OtherSteps_5,
#line 137 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__FirstStep_4)
#line 137 "mdbcomp.goal_path.m"
{
#line 383 "mdbcomp.goal_path.m"
  {
#line 383 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));

#line 383 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 383 "mdbcomp.goal_path.m"
      {
#line 383 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__FirstStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 383 "mdbcomp.goal_path.m"
        *mdbcomp__goal_path__OtherSteps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 383 "mdbcomp.goal_path.m"
      }
#line 383 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 383 "mdbcomp.goal_path.m"
  }
#line 137 "mdbcomp.goal_path.m"
}

#line 131 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_get_last_2_p_0(
#line 131 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 131 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__LastStep_5)
#line 131 "mdbcomp.goal_path.m"
{
#line 373 "mdbcomp.goal_path.m"
  {
#line 373 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 373 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadStep_3;
#line 373 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TailSteps_4;

#line 373 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 373 "mdbcomp.goal_path.m"
      {
#line 373 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__HeadStep_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 373 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__TailSteps_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 374 "mdbcomp.goal_path.m"
        {
#line 374 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__goal_path_last_loop_3_p_0(mdbcomp__goal_path__HeadStep_3, mdbcomp__goal_path__TailSteps_4, mdbcomp__goal_path__LastStep_5);
        }
#line 374 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 373 "mdbcomp.goal_path.m"
      }
#line 373 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 373 "mdbcomp.goal_path.m"
  }
#line 131 "mdbcomp.goal_path.m"
}

#line 125 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__goal_path_remove_last_3_p_0(
#line 125 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 125 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__AllButLastGoalPath_6,
#line 125 "mdbcomp.goal_path.m"
  MR_Word * mdbcomp__goal_path__LastStep_7)
#line 125 "mdbcomp.goal_path.m"
{
#line 359 "mdbcomp.goal_path.m"
  {
#line 359 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded = ((MR_tag((MR_Word) mdbcomp__goal_path__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 359 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadStep_4;
#line 359 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__TailSteps_5;

#line 358 "mdbcomp.goal_path.m"
    if (mdbcomp__goal_path__succeeded)
#line 358 "mdbcomp.goal_path.m"
      {
#line 358 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__HeadStep_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 358 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__TailSteps_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 360 "mdbcomp.goal_path.m"
        {
#line 360 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__goal_path_remove_last_loop_4_p_0(mdbcomp__goal_path__HeadStep_4, mdbcomp__goal_path__TailSteps_5, mdbcomp__goal_path__AllButLastGoalPath_6, mdbcomp__goal_path__LastStep_7);
        }
#line 360 "mdbcomp.goal_path.m"
        mdbcomp__goal_path__succeeded = MR_TRUE;
#line 358 "mdbcomp.goal_path.m"
      }
#line 359 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 359 "mdbcomp.goal_path.m"
  }
#line 125 "mdbcomp.goal_path.m"
}

#line 119 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__rev_goal_path_add_at_end_2_f_0(
#line 119 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__GoalPath0_4,
#line 119 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__NewStep_5)
#line 119 "mdbcomp.goal_path.m"
{
#line 356 "mdbcomp.goal_path.m"
  {
#line 356 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 356 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__GoalPath_6;

#line 356 "mdbcomp.goal_path.m"
    {
#line 356 "mdbcomp.goal_path.m"
      mdbcomp__goal_path__GoalPath_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 356 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 0) = ((MR_Box) (mdbcomp__goal_path__GoalPath0_4));
#line 356 "mdbcomp.goal_path.m"
      MR_hl_field(MR_mktag(1), mdbcomp__goal_path__GoalPath_6, 1) = ((MR_Box) (mdbcomp__goal_path__NewStep_5));
#line 356 "mdbcomp.goal_path.m"
    }
#line 356 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__GoalPath_6;
#line 356 "mdbcomp.goal_path.m"
  }
#line 119 "mdbcomp.goal_path.m"
}

#line 114 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__goal_path_add_at_end_2_f_0(
#line 114 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1,
#line 114 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__NewStep_2)
#line 114 "mdbcomp.goal_path.m"
{
#line 350 "mdbcomp.goal_path.m"
  {
#line 350 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 350 "mdbcomp.goal_path.m"
    MR_Word mdbcomp__goal_path__HeadVar__3_3;

#line 350 "mdbcomp.goal_path.m"
    if ((mdbcomp__goal_path__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 350 "mdbcomp.goal_path.m"
      {
#line 350 "mdbcomp.goal_path.m"
        {
#line 350 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 350 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__goal_path__NewStep_2));
#line 350 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 1) = ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 350 "mdbcomp.goal_path.m"
        }
#line 350 "mdbcomp.goal_path.m"
      }
#line 350 "mdbcomp.goal_path.m"
    else
#line 352 "mdbcomp.goal_path.m"
      {
#line 352 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__OldStep_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 0)));
#line 352 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__GoalPath0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__1_1, (MR_Integer) 1)));
#line 352 "mdbcomp.goal_path.m"
        MR_Word mdbcomp__goal_path__GoalPath_9;

#line 353 "mdbcomp.goal_path.m"
        {
#line 353 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__GoalPath_9 = mdbcomp__goal_path__goal_path_add_at_end_2_f_0(mdbcomp__goal_path__GoalPath0_7, mdbcomp__goal_path__NewStep_2);
        }
#line 352 "mdbcomp.goal_path.m"
        {
#line 352 "mdbcomp.goal_path.m"
          mdbcomp__goal_path__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 352 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 0) = ((MR_Box) (mdbcomp__goal_path__OldStep_6));
#line 352 "mdbcomp.goal_path.m"
          MR_hl_field(MR_mktag(1), mdbcomp__goal_path__HeadVar__3_3, 1) = ((MR_Box) (mdbcomp__goal_path__GoalPath_9));
#line 352 "mdbcomp.goal_path.m"
        }
#line 352 "mdbcomp.goal_path.m"
      }
#line 350 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__HeadVar__3_3;
#line 350 "mdbcomp.goal_path.m"
  }
#line 114 "mdbcomp.goal_path.m"
}

#line 110 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__whole_body_goal_id_0_f_0(void)
#line 110 "mdbcomp.goal_path.m"
{
#line 348 "mdbcomp.goal_path.m"
  {
#line 348 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 348 "mdbcomp.goal_path.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) 0));
#line 348 "mdbcomp.goal_path.m"
  }
#line 110 "mdbcomp.goal_path.m"
}

#line 108 "mdbcomp.goal_path.m"
MR_Word MR_CALL 
mdbcomp__goal_path__goal_id_for_head_constraints_0_f_0(void)
#line 108 "mdbcomp.goal_path.m"
{
#line 343 "mdbcomp.goal_path.m"
  {
#line 343 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;

#line 343 "mdbcomp.goal_path.m"
    return (MR_Word) ((MR_Box) ((MR_Integer) -1));
#line 343 "mdbcomp.goal_path.m"
  }
#line 108 "mdbcomp.goal_path.m"
}

#line 65 "mdbcomp.goal_path.m"
MR_bool MR_CALL 
mdbcomp__goal_path__is_valid_goal_id_1_p_0(
#line 65 "mdbcomp.goal_path.m"
  MR_Word mdbcomp__goal_path__HeadVar__1_1)
#line 65 "mdbcomp.goal_path.m"
{
#line 340 "mdbcomp.goal_path.m"
  {
#line 340 "mdbcomp.goal_path.m"
    MR_bool mdbcomp__goal_path__succeeded;
#line 340 "mdbcomp.goal_path.m"
    MR_Integer mdbcomp__goal_path__GoalIdNum_2 = (MR_Integer) mdbcomp__goal_path__HeadVar__1_1;

#line 341 "mdbcomp.goal_path.m"
    mdbcomp__goal_path__succeeded = (mdbcomp__goal_path__GoalIdNum_2 >= (MR_Integer) 0);
#line 340 "mdbcomp.goal_path.m"
    return mdbcomp__goal_path__succeeded;
#line 340 "mdbcomp.goal_path.m"
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
